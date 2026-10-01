//// FUNCTION FUN_00550720 @ 00550720 ////

undefined4 * __thiscall FUN_00550720(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_005506c0((void *)((int)this + 0x20),(int)(param_1 + 8));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00550790 @ 00550790 ////

undefined4 * __thiscall FUN_00550790(void *this,undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_005506c0((void *)((int)this + 0x20),param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00550840 @ 00550840 ////

undefined4 *
FUN_00550840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb0151;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x78);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_00550720(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x1d) = param_5;
    *(undefined1 *)((int)puVar1 + 0x75) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_005508e0 @ 005508e0 ////

void __thiscall
FUN_005508e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cb0168;
  local_c = ExceptionList;
  if (0x2762760 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_00550840(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x74);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x74) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x1d] == '\0') {
LAB_005509db:
        *(undefined1 *)(*piVar4 + 0x74) = 1;
        *(undefined1 *)(piVar5 + 0x1d) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x74) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0054e780(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x74) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x74) = 0;
        FUN_0054e110(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x1d] == '\0') goto LAB_005509db;
      if (piVar6 == (int *)*piVar2) {
        FUN_0054e110(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x74) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x74) = 0;
      FUN_0054e780(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x74);
  } while( true );
}


//// FUNCTION FUN_00550a90 @ 00550a90 ////

void __thiscall FUN_00550a90(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x75) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00550af4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00550af9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00550af4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00550af9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x75) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_005508e0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_0054e220((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_005508e0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00550bb0 @ 00550bb0 ////

undefined4 * __thiscall FUN_00550bb0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_005508e0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_005508e0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_005508e0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0054e220((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x75) != '\0') {
          FUN_005508e0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_005508e0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0054e280((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00550d32;
      }
      if (*(char *)(param_2[2] + 0x75) != '\0') {
        FUN_005508e0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_005508e0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00550d32:
  puVar4 = (undefined4 *)FUN_00550a90(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00550d60 @ 00550d60 ////

int * __thiscall FUN_00550d60(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_c0;
  undefined4 local_bc [18];
  undefined4 local_74 [26];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0193;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_0054e8b0(this,param_1);
  if ((piVar1 == *(int **)((int)this + 4)) ||
     (uVar2 = FUN_00441060(param_1,piVar1 + 3), (char)uVar2 != '\0')) {
    puVar3 = FUN_00549aa0(local_bc);
    local_4 = 0;
    piVar4 = FUN_00550790(local_74,param_1,(int)puVar3);
    local_4._0_1_ = 1;
    piVar1 = FUN_00550bb0(this,&local_c0,piVar1,piVar4);
    piVar1 = (int *)*piVar1;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0054e660(local_74);
    local_4 = 0xffffffff;
    FUN_005499f0(local_bc);
  }
  ExceptionList = local_c;
  return piVar1 + 0xb;
}


//// FUNCTION FUN_00550e30 @ 00550e30 ////

float10 __thiscall FUN_00550e30(int param_1,undefined4 *param_2)

{
  void *this;
  byte bVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  float10 fVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  void **ppvVar15;
  void **ppvVar16;
  byte *local_dc;
  uint local_d8;
  uint local_d4;
  byte local_d0 [20];
  float local_bc;
  char *local_b8;
  int local_b4;
  uint local_b0;
  char local_ac [20];
  uint local_98;
  void *local_94;
  uint local_90;
  uint local_8c;
  byte *local_74 [2];
  uint local_6c;
  void *local_54 [2];
  uint local_4c;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0225;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_bc = (float)param_1;
  local_98 = FUN_00413450(param_2,":",0,1);
  if (local_98 == 0xffffffff) {
    pfVar3 = (float *)FUN_00515d20((void *)(param_1 + 0x58),param_2);
    ExceptionList = local_c;
    return (float10)*pfVar3;
  }
  FUN_00430770(param_2,local_74,0,local_98);
  local_dc = local_d0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  local_d0[0] = 0;
  local_d8 = 0;
  local_d4 = 0x14;
  _strncpy((char *)local_dc,"this",4);
  local_d8 = 4;
  local_dc[4] = 0;
  fVar2 = local_bc;
  pbVar9 = local_74[0];
  pbVar10 = local_dc;
  do {
    bVar1 = *pbVar9;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_00550f09:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00550f0e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_00550f09;
    pbVar9 = pbVar9 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00550f0e:
  if (0x14 < local_d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_dc);
  }
  if (iVar4 == 0) {
    if (*(void **)((int)local_bc + 0x74) != (void *)0x0) {
      FUN_005562f0(*(void **)((int)local_bc + 0x74),local_54,0);
      local_4._0_1_ = 1;
      FUN_00558de0(*(void **)((int)fVar2 + 0x74),&local_94);
      local_dc = local_d0;
      local_d0[0] = 0;
      local_d8 = 0;
      local_d4 = 0x14;
      _strncpy((char *)local_dc,"",0);
      local_d8 = 0;
      *local_dc = 0;
      local_4._0_1_ = 3;
      FUN_00558a50(*(void **)((int)fVar2 + 0x74),&local_dc,(undefined4 *)0x1);
      if (0x14 < local_d4) {
                    /* WARNING: Subroutine does not return */
        _free(local_dc);
      }
      FUN_00430770(param_2,local_2c,local_98 + 1,param_2[1]);
      local_b8 = local_ac;
      local_ac[0] = '\0';
      local_b4 = 0;
      local_b0 = 0x14;
      _strncpy(local_b8,"/",1);
      local_b4 = 1;
      local_b8[1] = '\0';
      local_dc = local_d0;
      local_d0[0] = 0;
      local_d8 = 0;
      local_d4 = 0x14;
      _strncpy((char *)local_dc,".",1);
      local_d8 = 1;
      local_dc[1] = 0;
      local_4._0_1_ = 6;
      FUN_00569860((int *)local_2c,&local_dc,&local_b8);
      if (0x14 < local_d4) {
                    /* WARNING: Subroutine does not return */
        _free(local_dc);
      }
      local_4 = CONCAT31(local_4._1_3_,4);
      if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
        _free(local_b8);
      }
      fVar12 = FUN_00558610(*(void **)((int)fVar2 + 0x74),local_2c,0.0);
      local_bc = (float)fVar12;
      FUN_00558a50(*(void **)((int)fVar2 + 0x74),local_54,(undefined4 *)0x1);
      FUN_005584e0(*(void **)((int)fVar2 + 0x74),&local_dc,&local_94);
      if (0x14 < local_d4) {
                    /* WARNING: Subroutine does not return */
        _free(local_dc);
      }
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_94);
      }
      if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_54[0]);
      }
      if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
        _free(local_74[0]);
      }
      goto LAB_00551131;
    }
    goto joined_r0x00551588;
  }
  local_dc = local_d0;
  local_d0[0] = 0;
  local_d8 = 0;
  local_d4 = 0x14;
  _strncpy((char *)local_dc,"csv",3);
  ppbVar14 = &local_dc;
  ppbVar13 = local_74;
  local_d8 = 3;
  local_dc[3] = 0;
  uVar5 = FUN_00401ec0(ppbVar13,ppbVar14);
  if (0x14 < local_d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_dc);
  }
  if ((char)uVar5 == '\0') goto joined_r0x00551588;
  FUN_00430770(param_2,&local_94,local_98 + 1,param_2[1]);
  local_4._0_1_ = 7;
  uVar6 = FUN_00413450(&local_94,".",0,1);
  if (uVar6 == 0xffffffff) {
LAB_005513f9:
    if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
joined_r0x00551588:
    if (local_6c < 0x15) {
      ExceptionList = local_c;
      return (float10)0.0;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_74[0]);
  }
  FUN_00430770(&local_94,&local_dc,uVar6 + 1,local_90);
  local_4._0_1_ = 8;
  puVar7 = FUN_00430770(&local_94,&local_b8,0,uVar6);
  puVar7 = FUN_004312e0(local_54,puVar7,".csv");
  FUN_004015d0(&local_94,(char *)*puVar7,puVar7[1]);
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0]);
  }
  if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  uVar6 = FUN_004155b0(&local_dc,".",0);
  if (uVar6 == 0xffffffff) {
    if (0x14 < local_d4) {
                    /* WARNING: Subroutine does not return */
      _free(local_dc);
    }
    if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
    goto joined_r0x00551588;
  }
  FUN_00430770(&local_dc,local_2c,uVar6 + 1,local_d8);
  local_4._0_1_ = 9;
  puVar7 = FUN_00430770(&local_dc,local_54,0,uVar6);
  FUN_00401e30(&local_dc,puVar7);
  fVar2 = local_bc;
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0]);
  }
  this = (void *)((int)local_bc + 100);
  piVar8 = FUN_00550d60(this,&local_94);
  bVar11 = FUN_00547bc0((int)piVar8);
  if (bVar11) {
    local_b8 = local_ac;
    local_ac[0] = '\0';
    local_b4 = 0;
    local_b0 = 0x14;
    FUN_00401e30(&local_b8,(undefined4 *)((int)fVar2 + 0x38));
    if (local_b8[local_b4 + -1] != '/') {
      FUN_00430a20(&local_b8,"/");
    }
    FUN_0040d050(&local_b8,&local_94);
    FUN_0043d740(local_54);
    local_4._0_1_ = 0xb;
    bVar11 = FUN_00553a50(local_54,&local_b8);
    if (!bVar11) {
      local_4._0_1_ = 10;
      FUN_00552ce0(local_54);
      if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
        _free(local_b8);
      }
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_d4) {
                    /* WARNING: Subroutine does not return */
        _free(local_dc);
      }
      goto LAB_005513f9;
    }
    ppvVar16 = local_54;
    piVar8 = FUN_00550d60(this,&local_94);
    FUN_005494c0(piVar8,ppvVar16);
    local_4._0_1_ = 10;
    FUN_00552ce0(local_54);
    local_4._0_1_ = 9;
    if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
      _free(local_b8);
    }
  }
  fVar12 = FUN_00550e30((int)fVar2,&local_dc);
  puVar7 = FUN_00569c30(local_54,(float)fVar12);
  ppbVar14 = &local_dc;
  local_4._0_1_ = 0xc;
  piVar8 = FUN_00550d60(this,&local_94);
  FUN_005497a0(piVar8,ppbVar14,puVar7);
  local_4._0_1_ = 9;
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0]);
  }
  ppvVar16 = local_2c;
  ppvVar15 = local_54;
  piVar8 = FUN_00550d60(this,&local_94);
  puVar7 = FUN_00549830(piVar8,ppvVar15,ppvVar16);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  fVar12 = FUN_00567d60(puVar7);
  local_bc = (float)fVar12;
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_dc);
  }
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74[0]);
  }
LAB_00551131:
  ExceptionList = local_c;
  return (float10)local_bc;
}


//// FUNCTION FUN_005515c0 @ 005515c0 ////

float10 __thiscall FUN_005515c0(int param_1,char *param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  char *in_stack_ffffff30;
  char *pcVar14;
  uint in_stack_ffffff34;
  uint uVar15;
  uint in_stack_ffffff38;
  uint uVar16;
  uint local_a0;
  undefined1 *local_94;
  undefined1 *local_90;
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
  
  puStack_8 = &LAB_00cb0266;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    uVar5 = FUN_0054ec60(&param_2);
  } while ((char)uVar5 != '\0');
  iVar6 = FUN_00448220(&param_2,"()!*/%<>=&|",0,0xb);
  if ((iVar6 == -1) && (iVar6 = FUN_00448220(&param_2,&DAT_00d240f0,1,2), iVar6 == -1)) {
    iVar6 = FUN_0054e6b0(&param_2,"1234567890.+-",0,0xd);
    if (iVar6 != -1) {
      fVar10 = FUN_00550e30(param_1,&param_2);
      puVar7 = FUN_00569c30(local_8c,(float)fVar10);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00569860((int *)(param_1 + 0x78),&param_2,puVar7);
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      if (param_4 < 0x15) {
        ExceptionList = local_c;
        return (float10)(float)fVar10;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    dVar13 = _atof(param_2);
    local_94 = (undefined1 *)(float)dVar13;
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    goto LAB_00551b92;
  }
  bVar3 = true;
  iVar6 = FUN_0054e360((int *)&param_2,&local_94);
  if (iVar6 < 0) {
    local_94 = &stack0xffffff30;
    pcVar14 = &stack0xffffff3c;
    uVar15 = 0;
    uVar16 = 0x14;
    FUN_004015d0(&stack0xffffff30,param_2,param_3);
    fVar10 = FUN_0054f490(param_1,pcVar14,uVar15,uVar16);
    local_94 = (undefined1 *)(float)fVar10;
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    goto LAB_00551b92;
  }
  uVar15 = FUN_0054e4e0((int *)&param_2,iVar6);
  puVar4 = local_94;
  local_90 = local_94 + iVar6;
  local_94 = (undefined1 *)FUN_0054e590();
  FUN_00430770(&param_2,(undefined4 *)&stack0xffffff30,uVar15,iVar6 - uVar15);
  fVar10 = FUN_005515c0(param_1,in_stack_ffffff30,in_stack_ffffff34,in_stack_ffffff38);
  fVar1 = (float)fVar10;
  FUN_00430770(&param_2,(undefined4 *)&stack0xffffff30,(uint)local_90,
               (uint)(local_94 + (-iVar6 - (int)puVar4)));
  fVar10 = FUN_005515c0(param_1,in_stack_ffffff30,in_stack_ffffff34,in_stack_ffffff38);
  fVar2 = (float)fVar10;
  switch(param_2[iVar6]) {
  case '!':
    if (param_2[iVar6 + 1] == '=') {
      local_a0 = (uint)(fVar1 != fVar2);
      fVar2 = (float)local_a0;
    }
    else {
      bVar3 = false;
      local_a0 = (uint)(fVar2 == 0.0);
      fVar2 = (float)local_a0;
    }
    break;
  default:
    goto switchD_00551836_caseD_22;
  case '%':
    uVar11 = FUN_00acd42c();
    uVar12 = FUN_00acd42c();
    if ((int)uVar11 != 0) {
      fVar2 = (float)(int)((longlong)
                           ((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar12 & 0xffffffff) %
                          (longlong)(int)uVar11);
      break;
    }
    *(undefined4 *)(param_1 + 0x70) = 3;
    goto joined_r0x005518f7;
  case '&':
    if ((fVar1 == 0.0) || (local_a0 = 1, fVar2 == 0.0)) {
      local_a0 = 0;
    }
    fVar2 = (float)local_a0;
    break;
  case '*':
    fVar2 = fVar2 * fVar1;
    break;
  case '+':
    fVar2 = fVar2 + fVar1;
    break;
  case '-':
    bVar3 = false;
    fVar2 = fVar1 - fVar2;
    break;
  case '/':
    if (fVar2 != 0.0) {
      fVar2 = fVar1 / fVar2;
      break;
    }
    goto switchD_00551836_caseD_22;
  case '<':
    if (param_2[iVar6 + 1] == '=') {
      local_a0 = (uint)(fVar1 < fVar2 != (fVar1 == fVar2));
      fVar2 = (float)local_a0;
    }
    else {
      local_a0 = (uint)(fVar1 < fVar2);
      fVar2 = (float)local_a0;
    }
    break;
  case '=':
    local_a0 = (uint)(fVar1 == fVar2);
    fVar2 = (float)local_a0;
    break;
  case '>':
    if (param_2[iVar6 + 1] == '=') {
      local_a0 = (uint)(fVar2 <= fVar1);
      fVar2 = (float)local_a0;
    }
    else {
      local_a0 = (uint)(fVar2 < fVar1);
      fVar2 = (float)local_a0;
    }
    break;
  case '|':
    if ((fVar1 != 0.0) || (local_a0 = 0, fVar2 != 0.0)) {
      local_a0 = 1;
    }
    fVar2 = (float)local_a0;
  }
  if (((int)local_94 < (int)(local_90 + 1)) || ((bVar3 && (iVar6 <= (int)uVar15)))) {
switchD_00551836_caseD_22:
    *(undefined4 *)(param_1 + 0x70) = 3;
joined_r0x005518f7:
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    fVar10 = (float10)0.0;
  }
  else {
    puVar7 = FUN_00430770(&param_2,local_2c,(uint)local_94,param_3);
    local_4._0_1_ = 2;
    puVar8 = FUN_00569c30(local_4c,fVar2);
    puVar9 = FUN_00430770(&param_2,local_6c,0,uVar15);
    puVar8 = FUN_0047aee0(local_8c,puVar9,puVar8);
    local_94 = &stack0xffffff30;
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_0047aee0((undefined4 *)&stack0xffffff30,puVar8,puVar7);
    fVar10 = FUN_005515c0(param_1,in_stack_ffffff30,in_stack_ffffff34,in_stack_ffffff38);
    local_94 = (undefined1 *)(float)fVar10;
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
LAB_00551b92:
    fVar10 = (float10)(float)local_94;
  }
  ExceptionList = local_c;
  return fVar10;
}


//// FUNCTION FUN_00551d40 @ 00551d40 ////

void FUN_00551d40(void)

{
  return;
}


//// FUNCTION FUN_00551d50 @ 00551d50 ////

void __fastcall FUN_00551d50(int param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(*(int *)(param_1 + 0x2c) + 1);
  *(void **)(param_1 + 0x30) = pvVar1;
  *(undefined1 *)((int)pvVar1 + *(int *)(param_1 + 0x2c)) = 0;
  return;
}


//// FUNCTION FUN_00551e10 @ 00551e10 ////

void __cdecl FUN_00551e10(int param_1)

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


//// FUNCTION FUN_00551e30 @ 00551e30 ////

void __cdecl FUN_00551e30(int *param_1)

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


//// FUNCTION FUN_00551e70 @ 00551e70 ////

void __thiscall FUN_00551e70(void *this,int *param_1)

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


//// FUNCTION FUN_00551f60 @ 00551f60 ////

void __fastcall FUN_00551f60(int *param_1)

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


//// FUNCTION FUN_00552000 @ 00552000 ////

void __fastcall FUN_00552000(int *param_1)

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


//// FUNCTION FUN_005520d0 @ 005520d0 ////

void __thiscall FUN_005520d0(void *this,uint param_1)

{
  char *_Dest;
  uint _Size;
  
  if (*(uint *)((int)this + 8) <= param_1) {
    _Size = param_1 + 0x20 & 0xffffffe0;
    _Dest = _malloc(_Size);
    _strncpy(_Dest,*(char **)this,*(size_t *)((int)this + 4));
    if (0x14 < *(uint *)((int)this + 8)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    *(uint *)((int)this + 8) = _Size;
    *(char **)this = _Dest;
    _Dest[*(int *)((int)this + 4)] = '\0';
  }
  return;
}


//// FUNCTION FUN_00552140 @ 00552140 ////

void __fastcall FUN_00552140(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00552160 @ 00552160 ////

void __thiscall FUN_00552160(void *this,int param_1)

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


//// FUNCTION FUN_005521e0 @ 005521e0 ////

int * __fastcall FUN_005521e0(int *param_1)

{
  FUN_00551f60(param_1);
  return param_1;
}


//// FUNCTION FUN_00552210 @ 00552210 ////

int * __fastcall FUN_00552210(int *param_1)

{
  FUN_00552000(param_1);
  return param_1;
}


//// FUNCTION FUN_00552270 @ 00552270 ////

void __fastcall FUN_00552270(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_005522e0 @ 005522e0 ////

int * __fastcall FUN_005522e0(int *param_1)

{
  FUN_00551f60(param_1);
  return param_1;
}


//// FUNCTION FUN_00552310 @ 00552310 ////

undefined4 * __thiscall FUN_00552310(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  *(undefined4 *)((int)this + 0x24) = param_2[1];
  *(undefined4 *)((int)this + 0x28) = param_2[2];
  *(undefined4 *)((int)this + 0x2c) = param_2[3];
  return this;
}


//// FUNCTION FUN_00552360 @ 00552360 ////

int * __fastcall FUN_00552360(int *param_1)

{
  FUN_00552000(param_1);
  return param_1;
}


//// FUNCTION FUN_005523a0 @ 005523a0 ////

undefined4 * __thiscall FUN_005523a0(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  return this;
}


//// FUNCTION FUN_005523f0 @ 005523f0 ////

void * __thiscall FUN_005523f0(void *this,byte param_1)

{
  FUN_00552270((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00552410 @ 00552410 ////

undefined4 * __thiscall FUN_00552410(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb02a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009b38a0(this);
  piVar1 = (int *)((int)this + 0x58);
  *(undefined ***)this = &PTR_FUN_00d24104;
  *(undefined4 *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(int **)((int)this + 100) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1a200;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x24) = 1;
  local_4 = 1;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x6c) = param_2;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005524a0 @ 005524a0 ////

undefined4 * __thiscall FUN_005524a0(void *this,byte param_1)

{
  FUN_005524c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005524c0 @ 005524c0 ////

void __fastcall FUN_005524c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d24104;
  param_1[0x16] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x18] = param_1[0x17];
  }
  if (param_1[0x17] != 0) {
    *(undefined4 *)(param_1[0x17] + 4) = param_1[0x18];
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x18] = param_1[0x17];
  }
  if (param_1[0x17] != 0) {
    *(undefined4 *)(param_1[0x17] + 4) = param_1[0x18];
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_009b32b0(param_1);
  return;
}


//// FUNCTION FUN_00552520 @ 00552520 ////

uint __thiscall FUN_00552520(void *this,void *param_1)

{
  char *pcVar1;
  void *this_00;
  char cVar2;
  uint in_EAX;
  undefined3 uVar3;
  undefined3 extraout_var;
  char *pcVar4;
  uint uVar5;
  
  this_00 = param_1;
  pcVar4 = *(char **)((int)this + 0x24);
  if (((pcVar4 == (char *)0x0) || (in_EAX = *(uint *)((int)this + 0x20), in_EAX == 0)) ||
     (*pcVar4 == '\0')) {
    return in_EAX & 0xffffff00;
  }
  uVar5 = 0;
  cVar2 = *pcVar4;
  while ((cVar2 != '\0' && (cVar2 != '\n'))) {
    if (cVar2 != '\r') {
      uVar5 = uVar5 + 1;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  FUN_004015d0(param_1,"",0);
  FUN_005520d0(this_00,uVar5);
  cVar2 = **(char **)((int)this + 0x24);
  uVar3 = (undefined3)((uint)*(char **)((int)this + 0x24) >> 8);
  if (cVar2 != '\0') {
    while (cVar2 != '\n') {
      if (cVar2 != '\r') {
        param_1 = (void *)CONCAT31(param_1._1_3_,cVar2);
        FUN_004073f0(this_00,(char *)&param_1,1);
        uVar3 = extraout_var;
      }
      pcVar4 = (char *)(*(int *)((int)this + 0x24) + 1);
      *(char **)((int)this + 0x24) = pcVar4;
      cVar2 = *pcVar4;
      if (cVar2 == '\0') {
        return CONCAT31(uVar3,1);
      }
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  return CONCAT31(uVar3,1);
}


//// FUNCTION FUN_005525c0 @ 005525c0 ////

undefined4 * __thiscall FUN_005525c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *local_84;
  uint local_80;
  uint local_7c;
  char local_78 [20];
  undefined4 local_64;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  local_84 = local_78;
  local_64 = 0;
  local_78[0] = '\0';
  local_80 = 0;
  local_7c = 0x14;
  iVar1 = FUN_004302c0(this,&DAT_00d2410c,0xffffffff,2);
  if (iVar1 == -1) {
    FUN_004015d0(&local_84,(char *)*param_2,param_2[1]);
  }
  else {
    uVar2 = FUN_0054e6b0(param_2,&DAT_00d24090,0,2);
    if (uVar2 == 0xffffffff) {
      FUN_004015d0(&local_84,(char *)*param_2,param_2[1]);
    }
    else {
      puVar3 = FUN_00430770(param_2,local_20,uVar2,param_2[1]);
      puVar4 = FUN_00430770(this,local_40,0,iVar1 + 1);
      puVar3 = FUN_0047aee0(local_60,puVar4,puVar3);
      FUN_004015d0(&local_84,(char *)*puVar3,puVar3[1]);
      if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
        _free(local_60[0]);
      }
      if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
        _free(local_40[0]);
      }
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_84,local_80);
  if (0x14 < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_84);
  }
  return param_1;
}


//// FUNCTION FUN_00552720 @ 00552720 ////

undefined4 * __thiscall FUN_00552720(void *this,undefined4 *param_1)

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
LAB_00552764:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00552769;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00552764;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00552769:
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


//// FUNCTION FUN_005527a0 @ 005527a0 ////

void FUN_005527a0(void)

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


//// FUNCTION FUN_00552830 @ 00552830 ////

uint __thiscall FUN_00552830(void *this,void *param_1)

{
  char cVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0x24) != 0) && (*(int *)((int)this + 0x20) != 0)) {
    while( true ) {
      cVar1 = **(char **)((int)this + 0x24);
      if ((cVar1 != ' ') && (cVar1 != '\t')) break;
      *(char **)((int)this + 0x24) = *(char **)((int)this + 0x24) + 1;
    }
    uVar2 = FUN_00552520(this,param_1);
    return uVar2;
  }
  return 0;
}


//// FUNCTION FUN_00552890 @ 00552890 ////

void __fastcall FUN_00552890(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005527a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_005528c0 @ 005528c0 ////

undefined4 *
FUN_005528c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_005523a0(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0xf) = param_5;
    *(undefined1 *)((int)puVar1 + 0x3d) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_00552970 @ 00552970 ////

int __fastcall FUN_00552970(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005527a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005529a0 @ 005529a0 ////

void FUN_005529a0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    FUN_005529a0(*(void **)((int)param_1 + 8));
    FUN_00552270((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_005529e0 @ 005529e0 ////

undefined4 __cdecl FUN_005529e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_00552720(&DAT_0104c98c,param_1);
  local_4 = DAT_0104c990;
  if (local_8 != DAT_0104c990) {
    uVar2 = FUN_00441060(param_1,local_8 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &local_8;
      goto LAB_00552a23;
    }
  }
  ppuVar3 = &local_4;
LAB_00552a23:
  puVar1 = *ppuVar3;
  if (puVar1 == local_4) {
    return 0;
  }
  puVar1[0xc] = puVar1[0xc] + 1;
  DAT_0104c984 = DAT_0104c984 + 1;
  puVar1[0xe] = DAT_0104c984;
  return puVar1[0xb];
}


//// FUNCTION FUN_00552a50 @ 00552a50 ////

void __cdecl FUN_00552a50(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_00552720(&DAT_0104c98c,param_1);
  local_4 = DAT_0104c990;
  if (local_8 != DAT_0104c990) {
    uVar2 = FUN_00441060(param_1,local_8 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &local_8;
      goto LAB_00552a93;
    }
  }
  ppuVar3 = &local_4;
LAB_00552a93:
  if (*ppuVar3 != local_4) {
    piVar1 = *ppuVar3 + 0xc;
    *piVar1 = *piVar1 + -1;
  }
  return;
}


//// FUNCTION FUN_00552ab0 @ 00552ab0 ////

uint __cdecl FUN_00552ab0(undefined4 *param_1,undefined *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *local_4c;
  uint local_48;
  uint local_44;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb02d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0055bbe0(&local_4c,param_1);
  local_4 = 0;
  if (local_48 == 0) {
    uVar2 = 0;
    if ((param_3 != 0) && (uVar2 = 0, param_2 != (undefined *)0x0)) {
      uVar2 = (*(code *)param_2)(param_3);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  iVar3 = FUN_005529e0(&local_4c);
  if (iVar3 != 0) {
    FUN_00552a50(&local_4c);
    pvVar4 = operator_new(0x70);
    local_4._0_1_ = 1;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00552410(pvVar4,param_2,param_3);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    uVar6 = AsyncLoadJob_ExecuteSync(piVar5);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar7 = local_4c;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,local_4c,(int)pcVar7 - (int)(local_4c + 1));
  local_4._0_1_ = 2;
  uVar6 = FUN_009d3660(&local_2c,(uint *)0x0);
  local_4._0_1_ = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar6 != '\0') {
    pvVar4 = operator_new(0x70);
    local_4._0_1_ = 3;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00552410(pvVar4,param_2,param_3);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004015d0(piVar5 + 1,local_4c,local_48);
    uVar2 = FUN_009d3720(piVar5 + 1);
    piVar5[0xb] = uVar2;
    pvVar4 = operator_new(uVar2 + 1);
    piVar5[0xc] = (int)pvVar4;
    *(undefined1 *)((int)pvVar4 + piVar5[0xb]) = 0;
    uVar6 = AsyncLoadJob_ExecuteSync(piVar5);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  uVar2 = local_24;
  if ((param_3 != 0) && (uVar2 = 0, param_2 != (undefined *)0x0)) {
    uVar2 = (*(code *)param_2)(param_3);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00552ce0 @ 00552ce0 ////

void __fastcall FUN_00552ce0(undefined4 *param_1)

{
  if (param_1[8] != 0) {
    FUN_00552a50(param_1);
  }
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00552d10 @ 00552d10 ////

void __fastcall FUN_00552d10(int param_1)

{
  FUN_005529a0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00552d40 @ 00552d40 ////

void FUN_00552d40(void)

{
  if ((int *)*DAT_0104c990 != DAT_0104c990) {
                    /* WARNING: Subroutine does not return */
    _free((void *)((int *)*DAT_0104c990)[0xb]);
  }
  DAT_0104c988 = 0;
  FUN_005529a0((void *)DAT_0104c990[1]);
  DAT_0104c990[1] = (int)DAT_0104c990;
  DAT_0104c994 = 0;
  *DAT_0104c990 = (int)DAT_0104c990;
  DAT_0104c990[2] = (int)DAT_0104c990;
  return;
}


//// FUNCTION FUN_00552dc0 @ 00552dc0 ////

void __thiscall FUN_00552dc0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  _Memory = param_2;
  uStack_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb02e8;
  *unaff_FS_OFFSET = &uStack_c;
  if (*(char *)((int)param_2 + 0x3d) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00405d50(local_50,(undefined4 *)"invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddd664);
  }
  FUN_00551f60((int *)&param_2);
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
      goto LAB_00552f31;
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
      piVar2 = (int *)FUN_00551e30(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x3d) == '\0') {
      uVar3 = FUN_00551e10((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00552f31:
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
            FUN_00552160(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x3d) == '\0') {
            if ((*(char *)(*piVar4 + 0x3c) != '\x01') || (*(char *)(piVar4[2] + 0x3c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x3c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x3c) = 1;
                *(undefined1 *)(piVar4 + 0xf) = 0;
                FUN_00551e70(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xf) = (char)piVar5[0xf];
              *(undefined1 *)(piVar5 + 0xf) = 1;
              *(undefined1 *)(piVar4[2] + 0x3c) = 1;
              FUN_00552160(this,(int)piVar5);
              break;
            }
LAB_00552ff4:
            *(undefined1 *)(piVar4 + 0xf) = 0;
          }
        }
        else {
          if ((char)piVar4[0xf] == '\0') {
            *(undefined1 *)(piVar4 + 0xf) = 1;
            *(undefined1 *)(piVar5 + 0xf) = 0;
            FUN_00551e70(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x3d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x3c) == '\x01') && (*(char *)(*piVar4 + 0x3c) == '\x01'))
            goto LAB_00552ff4;
            if (*(char *)(*piVar4 + 0x3c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x3c) = 1;
              *(undefined1 *)(piVar4 + 0xf) = 0;
              FUN_00552160(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xf) = (char)piVar5[0xf];
            *(undefined1 *)(piVar5 + 0xf) = 1;
            *(undefined1 *)(*piVar4 + 0x3c) = 1;
            FUN_00551e70(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xf) = 1;
  }
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_00553090 @ 00553090 ////

void __thiscall FUN_00553090(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005529a0((void *)piVar6[1]);
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
    FUN_00552dc0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00553150 @ 00553150 ////

void __thiscall
FUN_00553150(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cb0308;
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
  piVar3 = FUN_005528c0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0055324b:
        *(undefined1 *)(*piVar4 + 0x3c) = 1;
        *(undefined1 *)(piVar5 + 0xf) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x3c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00552160(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x3c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x3c) = 0;
        FUN_00551e70(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xf] == '\0') goto LAB_0055324b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00551e70(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x3c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x3c) = 0;
      FUN_00552160(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x3c);
  } while( true );
}


//// FUNCTION FUN_00553310 @ 00553310 ////

void __cdecl FUN_00553310(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_00552720(&DAT_0104c98c,param_1);
  puVar2 = DAT_0104c990;
  if (local_8 != DAT_0104c990) {
    uVar3 = FUN_00441060(param_1,local_8 + 3);
    if ((char)uVar3 == '\0') {
      ppuVar4 = &local_8;
      goto LAB_00553353;
    }
  }
  local_4 = puVar2;
  ppuVar4 = &local_4;
LAB_00553353:
  puVar1 = *ppuVar4;
  if (puVar1 != puVar2) {
    DAT_0104c988 = DAT_0104c988 - puVar1[0xd];
                    /* WARNING: Subroutine does not return */
    _free((void *)puVar1[0xb]);
  }
  return;
}


//// FUNCTION FUN_005533c0 @ 005533c0 ////

void __thiscall FUN_005533c0(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00553424:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00553429;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00553424;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00553429:
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
      puVar5 = (undefined4 *)FUN_00553150(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00552000((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00553150(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00553510 @ 00553510 ////

undefined4 * __thiscall FUN_00553510(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00553150(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00553150(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00553150(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00552000((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x3d) != '\0') {
          FUN_00553150(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00553150(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00551f60((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00553692;
      }
      if (*(char *)(param_2[2] + 0x3d) != '\0') {
        FUN_00553150(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00553150(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00553692:
  puVar4 = (undefined4 *)FUN_005533c0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_005536c0 @ 005536c0 ////

void __fastcall FUN_005536c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00553090(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005536f0 @ 005536f0 ////

int __fastcall FUN_005536f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005527a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00553720 @ 00553720 ////

int * __thiscall FUN_00553720(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined1 local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00552720(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    uVar3 = FUN_00441060(puVar1,piVar2 + 3);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return piVar2 + 0xb;
    }
  }
  local_3c = local_30;
  local_30[0] = 0;
  local_38 = 0;
  local_34 = 0x14;
  FUN_004015d0(&local_3c,(char *)*puVar1,puVar1[1]);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  piVar2 = FUN_00553510(this,&param_1,piVar2,(int *)&local_3c);
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00553800 @ 00553800 ////

void __cdecl FUN_00553800(void *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  int iVar4;
  int *piVar5;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_00552720(&DAT_0104c98c,param_3);
  puVar1 = DAT_0104c990;
  if (local_8 != DAT_0104c990) {
    uVar2 = FUN_00441060(param_3,local_8 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &local_8;
      goto LAB_00553843;
    }
  }
  local_4 = puVar1;
  ppuVar3 = &local_4;
LAB_00553843:
  if (*ppuVar3 != puVar1) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  DAT_0104c988 = DAT_0104c988 + param_2;
  iVar4 = DAT_0104c984 + 1;
  DAT_0104c984 = iVar4;
  piVar5 = FUN_00553720(&DAT_0104c98c,param_3);
  *piVar5 = (int)param_1;
  piVar5[1] = 0;
  piVar5[2] = param_2;
  piVar5[3] = iVar4;
  return;
}


//// FUNCTION FUN_005538b0 @ 005538b0 ////

undefined4 __fastcall FUN_005538b0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    FUN_00553800(*(void **)(param_1 + 0x30),*(int *)(param_1 + 0x2c),(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if ((iVar1 != 0) && (*(code **)(param_1 + 0x54) != (code *)0x0)) {
    iVar1 = (**(code **)(param_1 + 0x54))(iVar1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_005538f0 @ 005538f0 ////

int __cdecl FUN_005538f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *local_c;
  int local_8;
  
  local_8 = FUN_005529e0(param_1);
  piVar2 = DAT_0104c990;
  if (local_8 == 0) {
    if (0x32000 < DAT_0104c988) {
      iVar5 = DAT_0104c984 - (DAT_0104c994 >> 1);
      piVar3 = (int *)*DAT_0104c990;
      while (piVar1 = piVar3, piVar1 != piVar2) {
        local_c = piVar1;
        FUN_00551f60((int *)&local_c);
        piVar3 = local_c;
        if ((piVar1[0xc] == 0) && (piVar1[0xe] < iVar5)) {
          DAT_0104c988 = DAT_0104c988 - piVar1[0xd];
                    /* WARNING: Subroutine does not return */
          _free((void *)piVar1[0xb]);
        }
      }
    }
    uVar4 = FUN_009d3720(param_1);
    if (uVar4 != 0) {
      iVar5 = param_1[1];
      local_c = (int *)0x0;
      if (-1 < iVar5) {
        do {
          if ((*(char *)(*param_1 + iVar5) == '\\') || (*(char *)(*param_1 + iVar5) == '/')) break;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      iVar5 = _strncmp((char *)(*param_1 + 1 + iVar5),"p_cre_",6);
      if ((iVar5 != 0) || (uVar4 = FUN_009d3de0(param_1,&local_c,'\x01'), (int)uVar4 < 1)) {
        local_c = operator_new(uVar4 + 1);
        FUN_009d3ca0(param_1,local_c,uVar4,(undefined1 *)0x0);
        *(undefined1 *)((int)local_c + uVar4) = 0;
      }
      FUN_00553800(local_c,uVar4,param_1);
      iVar5 = FUN_005529e0(param_1);
      return iVar5;
    }
  }
  return local_8;
}


//// FUNCTION FUN_00553a50 @ 00553a50 ////

bool __thiscall FUN_00553a50(void *this,undefined4 *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x20) != 0) {
    FUN_00552a50(this);
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  iVar1 = FUN_005538f0(this);
  *(int *)((int)this + 0x24) = iVar1;
  *(int *)((int)this + 0x20) = iVar1;
  return iVar1 != 0;
}


//// FUNCTION FUN_00553aa0 @ 00553aa0 ////

undefined4 __fastcall FUN_00553aa0(int param_1)

{
  if (*(FILE **)(param_1 + 0x28) != (FILE *)0x0) {
    FUN_00a100d0(*(FILE **)(param_1 + 0x28));
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x20));
  }
  return 1;
}


//// FUNCTION FUN_00553ad0 @ 00553ad0 ////

undefined4 __thiscall FUN_00553ad0(void *this,void *param_1,size_t param_2)

{
  size_t sVar1;
  
  if (*(FILE **)((int)this + 0x28) != (FILE *)0x0) {
    sVar1 = FUN_00a10110(param_1,param_2,1,*(FILE **)((int)this + 0x28));
    return CONCAT31((int3)(sVar1 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_00553b00 @ 00553b00 ////

void __fastcall FUN_00553b00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb0348;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((FILE *)param_1[10] != (FILE *)0x0) {
    ExceptionList = &local_c;
    FUN_00a100d0((FILE *)param_1[10]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00553b70 @ 00553b70 ////

undefined4 __thiscall FUN_00553b70(void *this,undefined4 *param_1,char *param_2)

{
  FILE *pFVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  
  pFVar1 = FUN_00a102d0((wchar_t *)*param_1,param_2);
  *(FILE **)((int)this + 0x28) = pFVar1;
  if (pFVar1 != (FILE *)0x0) {
    uVar2 = FUN_00a10170(pFVar1);
    iVar4 = 0;
    if (uVar2 != 0) {
      pvVar3 = operator_new((uVar2 & 0xfffffffe) + 2);
      *(void **)((int)this + 0x20) = pvVar3;
      FUN_00a100f0(pvVar3,uVar2,1,*(FILE **)((int)this + 0x28));
      iVar4 = *(int *)((int)this + 0x20);
      *(undefined2 *)((uVar2 & 0xfffffffe) + iVar4) = 0;
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x20);
    }
    if (*param_2 == 'r') {
      iVar4 = FUN_00a100d0(*(FILE **)((int)this + 0x28));
    }
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_00553c00 @ 00553c00 ////

int __thiscall FUN_00553c00(void *this,short *param_1,uint param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  if (param_2 < *(uint *)((int)this + 4)) {
    iVar1 = *(int *)this;
    for (psVar2 = (short *)(iVar1 + param_2 * 2);
        psVar2 < (short *)(iVar1 + *(uint *)((int)this + 4) * 2); psVar2 = psVar2 + 1) {
      if (param_3 == 0) {
LAB_00553c3b:
        return (int)psVar2 - iVar1 >> 1;
      }
      psVar3 = param_1;
      iVar4 = param_3;
      while (*psVar3 != *psVar2) {
        psVar3 = psVar3 + 1;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_00553c3b;
      }
    }
  }
  return -1;
}


//// FUNCTION FUN_00553c60 @ 00553c60 ////

undefined4 * __thiscall FUN_00553c60(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)this,*(uint *)((int)this + 4));
  return param_1;
}


//// FUNCTION FUN_00553cf0 @ 00553cf0 ////

uint __thiscall FUN_00553cf0(void *this,void *param_1)

{
  short sVar1;
  void *this_00;
  uint uVar2;
  short *psVar3;
  
  psVar3 = *(short **)((int)this + 0x24);
  if (((psVar3 == (short *)0x0) || (*(int *)((int)this + 0x20) == 0)) || (*psVar3 == 0)) {
    return (uint)psVar3 & 0xffffff00;
  }
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  this_00 = param_1;
  FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar2);
  param_1 = (void *)(uint)**(ushort **)((int)this + 0x24);
  if (**(ushort **)((int)this + 0x24) != 0) {
    while ((short)param_1 != 10) {
      if ((short)param_1 != 0xd) {
        param_1 = (void *)FUN_0040cae0(this_00,(wchar_t *)&param_1,1);
      }
      psVar3 = (short *)(*(int *)((int)this + 0x24) + 2);
      *(short **)((int)this + 0x24) = psVar3;
      sVar1 = *psVar3;
      param_1 = (void *)CONCAT22((short)((uint)param_1 >> 0x10),sVar1);
      if (sVar1 == 0) {
        return CONCAT31((int3)((uint)param_1 >> 8),1);
      }
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 2;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_00553d80 @ 00553d80 ////

undefined4 * __thiscall FUN_00553d80(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  wchar_t *local_84;
  uint local_80;
  uint local_7c;
  wchar_t local_78 [10];
  undefined4 local_64;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  local_84 = local_78;
  local_64 = 0;
  local_78[0] = L'\0';
  local_80 = 0;
  local_7c = 10;
  iVar1 = FUN_00ace02d((short *)&DAT_00d24120);
  iVar1 = FUN_00420300(this,(short *)&DAT_00d24120,0xffffffff,iVar1);
  if (iVar1 == -1) {
    FUN_004036d0(&local_84,(wchar_t *)*param_2,param_2[1]);
  }
  else {
    iVar2 = FUN_00ace02d((short *)&DAT_00d24118);
    uVar3 = FUN_00553c00(param_2,(short *)&DAT_00d24118,0,iVar2);
    if (uVar3 == 0xffffffff) {
      FUN_004036d0(&local_84,(wchar_t *)*param_2,param_2[1]);
    }
    else {
      puVar4 = FUN_004211c0(param_2,local_20,uVar3,param_2[1]);
      puVar5 = FUN_004211c0(this,local_40,0,iVar1 + 1);
      puVar4 = FUN_00443250(local_60,puVar5,puVar4);
      FUN_004036d0(&local_84,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < local_58) {
                    /* WARNING: Subroutine does not return */
        _free(local_60[0]);
      }
      if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
        _free(local_40[0]);
      }
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_84,local_80);
  if (10 < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_84);
  }
  return param_1;
}


//// FUNCTION FUN_00553f50 @ 00553f50 ////

void __cdecl FUN_00553f50(undefined1 param_1)

{
  DAT_00e52c9c = param_1;
  return;
}


//// FUNCTION FUN_00553f60 @ 00553f60 ////

undefined1 FUN_00553f60(void)

{
  return DAT_00e52c9c;
}


//// FUNCTION FUN_00553f70 @ 00553f70 ////

undefined1 __cdecl FUN_00553f70(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  void *this;
  
  if (DAT_0104ccbc < 1) {
    bVar1 = FUN_005e9250(DAT_0104d82c);
    if (!bVar1) {
      this = (void *)FUN_00a0a2d0();
      uVar2 = FUN_00a0a3c0(this,param_1);
      return uVar2;
    }
  }
  return 0;
}


//// FUNCTION FUN_00553fa0 @ 00553fa0 ////

uint __cdecl FUN_00553fa0(uint param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  void *this;
  uint uVar2;
  
  uVar2 = DAT_0104ccbc;
  if ((int)DAT_0104ccbc < 1) {
    bVar1 = FUN_005e9250(DAT_0104d82c);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      this = (void *)FUN_00a0a2d0();
      uVar2 = FUN_00a0a3e0(this,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00553fd0 @ 00553fd0 ////

uint __cdecl FUN_00553fd0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  void *this;
  uint uVar2;
  
  uVar2 = DAT_0104ccbc;
  if ((int)DAT_0104ccbc < 1) {
    bVar1 = FUN_005e9250(DAT_0104d82c);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      this = (void *)FUN_00a0a2d0();
      uVar2 = FUN_00a0a410(this,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00554030 @ 00554030 ////

uint __cdecl FUN_00554030(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  void *this;
  uint uVar2;
  
  uVar2 = DAT_0104ccbc;
  if ((int)DAT_0104ccbc < 1) {
    bVar1 = FUN_005e9250(DAT_0104d82c);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      this = (void *)FUN_00a0a2d0();
      uVar2 = FUN_00a0a470(this,param_1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00554060 @ 00554060 ////

uint FUN_00554060(void)

{
  undefined4 uVar1;
  void *pvVar2;
  
  uVar1 = DAT_0104cc18;
  DAT_0104ccb8 = 2;
  pvVar2 = _memmove(&DAT_0104cc18,(void *)((int)&DAT_0104cc18 + 2),0x7e);
  return CONCAT22((short)((uint)pvVar2 >> 0x10),(short)uVar1);
}


//// FUNCTION FUN_00554090 @ 00554090 ////

uint __cdecl FUN_00554090(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  void *this;
  undefined3 extraout_var_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar3;
  
  uVar3 = DAT_0104ccbc;
  if (((int)DAT_0104ccbc < 1) && (uVar3 = DAT_0104ccb8, (int)DAT_0104ccb8 < 1)) {
    bVar1 = FUN_005e9250(DAT_0104d82c);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      iVar5 = 0;
      piVar4 = &DAT_0104ca18 + param_1 * 4;
      do {
        iVar6 = *piVar4;
        uVar3 = 0;
        if (iVar6 != 0) {
          this = (void *)FUN_00a0a2d0();
          cVar2 = FUN_00a0a3c0(this,iVar6);
          uVar3 = CONCAT31(extraout_var_00,cVar2);
          if (cVar2 != '\0') {
            return CONCAT31(extraout_var_00,1);
          }
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < 4);
      return uVar3 & 0xffffff00;
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_005540f0 @ 005540f0 ////

uint __cdecl FUN_005540f0(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar4;
  uint uVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  uint *puVar6;
  int iVar7;
  uint uVar3;
  
  uVar3 = DAT_0104ccbc;
  if (((int)DAT_0104ccbc < 1) && (uVar3 = DAT_0104ccb8, (int)DAT_0104ccb8 < 1)) {
    bVar1 = FUN_005e9250(DAT_0104d82c);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      puVar6 = &DAT_0104ca18 + param_1 * 4;
      iVar7 = 0;
      do {
        uVar3 = *puVar6;
        uVar5 = 0;
        if (uVar3 != 0) {
          pvVar4 = (void *)FUN_00a0a2d0();
          uVar5 = FUN_00a0a3e0(pvVar4,uVar3);
          if ((char)uVar5 != '\0') {
            iVar7 = 0x3c;
            pvVar4 = (void *)FUN_00a0a2d0();
            cVar2 = FUN_00a0a3c0(pvVar4,iVar7);
            uVar5 = CONCAT31(extraout_var_00,cVar2);
            if (cVar2 == '\0') {
              iVar7 = 0x3d;
              pvVar4 = (void *)FUN_00a0a2d0();
              cVar2 = FUN_00a0a3c0(pvVar4,iVar7);
              uVar5 = CONCAT31(extraout_var_01,cVar2);
              if (cVar2 == '\0') {
                iVar7 = 0x38;
                pvVar4 = (void *)FUN_00a0a2d0();
                cVar2 = FUN_00a0a3c0(pvVar4,iVar7);
                uVar5 = CONCAT31(extraout_var_02,cVar2);
                if (cVar2 == '\0') {
                  iVar7 = 0x39;
                  pvVar4 = (void *)FUN_00a0a2d0();
                  cVar2 = FUN_00a0a3c0(pvVar4,iVar7);
                  uVar5 = CONCAT31(extraout_var_03,cVar2);
                  if (cVar2 == '\0') {
                    iVar7 = 0x3a;
                    pvVar4 = (void *)FUN_00a0a2d0();
                    cVar2 = FUN_00a0a3c0(pvVar4,iVar7);
                    uVar5 = CONCAT31(extraout_var_04,cVar2);
                    if (cVar2 == '\0') {
                      iVar7 = 0x3b;
                      pvVar4 = (void *)FUN_00a0a2d0();
                      cVar2 = FUN_00a0a3c0(pvVar4,iVar7);
                      uVar5 = CONCAT31(extraout_var_05,cVar2);
                      if (cVar2 == '\0') {
                        return CONCAT31(extraout_var_05,1);
                      }
                    }
                  }
                }
              }
            }
            break;
          }
        }
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar7 < 4);
      return uVar5 & 0xffffff00;
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_005541d0 @ 005541d0 ////

uint __cdecl FUN_005541d0(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar3;
  uint uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = DAT_0104ccbc;
  if (((int)DAT_0104ccbc < 1) && (uVar4 = DAT_0104ccb8, (int)DAT_0104ccb8 < 1)) {
    bVar1 = FUN_005e9250(DAT_0104d82c);
    uVar4 = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      piVar5 = &DAT_0104ca18 + param_1 * 4;
      iVar6 = 0;
      do {
        iVar7 = *piVar5;
        uVar4 = 0;
        if (iVar7 != 0) {
          pvVar3 = (void *)FUN_00a0a2d0();
          uVar4 = FUN_00a0a410(pvVar3,iVar7);
          if ((char)uVar4 != '\0') {
            iVar6 = 0x3c;
            pvVar3 = (void *)FUN_00a0a2d0();
            cVar2 = FUN_00a0a3c0(pvVar3,iVar6);
            uVar4 = CONCAT31(extraout_var_00,cVar2);
            if (cVar2 == '\0') {
              iVar6 = 0x3d;
              pvVar3 = (void *)FUN_00a0a2d0();
              cVar2 = FUN_00a0a3c0(pvVar3,iVar6);
              uVar4 = CONCAT31(extraout_var_01,cVar2);
              if (cVar2 == '\0') {
                iVar6 = 0x38;
                pvVar3 = (void *)FUN_00a0a2d0();
                cVar2 = FUN_00a0a3c0(pvVar3,iVar6);
                uVar4 = CONCAT31(extraout_var_02,cVar2);
                if (cVar2 == '\0') {
                  iVar6 = 0x39;
                  pvVar3 = (void *)FUN_00a0a2d0();
                  cVar2 = FUN_00a0a3c0(pvVar3,iVar6);
                  uVar4 = CONCAT31(extraout_var_03,cVar2);
                  if (cVar2 == '\0') {
                    iVar6 = 0x3a;
                    pvVar3 = (void *)FUN_00a0a2d0();
                    cVar2 = FUN_00a0a3c0(pvVar3,iVar6);
                    uVar4 = CONCAT31(extraout_var_04,cVar2);
                    if (cVar2 == '\0') {
                      iVar6 = 0x3b;
                      pvVar3 = (void *)FUN_00a0a2d0();
                      cVar2 = FUN_00a0a3c0(pvVar3,iVar6);
                      uVar4 = CONCAT31(extraout_var_05,cVar2);
                      if (cVar2 == '\0') {
                        return CONCAT31(extraout_var_05,1);
                      }
                    }
                  }
                }
              }
            }
            break;
          }
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < 4);
      return uVar4 & 0xffffff00;
    }
  }
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_005542b0 @ 005542b0 ////

uint FUN_005542b0(void)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  void *pvVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  bVar1 = FUN_005e9250(DAT_0104d82c);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (!bVar1) {
    iVar8 = 0x3c;
    pvVar3 = (void *)FUN_00a0a2d0();
    cVar2 = FUN_00a0a3c0(pvVar3,iVar8);
    uVar4 = CONCAT31(extraout_var_00,cVar2);
    if (cVar2 == '\0') {
      iVar8 = 0x3d;
      pvVar3 = (void *)FUN_00a0a2d0();
      cVar2 = FUN_00a0a3c0(pvVar3,iVar8);
      uVar4 = CONCAT31(extraout_var_01,cVar2);
      if (cVar2 == '\0') {
        iVar8 = 0x38;
        pvVar3 = (void *)FUN_00a0a2d0();
        cVar2 = FUN_00a0a3c0(pvVar3,iVar8);
        uVar4 = CONCAT31(extraout_var_02,cVar2);
        if (cVar2 == '\0') {
          iVar8 = 0x39;
          pvVar3 = (void *)FUN_00a0a2d0();
          cVar2 = FUN_00a0a3c0(pvVar3,iVar8);
          uVar4 = CONCAT31(extraout_var_03,cVar2);
          if (cVar2 == '\0') {
            iVar8 = 0x3a;
            pvVar3 = (void *)FUN_00a0a2d0();
            cVar2 = FUN_00a0a3c0(pvVar3,iVar8);
            uVar4 = CONCAT31(extraout_var_04,cVar2);
            if (cVar2 == '\0') {
              iVar8 = 0x3b;
              pvVar3 = (void *)FUN_00a0a2d0();
              cVar2 = FUN_00a0a3c0(pvVar3,iVar8);
              uVar4 = CONCAT31(extraout_var_05,cVar2);
              if (cVar2 == '\0') {
                puVar5 = &DAT_0104ca18;
                do {
                  iVar8 = 0;
                  puVar6 = puVar5;
                  do {
                    uVar7 = *puVar6;
                    if (uVar7 != 0) {
                      uVar4 = uVar7;
                      pvVar3 = (void *)FUN_00a0a2d0();
                      uVar4 = FUN_00a0a3e0(pvVar3,uVar4);
                      if ((char)uVar4 != '\0') {
LAB_0055438b:
                        return CONCAT31((int3)(uVar4 >> 8),1);
                      }
                      pvVar3 = (void *)FUN_00a0a2d0();
                      uVar4 = FUN_00a0a410(pvVar3,uVar7);
                      if ((char)uVar4 != '\0') goto LAB_0055438b;
                    }
                    iVar8 = iVar8 + 1;
                    puVar6 = puVar6 + 1;
                  } while (iVar8 < 4);
                  puVar5 = puVar5 + 4;
                  if (0x104cc17 < (int)puVar5) {
                    return uVar4 & 0xffffff00;
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_005543a0 @ 005543a0 ////

void __cdecl FUN_005543a0(undefined4 param_1)

{
  DAT_0104ccbc = param_1;
  return;
}


//// FUNCTION FUN_005543d0 @ 005543d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005543d0(void)

{
  float10 fVar1;
  
  if (0 < DAT_0104ccbc) {
    return (float10)0.0;
  }
  fVar1 = (float10)_DAT_0104ccc0;
  _DAT_0104ccc0 = 0.0;
  return fVar1;
}


//// FUNCTION FUN_00554400 @ 00554400 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00554400(int param_1,char param_2)

{
  ulonglong uVar1;
  
  if (param_1 == 0x73) {
    if (param_2 != '\0') {
      DAT_0104cd00 = DAT_0104cce0;
      DAT_0104cd04 = DAT_0104cce4;
      uVar1 = FUN_00990ae0(DAT_0104cce0,DAT_0104cce4);
      _DAT_0104ccb4 = (int)uVar1;
      return;
    }
    DAT_0104cd08 = DAT_0104cce0;
    DAT_0104cd0c = DAT_0104cce4;
  }
  else if (param_1 == 0x74) {
    if (param_2 != '\0') {
      _DAT_0104cd10 = DAT_0104cce0;
      _DAT_0104cd14 = DAT_0104cce4;
      return;
    }
    _DAT_0104cd18 = DAT_0104cce0;
    _DAT_0104cd1c = DAT_0104cce4;
    return;
  }
  return;
}


//// FUNCTION FUN_00554490 @ 00554490 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00554490(undefined4 param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  undefined2 unaff_retaddr;
  
  switch(param_1) {
  case 1:
    _DAT_0104ccf0 = (float)param_2 * _DAT_00e52ca8 + _DAT_0104ccf0;
    if (0.0 <= _DAT_0104ccf0) {
      if (_DAT_0104ccf0 <= DAT_0105c400) {
        _DAT_0104cce8 = 0.0;
      }
      else {
        fVar1 = _DAT_0104ccf0 - DAT_0105c400;
        _DAT_0104ccf0 = DAT_0105c400;
        _DAT_0104cce8 = fVar1 + _DAT_0104cce8;
      }
    }
    else {
      _DAT_0104cce8 = _DAT_0104cce8 + _DAT_0104ccf0;
      _DAT_0104ccf0 = 0.0;
    }
    fVar2 = FUN_00acf400((double)_DAT_0104ccf0,unaff_retaddr);
    DAT_0104cce0 = (float)fVar2;
  case 4:
    _DAT_0104ccf8 = (float)param_2;
    return;
  case 2:
    _DAT_0104ccf4 = (float)param_2 * _DAT_00e52ca8 + _DAT_0104ccf4;
    if (0.0 <= _DAT_0104ccf4) {
      if (_DAT_0104ccf4 <= DAT_0105c404) {
        _DAT_0104ccec = 0.0;
      }
      else {
        fVar1 = _DAT_0104ccf4 - DAT_0105c404;
        _DAT_0104ccf4 = DAT_0105c404;
        _DAT_0104ccec = fVar1 + _DAT_0104ccec;
      }
    }
    else {
      _DAT_0104ccec = _DAT_0104ccec + _DAT_0104ccf4;
      _DAT_0104ccf4 = 0.0;
    }
    fVar2 = FUN_00acf400((double)_DAT_0104ccf4,unaff_retaddr);
    DAT_0104cce4 = (float)fVar2;
  case 5:
    _DAT_0104ccfc = (float)param_2;
    return;
  case 3:
    DAT_0104ccc4 = (float)param_2 + DAT_0104ccc4;
    return;
  case 6:
    _DAT_0104cd20 = (float)param_2;
    return;
  case 7:
    _DAT_0104cd24 = (float)param_2;
    return;
  default:
    return;
  }
}


//// FUNCTION FUN_00554680 @ 00554680 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00554680(void)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  if (0 < DAT_0104ccb8) {
    DAT_0104ccb8 = DAT_0104ccb8 + -1;
  }
  if (0 < DAT_0104ccbc) {
    DAT_0104ccbc = DAT_0104ccbc + -1;
  }
  iVar1 = FUN_00a0a2d0();
  FUN_00a0a570(iVar1,extraout_EDX);
  _DAT_0104ccc0 = DAT_0104ccc4;
  DAT_0104ccc4 = 0;
  _wcscpy((wchar_t *)&DAT_0104cc18,(wchar_t *)&DAT_0104c998);
  _wcscpy((wchar_t *)&DAT_0104c998,(wchar_t *)&lpCaption_00d16918);
  return;
}


//// FUNCTION FUN_005546e0 @ 005546e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_005546e0(void)

{
  byte bVar1;
  
  bVar1 = _DAT_0104ccb0 < _DAT_0104ccac |
          (byte)((ushort)((ushort)(NAN(_DAT_0104ccb0) || NAN(_DAT_0104ccac)) << 10) >> 8) |
          (byte)((ushort)((ushort)(_DAT_0104ccb0 == _DAT_0104ccac) << 0xe) >> 8);
  if (_DAT_0104ccb0 < _DAT_0104ccac) {
    return CONCAT11(bVar1,1);
  }
  return (ushort)bVar1 << 8;
}


//// FUNCTION FUN_00554700 @ 00554700 ////

uint __fastcall FUN_00554700(undefined4 param_1,undefined4 param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  return ~-(uint)(DAT_0104ccc8 < (uint)((int)uVar1 - param_3)) & DAT_0104ccd0;
}


//// FUNCTION FUN_005547e0 @ 005547e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005547e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0104ca18;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0104ca44 = DAT_0104ca3c;
  _DAT_0104ca40 = DAT_0104ca38;
  _DAT_0104ca54 = DAT_0104ca4c;
  _DAT_0104ca50 = DAT_0104ca48;
  _DAT_0104ca64 = DAT_0104ca5c;
  _DAT_0104ca60 = DAT_0104ca58;
  _DAT_0104ca74 = DAT_0104ca6c;
  _DAT_0104ca70 = DAT_0104ca68;
  _DAT_0104ca24 = DAT_0104ca1c;
  _DAT_0104ca20 = DAT_0104ca18;
  _DAT_0104ca34 = DAT_0104ca30;
  DAT_0104ca30 = DAT_0104ca2c;
  DAT_0104ca2c = DAT_0104ca28;
  _DAT_0104ca84 = DAT_0104ca80;
  DAT_0104ca80 = DAT_0104ca7c;
  DAT_0104ca7c = DAT_0104ca78;
  _DAT_0104cb74 = DAT_0104cb70;
  DAT_0104cb70 = DAT_0104cb6c;
  DAT_0104cb6c = DAT_0104cb68;
  _DAT_0104cb84 = DAT_0104cb7c;
  _DAT_0104cb80 = DAT_0104cb78;
  _DAT_0104cb94 = DAT_0104cb8c;
  _DAT_0104cb90 = DAT_0104cb88;
  _DAT_0104cba4 = DAT_0104cb9c;
  _DAT_0104cba0 = DAT_0104cb98;
  DAT_0104ca3c = 0x6d;
  DAT_0104ca38 = 0xb;
  DAT_0104ca4c = 0x6e;
  DAT_0104ca48 = 0xe;
  DAT_0104ca5c = 0x6b;
  DAT_0104ca58 = 0x21;
  DAT_0104ca6c = 0x6c;
  DAT_0104ca68 = 0x1d;
  DAT_0104ca1c = 0x2c;
  DAT_0104ca18 = 0x34;
  DAT_0104ca28 = 0x25;
  DAT_0104ca78 = 0x34;
  DAT_0104cb68 = 0x29;
  DAT_0104cb7c = 3;
  DAT_0104cb78 = 0x51;
  DAT_0104cb8c = 5;
  DAT_0104cb88 = 0x53;
  DAT_0104cb9c = 6;
  DAT_0104cb98 = 0x54;
  _DAT_0104cbb4 = DAT_0104cbac;
  _DAT_0104cbb0 = DAT_0104cba8;
  DAT_0104cbac = 7;
  _DAT_0104cbc0 = DAT_0104cbb8;
  _DAT_0104cbc4 = DAT_0104cbbc;
  _DAT_0104cbd0 = DAT_0104cbc8;
  _DAT_0104cbd4 = DAT_0104cbcc;
  _DAT_0104cbe0 = DAT_0104cbd8;
  _DAT_0104cbe4 = DAT_0104cbdc;
  _DAT_0104cbf0 = DAT_0104cbe8;
  _DAT_0104cbf4 = DAT_0104cbec;
  _DAT_0104cc00 = DAT_0104cbf8;
  _DAT_0104cc04 = DAT_0104cbfc;
  _DAT_0104cc10 = DAT_0104cc08;
  _DAT_0104cc14 = DAT_0104cc0c;
  _DAT_0104caa4 = DAT_0104caa0;
  DAT_0104caa0 = DAT_0104ca9c;
  DAT_0104ca9c = DAT_0104ca98;
  _DAT_0104ca94 = DAT_0104ca90;
  DAT_0104ca90 = DAT_0104ca8c;
  DAT_0104ca8c = DAT_0104ca88;
  _DAT_0104cab4 = DAT_0104cab0;
  DAT_0104cab0 = DAT_0104caac;
  DAT_0104caac = DAT_0104caa8;
  _DAT_0104cac4 = DAT_0104cac0;
  DAT_0104cac0 = DAT_0104cabc;
  DAT_0104cabc = DAT_0104cab8;
  _DAT_0104cad4 = DAT_0104cad0;
  DAT_0104cad0 = DAT_0104cacc;
  DAT_0104cacc = DAT_0104cac8;
  DAT_0104cba8 = 0x55;
  DAT_0104cbbc = 2;
  DAT_0104cbb8 = 0x50;
  DAT_0104cbcc = 8;
  DAT_0104cbc8 = 0x56;
  DAT_0104cbdc = 4;
  DAT_0104cbd8 = 0x52;
  DAT_0104cbec = 9;
  DAT_0104cbe8 = 0x57;
  DAT_0104cbfc = 10;
  DAT_0104cbf8 = 0x58;
  DAT_0104cc0c = 1;
  DAT_0104cc08 = 0x4f;
  DAT_0104ca98 = 0x16;
  DAT_0104ca88 = 0x17;
  DAT_0104caa8 = 0x1a;
  DAT_0104cab8 = 0x48;
  DAT_0104cac8 = 0x49;
  _DAT_0104cae4 = 0x34;
  _DAT_0104cae0 = 0x2c;
  _DAT_0104cadc = 0x25;
  _DAT_0104cad8 = 0x73;
  _DAT_0104caf4 = DAT_0104caec;
  _DAT_0104caf0 = DAT_0104cae8;
  DAT_0104caec = 0x40;
  _DAT_0104cb04 = DAT_0104cafc;
  _DAT_0104cb00 = DAT_0104caf8;
  _DAT_0104cb14 = DAT_0104cb0c;
  _DAT_0104cb10 = DAT_0104cb08;
  _DAT_0104cb24 = DAT_0104cb1c;
  _DAT_0104cb20 = DAT_0104cb18;
  _DAT_0104cb34 = DAT_0104cb2c;
  _DAT_0104cb30 = DAT_0104cb28;
  _DAT_0104cb44 = DAT_0104cb3c;
  _DAT_0104cb40 = DAT_0104cb38;
  _DAT_0104cb54 = DAT_0104cb4c;
  _DAT_0104cb50 = DAT_0104cb48;
  DAT_0104cae8 = 0x72;
  DAT_0104cafc = 0x41;
  DAT_0104caf8 = 0x6a;
  DAT_0104cb0c = 0x42;
  DAT_0104cb08 = 0x70;
  DAT_0104cb1c = 0x44;
  DAT_0104cb18 = 0x71;
  DAT_0104cb2c = 0x45;
  DAT_0104cb28 = 0x69;
  DAT_0104cb3c = 0x46;
  DAT_0104cb38 = 0x6f;
  DAT_0104cb4c = 0xf;
  DAT_0104cb48 = 0x31;
  _DAT_0104cb64 = DAT_0104cb5c;
  _DAT_0104cb60 = DAT_0104cb58;
  DAT_0104cb5c = 0x1b;
  DAT_0104cb58 = 0x32;
  return;
}


//// FUNCTION FUN_00554d30 @ 00554d30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00554d30(undefined4 *param_1)

{
  DAT_0104cce0 = *param_1;
  DAT_0104cce4 = param_1[1];
  _DAT_0104ccf0 = *param_1;
  _DAT_0104ccf4 = param_1[1];
  _DAT_0104ccec = 0;
  _DAT_0104cce8 = 0;
  return;
}


//// FUNCTION InputConfig_Constructor @ 00554d70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InputConfig_Constructor(void)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0390;
  local_c = ExceptionList;
  DAT_0105be94 = &LAB_00554730;
  ExceptionList = &local_c;
  FUN_00a0a2d0();
  DAT_0104cce0 = DAT_0105c400 * 0.5;
  puVar2 = &DAT_0104cc18;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0104cce4 = DAT_0105c404 * 0.5;
  puVar2 = &DAT_0104c998;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0104cd00 = 0;
  DAT_0104cd04 = 0;
  DAT_0104cd08 = 0;
  DAT_0104cd0c = 0;
  _DAT_0104ccb0 = 0;
  DAT_0104cc98 = 0;
  DAT_0104cc9c = 0;
  DAT_0104cca0 = 0;
  DAT_0104cca4 = 0;
  _DAT_0104cca8 = 0;
  local_2c = local_20;
  _DAT_0104ccf0 = 0x42000000;
  _DAT_0104ccf4 = 0x42000000;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
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
  _strncpy(local_2c,"mousesensitivity",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4 = 1;
  fVar3 = FUN_00558610(DAT_00f88624,&local_2c,1.5);
  _DAT_00e52ca8 = (float)fVar3;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"mouseovermaxspeed",0x11);
  local_28 = 0x11;
  local_2c[0x11] = '\0';
  local_4 = 2;
  fVar3 = FUN_00558610(DAT_00f88624,&local_2c,12.0);
  _DAT_0104ccac = (float)fVar3;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"stickydistance",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 3;
  fVar3 = FUN_00558610(DAT_00f88624,&local_2c,64.0);
  _DAT_00e52ca0 = (float)fVar3;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"stickyfactor",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = 4;
  fVar3 = FUN_00558610(DAT_00f88624,&local_2c,0.25);
  _DAT_00e52ca4 = (float)fVar3;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_005547e0();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"quicksave_enable",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4 = 5;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005550b0 @ 005550b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005550b0(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  HWND pHVar7;
  int *piVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 extraout_EDX;
  ulonglong uVar11;
  tagPOINT local_24;
  tagPOINT local_1c;
  tagPOINT tStack_14;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  bVar1 = false;
  if ((DAT_00e52c9c == '\0') || (pHVar7 = GetForegroundWindow(), pHVar7 == DAT_0105beb0)) {
    if ((_DAT_0104ccdc != 0.0) &&
       ((DAT_00e52c9c == '\0' && (pHVar7 = GetForegroundWindow(), pHVar7 == DAT_0105beb0)))) {
      GetCursorPos(&local_24);
      ScreenToClient(DAT_0105beb0,&local_24);
      if ((0 < local_24.x) &&
         (((local_24.x < DAT_00e67b84 && (0 < local_24.y)) && (local_24.y < DAT_00e67b88)))) {
        local_1c.x = (LONG)(float)local_24.x;
        local_1c.y = (LONG)(float)local_24.y;
        FUN_00554d30(&local_1c.x);
        FUN_009abae0(&local_1c.x);
        DAT_0105c430 = (float)local_1c.x;
        DAT_0105c434 = (float)local_1c.y;
        DAT_00e52c9c = '\x01';
        bVar1 = true;
      }
    }
  }
  else {
    DAT_00e52c9c = '\0';
  }
  if ((DAT_0104cd30 & 1) == 0) {
    DAT_0104cd30 = DAT_0104cd30 | 1;
    _DAT_0104cd28 = DAT_0104cce0;
    _DAT_0104cd2c = DAT_0104cce4;
  }
  piVar8 = (int *)FUN_00a0a2d0();
  FUN_00a0a550(piVar8,extraout_EDX);
  if (DAT_00e52c9c == '\0') {
    piVar8 = (int *)FUN_00a0a2d0();
    (**(code **)(*piVar8 + 0x10))();
    return;
  }
  tStack_14.x = DAT_0105c3f8 / 2;
  tStack_14.y = DAT_0105c3fc / 2;
  FUN_009a52a0(&tStack_14);
  SetCursorPos(tStack_14.x,tStack_14.y);
  if ((_DAT_0104ccdc != 0.0) && (bVar1)) {
    do {
      piVar8 = &iStack_c;
      pvVar9 = (void *)FUN_00a0a2d0();
      uVar10 = FUN_00a0a4e0(pvVar9,piVar8);
    } while ((char)uVar10 != '\0');
  }
  piVar8 = &iStack_c;
  pvVar9 = (void *)FUN_00a0a2d0();
  uVar10 = FUN_00a0a4e0(pvVar9,piVar8);
  cVar6 = (char)uVar10;
  iVar4 = iStack_8;
  while (cVar6 != '\0') {
    iStack_8 = iVar4;
    if (iStack_c == 1) {
      FUN_00554400(iVar4,iStack_4 != 0);
    }
    else if (iStack_c == 2) {
      FUN_00554490(iVar4,iStack_4);
    }
    else if (iStack_c == 4) {
      local_24.x = 0;
      uVar10 = FUN_00ace02d((short *)&DAT_0104c998);
      if (uVar10 < 0x3f) {
        local_24.x = CONCAT22(local_24.x._2_2_,(short)iVar4);
        _wcscat((wchar_t *)&DAT_0104c998,(wchar_t *)&local_24);
      }
    }
    piVar8 = &iStack_c;
    pvVar9 = (void *)FUN_00a0a2d0();
    uVar10 = FUN_00a0a4e0(pvVar9,piVar8);
    iVar4 = iStack_8;
    cVar6 = (char)uVar10;
  }
  fVar2 = SQRT((DAT_0104cce0 - _DAT_0104cd28) * (DAT_0104cce0 - _DAT_0104cd28) +
               (DAT_0104cce4 - _DAT_0104cd2c) * (DAT_0104cce4 - _DAT_0104cd2c));
  fVar3 = fVar2 * 10.0;
  _DAT_0104ccb0 = (fVar3 + DAT_0104cca4 + DAT_0104cca0 + DAT_0104cc9c + DAT_0104cc98) * 0.2;
  _DAT_0104cca8 = DAT_0104cca4;
  if (fVar2 <= 1.0) {
    fVar2 = DAT_0104cc98;
    DAT_0104cc98 = fVar3;
    fVar3 = DAT_0104cc9c;
    DAT_0104cc9c = fVar2;
    fVar5 = DAT_0104cca0;
    DAT_0104cca0 = fVar3;
    DAT_0104cca4 = fVar5;
    uVar11 = FUN_00990ae0(fVar3,fVar2);
    DAT_0104ccc8 = (int)uVar11;
    DAT_0104ccd0 = DAT_0104ccc8 - DAT_0104cccc;
  }
  else {
    fVar2 = DAT_0104cc98;
    DAT_0104cc98 = fVar3;
    fVar3 = DAT_0104cc9c;
    DAT_0104cc9c = fVar2;
    fVar5 = DAT_0104cca0;
    DAT_0104cca0 = fVar3;
    DAT_0104cca4 = fVar5;
    uVar11 = FUN_00990ae0(fVar3,fVar2);
    DAT_0104cccc = (int)uVar11;
  }
  if ((DAT_0104cce0 != _DAT_0104cd28) || (DAT_0104cce4 != _DAT_0104cd2c)) {
    FUN_006a3460(DAT_0104db5c);
    _DAT_0104cd28 = DAT_0104cce0;
    _DAT_0104cd2c = DAT_0104cce4;
  }
  if ((_DAT_0104ccdc != 0.0) &&
     ((((DAT_0104cce0 < 0.0 != (DAT_0104cce0 == 0.0) ||
        ((float)DAT_00e67b84 < DAT_0104cce0 != ((float)DAT_00e67b84 == DAT_0104cce0))) ||
       (DAT_0104cce4 < 0.0 != (DAT_0104cce4 == 0.0))) ||
      ((float)DAT_00e67b88 < DAT_0104cce4 != ((float)DAT_00e67b88 == DAT_0104cce4))))) {
    DAT_00e52c9c = '\0';
    uVar11 = FUN_00acd42c();
    local_1c.x = (LONG)uVar11;
    uVar11 = FUN_00acd42c();
    local_1c.y = (LONG)uVar11;
    FUN_009a52a0(&local_1c);
    SetCursorPos(local_1c.x,local_1c.y);
  }
  return;
}


//// FUNCTION FUN_005554b0 @ 005554b0 ////

void FUN_005554b0(void)

{
  return;
}


//// FUNCTION FUN_005554c0 @ 005554c0 ////

void FUN_005554c0(void)

{
  return;
}


//// FUNCTION FUN_00555850 @ 00555850 ////

void __cdecl FUN_00555850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00555890 @ 00555890 ////

void __cdecl FUN_00555890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00555a50 @ 00555a50 ////

void __fastcall FUN_00555a50(undefined4 *param_1)

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


//// FUNCTION FUN_00555ad0 @ 00555ad0 ////

int __thiscall FUN_00555ad0(void *this,void *param_1,uint param_2,size_t param_3)

{
  char *pcVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 != 0) {
    if (uVar2 <= param_2) {
      param_2 = uVar2 - 1;
    }
    pcVar4 = (char *)(*(int *)this + param_2);
    pvVar3 = _memchr(param_1,(int)*pcVar4,param_3);
    while( true ) {
      if (pvVar3 == (void *)0x0) {
        return (int)pcVar4 - *(int *)this;
      }
      if (pcVar4 == *(char **)this) break;
      pcVar1 = pcVar4 + -1;
      pcVar4 = pcVar4 + -1;
      pvVar3 = _memchr(param_1,(int)*pcVar1,param_3);
    }
  }
  return -1;
}


//// FUNCTION FUN_00555d10 @ 00555d10 ////

void __cdecl FUN_00555d10(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00555d40 @ 00555d40 ////

void __cdecl FUN_00555d40(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00555e10 @ 00555e10 ////

undefined4 * __thiscall FUN_00555e10(void *this,byte param_1)

{
  FUN_00555a50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00555f30 @ 00555f30 ////

void __fastcall FUN_00555f30(int param_1)

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


//// FUNCTION FUN_00555f80 @ 00555f80 ////

void __fastcall FUN_00555f80(int param_1)

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


//// FUNCTION FUN_00555ff0 @ 00555ff0 ////

void * FUN_00555ff0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00556020 @ 00556020 ////

void * FUN_00556020(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00556050 @ 00556050 ////

undefined4 __thiscall FUN_00556050(void *this,void *param_1)

{
  int *piVar1;
  uint in_EAX;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x60);
  if ((piVar1 != (int *)0x0) && (in_EAX = 0, *(int *)((int)this + 100) - (int)piVar1 >> 2 != 0)) {
    uVar2 = FUN_004015d0(param_1,*(char **)*piVar1,((undefined4 *)*piVar1)[1]);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00556090 @ 00556090 ////

undefined4 __thiscall FUN_00556090(void *this,void *param_1)

{
  undefined4 *puVar1;
  uint in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)((int)this + 0x60);
  if ((iVar2 != 0) && (in_EAX = 0, *(int *)((int)this + 100) - iVar2 >> 2 != 0)) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 100) - iVar2 >> 2;
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x60) + -4 + iVar2 * 4);
    uVar3 = FUN_004015d0(param_1,(char *)*puVar1,puVar1[1]);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_005560e0 @ 005560e0 ////

undefined4 __thiscall FUN_005560e0(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x60);
  if ((iVar1 != 0) && (in_EAX = 0, *(int *)((int)this + 100) - iVar1 >> 2 != 0)) {
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)((int)this + 100) - iVar1 >> 2;
    }
    uVar3 = FUN_00990ce0();
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0x60) + (uVar3 % uVar5) * 4);
    uVar4 = FUN_004015d0(param_1,(char *)*puVar2,puVar2[1]);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00556140 @ 00556140 ////

uint __cdecl FUN_00556140(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb03b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0040d6b0(local_2c,"data/",param_1);
  local_4 = 0;
  puVar1 = FUN_004312e0(local_4c,puVar1,".ini");
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_009d3660(puVar1,(uint *)0x0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(local_44 >> 8),(char)uVar2);
}


//// FUNCTION FUN_005561e0 @ 005561e0 ////

void FUN_005561e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104cd40 != &DAT_0104cd4c) {
    do {
      piVar4 = DAT_0104cd40;
      puVar2 = (undefined4 *)DAT_0104cd40[2];
      piVar1 = DAT_0104cd40 + 1;
      if ((int *)DAT_0104cd40[1] != (int *)0x0) {
        *(int *)DAT_0104cd40[1] = *DAT_0104cd40;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_0104cd40 != &DAT_0104cd4c);
  }
  return;
}


//// FUNCTION FUN_00556240 @ 00556240 ////

void __thiscall FUN_00556240(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_004302c0(param_1,&DAT_00d2410c,0xffffffff,2);
  if (uVar1 == 0xffffffff) {
    FUN_004015d0((void *)((int)this + 0x60),(char *)*param_1,param_1[1]);
    return;
  }
  puVar2 = FUN_00430770(param_1,local_20,uVar1 + 1,0xffffffff);
  FUN_004015d0((void *)((int)this + 0x60),(char *)*puVar2,puVar2[1]);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  puVar2 = FUN_00430770(param_1,local_20,0,uVar1);
  FUN_004015d0((void *)((int)this + 0x40),(char *)*puVar2,puVar2[1]);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return;
}


//// FUNCTION FUN_005562f0 @ 005562f0 ////

undefined4 * __thiscall FUN_005562f0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *this_00;
  int iVar1;
  
  if (param_2 != 1) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,*(char **)((int)this + 0x40),*(uint *)((int)this + 0x44));
    return param_1;
  }
  this_00 = (undefined4 *)((int)this + 0x40);
  iVar1 = FUN_004302c0(this_00,&DAT_00d2410c,0xffffffff,2);
  if (iVar1 != -1) {
    FUN_00430770(this_00,param_1,iVar1 + 1,0xffffffff);
    return param_1;
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)*this_00,*(uint *)((int)this + 0x44));
  return param_1;
}


//// FUNCTION FUN_00556390 @ 00556390 ////

/* WARNING: Removing unreachable block (ram,0x005563e1) */

undefined4 * __thiscall FUN_00556390(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00413450((void *)((int)this + 0xa8),".ini",0,4);
  FUN_00430770((void *)((int)this + 0xa8),param_1,5,uVar1 - 5);
  return param_1;
}


//// FUNCTION FUN_00556480 @ 00556480 ////

void __fastcall FUN_00556480(int param_1)

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


//// FUNCTION FUN_005564f0 @ 005564f0 ////

void __fastcall FUN_005564f0(int param_1)

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


//// FUNCTION FUN_00556580 @ 00556580 ////

undefined4 * FUN_00556580(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005565b0 @ 005565b0 ////

undefined4 * FUN_005565b0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005565e0 @ 005565e0 ////

int * __cdecl FUN_005565e0(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
    }
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00556670 @ 00556670 ////

undefined4 __thiscall FUN_00556670(void *this,void *param_1)

{
  int *piVar1;
  uint in_EAX;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x44);
  if ((piVar1 != (int *)0x0) && (in_EAX = 0, *(int *)((int)this + 0x48) - (int)piVar1 >> 2 != 0)) {
    uVar2 = FUN_004015d0(param_1,*(char **)*piVar1,((undefined4 *)*piVar1)[1]);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_005566b0 @ 005566b0 ////

undefined4 __thiscall FUN_005566b0(void *this,void *param_1)

{
  undefined4 *puVar1;
  uint in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)((int)this + 0x44);
  if ((iVar2 != 0) && (in_EAX = 0, *(int *)((int)this + 0x48) - iVar2 >> 2 != 0)) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x48) - iVar2 >> 2;
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x44) + -4 + iVar2 * 4);
    uVar3 = FUN_004015d0(param_1,(char *)*puVar1,puVar1[1]);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00556700 @ 00556700 ////

/* WARNING: Removing unreachable block (ram,0x00556777) */
/* WARNING: Removing unreachable block (ram,0x0055683d) */

int __cdecl FUN_00556700(undefined4 *param_1,uint param_2,undefined4 *param_3,char param_4)

{
  int *this;
  undefined4 *this_00;
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint local_24;
  void *local_20 [2];
  uint local_18;
  
  FUN_0055b2d0();
  this_00 = param_3;
  local_24 = param_2;
  iVar1 = param_2 << 5;
  do {
    if ((DAT_0104cd88 == 0) || ((uint)(DAT_0104cd8c - DAT_0104cd88 >> 5) <= local_24)) {
      if (this_00[2] == 0) {
        this_00[2] = 0x20;
        pvVar3 = _malloc(0x20);
        *this_00 = pvVar3;
      }
      _strncpy((char *)*this_00,"",0);
      this_00[1] = 0;
      *(undefined1 *)*this_00 = 0;
      return 0;
    }
    this = (int *)(iVar1 + DAT_0104cd88);
    iVar2 = __strnicmp((char *)*param_1,(char *)*this,param_1[1]);
    if (iVar2 == 0) {
      iVar2 = param_1[1];
      if (this[1] == iVar2) {
        if (this_00[2] == 0) {
          this_00[2] = 0x20;
          pvVar3 = _malloc(0x20);
          *this_00 = pvVar3;
        }
        _strncpy((char *)*this_00,"",0);
        this_00[1] = 0;
        *(undefined1 *)*this_00 = 0;
LAB_005567f6:
        if (param_4 != '\0') {
LAB_00556824:
          return local_24 + 1;
        }
        param_2 = CONCAT31(param_2._1_3_,0x2f);
        uVar5 = FUN_00413450(this_00,(char *)&param_2,0,1);
        if (uVar5 == 0xffffffff) goto LAB_00556824;
      }
      else if (*(char *)(iVar2 + *this) == '/') {
        puVar4 = FUN_00430770(this,local_20,iVar2 + 1,0xffffffff);
        FUN_004015d0(this_00,(char *)*puVar4,puVar4[1]);
        if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
          _free(local_20[0]);
        }
        if (this_00[1] != 0) goto LAB_005567f6;
      }
    }
    local_24 = local_24 + 1;
    iVar1 = iVar1 + 0x20;
  } while( true );
}


//// FUNCTION FUN_00556930 @ 00556930 ////

undefined4 __thiscall FUN_00556930(void *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00470b20((void *)((int)this + 0x50),(int *)&param_1,param_1);
  puVar1 = param_1;
  if ((param_1 != *(undefined4 **)((int)this + 0x54)) && (iVar3 = param_1[0xb] + 1, -1 < iVar3)) {
    if (*(int *)((int)this + 0x44) == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 2);
    }
    if (iVar3 < (int)puVar1) {
      puVar1 = *(undefined4 **)(*(int *)((int)this + 0x44) + iVar3 * 4);
      uVar2 = FUN_004015d0(param_2,(char *)*puVar1,puVar1[1]);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return (uint)puVar1 & 0xffffff00;
}


//// FUNCTION FUN_00556990 @ 00556990 ////

undefined4 __thiscall FUN_00556990(void *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00470b20((void *)((int)this + 0x50),(int *)&param_1,param_1);
  puVar1 = param_1;
  if ((param_1 != *(undefined4 **)((int)this + 0x54)) && (iVar3 = param_1[0xb] + -1, -1 < iVar3)) {
    if (*(int *)((int)this + 0x44) == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 2);
    }
    if (iVar3 < (int)puVar1) {
      puVar1 = *(undefined4 **)(*(int *)((int)this + 0x44) + iVar3 * 4);
      uVar2 = FUN_004015d0(param_2,(char *)*puVar1,puVar1[1]);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return (uint)puVar1 & 0xffffff00;
}


//// FUNCTION FUN_005569f0 @ 005569f0 ////

undefined4 __thiscall FUN_005569f0(void *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00470b20((void *)((int)this + 0x6c),(int *)&param_1,param_1);
  puVar1 = param_1;
  if ((param_1 != *(undefined4 **)((int)this + 0x70)) && (iVar3 = param_1[0xb] + 1, -1 < iVar3)) {
    if (*(int *)((int)this + 0x60) == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)(*(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 2);
    }
    if (iVar3 < (int)puVar1) {
      puVar1 = *(undefined4 **)(*(int *)((int)this + 0x60) + iVar3 * 4);
      uVar2 = FUN_004015d0(param_2,(char *)*puVar1,puVar1[1]);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return (uint)puVar1 & 0xffffff00;
}


//// FUNCTION FUN_00556a50 @ 00556a50 ////

undefined4 __thiscall FUN_00556a50(void *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00470b20((void *)((int)this + 0x6c),(int *)&param_1,param_1);
  puVar1 = param_1;
  if ((param_1 != *(undefined4 **)((int)this + 0x70)) && (iVar3 = param_1[0xb] + -1, -1 < iVar3)) {
    if (*(int *)((int)this + 0x60) == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)(*(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 2);
    }
    if (iVar3 < (int)puVar1) {
      puVar1 = *(undefined4 **)(*(int *)((int)this + 0x60) + iVar3 * 4);
      uVar2 = FUN_004015d0(param_2,(char *)*puVar1,puVar1[1]);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return (uint)puVar1 & 0xffffff00;
}


//// FUNCTION FUN_00556ad0 @ 00556ad0 ////

void FUN_00556ad0(void)

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
  puStack_8 = &LAB_00cb03c8;
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


//// FUNCTION FUN_00556b40 @ 00556b40 ////

void FUN_00556b40(void)

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
  puStack_8 = &LAB_00cb03e8;
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


//// FUNCTION FUN_00556bb0 @ 00556bb0 ////

void __fastcall FUN_00556bb0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d24188;
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


//// FUNCTION FUN_00556c00 @ 00556c00 ////

undefined4 * __thiscall FUN_00556c00(void *this,byte param_1)

{
  FUN_00556bb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00556c20 @ 00556c20 ////

void __thiscall FUN_00556c20(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb0400;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x7ffffff < param_1) {
    ExceptionList = &local_10;
    param_1 = FUN_004061d0();
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 5;
  }
  if (uVar2 < param_1) {
    piVar1 = operator_new(param_1 * 0x20);
    local_8 = 0;
    FUN_005565e0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),piVar1);
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      FUN_00405fe0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(int **)((int)this + 0xc) = piVar1 + param_1 * 8;
    *(int **)((int)this + 8) = piVar1;
    *(int **)((int)this + 4) = piVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00556da0 @ 00556da0 ////

void __thiscall FUN_00556da0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00556ad0();
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
      _Dst = FUN_00556580((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00555ff0(param_1,iVar5,param_1 + param_2);
      FUN_00556580(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00555850(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00555ff0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00555d10(param_1,(int)pvVar3,iVar5);
    FUN_00555850(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00556f80 @ 00556f80 ////

void __thiscall FUN_00556f80(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00556b40();
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
      _Dst = FUN_005565b0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00556020(param_1,iVar5,param_1 + param_2);
      FUN_005565b0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00555890(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00556020(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00555d40(param_1,(int)pvVar3,iVar5);
    FUN_00555890(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00557220 @ 00557220 ////

void __fastcall FUN_00557220(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb044f;
  pvStack_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  FUN_005574a0(param_1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00471450((void *)(param_1 + 0x6c),&local_10,(int *)**(int **)(param_1 + 0x70),
               *(int **)(param_1 + 0x70));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x70));
}


//// FUNCTION FUN_00557320 @ 00557320 ////

void * __thiscall FUN_00557320(void *this,byte param_1)

{
  FUN_00557220((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00557340 @ 00557340 ////

void __thiscall FUN_00557340(void *this,undefined4 *param_1)

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
  FUN_00556da0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00557390 @ 00557390 ////

void __thiscall FUN_00557390(void *this,undefined4 *param_1)

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
  FUN_00556f80(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_005573e0 @ 005573e0 ////

undefined4 * __fastcall FUN_005573e0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cb0494;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  param_1[8] = param_1 + 0xb;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0x14;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_4 = 2;
  uStack_3 = 0;
  iVar1 = FUN_004706e0();
  param_1[0x15] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x15] + 4) = param_1[0x15];
  *(undefined4 *)param_1[0x15] = param_1[0x15];
  *(undefined4 *)(param_1[0x15] + 8) = param_1[0x15];
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  _local_4 = CONCAT31(uStack_3,4);
  iVar1 = FUN_004706e0();
  param_1[0x1c] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1c];
  *(undefined4 *)param_1[0x1c] = param_1[0x1c];
  *(undefined4 *)(param_1[0x1c] + 8) = param_1[0x1c];
  param_1[0x1d] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005574a0 @ 005574a0 ////

int __fastcall FUN_005574a0(int param_1)

{
  undefined4 *_Memory;
  void *_Memory_00;
  int iVar1;
  
  FUN_00470bb0(*(void **)(*(int *)(param_1 + 0x70) + 4));
  *(int *)(*(int *)(param_1 + 0x70) + 4) = *(int *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(int *)(*(int *)(param_1 + 0x70) + 8) = *(int *)(param_1 + 0x70);
  while ((*(int *)(param_1 + 0x60) != 0 &&
         (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2 != 0))) {
    _Memory = *(undefined4 **)(*(int *)(param_1 + 100) + -4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_00555a50(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if ((*(int *)(param_1 + 0x60) != 0) &&
       (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2 != 0)) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -4;
    }
  }
  FUN_00470bb0(*(void **)(*(int *)(param_1 + 0x54) + 4));
  *(int *)(*(int *)(param_1 + 0x54) + 4) = *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(int *)iVar1 = iVar1;
  *(int *)(*(int *)(param_1 + 0x54) + 8) = *(int *)(param_1 + 0x54);
  while ((*(int *)(param_1 + 0x44) != 0 &&
         (iVar1 = 0, *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2 != 0))) {
    _Memory_00 = *(void **)(*(int *)(param_1 + 0x48) + -4);
    iVar1 = *(int *)(param_1 + 0x48) + -4;
    if (_Memory_00 != (void *)0x0) {
      FUN_00557220((int)_Memory_00);
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar1 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -4;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_005575a0 @ 005575a0 ////

void __fastcall FUN_005575a0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  for (uVar3 = 0;
      (iVar1 = *(int *)(param_1 + 0x60), iVar1 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 100) - iVar1 >> 2))); uVar3 = uVar3 + 1) {
    puVar2 = (uint *)FUN_00471710((void *)(param_1 + 0x6c),*(undefined4 **)(iVar1 + uVar3 * 4));
    *puVar2 = uVar3;
  }
  return;
}


//// FUNCTION FUN_005575e0 @ 005575e0 ////

undefined4 * __thiscall
FUN_005575e0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *this_00;
  int iVar4;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb04ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00470b20((void *)((int)this + 0x50),(int *)&param_2,param_2);
  if (param_2 != *(undefined4 **)((int)this + 0x54)) {
    ExceptionList = local_c;
    return *(undefined4 **)(*(int *)((int)this + 0x44) + param_2[0xb] * 4);
  }
  if ((char)param_3 != '\0') {
    param_3 = operator_new(0x7c);
    this_00 = (undefined4 *)0x0;
    local_4 = 0;
    if (param_3 != (undefined4 *)0x0) {
      this_00 = FUN_005573e0(param_3);
    }
    local_4 = 0xffffffff;
    param_3 = this_00;
    FUN_004015d0(this_00 + 8,(char *)*puVar1,puVar1[1]);
    puVar2 = FUN_0047aee0(local_2c,param_1,puVar1);
    FUN_004015d0(this_00,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    *(undefined1 *)(this_00 + 0x1e) = 0;
    if (*(int *)((int)this + 0x44) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 2;
    }
    piVar3 = FUN_00471710((void *)((int)this + 0x50),puVar1);
    *piVar3 = iVar4;
    FUN_00557340((void *)((int)this + 0x40),&param_3);
    ExceptionList = local_c;
    return this_00;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00557720 @ 00557720 ////

void __thiscall FUN_00557720(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *this_00;
  int *piVar2;
  int iVar3;
  
  puVar1 = param_1;
  FUN_00470b20((void *)((int)this + 0x6c),(int *)&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x70)) {
    FUN_004015d0((void *)(*(int *)(*(int *)((int)this + 0x60) + param_1[0xb] * 4) + 0x20),
                 (char *)*param_2,param_2[1]);
    return;
  }
  this_00 = operator_new(0x40);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    *this_00 = this_00 + 3;
    *(undefined1 *)(this_00 + 3) = 0;
    this_00[1] = 0;
    this_00[2] = 0x14;
    this_00[8] = this_00 + 0xb;
    *(undefined1 *)(this_00 + 0xb) = 0;
    this_00[9] = 0;
    this_00[10] = 0x14;
  }
  param_1 = this_00;
  FUN_004015d0(this_00,(char *)*puVar1,puVar1[1]);
  FUN_004015d0(this_00 + 8,(char *)*param_2,param_2[1]);
  if (*(int *)((int)this + 0x60) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 2;
  }
  piVar2 = FUN_00471710((void *)((int)this + 0x6c),puVar1);
  *piVar2 = iVar3;
  FUN_00557390((void *)((int)this + 0x5c),&param_1);
  return;
}


//// FUNCTION FUN_00557890 @ 00557890 ////

undefined4 * __thiscall FUN_00557890(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char *_Source;
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *local_94;
  char *local_90;
  uint local_8c;
  uint local_88;
  char local_84 [20];
  void *local_70;
  char *local_6c;
  undefined4 local_68;
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
  puStack_8 = &LAB_00cb04d3;
  local_c = ExceptionList;
  local_94 = *(undefined4 **)((int)this + 0xa0);
  uVar5 = 0;
  ExceptionList = &local_c;
  local_70 = this;
  if ((local_94 == (undefined4 *)0x0) ||
     (ExceptionList = &local_c, uVar2 = FUN_00401ec0(param_1,(undefined4 *)((int)this + 0x80)),
     (char)uVar2 == '\0')) {
    local_90 = local_84;
    local_84[0] = '\0';
    local_8c = 0;
    local_88 = 0x14;
    local_6c = local_60;
    local_64 = 0x14;
    local_4 = 0;
    local_60[0] = '\0';
    local_68 = 0;
    _strncpy(local_6c,"",0);
    local_68 = 0;
    *local_6c = '\0';
    local_94 = *(undefined4 **)((int)this + 0x38);
    local_4 = CONCAT31(local_4._1_3_,1);
    do {
      iVar3 = FUN_00448220(param_1,&DAT_00d2410c,uVar5,2);
      if (iVar3 == -1) {
        iVar3 = param_1[1];
      }
      puVar4 = FUN_00430770(param_1,local_4c,uVar5,iVar3 - uVar5);
      uVar5 = puVar4[1];
      _Source = (char *)*puVar4;
      if (local_88 <= uVar5) {
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        local_88 = uVar5 + 0x20 & 0xffffffe0;
        local_90 = _malloc(local_88);
      }
      _strncpy(local_90,_Source,uVar5);
      local_90[uVar5] = '\0';
      local_8c = uVar5;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      uVar5 = iVar3 + 1;
      local_94 = FUN_005575e0(local_94,&local_6c,&local_90,param_2);
      if (local_94 == (undefined4 *)0x0) {
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (local_88 < 0x15) {
          ExceptionList = local_c;
          return (undefined4 *)0x0;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      puVar4 = FUN_004312e0(local_2c,&local_90,"/");
      FUN_004073f0(&local_6c,(char *)*puVar4,puVar4[1]);
      pvVar1 = local_70;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    } while ((uVar5 < (uint)param_1[1]) && (local_8c != 0));
    FUN_004015d0((void *)((int)local_70 + 0x80),(char *)*param_1,param_1[1]);
    *(undefined4 **)((int)pvVar1 + 0xa0) = local_94;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
  }
  ExceptionList = local_c;
  return local_94;
}


//// FUNCTION FUN_00557af0 @ 00557af0 ////

void __fastcall FUN_00557af0(int param_1)

{
  FUN_005574a0(*(int *)(param_1 + 0x38));
  FUN_004015d0((void *)(param_1 + 0x40),"",0);
  FUN_004015d0((void *)(param_1 + 0x60),"",0);
  FUN_004015d0((void *)(param_1 + 0x80),"",0);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}


//// FUNCTION FUN_00557b40 @ 00557b40 ////

undefined1 __thiscall FUN_00557b40(void *this,undefined4 param_1)

{
  void *this_00;
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  byte *pbVar8;
  bool bVar9;
  byte *local_10c [2];
  uint local_104;
  undefined1 *local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_e0 [20];
  byte *local_cc;
  uint local_c8;
  uint local_c4;
  byte local_c0 [20];
  undefined1 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_a0 [20];
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
  
  puStack_8 = &LAB_00cb0517;
  local_c = ExceptionList;
  local_ac = local_a0;
  uVar7 = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 0x14;
  local_ec = local_e0;
  local_e0[0] = 0;
  local_e8 = 0;
  local_e4 = 0x14;
  puVar6 = (undefined4 *)((int)this + 0xa8);
  local_4 = 1;
  ExceptionList = &local_c;
  puVar2 = FUN_004312e0(local_10c,puVar6,"/");
  FUN_004015d0(&local_ec,(char *)*puVar2,puVar2[1]);
  if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
    _free(local_10c[0]);
  }
  uVar3 = FUN_00413450(&local_ec,"data/",0,5);
  if (uVar3 == 0) {
    puVar2 = FUN_00430770(&local_ec,local_10c,5,0xffffffff);
    FUN_004015d0(&local_ec,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
  }
  switch(param_1) {
  case 0:
    iVar5 = FUN_00556700(puVar6,0,&local_ac,'\0');
    *(int *)((int)this + 0xa4) = iVar5;
    if (iVar5 == 0) goto switchD_00557c38_caseD_1;
    puVar6 = FUN_0047aee0(local_6c,&local_ec,&local_ac);
    FUN_00401e30((void *)((int)this + 0x40),puVar6);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    break;
  default:
    goto switchD_00557c38_caseD_1;
  case 2:
    iVar5 = FUN_00556700(puVar6,*(uint *)((int)this + 0xa4),&local_ac,'\0');
    *(int *)((int)this + 0xa4) = iVar5;
    if (iVar5 == 0) goto switchD_00557c38_caseD_1;
    puVar6 = FUN_0047aee0(local_2c,&local_ec,&local_ac);
    FUN_00401e30((void *)((int)this + 0x40),puVar6);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    break;
  case 3:
    local_cc = local_c0;
    local_c0[0] = 0;
    local_c8 = 0;
    local_c4 = 0x14;
    local_4._0_1_ = 2;
    uVar3 = FUN_00556700(puVar6,0,&local_cc,'\0');
    FUN_00403de0(local_10c,&local_cc);
    local_4 = CONCAT31(local_4._1_3_,3);
    for (; uVar3 != 0; uVar3 = FUN_00556700(puVar6,uVar3,&local_cc,'\0')) {
      pbVar8 = *(byte **)((int)this + 0x40);
      pbVar4 = local_cc;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00557d84:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00557d89;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00557d84;
        pbVar4 = pbVar4 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00557d89:
      if (iVar5 == 0) break;
      FUN_004015d0(local_10c,(char *)local_cc,local_c8);
    }
    puVar6 = FUN_0047aee0(local_4c,&local_ec,local_10c);
    FUN_004015d0((void *)((int)this + 0x40),(char *)*puVar6,puVar6[1]);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    uVar7 = 1;
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
    local_10c[0] = local_cc;
    if (local_c4 < 0x15) goto switchD_00557c38_caseD_1;
    goto LAB_00557ed9;
  case 5:
    FUN_00403de0(local_10c,puVar6);
    uVar3 = FUN_004302c0(local_10c,&DAT_00d1e524,0xffffffff,1);
    puVar2 = FUN_00430770(local_10c,local_8c,0,uVar3);
    FUN_004015d0(puVar6,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    FUN_00403e20((void *)((int)this + 0x40),"");
    goto joined_r0x00557e5b;
  case 6:
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffe;
    FUN_00403de0(local_10c,(undefined4 *)((int)this + 0x40));
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_00557af0((int)this);
    FUN_0055be10(this,local_10c,'\0');
joined_r0x00557e5b:
    uVar7 = 1;
    if (0x14 < local_104) {
LAB_00557ed9:
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
    goto switchD_00557c38_caseD_1;
  }
  uVar7 = 1;
switchD_00557c38_caseD_1:
  this_00 = (void *)((int)this + 0x40);
  uVar3 = FUN_00413450(this_00,".ini",0,4);
  if (uVar3 != 0xffffffff) {
    puVar6 = FUN_00430770(this_00,local_8c,0,uVar3);
    FUN_004015d0(this_00,(char *)*puVar6,puVar6[1]);
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
  }
  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  ExceptionList = local_c;
  return uVar7;
}


//// FUNCTION FUN_00557fa0 @ 00557fa0 ////

void __thiscall FUN_00557fa0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *this_00;
  
  if (param_1[1] != 0) {
    FUN_00556240(this,param_1);
    this_00 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
    FUN_00557720(this_00,param_1,param_2);
  }
  return;
}


//// FUNCTION FUN_00557fe0 @ 00557fe0 ////

void __thiscall FUN_00557fe0(void *this,undefined4 *param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 *this_00;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00569c30(local_2c,param_2);
  local_4 = 0;
  if (param_1[1] != 0) {
    FUN_00556240(this,param_1);
    this_00 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
    FUN_00557720(this_00,param_1,puVar1);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00558080 @ 00558080 ////

void __thiscall FUN_00558080(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *this_00;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00569d60(local_2c,param_2);
  local_4 = 0;
  if (param_1[1] != 0) {
    FUN_00556240(this,param_1);
    this_00 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
    FUN_00557720(this_00,param_1,puVar1);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00558120 @ 00558120 ////

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_00558120(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb0578;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  this_00 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
  puVar3 = this_00;
  if ((this_00[0x18] == 0) ||
     (puVar3 = (undefined4 *)0x0, (int)(this_00[0x19] - this_00[0x18]) >> 2 == 0))
  goto joined_r0x00558293;
  switch(param_1) {
  case 0:
    puVar3 = (undefined4 *)FUN_00556050(this_00,&local_2c);
    cVar1 = (char)puVar3;
    break;
  case 1:
    puVar3 = (undefined4 *)FUN_00556090(this_00,&local_2c);
    cVar1 = (char)puVar3;
    break;
  case 2:
    puVar3 = (undefined4 *)FUN_005569f0(this_00,(undefined4 *)((int)this + 0x60),&local_2c);
    cVar1 = (char)puVar3;
    break;
  case 3:
    puVar3 = (undefined4 *)FUN_00556a50(this_00,(undefined4 *)((int)this + 0x60),&local_2c);
    cVar1 = (char)puVar3;
    break;
  case 4:
    FUN_00401e30(&local_2c,(undefined4 *)((int)this + 0x60));
  default:
    goto switchD_00558199_caseD_5;
  case 7:
    puVar3 = (undefined4 *)FUN_005560e0(this_00,&local_2c);
    cVar1 = (char)puVar3;
  }
  if (cVar1 == '\0') {
joined_r0x00558293:
    if (local_24 < 0x15) {
      ExceptionList = local_c;
      return (uint)puVar3 & 0xffffff00;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
switchD_00558199_caseD_5:
  uVar2 = FUN_004015d0((void *)((int)this + 0x60),local_2c,local_28);
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_005582e0 @ 005582e0 ////

undefined4 * __thiscall FUN_005582e0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
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
  
  puStack_8 = &LAB_00cb0598;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  puVar1 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
  if ((puVar1[0x18] != 0) && ((int)(puVar1[0x19] - puVar1[0x18]) >> 2 != 0)) {
    switch(param_2) {
    case 0:
      FUN_00556050(puVar1,&local_6c);
      break;
    case 1:
      FUN_00556090(puVar1,&local_6c);
      break;
    case 2:
      uVar2 = FUN_005569f0(puVar1,(undefined4 *)((int)this + 0x60),&local_6c);
      if ((char)uVar2 == '\0') {
        puVar1 = FUN_005582e0(this,local_4c,0);
        FUN_00401e30(&local_6c,puVar1);
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
      }
      break;
    case 3:
      uVar2 = FUN_00556a50(puVar1,(undefined4 *)((int)this + 0x60),&local_6c);
      if ((char)uVar2 == '\0') {
        puVar1 = FUN_005582e0(this,local_2c,1);
        FUN_00401e30(&local_6c,puVar1);
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
      break;
    case 4:
      FUN_00401e30(&local_6c,(undefined4 *)((int)this + 0x60));
      break;
    case 7:
      FUN_005560e0(puVar1,&local_6c);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_6c,local_68);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00558490 @ 00558490 ////

undefined4 __thiscall FUN_00558490(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  FUN_00556240(this,param_1);
  puVar1 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
  piVar2 = (int *)FUN_00470b20(puVar1 + 0x1b,(int *)&param_1,(undefined4 *)((int)this + 0x60));
  return CONCAT31((int3)((uint)*piVar2 >> 8),*piVar2 != puVar1[0x1c]);
}


//// FUNCTION FUN_005584e0 @ 005584e0 ////

undefined4 * __thiscall FUN_005584e0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00556240(this,param_2);
  puVar2 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
  FUN_00470b20(puVar2 + 0x1b,(int *)&param_2,(undefined4 *)((int)this + 0x60));
  if ((param_2 != (undefined4 *)puVar2[0x1c]) &&
     (iVar1 = *(int *)(puVar2[0x18] + param_2[0xb] * 4), iVar1 != 0)) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,*(char **)(iVar1 + 0x20),*(uint *)(iVar1 + 0x24));
    return param_1;
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,"",0);
  return param_1;
}


//// FUNCTION FUN_00558590 @ 00558590 ////

undefined4 * __thiscall FUN_00558590(void *this,undefined4 *param_1,undefined4 param_2)

{
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb05b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005582e0(this,local_2c,param_2);
  local_4 = 0;
  FUN_005584e0(this,param_1,local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00558610 @ 00558610 ////

float10 __thiscall FUN_00558610(void *param_1,undefined4 *param_2,float param_3)

{
  float10 fVar1;
  float fStack0000000c;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb05d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005584e0(param_1,&local_2c,param_2);
  local_4 = 0;
  if (local_28 != 0) {
    fVar1 = FUN_00567d60(&local_2c);
    fStack0000000c = (float)fVar1;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return (float10)fStack0000000c;
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return (float10)param_3;
}


//// FUNCTION FUN_005586b0 @ 005586b0 ////

float10 __thiscall FUN_005586b0(void *param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  float fStack0000000c;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb05f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558590(param_1,&local_2c,param_2);
  local_4 = 0;
  if (local_28 != 0) {
    fVar1 = FUN_00567d60(&local_2c);
    fStack0000000c = (float)fVar1;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return (float10)fStack0000000c;
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return (float10)param_3;
}


//// FUNCTION FUN_00558750 @ 00558750 ////

undefined4 __thiscall FUN_00558750(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005584e0(this,&local_2c,param_1);
  local_4 = 0;
  if (local_28 != 0) {
    uVar1 = FUN_00567d80(&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return uVar1;
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_2;
}


//// FUNCTION FUN_005587f0 @ 005587f0 ////

undefined4 __thiscall FUN_005587f0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558590(this,&local_2c,param_1);
  local_4 = 0;
  if (local_28 != 0) {
    uVar1 = FUN_00567d80(&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return uVar1;
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_2;
}


//// FUNCTION FUN_005588c0 @ 005588c0 ////

void __fastcall FUN_005588c0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d24188;
  return;
}


//// FUNCTION FUN_00558920 @ 00558920 ////

void __fastcall FUN_00558920(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb06b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d24194;
  local_4 = 5;
  FUN_005574a0(param_1[0xe]);
  FUN_004015d0(param_1 + 0x10,"",0);
  FUN_004015d0(param_1 + 0x18,"",0);
  FUN_004015d0(param_1 + 0x20,"",0);
  _Memory = (void *)param_1[0xe];
  param_1[0x28] = 0;
  if (_Memory != (void *)0x0) {
    FUN_00557220((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (0x14 < (uint)param_1[0x2c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2a]);
  }
  if (0x14 < (uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  if (0x14 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  if (0x14 < (uint)param_1[0x12]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00558a50 @ 00558a50 ////

undefined4 __thiscall FUN_00558a50(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_00557890(this,param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_004015d0((void *)((int)this + 0x40),(char *)*param_1,param_1[1]);
  uVar2 = FUN_00558120(this,0);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00558a90 @ 00558a90 ////

bool __thiscall FUN_00558a90(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb06e0;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x44) == 0) {
    ExceptionList = &local_c;
    puVar1 = FUN_00557890(this,param_1,param_2);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004015d0((void *)((int)this + 0x40),(char *)*param_1,param_1[1]);
      FUN_00558120(this,0);
      ExceptionList = local_c;
      return true;
    }
    ExceptionList = local_c;
    return false;
  }
  ExceptionList = &local_c;
  puVar1 = FUN_004312e0(local_2c,(undefined4 *)((int)this + 0x40),"/");
  local_4 = 0;
  puVar1 = FUN_0047aee0(local_4c,puVar1,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = FUN_00557890(this,puVar1,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004015d0((undefined4 *)((int)this + 0x40),(char *)*puVar1,puVar1[1]);
    FUN_00558120(this,0);
  }
  if (local_44 < 0x15) {
    if (local_24 < 0x15) {
      ExceptionList = local_c;
      return puVar2 != (undefined4 *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c[0]);
}


//// FUNCTION FUN_00558bb0 @ 00558bb0 ////

undefined1 __thiscall FUN_00558bb0(void *this,undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char **ppcVar5;
  undefined1 local_ad;
  char *local_ac;
  uint local_a8;
  uint local_a4;
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
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
  puStack_8 = &LAB_00cb06fb;
  local_c = ExceptionList;
  if ((*(byte *)((int)this + 0x3c) & 1) != 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_00557b40(this,param_1);
    ExceptionList = local_c;
    return uVar1;
  }
  local_ad = 1;
  ExceptionList = &local_c;
  FUN_0055bf90(this,&local_ac,param_1);
  local_4 = 0;
  switch(param_1) {
  case 0:
    puVar3 = (undefined4 *)((int)this + 0x40);
    FUN_004015d0(puVar3,local_ac,local_a8);
    local_8c = local_80;
    local_80[0] = '\0';
    local_88 = 0;
    local_84 = 0x14;
    _strncpy(local_8c,"",0);
    ppcVar5 = &local_8c;
    local_88 = 0;
    *local_8c = '\0';
    uVar4 = FUN_00401ec0(puVar3,ppcVar5);
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if ((char)uVar4 != '\0') {
      puVar3 = FUN_0055bf90(this,local_6c,2);
      FUN_00401e30(&local_ac,puVar3);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
    }
  default:
    goto switchD_00558c2c_caseD_1;
  case 2:
    puVar3 = FUN_0055bf90(this,local_4c,0);
    uVar4 = FUN_00401ec0(&local_ac,puVar3);
    cVar2 = (char)uVar4;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    break;
  case 3:
    puVar3 = FUN_0055bf90(this,local_2c,1);
    uVar4 = FUN_00401ec0(&local_ac,puVar3);
    cVar2 = (char)uVar4;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    break;
  case 5:
  case 6:
    uVar4 = FUN_00401ec0(&local_ac,(undefined4 *)((int)this + 0x40));
    cVar2 = (char)uVar4;
  }
  if (cVar2 != '\0') {
    local_ad = 0;
  }
switchD_00558c2c_caseD_1:
  FUN_004015d0((void *)((int)this + 0x40),local_ac,local_a8);
  FUN_00558120(this,0);
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  ExceptionList = local_c;
  return local_ad;
}


//// FUNCTION FUN_00558de0 @ 00558de0 ////

undefined4 * __thiscall FUN_00558de0(void *this,undefined4 *param_1)

{
  FUN_005582e0(this,param_1,4);
  return param_1;
}


//// FUNCTION FUN_00558e00 @ 00558e00 ////

void __fastcall FUN_00558e00(void *param_1)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 **ppuVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
  undefined4 *local_204;
  char *local_200;
  uint local_1fc;
  uint local_1f8;
  char local_1f4 [20];
  char *local_1e0;
  uint local_1dc;
  uint local_1d8;
  char local_1d4 [20];
  byte *local_1c0;
  uint local_1bc;
  uint local_1b8;
  byte local_1b4 [20];
  undefined4 *local_1a0 [2];
  char *local_198;
  uint local_194;
  uint local_190;
  char local_18c [20];
  char *local_178;
  uint local_174;
  uint local_170;
  char local_16c [20];
  char *local_158;
  uint local_154;
  uint local_150;
  char local_14c [20];
  char *local_138;
  uint local_134;
  uint local_130;
  char *local_118;
  uint local_114;
  uint local_110;
  char *local_f8;
  uint local_f4;
  uint local_f0;
  void *local_d8 [2];
  uint local_d0;
  void *local_b8 [2];
  uint local_b0;
  void *local_98 [2];
  uint local_90;
  void *local_78 [2];
  uint local_70;
  void *local_58 [2];
  uint local_50;
  void *local_38 [2];
  uint local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cb0773;
  local_14 = ExceptionList;
  local_1c0 = local_1b4;
  local_1b4[0] = 0;
  local_1bc = 0;
  local_1b8 = 0x14;
  local_198 = local_18c;
  local_18c[0] = '\0';
  local_194 = 0;
  local_190 = 0x14;
  local_200 = local_1f4;
  local_1f4[0] = '\0';
  local_1fc = 0;
  local_1f8 = 0x14;
  local_1e0 = local_1d4;
  local_1d4[0] = '\0';
  local_1dc = 0;
  local_1d8 = 0x14;
  local_c._0_1_ = 3;
  local_c._1_3_ = 0;
  ExceptionList = &local_14;
  FUN_00558bb0(param_1,0);
  do {
    local_158 = local_14c;
    local_14c[0] = '\0';
    local_154 = 0;
    local_150 = 0x14;
    local_c._0_1_ = 4;
    puVar5 = FUN_00557890(param_1,(undefined4 *)((int)param_1 + 0x40),(undefined4 *)0x1);
    piVar2 = (int *)puVar5[0x18];
    if ((((piVar2 != (int *)0x0) && (puVar5[0x19] - (int)piVar2 >> 2 != 0)) &&
        (piVar2 != (int *)0x0)) && (puVar5[0x19] - (int)piVar2 >> 2 != 0)) {
      FUN_004015d0(&local_158,*(char **)*piVar2,((undefined4 *)*piVar2)[1]);
      uVar13 = local_154;
      pcVar3 = local_158;
      if (*(uint *)((int)param_1 + 0x68) <= local_154) {
        if (0x14 < *(uint *)((int)param_1 + 0x68)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)param_1 + 0x60));
        }
        uVar6 = local_154 + 0x20 & 0xffffffe0;
        *(uint *)((int)param_1 + 0x68) = uVar6;
        pvVar7 = _malloc(uVar6);
        *(void **)((int)param_1 + 0x60) = pvVar7;
      }
      _strncpy(*(char **)((int)param_1 + 0x60),pcVar3,uVar13);
      *(uint *)((int)param_1 + 100) = uVar13;
      *(undefined1 *)(uVar13 + *(int *)((int)param_1 + 0x60)) = 0;
    }
    local_c = CONCAT31(local_c._1_3_,3);
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    puVar5 = FUN_005562f0(param_1,local_d8,0);
    uVar13 = puVar5[1];
    pcVar3 = (char *)*puVar5;
    if (local_1b8 <= uVar13) {
      if (0x14 < local_1b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1c0);
      }
      local_1b8 = uVar13 + 0x20 & 0xffffffe0;
      local_1c0 = _malloc(local_1b8);
    }
    _strncpy((char *)local_1c0,pcVar3,uVar13);
    pbVar14 = local_1c0;
    local_1c0[uVar13] = 0;
    local_1bc = uVar13;
    if (0x14 < local_d0) {
                    /* WARNING: Subroutine does not return */
      _free(local_d8[0]);
    }
    if (local_1d8 <= uVar13) {
      if (0x14 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1e0);
      }
      local_1d8 = uVar13 + 0x20 & 0xffffffe0;
      local_1e0 = _malloc(local_1d8);
    }
    _strncpy(local_1e0,(char *)pbVar14,uVar13);
    local_1e0[uVar13] = '\0';
    uVar6 = 0;
    local_1dc = uVar13;
    if (uVar13 != 0) {
      do {
        iVar8 = _tolower((int)local_1e0[uVar6]);
        local_1e0[uVar6] = (char)iVar8;
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_1dc);
    }
    FUN_0048fab0(&DAT_0104cd78,local_1a0,&local_1e0);
    while( true ) {
      puVar5 = FUN_00558de0(param_1,local_98);
      uVar13 = puVar5[1];
      pcVar3 = (char *)*puVar5;
      if (local_190 <= uVar13) {
        if (0x14 < local_190) {
                    /* WARNING: Subroutine does not return */
          _free(local_198);
        }
        local_190 = uVar13 + 0x20 & 0xffffffe0;
        local_198 = _malloc(local_190);
      }
      _strncpy(local_198,pcVar3,uVar13);
      local_198[uVar13] = '\0';
      local_194 = uVar13;
      if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
        _free(local_98[0]);
      }
      puVar5 = FUN_004312e0(local_b8,&local_1e0,"/");
      puVar5 = FUN_0047aee0(local_58,puVar5,&local_198);
      uVar13 = puVar5[1];
      pcVar3 = (char *)*puVar5;
      if (local_1f8 <= uVar13) {
        if (0x14 < local_1f8) {
                    /* WARNING: Subroutine does not return */
          _free(local_200);
        }
        local_1f8 = uVar13 + 0x20 & 0xffffffe0;
        local_200 = _malloc(local_1f8);
      }
      _strncpy(local_200,pcVar3,uVar13);
      piVar2 = DAT_0104cd8c;
      local_200[uVar13] = '\0';
      local_1fc = uVar13;
      if (0x14 < local_50) {
                    /* WARNING: Subroutine does not return */
        _free(local_58[0]);
      }
      if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
        _free(local_b8[0]);
      }
      if ((DAT_0104cd88 == 0) ||
         ((uint)(DAT_0104cd90 - DAT_0104cd88 >> 5) <= (uint)((int)DAT_0104cd8c - DAT_0104cd88 >> 5))
         ) {
        FUN_00439fd0(&DAT_0104cd84,DAT_0104cd8c,1,&local_200);
      }
      else {
        FUN_00439ea0(DAT_0104cd8c,1,&local_200);
        DAT_0104cd8c = piVar2 + 8;
      }
      uVar13 = 0;
      if (local_1fc != 0) {
        do {
          iVar8 = _tolower((int)local_200[uVar13]);
          local_200[uVar13] = (char)iVar8;
          uVar13 = uVar13 + 1;
        } while (uVar13 < local_1fc);
      }
      FUN_0048fab0(&DAT_0104cd6c,local_1a0,&local_200);
      local_178 = local_16c;
      local_16c[0] = '\0';
      local_174 = 0;
      local_170 = 0x14;
      local_c._0_1_ = 5;
      puVar5 = FUN_00557890(param_1,(undefined4 *)((int)param_1 + 0x40),(undefined4 *)0x1);
      if ((puVar5[0x18] == 0) || ((int)(puVar5[0x19] - puVar5[0x18]) >> 2 == 0)) break;
      piVar2 = (int *)((int)param_1 + 0x60);
      local_1a0[0] = FUN_00470660(puVar5 + 0x1b,piVar2);
      if (local_1a0[0] == (undefined4 *)puVar5[0x1c]) {
LAB_0055938a:
        local_204 = (undefined4 *)puVar5[0x1c];
        ppuVar10 = &local_204;
      }
      else {
        pbVar14 = (byte *)local_1a0[0][3];
        pbVar9 = (byte *)*piVar2;
        do {
          bVar1 = *pbVar9;
          bVar15 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_00559374:
            iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00559379;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar15 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_00559374;
          pbVar9 = pbVar9 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_00559379:
        if (iVar8 < 0) goto LAB_0055938a;
        ppuVar10 = local_1a0;
      }
      if ((*ppuVar10 == (undefined4 *)puVar5[0x1c]) || (iVar8 = (*ppuVar10)[0xb] + 1, iVar8 < 0))
      break;
      if (puVar5[0x18] == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = (int)(puVar5[0x19] - puVar5[0x18]) >> 2;
      }
      if (iVar11 <= iVar8) break;
      puVar5 = *(undefined4 **)(puVar5[0x18] + iVar8 * 4);
      FUN_004015d0(&local_178,(char *)*puVar5,puVar5[1]);
      uVar13 = local_174;
      pcVar3 = local_178;
      if (*(uint *)((int)param_1 + 0x68) <= local_174) {
        if (0x14 < *(uint *)((int)param_1 + 0x68)) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar2);
        }
        uVar6 = local_174 + 0x20 & 0xffffffe0;
        *(uint *)((int)param_1 + 0x68) = uVar6;
        pvVar7 = _malloc(uVar6);
        *piVar2 = (int)pvVar7;
      }
      _strncpy((char *)*piVar2,pcVar3,uVar13);
      *(uint *)((int)param_1 + 100) = uVar13;
      *(undefined1 *)(uVar13 + *piVar2) = 0;
      local_c = CONCAT31(local_c._1_3_,3);
      if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
        _free(local_178);
      }
    }
    if (0x14 < local_170) {
      local_c._0_1_ = 3;
                    /* WARNING: Subroutine does not return */
      _free(local_178);
    }
    local_c._0_1_ = 3;
    if ((*(byte *)((int)param_1 + 0x3c) & 1) == 0) {
      FUN_0055bf90(param_1,&local_118,6);
      uVar13 = local_114;
      pcVar3 = local_118;
      local_c._0_1_ = 6;
      if (*(uint *)((int)param_1 + 0x48) <= local_114) {
        if (0x14 < *(uint *)((int)param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)param_1 + 0x40));
        }
        uVar6 = local_114 + 0x20 & 0xffffffe0;
        *(uint *)((int)param_1 + 0x48) = uVar6;
        pvVar7 = _malloc(uVar6);
        *(void **)((int)param_1 + 0x40) = pvVar7;
      }
      _strncpy(*(char **)((int)param_1 + 0x40),pcVar3,uVar13);
      *(uint *)((int)param_1 + 0x44) = uVar13;
      *(undefined1 *)(uVar13 + *(int *)((int)param_1 + 0x40)) = 0;
      FUN_00558120(param_1,0);
      local_c._0_1_ = 3;
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
    }
    else {
      FUN_00557b40(param_1,6);
    }
    puVar5 = FUN_005562f0(param_1,local_78,0);
    pbVar14 = (byte *)*puVar5;
    pbVar9 = local_1c0;
    do {
      bVar1 = *pbVar9;
      bVar15 = bVar1 < *pbVar14;
      if (bVar1 != *pbVar14) {
LAB_00559588:
        iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_0055958d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar15 = bVar1 < pbVar14[1];
      if (bVar1 != pbVar14[1]) goto LAB_00559588;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar1 != 0);
    iVar8 = 0;
LAB_0055958d:
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78[0]);
    }
    if (iVar8 != 0) {
      FUN_00558e00(param_1);
      if ((*(byte *)((int)param_1 + 0x3c) & 1) == 0) {
        FUN_0055bf90(param_1,&local_f8,5);
        uVar13 = local_f4;
        pcVar3 = local_f8;
        local_c._0_1_ = 7;
        if (*(uint *)((int)param_1 + 0x48) <= local_f4) {
          if (0x14 < *(uint *)((int)param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)param_1 + 0x40));
          }
          uVar6 = local_f4 + 0x20 & 0xffffffe0;
          *(uint *)((int)param_1 + 0x48) = uVar6;
          pvVar7 = _malloc(uVar6);
          *(void **)((int)param_1 + 0x40) = pvVar7;
        }
        _strncpy(*(char **)((int)param_1 + 0x40),pcVar3,uVar13);
        *(uint *)((int)param_1 + 0x44) = uVar13;
        *(undefined1 *)(uVar13 + *(int *)((int)param_1 + 0x40)) = 0;
        FUN_00558120(param_1,0);
        local_c._0_1_ = 3;
        if (0x14 < local_f0) {
                    /* WARNING: Subroutine does not return */
          _free(local_f8);
        }
      }
      else {
        FUN_00557b40(param_1,5);
      }
    }
    if ((*(byte *)((int)param_1 + 0x3c) & 1) == 0) {
      FUN_0055bf90(param_1,&local_138,2);
      local_c = CONCAT31(local_c._1_3_,8);
      puVar5 = FUN_0055bf90(param_1,local_38,0);
      uVar12 = FUN_00401ec0(&local_138,puVar5);
      uVar13 = local_134;
      pcVar3 = local_138;
      if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_38[0]);
      }
      cVar4 = (char)uVar12 == '\0';
      if (*(uint *)((int)param_1 + 0x48) <= local_134) {
        if (0x14 < *(uint *)((int)param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)param_1 + 0x40));
        }
        uVar6 = local_134 + 0x20 & 0xffffffe0;
        *(uint *)((int)param_1 + 0x48) = uVar6;
        pvVar7 = _malloc(uVar6);
        *(void **)((int)param_1 + 0x40) = pvVar7;
      }
      _strncpy(*(char **)((int)param_1 + 0x40),pcVar3,uVar13);
      *(uint *)((int)param_1 + 0x44) = uVar13;
      *(undefined1 *)(uVar13 + *(int *)((int)param_1 + 0x40)) = 0;
      FUN_00558120(param_1,0);
      local_c._0_1_ = 3;
      if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
        _free(local_138);
      }
    }
    else {
      cVar4 = FUN_00557b40(param_1,2);
    }
    if (cVar4 == '\0') {
      if (0x14 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        _free(local_1e0);
      }
      if (0x14 < local_1f8) {
                    /* WARNING: Subroutine does not return */
        _free(local_200);
      }
      if (0x14 < local_190) {
                    /* WARNING: Subroutine does not return */
        _free(local_198);
      }
      if (local_1b8 < 0x15) {
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_1c0);
    }
  } while( true );
}


//// FUNCTION FUN_005597f0 @ 005597f0 ////

void __thiscall FUN_005597f0(void *this,void *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  uint _Count;
  bool bVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint _Size;
  void *pvVar8;
  char *local_ac;
  uint local_a8;
  uint local_a4;
  char local_a0 [20];
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
  puStack_8 = &LAB_00cb079b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00558120(this,0);
  while( true ) {
    puVar4 = FUN_00558de0(this,local_8c);
    bVar3 = FUN_00430950(puVar4,"");
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    if (bVar3) {
      pcVar5 = param_2;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      FUN_009d3530(param_1,param_2,(int)pcVar5 - (int)(param_2 + 1));
      FUN_009d3530(param_1,&DAT_00d24198,1);
      puVar4 = FUN_00558de0(this,local_4c);
      pcVar5 = (char *)*puVar4;
      local_4 = 0;
      pcVar6 = pcVar5;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_009d3530(param_1,pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
      local_4 = 0xffffffff;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      puVar4 = FUN_00558590(this,local_6c,4);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      if (puVar4[1] != 0) {
        FUN_009d3530(param_1,&DAT_00d23cbc,3);
        puVar4 = FUN_00558590(this,local_2c,4);
        pcVar5 = (char *)*puVar4;
        local_4 = 1;
        pcVar6 = pcVar5;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_009d3530(param_1,pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
      FUN_009d3530(param_1,&lpOutputString_00d208ec,2);
    }
    local_ac = local_a0;
    local_a0[0] = '\0';
    local_a8 = 0;
    local_a4 = 0x14;
    local_4 = 2;
    puVar4 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
    if ((puVar4[0x18] == 0) || ((int)(puVar4[0x19] - puVar4[0x18]) >> 2 == 0)) break;
    piVar1 = (int *)((int)this + 0x60);
    uVar7 = FUN_005569f0(puVar4,piVar1,&local_ac);
    _Count = local_a8;
    pcVar5 = local_ac;
    if ((char)uVar7 == '\0') break;
    if (*(uint *)((int)this + 0x68) <= local_a8) {
      if (0x14 < *(uint *)((int)this + 0x68)) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar1);
      }
      _Size = local_a8 + 0x20 & 0xffffffe0;
      *(uint *)((int)this + 0x68) = _Size;
      pvVar8 = _malloc(_Size);
      *piVar1 = (int)pvVar8;
    }
    _strncpy((char *)*piVar1,pcVar5,_Count);
    *(uint *)((int)this + 100) = _Count;
    *(undefined1 *)(_Count + *piVar1) = 0;
    local_4 = 0xffffffff;
    if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
  }
  if (local_a4 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_ac);
}


//// FUNCTION FUN_00559ac0 @ 00559ac0 ////

void __thiscall FUN_00559ac0(void *this,void *param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  byte *pbVar14;
  bool bVar15;
  byte *local_12c;
  uint local_128;
  uint local_124;
  byte local_120 [20];
  char local_10c [32];
  char *local_ec;
  uint local_e8;
  uint local_e4;
  char *local_cc;
  uint local_c8;
  uint local_c4;
  char *local_ac;
  uint local_a8;
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
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cb07e7;
  local_c = ExceptionList;
  local_12c = local_120;
  local_120[0] = 0;
  local_128 = 0;
  local_124 = 0x14;
  local_4 = 0;
  uStack_3 = 0;
  ExceptionList = &local_c;
  FUN_00558bb0(this,0);
  do {
    puVar4 = FUN_005562f0(this,local_4c,0);
    uVar2 = puVar4[1];
    pcVar6 = (char *)*puVar4;
    if (local_124 <= uVar2) {
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_124 = uVar2 + 0x20 & 0xffffffe0;
      local_12c = _malloc(local_124);
    }
    _strncpy((char *)local_12c,pcVar6,uVar2);
    local_12c[uVar2] = 0;
    local_128 = uVar2;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    local_10c[0] = '\0';
    puVar4 = FUN_00557890(this,&local_12c,(undefined4 *)0x1);
    iVar13 = 0;
    iVar5 = FUN_00448220(&local_12c,&DAT_00d2410c,0,2);
    if (iVar5 != -1) {
      iVar13 = 0;
      do {
        local_10c[iVar13] = '\t';
        iVar13 = iVar13 + 1;
        if (0x1e < iVar13) break;
        iVar5 = FUN_00448220(&local_12c,&DAT_00d2410c,iVar5 + 1,2);
      } while (iVar5 != -1);
    }
    local_10c[iVar13] = '\0';
    if (local_128 != 0) {
      FUN_009d3530(param_1,&lpOutputString_00d208ec,2);
      pcVar6 = local_10c;
      do {
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      FUN_009d3530(param_1,local_10c,(int)pcVar6 - (int)(local_10c + 1));
      pcVar6 = "{";
      if (*(char *)(puVar4 + 0x1e) == '\0') {
        pcVar6 = "[";
      }
      pcVar7 = pcVar6;
      do {
        cVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      FUN_009d3530(param_1,pcVar6,(int)pcVar7 - (int)(pcVar6 + 1));
      puVar8 = FUN_005562f0(this,local_8c,0);
      pcVar6 = (char *)*puVar8;
      local_4 = 1;
      pcVar7 = pcVar6;
      do {
        cVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      FUN_009d3530(param_1,pcVar6,(int)pcVar7 - (int)(pcVar6 + 1));
      local_4 = 0;
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      pcVar6 = "}\r\n";
      if (*(char *)(puVar4 + 0x1e) == '\0') {
        pcVar6 = "]\r\n";
      }
      pcVar7 = pcVar6;
      do {
        cVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      FUN_009d3530(param_1,pcVar6,(int)pcVar7 - (int)(pcVar6 + 1));
    }
    FUN_005597f0(this,param_1,local_10c);
    if ((*(byte *)((int)this + 0x3c) & 1) == 0) {
      FUN_0055bf90(this,&local_cc,6);
      uVar2 = local_c8;
      pcVar6 = local_cc;
      local_4 = 2;
      if (*(uint *)((int)this + 0x48) <= local_c8) {
        if (0x14 < *(uint *)((int)this + 0x48)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 0x40));
        }
        uVar11 = local_c8 + 0x20 & 0xffffffe0;
        *(uint *)((int)this + 0x48) = uVar11;
        pvVar12 = _malloc(uVar11);
        *(void **)((int)this + 0x40) = pvVar12;
      }
      _strncpy(*(char **)((int)this + 0x40),pcVar6,uVar2);
      *(uint *)((int)this + 0x44) = uVar2;
      *(undefined1 *)(uVar2 + *(int *)((int)this + 0x40)) = 0;
      FUN_00558120(this,0);
      local_4 = 0;
      if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
    }
    else {
      FUN_00557b40(this,6);
    }
    puVar4 = FUN_005562f0(this,local_6c,0);
    pbVar14 = (byte *)*puVar4;
    pbVar9 = local_12c;
    do {
      bVar1 = *pbVar9;
      bVar15 = bVar1 < *pbVar14;
      if (bVar1 != *pbVar14) {
LAB_00559da9:
        iVar5 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00559dae;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar15 = bVar1 < pbVar14[1];
      if (bVar1 != pbVar14[1]) goto LAB_00559da9;
      pbVar9 = pbVar9 + 2;
      pbVar14 = pbVar14 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00559dae:
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (iVar5 != 0) {
      FUN_00559ac0(this,param_1);
      if ((*(byte *)((int)this + 0x3c) & 1) == 0) {
        FUN_0055bf90(this,&local_ac,5);
        uVar2 = local_a8;
        pcVar6 = local_ac;
        local_4 = 3;
        if (*(uint *)((int)this + 0x48) <= local_a8) {
          if (0x14 < *(uint *)((int)this + 0x48)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)this + 0x40));
          }
          uVar11 = local_a8 + 0x20 & 0xffffffe0;
          *(uint *)((int)this + 0x48) = uVar11;
          pvVar12 = _malloc(uVar11);
          *(void **)((int)this + 0x40) = pvVar12;
        }
        _strncpy(*(char **)((int)this + 0x40),pcVar6,uVar2);
        *(uint *)((int)this + 0x44) = uVar2;
        *(undefined1 *)(uVar2 + *(int *)((int)this + 0x40)) = 0;
        FUN_00558120(this,0);
        local_4 = 0;
        if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
      }
      else {
        FUN_00557b40(this,5);
      }
    }
    if ((*(byte *)((int)this + 0x3c) & 1) == 0) {
      FUN_0055bf90(this,&local_ec,2);
      _local_4 = CONCAT31(uStack_3,4);
      puVar4 = FUN_0055bf90(this,local_2c,0);
      uVar10 = FUN_00401ec0(&local_ec,puVar4);
      uVar2 = local_e8;
      pcVar6 = local_ec;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      cVar3 = (char)uVar10 == '\0';
      if (*(uint *)((int)this + 0x48) <= local_e8) {
        if (0x14 < *(uint *)((int)this + 0x48)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 0x40));
        }
        uVar11 = local_e8 + 0x20 & 0xffffffe0;
        *(uint *)((int)this + 0x48) = uVar11;
        pvVar12 = _malloc(uVar11);
        *(void **)((int)this + 0x40) = pvVar12;
      }
      _strncpy(*(char **)((int)this + 0x40),pcVar6,uVar2);
      *(uint *)((int)this + 0x44) = uVar2;
      *(undefined1 *)(uVar2 + *(int *)((int)this + 0x40)) = 0;
      FUN_00558120(this,0);
      local_4 = 0;
      if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
    }
    else {
      cVar3 = FUN_00557b40(this,2);
    }
    if (cVar3 == '\0') {
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00559fb0 @ 00559fb0 ////

undefined4 * __fastcall FUN_00559fb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb085b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d24194;
  puVar1 = operator_new(0x7c);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_005573e0(puVar1);
  }
  param_1[0xe] = puVar1;
  puVar1 = param_1 + 0x10;
  param_1[0xf] = param_1[0xf] & 0xfffffffc | 4;
  *puVar1 = param_1 + 0x13;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x14;
  FUN_004015d0(puVar1,"",0);
  param_1[0x18] = param_1 + 0x1b;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x14;
  FUN_004015d0(param_1 + 0x18,"",0);
  param_1[0x20] = param_1 + 0x23;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x14;
  FUN_004015d0(param_1 + 0x20,"",0);
  param_1[0x28] = 0;
  param_1[0x2a] = param_1 + 0x2d;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x14;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  param_1[0x34] = param_1;
  FUN_00acdb9e(0xe52cf4);
  iVar2 = FUN_0097dda0();
  param_1[0x35] = iVar2;
  if (s___AVCProperty_TM___00e52ce0[0x13] != '\0') {
    iVar2 = 200;
    pcVar5 = "CacheLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe52cf4);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    s___AVCProperty_TM___00e52ce0[0x13] = '\0';
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4 = CONCAT31(local_4._1_3_,7);
  puVar4 = FUN_00557890(param_1,&local_2c,(undefined4 *)0x1);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_004015d0(puVar1,local_2c,local_28);
    FUN_00558120(param_1,0);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0055a190 @ 0055a190 ////

undefined4 * __thiscall FUN_0055a190(void *this,byte param_1)

{
  FUN_00558920(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0055a230 @ 0055a230 ////

undefined4 __thiscall FUN_0055a230(void *this,undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  size_t sVar10;
  bool bVar11;
  char *local_210;
  uint local_20c;
  uint local_208;
  char local_204 [20];
  int local_1f0;
  char *local_1ec;
  uint local_1e8;
  uint local_1e4;
  char local_1e0 [20];
  undefined1 *local_1cc;
  undefined4 local_1c8;
  uint local_1c4;
  undefined1 local_1c0 [20];
  char *local_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  char local_1a0 [20];
  char *local_18c;
  int local_188;
  uint local_184;
  char local_180 [20];
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
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb08db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004015d0((void *)((int)this + 0xa8),(char *)*param_1,param_1[1]);
  local_210 = local_204;
  local_204[0] = '\0';
  local_20c = 0;
  local_208 = 0x14;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  local_1f0 = 0;
  bVar11 = false;
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 2;
  uVar3 = FUN_00552830(param_1,&local_210);
  cVar2 = (char)uVar3;
  do {
    if (cVar2 == '\0') {
      local_1ec = local_1e0;
      *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffd;
      local_1e0[0] = '\0';
      local_1e8 = 0;
      local_1e4 = 0x14;
      _strncpy(local_1ec,"",0);
      local_1e8 = 0;
      *local_1ec = '\0';
      local_4 = CONCAT31(local_4._1_3_,9);
      puVar4 = FUN_00557890(this,&local_1ec,(undefined4 *)0x1);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_004015d0((void *)((int)this + 0x40),local_1ec,local_1e8);
        FUN_00558120(this,0);
      }
      if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      if (0x14 < local_208) {
                    /* WARNING: Subroutine does not return */
        _free(local_210);
      }
      ExceptionList = local_c;
      return CONCAT31((int3)(local_208 >> 8),1);
    }
    if (local_20c != 0) {
      cVar2 = local_210[local_20c - 1];
      while (cVar2 == '\\') {
        local_1cc = local_1c0;
        local_1c0[0] = 0;
        local_1c8 = 0;
        local_1c4 = 0x14;
        local_4._0_1_ = 1;
        uVar3 = FUN_00552830(param_1,&local_1cc);
        if ((char)uVar3 == '\0') {
          local_4._0_1_ = 0;
          if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1cc);
          }
          break;
        }
        puVar4 = FUN_00430770(&local_210,local_12c,0,local_20c - 1);
        puVar4 = FUN_0047aee0(local_16c,puVar4,&local_1cc);
        uVar3 = puVar4[1];
        pcVar1 = (char *)*puVar4;
        if (local_208 <= uVar3) {
          if (0x14 < local_208) {
                    /* WARNING: Subroutine does not return */
            _free(local_210);
          }
          local_208 = uVar3 + 0x20 & 0xffffffe0;
          local_210 = _malloc(local_208);
        }
        _strncpy(local_210,pcVar1,uVar3);
        local_210[uVar3] = '\0';
        local_20c = uVar3;
        if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
          _free(local_16c[0]);
        }
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c[0]);
        }
        local_4._0_1_ = 0;
        if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1cc);
        }
        cVar2 = local_210[uVar3 - 1];
      }
      switch(*local_210) {
      case '\t':
      case ' ':
        break;
      default:
        if (bVar11) {
          uVar3 = FUN_0054e6b0(&local_210,&DAT_00d24090,0,2);
          iVar8 = FUN_00555ad0(&local_210,&DAT_00d24090,0xffffffff,2);
          if (((int)uVar3 < 0) || (iVar8 < (int)uVar3)) break;
          local_18c = local_180;
          local_180[0] = '\0';
          local_188 = 0;
          local_184 = 0x14;
          sVar10 = _sprintf(local_4c,(char *)&param_2_00d1b93c,local_1f0);
          FUN_004073f0(&local_18c,local_4c,sVar10);
          local_1f0 = local_1f0 + 1;
          puVar4 = FUN_00430770(&local_210,local_8c,uVar3,(iVar8 - uVar3) + 1);
          local_4._0_1_ = 8;
          if (local_188 != 0) {
            FUN_00556240(this,&local_18c);
            puVar9 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
            FUN_00557720(puVar9,&local_18c,puVar4);
          }
          pcVar1 = local_18c;
          uVar3 = local_184;
          if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c[0]);
          }
        }
        else {
          local_1ec = local_1e0;
          local_1e0[0] = '\0';
          local_1e8 = 0;
          local_1e4 = 0x14;
          _strncpy(local_1ec,"",0);
          local_1e8 = 0;
          *local_1ec = '\0';
          uVar6 = FUN_00413450(&local_210,"=",0,1);
          uVar3 = local_20c;
          if (uVar6 != 0xffffffff) {
            uVar7 = FUN_0054e6b0(&local_210,&DAT_00d23ccc,uVar6,3);
            iVar8 = FUN_00555ad0(&local_210,&DAT_00d24090,0xffffffff,2);
            uVar3 = uVar6;
            if ((-1 < (int)uVar7) && ((int)uVar7 <= iVar8)) {
              puVar4 = FUN_00430770(&local_210,local_10c,uVar7,(iVar8 - uVar7) + 1);
              FUN_004015d0(&local_1ec,(char *)*puVar4,puVar4[1]);
              if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
                _free(local_10c[0]);
              }
            }
          }
          uVar6 = FUN_0054e6b0(&local_210,&DAT_00d24090,0,2);
          iVar8 = FUN_00555ad0(&local_210,&DAT_00d241b8,uVar3,3);
          pcVar1 = local_1ec;
          uVar3 = local_1e4;
          if ((-1 < (int)uVar6) && ((int)uVar6 <= iVar8)) {
            puVar4 = FUN_00430770(&local_210,local_cc,uVar6,(iVar8 - uVar6) + 1);
            local_4._0_1_ = 6;
            if (puVar4[1] != 0) {
              FUN_00556240(this,puVar4);
              puVar9 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
              FUN_00557720(puVar9,puVar4,&local_1ec);
            }
            pcVar1 = local_1ec;
            uVar3 = local_1e4;
            if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
              _free(local_cc[0]);
            }
          }
        }
        local_4._0_1_ = 0;
        if (0x14 < uVar3) {
          local_4._0_1_ = 0;
                    /* WARNING: Subroutine does not return */
          _free(pcVar1);
        }
        break;
      case '#':
        local_1ac = local_1a0;
        local_1a0[0] = '\0';
        local_1a8 = 0;
        local_1a4 = 0x14;
        _strncpy(local_1ac,"#include",8);
        uVar6 = 8;
        local_1a8 = 8;
        uVar3 = 0;
        local_1ac[8] = '\0';
        puVar4 = FUN_00430770(&local_210,local_ac,uVar3,uVar6);
        uVar5 = FUN_00401ec0(puVar4,&local_1ac);
        if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac[0]);
        }
        if (0x14 < local_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ac);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = FUN_00430770(&local_210,local_6c,8,0xffffffff);
          local_4._0_1_ = 2;
          puVar4 = FUN_005525c0(param_1,local_ec,puVar4);
          local_4._0_1_ = 3;
          FUN_0055be10(this,puVar4,'\0');
          if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ec[0]);
          }
          local_4._0_1_ = 0;
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
        }
        break;
      case '[':
      case '{':
        local_1f0 = 0;
        uVar3 = FUN_0054e6b0(&local_210,&DAT_00d241c4,0,4);
        iVar8 = FUN_00555ad0(&local_210,&DAT_00d241bc,0xffffffff,4);
        if ((-1 < (int)uVar3) && ((int)uVar3 <= iVar8)) {
          puVar4 = FUN_00430770(&local_210,local_14c,uVar3,(iVar8 - uVar3) + 1);
          local_4._0_1_ = 4;
          FUN_00558a50(this,puVar4,(undefined4 *)0x1);
          local_4._0_1_ = 0;
          if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
            _free(local_14c[0]);
          }
          bVar11 = *local_210 == '{';
          puVar4 = FUN_00557890(this,(undefined4 *)((int)this + 0x40),(undefined4 *)0x1);
          *(bool *)(puVar4 + 0x1e) = bVar11;
        }
      }
    }
    uVar3 = FUN_00552830(param_1,&local_210);
    cVar2 = (char)uVar3;
  } while( true );
}


//// FUNCTION FUN_0055aa10 @ 0055aa10 ////

uint __thiscall FUN_0055aa10(void *this,undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *local_54;
  uint local_50;
  uint local_4c;
  char local_48 [20];
  undefined4 local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0900;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d3b00(local_34);
  local_4 = 0;
  bVar1 = FUN_009d3b90(local_34,param_1,2);
  if (!bVar1) {
    FUN_006b85a0();
    local_4 = 0xffffffff;
    uVar2 = FUN_009d3750(local_34);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  local_54 = local_48;
  local_48[0] = '\0';
  local_50 = 0;
  local_4c = 0x14;
  _strncpy(local_54,"",0);
  local_50 = 0;
  *local_54 = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar3 = FUN_00557890(this,&local_54,(undefined4 *)0x1);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_004015d0((void *)((int)this + 0x40),local_54,local_50);
    FUN_00558120(this,0);
  }
  local_4 = local_4 & 0xffffff00;
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  FUN_005597f0(this,local_34,"");
  FUN_00559ac0(this,local_34);
  local_4 = 0xffffffff;
  uVar4 = FUN_009d3750(local_34);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_0055ab40 @ 0055ab40 ////

uint __thiscall FUN_0055ab40(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char *local_74;
  uint local_70;
  uint local_6c;
  char local_68 [20];
  void *local_54 [2];
  uint local_4c;
  undefined4 local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0930;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d3b00(local_34);
  local_4 = 0;
  puVar2 = FUN_0040d6b0(local_54,"data/",param_1);
  puVar2 = FUN_004312e0(&local_74,puVar2,".ini");
  local_4._0_1_ = 2;
  bVar1 = FUN_009d3b90(local_34,puVar2,2);
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  local_4._0_1_ = 0;
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0]);
  }
  if (!bVar1) {
    FUN_006b85a0();
    local_4 = 0xffffffff;
    uVar3 = FUN_009d3750(local_34);
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  local_74 = local_68;
  local_68[0] = '\0';
  local_70 = 0;
  local_6c = 0x14;
  _strncpy(local_74,"",0);
  local_70 = 0;
  *local_74 = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar2 = FUN_00557890(this,&local_74,(undefined4 *)0x1);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004015d0((void *)((int)this + 0x40),local_74,local_70);
    FUN_00558120(this,0);
  }
  local_4 = local_4 & 0xffffff00;
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  FUN_005597f0(this,local_34,"");
  FUN_00559ac0(this,local_34);
  local_4 = 0xffffffff;
  uVar4 = FUN_009d3750(local_34);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_0055b2d0 @ 0055b2d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055b2d0(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint *local_254;
  int local_250;
  char *local_24c;
  uint local_248;
  uint uStack_244;
  char acStack_240 [20];
  uint local_22c;
  undefined4 local_228;
  undefined4 *local_224;
  undefined4 *puStack_220;
  char *pcStack_218;
  uint uStack_214;
  uint uStack_210;
  char acStack_20c [20];
  char *pcStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  char acStack_1ec [20];
  char *pcStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  char acStack_1cc [12];
  char *local_1c0;
  undefined4 local_1bc;
  void *local_1b8;
  char local_1b4 [4];
  uint uStack_1b0;
  undefined4 local_1a0;
  undefined4 local_19c;
  char *pcStack_190;
  undefined4 uStack_18c;
  uint uStack_188;
  char acStack_184 [20];
  char *pcStack_170;
  undefined4 uStack_16c;
  uint uStack_168;
  char acStack_164 [20];
  undefined4 auStack_150 [2];
  void *apvStack_148 [2];
  uint uStack_140;
  void *apvStack_128 [2];
  uint uStack_120;
  void *apvStack_108 [2];
  uint uStack_100;
  undefined4 local_f0 [55];
  void *local_14;
  undefined1 *puStack_10;
  void *local_c;
  
  local_c = (void *)0xffffffff;
  puStack_10 = &LAB_00cb0a19;
  local_14 = ExceptionList;
  if (DAT_0104cd34 == '\0') {
    DAT_0104cd34 = '\x01';
    if (DAT_0104cd88 != (undefined4 *)0x0) {
      ExceptionList = &local_14;
      FUN_00405fe0(DAT_0104cd88,DAT_0104cd8c);
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104cd88);
    }
    DAT_0104cd88 = (undefined4 *)0x0;
    DAT_0104cd8c = (undefined4 *)0x0;
    DAT_0104cd90 = 0;
    ExceptionList = &local_14;
    FUN_0048f540(*(void **)(DAT_0104cd7c + 4));
    *(int *)(DAT_0104cd7c + 4) = DAT_0104cd7c;
    _DAT_0104cd80 = 0;
    *(int *)DAT_0104cd7c = DAT_0104cd7c;
    *(int *)(DAT_0104cd7c + 8) = DAT_0104cd7c;
    FUN_0048f540(*(void **)(DAT_0104cd70 + 4));
    uVar5 = DAT_00e52d10;
    *(int *)(DAT_0104cd70 + 4) = DAT_0104cd70;
    _DAT_0104cd74 = 0;
    *(int *)DAT_0104cd70 = DAT_0104cd70;
    *(int *)(DAT_0104cd70 + 8) = DAT_0104cd70;
    FUN_00556c20(&DAT_0104cd84,uVar5);
    local_254 = &local_248;
    local_248 = local_248 & 0xffffff00;
    local_250 = 0;
    local_24c = (char *)0x20;
    local_254 = _malloc(0x20);
    _strncpy((char *)local_254,"data/filestructure.ini",0x16);
    local_250 = 0x16;
    *(char *)((int)local_254 + 0x16) = '\0';
    local_c = (void *)0x0;
    uVar2 = FUN_009d3660(&local_254,(uint *)0x0);
    local_c = (void *)0xffffffff;
    if ((char *)0x14 < local_24c) {
                    /* WARNING: Subroutine does not return */
      _free(local_254);
    }
    if ((char)uVar2 != '\0') {
      FUN_00559fb0(local_f0);
      local_1c0 = local_1b4;
      local_c = (void *)0x1;
      local_1b4[0] = '\0';
      local_1bc = 0;
      local_1b8 = (void *)0x14;
      _strncpy(local_1c0,"",0);
      local_1bc = 0;
      *local_1c0 = '\0';
      local_1a0 = 0;
      local_19c = 0;
      local_254 = &local_248;
      local_248 = local_248 & 0xffffff00;
      local_250 = 0;
      local_24c = (char *)0x20;
      local_254 = _malloc(0x20);
      _strncpy((char *)local_254,"data/filestructure.ini",0x16);
      local_250 = 0x16;
      *(char *)((int)local_254 + 0x16) = '\0';
      local_c._0_1_ = 3;
      bVar1 = FUN_00553a50(&local_1c0,&local_254);
      local_c._0_1_ = 2;
      if (local_24c <= &DAT_00000014) {
        if (bVar1) {
          FUN_0055a230(local_f0,&local_1c0);
        }
        FUN_00558e00(local_f0);
        local_c = (void *)CONCAT31(local_c._1_3_,1);
        FUN_00552ce0(&local_1c0);
        local_c = (void *)0xffffffff;
        FUN_00558920(local_f0);
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_254);
    }
    local_22c = 0;
    local_228 = 0;
    local_224 = (undefined4 *)0x0;
    pcVar4 = &stack0xfffffd74;
    local_c = (void *)0x4;
    uVar5 = 0;
    FUN_004015d0(&stack0xfffffd68,"data\\*.ini",10);
    FUN_009c9850(pcVar4,uVar5);
    pcStack_1f8 = acStack_1ec;
    acStack_1ec[0] = '\0';
    uStack_1f4 = 0;
    uStack_1f0 = 0x14;
    _strncpy(pcStack_1f8,"",0);
    uStack_1f4 = 0;
    *pcStack_1f8 = '\0';
    local_24c = acStack_240;
    acStack_240[0] = '\0';
    local_248 = 0;
    uStack_244 = 0x14;
    _strncpy(local_24c,"",0);
    local_248 = 0;
    *local_24c = '\0';
    pcStack_1d8 = acStack_1cc;
    acStack_1cc[0] = '\0';
    uStack_1d4 = 0;
    uStack_1d0 = 0x14;
    _strncpy(pcStack_1d8,"",0);
    uStack_1d4 = 0;
    *pcStack_1d8 = '\0';
    local_250 = 0;
    for (local_22c = 0;
        (local_224 != (undefined4 *)0x0 &&
        (local_22c < (uint)((int)puStack_220 - (int)local_224 >> 5))); local_22c = local_22c + 1) {
      pcStack_218 = acStack_20c;
      acStack_20c[0] = '\0';
      uStack_214 = 0;
      uStack_210 = 0x14;
      uVar5 = *(uint *)((int)local_224 + local_250 + 4);
      pcVar4 = *(char **)((int)local_224 + local_250);
      if (0x13 < uVar5) {
        uStack_210 = uVar5 + 0x20 & 0xffffffe0;
        pcStack_218 = _malloc(uStack_210);
      }
      _strncpy(pcStack_218,pcVar4,uVar5);
      pcStack_218[uVar5] = '\0';
      pcStack_170 = acStack_164;
      acStack_164[0] = '\0';
      uStack_16c = 0;
      uStack_168 = 0x14;
      uStack_214 = uVar5;
      _strncpy(pcStack_170,"/",1);
      uStack_16c = 1;
      pcStack_170[1] = '\0';
      pcStack_190 = acStack_184;
      acStack_184[0] = '\0';
      uStack_18c = 0;
      uStack_188 = 0x14;
      _strncpy(pcStack_190,"\\",1);
      uStack_18c = 1;
      pcStack_190[1] = '\0';
      FUN_00569860((int *)&pcStack_218,&pcStack_190,&pcStack_170);
      if (0x14 < uStack_188) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_190);
      }
      if (0x14 < uStack_168) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_170);
      }
      uVar5 = FUN_004302c0(&pcStack_218,&DAT_00d1e524,0xffffffff,1);
      if (uVar5 != 0xffffffff) {
        puVar3 = FUN_00430770(&pcStack_218,apvStack_148,0,uVar5);
        FUN_004015d0(&pcStack_1f8,(char *)*puVar3,puVar3[1]);
        if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_148[0]);
        }
        FUN_0048ad50((int *)&pcStack_1f8);
        FUN_0048fab0(&DAT_0104cd78,auStack_150,&pcStack_1f8);
        puVar3 = FUN_00430770(&pcStack_218,apvStack_128,uVar5 + 1,uStack_214);
        FUN_004015d0(&local_24c,(char *)*puVar3,puVar3[1]);
        if (0x14 < uStack_120) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_128[0]);
        }
        puVar3 = FUN_004312e0(&local_1b8,&pcStack_1f8,"/");
        puVar3 = FUN_0047aee0(apvStack_108,puVar3,&local_24c);
        FUN_004015d0(&pcStack_1d8,(char *)*puVar3,puVar3[1]);
        if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_108[0]);
        }
        if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
          _free(local_1b8);
        }
        FUN_0043a2d0(&DAT_0104cd84,&pcStack_1d8);
        FUN_0048ad50((int *)&pcStack_1d8);
        FUN_0048fab0(&DAT_0104cd6c,auStack_150,&pcStack_1d8);
      }
      if (0x14 < uStack_210) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_218);
      }
      local_250 = local_250 + 0x20;
    }
    if (0x14 < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1d8);
    }
    if (0x14 < uStack_244) {
                    /* WARNING: Subroutine does not return */
      _free(local_24c);
    }
    if (0x14 < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1f8);
    }
    puVar3 = local_224;
    if (local_224 != (undefined4 *)0x0) {
      while( true ) {
        if (puVar3 == puStack_220) {
                    /* WARNING: Subroutine does not return */
          _free(local_224);
        }
        if (0x14 < (uint)puVar3[2]) break;
        puVar3 = puVar3 + 8;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)*puVar3);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0055ba20 @ 0055ba20 ////

undefined4 __cdecl FUN_0055ba20(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 **ppuVar4;
  uint3 uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 *local_28;
  undefined4 *local_24;
  byte *local_20 [2];
  uint local_18;
  
  FUN_0055b2d0();
  FUN_004312e0(local_20,param_1,".ini");
  FUN_0048ad50((int *)local_20);
  local_28 = FUN_0048f2c0(&DAT_0104cd6c,local_20);
  if (local_28 != DAT_0104cd70) {
    pbVar6 = (byte *)local_28[3];
    pbVar2 = local_20[0];
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0055ba9a:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0055ba9f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0055ba9a;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0055ba9f:
    if (-1 < iVar3) {
      ppuVar4 = &local_28;
      goto LAB_0055bab3;
    }
  }
  local_24 = DAT_0104cd70;
  ppuVar4 = &local_24;
LAB_0055bab3:
  uVar5 = (uint3)(local_18 >> 8);
  if (*ppuVar4 == DAT_0104cd70) {
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    return (uint)uVar5 << 8;
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return CONCAT31(uVar5,1);
}


//// FUNCTION FUN_0055baf0 @ 0055baf0 ////

undefined4 FUN_0055baf0(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 **ppuVar4;
  uint3 uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 *local_24;
  byte *local_20;
  undefined4 local_1c;
  uint local_18;
  byte local_14 [20];
  
  FUN_0055b2d0();
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  FUN_004015d0(&local_20,(char *)*param_1,param_1[1]);
  FUN_0048ad50((int *)&local_20);
  param_1 = FUN_0048f2c0(&DAT_0104cd78,&local_20);
  if (param_1 != DAT_0104cd7c) {
    pbVar6 = (byte *)param_1[3];
    pbVar2 = local_20;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0055bb84:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0055bb89;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0055bb84;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0055bb89:
    if (-1 < iVar3) {
      ppuVar4 = &param_1;
      goto LAB_0055bb9c;
    }
  }
  local_24 = DAT_0104cd7c;
  ppuVar4 = &local_24;
LAB_0055bb9c:
  uVar5 = (uint3)(local_18 >> 8);
  if (*ppuVar4 == DAT_0104cd7c) {
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    return (uint)uVar5 << 8;
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return CONCAT31(uVar5,1);
}


//// FUNCTION FUN_0055bbe0 @ 0055bbe0 ////

/* WARNING: Removing unreachable block (ram,0x0055bcb0) */

undefined4 * __cdecl FUN_0055bbe0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
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
  puStack_8 = &LAB_00cb0a38;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_4c,(char *)*param_2,param_2[1]);
  local_4 = 0;
  uVar1 = FUN_00413450(&local_4c,"data/",0,5);
  if (uVar1 != 0) {
    puVar2 = FUN_0040d6b0(local_2c,"data/",&local_4c);
    FUN_004015d0(&local_4c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  uVar3 = FUN_0055ba20(&local_4c);
  if ((char)uVar3 == '\0') {
    if (local_44 == 0) {
      local_44 = 0x20;
      local_4c = _malloc(0x20);
    }
    _strncpy(local_4c,"",0);
    local_48 = 0;
    *local_4c = '\0';
  }
  else {
    FUN_004073f0(&local_4c,".ini",4);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 0x14;
  param_1[1] = 0;
  FUN_004015d0(param_1,local_4c,local_48);
  if (local_44 < 0x15) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_0055bd40 @ 0055bd40 ////

uint __thiscall FUN_0055bd40(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0a58;
  local_c = ExceptionList;
  local_34 = local_28;
  local_28[0] = '\0';
  local_30 = 0;
  local_2c = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_34,"",0);
  local_30 = 0;
  *local_34 = '\0';
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  bVar1 = FUN_00553a50(&local_34,param_1);
  if (bVar1) {
    uVar2 = FUN_0055a230(this,&local_34);
    local_4 = 0xffffffff;
    uVar3 = FUN_00552ce0(&local_34);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar2);
  }
  local_4 = 0xffffffff;
  uVar4 = FUN_00552ce0(&local_34);
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_0055be10 @ 0055be10 ////

undefined1 __thiscall FUN_0055be10(void *this,undefined4 *param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char *local_34;
  undefined4 local_30;
  uint local_2c;
  char local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00413450(param_1,"data/",0,5);
  if (uVar2 != 0) {
    puVar3 = FUN_0040d6b0(&local_34,"data/",param_1);
    FUN_004015d0((void *)((int)this + 0xa8),(char *)*puVar3,puVar3[1]);
    if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_34);
    }
  }
  puVar3 = (undefined4 *)((int)this + 0xa8);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffe;
  uVar4 = FUN_0055ba20(puVar3);
  if (((char)uVar4 == '\0') && (param_2 == '\0')) {
    uVar4 = FUN_0055baf0(puVar3);
    if ((char)uVar4 != '\0') {
      *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
      FUN_004015d0((void *)((int)this + 0x40),(char *)*puVar3,*(uint *)((int)this + 0xac));
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  FUN_004073f0(puVar3,".ini",4);
  local_34 = local_28;
  local_28[0] = '\0';
  local_30 = 0;
  local_2c = 0x14;
  _strncpy(local_34,"",0);
  local_30 = 0;
  *local_34 = '\0';
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  bVar1 = FUN_00553a50(&local_34,puVar3);
  if (bVar1) {
    uVar4 = FUN_0055a230(this,&local_34);
    uVar5 = (undefined1)uVar4;
  }
  else {
    uVar5 = 0;
  }
  local_4 = 0xffffffff;
  FUN_00552ce0(&local_34);
  ExceptionList = local_c;
  return uVar5;
}


//// FUNCTION FUN_0055bf90 @ 0055bf90 ////

/* WARNING: Removing unreachable block (ram,0x0055c0dd) */

undefined4 * __thiscall FUN_0055bf90(void *this,undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char **this_00;
  char *local_10c;
  uint local_108;
  uint local_104;
  char local_100 [20];
  char *local_ec;
  int local_e8;
  uint local_e4;
  char local_e0 [20];
  void *local_cc;
  int local_c8;
  uint local_c4;
  undefined1 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_a0 [20];
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
  puStack_8 = &LAB_00cb0abc;
  local_c = ExceptionList;
  this_00 = (char **)((int)this + 0x40);
  local_10c = local_100;
  local_100[0] = '\0';
  local_108 = 0;
  local_104 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_10c,*(char **)((int)this + 0x40),*(uint *)((int)this + 0x44));
  local_ec = local_e0;
  local_e0[0] = '\0';
  local_e8 = 0;
  local_e4 = 0x14;
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 0x14;
  local_4 = 2;
  uVar2 = FUN_004302c0(this_00,&DAT_00d2410c,0xffffffff,2);
  if (uVar2 == 0xffffffff) {
    if (local_e4 == 0) {
      local_e4 = 0x20;
      local_ec = _malloc(0x20);
    }
    _strncpy(local_ec,"",0);
    local_e8 = 0;
    *local_ec = '\0';
    puVar3 = *(undefined4 **)((int)this + 0x38);
    FUN_004015d0(&local_ac,*this_00,*(uint *)((int)this + 0x44));
  }
  else {
    puVar3 = FUN_00430770(this_00,&local_cc,0,uVar2);
    FUN_004015d0(&local_ec,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    puVar3 = FUN_00557890(this,&local_ec,(undefined4 *)0x1);
    puVar4 = FUN_00430770(this_00,&local_cc,uVar2 + 1,0xffffffff);
    FUN_004015d0(&local_ac,(char *)*puVar4,puVar4[1]);
    if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
  }
  switch(param_2) {
  case 0:
    uVar6 = FUN_00556670(puVar3,&local_10c);
    cVar1 = (char)uVar6;
    goto LAB_0055c144;
  case 1:
    uVar6 = FUN_005566b0(puVar3,&local_10c);
    cVar1 = (char)uVar6;
LAB_0055c144:
    if (cVar1 == '\0') {
      FUN_00403e20(&local_10c,"");
    }
    break;
  case 2:
    uVar6 = FUN_00556930(puVar3,&local_ac,&local_10c);
    if ((char)uVar6 == '\0') {
      puVar3 = FUN_0055bf90(this,local_4c,0);
      FUN_00401e30(&local_10c,puVar3);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
    break;
  case 3:
    uVar6 = FUN_00556990(puVar3,&local_ac,&local_10c);
    if ((char)uVar6 == '\0') {
      puVar3 = FUN_0055bf90(this,local_8c,1);
      FUN_00401e30(&local_10c,puVar3);
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
    }
    break;
  case 5:
    if (local_e8 == 0) {
      puVar3 = (undefined4 *)((int)this + 0xa8);
      FUN_00403de0(&local_cc,puVar3);
      local_4 = CONCAT31(local_4._1_3_,3);
      iVar5 = FUN_004307c0(&local_cc,"/",0xffffffff);
      puVar4 = FUN_00430770(&local_cc,local_6c,5,iVar5 - 5);
      FUN_00401e30(puVar3,puVar4);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      FUN_00557af0((int)this);
      FUN_0055be10(this,puVar3,'\0');
      puVar3 = FUN_00430770(&local_cc,local_2c,iVar5 + 1,(local_c8 - iVar5) - 1);
      FUN_00401e30(&local_10c,puVar3);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
      break;
    }
    this_00 = &local_ec;
    goto LAB_0055c30d;
  case 6:
    puVar3 = FUN_00557890(this,this_00,(undefined4 *)0x1);
    uVar6 = FUN_00556670(puVar3,&local_10c);
    if ((char)uVar6 != '\0') break;
LAB_0055c30d:
    FUN_00401e30(&local_10c,this_00);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_10c,local_108);
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if (local_e4 < 0x15) {
    if (local_104 < 0x15) {
      ExceptionList = local_c;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_10c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_ec);
}


//// FUNCTION FUN_0055c3c0 @ 0055c3c0 ////

undefined4 * __cdecl FUN_0055c3c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb0ae3;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004073f0(&local_2c,"data/",5);
  FUN_004073f0(&local_2c,(char *)*param_1,param_1[1]);
  FUN_004073f0(&local_2c,".ini",4);
  puVar6 = DAT_0104cd40;
  if ((int **)DAT_0104cd40 != &DAT_0104cd4c) {
    do {
      pbVar4 = (byte *)((undefined4 *)puVar6[2])[0x2a];
      pbVar7 = local_2c;
      do {
        bVar3 = *pbVar4;
        bVar8 = bVar3 < *pbVar7;
        if (bVar3 != *pbVar7) {
LAB_0055c474:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0055c479;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar4[1];
        bVar8 = bVar3 < pbVar7[1];
        if (bVar3 != pbVar7[1]) goto LAB_0055c474;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar3 != 0);
      iVar5 = 0;
LAB_0055c479:
      if (iVar5 == 0) {
        if (local_24 < 0x15) {
          ExceptionList = local_c;
          return (undefined4 *)puVar6[2];
        }
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((int **)*puVar1 != &DAT_0104cd4c);
  }
  puVar6 = operator_new(0xd8);
  local_4._0_1_ = 1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_00559fb0(puVar6);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0055be10(puVar6,param_1,'\x01');
  piVar2 = puVar6 + 0x32;
  puVar6[0x33] = &DAT_0104cd4c;
  *piVar2 = (int)DAT_0104cd4c;
  *(int **)((int)DAT_0104cd4c + 4) = piVar2;
  DAT_0104cd4c = piVar2;
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0055c540 @ 0055c540 ////

undefined4 * __thiscall FUN_0055c540(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0b4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d24194;
  puVar1 = operator_new(0x7c);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_005573e0(puVar1);
  }
  *(undefined4 **)((int)this + 0x38) = puVar1;
  puVar1 = (undefined4 *)((int)this + 0x40);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffc | 4;
  *puVar1 = (undefined1 *)((int)this + 0x4c);
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x14;
  FUN_004015d0(puVar1,"",0);
  *(undefined4 *)((int)this + 0x60) = (undefined1 *)((int)this + 0x6c);
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x60),"",0);
  *(undefined4 *)((int)this + 0x80) = (undefined1 *)((int)this + 0x8c);
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x80),"",0);
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 **)((int)this + 0xa8) = (undefined1 *)((int)this + 0xb4);
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0x14;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4 = CONCAT31(local_4._1_3_,7);
  puVar2 = FUN_00557890(this,&local_2c,(undefined4 *)0x1);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004015d0(puVar1,local_2c,local_28);
    FUN_00558120(this,0);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0055be10(this,param_1,'\0');
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0055c6d0 @ 0055c6d0 ////

undefined4 * __thiscall FUN_0055c6d0(void *this,undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0bbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d24194;
  puVar1 = operator_new(0x7c);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_005573e0(puVar1);
  }
  *(undefined4 **)((int)this + 0x38) = puVar1;
  puVar1 = (undefined4 *)((int)this + 0x40);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffc;
  *puVar1 = (undefined1 *)((int)this + 0x4c);
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x14;
  FUN_004015d0(puVar1,"",0);
  *(undefined4 *)((int)this + 0x60) = (undefined1 *)((int)this + 0x6c);
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x60),"",0);
  *(undefined4 *)((int)this + 0x80) = (undefined1 *)((int)this + 0x8c);
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x80),"",0);
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 **)((int)this + 0xa8) = (undefined1 *)((int)this + 0xb4);
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0x14;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(uint *)((int)this + 0x3c) =
       *(uint *)((int)this + 0x3c) ^ ((uint)param_2 << 2 ^ *(uint *)((int)this + 0x3c)) & 4;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4 = CONCAT31(local_4._1_3_,7);
  puVar2 = FUN_00557890(this,&local_2c,(undefined4 *)0x1);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004015d0(puVar1,local_2c,local_28);
    FUN_00558120(this,0);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0055be10(this,param_1,'\0');
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0055c870 @ 0055c870 ////

undefined4 * __thiscall FUN_0055c870(void *this,char param_1,undefined4 *param_2,byte param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0c2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d24194;
  puVar1 = operator_new(0x7c);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_005573e0(puVar1);
  }
  *(undefined4 **)((int)this + 0x38) = puVar1;
  puVar1 = (undefined4 *)((int)this + 0x40);
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffc;
  *puVar1 = (undefined1 *)((int)this + 0x4c);
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x14;
  FUN_004015d0(puVar1,"",0);
  *(undefined4 *)((int)this + 0x60) = (undefined1 *)((int)this + 0x6c);
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x60),"",0);
  *(undefined4 *)((int)this + 0x80) = (undefined1 *)((int)this + 0x8c);
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x80),"",0);
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 **)((int)this + 0xa8) = (undefined1 *)((int)this + 0xb4);
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0x14;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(uint *)((int)this + 0x3c) =
       *(uint *)((int)this + 0x3c) ^ ((uint)param_3 << 2 ^ *(uint *)((int)this + 0x3c)) & 4;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4 = CONCAT31(local_4._1_3_,7);
  puVar2 = FUN_00557890(this,&local_2c,(undefined4 *)0x1);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004015d0(puVar1,local_2c,local_28);
    FUN_00558120(this,0);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0055be10(this,param_2,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0055ca50 @ 0055ca50 ////

int __fastcall FUN_0055ca50(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 100;
}


//// FUNCTION FUN_0055ca70 @ 0055ca70 ////

undefined4 __fastcall FUN_0055ca70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 100;
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
}


//// FUNCTION FUN_0055cab0 @ 0055cab0 ////

int __fastcall FUN_0055cab0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 6;
}


//// FUNCTION FUN_0055cf20 @ 0055cf20 ////

void __cdecl FUN_0055cf20(int param_1)

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


//// FUNCTION FUN_0055cf40 @ 0055cf40 ////

void __cdecl FUN_0055cf40(int *param_1)

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


//// FUNCTION FUN_0055cf70 @ 0055cf70 ////

void __fastcall FUN_0055cf70(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x2d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0055d090 @ 0055d090 ////

void * __cdecl FUN_0055d090(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005605d0(param_3,param_1);
    param_1 = param_1 + 0x19;
    param_3 = (void *)((int)param_3 + 100);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0055d150 @ 0055d150 ////

void __fastcall FUN_0055d150(undefined4 *param_1)

{
  if (10 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0055d180 @ 0055d180 ////

void __fastcall FUN_0055d180(int *param_1)

{
  wint_t wVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      wVar1 = _towlower(*(wint_t *)(*param_1 + uVar2 * 2));
      *(wint_t *)(*param_1 + uVar2 * 2) = wVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_0055d250 @ 0055d250 ////

uint __thiscall FUN_0055d250(void *this,ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((param_3 != 0) || (*(uint *)((int)this + 4) < param_2)) {
    uVar6 = *(uint *)((int)this + 4) - param_2;
    if ((param_2 < *(uint *)((int)this + 4)) && (param_3 <= uVar6)) {
      puVar3 = (ushort *)(*(int *)this + param_2 * 2);
      for (iVar7 = uVar6 + (1 - param_3); iVar7 != 0; iVar7 = iVar7 + (-1 - (iVar5 >> 1))) {
        puVar4 = puVar3;
        iVar5 = iVar7;
        while (*puVar4 != *param_1) {
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) goto LAB_0055d2ab;
        }
        puVar1 = param_1;
        uVar6 = param_3;
        puVar2 = puVar4;
        if (puVar4 == (ushort *)0x0) break;
        while( true ) {
          if (uVar6 == 0) goto LAB_0055d2d5;
          if (*puVar2 != *puVar1) break;
          puVar1 = puVar1 + 1;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 1;
        }
        if ((-(uint)(*puVar2 < *puVar1) & 0xfffffffe) == 0xffffffff) {
LAB_0055d2d5:
          return (int)puVar4 - *(int *)this >> 1;
        }
        iVar5 = (int)puVar4 - (int)puVar3;
        puVar3 = puVar4 + 1;
      }
    }
LAB_0055d2ab:
    param_2 = 0xffffffff;
  }
  return param_2;
}


//// FUNCTION FUN_0055d310 @ 0055d310 ////

int __thiscall FUN_0055d310(void *this,short *param_1,uint param_2,int param_3)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == 0) {
    return -1;
  }
  if (uVar1 <= param_2) {
    param_2 = uVar1 - 1;
  }
  psVar2 = *(short **)this;
  psVar3 = psVar2 + param_2;
  while (param_3 != 0) {
    psVar4 = param_1;
    iVar5 = param_3;
    while (*psVar4 != *psVar3) {
      psVar4 = psVar4 + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) goto LAB_0055d34c;
    }
    if (psVar3 == psVar2) {
      return -1;
    }
    psVar3 = psVar3 + -1;
  }
LAB_0055d34c:
  return (int)psVar3 - (int)psVar2 >> 1;
}


//// FUNCTION FUN_0055d4c0 @ 0055d4c0 ////

void __thiscall FUN_0055d4c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x2d) == '\0') {
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


//// FUNCTION FUN_0055d520 @ 0055d520 ////

void __thiscall FUN_0055d520(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
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


//// FUNCTION FUN_0055d5e0 @ 0055d5e0 ////

void __fastcall FUN_0055d5e0(int *param_1)

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


//// FUNCTION FUN_0055d670 @ 0055d670 ////

int * __fastcall FUN_0055d670(int *param_1)

{
  FUN_0055cf70(param_1);
  return param_1;
}


//// FUNCTION FUN_0055d6c0 @ 0055d6c0 ////

void __fastcall FUN_0055d6c0(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0055d6f0 @ 0055d6f0 ////

void * __cdecl FUN_0055d6f0(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cb0c51;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x19) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_00560510(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 100);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_0055d780 @ 0055d780 ////

int __cdecl FUN_0055d780(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cb0c71;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 100) {
    local_8 = 1;
    if ((void *)param_3 != (void *)0x0) {
      FUN_00560510((void *)param_3,(undefined4 *)param_1);
    }
    param_3 = param_3 + 100;
  }
  ExceptionList = local_10;
  return (int)(void *)param_3;
}


//// FUNCTION FUN_0055d810 @ 0055d810 ////

undefined4 * __thiscall FUN_0055d810(void *this,byte param_1)

{
  FUN_0055d150(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0055d9c0 @ 0055d9c0 ////

bool FUN_0055d9c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = _wcscmp((wchar_t *)*param_1,(wchar_t *)*param_2);
  return iVar1 < 0;
}


//// FUNCTION FUN_0055d9f0 @ 0055d9f0 ////

undefined4 * __thiscall FUN_0055d9f0(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x2d);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar3 = _wcscmp((wchar_t *)puVar5[3],(wchar_t *)*param_1);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x2d);
  }
  return puVar2;
}


//// FUNCTION FUN_0055da40 @ 0055da40 ////

int * __fastcall FUN_0055da40(int *param_1)

{
  FUN_0055d5e0(param_1);
  return param_1;
}


//// FUNCTION FUN_0055da50 @ 0055da50 ////

undefined4 * __thiscall FUN_0055da50(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined2 *)((int)this + 0x2c);
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x20),(wchar_t *)param_1[8],param_1[9]);
  return this;
}


//// FUNCTION FUN_0055dab0 @ 0055dab0 ////

void FUN_0055dab0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  return;
}


//// FUNCTION FUN_0055db00 @ 0055db00 ////

undefined4 * __thiscall
FUN_0055db00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = (undefined2 *)((int)this + 0x18);
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xc),(wchar_t *)*param_4,param_4[1]);
  *(undefined1 *)((int)this + 0x2c) = param_5;
  *(undefined1 *)((int)this + 0x2d) = 0;
  return this;
}


//// FUNCTION FUN_0055db60 @ 0055db60 ////

int * __fastcall FUN_0055db60(int *param_1)

{
  FUN_0055cf70(param_1);
  return param_1;
}


//// FUNCTION FUN_0055dbc0 @ 0055dbc0 ////

void * __thiscall FUN_0055dbc0(void *this,byte param_1)

{
  FUN_0055d6c0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0055dbe0 @ 0055dbe0 ////

int * __cdecl FUN_0055dbe0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint *puVar7;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar7 = (uint *)(param_3 + 10);
  do {
    pwVar2 = (wchar_t *)*param_1;
    uVar3 = param_1[1];
    if (puVar7[-8] <= uVar3) {
      if (10 < puVar7[-8]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar5 = uVar3 + 0x20 & 0xffffffe0;
      puVar7[-8] = uVar5;
      pvVar6 = _malloc(uVar5 * 2);
      *param_3 = (int)pvVar6;
    }
    _wcsncpy((wchar_t *)*param_3,pwVar2,uVar3);
    iVar4 = *param_3;
    puVar7[-9] = uVar3;
    *(undefined2 *)(iVar4 + uVar3 * 2) = 0;
    pwVar2 = (wchar_t *)param_1[8];
    uVar3 = param_1[9];
    if (*puVar7 <= uVar3) {
      if (10 < *puVar7) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar7[-2]);
      }
      uVar5 = uVar3 + 0x20 & 0xffffffe0;
      *puVar7 = uVar5;
      pvVar6 = _malloc(uVar5 * 2);
      puVar7[-2] = (uint)pvVar6;
    }
    _wcsncpy((wchar_t *)puVar7[-2],pwVar2,uVar3);
    puVar1 = puVar7 + -2;
    puVar7[-1] = uVar3;
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 0x10;
    puVar7 = puVar7 + 0x10;
    *(undefined2 *)(*puVar1 + uVar3 * 2) = 0;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0055dd10 @ 0055dd10 ////

void __cdecl FUN_0055dd10(void *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cb0c91;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_00560510(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 100);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0055ddd0 @ 0055ddd0 ////

int * __cdecl FUN_0055ddd0(int param_1,int param_2,int *param_3)

{
  wchar_t *pwVar1;
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
    pwVar1 = *(wchar_t **)(param_2 + -0x40);
    uVar2 = *(uint *)(param_2 + -0x3c);
    iVar6 = param_2 + -0x40;
    puVar8 = puVar7 + -0x10;
    param_3 = param_3 + -0x10;
    if (puVar7[-0x18] <= uVar2) {
      if (10 < puVar7[-0x18]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar7[-0x18] = uVar4;
      pvVar5 = _malloc(uVar4 * 2);
      *param_3 = (int)pvVar5;
    }
    _wcsncpy((wchar_t *)*param_3,pwVar1,uVar2);
    iVar3 = *param_3;
    puVar7[-0x19] = uVar2;
    *(undefined2 *)(iVar3 + uVar2 * 2) = 0;
    pwVar1 = *(wchar_t **)(param_2 + -0x20);
    uVar2 = *(uint *)(param_2 + -0x1c);
    if (*puVar8 <= uVar2) {
      if (10 < *puVar8) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar7[-0x12]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar8 = uVar4;
      pvVar5 = _malloc(uVar4 * 2);
      puVar7[-0x12] = (uint)pvVar5;
    }
    _wcsncpy((wchar_t *)puVar7[-0x12],pwVar1,uVar2);
    puVar7[-0x11] = uVar2;
    *(undefined2 *)(puVar7[-0x12] + uVar2 * 2) = 0;
    param_2 = iVar6;
    puVar7 = puVar8;
  } while (iVar6 != param_1);
  return param_3;
}


//// FUNCTION FUN_0055df30 @ 0055df30 ////

uint __cdecl FUN_0055df30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0cb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0043bdc0(local_2c,L"data/",param_1);
  local_4 = 0;
  puVar1 = FUN_0043be60(local_4c,puVar1,L".ini");
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_009d36d0(puVar1,(uint *)0x0);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(local_44 >> 8),(char)uVar2);
}


//// FUNCTION FUN_0055dfd0 @ 0055dfd0 ////

void __thiscall FUN_0055dfd0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_20 [2];
  uint local_18;
  
  iVar1 = FUN_00ace02d((short *)&DAT_00d24120);
  uVar2 = FUN_00420300(param_1,(short *)&DAT_00d24120,0xffffffff,iVar1);
  if (uVar2 == 0xffffffff) {
    FUN_004036d0((void *)((int)this + 0x6c),(wchar_t *)*param_1,param_1[1]);
    return;
  }
  puVar3 = FUN_004211c0(param_1,local_20,uVar2 + 1,0xffffffff);
  FUN_004036d0((void *)((int)this + 0x6c),(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  puVar3 = FUN_004211c0(param_1,local_20,0,uVar2);
  FUN_004036d0((void *)((int)this + 0x4c),(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return;
}


//// FUNCTION FUN_0055e090 @ 0055e090 ////

undefined4 * __thiscall FUN_0055e090(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  wchar_t *local_40;
  uint local_3c;
  uint local_38;
  wchar_t local_34 [10];
  void *local_20 [2];
  uint local_18;
  
  local_40 = local_34;
  local_34[0] = L'\0';
  local_3c = 0;
  local_38 = 10;
  FUN_004036d0(&local_40,*(wchar_t **)((int)this + 0x4c),*(uint *)((int)this + 0x50));
  if (param_2 == 1) {
    FUN_004036d0(&local_40,*(wchar_t **)((int)this + 0x4c),*(uint *)((int)this + 0x50));
    iVar1 = FUN_00ace02d((short *)&DAT_00d24120);
    iVar1 = FUN_00420300(&local_40,(short *)&DAT_00d24120,0xffffffff,iVar1);
    if (iVar1 != -1) {
      puVar2 = FUN_004211c0(&local_40,local_20,iVar1 + 1,0xffffffff);
      FUN_004036d0(&local_40,(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
  }
  else {
    FUN_004036d0(&local_40,*(wchar_t **)((int)this + 0x4c),*(uint *)((int)this + 0x50));
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_40,local_3c);
  if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  return param_1;
}


//// FUNCTION FUN_0055e190 @ 0055e190 ////

/* WARNING: Removing unreachable block (ram,0x0055e1ee) */

undefined4 * __thiscall FUN_0055e190(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00ace02d(L".ini");
  uVar1 = FUN_0055d250((void *)((int)this + 0x90),(ushort *)L".ini",0,uVar1);
  FUN_004211c0((void *)((int)this + 0x90),param_1,0xb,uVar1 - 0xb);
  return param_1;
}


//// FUNCTION FUN_0055e2e0 @ 0055e2e0 ////

int * __fastcall FUN_0055e2e0(int *param_1)

{
  FUN_0055d5e0(param_1);
  return param_1;
}


//// FUNCTION FUN_0055e2f0 @ 0055e2f0 ////

void __fastcall FUN_0055e2f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0055dab0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0055e320 @ 0055e320 ////

void * FUN_0055e320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x30);
  if (this != (void *)0x0) {
    FUN_0055db00(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0055e410 @ 0055e410 ////

void FUN_0055e410(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  FUN_0055d6f0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_0055e430 @ 0055e430 ////

void __cdecl FUN_0055e430(int *param_1,int *param_2,undefined4 *param_3)

{
  uint *puVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint *puVar7;
  
  if (param_1 != param_2) {
    puVar7 = (uint *)(param_1 + 10);
    do {
      pwVar2 = (wchar_t *)*param_3;
      uVar3 = param_3[1];
      if (puVar7[-8] <= uVar3) {
        if (10 < puVar7[-8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar5 = uVar3 + 0x20 & 0xffffffe0;
        puVar7[-8] = uVar5;
        pvVar6 = _malloc(uVar5 * 2);
        *param_1 = (int)pvVar6;
      }
      _wcsncpy((wchar_t *)*param_1,pwVar2,uVar3);
      iVar4 = *param_1;
      puVar7[-9] = uVar3;
      *(undefined2 *)(iVar4 + uVar3 * 2) = 0;
      pwVar2 = (wchar_t *)param_3[8];
      uVar3 = param_3[9];
      if (*puVar7 <= uVar3) {
        if (10 < *puVar7) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar7[-2]);
        }
        uVar5 = uVar3 + 0x20 & 0xffffffe0;
        *puVar7 = uVar5;
        pvVar6 = _malloc(uVar5 * 2);
        puVar7[-2] = (uint)pvVar6;
      }
      _wcsncpy((wchar_t *)puVar7[-2],pwVar2,uVar3);
      puVar1 = puVar7 + -2;
      puVar7[-1] = uVar3;
      param_1 = param_1 + 0x10;
      puVar7 = puVar7 + 0x10;
      *(undefined2 *)(*puVar1 + uVar3 * 2) = 0;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_0055e5a0 @ 0055e5a0 ////

int * __cdecl FUN_0055e5a0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  
  if (param_1 != param_2) {
    piVar6 = param_3 + 10;
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(piVar6 + -7);
        *(undefined2 *)(piVar6 + -7) = 0;
        piVar6[-9] = 0;
        piVar6[-8] = 10;
        uVar1 = param_1[1];
        pwVar2 = (wchar_t *)*param_1;
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          piVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4 * 2);
          *param_3 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*param_3,pwVar2,uVar1);
        iVar3 = *param_3;
        piVar6[-9] = uVar1;
        *(undefined2 *)(iVar3 + uVar1 * 2) = 0;
        piVar6[-2] = (int)(piVar6 + 1);
        *(undefined2 *)(piVar6 + 1) = 0;
        piVar6[-1] = 0;
        *piVar6 = 10;
        uVar1 = param_1[9];
        pwVar2 = (wchar_t *)param_1[8];
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 >> 5;
          *piVar6 = uVar4 << 5;
          pvVar5 = _malloc(uVar4 * 0x40);
          piVar6[-2] = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)piVar6[-2],pwVar2,uVar1);
        piVar6[-1] = uVar1;
        *(undefined2 *)(piVar6[-2] + uVar1 * 2) = 0;
      }
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      piVar6 = piVar6 + 0x10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_0055e6b0 @ 0055e6b0 ////

int * __cdecl FUN_0055e6b0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  
  if (param_1 != param_2) {
    piVar6 = param_3 + 10;
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(piVar6 + -7);
        *(undefined2 *)(piVar6 + -7) = 0;
        piVar6[-9] = 0;
        piVar6[-8] = 10;
        uVar1 = param_1[1];
        pwVar2 = (wchar_t *)*param_1;
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          piVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4 * 2);
          *param_3 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*param_3,pwVar2,uVar1);
        iVar3 = *param_3;
        piVar6[-9] = uVar1;
        *(undefined2 *)(iVar3 + uVar1 * 2) = 0;
        piVar6[-2] = (int)(piVar6 + 1);
        *(undefined2 *)(piVar6 + 1) = 0;
        piVar6[-1] = 0;
        *piVar6 = 10;
        uVar1 = param_1[9];
        pwVar2 = (wchar_t *)param_1[8];
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 >> 5;
          *piVar6 = uVar4 << 5;
          pvVar5 = _malloc(uVar4 * 0x40);
          piVar6[-2] = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)piVar6[-2],pwVar2,uVar1);
        piVar6[-1] = uVar1;
        *(undefined2 *)(piVar6[-2] + uVar1 * 2) = 0;
      }
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      piVar6 = piVar6 + 0x10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_0055e7c0 @ 0055e7c0 ////

int __cdecl FUN_0055e7c0(undefined4 *param_1,uint param_2,int *param_3,char param_4)

{
  int *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  ushort local_24 [2];
  void *local_20 [2];
  uint local_18;
  
  FUN_005645d0();
  iVar1 = param_2 << 5;
  do {
    if ((DAT_0104cde8 == 0) || ((uint)(DAT_0104cdec - DAT_0104cde8 >> 5) <= param_2)) {
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      if ((uint)param_3[2] <= uVar3) {
        if (10 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_3);
        }
        uVar5 = uVar3 + 0x20 >> 5;
        param_3[2] = uVar5 << 5;
        pvVar6 = _malloc(uVar5 * 0x40);
        *param_3 = (int)pvVar6;
      }
      _wcsncpy((wchar_t *)*param_3,(wchar_t *)&lpCaption_00d16918,uVar3);
      param_3[1] = uVar3;
      *(undefined2 *)(*param_3 + uVar3 * 2) = 0;
      return 0;
    }
    this = (int *)(iVar1 + DAT_0104cde8);
    iVar2 = __wcsnicmp((wchar_t *)*param_1,(wchar_t *)*this,param_1[1]);
    if (iVar2 == 0) {
      iVar2 = param_1[1];
      if (this[1] == iVar2) {
        uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
        FUN_004036d0(param_3,(wchar_t *)&lpCaption_00d16918,uVar3);
LAB_0055e889:
        if (param_4 != '\0') {
LAB_0055e8ba:
          return param_2 + 1;
        }
        local_24[0] = 0x2f;
        local_24[1] = 0;
        uVar3 = FUN_0055d250(param_3,local_24,0,1);
        if (uVar3 == 0xffffffff) goto LAB_0055e8ba;
      }
      else if (*(short *)(*this + iVar2 * 2) == 0x2f) {
        puVar4 = FUN_004211c0(this,local_20,iVar2 + 1,0xffffffff);
        FUN_004036d0(param_3,(wchar_t *)*puVar4,puVar4[1]);
        if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
          _free(local_20[0]);
        }
        if (param_3[1] != 0) goto LAB_0055e889;
      }
    }
    param_2 = param_2 + 1;
    iVar1 = iVar1 + 0x20;
  } while( true );
}


//// FUNCTION FUN_0055e990 @ 0055e990 ////

void FUN_0055e990(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x19) {
    FUN_0055faa0(param_1);
  }
  return;
}


//// FUNCTION FUN_0055e9c0 @ 0055e9c0 ////

void __fastcall FUN_0055e9c0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x19) {
    FUN_0055faa0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0055ea10 @ 0055ea10 ////

void * FUN_0055ea10(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_0055dd10(param_1,param_2,param_3);
  return (void *)(param_2 * 100 + (int)param_1);
}


//// FUNCTION FUN_0055ea40 @ 0055ea40 ////

int __fastcall FUN_0055ea40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0055dab0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0055eac0 @ 0055eac0 ////

void __cdecl FUN_0055eac0(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *piVar6;
  
  if (param_2 != 0) {
    piVar6 = param_1 + 10;
    do {
      if (param_1 != (int *)0x0) {
        *param_1 = (int)(piVar6 + -7);
        *(undefined2 *)(piVar6 + -7) = 0;
        piVar6[-9] = 0;
        piVar6[-8] = 10;
        uVar1 = param_3[1];
        pwVar2 = (wchar_t *)*param_3;
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          piVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4 * 2);
          *param_1 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*param_1,pwVar2,uVar1);
        iVar3 = *param_1;
        piVar6[-9] = uVar1;
        *(undefined2 *)(iVar3 + uVar1 * 2) = 0;
        piVar6[-2] = (int)(piVar6 + 1);
        *(undefined2 *)(piVar6 + 1) = 0;
        piVar6[-1] = 0;
        *piVar6 = 10;
        uVar1 = param_3[9];
        pwVar2 = (wchar_t *)param_3[8];
        if (9 < uVar1) {
          uVar4 = uVar1 + 0x20 >> 5;
          *piVar6 = uVar4 << 5;
          pvVar5 = _malloc(uVar4 * 0x40);
          piVar6[-2] = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)piVar6[-2],pwVar2,uVar1);
        piVar6[-1] = uVar1;
        *(undefined2 *)(piVar6[-2] + uVar1 * 2) = 0;
      }
      param_1 = param_1 + 0x10;
      piVar6 = piVar6 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_0055ec20 @ 0055ec20 ////

void __fastcall FUN_0055ec20(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x19) {
    FUN_0055faa0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0055ec30 @ 0055ec30 ////

void __thiscall FUN_0055ec30(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 != param_3) {
    puVar2 = FUN_0055d090(param_3,*(undefined4 **)((int)this + 8),param_2);
    puVar1 = *(undefined4 **)((int)this + 8);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 0x19) {
      FUN_0055faa0(puVar3);
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0055ec90 @ 0055ec90 ////

void FUN_0055ec90(void *param_1)

{
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    FUN_0055ec90(*(void **)((int)param_1 + 8));
    FUN_0055d6c0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0055ed30 @ 0055ed30 ////

void FUN_0055ed30(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  FUN_0055e5a0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_0055ed70 @ 0055ed70 ////

void __fastcall FUN_0055ed70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb0cc8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)param_1[0x2d] = param_1[0x2c];
  }
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (10 < (uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x24]);
  }
  if (10 < (uint)param_1[0x1d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1b]);
  }
  if (10 < (uint)param_1[0x15]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x13]);
  }
  FUN_0055e9c0((int)(param_1 + 0xe));
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0055ee30 @ 0055ee30 ////

void __fastcall FUN_0055ee30(int param_1)

{
  uint uVar1;
  int local_4;
  
  local_4 = param_1;
  FUN_0055ec30((void *)(param_1 + 0x38),&local_4,*(undefined4 **)(param_1 + 0x3c),
               *(undefined4 **)(param_1 + 0x40));
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x4c),(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x6c),(wchar_t *)&lpCaption_00d16918,uVar1);
  return;
}


//// FUNCTION FUN_0055ee90 @ 0055ee90 ////

undefined1 __thiscall FUN_0055ee90(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *this_00;
  undefined1 local_10d;
  void *local_10c [2];
  uint local_104;
  undefined2 *local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined2 local_e0 [10];
  wchar_t *local_cc;
  uint local_c8;
  uint local_c4;
  wchar_t local_c0 [10];
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
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
  
  puStack_8 = &LAB_00cb0d17;
  local_c = ExceptionList;
  local_ac = local_a0;
  local_10d = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 10;
  local_ec = local_e0;
  local_e0[0] = 0;
  local_e8 = 0;
  local_e4 = 10;
  puVar3 = (undefined4 *)((int)this + 0x90);
  local_4 = 1;
  ExceptionList = &local_c;
  puVar1 = FUN_0043be60(local_10c,puVar3,L"/");
  FUN_004036d0(&local_ec,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
    _free(local_10c[0]);
  }
  uVar2 = FUN_00ace02d(L"data/");
  uVar2 = FUN_0055d250(&local_ec,(ushort *)L"data/",0,uVar2);
  if (uVar2 == 0) {
    puVar1 = FUN_004211c0(&local_ec,local_10c,0xb,0xffffffff);
    FUN_004036d0(&local_ec,(wchar_t *)*puVar1,puVar1[1]);
    if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
  }
  switch(param_1) {
  case 0:
    iVar4 = FUN_0055e7c0(puVar3,0,(int *)&local_ac,'\0');
    *(int *)((int)this + 0x8c) = iVar4;
    if (iVar4 == 0) break;
    puVar3 = FUN_00443250(local_6c,&local_ec,&local_ac);
    FUN_00403e70((void *)((int)this + 0x4c),puVar3);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    goto LAB_0055f066;
  case 2:
    iVar4 = FUN_0055e7c0(puVar3,*(uint *)((int)this + 0x8c),(int *)&local_ac,'\0');
    *(int *)((int)this + 0x8c) = iVar4;
    if (iVar4 == 0) break;
    puVar3 = FUN_00443250(local_2c,&local_ec,&local_ac);
    FUN_00403e70((void *)((int)this + 0x4c),puVar3);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
LAB_0055f066:
    local_10d = 1;
    break;
  case 3:
    local_cc = local_c0;
    local_c0[0] = L'\0';
    local_c8 = 0;
    local_c4 = 10;
    local_4._0_1_ = 2;
    uVar2 = FUN_0055e7c0(puVar3,0,(int *)&local_cc,'\0');
    FUN_00421290(local_10c,&local_cc);
    local_4 = CONCAT31(local_4._1_3_,3);
    while ((uVar2 != 0 && (iVar4 = _wcscmp(local_cc,*(wchar_t **)((int)this + 0x4c)), iVar4 != 0)))
    {
      FUN_004036d0(local_10c,local_cc,local_c8);
      uVar2 = FUN_0055e7c0(puVar3,uVar2,(int *)&local_cc,'\0');
    }
    puVar3 = FUN_00443250(local_4c,&local_ec,local_10c);
    FUN_004036d0((void *)((int)this + 0x4c),(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    local_10d = 1;
    if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
    if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    break;
  case 5:
    FUN_00421290(local_10c,puVar3);
    iVar4 = FUN_00ace02d((short *)&DAT_00d24214);
    uVar2 = FUN_00420300(local_10c,(short *)&DAT_00d24214,0xffffffff,iVar4);
    puVar1 = FUN_004211c0(local_10c,local_8c,0,uVar2);
    FUN_004036d0(puVar3,(wchar_t *)*puVar1,puVar1[1]);
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0((void *)((int)this + 0x4c),(wchar_t *)&lpCaption_00d16918,uVar2);
    local_10d = 1;
    if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
    break;
  case 6:
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffffe;
    FUN_00421290(local_10c,(undefined4 *)((int)this + 0x4c));
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_0055ee30((int)this);
    FUN_00564ae0(this,local_10c,'\0');
    local_10d = 1;
    if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
  }
  this_00 = (void *)((int)this + 0x4c);
  uVar2 = FUN_00ace02d(L".ini");
  uVar2 = FUN_0055d250(this_00,(ushort *)L".ini",0,uVar2);
  if (uVar2 != 0xffffffff) {
    puVar3 = FUN_004211c0(this_00,local_8c,0,uVar2);
    FUN_004036d0(this_00,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
  }
  if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  ExceptionList = local_c;
  return local_10d;
}


//// FUNCTION FUN_0055f350 @ 0055f350 ////

void FUN_0055f350(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0055d150(param_1);
  }
  return;
}


//// FUNCTION FUN_0055f380 @ 0055f380 ////

void __fastcall FUN_0055f380(int param_1)

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
    FUN_0055d150(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0055f3d0 @ 0055f3d0 ////

int * FUN_0055f3d0(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_0055eac0(param_1,param_2,param_3);
  return param_1 + param_2 * 0x10;
}


//// FUNCTION FUN_0055f4d0 @ 0055f4d0 ////

void __fastcall FUN_0055f4d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2421c;
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


//// FUNCTION FUN_0055f520 @ 0055f520 ////

undefined4 * __thiscall FUN_0055f520(void *this,byte param_1)

{
  FUN_0055f4d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0055f540 @ 0055f540 ////

void __thiscall
FUN_0055f540(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cb0d38;
  local_c = ExceptionList;
  if (0x7fffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0055e320(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x2c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x2c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xb] == '\0') {
LAB_0055f63b:
        *(undefined1 *)(*piVar4 + 0x2c) = 1;
        *(undefined1 *)(piVar5 + 0xb) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x2c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0055d4c0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x2c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x2c) = 0;
        FUN_0055d520(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xb] == '\0') goto LAB_0055f63b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0055d520(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x2c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x2c) = 0;
      FUN_0055d4c0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}


//// FUNCTION FUN_0055f6f0 @ 0055f6f0 ////

void FUN_0055f6f0(void)

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
  puStack_8 = &LAB_00cb0d58;
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


//// FUNCTION FUN_0055f760 @ 0055f760 ////

void FUN_0055f760(void)

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
  puStack_8 = &LAB_00cb0d78;
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


//// FUNCTION FUN_0055f7d0 @ 0055f7d0 ////

void __thiscall FUN_0055f7d0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cb0d98;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x2d) != '\0') {
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
  FUN_0055cf70((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x2d) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x2d) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x2d) == '\0') {
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
      iVar1 = param_2[0xb];
      *(char *)(param_2 + 0xb) = (char)_Memory[0xb];
      *(char *)(_Memory + 0xb) = (char)iVar1;
      goto LAB_0055f941;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x2d) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      piVar2 = (int *)FUN_0055cf40(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      uVar3 = FUN_0055cf20((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0055f941:
  if ((char)_Memory[0xb] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xb] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xb] == '\0') {
            *(undefined1 *)(piVar4 + 0xb) = 1;
            *(undefined1 *)(piVar5 + 0xb) = 0;
            FUN_0055d4c0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x2d) == '\0') {
            if ((*(char *)(*piVar4 + 0x2c) != '\x01') || (*(char *)(piVar4[2] + 0x2c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x2c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x2c) = 1;
                *(undefined1 *)(piVar4 + 0xb) = 0;
                FUN_0055d520(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xb) = (char)piVar5[0xb];
              *(undefined1 *)(piVar5 + 0xb) = 1;
              *(undefined1 *)(piVar4[2] + 0x2c) = 1;
              FUN_0055d4c0(this,(int)piVar5);
              break;
            }
LAB_0055fa04:
            *(undefined1 *)(piVar4 + 0xb) = 0;
          }
        }
        else {
          if ((char)piVar4[0xb] == '\0') {
            *(undefined1 *)(piVar4 + 0xb) = 1;
            *(undefined1 *)(piVar5 + 0xb) = 0;
            FUN_0055d520(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x2d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x2c) == '\x01') && (*(char *)(*piVar4 + 0x2c) == '\x01'))
            goto LAB_0055fa04;
            if (*(char *)(*piVar4 + 0x2c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x2c) = 1;
              *(undefined1 *)(piVar4 + 0xb) = 0;
              FUN_0055d4c0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xb) = (char)piVar5[0xb];
            *(undefined1 *)(piVar5 + 0xb) = 1;
            *(undefined1 *)(*piVar4 + 0x2c) = 1;
            FUN_0055d520(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xb) = 1;
  }
  if ((uint)_Memory[5] < 0xb) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_0055faa0 @ 0055faa0 ////

void __fastcall FUN_0055faa0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb0dc3;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0055f380((int)(param_1 + 0x14));
  FUN_0055e9c0((int)(param_1 + 0x10));
  if (10 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0055fb10 @ 0055fb10 ////

void __thiscall FUN_0055fb10(void *this,undefined4 *param_1,undefined4 *param_2)

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
  cVar1 = *(char *)((int)puVar5 + 0x2d);
  local_4 = true;
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar4 = _wcscmp((wchar_t *)*puVar3,(wchar_t *)puVar5[3]);
    local_4 = iVar4 < 0;
    if (local_4) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x2d);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_0055fb76;
    }
    FUN_0055d5e0((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = _wcscmp((wchar_t *)param_2[3],(wchar_t *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_0055fb76:
  puVar5 = (undefined4 *)FUN_0055f540(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_0055fbd0 @ 0055fbd0 ////

undefined4 __thiscall FUN_0055fbd0(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x28f5c28 < param_1) {
    FUN_0055f6f0();
  }
  pvVar1 = operator_new(param_1 * 100);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 100 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_0055fc20 @ 0055fc20 ////

undefined4 __thiscall FUN_0055fc20(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3ffffff < param_1) {
    param_1 = FUN_0055f760();
  }
  pvVar1 = operator_new(param_1 * 0x40);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x40 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_0055fc70 @ 0055fc70 ////

void __thiscall FUN_0055fc70(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  void *local_5c [2];
  uint local_54;
  void *local_3c;
  uint local_34;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb0dd8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_0055da50(local_5c,param_3);
  iVar4 = *(int *)((int)this + 4);
  iVar7 = 0;
  local_8 = 0;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar4 >> 6;
  }
  uVar8 = CONCAT44(iVar4,iVar2);
  if (param_2 != 0) {
    if (iVar4 != 0) {
      iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
    }
    if (0x3ffffffU - iVar7 < param_2) {
      uVar8 = FUN_0055f760();
    }
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
    }
    if (uVar3 < iVar7 + param_2) {
      if (0x3ffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar4 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
      }
      if (uVar3 < iVar7 + param_2) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)((int)this + 8) - iVar4 >> 6;
        }
        uVar3 = iVar4 + param_2;
      }
      piVar5 = operator_new(uVar3 * 0x40);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar5;
      piVar6 = FUN_0055e5a0(*(undefined4 **)((int)this + 4),param_1,piVar5);
      FUN_0055eac0(piVar6,param_2,local_5c);
      FUN_0055e5a0(param_1,*(undefined4 **)((int)this + 8),piVar6 + param_2 * 0x10);
      puVar1 = *(undefined4 **)((int)this + 4);
      if (puVar1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)puVar1 >> 6;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_0055f350(puVar1,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar5 + uVar3 * 0x10;
      *(int **)((int)this + 8) = piVar5 + (param_2 + iVar4) * 0x10;
      *(int **)((int)this + 4) = piVar5;
    }
    else {
      local_1c = *(int **)((int)this + 8);
      if ((uint)((int)local_1c - (int)param_1 >> 6) < param_2) {
        FUN_0055e5a0(param_1,local_1c,param_1 + param_2 * 0x10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0055f3d0(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 6),local_5c);
        iVar4 = *(int *)((int)this + 8) + param_2 * 0x40;
        *(int *)((int)this + 8) = iVar4;
        FUN_0055e430(param_1,(int *)(iVar4 + param_2 * -0x40),local_5c);
      }
      else {
        piVar6 = local_1c + param_2 * -0x10;
        piVar5 = FUN_0055e5a0(piVar6,local_1c,local_1c);
        *(int **)((int)this + 8) = piVar5;
        FUN_0055ddd0((int)param_1,(int)piVar6,local_1c);
        FUN_0055e430(param_1,param_1 + param_2 * 0x10,local_5c);
      }
    }
  }
  if (10 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  if (10 < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c[0]);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0055ff20 @ 0055ff20 ////

void __thiscall FUN_0055ff20(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0055ec90((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x2d) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x2d) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x2d);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x2d);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x2d);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0055f7d0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0055ffe0 @ 0055ffe0 ////

int __thiscall FUN_0055ffe0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb0df0;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 100;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar3 != 0) {
    if (0x28f5c28 < uVar3) {
      FUN_0055f6f0();
    }
    pvVar1 = operator_new(uVar3 * 100);
    *(void **)((int)this + 4) = pvVar1;
    *(void **)((int)this + 8) = pvVar1;
    *(void **)((int)this + 0xc) = (void *)(uVar3 * 100 + (int)pvVar1);
    local_8 = 0;
    iVar2 = FUN_0055d780(*(int *)(param_1 + 4),*(int *)(param_1 + 8),(int)pvVar1);
    *(int *)((int)this + 8) = iVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_005600b0 @ 005600b0 ////

int __thiscall FUN_005600b0(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb0e00;
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
      uVar1 = FUN_0055f760();
    }
    piVar2 = operator_new(uVar1 * 0x40);
    *(int **)((int)this + 4) = piVar2;
    *(int **)((int)this + 8) = piVar2;
    *(int **)((int)this + 0xc) = piVar2 + uVar1 * 0x10;
    local_8 = 0;
    piVar2 = FUN_0055e6b0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),piVar2);
    *(int **)((int)this + 8) = piVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_00560170 @ 00560170 ////

void * __thiscall FUN_00560170(void *this,void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (this == param_1) {
    return this;
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    iVar6 = (int)*(undefined4 **)((int)param_1 + 8) - *(int *)((int)param_1 + 4);
    iVar3 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 100 + iVar3;
    uVar7 = iVar6 - iVar3;
    if (iVar6 != iVar3) {
      puVar2 = *(undefined4 **)((int)this + 4);
      if (puVar2 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(int *)((int)this + 8) - (int)puVar2) / 100;
      }
      if (uVar7 <= uVar1) {
        puVar2 = FUN_0055d090(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                              puVar2);
        FUN_0055e990(puVar2,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             ((*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 100) * 100 +
             *(int *)((int)this + 4);
        return this;
      }
      if (puVar2 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(int *)((int)this + 0xc) - (int)puVar2) / 100;
      }
      if (uVar1 < uVar7) {
        if (puVar2 != (undefined4 *)0x0) {
          FUN_0055e990(puVar2,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        uVar7 = FUN_0055ca50((int)param_1);
        uVar5 = FUN_0055fbd0(this,uVar7);
        if ((char)uVar5 == '\0') {
          return this;
        }
        uVar5 = FUN_0055e410(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                             *(void **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar5;
        return this;
      }
      iVar3 = FUN_0055ca50((int)this);
      puVar8 = *(undefined4 **)((int)param_1 + 4) + iVar3 * 0x19;
      FUN_0055d090(*(undefined4 **)((int)param_1 + 4),puVar8,puVar2);
      pvVar4 = FUN_0055d6f0(puVar8,*(undefined4 **)((int)param_1 + 8),*(void **)((int)this + 8));
      *(void **)((int)this + 8) = pvVar4;
      return this;
    }
  }
  FUN_0055e9c0((int)this);
  return this;
}


//// FUNCTION FUN_005602f0 @ 005602f0 ////

void * __thiscall FUN_005602f0(void *this,void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (this == param_1) {
    return this;
  }
  puVar4 = *(undefined4 **)((int)param_1 + 4);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = (int)*(undefined4 **)((int)param_1 + 8) - (int)puVar4 >> 6;
    if (uVar1 != 0) {
      piVar2 = *(int **)((int)this + 4);
      if (piVar2 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 8) - (int)piVar2 >> 6;
      }
      if (uVar1 <= uVar6) {
        piVar2 = FUN_0055dbe0(puVar4,*(undefined4 **)((int)param_1 + 8),piVar2);
        FUN_0055f350(piVar2,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 6) * 0x40 +
             *(int *)((int)this + 4);
        return this;
      }
      if (piVar2 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(int *)((int)this + 0xc) - (int)piVar2 >> 6;
      }
      if (uVar6 < uVar1) {
        if (piVar2 != (int *)0x0) {
          FUN_0055f350(piVar2,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 6;
        }
        uVar5 = FUN_0055fc20(this,uVar1);
        if ((char)uVar5 == '\0') {
          return this;
        }
        uVar5 = FUN_0055ed30(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                             *(int **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar5;
        return this;
      }
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)piVar2 >> 6;
      }
      puVar4 = *(undefined4 **)((int)param_1 + 4) + iVar3 * 0x10;
      FUN_0055dbe0(*(undefined4 **)((int)param_1 + 4),puVar4,piVar2);
      piVar2 = FUN_0055e5a0(puVar4,*(undefined4 **)((int)param_1 + 8),*(int **)((int)this + 8));
      *(int **)((int)this + 8) = piVar2;
      return this;
    }
  }
  FUN_0055f380((int)this);
  return this;
}


//// FUNCTION FUN_00560450 @ 00560450 ////

undefined4 * __thiscall FUN_00560450(void *this,byte param_1)

{
  FUN_0055faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00560510 @ 00560510 ////

undefined4 * __thiscall FUN_00560510(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0e2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined2 *)((int)this + 0x2c);
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 10;
  local_4 = 0;
  FUN_004036d0((undefined4 *)((int)this + 0x20),(wchar_t *)param_1[8],param_1[9]);
  local_4._0_1_ = 1;
  FUN_0055ffe0((void *)((int)this + 0x40),(int)(param_1 + 0x10));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_005600b0((void *)((int)this + 0x50),(int)(param_1 + 0x14));
  *(undefined1 *)((int)this + 0x60) = *(undefined1 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005605d0 @ 005605d0 ////

void * __thiscall FUN_005605d0(void *this,undefined4 *param_1)

{
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  FUN_004036d0((void *)((int)this + 0x20),(wchar_t *)param_1[8],param_1[9]);
  FUN_00560170((void *)((int)this + 0x40),param_1 + 0x10);
  FUN_005602f0((void *)((int)this + 0x50),param_1 + 0x14);
  *(undefined1 *)((int)this + 0x60) = *(undefined1 *)(param_1 + 0x18);
  return this;
}


//// FUNCTION FUN_00560620 @ 00560620 ////

int * __cdecl FUN_00560620(int param_1,int param_2,int *param_3)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar6 = (uint *)(param_3 + 10);
  do {
    pwVar1 = *(wchar_t **)(param_2 + -100);
    uVar2 = *(uint *)(param_2 + -0x60);
    iVar8 = param_2 + -100;
    puVar7 = puVar6 + -0x19;
    param_3 = param_3 + -0x19;
    if (puVar6[-0x21] <= uVar2) {
      if (10 < puVar6[-0x21]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar6[-0x21] = uVar4;
      pvVar5 = _malloc(uVar4 * 2);
      *param_3 = (int)pvVar5;
    }
    _wcsncpy((wchar_t *)*param_3,pwVar1,uVar2);
    iVar3 = *param_3;
    puVar6[-0x22] = uVar2;
    *(undefined2 *)(iVar3 + uVar2 * 2) = 0;
    pwVar1 = *(wchar_t **)(param_2 + -0x44);
    uVar2 = *(uint *)(param_2 + -0x40);
    if (*puVar7 <= uVar2) {
      if (10 < *puVar7) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar6[-0x1b]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar7 = uVar4;
      pvVar5 = _malloc(uVar4 * 2);
      puVar6[-0x1b] = (uint)pvVar5;
    }
    _wcsncpy((wchar_t *)puVar6[-0x1b],pwVar1,uVar2);
    puVar6[-0x1a] = uVar2;
    *(undefined2 *)(puVar6[-0x1b] + uVar2 * 2) = 0;
    FUN_00560170(puVar6 + -0x13,(void *)(param_2 + -0x24));
    FUN_005602f0(puVar6 + -0xf,(void *)(param_2 + -0x14));
    *(undefined1 *)(puVar6 + -0xb) = *(undefined1 *)(param_2 + -4);
    puVar6 = puVar7;
    param_2 = iVar8;
  } while (iVar8 != param_1);
  return param_3;
}


//// FUNCTION FUN_00560740 @ 00560740 ////

void __cdecl FUN_00560740(void *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb0e51;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00560510(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00560790 @ 00560790 ////

void __fastcall FUN_00560790(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  param_1[8] = param_1 + 0xb;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 10;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}


//// FUNCTION FUN_005607f0 @ 005607f0 ////

void __thiscall FUN_005607f0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 6) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 6))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_0055eac0(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 0x10;
    return;
  }
  FUN_0055fc70(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00560890 @ 00560890 ////

void __cdecl FUN_00560890(int *param_1,int *param_2,undefined4 *param_3)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_1 + 10);
    do {
      pwVar1 = (wchar_t *)*param_3;
      uVar2 = param_3[1];
      if (puVar6[-8] <= uVar2) {
        if (10 < puVar6[-8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        puVar6[-8] = uVar4;
        pvVar5 = _malloc(uVar4 * 2);
        *param_1 = (int)pvVar5;
      }
      _wcsncpy((wchar_t *)*param_1,pwVar1,uVar2);
      iVar3 = *param_1;
      puVar6[-9] = uVar2;
      *(undefined2 *)(iVar3 + uVar2 * 2) = 0;
      pwVar1 = (wchar_t *)param_3[8];
      uVar2 = param_3[9];
      if (*puVar6 <= uVar2) {
        if (10 < *puVar6) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[-2]);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        *puVar6 = uVar4;
        pvVar5 = _malloc(uVar4 * 2);
        puVar6[-2] = (uint)pvVar5;
      }
      _wcsncpy((wchar_t *)puVar6[-2],pwVar1,uVar2);
      puVar6[-1] = uVar2;
      *(undefined2 *)(puVar6[-2] + uVar2 * 2) = 0;
      FUN_00560170(puVar6 + 6,param_3 + 0x10);
      FUN_005602f0(puVar6 + 10,param_3 + 0x14);
      *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_3 + 0x18);
      param_1 = param_1 + 0x19;
      puVar6 = puVar6 + 0x19;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_005609c0 @ 005609c0 ////

void __fastcall FUN_005609c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0055ff20(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005609f0 @ 005609f0 ////

int __fastcall FUN_005609f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0055dab0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00560a20 @ 00560a20 ////

void __fastcall FUN_00560a20(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d2421c;
  return;
}


//// FUNCTION FUN_00560a80 @ 00560a80 ////

void __thiscall FUN_00560a80(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_80 [25];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb0eb8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00560510(local_80,param_3);
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 100;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 100;
    }
    if (0x28f5c28U - iVar2 < param_2) {
      FUN_0055f6f0();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 100;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x28f5c28 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 100;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_0055ca50((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 100);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_0055d6f0(*(undefined4 **)((int)this + 4),param_1,pvVar4);
      FUN_0055dd10(pvVar5,param_2,local_80);
      FUN_0055d6f0(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar5 + param_2 * 100));
      local_8 = 0;
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 100;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_0055e990(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 100 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar3) * 100 + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      piVar1 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar1 - (int)param_1) / 100) < param_2) {
        FUN_0055d6f0(param_1,piVar1,param_1 + param_2 * 0x19);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0055ea10(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 100,local_80);
        iVar3 = *(int *)((int)this + 8) + param_2 * 100;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00560890(param_1,(int *)(iVar3 + param_2 * -100),local_80);
      }
      else {
        pvVar4 = FUN_0055d6f0(piVar1 + param_2 * -0x19,piVar1,piVar1);
        *(void **)((int)this + 8) = pvVar4;
        FUN_00560620((int)param_1,(int)(piVar1 + param_2 * -0x19),piVar1);
        FUN_00560890(param_1,param_1 + param_2 * 0x19,local_80);
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_0055faa0(local_80);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00560d80 @ 00560d80 ////

void __thiscall FUN_00560d80(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 100 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 100;
      goto LAB_00560dc5;
    }
  }
  iVar1 = 0;
LAB_00560dc5:
  FUN_00560a80(this,param_2,1,param_3);
  *param_1 = iVar1 * 100 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00560df0 @ 00560df0 ////

void __thiscall FUN_00560df0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 100) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 100))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_0055dd10(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 100;
    return;
  }
  FUN_00560d80(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00560e80 @ 00560e80 ////

int __thiscall FUN_00560e80(void *this,void *param_1,char param_2)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  void *this_00;
  int iVar8;
  wchar_t *local_f0;
  uint local_ec;
  uint local_e8;
  wchar_t local_e4 [10];
  wchar_t *local_d0;
  uint local_cc;
  uint local_c8;
  wchar_t local_c4 [10];
  wchar_t *local_b0;
  uint local_ac;
  uint local_a8;
  wchar_t local_a4 [12];
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined1 local_70;
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
  
  puStack_8 = &LAB_00cb0f25;
  local_c = ExceptionList;
  local_f0 = local_e4;
  local_e4[0] = L'\0';
  local_ec = 0;
  local_e8 = 10;
  local_6c = local_60;
  local_4 = 0;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  ExceptionList = &local_c;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_6c,(wchar_t *)&lpCaption_00d16918,uVar3);
  uVar3 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  this_00 = (void *)((int)this + 0x38);
  do {
    iVar4 = FUN_00ace02d((short *)&DAT_00d24120);
    iVar4 = FUN_00442df0(param_1,(short *)&DAT_00d24120,uVar3,iVar4);
    if (iVar4 == -1) {
      iVar4 = *(int *)((int)param_1 + 4);
    }
    puVar5 = FUN_004211c0(param_1,local_2c,uVar3,iVar4 - uVar3);
    uVar3 = puVar5[1];
    pwVar2 = (wchar_t *)*puVar5;
    if (local_e8 <= uVar3) {
      if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
        _free(local_f0);
      }
      local_e8 = uVar3 + 0x20 & 0xffffffe0;
      local_f0 = _malloc(local_e8 * 2);
    }
    _wcsncpy(local_f0,pwVar2,uVar3);
    local_f0[uVar3] = L'\0';
    local_ec = uVar3;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    iVar8 = *(int *)((int)this_00 + 4);
    uVar3 = iVar4 + 1;
    if (iVar8 != *(int *)((int)this_00 + 8)) {
      do {
        iVar4 = _wcscmp(*(wchar_t **)(iVar8 + 0x20),local_f0);
        if (iVar4 == 0) goto LAB_00561260;
        iVar8 = iVar8 + 100;
      } while (iVar8 != *(int *)((int)this_00 + 8));
    }
    uVar7 = local_ec;
    pwVar2 = local_f0;
    if (param_2 == '\0') {
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      if (local_e8 < 0xb) {
        ExceptionList = local_c;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_f0);
    }
    local_d0 = local_c4;
    local_c4[0] = L'\0';
    local_cc = 0;
    local_c8 = 10;
    local_b0 = local_a4;
    local_a4[0] = L'\0';
    local_ac = 0;
    local_a8 = 10;
    local_8c = (undefined4 *)0x0;
    local_88 = (undefined4 *)0x0;
    local_84 = 0;
    local_7c = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    local_74 = 0;
    local_4 = CONCAT31(local_4._1_3_,5);
    if (9 < local_ec) {
      uVar6 = local_ec + 0x20 >> 5;
      local_a8 = uVar6 << 5;
      local_b0 = _malloc(uVar6 * 0x40);
    }
    _wcsncpy(local_b0,pwVar2,uVar7);
    uVar6 = local_68;
    pwVar2 = local_6c;
    local_ac = uVar7;
    local_b0[uVar7] = L'\0';
    if (local_c8 <= local_68) {
      if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
        _free(local_d0);
      }
      uVar7 = local_68 + 0x20 >> 5;
      local_c8 = uVar7 << 5;
      local_d0 = _malloc(uVar7 * 0x40);
    }
    _wcsncpy(local_d0,pwVar2,uVar6);
    local_cc = uVar6;
    local_d0[uVar6] = L'\0';
    local_70 = 0;
    FUN_00560df0(this_00,&local_d0);
    puVar5 = local_88;
    iVar8 = *(int *)((int)this_00 + 4);
    if (iVar8 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this_00 + 8) - iVar8) / 100;
    }
    iVar8 = iVar4 * 100 + -100 + iVar8;
    local_4 = CONCAT31(local_4._1_3_,7);
    if (local_7c != (undefined4 *)0x0) {
      if (local_7c == local_78) {
                    /* WARNING: Subroutine does not return */
        _free(local_7c);
      }
      puVar5 = local_7c + 8;
      while( true ) {
        if (10 < (uint)puVar5[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*puVar5);
        }
        if (10 < (uint)puVar5[-6]) break;
        puVar1 = puVar5 + 8;
        puVar5 = puVar5 + 0x10;
        if (puVar1 == local_78) {
                    /* WARNING: Subroutine does not return */
          _free(local_7c);
        }
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)puVar5[-8]);
    }
    local_7c = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    local_74 = 0;
    puVar1 = local_8c;
    if (local_8c != (undefined4 *)0x0) {
      for (; puVar1 != puVar5; puVar1 = puVar1 + 0x19) {
        FUN_0055faa0(puVar1);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_8c = (undefined4 *)0x0;
    local_88 = (undefined4 *)0x0;
    local_84 = 0;
    if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
      _free(local_b0);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
      _free(local_d0);
    }
LAB_00561260:
    this_00 = (void *)(iVar8 + 0x40);
    puVar5 = FUN_0043be60(local_4c,&local_f0,L"/");
    FUN_0040cae0(&local_6c,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if ((*(uint *)((int)param_1 + 4) <= uVar3) || (local_ec == 0)) {
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      if (local_e8 < 0xb) {
        ExceptionList = local_c;
        return iVar8;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_f0);
    }
  } while( true );
}


//// FUNCTION FUN_00561350 @ 00561350 ////

void __thiscall FUN_00561350(void *this,undefined4 *param_1,undefined4 *param_2)

{
  wchar_t *pwVar1;
  uint _Count;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_50;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0f38;
  local_c = ExceptionList;
  if (param_1[1] != 0) {
    ExceptionList = &local_c;
    FUN_0055dfd0(this,param_1);
    iVar3 = FUN_00560e80(this,(void *)((int)this + 0x4c),'\x01');
    local_50 = 0;
    for (uVar5 = 0;
        (*(int *)(iVar3 + 0x54) != 0 &&
        (uVar5 < (uint)(*(int *)(iVar3 + 0x58) - *(int *)(iVar3 + 0x54) >> 6))); uVar5 = uVar5 + 1)
    {
      iVar4 = _wcscmp(*(wchar_t **)(local_50 + *(int *)(iVar3 + 0x54)),
                      *(wchar_t **)((int)this + 0x6c));
      if (iVar4 == 0) {
        if ((*(byte *)((int)this + 0x48) & 2) != 0) {
          _wcscmp(*(wchar_t **)(uVar5 * 0x40 + 0x20 + *(int *)(iVar3 + 0x54)),(wchar_t *)*param_2);
        }
        FUN_004036d0((void *)(uVar5 * 0x40 + *(int *)(iVar3 + 0x54) + 0x20),(wchar_t *)*param_2,
                     param_2[1]);
        ExceptionList = local_c;
        return;
      }
      local_50 = local_50 + 0x40;
    }
    local_4c = local_40;
    local_2c = local_20;
    local_40[0] = L'\0';
    local_48 = 0;
    local_44 = 10;
    local_20[0] = L'\0';
    local_28 = 0;
    local_24 = 10;
    uVar5 = param_1[1];
    pwVar1 = (wchar_t *)*param_1;
    local_4 = 0;
    if (9 < uVar5) {
      local_44 = uVar5 + 0x20 & 0xffffffe0;
      local_4c = _malloc(local_44 * 2);
    }
    _wcsncpy(local_4c,pwVar1,uVar5);
    local_4c[uVar5] = L'\0';
    _Count = param_2[1];
    pwVar1 = (wchar_t *)*param_2;
    local_48 = uVar5;
    if (local_24 <= _Count) {
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_24 = _Count + 0x20 & 0xffffffe0;
      local_2c = _malloc(local_24 * 2);
    }
    _wcsncpy(local_2c,pwVar1,_Count);
    local_2c[_Count] = L'\0';
    iVar4 = *(int *)(iVar3 + 0x54);
    local_28 = _Count;
    if ((iVar4 == 0) ||
       ((uint)(*(int *)(iVar3 + 0x5c) - iVar4 >> 6) <= (uint)(*(int *)(iVar3 + 0x58) - iVar4 >> 6)))
    {
      FUN_0055fc70((void *)(iVar3 + 0x50),*(int **)(iVar3 + 0x58),1,&local_4c);
    }
    else {
      piVar2 = *(int **)(iVar3 + 0x58);
      FUN_0055eac0(piVar2,1,&local_4c);
      *(int **)(iVar3 + 0x58) = piVar2 + 0x10;
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005615a0 @ 005615a0 ////

void __thiscall FUN_005615a0(void *this,undefined4 *param_1,float param_2)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00569cc0(local_2c,param_2);
  local_4 = 0;
  FUN_00561350(this,param_1,puVar1);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00561610 @ 00561610 ////

void __thiscall FUN_00561610(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00569df0(local_2c,param_2);
  local_4 = 0;
  FUN_00561350(this,param_1,puVar1);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00561680 @ 00561680 ////

undefined4 * __thiscall FUN_00561680(void *this,undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  int local_70;
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
  
  puStack_8 = &LAB_00cb0f98;
  local_c = ExceptionList;
  uVar7 = 0;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_00560e80(this,(void *)((int)this + 0x4c),'\x01');
  iVar4 = iVar2 + 0x50;
  if ((*(int *)(iVar2 + 0x54) != 0) && (*(int *)(iVar2 + 0x58) - *(int *)(iVar2 + 0x54) >> 6 != 0))
  {
    switch(param_2) {
    case 0:
      FUN_00403e70(&local_6c,*(undefined4 **)(iVar2 + 0x54));
      break;
    case 1:
      iVar4 = FUN_0055cab0(iVar4);
      FUN_00403e70(&local_6c,(undefined4 *)((iVar4 + 0x3ffffff) * 0x40 + *(int *)(iVar2 + 0x54)));
      break;
    case 2:
      bVar1 = false;
      puVar3 = FUN_00561680(this,local_4c,0);
      FUN_00403e70(&local_6c,puVar3);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      local_70 = 0;
      for (; (*(int *)(iVar2 + 0x54) != 0 &&
             (uVar7 < (uint)(*(int *)(iVar2 + 0x58) - *(int *)(iVar2 + 0x54) >> 6)));
          uVar7 = uVar7 + 1) {
        if (bVar1) {
          uVar6 = *(uint *)(uVar7 * 0x40 + 4 + *(int *)(iVar2 + 0x54));
          pwVar9 = *(wchar_t **)(uVar7 * 0x40 + *(int *)(iVar2 + 0x54));
          goto LAB_005617d8;
        }
        iVar4 = _wcscmp(*(wchar_t **)(local_70 + *(int *)(iVar2 + 0x54)),
                        *(wchar_t **)((int)this + 0x6c));
        if (iVar4 == 0) {
          bVar1 = true;
        }
        local_70 = local_70 + 0x40;
      }
      break;
    case 3:
      puVar3 = FUN_00561680(this,local_2c,1);
      FUN_00403e70(&local_6c,puVar3);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      bVar1 = false;
      iVar4 = FUN_0055cab0(iVar4);
      iVar4 = iVar4 + -1;
      iVar8 = iVar4 * 0x40;
      while (!bVar1) {
        iVar5 = _wcscmp(*(wchar_t **)(iVar8 + *(int *)(iVar2 + 0x54)),
                        *(wchar_t **)((int)this + 0x6c));
        if (iVar5 == 0) {
          bVar1 = true;
        }
        iVar4 = iVar4 + -1;
        iVar8 = iVar8 + -0x40;
      }
      uVar6 = *(uint *)(iVar4 * 0x40 + 4 + *(int *)(iVar2 + 0x54));
      pwVar9 = *(wchar_t **)(iVar4 * 0x40 + *(int *)(iVar2 + 0x54));
LAB_005617d8:
      FUN_004036d0(&local_6c,pwVar9,uVar6);
      break;
    case 4:
      FUN_00403e70(&local_6c,(undefined4 *)((int)this + 0x6c));
      break;
    case 7:
      uVar7 = FUN_0055cab0(iVar4);
      uVar6 = FUN_00990ce0();
      FUN_00403e70(&local_6c,(undefined4 *)((uVar6 % uVar7) * 0x40 + *(int *)(iVar2 + 0x54)));
    }
  }
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_6c,local_68);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00561930 @ 00561930 ////

undefined4 __thiscall FUN_00561930(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_0055dfd0(this,param_1);
  uVar2 = FUN_00560e80(this,(void *)((int)this + 0x4c),'\x01');
  uVar3 = uVar2;
  if ((*(int *)(uVar2 + 0x54) != 0) &&
     (uVar3 = *(int *)(uVar2 + 0x58) - *(int *)(uVar2 + 0x54) >> 6, uVar3 != 0)) {
    iVar4 = 0;
    for (uVar5 = 0;
        (iVar1 = *(int *)(uVar2 + 0x54), iVar1 != 0 &&
        (uVar3 = *(int *)(uVar2 + 0x58) - iVar1 >> 6, uVar5 < uVar3)); uVar5 = uVar5 + 1) {
      uVar3 = _wcscmp(*(wchar_t **)(iVar4 + iVar1),*(wchar_t **)((int)this + 0x6c));
      if (uVar3 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 0x40;
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_005619b0 @ 005619b0 ////

int * __thiscall FUN_005619b0(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  FUN_0055dfd0(this,param_2);
  iVar1 = FUN_00560e80(this,(void *)((int)this + 0x4c),'\x01');
  if ((*(int *)(iVar1 + 0x54) != 0) && (*(int *)(iVar1 + 0x58) - *(int *)(iVar1 + 0x54) >> 6 != 0))
  {
    for (uVar6 = 0;
        (iVar2 = *(int *)(iVar1 + 0x54), iVar2 != 0 &&
        (uVar6 < (uint)(*(int *)(iVar1 + 0x58) - iVar2 >> 6))); uVar6 = uVar6 + 1) {
      iVar2 = _wcscmp(*(wchar_t **)(iVar2 + iVar5),*(wchar_t **)((int)this + 0x6c));
      if (iVar2 == 0) {
        iVar1 = uVar6 * 0x40 + *(int *)(iVar1 + 0x54);
        *param_1 = (int)(param_1 + 3);
        *(undefined2 *)(param_1 + 3) = 0;
        param_1[1] = 0;
        param_1[2] = 10;
        FUN_004036d0(param_1,*(wchar_t **)(iVar1 + 0x20),*(uint *)(iVar1 + 0x24));
        return param_1;
      }
      iVar5 = iVar5 + 0x40;
    }
  }
  *param_1 = (int)(param_1 + 3);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
  if ((uint)param_1[2] <= uVar6) {
    if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_1);
    }
    uVar3 = uVar6 + 0x20 >> 5;
    param_1[2] = uVar3 << 5;
    pvVar4 = _malloc(uVar3 * 0x40);
    *param_1 = (int)pvVar4;
  }
  _wcsncpy((wchar_t *)*param_1,(wchar_t *)&lpCaption_00d16918,uVar6);
  param_1[1] = uVar6;
  *(undefined2 *)(*param_1 + uVar6 * 2) = 0;
  return param_1;
}


//// FUNCTION FUN_00561ae0 @ 00561ae0 ////

int * __thiscall FUN_00561ae0(void *this,int *param_1,undefined4 param_2)

{
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00561680(this,local_2c,param_2);
  local_4 = 0;
  FUN_005619b0(this,param_1,local_2c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00561b60 @ 00561b60 ////

float10 __thiscall FUN_00561b60(void *param_1,undefined4 *param_2,float param_3)

{
  float10 fVar1;
  float fStack0000000c;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005619b0(param_1,(int *)&local_2c,param_2);
  local_4 = 0;
  if (local_28 != 0) {
    fVar1 = (float10)FUN_00567d70(&local_2c);
    fStack0000000c = (float)fVar1;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return (float10)fStack0000000c;
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return (float10)param_3;
}


//// FUNCTION FUN_00561c00 @ 00561c00 ////

float10 __thiscall FUN_00561c00(void *param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  float fStack0000000c;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb0ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00561ae0(param_1,(int *)&local_2c,param_2);
  local_4 = 0;
  if (local_28 != 0) {
    fVar1 = (float10)FUN_00567d70(&local_2c);
    fStack0000000c = (float)fVar1;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return (float10)fStack0000000c;
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return (float10)param_3;
}


//// FUNCTION FUN_00561ca0 @ 00561ca0 ////

undefined4 __thiscall FUN_00561ca0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005619b0(this,(int *)&local_2c,param_1);
  local_4 = 0;
  if (local_28 != 0) {
    uVar1 = FUN_00567d90(&local_2c);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return uVar1;
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_2;
}


//// FUNCTION FUN_00561d40 @ 00561d40 ////

undefined4 __thiscall FUN_00561d40(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00561ae0(this,(int *)&local_2c,param_1);
  local_4 = 0;
  if (local_28 != 0) {
    uVar1 = FUN_00567d90(&local_2c);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return uVar1;
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_2;
}


//// FUNCTION FUN_00561e60 @ 00561e60 ////

undefined4 __thiscall FUN_00561e60(void *this,undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int local_b0;
  wchar_t *local_ac;
  uint local_a8;
  uint local_a4;
  wchar_t local_a0 [10];
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
  
  puStack_8 = &LAB_00cb105b;
  local_c = ExceptionList;
  uVar8 = 0;
  local_ac = local_a0;
  local_a0[0] = L'\0';
  local_a8 = 0;
  local_a4 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_00560e80(this,(void *)((int)this + 0x4c),'\x01');
  iVar3 = uVar2 + 0x50;
  uVar5 = uVar2;
  if ((*(int *)(uVar2 + 0x54) == 0) ||
     (uVar5 = 0, *(int *)(uVar2 + 0x58) - *(int *)(uVar2 + 0x54) >> 6 == 0))
  goto joined_r0x00562119;
  switch(param_1) {
  case 0:
    puVar7 = *(undefined4 **)(uVar2 + 0x54);
    break;
  case 1:
    iVar3 = FUN_0055cab0(iVar3);
    puVar7 = (undefined4 *)((iVar3 + 0x3ffffff) * 0x40 + *(int *)(uVar2 + 0x54));
    break;
  case 2:
    bVar1 = false;
    puVar7 = FUN_00561680(this,local_8c,0);
    FUN_00403e70(&local_ac,puVar7);
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    local_b0 = 0;
    while( true ) {
      if ((*(int *)(uVar2 + 0x54) == 0) ||
         ((uint)(*(int *)(uVar2 + 0x58) - *(int *)(uVar2 + 0x54) >> 6) <= uVar8)) goto LAB_00561fa6;
      if (bVar1) break;
      iVar3 = _wcscmp(*(wchar_t **)(local_b0 + *(int *)(uVar2 + 0x54)),
                      *(wchar_t **)((int)this + 0x6c));
      if (iVar3 == 0) {
        bVar1 = true;
      }
      uVar8 = uVar8 + 1;
      local_b0 = local_b0 + 0x40;
    }
    FUN_004036d0(&local_ac,*(wchar_t **)(uVar8 * 0x40 + *(int *)(uVar2 + 0x54)),
                 *(uint *)(uVar8 * 0x40 + 4 + *(int *)(uVar2 + 0x54)));
LAB_00561fa6:
    puVar7 = FUN_00561680(this,local_4c,0);
    iVar3 = _wcscmp(local_ac,(wchar_t *)*puVar7);
    local_2c[0] = local_4c[0];
    uVar5 = local_44;
    goto joined_r0x0056209c;
  case 3:
    puVar7 = FUN_00561680(this,local_6c,1);
    FUN_00403e70(&local_ac,puVar7);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    bVar1 = false;
    iVar3 = FUN_0055cab0(iVar3);
    iVar3 = iVar3 + -1;
    iVar9 = iVar3 * 0x40;
    while (!bVar1) {
      iVar4 = _wcscmp(*(wchar_t **)(*(int *)(uVar2 + 0x54) + iVar9),*(wchar_t **)((int)this + 0x6c))
      ;
      if (iVar4 == 0) {
        bVar1 = true;
      }
      iVar3 = iVar3 + -1;
      iVar9 = iVar9 + -0x40;
    }
    FUN_004036d0(&local_ac,*(wchar_t **)(iVar3 * 0x40 + *(int *)(uVar2 + 0x54)),
                 *(uint *)(iVar3 * 0x40 + 4 + *(int *)(uVar2 + 0x54)));
    puVar7 = FUN_00561680(this,local_2c,1);
    iVar3 = _wcscmp(local_ac,(wchar_t *)*puVar7);
    uVar5 = local_24;
joined_r0x0056209c:
    if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (iVar3 == 0) {
joined_r0x00562119:
      if (local_a4 < 0xb) {
        ExceptionList = local_c;
        return uVar5 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
    goto switchD_00561ee0_caseD_5;
  case 4:
    puVar7 = (undefined4 *)((int)this + 0x6c);
    break;
  default:
    goto switchD_00561ee0_caseD_5;
  case 7:
    uVar5 = FUN_0055cab0(iVar3);
    uVar8 = FUN_00990ce0();
    puVar7 = (undefined4 *)((uVar8 % uVar5) * 0x40 + *(int *)(uVar2 + 0x54));
  }
  FUN_00403e70(&local_ac,puVar7);
switchD_00561ee0_caseD_5:
  uVar6 = FUN_004036d0((void *)((int)this + 0x6c),local_ac,local_a8);
  if (local_a4 < 0xb) {
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_ac);
}


//// FUNCTION FUN_00562170 @ 00562170 ////

undefined4 * __thiscall FUN_00562170(void *this,undefined4 *param_1)

{
  FUN_00561680(this,param_1,4);
  return param_1;
}


//// FUNCTION FUN_00562190 @ 00562190 ////

/* WARNING: Removing unreachable block (ram,0x00562210) */

void __thiscall FUN_00562190(void *this,void *param_1,short *param_2)

{
  short *psVar1;
  undefined4 *puVar2;
  uint _Count;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  wchar_t *local_ac;
  uint local_a4;
  wchar_t local_a0 [10];
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
  puStack_8 = &LAB_00cb1080;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00561e60(this,0);
  do {
    puVar2 = FUN_00562170(this,local_8c);
    local_ac = local_a0;
    local_a0[0] = L'\0';
    local_a4 = 10;
    _Count = FUN_00ace02d((short *)&lpCaption_00d16918);
    if (9 < _Count) {
      uVar3 = _Count + 0x20 >> 5;
      local_a4 = uVar3 << 5;
      local_ac = _malloc(uVar3 * 0x40);
    }
    _wcsncpy(local_ac,(wchar_t *)&lpCaption_00d16918,_Count);
    local_ac[_Count] = L'\0';
    iVar4 = _wcscmp((wchar_t *)*puVar2,local_ac);
    if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    if (iVar4 != 0) {
      iVar4 = FUN_00ace02d(param_2);
      FUN_00553ad0(param_1,param_2,iVar4 << 1);
      iVar4 = FUN_00ace02d((short *)&DAT_00d2422c);
      FUN_00553ad0(param_1,&DAT_00d2422c,iVar4 << 1);
      puVar2 = FUN_00562170(this,local_4c);
      psVar1 = (short *)*puVar2;
      local_4 = 0;
      iVar4 = FUN_00ace02d(psVar1);
      FUN_00553ad0(param_1,psVar1,iVar4 << 1);
      local_4 = 0xffffffff;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      piVar5 = FUN_00561ae0(this,(int *)local_6c,4);
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      if (piVar5[1] != 0) {
        iVar4 = FUN_00ace02d((short *)&DAT_00d23cc0);
        FUN_00553ad0(param_1,&DAT_00d23cc0,iVar4 << 1);
        piVar5 = FUN_00561ae0(this,(int *)local_2c,4);
        psVar1 = (short *)*piVar5;
        local_4 = 1;
        iVar4 = FUN_00ace02d(psVar1);
        FUN_00553ad0(param_1,psVar1,iVar4 << 1);
        local_4 = 0xffffffff;
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
      iVar4 = FUN_00ace02d((short *)&DAT_00d24224);
      FUN_00553ad0(param_1,&DAT_00d24224,iVar4 << 1);
    }
    uVar6 = FUN_00561e60(this,2);
    if ((char)uVar6 == '\0') {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00562420 @ 00562420 ////

undefined4 __thiscall FUN_00562420(void *this,undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00560e80(this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_004036d0((void *)((int)this + 0x4c),(wchar_t *)*param_1,param_1[1]);
  uVar2 = FUN_00561e60(this,0);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00562460 @ 00562460 ////

bool __thiscall FUN_00562460(void *this,undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb10a0;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x50) == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00560e80(this,param_1,param_2);
    if (iVar1 != 0) {
      FUN_004036d0((void *)((int)this + 0x4c),(wchar_t *)*param_1,param_1[1]);
      FUN_00561e60(this,0);
      ExceptionList = local_c;
      return true;
    }
    ExceptionList = local_c;
    return false;
  }
  ExceptionList = &local_c;
  puVar2 = FUN_0043be60(local_2c,(undefined4 *)((int)this + 0x4c),L"/");
  local_4 = 0;
  puVar2 = FUN_00443250(local_4c,puVar2,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_00560e80(this,puVar2,param_2);
  if (iVar1 != 0) {
    FUN_004036d0((undefined4 *)((int)this + 0x4c),(wchar_t *)*puVar2,puVar2[1]);
    FUN_00561e60(this,0);
  }
  if (local_44 < 0xb) {
    if (local_24 < 0xb) {
      ExceptionList = local_c;
      return iVar1 != 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c[0]);
}


//// FUNCTION FUN_00562580 @ 00562580 ////

undefined1 __thiscall FUN_00562580(void *this,undefined4 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_ad;
  wchar_t *local_ac;
  uint local_a8;
  uint local_a4;
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
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
  puStack_8 = &LAB_00cb10bb;
  local_c = ExceptionList;
  if ((*(byte *)((int)this + 0x48) & 1) != 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_0055ee90(this,param_1);
    ExceptionList = local_c;
    return uVar1;
  }
  local_ad = 1;
  ExceptionList = &local_c;
  FUN_00564c60(this,(int *)&local_ac,param_1);
  local_4 = 0;
  switch(param_1) {
  case 0:
    FUN_004036d0((undefined4 *)((int)this + 0x4c),local_ac,local_a8);
    local_8c = local_80;
    local_80[0] = 0;
    local_88 = 0;
    local_84 = 10;
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_8c,(wchar_t *)&lpCaption_00d16918,uVar3);
    bVar2 = FUN_00430a50((undefined4 *)((int)this + 0x4c),&local_8c);
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if (bVar2) {
      piVar4 = FUN_00564c60(this,(int *)local_4c,2);
      FUN_00403e70(&local_ac,piVar4);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
  default:
    goto switchD_005625fc_caseD_1;
  case 2:
    piVar4 = FUN_00564c60(this,(int *)local_6c,0);
    bVar2 = FUN_00430a50(&local_ac,piVar4);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    break;
  case 3:
    piVar4 = FUN_00564c60(this,(int *)local_2c,1);
    bVar2 = FUN_00430a50(&local_ac,piVar4);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    break;
  case 5:
  case 6:
    bVar2 = FUN_00430a50(&local_ac,(undefined4 *)((int)this + 0x4c));
  }
  if (bVar2 != false) {
    local_ad = 0;
  }
switchD_005625fc_caseD_1:
  FUN_004036d0((void *)((int)this + 0x4c),local_ac,local_a8);
  FUN_00561e60(this,0);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  ExceptionList = local_c;
  return local_ad;
}


//// FUNCTION FUN_005627b0 @ 005627b0 ////

void __fastcall FUN_005627b0(void *param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  wint_t wVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  void *pvVar9;
  uint uVar10;
  void *local_188;
  uint local_184;
  uint local_180;
  undefined4 local_168 [2];
  wchar_t *local_160;
  uint local_15c;
  uint local_158;
  wchar_t *local_140;
  uint local_13c;
  uint local_138;
  wchar_t *local_120;
  uint local_11c;
  uint local_118;
  void *local_100 [2];
  uint local_f8;
  undefined4 local_e0 [2];
  void *local_d8 [2];
  uint local_d0;
  wchar_t *local_b8 [2];
  uint local_b0;
  void *local_98 [2];
  uint local_90;
  void *local_78 [2];
  uint local_70;
  void *local_58 [2];
  uint local_50;
  void *local_38 [2];
  uint local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cb111d;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00562580(param_1,0);
  do {
    FUN_00561e60(param_1,0);
    FUN_0055e090(param_1,local_b8,0);
    local_c._0_1_ = 0;
    local_c._1_3_ = 0;
    do {
      FUN_00562170(param_1,local_100);
      puVar4 = FUN_0055e090(param_1,local_58,0);
      puVar4 = FUN_0043be60(local_98,puVar4,L"/");
      FUN_00443250(&local_188,puVar4,local_100);
      piVar7 = DAT_0104cdec;
      local_c = CONCAT31(local_c._1_3_,2);
      if (10 < local_90) {
                    /* WARNING: Subroutine does not return */
        _free(local_98[0]);
      }
      if (10 < local_50) {
                    /* WARNING: Subroutine does not return */
        _free(local_58[0]);
      }
      if ((DAT_0104cde8 == 0) ||
         ((uint)(DAT_0104cdf0 - DAT_0104cde8 >> 5) <= (uint)((int)DAT_0104cdec - DAT_0104cde8 >> 5))
         ) {
        FUN_00481700(&DAT_0104cde4,DAT_0104cdec,1,&local_188);
      }
      else {
        FUN_0047b760(DAT_0104cdec,1,&local_188);
        DAT_0104cdec = piVar7 + 8;
      }
      uVar10 = 0;
      if (local_184 != 0) {
        do {
          wVar3 = _towlower(*(wint_t *)((int)local_188 + uVar10 * 2));
          *(wint_t *)((int)local_188 + uVar10 * 2) = wVar3;
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_184);
      }
      FUN_0055fb10(&DAT_0104cdcc,local_168,&local_188);
      iVar5 = FUN_00ace02d((short *)&DAT_00d24120);
      uVar10 = FUN_00420300(&local_188,(short *)&DAT_00d24120,0xffffffff,iVar5);
      FUN_004211c0(&local_188,local_d8,0,uVar10);
      local_c._0_1_ = 3;
      FUN_0055fb10(&DAT_0104cdd8,local_e0,local_d8);
      if (10 < local_d0) {
                    /* WARNING: Subroutine does not return */
        _free(local_d8[0]);
      }
      if (10 < local_180) {
                    /* WARNING: Subroutine does not return */
        _free(local_188);
      }
      local_c._0_1_ = 0;
      if (10 < local_f8) {
                    /* WARNING: Subroutine does not return */
        _free(local_100[0]);
      }
      uVar6 = FUN_00561e60(param_1,2);
    } while ((char)uVar6 != '\0');
    if ((*(byte *)((int)param_1 + 0x48) & 1) == 0) {
      FUN_00564c60(param_1,(int *)&local_140,6);
      local_c = CONCAT31(local_c._1_3_,4);
      _wcscmp(local_140,*(wchar_t **)((int)param_1 + 0x4c));
      uVar10 = local_13c;
      pwVar1 = local_140;
      if (*(uint *)((int)param_1 + 0x54) <= local_13c) {
        if (10 < *(uint *)((int)param_1 + 0x54)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)param_1 + 0x4c));
        }
        uVar8 = local_13c + 0x20 & 0xffffffe0;
        *(uint *)((int)param_1 + 0x54) = uVar8;
        pvVar9 = _malloc(uVar8 * 2);
        *(void **)((int)param_1 + 0x4c) = pvVar9;
      }
      _wcsncpy(*(wchar_t **)((int)param_1 + 0x4c),pwVar1,uVar10);
      *(uint *)((int)param_1 + 0x50) = uVar10;
      *(undefined2 *)(*(int *)((int)param_1 + 0x4c) + uVar10 * 2) = 0;
      FUN_00561e60(param_1,0);
      local_c._0_1_ = 0;
      if (10 < local_138) {
                    /* WARNING: Subroutine does not return */
        _free(local_140);
      }
    }
    else {
      FUN_0055ee90(param_1,6);
    }
    puVar4 = FUN_0055e090(param_1,local_78,0);
    iVar5 = _wcscmp(local_b8[0],(wchar_t *)*puVar4);
    if (10 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78[0]);
    }
    if (iVar5 != 0) {
      FUN_005627b0(param_1);
      if ((*(byte *)((int)param_1 + 0x48) & 1) == 0) {
        FUN_00564c60(param_1,(int *)&local_120,5);
        local_c = CONCAT31(local_c._1_3_,5);
        _wcscmp(local_120,*(wchar_t **)((int)param_1 + 0x4c));
        uVar10 = local_11c;
        pwVar1 = local_120;
        if (*(uint *)((int)param_1 + 0x54) <= local_11c) {
          if (10 < *(uint *)((int)param_1 + 0x54)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)param_1 + 0x4c));
          }
          uVar8 = local_11c + 0x20 & 0xffffffe0;
          *(uint *)((int)param_1 + 0x54) = uVar8;
          pvVar9 = _malloc(uVar8 * 2);
          *(void **)((int)param_1 + 0x4c) = pvVar9;
        }
        _wcsncpy(*(wchar_t **)((int)param_1 + 0x4c),pwVar1,uVar10);
        *(uint *)((int)param_1 + 0x50) = uVar10;
        *(undefined2 *)(*(int *)((int)param_1 + 0x4c) + uVar10 * 2) = 0;
        FUN_00561e60(param_1,0);
        if (10 < local_118) {
                    /* WARNING: Subroutine does not return */
          _free(local_120);
        }
      }
      else {
        FUN_0055ee90(param_1,5);
      }
    }
    local_c = 0xffffffff;
    if (10 < local_b0) {
                    /* WARNING: Subroutine does not return */
      _free(local_b8[0]);
    }
    if ((*(byte *)((int)param_1 + 0x48) & 1) == 0) {
      FUN_00564c60(param_1,(int *)&local_160,2);
      local_c = 6;
      piVar7 = FUN_00564c60(param_1,(int *)local_38,0);
      iVar5 = _wcscmp(local_160,(wchar_t *)*piVar7);
      uVar10 = local_15c;
      pwVar1 = local_160;
      cVar2 = iVar5 != 0;
      if (10 < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_38[0]);
      }
      if (*(uint *)((int)param_1 + 0x54) <= local_15c) {
        if (10 < *(uint *)((int)param_1 + 0x54)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)param_1 + 0x4c));
        }
        uVar8 = local_15c + 0x20 & 0xffffffe0;
        *(uint *)((int)param_1 + 0x54) = uVar8;
        pvVar9 = _malloc(uVar8 * 2);
        *(void **)((int)param_1 + 0x4c) = pvVar9;
      }
      _wcsncpy(*(wchar_t **)((int)param_1 + 0x4c),pwVar1,uVar10);
      *(uint *)((int)param_1 + 0x50) = uVar10;
      *(undefined2 *)(*(int *)((int)param_1 + 0x4c) + uVar10 * 2) = 0;
      FUN_00561e60(param_1,0);
      local_c = 0xffffffff;
      if (10 < local_158) {
                    /* WARNING: Subroutine does not return */
        _free(local_160);
      }
    }
    else {
      cVar2 = FUN_0055ee90(param_1,2);
    }
    if (cVar2 == '\0') {
      ExceptionList = local_14;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00562cf0 @ 00562cf0 ////

void __thiscall FUN_00562cf0(void *this,void *param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  void *pvVar10;
  int iVar11;
  short *psVar12;
  wchar_t *local_14c;
  uint local_148;
  uint local_144;
  wchar_t local_140 [10];
  wchar_t *local_12c;
  uint local_128;
  uint local_124;
  wchar_t *local_10c;
  uint local_108;
  uint local_104;
  wchar_t *local_ec;
  uint local_e8;
  uint local_e4;
  void *local_cc [2];
  uint local_c4;
  void *local_ac [2];
  uint local_a4;
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  short local_4c [32];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb1167;
  local_c = ExceptionList;
  local_14c = local_140;
  local_140[0] = L'\0';
  local_148 = 0;
  local_144 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00562580(this,0);
  do {
    puVar4 = FUN_0055e090(this,local_6c,0);
    uVar1 = puVar4[1];
    pwVar2 = (wchar_t *)*puVar4;
    if (local_144 <= uVar1) {
      if (10 < local_144) {
                    /* WARNING: Subroutine does not return */
        _free(local_14c);
      }
      uVar5 = uVar1 + 0x20 >> 5;
      local_144 = uVar5 << 5;
      local_14c = _malloc(uVar5 * 0x40);
    }
    _wcsncpy(local_14c,pwVar2,uVar1);
    local_14c[uVar1] = L'\0';
    local_148 = uVar1;
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4c[0] = 0;
    iVar6 = FUN_00560e80(this,&local_14c,'\x01');
    iVar11 = 0;
    iVar7 = FUN_00ace02d((short *)&DAT_00d24120);
    for (iVar7 = FUN_00442df0(&local_14c,(short *)&DAT_00d24120,0,iVar7); iVar7 != -1;
        iVar7 = FUN_00442df0(&local_14c,(short *)&DAT_00d24120,iVar7 + 1,iVar8)) {
      local_4c[iVar11] = 9;
      iVar11 = iVar11 + 1;
      if (0x1e < iVar11) break;
      iVar8 = FUN_00ace02d((short *)&DAT_00d24120);
    }
    local_4c[iVar11] = 0;
    if (local_148 != 0) {
      iVar11 = FUN_00ace02d((short *)&DAT_00d24224);
      FUN_00553ad0(param_1,&DAT_00d24224,iVar11 << 1);
      iVar11 = FUN_00ace02d(local_4c);
      FUN_00553ad0(param_1,local_4c,iVar11 << 1);
      psVar12 = (short *)&DAT_00d24244;
      if (*(char *)(iVar6 + 0x60) == '\0') {
        psVar12 = (short *)&DAT_00d24240;
      }
      iVar11 = FUN_00ace02d(psVar12);
      FUN_00553ad0(param_1,psVar12,iVar11 << 1);
      puVar4 = FUN_0055e090(this,local_cc,0);
      psVar12 = (short *)*puVar4;
      local_4._0_1_ = 1;
      iVar11 = FUN_00ace02d(psVar12);
      FUN_00553ad0(param_1,psVar12,iVar11 << 1);
      local_4 = (uint)local_4._1_3_ << 8;
      if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc[0]);
      }
      psVar12 = (short *)&DAT_00d24238;
      if (*(char *)(iVar6 + 0x60) == '\0') {
        psVar12 = (short *)&DAT_00d24230;
      }
      iVar11 = FUN_00ace02d(psVar12);
      FUN_00553ad0(param_1,psVar12,iVar11 << 1);
    }
    FUN_00562190(this,param_1,local_4c);
    if ((*(byte *)((int)this + 0x48) & 1) == 0) {
      FUN_00564c60(this,(int *)&local_ec,6);
      local_4 = CONCAT31(local_4._1_3_,2);
      _wcscmp(local_ec,*(wchar_t **)((int)this + 0x4c));
      uVar1 = local_e8;
      pwVar2 = local_ec;
      if (*(uint *)((int)this + 0x54) <= local_e8) {
        if (10 < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 0x4c));
        }
        uVar5 = local_e8 + 0x20 & 0xffffffe0;
        *(uint *)((int)this + 0x54) = uVar5;
        pvVar10 = _malloc(uVar5 * 2);
        *(void **)((int)this + 0x4c) = pvVar10;
      }
      _wcsncpy(*(wchar_t **)((int)this + 0x4c),pwVar2,uVar1);
      *(uint *)((int)this + 0x50) = uVar1;
      *(undefined2 *)(*(int *)((int)this + 0x4c) + uVar1 * 2) = 0;
      FUN_00561e60(this,0);
      local_4 = local_4 & 0xffffff00;
      if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
    }
    else {
      FUN_0055ee90(this,6);
    }
    puVar4 = FUN_0055e090(this,local_ac,0);
    iVar11 = _wcscmp(local_14c,(wchar_t *)*puVar4);
    if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac[0]);
    }
    if (iVar11 != 0) {
      FUN_00562cf0(this,param_1);
      if ((*(byte *)((int)this + 0x48) & 1) == 0) {
        FUN_00564c60(this,(int *)&local_10c,5);
        local_4 = CONCAT31(local_4._1_3_,3);
        _wcscmp(local_10c,*(wchar_t **)((int)this + 0x4c));
        uVar1 = local_108;
        pwVar2 = local_10c;
        if (*(uint *)((int)this + 0x54) <= local_108) {
          if (10 < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)this + 0x4c));
          }
          uVar5 = local_108 + 0x20 & 0xffffffe0;
          *(uint *)((int)this + 0x54) = uVar5;
          pvVar10 = _malloc(uVar5 * 2);
          *(void **)((int)this + 0x4c) = pvVar10;
        }
        _wcsncpy(*(wchar_t **)((int)this + 0x4c),pwVar2,uVar1);
        *(uint *)((int)this + 0x50) = uVar1;
        *(undefined2 *)(*(int *)((int)this + 0x4c) + uVar1 * 2) = 0;
        FUN_00561e60(this,0);
        local_4 = local_4 & 0xffffff00;
        if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
          _free(local_10c);
        }
      }
      else {
        FUN_0055ee90(this,5);
      }
    }
    if ((*(byte *)((int)this + 0x48) & 1) == 0) {
      FUN_00564c60(this,(int *)&local_12c,2);
      local_4 = CONCAT31(local_4._1_3_,4);
      piVar9 = FUN_00564c60(this,(int *)local_8c,0);
      iVar11 = _wcscmp(local_12c,(wchar_t *)*piVar9);
      uVar1 = local_128;
      pwVar2 = local_12c;
      cVar3 = iVar11 != 0;
      if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      if (*(uint *)((int)this + 0x54) <= local_128) {
        if (10 < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 0x4c));
        }
        uVar5 = local_128 + 0x20 & 0xffffffe0;
        *(uint *)((int)this + 0x54) = uVar5;
        pvVar10 = _malloc(uVar5 * 2);
        *(void **)((int)this + 0x4c) = pvVar10;
      }
      _wcsncpy(*(wchar_t **)((int)this + 0x4c),pwVar2,uVar1);
      *(uint *)((int)this + 0x50) = uVar1;
      *(undefined2 *)(*(int *)((int)this + 0x4c) + uVar1 * 2) = 0;
      FUN_00561e60(this,0);
      local_4 = local_4 & 0xffffff00;
      if (10 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
    }
    else {
      cVar3 = FUN_0055ee90(this,2);
    }
    if (cVar3 == '\0') {
      if (local_144 < 0xb) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_14c);
    }
  } while( true );
}


//// FUNCTION FUN_00563240 @ 00563240 ////

undefined4 * __fastcall FUN_00563240(undefined4 *param_1)

{
  undefined4 *this;
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb11cd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d2424c;
  local_4 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_1[0x12] & 0xfffffffc | 4;
  this = param_1 + 0x13;
  *this = param_1 + 0x16;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(this,(wchar_t *)&lpCaption_00d16918,uVar1);
  param_1[0x1b] = param_1 + 0x1e;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x1b,(wchar_t *)&lpCaption_00d16918,uVar1);
  param_1[0x24] = param_1 + 0x27;
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 10;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x2e] = param_1;
  FUN_00acdb9e(0xe52d60);
  iVar2 = FUN_0097dda0();
  param_1[0x2f] = iVar2;
  if (s___AVCWSProperty_TM___00e52d48[0x15] != '\0') {
    iVar2 = 0xb0;
    pcVar4 = "CacheLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe52d60);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCWSProperty_TM___00e52d48[0x15] = '\0';
  }
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = CONCAT31(local_4._1_3_,6);
  iVar2 = FUN_00560e80(param_1,&local_2c,'\x01');
  if (iVar2 != 0) {
    FUN_004036d0(this,local_2c,local_28);
    FUN_00561e60(param_1,0);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00563410 @ 00563410 ////

undefined4 * __thiscall FUN_00563410(void *this,byte param_1)

{
  FUN_0055ed70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005634e0 @ 005634e0 ////

undefined4 __thiscall FUN_005634e0(void *this,void *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  wchar_t *local_210;
  uint local_20c;
  uint local_208;
  wchar_t local_204 [10];
  int local_1f0;
  wchar_t *local_1ec;
  uint local_1e8;
  uint local_1e4;
  wchar_t local_1e0 [10];
  wchar_t *local_1cc;
  uint local_1c8;
  uint local_1c4;
  wchar_t local_1c0 [10];
  undefined2 *local_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  undefined2 local_1a0 [10];
  undefined2 *local_18c;
  undefined4 local_188;
  uint local_184;
  undefined2 local_180 [10];
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = FUN_00553c60(param_1,&local_1ac);
  FUN_004036d0((void *)((int)this + 0x90),(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1ac);
  }
  local_210 = local_204;
  local_204[0] = L'\0';
  local_20c = 0;
  local_208 = 10;
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 2;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  local_1f0 = 0;
  bVar9 = false;
  uVar5 = FUN_00553cf0(param_1,&local_210);
  cVar3 = (char)uVar5;
  do {
    if (cVar3 == '\0') {
      *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffffd;
      local_1ec = local_1e0;
      local_1e0[0] = L'\0';
      local_1e8 = 0;
      local_1e4 = 10;
      uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_1ec,(wchar_t *)&lpCaption_00d16918,uVar5);
      local_4 = CONCAT31(local_4._1_3_,9);
      iVar6 = FUN_00560e80(this,&local_1ec,'\x01');
      if (iVar6 != 0) {
        FUN_004036d0((void *)((int)this + 0x4c),local_1ec,local_1e8);
        FUN_00561e60(this,0);
      }
      if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      if (10 < local_208) {
                    /* WARNING: Subroutine does not return */
        _free(local_210);
      }
      ExceptionList = local_c;
      return CONCAT31((int3)(local_208 >> 8),1);
    }
    iVar6 = FUN_00ace02d((short *)&DAT_00d24118);
    uVar5 = FUN_00553c00(&local_210,(short *)&DAT_00d24118,0,iVar6);
    if ((uVar5 != 0) && (uVar5 != 0xffffffff)) {
      puVar4 = FUN_004211c0(&local_210,local_4c,uVar5,0xffffffff);
      uVar5 = puVar4[1];
      pwVar2 = (wchar_t *)*puVar4;
      if (local_208 <= uVar5) {
        if (10 < local_208) {
                    /* WARNING: Subroutine does not return */
          _free(local_210);
        }
        uVar7 = uVar5 + 0x20 >> 5;
        local_208 = uVar7 << 5;
        local_210 = _malloc(uVar7 * 0x40);
      }
      _wcsncpy(local_210,pwVar2,uVar5);
      local_210[uVar5] = L'\0';
      local_20c = uVar5;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
    if (local_20c != 0) {
      wVar1 = local_210[local_20c - 1];
      while (wVar1 == L'\\') {
        local_1cc = local_1c0;
        local_1c0[0] = L'\0';
        local_1c8 = 0;
        local_1c4 = 10;
        local_4._0_1_ = 1;
        uVar5 = FUN_00553cf0(param_1,&local_1cc);
        if ((char)uVar5 == '\0') {
          local_4._0_1_ = 0;
          if (10 < local_1c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1cc);
          }
          break;
        }
        iVar6 = FUN_00ace02d((short *)&DAT_00d24118);
        uVar5 = FUN_00553c00(&local_1cc,(short *)&DAT_00d24118,0,iVar6);
        if ((uVar5 != 0) && (uVar5 != 0xffffffff)) {
          puVar4 = FUN_004211c0(&local_1cc,local_16c,uVar5,0xffffffff);
          uVar5 = puVar4[1];
          pwVar2 = (wchar_t *)*puVar4;
          if (local_1c4 <= uVar5) {
            if (10 < local_1c4) {
                    /* WARNING: Subroutine does not return */
              _free(local_1cc);
            }
            uVar7 = uVar5 + 0x20 >> 5;
            local_1c4 = uVar7 << 5;
            local_1cc = _malloc(uVar7 * 0x40);
          }
          _wcsncpy(local_1cc,pwVar2,uVar5);
          local_1cc[uVar5] = L'\0';
          local_1c8 = uVar5;
          if (10 < local_164) {
                    /* WARNING: Subroutine does not return */
            _free(local_16c[0]);
          }
        }
        puVar4 = FUN_004211c0(&local_210,local_8c,0,local_20c - 1);
        puVar4 = FUN_00443250(local_10c,puVar4,&local_1cc);
        uVar5 = puVar4[1];
        pwVar2 = (wchar_t *)*puVar4;
        if (local_208 <= uVar5) {
          if (10 < local_208) {
                    /* WARNING: Subroutine does not return */
            _free(local_210);
          }
          local_208 = uVar5 + 0x20 & 0xffffffe0;
          local_210 = _malloc(local_208 * 2);
        }
        _wcsncpy(local_210,pwVar2,uVar5);
        local_210[uVar5] = L'\0';
        local_20c = uVar5;
        if (10 < local_104) {
                    /* WARNING: Subroutine does not return */
          _free(local_10c[0]);
        }
        if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c[0]);
        }
        local_4._0_1_ = 0;
        if (10 < local_1c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1cc);
        }
        wVar1 = local_210[uVar5 - 1];
      }
      wVar1 = *local_210;
      if (wVar1 == L'#') {
        local_1ec = local_1e0;
        local_1e0[0] = L'\0';
        local_1e8 = 0;
        local_1e4 = 10;
        uVar5 = FUN_00ace02d(L"#include");
        if (local_1e4 <= uVar5) {
          if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1ec);
          }
          local_1e4 = uVar5 + 0x20 & 0xffffffe0;
          local_1ec = _malloc(local_1e4 * 2);
        }
        _wcsncpy(local_1ec,L"#include",uVar5);
        local_1ec[uVar5] = L'\0';
        local_1e8 = uVar5;
        puVar4 = FUN_004211c0(&local_210,local_ac,0,0x11);
        iVar6 = _wcscmp((wchar_t *)*puVar4,local_1ec);
        if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac[0]);
        }
        if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ec);
        }
        if (iVar6 == 0) {
          puVar4 = FUN_004211c0(&local_210,local_2c,0x11,0xffffffff);
          local_4._0_1_ = 2;
          puVar4 = FUN_00553d80(param_1,local_6c,puVar4);
          local_4._0_1_ = 3;
          FUN_00564ae0(this,puVar4,'\0');
          if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          local_4._0_1_ = 0;
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
        }
      }
      else if ((wVar1 == L'[') || (wVar1 == L'{')) {
        local_1f0 = 0;
        iVar6 = FUN_00ace02d(L"{[ \t");
        uVar5 = FUN_00553c00(&local_210,L"{[ \t",0,iVar6);
        iVar6 = FUN_00ace02d(L"]} \t");
        iVar6 = FUN_0055d310(&local_210,L"]} \t",0xffffffff,iVar6);
        if ((-1 < (int)uVar5) && ((int)uVar5 <= iVar6)) {
          puVar4 = FUN_004211c0(&local_210,local_ec,uVar5,(iVar6 - uVar5) + 1);
          local_4 = CONCAT31(local_4._1_3_,4);
          iVar6 = FUN_00560e80(this,puVar4,'\x01');
          if (iVar6 != 0) {
            FUN_004036d0((void *)((int)this + 0x4c),(wchar_t *)*puVar4,puVar4[1]);
            FUN_00561e60(this,0);
          }
          local_4._0_1_ = 0;
          if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ec[0]);
          }
          bVar9 = *local_210 == L'{';
          iVar6 = FUN_00560e80(this,(void *)((int)this + 0x4c),'\x01');
          *(bool *)(iVar6 + 0x60) = bVar9;
        }
      }
      else if (bVar9) {
        iVar6 = FUN_00ace02d((short *)&DAT_00d24118);
        uVar5 = FUN_00553c00(&local_210,(short *)&DAT_00d24118,0,iVar6);
        iVar6 = FUN_00ace02d((short *)&DAT_00d24118);
        iVar6 = FUN_0055d310(&local_210,(short *)&DAT_00d24118,0xffffffff,iVar6);
        if ((-1 < (int)uVar5) && ((int)uVar5 <= iVar6)) {
          local_1ac = local_1a0;
          local_1a0[0] = 0;
          local_1a8 = 0;
          local_1a4 = 10;
          FUN_0043bd40(&local_1ac,local_1f0);
          local_1f0 = local_1f0 + 1;
          puVar4 = FUN_004211c0(&local_210,local_12c,uVar5,(iVar6 - uVar5) + 1);
          local_4._0_1_ = 8;
          FUN_00561350(this,&local_1ac,puVar4);
          if (10 < local_124) {
                    /* WARNING: Subroutine does not return */
            _free(local_12c[0]);
          }
          local_4._0_1_ = 0;
          if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1ac);
          }
        }
      }
      else {
        local_18c = local_180;
        local_180[0] = 0;
        local_188 = 0;
        local_184 = 10;
        uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
        FUN_004036d0(&local_18c,(wchar_t *)&lpCaption_00d16918,uVar5);
        uVar5 = FUN_00ace02d((short *)&DAT_00d2428c);
        uVar7 = FUN_0055d250(&local_210,(ushort *)&DAT_00d2428c,0,uVar5);
        uVar5 = local_20c;
        if (uVar7 != 0xffffffff) {
          iVar6 = FUN_00ace02d((short *)&DAT_00d24284);
          uVar8 = FUN_00553c00(&local_210,(short *)&DAT_00d24284,uVar7,iVar6);
          iVar6 = FUN_00ace02d((short *)&DAT_00d24118);
          iVar6 = FUN_0055d310(&local_210,(short *)&DAT_00d24118,0xffffffff,iVar6);
          uVar5 = uVar7;
          if ((-1 < (int)uVar8) && ((int)uVar8 <= iVar6)) {
            puVar4 = FUN_004211c0(&local_210,local_cc,uVar8,(iVar6 - uVar8) + 1);
            FUN_00403e70(&local_18c,puVar4);
            if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
              _free(local_cc[0]);
            }
          }
        }
        iVar6 = FUN_00ace02d((short *)&DAT_00d24118);
        uVar7 = FUN_00553c00(&local_210,(short *)&DAT_00d24118,0,iVar6);
        iVar6 = FUN_00ace02d((short *)&DAT_00d2427c);
        iVar6 = FUN_0055d310(&local_210,(short *)&DAT_00d2427c,uVar5,iVar6);
        if ((-1 < (int)uVar7) && ((int)uVar7 <= iVar6)) {
          puVar4 = FUN_004211c0(&local_210,local_14c,uVar7,(iVar6 - uVar7) + 1);
          local_4._0_1_ = 6;
          FUN_00561350(this,puVar4,&local_18c);
          if (10 < local_144) {
                    /* WARNING: Subroutine does not return */
            _free(local_14c[0]);
          }
        }
        local_4._0_1_ = 0;
        if (10 < local_184) {
                    /* WARNING: Subroutine does not return */
          _free(local_18c);
        }
      }
    }
    uVar5 = FUN_00553cf0(param_1,&local_210);
    cVar3 = (char)uVar5;
  } while( true );
}


//// FUNCTION FUN_00563e20 @ 00563e20 ////

uint __thiscall FUN_00563e20(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  wchar_t *local_58;
  uint local_54;
  uint local_50;
  wchar_t local_4c [10];
  undefined2 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c [10];
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb1270;
  local_c = ExceptionList;
  local_38 = local_2c;
  local_2c[0] = 0;
  local_34 = 0;
  local_30 = 10;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00553b70(&local_38,param_1,"w");
  if ((char)uVar1 == '\0') {
    FUN_006b85a0();
    local_4 = 0xffffffff;
    uVar2 = FUN_00553b00(&local_38);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  local_58 = local_4c;
  local_4c[0] = L'\0';
  local_54 = 0;
  local_50 = 10;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_58,(wchar_t *)&lpCaption_00d16918,uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar3 = FUN_00560e80(this,&local_58,'\x01');
  if (iVar3 != 0) {
    FUN_004036d0((void *)((int)this + 0x4c),local_58,local_54);
    FUN_00561e60(this,0);
  }
  local_4 = local_4 & 0xffffff00;
  if (10 < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  FUN_00562190(this,&local_38,(short *)&lpCaption_00d16918);
  FUN_00562cf0(this,&local_38);
  local_4 = 0xffffffff;
  uVar1 = FUN_00553b00(&local_38);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00563f70 @ 00563f70 ////

uint __thiscall FUN_00563f70(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  wchar_t *local_78;
  uint local_74;
  uint local_70;
  wchar_t local_6c [10];
  void *local_58 [2];
  uint local_50;
  undefined2 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c [10];
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb12a0;
  local_c = ExceptionList;
  local_38 = local_2c;
  local_2c[0] = 0;
  local_34 = 0;
  local_30 = 10;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  puVar1 = FUN_0043bdc0(local_58,L"data/",param_1);
  puVar1 = FUN_0043be60(&local_78,puVar1,L".ini");
  local_4._0_1_ = 2;
  uVar2 = FUN_00553b70(&local_38,puVar1,"w");
  if (10 < local_70) {
                    /* WARNING: Subroutine does not return */
    _free(local_78);
  }
  local_4._0_1_ = 0;
  if (10 < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_58[0]);
  }
  if ((char)uVar2 == '\0') {
    FUN_006b85a0();
    local_4 = 0xffffffff;
    uVar3 = FUN_00553b00(&local_38);
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  local_78 = local_6c;
  local_6c[0] = L'\0';
  local_74 = 0;
  local_70 = 10;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_78,(wchar_t *)&lpCaption_00d16918,uVar3);
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar4 = FUN_00560e80(this,&local_78,'\x01');
  if (iVar4 != 0) {
    FUN_004036d0((void *)((int)this + 0x4c),local_78,local_74);
    FUN_00561e60(this,0);
  }
  local_4 = local_4 & 0xffffff00;
  if (10 < local_70) {
                    /* WARNING: Subroutine does not return */
    _free(local_78);
  }
  FUN_00562190(this,&local_38,(short *)&lpCaption_00d16918);
  FUN_00562cf0(this,&local_38);
  local_4 = 0xffffffff;
  uVar2 = FUN_00553b00(&local_38);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00564130 @ 00564130 ////

void __thiscall FUN_00564130(void *this,void *param_1,undefined4 *param_2)

{
  wchar_t *_Source;
  uint _Count;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb12f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00560e80(this,param_2,'\x01');
  if (iVar2 != 0) {
    FUN_004036d0((void *)((int)this + 0x4c),(wchar_t *)*param_2,param_2[1]);
    FUN_00561e60(this,0);
  }
  iVar2 = FUN_00560e80(param_1,param_2,'\x01');
  if (iVar2 != 0) {
    FUN_004036d0((void *)((int)param_1 + 0x4c),(wchar_t *)*param_2,param_2[1]);
    FUN_00561e60(param_1,0);
  }
  uVar3 = FUN_00561e60(this,0);
  cVar1 = (char)uVar3;
  while (cVar1 != '\0') {
    piVar4 = FUN_00561ae0(this,(int *)local_2c,4);
    local_4 = 0;
    puVar5 = FUN_00562170(this,&local_6c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00561350(param_1,puVar5,piVar4);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_4 = 0xffffffff;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    uVar3 = FUN_00561e60(this,2);
    cVar1 = (char)uVar3;
  }
  if (param_2[1] == 0) {
    while( true ) {
      if ((*(byte *)((int)this + 0x48) & 1) == 0) {
        FUN_00564c60(this,(int *)&local_6c,2);
        local_4 = 2;
        piVar4 = FUN_00564c60(this,(int *)local_2c,0);
        iVar2 = _wcscmp(local_6c,(wchar_t *)*piVar4);
        _Count = local_68;
        _Source = local_6c;
        cVar1 = iVar2 != 0;
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (*(uint *)((int)this + 0x54) <= local_68) {
          if (10 < *(uint *)((int)this + 0x54)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)this + 0x4c));
          }
          uVar6 = local_68 + 0x20 >> 5;
          *(uint *)((int)this + 0x54) = uVar6 << 5;
          pvVar7 = _malloc(uVar6 * 0x40);
          *(void **)((int)this + 0x4c) = pvVar7;
        }
        _wcsncpy(*(wchar_t **)((int)this + 0x4c),_Source,_Count);
        *(uint *)((int)this + 0x50) = _Count;
        *(undefined2 *)(*(int *)((int)this + 0x4c) + _Count * 2) = 0;
        FUN_00561e60(this,0);
        local_4 = 0xffffffff;
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
      }
      else {
        cVar1 = FUN_0055ee90(this,2);
      }
      if (cVar1 == '\0') break;
      puVar5 = FUN_0055e090(this,&local_4c,0);
      local_4 = 3;
      FUN_00564130(this,param_1,puVar5);
      local_4 = 0xffffffff;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
  }
  else {
    if ((*(byte *)((int)this + 0x48) & 1) == 0) {
      FUN_00564c60(this,(int *)&local_6c,6);
      local_4 = 4;
      FUN_00430a50(&local_6c,(undefined4 *)((int)this + 0x4c));
      FUN_004036d0((void *)((int)this + 0x4c),local_6c,local_68);
      FUN_00561e60(this,0);
      local_4 = 0xffffffff;
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    else {
      FUN_0055ee90(this,6);
    }
    puVar5 = FUN_0055e090(this,local_2c,0);
    iVar2 = _wcscmp((wchar_t *)*puVar5,(wchar_t *)*param_2);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (iVar2 != 0) {
      do {
        puVar5 = FUN_0055e090(this,local_2c,0);
        local_4 = 5;
        FUN_00564130(this,param_1,puVar5);
        local_4 = 0xffffffff;
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if ((*(byte *)((int)this + 0x48) & 1) == 0) {
          FUN_00564c60(this,(int *)&local_6c,2);
          local_4 = 6;
          piVar4 = FUN_00564c60(this,(int *)&local_4c,0);
          iVar2 = _wcscmp(local_6c,(wchar_t *)*piVar4);
          cVar1 = iVar2 != 0;
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_004036d0((void *)((int)this + 0x4c),local_6c,local_68);
          FUN_00561e60(this,0);
          local_4 = 0xffffffff;
          if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
        }
        else {
          cVar1 = FUN_0055ee90(this,2);
        }
      } while (cVar1 != '\0');
      if ((*(byte *)((int)this + 0x48) & 1) != 0) {
        FUN_0055ee90(this,5);
        ExceptionList = local_c;
        return;
      }
      FUN_00564c60(this,(int *)&local_4c,5);
      local_4 = 7;
      FUN_00430a50(&local_4c,(undefined4 *)((int)this + 0x4c));
      FUN_004036d0((undefined4 *)((int)this + 0x4c),local_4c,local_48);
      FUN_00561e60(this,0);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005645d0 @ 005645d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005645d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 *local_118;
  undefined4 local_114;
  uint local_110;
  undefined2 local_10c [10];
  undefined2 *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined2 local_ec [10];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_cc [48];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1321;
  local_c = ExceptionList;
  if (DAT_0104cd94 == '\0') {
    DAT_0104cd94 = '\x01';
    if (DAT_0104cde8 != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      FUN_00481090(DAT_0104cde8,DAT_0104cdec);
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104cde8);
    }
    DAT_0104cde8 = (undefined4 *)0x0;
    DAT_0104cdec = (undefined4 *)0x0;
    DAT_0104cdf0 = 0;
    ExceptionList = &local_c;
    FUN_0055ec90(*(void **)(DAT_0104cdd0 + 4));
    *(int *)(DAT_0104cdd0 + 4) = DAT_0104cdd0;
    _DAT_0104cdd4 = 0;
    *(int *)DAT_0104cdd0 = DAT_0104cdd0;
    *(int *)(DAT_0104cdd0 + 8) = DAT_0104cdd0;
    FUN_00563240(local_cc);
    local_f8 = local_ec;
    local_4 = 0;
    local_ec[0] = 0;
    local_f4 = 0;
    local_f0 = 10;
    local_d8 = 0;
    local_d4 = 0;
    local_118 = local_10c;
    local_10c[0] = 0;
    local_114 = 0;
    local_110 = 10;
    uVar1 = FUN_00ace02d(L"data/filestructure.ini");
    FUN_004036d0(&local_118,L"data/filestructure.ini",uVar1);
    local_4._0_1_ = 2;
    uVar2 = FUN_00553b70(&local_f8,&local_118,"rb");
    local_4._0_1_ = 1;
    if (10 < local_110) {
                    /* WARNING: Subroutine does not return */
      _free(local_118);
    }
    if ((char)uVar2 != '\0') {
      FUN_005634e0(local_cc,&local_f8);
    }
    FUN_005627b0(local_cc);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00553b00(&local_f8);
    local_4 = 0xffffffff;
    FUN_0055ed70(local_cc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00564770 @ 00564770 ////

undefined4 __cdecl FUN_00564770(undefined4 *param_1)

{
  int iVar1;
  undefined4 **ppuVar2;
  uint3 uVar3;
  undefined4 *local_28;
  undefined4 *local_24;
  wchar_t *local_20 [2];
  uint local_18;
  
  ppuVar2 = &local_28;
  FUN_005645d0();
  FUN_0043be60(local_20,param_1,L".ini");
  FUN_0055d180((int *)local_20);
  local_28 = FUN_0055d9f0(&DAT_0104cdcc,local_20);
  if ((local_28 == DAT_0104cdd0) || (iVar1 = _wcscmp(local_20[0],(wchar_t *)local_28[3]), iVar1 < 0)
     ) {
    local_24 = DAT_0104cdd0;
    ppuVar2 = &local_24;
  }
  uVar3 = (uint3)(local_18 >> 8);
  if (*ppuVar2 != DAT_0104cdd0) {
    if (local_18 < 0xb) {
      return CONCAT31(uVar3,1);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  if (local_18 < 0xb) {
    return (uint)uVar3 << 8;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_00564820 @ 00564820 ////

undefined4 FUN_00564820(undefined4 *param_1)

{
  int iVar1;
  undefined4 **ppuVar2;
  uint3 uVar3;
  undefined4 *local_24;
  wchar_t *local_20 [2];
  uint local_18;
  
  ppuVar2 = &local_24;
  FUN_005645d0();
  FUN_0043be60(local_20,param_1,L"/");
  FUN_0055d180((int *)local_20);
  param_1 = FUN_0055d9f0(&DAT_0104cdd8,local_20);
  if (param_1 != DAT_0104cddc) {
    iVar1 = _wcscmp(local_20[0],(wchar_t *)param_1[3]);
    if (-1 < iVar1) {
      ppuVar2 = &param_1;
      goto LAB_0056488a;
    }
  }
  local_24 = DAT_0104cddc;
LAB_0056488a:
  uVar3 = (uint3)(local_18 >> 8);
  if (*ppuVar2 == DAT_0104cdd0) {
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    return (uint)uVar3 << 8;
  }
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return CONCAT31(uVar3,1);
}


//// FUNCTION FUN_005648d0 @ 005648d0 ////

undefined4 * __cdecl FUN_005648d0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  size_t sVar4;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1338;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  ExceptionList = &local_c;
  FUN_004036d0(&local_4c,(wchar_t *)*param_2,param_2[1]);
  local_4 = 0;
  uVar1 = FUN_00ace02d(L"data/");
  uVar1 = FUN_0055d250(&local_4c,(ushort *)L"data/",0,uVar1);
  if (uVar1 != 0) {
    puVar2 = FUN_0043bdc0(local_2c,L"data/",&local_4c);
    FUN_004036d0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  uVar3 = FUN_00564770(&local_4c);
  if ((char)uVar3 == '\0') {
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar1);
  }
  else {
    sVar4 = FUN_00ace02d(L".ini");
    FUN_0040cae0(&local_4c,L".ini",sVar4);
  }
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 10;
  param_1[1] = 0;
  FUN_004036d0(param_1,local_4c,local_48);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00564a20 @ 00564a20 ////

uint __thiscall FUN_00564a20(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c [10];
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb1358;
  local_c = ExceptionList;
  local_38 = local_2c;
  local_2c[0] = 0;
  local_34 = 0;
  local_30 = 10;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00553b70(&local_38,param_1,"rb");
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_005634e0(this,&local_38);
    local_4 = 0xffffffff;
    uVar2 = FUN_00553b00(&local_38);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_00553b00(&local_38);
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00564ae0 @ 00564ae0 ////

undefined1 __thiscall FUN_00564ae0(void *this,undefined4 *param_1,char param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined1 uVar5;
  undefined2 *local_38;
  undefined4 local_34;
  uint local_30;
  undefined2 local_2c [10];
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d(L"data/");
  uVar1 = FUN_0055d250(param_1,(ushort *)L"data/",0,uVar1);
  if (uVar1 != 0) {
    puVar2 = FUN_0043bdc0(&local_38,L"data/",param_1);
    FUN_004036d0((void *)((int)this + 0x90),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_38);
    }
  }
  puVar2 = (undefined4 *)((int)this + 0x90);
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffffe;
  uVar3 = FUN_00564770(puVar2);
  if (((char)uVar3 == '\0') && (param_2 == '\0')) {
    uVar3 = FUN_00564820(puVar2);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 1;
      FUN_004036d0((void *)((int)this + 0x4c),(wchar_t *)*puVar2,*(uint *)((int)this + 0x94));
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  sVar4 = FUN_00ace02d(L".ini");
  FUN_0040cae0(puVar2,L".ini",sVar4);
  local_38 = local_2c;
  local_2c[0] = 0;
  local_34 = 0;
  local_30 = 10;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  uVar3 = FUN_00553b70(&local_38,puVar2,"rb");
  if ((char)uVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_005634e0(this,&local_38);
    uVar5 = (undefined1)uVar3;
  }
  local_4 = 0xffffffff;
  FUN_00553b00(&local_38);
  ExceptionList = local_c;
  return uVar5;
}


//// FUNCTION FUN_00564c60 @ 00564c60 ////

int * __thiscall FUN_00564c60(void *this,int *param_1,undefined4 param_2)

{
  bool bVar1;
  wchar_t *_Source;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  void *pvVar12;
  wchar_t *local_1cc;
  uint local_1c8;
  uint local_1c4;
  wchar_t local_1c0 [10];
  undefined2 *local_1ac;
  int local_1a8;
  uint local_1a4;
  undefined2 local_1a0 [10];
  void *local_18c;
  int local_188;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb13b1;
  local_c = ExceptionList;
  puVar10 = (undefined4 *)((int)this + 0x4c);
  local_1cc = local_1c0;
  local_1c0[0] = L'\0';
  local_1c8 = 0;
  local_1c4 = 10;
  ExceptionList = &local_c;
  FUN_004036d0(&local_1cc,*(wchar_t **)((int)this + 0x4c),*(uint *)((int)this + 0x50));
  local_1ac = local_1a0;
  local_4 = 0;
  local_1a0[0] = 0;
  local_1a8 = 0;
  local_1a4 = 10;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_1ac,(wchar_t *)&lpCaption_00d16918,uVar2);
  iVar5 = (int)this + 0x38;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar3 = FUN_00ace02d((short *)&DAT_00d24120);
  uVar2 = FUN_00420300(puVar10,(short *)&DAT_00d24120,0xffffffff,iVar3);
  if (uVar2 != 0xffffffff) {
    puVar4 = FUN_004211c0(puVar10,&local_18c,0,uVar2);
    FUN_004036d0(&local_1ac,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < local_184) {
                    /* WARNING: Subroutine does not return */
      _free(local_18c);
    }
    iVar5 = FUN_00560e80(this,&local_1ac,'\x01');
    iVar5 = iVar5 + 0x40;
  }
  switch(param_2) {
  case 0:
    puVar10 = *(undefined4 **)(iVar5 + 4);
    if (puVar10 == (undefined4 *)0x0) {
      FUN_00403e90(&local_1cc,(wchar_t *)&lpCaption_00d16918);
      goto switchD_00564d76_caseD_4;
    }
    puVar10 = FUN_00443250(local_10c,puVar10,puVar10 + 8);
    FUN_00403e70(&local_1cc,puVar10);
    local_ec[0] = local_10c[0];
    local_24 = local_104;
    break;
  case 1:
    puVar10 = (undefined4 *)(*(int *)(iVar5 + 8) + -100);
    if (puVar10 == (undefined4 *)0x0) {
      FUN_00403e90(&local_1cc,(wchar_t *)&lpCaption_00d16918);
      goto switchD_00564d76_caseD_4;
    }
    puVar10 = FUN_00443250(local_4c,puVar10,(undefined4 *)(*(int *)(iVar5 + 8) + -0x44));
    FUN_00403e70(&local_1cc,puVar10);
    local_ec[0] = local_4c[0];
    local_24 = local_44;
    break;
  case 2:
    bVar1 = false;
    piVar7 = FUN_00564c60(this,(int *)local_16c,0);
    FUN_004036d0(&local_1cc,(wchar_t *)*piVar7,piVar7[1]);
    if (10 < local_164) {
                    /* WARNING: Subroutine does not return */
      _free(local_16c[0]);
    }
    puVar4 = *(undefined4 **)(iVar5 + 4);
    if (puVar4 != *(undefined4 **)(iVar5 + 8)) {
      do {
        if (bVar1) {
          puVar10 = FUN_00443250(local_cc,puVar4,puVar4 + 8);
          FUN_004036d0(&local_1cc,(wchar_t *)*puVar10,puVar10[1]);
          local_ec[0] = local_cc[0];
          local_e4 = local_c4;
          goto joined_r0x00564fe9;
        }
        puVar6 = FUN_00443250(local_8c,puVar4,puVar4 + 8);
        iVar3 = _wcscmp((wchar_t *)*puVar10,(wchar_t *)*puVar6);
        if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c[0]);
        }
        if (iVar3 == 0) {
          bVar1 = true;
        }
        puVar4 = puVar4 + 0x19;
      } while (puVar4 != *(undefined4 **)(iVar5 + 8));
    }
    goto switchD_00564d76_caseD_4;
  case 3:
    bVar1 = false;
    piVar7 = FUN_00564c60(this,(int *)local_14c,1);
    FUN_004036d0(&local_1cc,(wchar_t *)*piVar7,piVar7[1]);
    if (10 < local_144) {
                    /* WARNING: Subroutine does not return */
      _free(local_14c[0]);
    }
    iVar3 = FUN_0055ca50(iVar5);
    iVar3 = (iVar3 + -1) * 100;
    while( true ) {
      puVar4 = (undefined4 *)(*(int *)(iVar5 + 4) + iVar3);
      if (bVar1) break;
      puVar4 = FUN_00443250(local_12c,puVar4,puVar4 + 8);
      iVar8 = _wcscmp((wchar_t *)*puVar10,(wchar_t *)*puVar4);
      if (10 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c[0]);
      }
      if (iVar8 == 0) {
        bVar1 = true;
      }
      iVar3 = iVar3 + -100;
    }
    puVar10 = FUN_00443250(local_ec,puVar4,puVar4 + 8);
    FUN_004036d0(&local_1cc,(wchar_t *)*puVar10,puVar10[1]);
joined_r0x00564fe9:
    if (local_e4 < 0xb) goto switchD_00564d76_caseD_4;
    goto LAB_0056512c;
  default:
    goto switchD_00564d76_caseD_4;
  case 5:
    if (local_1a8 != 0) {
      FUN_00403e70(&local_1cc,&local_1ac);
      goto switchD_00564d76_caseD_4;
    }
    puVar10 = (undefined4 *)((int)this + 0x90);
    FUN_00421290(&local_18c,puVar10);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar5 = FUN_00421210(&local_18c,(short *)&DAT_00d24214,0xffffffff);
    puVar4 = FUN_004211c0(&local_18c,local_ac,0xb,iVar5 - 0xb);
    FUN_00403e70(puVar10,puVar4);
    if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac[0]);
    }
    FUN_0055ee30((int)this);
    FUN_00564ae0(this,puVar10,'\0');
    puVar10 = FUN_004211c0(&local_18c,local_6c,iVar5 + 1,(local_188 - iVar5) - 1);
    FUN_00403e70(&local_1cc,puVar10);
    local_ec[0] = local_18c;
    local_24 = local_184;
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    break;
  case 6:
    iVar5 = FUN_00560e80(this,puVar10,'\x01');
    uVar9 = FUN_0055ca70(iVar5 + 0x40);
    if ((char)uVar9 != '\0') {
      FUN_00403e70(&local_1cc,puVar10);
      goto switchD_00564d76_caseD_4;
    }
    puVar10 = FUN_00443250(local_2c,*(undefined4 **)(iVar5 + 0x44),
                           *(undefined4 **)(iVar5 + 0x44) + 8);
    FUN_00403e70(&local_1cc,puVar10);
    local_ec[0] = local_2c[0];
  }
  if (10 < local_24) {
LAB_0056512c:
                    /* WARNING: Subroutine does not return */
    _free(local_ec[0]);
  }
switchD_00564d76_caseD_4:
  uVar2 = local_1c8;
  _Source = local_1cc;
  *param_1 = (int)(param_1 + 3);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  if (9 < local_1c8) {
    uVar11 = local_1c8 + 0x20 & 0xffffffe0;
    param_1[2] = uVar11;
    pvVar12 = _malloc(uVar11 * 2);
    *param_1 = (int)pvVar12;
  }
  _wcsncpy((wchar_t *)*param_1,_Source,uVar2);
  param_1[1] = uVar2;
  *(undefined2 *)(*param_1 + uVar2 * 2) = 0;
  if (local_1a4 < 0xb) {
    if (local_1c4 < 0xb) {
      ExceptionList = local_c;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_1cc);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1ac);
}


//// FUNCTION FUN_00565360 @ 00565360 ////

undefined4 * __thiscall FUN_00565360(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  uint uVar1;
  int iVar2;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb142d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d2424c;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffffc | 4;
  this_00 = (undefined4 *)((int)this + 0x4c);
  *this_00 = (undefined2 *)((int)this + 0x58);
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(this_00,(wchar_t *)&lpCaption_00d16918,uVar1);
  *(undefined4 *)((int)this + 0x6c) = (undefined2 *)((int)this + 0x78);
  *(undefined2 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 0x6c),(wchar_t *)&lpCaption_00d16918,uVar1);
  *(undefined2 **)((int)this + 0x90) = (undefined2 *)((int)this + 0x9c);
  *(undefined2 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 10;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = CONCAT31(local_4._1_3_,6);
  iVar2 = FUN_00560e80(this,&local_2c,'\x01');
  if (iVar2 != 0) {
    FUN_004036d0(this_00,local_2c,local_28);
    FUN_00561e60(this,0);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00564ae0(this,param_1,'\0');
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005654e0 @ 005654e0 ////

undefined4 * __thiscall FUN_005654e0(void *this,undefined4 *param_1,byte param_2)

{
  undefined4 *this_00;
  uint uVar1;
  int iVar2;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb148d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d2424c;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  this_00 = (undefined4 *)((int)this + 0x4c);
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffffc;
  *this_00 = (undefined2 *)((int)this + 0x58);
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(this_00,(wchar_t *)&lpCaption_00d16918,uVar1);
  *(undefined4 *)((int)this + 0x6c) = (undefined2 *)((int)this + 0x78);
  *(undefined2 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 0x6c),(wchar_t *)&lpCaption_00d16918,uVar1);
  *(undefined2 **)((int)this + 0x90) = (undefined2 *)((int)this + 0x9c);
  *(undefined2 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 10;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(uint *)((int)this + 0x48) =
       *(uint *)((int)this + 0x48) ^ ((uint)param_2 << 2 ^ *(uint *)((int)this + 0x48)) & 4;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = CONCAT31(local_4._1_3_,6);
  iVar2 = FUN_00560e80(this,&local_2c,'\x01');
  if (iVar2 != 0) {
    FUN_004036d0(this_00,local_2c,local_28);
    FUN_00561e60(this,0);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00564ae0(this,param_1,'\0');
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00565670 @ 00565670 ////

char * FUN_00565670(void)

{
  return s_Work_in_progress__Do_not_distrib_00e52d88;
}


//// FUNCTION FUN_005656a0 @ 005656a0 ////

void __fastcall FUN_005656a0(undefined4 *param_1)

{
  if ((undefined1 *)*param_1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00565710 @ 00565710 ////

undefined4 * __thiscall FUN_00565710(void *this,byte param_1)

{
  FUN_00a11660(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00565760 @ 00565760 ////

undefined4 FUN_00565760(char *param_1)

{
  int local_40 [2];
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [3];
  undefined **local_1c [3];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb14c0;
  local_c = ExceptionList;
  local_1c[0] = &PTR_FUN_00d242cc;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00a12230(local_28);
  local_2c = 0;
  local_30 = 0;
  local_34 = &DAT_010b9370;
  local_38 = 0;
  local_40[0] = 0;
  local_4._0_1_ = 3;
  FUN_00a12330(local_28,local_40);
  if (local_40[0] < 2) {
    FUN_00a12b50(local_28,1,(undefined4 *)&stack0x00000008);
    FUN_00a12360(local_28,param_1,(int)local_1c);
    FUN_00a12380(local_28,local_40);
    if (local_40[0] < 2) {
      local_4._0_1_ = 2;
      FUN_00a10ef0((int)local_40);
      if (local_34 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
        _free(local_34);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00a122e0(local_28);
      local_4 = 0xffffffff;
      FUN_00a11660(local_1c);
      ExceptionList = local_c;
      return 0;
    }
  }
  FUN_00a110b0(local_40,&local_34,2);
  FID_conflict__fwprintf((FILE *)&DAT_00e99df0,"%s\n",local_34);
  local_4._0_1_ = 2;
  FUN_00a10ef0((int)local_40);
  if (local_34 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00a122e0(local_28);
  local_4 = 0xffffffff;
  FUN_00a11660(local_1c);
  ExceptionList = local_c;
  return 1;
}


//// FUNCTION FUN_005658e0 @ 005658e0 ////

char FUN_005658e0(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char **ppcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char **ppcVar7;
  undefined2 *puVar8;
  char *pcVar9;
  uint in_stack_0000001c;
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb14d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  __getcwd(local_110,0x104);
  puVar8 = (undefined2 *)&stack0xfffffeef;
  do {
    pcVar9 = (char *)((int)puVar8 + 1);
    puVar8 = (undefined2 *)((int)puVar8 + 1);
  } while (*pcVar9 != '\0');
  *puVar8 = 0x5c;
  ppcVar3 = (char **)param_2;
  ppcVar7 = (char **)param_2;
  if (in_stack_0000001c < 0x10) {
    ppcVar3 = &param_2;
    ppcVar7 = ppcVar3;
  }
  do {
    cVar2 = *(char *)ppcVar3;
    ppcVar3 = (char **)((int)ppcVar3 + 1);
  } while (cVar2 != '\0');
  uVar4 = (int)ppcVar3 - (int)ppcVar7;
  pcVar9 = &stack0xfffffeef;
  do {
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar1 != '\0');
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char **)pcVar9 = *ppcVar7;
    ppcVar7 = ppcVar7 + 1;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *(char *)ppcVar7;
    ppcVar7 = (char **)((int)ppcVar7 + 1);
    pcVar9 = pcVar9 + 1;
  }
  iVar5 = FUN_00565760("edit");
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_c;
    return '\x01' - (iVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_005659d0 @ 005659d0 ////

char FUN_005659d0(undefined4 param_1,void *param_2)

{
  int iVar1;
  uint in_stack_0000001c;
  char in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb14f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((in_stack_00000020 != '\0') &&
     (ExceptionList = &local_c, iVar1 = MessageBoxA(DAT_0105beb0,"Add to Perforce?","New file",4),
     iVar1 == 7)) {
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    ExceptionList = local_c;
    return '\0';
  }
  iVar1 = FUN_00565760("add");
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return '\x01' - (iVar1 != 0);
}


//// FUNCTION FUN_00565a90 @ 00565a90 ////

void __thiscall FUN_00565a90(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x58) = *param_1;
  *(undefined4 *)((int)this + 0x5c) = param_1[1];
  return;
}


//// FUNCTION FUN_00565ab0 @ 00565ab0 ////

void __thiscall FUN_00565ab0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x48) = *param_1;
  *(undefined4 *)((int)this + 0x4c) = param_1[1];
  *(undefined4 *)((int)this + 0x50) = param_1[2];
  *(undefined4 *)((int)this + 0x54) = param_1[3];
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) | 2;
  if (*(int *)((int)this + 0x3c) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0x3c) + 8) = 1;
    DAT_0105cb50 = *(undefined4 *)((int)this + 0x48);
    DAT_0105cb54 = *(undefined4 *)((int)this + 0x4c);
    DAT_0105cb58 = *(undefined4 *)((int)this + 0x50);
    DAT_0105cb5c = *(undefined4 *)((int)this + 0x54);
  }
  return;
}


//// FUNCTION FUN_00565b10 @ 00565b10 ////

void __thiscall FUN_00565b10(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x84) = param_1;
  return;
}


//// FUNCTION FUN_00565b20 @ 00565b20 ////

void __fastcall FUN_00565b20(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb1523;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d24348;
  _Memory = (int *)param_1[0xf];
  local_4 = 1;
  if (_Memory != (int *)0x0) {
    iVar1 = _Memory[1];
    _Memory[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    param_1[0xf] = 0;
  }
  if (10 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00565bb0 @ 00565bb0 ////

void __thiscall FUN_00565bb0(void *this,float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  undefined4 unaff_ESI;
  int iVar7;
  short *psVar8;
  float10 fVar9;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = 8.0;
  local_4 = 0.0;
  local_c = 8.0;
  fVar2 = 0.0;
  fVar4 = local_4;
  if (*(int *)((int)this + 0x3c) != 0) {
    fVar9 = FUN_009a7d60(*(int *)((int)this + 0x3c));
    fVar1 = (float)fVar9;
    local_4 = 0.0;
    local_8 = 0.0;
    fVar2 = 0.0;
    local_c = fVar1;
    fVar4 = local_4;
    if (*(int *)((int)this + 100) != 0) {
      psVar8 = *(short **)((int)this + 0x60);
      sVar6 = *psVar8;
      iVar7 = CONCAT22((short)((uint)unaff_ESI >> 0x10),sVar6);
      fVar5 = fVar1;
      fVar3 = local_8;
      while (local_4 = fVar5, local_c = local_4, local_8 = fVar3, sVar6 != 0) {
        psVar8 = psVar8 + 1;
        if (param_2 < 0) goto LAB_00565c9b;
        sVar6 = (short)iVar7;
        if ((sVar6 == 10) || (sVar6 == 0xd)) {
          if (param_2 == 0) goto LAB_00565c94;
          local_c = local_4 + fVar1;
          local_8 = 0.0;
          fVar3 = 0.0;
        }
        else {
          fVar9 = FUN_009a7d30(*(undefined4 **)((int)this + 0x3c),iVar7);
          local_8 = (float)(fVar9 + (float10)fVar3);
          local_4 = fVar4;
        }
        if (sVar6 != 0xd) {
          param_2 = param_2 + -1;
        }
        sVar6 = *psVar8;
        iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),sVar6);
        fVar5 = local_c;
        fVar2 = fVar3;
        fVar4 = local_4;
        fVar3 = local_8;
      }
      if (-1 < param_2) {
LAB_00565c94:
        fVar2 = fVar3;
      }
    }
  }
LAB_00565c9b:
  local_4 = fVar4;
  fVar2 = fVar2 + *(float *)((int)this + 0x58);
  local_8 = local_8 + *(float *)((int)this + 0x58);
  local_4 = local_4 + *(float *)((int)this + 0x5c);
  local_c = local_c + *(float *)((int)this + 0x5c);
  *param_1 = fVar2;
  param_1[1] = local_c;
  *param_1 = fVar2;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}


//// FUNCTION FUN_00565d00 @ 00565d00 ////

undefined4 * __thiscall FUN_00565d00(void *this,byte param_1)

{
  FUN_00565b20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00565d20 @ 00565d20 ////

undefined4 * __thiscall FUN_00565d20(void *this,undefined4 *param_1)

{
  uint uVar1;
  wchar_t local_70 [2];
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1548;
  local_c = ExceptionList;
  local_70[0] = L'\r';
  local_70[1] = L'\0';
  ExceptionList = &local_c;
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_00ace02d(local_70);
    uVar1 = FUN_0055d250((undefined4 *)((int)this + 0x60),(ushort *)local_70,0,uVar1);
    if (uVar1 != 0xffffffff) {
      local_6c = local_60;
      local_60[0] = L'\0';
      local_68 = 0;
      local_64 = 10;
      FUN_004036d0(&local_6c,*(wchar_t **)((int)this + 0x60),*(uint *)((int)this + 100));
      local_2c = local_20;
      local_4 = 0;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar1 = FUN_00ace02d(local_70);
      FUN_004036d0(&local_4c,local_70,uVar1);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_005699d0((int *)&local_6c,&local_4c,&local_2c);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if (local_24 < 0xb) {
        *param_1 = param_1 + 3;
        *(undefined2 *)(param_1 + 3) = 0;
        param_1[1] = 0;
        param_1[2] = 10;
        FUN_004036d0(param_1,local_6c,local_68);
        if (local_64 < 0xb) {
          ExceptionList = local_c;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x60),*(uint *)((int)this + 100));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00565ed0 @ 00565ed0 ////

int __thiscall FUN_00565ed0(void *this,float param_1,float param_2)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined2 extraout_var;
  int iVar7;
  ushort *puVar8;
  float10 fVar9;
  ulonglong uVar10;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  void *local_20 [2];
  uint local_18;
  
  iVar7 = 0;
  if ((*(void **)((int)this + 0x3c) != (void *)0x0) && (*(int *)((int)this + 100) != 0)) {
    local_2c = DAT_0104e134;
    local_28 = *(float *)((int)this + 0x58);
    local_30 = DAT_0104e138;
    local_24 = *(float *)((int)this + 0x5c);
    if (*(char *)((int)this + 0x84) == '\0') {
      local_2c = 1.0;
      local_30 = 1.0;
    }
    fVar1 = param_1 * local_2c - local_28 * local_2c;
    fVar3 = param_2 * local_30 - local_24 * local_30;
    if (0.0 <= fVar3) {
      puVar8 = *(ushort **)((int)this + 0x60);
      iVar4 = FUN_009a8180(*(void **)((int)this + 0x3c),&local_28,puVar8);
      local_30 = local_30 * *(float *)(iVar4 + 4);
      if (local_30 < fVar3 == (local_30 == fVar3)) {
        FUN_009a7d60(*(int *)((int)this + 0x3c));
        uVar10 = FUN_00acd42c();
        iVar4 = (int)uVar10;
        for (; (0 < iVar4 && (uVar2 = *puVar8, uVar2 != 0)); puVar8 = puVar8 + 1) {
          if (((uVar2 != 10) && (uVar2 != 0xd)) || (iVar4 = iVar4 + -1, uVar2 != 0xd)) {
            iVar7 = iVar7 + 1;
          }
        }
        if (0.0 <= fVar1) {
          uVar2 = *puVar8;
          uVar6 = (uint)uVar2;
          while ((uVar2 != 0 && ((short)uVar6 != 10))) {
            fVar9 = FUN_009a7d30(*(undefined4 **)((int)this + 0x3c),uVar6);
            fVar9 = (float10)fVar1 - fVar9 * (float10)local_2c;
            fVar1 = (float)fVar9;
            if (fVar9 < (float10)0.0) {
              return iVar7;
            }
            if (*puVar8 != 0xd) {
              iVar7 = iVar7 + 1;
            }
            uVar2 = puVar8[1];
            puVar8 = puVar8 + 1;
            uVar6 = CONCAT22(extraout_var,uVar2);
          }
        }
      }
      else {
        puVar5 = FUN_00565d20(this,local_20);
        iVar7 = puVar5[1];
        if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
          _free(local_20[0]);
        }
      }
    }
  }
  return iVar7;
}


//// FUNCTION FUN_00566070 @ 00566070 ////

undefined4 * __cdecl FUN_00566070(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  FUN_004036d0(&local_20,(wchar_t *)*param_2,param_2[1]);
  param_2 = param_3;
  FUN_0040cae0(&local_20,(wchar_t *)&param_2,1);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_20,local_1c);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_00566110 @ 00566110 ////

void __fastcall FUN_00566110(int param_1)

{
  int *this;
  float10 fVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float local_9c;
  uint local_94;
  wchar_t local_90 [2];
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
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
  puStack_8 = &LAB_00cb1573;
  local_c = ExceptionList;
  uVar7 = 0;
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 100) != 0)) {
    local_6c = local_60;
    local_90[0] = L'\r';
    local_90[1] = 0;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 10;
    ExceptionList = &local_c;
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_6c,(wchar_t *)&lpCaption_00d16918,uVar2);
    local_8c = local_80;
    local_4 = 0;
    local_80[0] = 0;
    local_88 = 0;
    local_84 = 10;
    uVar2 = FUN_00ace02d(local_90);
    FUN_004036d0(&local_8c,local_90,uVar2);
    this = (int *)(param_1 + 0x60);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005699d0(this,&local_8c,&local_6c);
    if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_4 = 0xffffffff;
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    uVar2 = 0;
    local_9c = 0.0;
    local_94 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      iVar6 = 0;
      iVar5 = extraout_ECX;
      do {
        switch(*(undefined2 *)(*this + iVar6)) {
        case 10:
          goto LAB_0056633c;
        case 0x20:
        case 0x2c:
        case 0x2d:
        case 0x2e:
          uVar7 = uVar2;
        }
        fVar8 = FUN_009a7d30(*(undefined4 **)(param_1 + 0x3c),
                             CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(*this + iVar6)));
        fVar1 = (float10)local_9c;
        local_9c = (float)(fVar8 + fVar1);
        if ((float10)*(float *)(param_1 + 0x44) < fVar8 + fVar1) {
          if (local_94 == uVar7) {
            uVar7 = uVar2;
          }
          uVar2 = uVar7 + 1;
          puVar3 = FUN_004211c0(this,local_2c,uVar2,0xffffffff);
          puVar4 = FUN_004211c0(this,local_4c,0,uVar2);
          puVar4 = FUN_00566070(&local_8c,puVar4,0xd);
          puVar3 = FUN_00443250(&local_6c,puVar4,puVar3);
          FUN_004036d0(this,(wchar_t *)*puVar3,puVar3[1]);
          if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
          if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c);
          }
          if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          iVar6 = uVar2 * 2;
LAB_0056633c:
          local_9c = 0.0;
          uVar7 = uVar2;
          local_94 = uVar2;
        }
        uVar2 = uVar2 + 1;
        iVar6 = iVar6 + 2;
        iVar5 = param_1;
      } while (uVar2 < *(uint *)(param_1 + 100));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005663b0 @ 005663b0 ////

void __thiscall FUN_005663b0(void *this,undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb158b;
  local_c = ExceptionList;
  piVar2 = *(int **)((int)this + 0x3c);
  ExceptionList = &local_c;
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    ExceptionList = &local_c;
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(piVar2);
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  this_00 = operator_new(0x7c);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009a8a00(this_00,(char *)*param_1,param_2,param_3,0);
  }
  *(int **)((int)this + 0x3c) = piVar2;
  local_4 = 0xffffffff;
  if ((*(byte *)((int)this + 0x40) & 2) != 0) {
    FUN_00565ab0(this,(undefined4 *)((int)this + 0x48));
  }
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    FUN_00566110((int)this);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00566490 @ 00566490 ////

void __thiscall FUN_00566490(void *this,undefined4 *param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb15ab;
  local_c = ExceptionList;
  piVar2 = *(int **)((int)this + 0x3c);
  ExceptionList = &local_c;
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    ExceptionList = &local_c;
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(piVar2);
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  this_00 = operator_new(0x7c);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009a8a00(this_00,(char *)*param_1,param_2,param_3,*param_4);
  }
  *(int **)((int)this + 0x3c) = piVar2;
  local_4 = 0xffffffff;
  if ((*(byte *)((int)this + 0x40) & 2) != 0) {
    FUN_00565ab0(this,(undefined4 *)((int)this + 0x48));
  }
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    FUN_00566110((int)this);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00566580 @ 00566580 ////

float10 __fastcall FUN_00566580(void *param_1)

{
  float *pfVar1;
  undefined4 local_34 [2];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb15c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)param_1 + 0x3c) == 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"default_bold",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 0;
    FUN_005663b0(param_1,&local_2c,0xc,0);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  pfVar1 = (float *)FUN_009a8180(*(void **)((int)param_1 + 0x3c),local_34,
                                 *(ushort **)((int)param_1 + 0x60));
  ExceptionList = local_c;
  return (float10)*pfVar1;
}


//// FUNCTION FUN_00566700 @ 00566700 ////

undefined4 * __thiscall FUN_00566700(void *this,undefined4 *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x3c) == 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"default_bold",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 0;
    FUN_005663b0(this,&local_2c,0xc,0);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  FUN_009a8180(*(void **)((int)this + 0x3c),param_1,*(ushort **)((int)this + 0x60));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00566a50 @ 00566a50 ////

undefined4 * __fastcall FUN_00566a50(undefined4 *param_1)

{
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d24348;
  *(undefined1 *)(param_1 + 0xe) = 0xff;
  *(undefined1 *)((int)param_1 + 0x39) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3b) = 0xff;
  param_1[0xe] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 10;
  param_1[0x18] = param_1 + 0x1b;
  param_1[0xe] = 0xff000000;
  param_1[0x17] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = 0;
  param_1[0x16] = 0;
  param_1[0x10] = param_1[0x10] & 0xfffffffc;
  *(undefined1 *)(param_1 + 0x21) = 1;
  return param_1;
}


//// FUNCTION FUN_00566af0 @ 00566af0 ////

void __fastcall FUN_00566af0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2436c;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_00566b00 @ 00566b00 ////

undefined1 __fastcall FUN_00566b00(int param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}


//// FUNCTION FUN_00566b10 @ 00566b10 ////

undefined4 __fastcall FUN_00566b10(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00990a00();
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    return 1;
  }
  fVar1 = (float)fVar4 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x48) = fVar1;
  fVar2 = (float)fVar4 + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x44) = fVar2;
  if (fVar1 < 0.1) {
    uVar3 = 0;
  }
  else {
    *(float *)(param_1 + 0x48) = fVar1 - 0.1;
    if (0.1 <= fVar1 - 0.1) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    uVar3 = 1;
    if (0.1 <= fVar2) {
      *(float *)(param_1 + 0x44) = fVar2 - 0.1;
      if (0.1 <= fVar2 - 0.1) {
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x48) * 10.0;
      return 1;
    }
  }
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x48) * 10.0;
  return uVar3;
}


//// FUNCTION FUN_00566bf0 @ 00566bf0 ////

void __fastcall FUN_00566bf0(int param_1)

{
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}


//// FUNCTION FUN_00566c00 @ 00566c00 ////

float10 __fastcall FUN_00566c00(int param_1)

{
  if (DAT_0105be81 != '\0') {
    return (float10)1.0;
  }
  return (float10)*(float *)(param_1 + 0x4c);
}


//// FUNCTION FUN_00566c20 @ 00566c20 ////

void __thiscall FUN_00566c20(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x38) = param_1;
  return;
}


//// FUNCTION FUN_00566c30 @ 00566c30 ////

void FUN_00566c30(void)

{
  if (DAT_0104cdf4 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104cdf4)(1);
  }
  DAT_0104cdf4 = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_00566c50 @ 00566c50 ////

undefined4 * __thiscall FUN_00566c50(void *this,byte param_1)

{
  FUN_00566af0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00566c70 @ 00566c70 ////

int FUN_00566c70(void)

{
  float fVar1;
  
  if (DAT_0105be81 == '\0') {
    fVar1 = *(float *)(DAT_0104cdf4 + 0x4c);
  }
  else {
    fVar1 = 1.0;
  }
  return *(int *)(DAT_0104cdf4 + 0x3c) * 100 + (int)ROUND(fVar1 * 100.0);
}


//// FUNCTION FUN_00566cb0 @ 00566cb0 ////

undefined4 * __fastcall FUN_00566cb0(undefined4 *param_1)

{
  FUN_0040a070(param_1);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_00d2436c;
  param_1[0xe] = 0x3f800000;
  return param_1;
}


//// FUNCTION FUN_00566ce0 @ 00566ce0 ////

void FUN_00566ce0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb166b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x50);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0040a070(puVar1);
    puVar1[0xf] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *puVar1 = &PTR_FUN_00d2436c;
    puVar1[0xe] = 0x3f800000;
    DAT_0104cdf4 = puVar1;
    ExceptionList = local_c;
    return;
  }
  DAT_0104cdf4 = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00566d60 @ 00566d60 ////

void __cdecl FUN_00566d60(undefined4 *param_1)

{
  FUN_0098a430(param_1,4);
  return;
}


//// FUNCTION FUN_00566d70 @ 00566d70 ////

float10 __fastcall FUN_00566d70(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return (float10)fVar1;
}


//// FUNCTION FUN_00566e40 @ 00566e40 ////

int __fastcall FUN_00566e40(int param_1)

{
  return *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x48) * 4;
}


//// FUNCTION FUN_00566e50 @ 00566e50 ////

void __thiscall FUN_00566e50(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4);
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


//// FUNCTION FUN_00566f00 @ 00566f00 ////

undefined4 __thiscall FUN_00566f00(void *this,float param_1)

{
  if (*(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4) < param_1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00566f60 @ 00566f60 ////

undefined4 __thiscall FUN_00566f60(void *this,float param_1)

{
  if (param_1 < *(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_005670c0 @ 005670c0 ////

void __fastcall FUN_005670c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(DAT_0104cdf4 + 0x3c);
  if (*(uint *)(param_1 + 0x50) < uVar4) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    }
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x48) * 4);
    if (*(uint *)(param_1 + 0x50) + iVar2 < uVar4) {
      *(uint *)(param_1 + 0x50) = uVar4 - iVar2;
    }
    if (*(uint *)(param_1 + 0x50) < *(uint *)(DAT_0104cdf4 + 0x3c)) {
      do {
        iVar3 = *(int *)(param_1 + 0x48) + 1;
        *(int *)(param_1 + 0x48) = iVar3;
        if (iVar2 <= iVar3) {
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x48) * 4) = uVar1;
        uVar4 = *(int *)(param_1 + 0x50) + 1;
        *(uint *)(param_1 + 0x50) = uVar4;
      } while (uVar4 < *(uint *)(DAT_0104cdf4 + 0x3c));
    }
  }
  return;
}


//// FUNCTION FUN_00567150 @ 00567150 ////

void __thiscall FUN_00567150(void *this,float param_1)

{
  float fVar1;
  int iVar2;
  
  FUN_005670c0((int)this);
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  fVar1 = *(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4);
  *(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4) = param_1;
  if (*(int *)((int)this + 0x3c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
  }
  if (*(uint *)(DAT_0104cdf4 + 0x3c) <= (uint)(*(int *)((int)this + 0x4c) + iVar2)) {
    return;
  }
  *(float *)((int)this + 0x54) = (param_1 - fVar1) + *(float *)((int)this + 0x54);
  return;
}


//// FUNCTION FUN_005672a0 @ 005672a0 ////

float10 __fastcall FUN_005672a0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float local_8;
  
  FUN_005670c0(param_1);
  fVar5 = (float10)0.0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  }
  if ((uint)(*(int *)(param_1 + 0x4c) + iVar2) <= *(uint *)(DAT_0104cdf4 + 0x3c)) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    }
    uVar4 = (*(int *)(param_1 + 0x48) + 1U) % uVar3;
    iVar2 = *(int *)(param_1 + 0x3c);
    local_8 = *(float *)(iVar2 + uVar4 * 4);
    fVar6 = (float10)0.0;
    fVar1 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (0.0 < fVar1) {
      do {
        fVar6 = fVar6 + (float10)1.0;
        uVar4 = uVar4 + 1;
        fVar5 = (fVar6 / (float10)fVar1) *
                ((float10)*(float *)(iVar2 + -4 + uVar4 * 4) - (float10)local_8) + fVar5;
        local_8 = *(float *)(iVar2 + -4 + uVar4 * 4);
        if (uVar3 <= uVar4) {
          uVar4 = 0;
        }
      } while (fVar6 < (float10)fVar1);
    }
    return fVar5;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00567380 @ 00567380 ////

void __thiscall FUN_00567380(void *this,float param_1)

{
  FUN_005670c0((int)this);
  FUN_00567150(this,param_1);
  return;
}


//// FUNCTION FUN_005673a0 @ 005673a0 ////

void __thiscall FUN_005673a0(void *this,int param_1)

{
  FUN_005670c0((int)this);
  FUN_00567150(this,*(float *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x48) * 4));
  return;
}


//// FUNCTION FUN_005673d0 @ 005673d0 ////

void __thiscall FUN_005673d0(void *this,float param_1)

{
  FUN_005670c0((int)this);
  FUN_00567150(this,param_1 + *(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4
                                        ));
  return;
}


//// FUNCTION FUN_00567400 @ 00567400 ////

void __thiscall FUN_00567400(void *this,float param_1)

{
  FUN_005670c0((int)this);
  FUN_00567150(this,*(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4) -
                    param_1);
  return;
}


//// FUNCTION FUN_00567430 @ 00567430 ////

void __thiscall FUN_00567430(void *this,float param_1)

{
  FUN_005670c0((int)this);
  FUN_00567150(this,param_1 * *(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4
                                        ));
  return;
}


//// FUNCTION FUN_00567460 @ 00567460 ////

void __thiscall FUN_00567460(void *this,float param_1)

{
  FUN_005670c0((int)this);
  FUN_00567150(this,*(float *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4) /
                    param_1);
  return;
}


//// FUNCTION FUN_00567490 @ 00567490 ////

void __thiscall FUN_00567490(void *this,uint param_1)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
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
    FUN_00481520(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if (((iVar2 != 0) &&
      (pvVar3 = *(void **)((int)this + 8), param_1 < (uint)((int)pvVar3 - iVar2 >> 2))) &&
     (_Dst = (void *)(iVar2 + param_1 * 4), _Dst != pvVar3)) {
    pvVar3 = _memmove(_Dst,pvVar3,0);
    *(void **)((int)this + 8) = pvVar3;
  }
  return;
}


//// FUNCTION FUN_00567530 @ 00567530 ////

void __thiscall FUN_00567530(void *this,uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x3c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
  }
  if (uVar2 != param_1) {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x3c) + *(int *)((int)this + 0x48) * 4);
    FUN_00567490((void *)((int)this + 0x38),param_1);
    puVar3 = *(undefined4 **)((int)this + 0x3c);
    if (puVar3 != *(undefined4 **)((int)this + 0x40)) {
      do {
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 != *(undefined4 **)((int)this + 0x40));
    }
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  return;
}


//// FUNCTION FUN_00567590 @ 00567590 ////

undefined4 * __thiscall FUN_00567590(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1693;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d24374;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  uVar1 = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  iVar2 = *(int *)((int)this + 0x3c);
  local_4 = 1;
  if ((iVar2 == 0) ||
     ((uint)(*(int *)((int)this + 0x44) - iVar2 >> 2) <=
      (uint)(*(int *)((int)this + 0x40) - iVar2 >> 2))) {
    FUN_00481520((void *)((int)this + 0x38),*(undefined4 **)((int)this + 0x40),1,&param_1);
  }
  else {
    puVar3 = *(undefined4 **)((int)this + 0x40);
    *puVar3 = param_1;
    *(undefined4 **)((int)this + 0x40) = puVar3 + 1;
  }
  FUN_00567530(this,0x40);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00567650 @ 00567650 ////

undefined4 * __thiscall FUN_00567650(void *this,byte param_1)

{
  FUN_00478180(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00567670 @ 00567670 ////

undefined4 * __thiscall FUN_00567670(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb16b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d24374;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  local_4 = 1;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  }
  FUN_00567530(this,uVar2);
  uVar1 = 0;
  if (3 < (int)uVar2) {
    do {
      *(undefined4 *)(*(int *)((int)this + 0x3c) + uVar1 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x3c) + uVar1 * 4);
      *(undefined4 *)(*(int *)((int)this + 0x3c) + 4 + uVar1 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x3c) + 4 + uVar1 * 4);
      *(undefined4 *)(*(int *)((int)this + 0x3c) + 8 + uVar1 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x3c) + 8 + uVar1 * 4);
      *(undefined4 *)(*(int *)((int)this + 0x3c) + 0xc + uVar1 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0xc + uVar1 * 4);
      uVar1 = uVar1 + 4;
    } while (uVar1 < uVar2 - 3);
  }
  for (; uVar1 < uVar2; uVar1 = uVar1 + 1) {
    *(undefined4 *)(*(int *)((int)this + 0x3c) + uVar1 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x3c) + uVar1 * 4);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00567760 @ 00567760 ////

undefined4 * __fastcall FUN_00567760(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb16d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d24374;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  iVar2 = param_1[0xf];
  local_4 = 1;
  local_14 = 0;
  if ((iVar2 == 0) || ((uint)(param_1[0x11] - iVar2 >> 2) <= (uint)(param_1[0x10] - iVar2 >> 2))) {
    FUN_00481520(param_1 + 0xe,(undefined4 *)param_1[0x10],1,&local_14);
  }
  else {
    puVar3 = (undefined4 *)param_1[0x10];
    *puVar3 = 0;
    param_1[0x10] = puVar3 + 1;
  }
  FUN_00567530(param_1,0x40);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00567860 @ 00567860 ////

undefined1 __cdecl FUN_00567860(byte *param_1,byte *param_2,byte *param_3,int param_4)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_400 [1024];
  
  bVar2 = *param_1;
  uVar1 = 0;
joined_r0x0056787d:
  if (bVar2 == 0) {
    return uVar1;
  }
  pbVar5 = local_400;
  if (bVar2 == 0x2d) {
    bVar2 = param_1[1];
    while (param_1 = param_1 + 1, bVar2 != 0) {
      if (bVar2 != 0x20) {
        bVar2 = *param_1;
        if (bVar2 != 0) goto LAB_005678b0;
        break;
      }
      bVar2 = param_1[1];
    }
    goto LAB_005678c0;
  }
  goto LAB_00567947;
  while( true ) {
    *pbVar5 = bVar2;
    bVar2 = param_1[1];
    pbVar5 = pbVar5 + 1;
    param_1 = param_1 + 1;
    if (bVar2 == 0) break;
LAB_005678b0:
    if (bVar2 == 0x20) break;
  }
LAB_005678c0:
  *pbVar5 = 0;
  pbVar5 = local_400;
  pbVar4 = param_2;
  do {
    bVar2 = *pbVar4;
    bVar6 = bVar2 < *pbVar5;
    if (bVar2 != *pbVar5) {
LAB_005678f4:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_005678f9;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar6 = bVar2 < pbVar5[1];
    if (bVar2 != pbVar5[1]) goto LAB_005678f4;
    pbVar4 = pbVar4 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_005678f9:
  if (iVar3 != 0) goto LAB_00567942;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    if (bVar2 != 0x20) {
      bVar2 = *param_1;
      if (bVar2 != 0) goto LAB_00567920;
      break;
    }
    pbVar5 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar5;
  }
LAB_0056793c:
  *param_3 = 0;
  uVar1 = 1;
LAB_00567942:
  param_1 = param_1 + -1;
LAB_00567947:
  bVar2 = param_1[1];
  param_1 = param_1 + 1;
  goto joined_r0x0056787d;
  while( true ) {
    *param_3 = bVar2;
    bVar2 = param_1[1];
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
    if (bVar2 == 0) break;
LAB_00567920:
    if ((bVar2 == 0x20) || (param_4 == 0)) break;
  }
  goto LAB_0056793c;
}


//// FUNCTION FUN_00567960 @ 00567960 ////

undefined4 __cdecl FUN_00567960(float param_1,float param_2)

{
  int *piVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  piVar1 = (int *)FUN_0071b2a0();
  fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
  if (fVar3 * (float10)0.5 <= (float10)param_1) {
    piVar1 = (int *)FUN_0071b2a0();
    fVar3 = (float10)(**(code **)(*piVar1 + 0x14))();
    uVar2 = 3;
    if (fVar3 * (float10)0.25 <= (float10)param_2) {
      uVar2 = 1;
    }
    return uVar2;
  }
  piVar1 = (int *)FUN_0071b2a0();
  fVar3 = (float10)(**(code **)(*piVar1 + 0x14))();
  if ((float10)param_2 < fVar3 * (float10)0.25) {
    return 2;
  }
  return 0;
}


//// FUNCTION FUN_005679d0 @ 005679d0 ////

float10 __cdecl FUN_005679d0(float param_1)

{
  return (float10)param_1 * (float10)40.0;
}


//// FUNCTION FUN_00567be0 @ 00567be0 ////

void __cdecl FUN_00567be0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x4d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x4d);
  }
  return;
}


//// FUNCTION CRect @ 00567c60 ////

/* Library Function - Single Match
    public: __thiscall CRect::CRect(int,int,int,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CRect::CRect(CRect *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}


//// FUNCTION FUN_00567cb0 @ 00567cb0 ////

void __cdecl FUN_00567cb0(float *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_00acd42c();
  iVar3 = (int)uVar4;
  iVar2 = param_2 / iVar3;
  fVar1 = 1.0 / (float)iVar3;
  iVar3 = param_2 - iVar2 * iVar3;
  *param_1 = (float)iVar3 * fVar1;
  param_1[1] = (float)iVar2 * fVar1;
  param_1[2] = (float)(iVar3 + 1) * fVar1;
  param_1[3] = (float)(iVar2 + 1) * fVar1;
  return;
}


//// FUNCTION FUN_00567d40 @ 00567d40 ////

void __cdecl FUN_00567d40(void *param_1,undefined4 param_2,uint param_3)

{
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00567d60 @ 00567d60 ////

float10 __cdecl FUN_00567d60(undefined4 *param_1)

{
  double dVar1;
  
  dVar1 = _atof((char *)*param_1);
  return (float10)dVar1;
}


//// FUNCTION FUN_00567d70 @ 00567d70 ////

void __cdecl FUN_00567d70(undefined4 *param_1)

{
  FUN_00ad08e5((wchar_t *)*param_1);
  return;
}


//// FUNCTION FUN_00567d80 @ 00567d80 ////

void __cdecl FUN_00567d80(undefined4 *param_1)

{
  _atol((char *)*param_1);
  return;
}


//// FUNCTION FUN_00567d90 @ 00567d90 ////

void __cdecl FUN_00567d90(undefined4 *param_1)

{
  __wtol((wchar_t *)*param_1);
  return;
}


//// FUNCTION FUN_00567da0 @ 00567da0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00567da0(float *param_1,undefined4 *param_2,char param_3)

{
  char *pcVar1;
  double dVar2;
  float local_48;
  float local_44;
  char local_40 [64];
  
  local_44 = 0.0;
  if (param_3 != '\0') {
    local_44 = _DAT_00e52ee8;
  }
  _strncpy(local_40,(char *)*param_2,0x3f);
  pcVar1 = _strtok(local_40,",");
  local_48 = local_44;
  if (pcVar1 != (char *)0x0) {
    dVar2 = _atof(pcVar1);
    local_48 = (float)dVar2;
    pcVar1 = _strtok((char *)0x0,",");
    if (pcVar1 != (char *)0x0) {
      dVar2 = _atof(pcVar1);
      local_44 = (float)dVar2;
    }
  }
  *param_1 = local_48;
  param_1[1] = local_44;
  return;
}


//// FUNCTION FUN_00567e30 @ 00567e30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00567e30(float *param_1,undefined4 *param_2,char param_3)

{
  char *pcVar1;
  double dVar2;
  float local_6c;
  float local_68;
  float local_64;
  char local_60 [96];
  
  local_64 = 0.0;
  if (param_3 != '\0') {
    local_64 = _DAT_00e52ee8;
  }
  _strncpy(local_60,(char *)*param_2,0x5f);
  pcVar1 = _strtok(local_60,",");
  local_6c = local_64;
  local_68 = local_64;
  if (pcVar1 != (char *)0x0) {
    dVar2 = _atof(pcVar1);
    local_6c = (float)dVar2;
    pcVar1 = _strtok((char *)0x0,",");
    if (pcVar1 != (char *)0x0) {
      dVar2 = _atof(pcVar1);
      local_68 = (float)dVar2;
      pcVar1 = _strtok((char *)0x0,",");
      if (pcVar1 != (char *)0x0) {
        dVar2 = _atof(pcVar1);
        local_64 = (float)dVar2;
      }
    }
  }
  *param_1 = local_6c;
  param_1[1] = local_68;
  param_1[2] = local_64;
  return;
}


//// FUNCTION FUN_00567ff0 @ 00567ff0 ////

undefined4 __cdecl FUN_00567ff0(undefined4 param_1)

{
  FUN_009b91e0();
  return param_1;
}


//// FUNCTION FUN_00568280 @ 00568280 ////

undefined4 * __thiscall FUN_00568280(void *this,char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (param_2 < (uint)((int)pcVar2 - (int)(param_1 + 1))) {
    uVar3 = ((int)pcVar2 - (int)(param_1 + 1)) - param_2;
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    FUN_004015d0(this,param_1 + param_2,param_3);
  }
  return this;
}


//// FUNCTION FUN_005682e0 @ 005682e0 ////

undefined4 * __thiscall FUN_005682e0(void *this,short *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  uVar1 = FUN_00ace02d(param_1);
  if (param_2 < uVar1) {
    if (uVar1 - param_2 < param_3) {
      param_3 = uVar1 - param_2;
    }
    FUN_004036d0(this,param_1 + param_2,param_3);
  }
  return this;
}


//// FUNCTION FUN_00568330 @ 00568330 ////

uint __thiscall FUN_00568330(void *this,ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(short **)this == (short *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00ace02d(*(short **)this);
  }
  if ((param_3 != 0) || (uVar5 < param_2)) {
    if ((param_2 < uVar5) && (param_3 <= uVar5 - param_2)) {
      puVar3 = (ushort *)(*(int *)this + param_2 * 2);
      for (iVar7 = (uVar5 - param_2) + (1 - param_3); iVar7 != 0;
          iVar7 = iVar7 + (-1 - (iVar6 >> 1))) {
        puVar4 = puVar3;
        iVar6 = iVar7;
        while (*puVar4 != *param_1) {
          puVar4 = puVar4 + 1;
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) goto LAB_0056839b;
        }
        puVar1 = param_1;
        uVar5 = param_3;
        puVar2 = puVar4;
        if (puVar4 == (ushort *)0x0) break;
        while( true ) {
          if (uVar5 == 0) goto LAB_005683c5;
          if (*puVar2 != *puVar1) break;
          puVar1 = puVar1 + 1;
          uVar5 = uVar5 - 1;
          puVar2 = puVar2 + 1;
        }
        if ((-(uint)(*puVar2 < *puVar1) & 0xfffffffe) == 0xffffffff) {
LAB_005683c5:
          return (int)puVar4 - *(int *)this >> 1;
        }
        iVar6 = (int)puVar4 - (int)puVar3;
        puVar3 = puVar4 + 1;
      }
    }
LAB_0056839b:
    param_2 = 0xffffffff;
  }
  return param_2;
}


//// FUNCTION FUN_00568400 @ 00568400 ////

uint __thiscall FUN_00568400(void *this,ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if ((param_3 != 0) || (*(uint *)((int)this + 0x14) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 0x14)) &&
       (uVar8 = *(uint *)((int)this + 0x14) - param_2, param_3 <= uVar8)) {
      iVar9 = uVar8 + (1 - param_3);
      puVar5 = (undefined4 *)((int)this + 4);
      puVar6 = puVar5;
      if (7 < *(uint *)((int)this + 0x18)) {
        puVar6 = (undefined4 *)*puVar5;
      }
      puVar3 = (ushort *)((int)puVar6 + param_2 * 2);
      for (; iVar9 != 0; iVar9 = iVar9 + (-1 - (iVar7 >> 1))) {
        puVar4 = puVar3;
        iVar7 = iVar9;
        while (*puVar4 != *param_1) {
          puVar4 = puVar4 + 1;
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) goto LAB_0056846b;
        }
        puVar1 = param_1;
        uVar8 = param_3;
        puVar2 = puVar4;
        if (puVar4 == (ushort *)0x0) break;
        while( true ) {
          if (uVar8 == 0) goto LAB_00568497;
          if (*puVar2 != *puVar1) break;
          puVar1 = puVar1 + 1;
          uVar8 = uVar8 - 1;
          puVar2 = puVar2 + 1;
        }
        if ((-(uint)(*puVar2 < *puVar1) & 0xfffffffe) == 0xffffffff) {
LAB_00568497:
          if (7 < *(uint *)((int)this + 0x18)) {
            puVar5 = (undefined4 *)*puVar5;
          }
          return (int)puVar4 - (int)puVar5 >> 1;
        }
        iVar7 = (int)puVar4 - (int)puVar3;
        puVar3 = puVar4 + 1;
      }
    }
LAB_0056846b:
    param_2 = 0xffffffff;
  }
  return param_2;
}


//// FUNCTION FUN_00568590 @ 00568590 ////

void __fastcall FUN_00568590(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x4d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x4d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x4d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x4d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x4d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x4d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00568600 @ 00568600 ////

int __thiscall FUN_00568600(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_00acbc74();
  }
  uVar2 = *(int *)((int)this + 0x14) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    puVar5 = (undefined4 *)((int)this + 4);
    puVar4 = puVar5;
    puVar1 = puVar5;
    if (7 < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar5;
      puVar1 = (undefined4 *)*puVar5;
    }
    _memmove((void *)((int)puVar4 + param_1 * 2),(void *)((int)puVar1 + (param_2 + param_1) * 2),
             (uVar2 - param_2) * 2);
    iVar3 = *(int *)((int)this + 0x14) - param_2;
    *(int *)((int)this + 0x14) = iVar3;
    if (7 < *(uint *)((int)this + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined2 *)((int)puVar5 + iVar3 * 2) = 0;
  }
  return (int)this;
}


//// FUNCTION FUN_00568680 @ 00568680 ////

void FUN_00568680(int param_1)

{
  operator_new(param_1 * 2);
  return;
}


//// FUNCTION FUN_005686a0 @ 005686a0 ////

undefined4 * __cdecl FUN_005686a0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  wchar_t *_Dest;
  uint uVar4;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb16e8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  sVar3 = _mbstowcs((wchar_t *)0x0,param_2,(size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
  if (0 < (int)sVar3) {
    _Dest = operator_new(sVar3 * 2 + 2);
    _mbstowcs(_Dest,param_2,(size_t)(pcVar2 + (1 - (int)(param_2 + 1))));
    uVar4 = FUN_00ace02d(_Dest);
    FUN_004036d0(&local_2c,_Dest,uVar4);
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_2c,local_28);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00568790 @ 00568790 ////

undefined4 * __cdecl FUN_00568790(undefined4 *param_1,undefined4 *param_2)

{
  size_t sVar1;
  wchar_t *_Dest;
  uint uVar2;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb1708;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = L'\0';
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar1 = _mbstowcs((wchar_t *)0x0,(char *)*param_2,param_2[1] + 1);
  if (0 < (int)sVar1) {
    _Dest = operator_new(sVar1 * 2 + 2);
    _mbstowcs(_Dest,(char *)*param_2,param_2[1] + 1);
    uVar2 = FUN_00ace02d(_Dest);
    FUN_004036d0(&local_2c,_Dest,uVar2);
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_2c,local_28);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00568870 @ 00568870 ////

undefined4 * __cdecl FUN_00568870(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  size_t sVar2;
  char *_Dest;
  char *pcVar3;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb1728;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar2 = _wcstombs((char *)0x0,(wchar_t *)*param_2,param_2[1] * 2 + 2);
  if (0 < (int)sVar2) {
    _Dest = operator_new(sVar2 + 1);
    sVar2 = _wcstombs(_Dest,(wchar_t *)*param_2,sVar2 + 1);
    if (sVar2 != 0) {
      pcVar3 = _Dest;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&local_2c,_Dest,(int)pcVar3 - (int)(_Dest + 1));
    }
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00568960 @ 00568960 ////

undefined4 * __cdecl FUN_00568960(undefined4 *param_1,wchar_t *param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *_Dest;
  char *pcVar4;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb1748;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_00ace02d(param_2);
  sVar3 = _wcstombs((char *)0x0,param_2,iVar2 * 2 + 2);
  if (0 < (int)sVar3) {
    _Dest = operator_new(sVar3 + 1);
    sVar3 = _wcstombs(_Dest,param_2,sVar3 + 1);
    if (sVar3 != 0) {
      pcVar4 = _Dest;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&local_2c,_Dest,(int)pcVar4 - (int)(_Dest + 1));
    }
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00568a50 @ 00568a50 ////

undefined4 * __cdecl FUN_00568a50(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char local_10 [16];
  
  _sprintf(local_10,"0x%08x",param_2);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  pcVar2 = local_10;
  param_1[1] = 0;
  param_1[2] = 0x14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(param_1,local_10,(int)pcVar2 - (int)(local_10 + 1));
  return param_1;
}


//// FUNCTION FUN_00568ac0 @ 00568ac0 ////

undefined4 * __cdecl FUN_00568ac0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char local_10 [16];
  
  _sprintf(local_10,"#%08x",*param_2);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  pcVar2 = local_10;
  param_1[1] = 0;
  param_1[2] = 0x14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(param_1,local_10,(int)pcVar2 - (int)(local_10 + 1));
  return param_1;
}


//// FUNCTION FUN_00568c00 @ 00568c00 ////

undefined4 * __thiscall FUN_00568c00(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar2 = *(char **)this;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (param_2 < (uint)((int)pcVar3 - (int)(pcVar2 + 1))) {
    uVar4 = ((int)pcVar3 - (int)(pcVar2 + 1)) - param_2;
    if (uVar4 < param_3) {
      param_3 = uVar4;
    }
    FUN_004015d0(param_1,pcVar2 + param_2,param_3);
  }
  return param_1;
}


//// FUNCTION FUN_00568cb0 @ 00568cb0 ////

undefined4 * __thiscall FUN_00568cb0(void *this,undefined4 *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  
  pwVar1 = *(wchar_t **)this;
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  uVar2 = FUN_00ace02d(pwVar1);
  FUN_004036d0(param_1,pwVar1,uVar2);
  return param_1;
}


//// FUNCTION FUN_00568cf0 @ 00568cf0 ////

undefined4 * __thiscall FUN_00568cf0(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = *(short **)this;
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  uVar2 = FUN_00ace02d(psVar1);
  if (param_2 < uVar2) {
    if (uVar2 - param_2 < param_3) {
      param_3 = uVar2 - param_2;
    }
    FUN_004036d0(param_1,psVar1 + param_2,param_3);
  }
  return param_1;
}


//// FUNCTION FUN_00568dd0 @ 00568dd0 ////

uint __thiscall FUN_00568dd0(void *this,char *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar5 = *(char **)this;
  if (pcVar5 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar4 - (int)(pcVar5 + 1);
  }
  if ((param_3 != 0) || (uVar3 < param_2)) {
    if ((param_2 < uVar3) && (param_3 <= uVar3 - param_2)) {
      pcVar5 = pcVar5 + param_2;
      pcVar4 = (char *)((uVar3 - param_2) + (1 - param_3));
      pcVar2 = _memchr(pcVar5,(int)*param_1,(size_t)pcVar4);
      if (pcVar2 != (char *)0x0) {
        do {
          bVar8 = true;
          uVar3 = param_3;
          pcVar6 = pcVar2;
          pcVar7 = param_1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            bVar8 = *pcVar6 == *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar8);
          if (bVar8) {
            return (int)pcVar2 - *(int *)this;
          }
          pcVar4 = pcVar5 + (int)(pcVar4 + (-1 - (int)pcVar2));
          pcVar5 = pcVar2 + 1;
          pcVar2 = _memchr(pcVar5,(int)*param_1,(size_t)pcVar4);
          if (pcVar2 == (char *)0x0) {
            return 0xffffffff;
          }
        } while( true );
      }
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}


//// FUNCTION FUN_00568ef0 @ 00568ef0 ////

int * __fastcall FUN_00568ef0(int *param_1)

{
  FUN_00568590(param_1);
  return param_1;
}


//// FUNCTION FUN_00568f00 @ 00568f00 ////

void __thiscall FUN_00568f00(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00cb1760;
  pvStack_10 = ExceptionList;
  uVar3 = param_1 | 7;
  if (uVar3 < 0x7fffffff) {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (uVar1 <= 0x7ffffffe - uVar2)) {
      param_1 = uVar2 + uVar1;
    }
  }
  local_8 = 0;
  ExceptionList = &pvStack_10;
  operator_new(param_1 * 2 + 2);
  FUN_00568f9b();
  return;
}


//// FUNCTION FUN_00568f9b @ 00568f9b ////

void FUN_00568f9b(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  if (uVar1 != 0) {
    if (*(uint *)(unaff_ESI + 0x18) < 8) {
      puVar3 = (undefined4 *)(unaff_ESI + 4);
    }
    else {
      puVar3 = *(undefined4 **)(unaff_ESI + 4);
    }
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar1 * 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    unaff_ESI = *(int *)(unaff_EBP + -0x14);
  }
  if (7 < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(unaff_ESI + 4));
  }
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  puVar3 = (undefined4 *)(unaff_ESI + 4);
  *(undefined2 *)puVar3 = 0;
  *puVar3 = puVar4;
  *(uint *)(unaff_ESI + 0x18) = unaff_EBX;
  *(uint *)(unaff_ESI + 0x14) = uVar1;
  if (7 < unaff_EBX) {
    puVar3 = puVar4;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined2 *)((int)puVar3 + uVar1 * 2) = 0;
  return;
}


//// FUNCTION FUN_00569040 @ 00569040 ////

undefined4 FUN_00569040(void)

{
  size_t sVar1;
  undefined4 *puVar2;
  FILE *_File;
  DWORD DVar3;
  wchar_t *local_6c [2];
  uint local_64;
  char *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1778;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009b9280();
  local_4 = 0;
  sVar1 = FUN_00ace02d(L"\\Lionhead Studios");
  FUN_0040cae0(local_6c,L"\\Lionhead Studios",sVar1);
  puVar2 = FUN_009ad040(local_2c,local_6c[0]);
  FUN_00acf917((LPCSTR)*puVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  sVar1 = FUN_00ace02d(L"\\The Movies");
  FUN_0040cae0(local_6c,L"\\The Movies",sVar1);
  puVar2 = FUN_009ad040(local_2c,local_6c[0]);
  FUN_00acf917((LPCSTR)*puVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  sVar1 = FUN_00ace02d(L"\\osdetect.txt");
  FUN_0040cae0(local_6c,L"\\osdetect.txt",sVar1);
  FUN_009ad040(local_4c,local_6c[0]);
  _File = _fopen(local_4c[0],"wt");
  if (_File == (FILE *)0x0) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    local_44 = 0;
  }
  else {
    DVar3 = GetVersion();
    if (DVar3 < 0x80000000) {
      FID_conflict__fwprintf(_File,"Windows XP/NT/2k detected");
      _fclose(_File);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (local_64 < 0xb) {
        ExceptionList = local_c;
        return local_44 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    FID_conflict__fwprintf(_File,"Windows 9x detected");
    _fclose(_File);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
  }
  if (local_64 < 0xb) {
    ExceptionList = local_c;
    return CONCAT31((int3)(local_44 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c[0]);
}


//// FUNCTION FUN_00569220 @ 00569220 ////

int * __cdecl FUN_00569220(int *param_1,int *param_2)

{
  ushort _C;
  int *piVar1;
  wchar_t *_Source;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  piVar1 = param_2;
  local_20 = local_14;
  iVar7 = 0;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  if (0 < param_2[1]) {
    do {
      _C = *(ushort *)(*piVar1 + iVar7 * 2);
      param_2 = (int *)(uint)_C;
      iVar3 = _iswalnum(_C);
      if (iVar3 != 0) {
        FUN_0040cae0(&local_20,(wchar_t *)&param_2,1);
      }
      iVar3 = _iswspace((wint_t)param_2);
      if (iVar3 != 0) {
        FUN_0040cae0(&local_20,(wchar_t *)&param_2,1);
      }
      sVar2 = (short)param_2;
      if ((((sVar2 == 0x2d) || (sVar2 == 0x21)) || (sVar2 == 0x28)) || (sVar2 == 0x29)) {
        FUN_0040cae0(&local_20,(wchar_t *)&param_2,1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < piVar1[1]);
    if (local_1c != 0) goto LAB_00569347;
  }
  uVar4 = FUN_00ace02d(L"FiLeNaMe");
  if (local_18 <= uVar4) {
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    local_18 = uVar4 + 0x20 & 0xffffffe0;
    local_20 = _malloc(local_18 * 2);
  }
  _wcsncpy(local_20,L"FiLeNaMe",uVar4);
  local_20[uVar4] = L'\0';
  local_1c = uVar4;
LAB_00569347:
  uVar4 = local_1c;
  _Source = local_20;
  param_1[2] = 10;
  *param_1 = (int)(param_1 + 3);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  if (9 < local_1c) {
    uVar5 = local_1c + 0x20 & 0xffffffe0;
    param_1[2] = uVar5;
    pvVar6 = _malloc(uVar5 * 2);
    *param_1 = (int)pvVar6;
  }
  _wcsncpy((wchar_t *)*param_1,_Source,uVar4);
  param_1[1] = uVar4;
  *(undefined2 *)(*param_1 + uVar4 * 2) = 0;
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_005693c0 @ 005693c0 ////

undefined4 * __cdecl FUN_005693c0(undefined4 *param_1,char *param_2,uint param_3,uint param_4)

{
  char *_Source;
  uint _Count;
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  char *local_b0;
  uint local_ac;
  uint local_a8;
  char local_a4 [20];
  undefined4 local_90;
  char *local_8c;
  size_t local_88;
  uint local_84;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb17b6;
  local_c = ExceptionList;
  local_90 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_009d3660(&param_2,(uint *)0x0);
  if ((char)uVar1 == '\0') {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,param_2,param_3);
  }
  else {
    iVar3 = 1;
    FUN_00430770(&param_2,&local_6c,0,param_3 - 4);
    FUN_00430770(&param_2,&local_8c,param_3 - 4,0xffffffff);
    local_b0 = local_a4;
    local_a4[0] = '\0';
    local_ac = 0;
    local_a8 = 0x14;
    local_4 = CONCAT31(local_4._1_3_,3);
    do {
      _Count = local_68;
      _Source = local_6c;
      if (local_a8 <= local_68) {
        if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        local_a8 = local_68 + 0x20 & 0xffffffe0;
        local_b0 = _malloc(local_a8);
      }
      _strncpy(local_b0,_Source,_Count);
      local_ac = _Count;
      local_b0[_Count] = '\0';
      FUN_004073f0(&local_b0,"(",1);
      sVar2 = _sprintf(local_4c,(char *)&param_2_00d1b93c,iVar3);
      FUN_004073f0(&local_b0,local_4c,sVar2);
      FUN_004073f0(&local_b0,")",1);
      FUN_004073f0(&local_b0,local_8c,local_88);
      iVar3 = iVar3 + 1;
      uVar1 = FUN_009d3660(&local_b0,(uint *)0x0);
    } while (((char)uVar1 != '\0') && (iVar3 < 9999));
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,local_b0,local_ac);
    if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
      _free(local_b0);
    }
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  if (param_4 < 0x15) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_00569600 @ 00569600 ////

undefined4 * __cdecl FUN_00569600(undefined4 *param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  wchar_t *_Source;
  uint _Count;
  undefined4 uVar1;
  size_t sVar2;
  wchar_t *_Format;
  wchar_t *local_f0;
  uint local_ec;
  uint local_e8;
  wchar_t local_e4 [10];
  undefined4 local_d0;
  wchar_t *local_cc;
  size_t local_c8;
  uint local_c4;
  wchar_t *local_ac;
  uint local_a8;
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb17e9;
  local_c = ExceptionList;
  local_d0 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_009d36d0(&param_2,(uint *)0x0);
  if ((char)uVar1 == '\0') {
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    FUN_004036d0(param_1,param_2,param_3);
  }
  else {
    _Format = (wchar_t *)0x1;
    FUN_004211c0(&param_2,&local_ac,0,param_3 - 4);
    FUN_004211c0(&param_2,&local_cc,param_3 - 4,0xffffffff);
    local_f0 = local_e4;
    local_e4[0] = L'\0';
    local_ec = 0;
    local_e8 = 10;
    local_4 = CONCAT31(local_4._1_3_,3);
    do {
      _Count = local_a8;
      _Source = local_ac;
      if (local_e8 <= local_a8) {
        if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
          _free(local_f0);
        }
        local_e8 = local_a8 + 0x20 & 0xffffffe0;
        local_f0 = _malloc(local_e8 * 2);
      }
      _wcsncpy(local_f0,_Source,_Count);
      local_ec = _Count;
      local_f0[_Count] = L'\0';
      sVar2 = FUN_00ace02d((short *)&DAT_00d24470);
      FUN_0040cae0(&local_f0,L"(",sVar2);
      sVar2 = _swprintf(local_8c,0xd18f7c,_Format);
      FUN_0040cae0(&local_f0,local_8c,sVar2);
      sVar2 = FUN_00ace02d((short *)&DAT_00d2446c);
      FUN_0040cae0(&local_f0,L")",sVar2);
      FUN_0040cae0(&local_f0,local_cc,local_c8);
      _Format = (wchar_t *)((int)_Format + 1);
      uVar1 = FUN_009d36d0(&local_f0,(uint *)0x0);
    } while (((char)uVar1 != '\0') && ((int)_Format < 9999));
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    FUN_004036d0(param_1,local_f0,local_ec);
    if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
      _free(local_f0);
    }
    if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
  }
  if (param_4 < 0xb) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_00569860 @ 00569860 ////

int __cdecl FUN_00569860(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *_Source;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint _Size;
  void *pvVar4;
  int local_84;
  void *local_80 [2];
  uint local_78;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  local_84 = 0;
  uVar1 = FUN_00413450(param_1,(char *)*param_2,0,param_2[1]);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    puVar2 = FUN_00430770(param_1,local_20,param_2[1] + uVar1,param_1[1]);
    puVar3 = FUN_00430770(param_1,local_60,0,uVar1);
    puVar3 = FUN_0047aee0(local_80,puVar3,param_3);
    puVar2 = FUN_0047aee0(local_40,puVar3,puVar2);
    uVar1 = puVar2[1];
    _Source = (char *)*puVar2;
    if ((uint)param_1[2] <= uVar1) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = uVar1 + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar4 = _malloc(_Size);
      *param_1 = (int)pvVar4;
    }
    _strncpy((char *)*param_1,_Source,uVar1);
    param_1[1] = uVar1;
    *(undefined1 *)(uVar1 + *param_1) = 0;
    if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
    if (0x14 < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_80[0]);
    }
    if (0x14 < local_58) break;
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    local_84 = local_84 + 1;
    uVar1 = FUN_00413450(param_1,(char *)*param_2,0,param_2[1]);
    if (uVar1 == 0xffffffff) {
      return local_84;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_60[0]);
}


//// FUNCTION FUN_005699d0 @ 005699d0 ////

int __cdecl FUN_005699d0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  wchar_t *_Source;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int local_84;
  void *local_80 [2];
  uint local_78;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = param_2[1];
  local_84 = 0;
  uVar2 = FUN_0055d250(param_1,(ushort *)*param_2,0,uVar1);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return local_84;
    }
    puVar3 = FUN_004211c0(param_1,local_20,uVar1 + uVar2,param_1[1]);
    puVar4 = FUN_004211c0(param_1,local_60,0,uVar2);
    puVar4 = FUN_00443250(local_80,puVar4,param_3);
    puVar3 = FUN_00443250(local_40,puVar4,puVar3);
    uVar1 = puVar3[1];
    _Source = (wchar_t *)*puVar3;
    if ((uint)param_1[2] <= uVar1) {
      if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      uVar2 = uVar1 + 0x20 & 0xffffffe0;
      param_1[2] = uVar2;
      pvVar5 = _malloc(uVar2 * 2);
      *param_1 = (int)pvVar5;
    }
    _wcsncpy((wchar_t *)*param_1,_Source,uVar1);
    param_1[1] = uVar1;
    *(undefined2 *)(*param_1 + uVar1 * 2) = 0;
    if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
    if (10 < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_80[0]);
    }
    if (10 < local_58) break;
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    local_84 = local_84 + 1;
    uVar1 = param_2[1];
    uVar2 = FUN_0055d250(param_1,(ushort *)*param_2,0,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_60[0]);
}


//// FUNCTION FUN_00569b90 @ 00569b90 ////

void __cdecl FUN_00569b90(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (((param_2[1] != 9) && (param_2[1] != 7)) ||
     (uVar4 = FUN_00413450(param_2,"#",0,1), uVar4 != 0)) {
    *param_1 = -1;
    return;
  }
  piVar5 = (int *)0x0;
  cVar2 = *(char *)(*param_2 + 1);
  iVar3 = *param_2;
  while (cVar2 != '\0') {
    piVar5 = (int *)((int)piVar5 * 0x10);
    if ((cVar2 < '0') || ('9' < cVar2)) {
      if ((cVar2 < 'a') || ('f' < cVar2)) {
        if ((cVar2 < 'A') || ('F' < cVar2)) break;
        piVar5 = (int *)((int)piVar5 + cVar2 + -0x37);
      }
      else {
        piVar5 = (int *)((int)piVar5 + cVar2 + -0x57);
      }
    }
    else {
      piVar5 = (int *)((int)piVar5 + cVar2 + -0x30);
    }
    cVar2 = *(char *)(iVar3 + 2);
    iVar3 = iVar3 + 1;
  }
  piVar1 = param_2 + 1;
  param_2 = piVar5;
  if (*piVar1 == 7) {
    param_2 = (int *)CONCAT13(0xff,(int3)piVar5);
  }
  *param_1 = (int)param_2;
  return;
}


//// FUNCTION FUN_00569c30 @ 00569c30 ////

undefined4 * __cdecl FUN_00569c30(undefined4 *param_1,float param_2)

{
  size_t sVar1;
  char *local_60;
  uint local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  local_60 = local_54;
  local_54[0] = '\0';
  local_5c = 0;
  local_58 = 0x14;
  sVar1 = _sprintf(local_40,"%.2f",(double)param_2);
  FUN_004073f0(&local_60,local_40,sVar1);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_60,local_5c);
  if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  return param_1;
}


//// FUNCTION FUN_00569cc0 @ 00569cc0 ////

undefined4 * __cdecl FUN_00569cc0(undefined4 *param_1,float param_2)

{
  size_t sVar1;
  wchar_t *local_a4;
  uint local_a0;
  uint local_9c;
  wchar_t local_98 [10];
  undefined4 local_84;
  wchar_t local_80 [64];
  
  local_a4 = local_98;
  local_84 = 0;
  local_98[0] = L'\0';
  local_a0 = 0;
  local_9c = 10;
  sVar1 = _swprintf(local_80,0xd18f84,SUB84((double)param_2,0));
  FUN_0040cae0(&local_a4,local_80,sVar1);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_a4,local_a0);
  if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
    _free(local_a4);
  }
  return param_1;
}


//// FUNCTION FUN_00569d60 @ 00569d60 ////

undefined4 * __cdecl FUN_00569d60(undefined4 *param_1,undefined4 param_2)

{
  size_t sVar1;
  char *local_60;
  uint local_5c;
  uint local_58;
  char local_54 [20];
  char local_40 [64];
  
  local_60 = local_54;
  local_54[0] = '\0';
  local_5c = 0;
  local_58 = 0x14;
  sVar1 = _sprintf(local_40,(char *)&param_2_00d1b93c,param_2);
  FUN_004073f0(&local_60,local_40,sVar1);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_60,local_5c);
  if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  return param_1;
}


//// FUNCTION FUN_00569df0 @ 00569df0 ////

undefined4 * __cdecl FUN_00569df0(undefined4 *param_1,wchar_t *param_2)

{
  size_t sVar1;
  wchar_t *local_a4;
  uint local_a0;
  uint local_9c;
  wchar_t local_98 [10];
  undefined4 local_84;
  wchar_t local_80 [64];
  
  local_a4 = local_98;
  local_84 = 0;
  local_98[0] = L'\0';
  local_a0 = 0;
  local_9c = 10;
  sVar1 = _swprintf(local_80,0xd18f7c,param_2);
  FUN_0040cae0(&local_a4,local_80,sVar1);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_a4,local_a0);
  if (10 < local_9c) {
                    /* WARNING: Subroutine does not return */
    _free(local_a4);
  }
  return param_1;
}


//// FUNCTION FUN_00569e90 @ 00569e90 ////

undefined4 * __cdecl FUN_00569e90(undefined4 *param_1,int param_2)

{
  size_t sVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  if (0 < param_2) {
    piVar2 = &DAT_00d243c4;
    pwVar3 = L"M";
    do {
      if (*piVar2 <= param_2) {
        do {
          sVar1 = FUN_00ace02d(pwVar3);
          FUN_0040cae0(&local_20,pwVar3,sVar1);
          param_2 = param_2 - *piVar2;
        } while (*piVar2 <= param_2);
      }
      pwVar3 = pwVar3 + 3;
      piVar2 = piVar2 + 1;
    } while (0 < param_2);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_20,local_1c);
  if (local_18 < 0xb) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20);
}


//// FUNCTION FUN_00569f40 @ 00569f40 ////

undefined4 * __cdecl FUN_00569f40(undefined4 *param_1,float *param_2)

{
  size_t sVar1;
  char *local_a4;
  uint local_a0;
  uint local_9c;
  char local_98 [20];
  undefined4 local_84;
  char local_80 [64];
  char local_40 [64];
  
  local_a4 = local_98;
  local_84 = 0;
  local_98[0] = '\0';
  local_a0 = 0;
  local_9c = 0x14;
  sVar1 = _sprintf(local_80,"%.2f",(double)*param_2);
  FUN_004073f0(&local_a4,local_80,sVar1);
  FUN_004073f0(&local_a4,", ",2);
  sVar1 = _sprintf(local_40,"%.2f",(double)param_2[1]);
  FUN_004073f0(&local_a4,local_40,sVar1);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_a4,local_a0);
  if (0x14 < local_9c) {
                    /* WARNING: Subroutine does not return */
    _free(local_a4);
  }
  return param_1;
}


//// FUNCTION FUN_0056a020 @ 0056a020 ////

undefined4 * __cdecl FUN_0056a020(undefined4 *param_1,float *param_2)

{
  size_t sVar1;
  char *local_e4;
  uint local_e0;
  uint local_dc;
  char local_d8 [20];
  undefined4 local_c4;
  char local_c0 [64];
  char local_80 [64];
  char local_40 [64];
  
  local_e4 = local_d8;
  local_c4 = 0;
  local_d8[0] = '\0';
  local_e0 = 0;
  local_dc = 0x14;
  sVar1 = _sprintf(local_c0,"%.2f",(double)*param_2);
  FUN_004073f0(&local_e4,local_c0,sVar1);
  FUN_004073f0(&local_e4,", ",2);
  sVar1 = _sprintf(local_80,"%.2f",(double)param_2[1]);
  FUN_004073f0(&local_e4,local_80,sVar1);
  FUN_004073f0(&local_e4,", ",2);
  sVar1 = _sprintf(local_40,"%.2f",(double)param_2[2]);
  FUN_004073f0(&local_e4,local_40,sVar1);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_e4,local_e0);
  if (0x14 < local_dc) {
                    /* WARNING: Subroutine does not return */
    _free(local_e4);
  }
  return param_1;
}


//// FUNCTION FUN_0056a140 @ 0056a140 ////

void __cdecl FUN_0056a140(void *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_0054e6b0(param_1,&DAT_00d24090,0,2);
  if (uVar1 == 0xffffffff) {
    FUN_004015d0(param_1,"",0);
    return;
  }
  iVar2 = FUN_00555ad0(param_1,&DAT_00d24090,0xffffffff,2);
  if ((-1 < (int)uVar1) && ((int)uVar1 <= iVar2)) {
    puVar3 = FUN_00430770(param_1,local_20,uVar1,(iVar2 - uVar1) + 1);
    FUN_004015d0(param_1,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  return;
}


//// FUNCTION FUN_0056a1d0 @ 0056a1d0 ////

void __cdecl FUN_0056a1d0(int *param_1)

{
  char *_Source;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint _Size;
  void *pvVar4;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_00448220(param_1,&DAT_00d24090,0,2);
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    puVar2 = FUN_00430770(param_1,local_20,uVar1 + 1,0xffffffff);
    puVar3 = FUN_00430770(param_1,local_40,0,uVar1);
    puVar2 = FUN_0047aee0(local_60,puVar3,puVar2);
    uVar1 = puVar2[1];
    _Source = (char *)*puVar2;
    if ((uint)param_1[2] <= uVar1) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = uVar1 + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar4 = _malloc(_Size);
      *param_1 = (int)pvVar4;
    }
    _strncpy((char *)*param_1,_Source,uVar1);
    param_1[1] = uVar1;
    *(undefined1 *)(uVar1 + *param_1) = 0;
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
    if (0x14 < local_18) break;
    uVar1 = FUN_00448220(param_1,&DAT_00d24090,0,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_0056a2e0 @ 0056a2e0 ////

void __cdecl FUN_0056a2e0(void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_00448220(param_1,&DAT_00d24480,0,2);
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return;
    }
    puVar2 = FUN_00430770(param_1,local_20,0,uVar1);
    FUN_00acf917((LPCSTR)*puVar2);
    if (0x14 < local_18) break;
    uVar1 = FUN_00448220(param_1,&DAT_00d24480,uVar1 + 1,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_0056ab80 @ 0056ab80 ////

int __cdecl FUN_0056ab80(char *param_1,uint param_2,uint param_3)

{
  uint _Count;
  char *_Source;
  uint uVar1;
  undefined4 *puVar2;
  uint _Size;
  int local_24;
  void *local_20 [2];
  uint local_18;
  
  local_24 = 0;
  _Size = param_3;
  while( true ) {
    uVar1 = FUN_00413450(&param_1,",",0,1);
    puVar2 = FUN_00430770(&param_1,local_20,uVar1 + 1,0xffffffff);
    _Count = puVar2[1];
    _Source = (char *)*puVar2;
    if (_Size <= _Count) {
      if (0x14 < _Size) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3 = _Size;
      param_1 = _malloc(_Size);
    }
    _strncpy(param_1,_Source,_Count);
    param_1[_Count] = '\0';
    param_2 = _Count;
    if (0x14 < local_18) break;
    local_24 = local_24 + 1;
    if (uVar1 == 0xffffffff) {
      if (0x14 < _Size) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      return local_24;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_0056ac50 @ 0056ac50 ////

undefined4 * __cdecl FUN_0056ac50(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char *local_40;
  uint local_3c;
  uint local_38;
  char local_34 [20];
  void *local_20 [2];
  uint local_18;
  
  local_40 = local_34;
  local_34[0] = '\0';
  local_3c = 0;
  local_38 = 0x14;
  if (param_2[1] != 0) {
    uVar1 = FUN_00413450(param_2,",",0,1);
    if (uVar1 == 0xffffffff) {
      FUN_004015d0(&local_40,(char *)*param_2,param_2[1]);
      param_2[1] = 0;
      *(undefined1 *)*param_2 = 0;
    }
    else {
      puVar2 = FUN_00430770(param_2,local_20,0,uVar1);
      FUN_004015d0(&local_40,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
      puVar2 = FUN_00430770(param_2,local_20,uVar1 + 1,0xffffffff);
      FUN_004015d0(param_2,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
    FUN_0056a1d0((int *)&local_40);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_40,local_3c);
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  return param_1;
}


//// FUNCTION FUN_0056ad60 @ 0056ad60 ////

int __cdecl FUN_0056ad60(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  char cVar1;
  uint3 uVar3;
  char *pcVar2;
  uint3 extraout_var;
  uint uVar4;
  undefined1 uVar5;
  char *pcVar6;
  char *local_20;
  uint local_1c;
  uint local_18;
  char local_14 [20];
  
  pcVar6 = (char *)*param_1;
  cVar1 = *pcVar6;
  uVar3 = (uint3)((uint)param_1 >> 8);
  uVar5 = 0;
  if (cVar1 != '\0') {
    do {
      while (cVar1 == ' ') {
        pcVar2 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar2;
      }
      pcVar2 = (char *)__strnicmp(pcVar6,(char *)*param_2,param_2[1]);
      if (pcVar2 == (char *)0x0) {
        for (pcVar2 = pcVar6 + param_2[1]; (*pcVar2 == ' ' || (*pcVar2 == '=')); pcVar2 = pcVar2 + 1
            ) {
        }
        if (pcVar6 + param_2[1] < pcVar2) {
          cVar1 = *pcVar2;
          uVar5 = 1;
          pcVar6 = pcVar2;
          if (cVar1 != '\0') goto LAB_0056ae00;
          goto LAB_0056ae0d;
        }
      }
      cVar1 = *pcVar6;
      uVar3 = (uint3)((uint)pcVar2 >> 8);
      uVar5 = 0;
      if (cVar1 == '\0') break;
      while (cVar1 != ',') {
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
        if (cVar1 == '\0') {
          return (uint)uVar3 << 8;
        }
      }
      if (*pcVar6 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
      if (cVar1 == '\0') {
        return (uint)uVar3 << 8;
      }
    } while( true );
  }
  goto LAB_0056ae7d;
  while( true ) {
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
LAB_0056ae00:
    if (cVar1 == ',') break;
  }
LAB_0056ae0d:
  uVar4 = (int)pcVar6 - (int)pcVar2;
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  if (uVar4 == 0xffffffff) {
    pcVar6 = pcVar2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar6 - (int)(pcVar2 + 1);
  }
  FUN_004015d0(&local_20,pcVar2,uVar4);
  FUN_004015d0(param_3,local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  FUN_0056a140(param_3);
  uVar3 = extraout_var;
LAB_0056ae7d:
  return CONCAT31(uVar3,uVar5);
}


//// FUNCTION FUN_0056ae90 @ 0056ae90 ////

uint __cdecl FUN_0056ae90(undefined4 *param_1,undefined4 *param_2,float *param_3)

{
  char cVar1;
  int iVar2;
  int extraout_EAX;
  double dVar3;
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  iVar2 = FUN_0056ad60(param_1,param_2,&local_20);
  cVar1 = (char)iVar2;
  if (cVar1 != '\0') {
    dVar3 = _atof(local_20);
    *param_3 = (float)dVar3;
    iVar2 = extraout_EAX;
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
}


//// FUNCTION FUN_0056af00 @ 0056af00 ////

uint __cdecl FUN_0056af00(undefined4 *param_1,undefined4 *param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  iVar2 = FUN_0056ad60(param_1,param_2,&local_20);
  cVar1 = (char)iVar2;
  if (cVar1 != '\0') {
    iVar2 = _atol(local_20);
    *param_3 = iVar2;
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
}


//// FUNCTION FUN_0056af70 @ 0056af70 ////

undefined1 __cdecl FUN_0056af70(int *param_1,undefined4 *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  char *_Str1;
  char *pcVar8;
  char *local_60;
  uint local_5c;
  uint local_58;
  char local_54 [20];
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  _Str1 = (char *)*param_1;
  cVar1 = *_Str1;
  if (cVar1 == '\0') {
    return 0;
  }
  do {
    while (cVar1 == ' ') {
      pcVar3 = _Str1 + 1;
      _Str1 = _Str1 + 1;
      cVar1 = *pcVar3;
    }
    iVar2 = __strnicmp(_Str1,(char *)*param_2,param_2[1]);
    if (iVar2 == 0) {
      for (pcVar3 = _Str1 + param_2[1]; (*pcVar3 == ' ' || (*pcVar3 == '=')); pcVar3 = pcVar3 + 1) {
      }
      if (_Str1 + param_2[1] < pcVar3) {
        cVar1 = *pcVar3;
        pcVar8 = pcVar3;
        while ((cVar1 != '\0' && (cVar1 != ','))) {
          pcVar7 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar7;
        }
        uVar6 = (int)pcVar8 - (int)pcVar3;
        local_60 = local_54;
        local_54[0] = '\0';
        local_5c = 0;
        local_58 = 0x14;
        if (uVar6 == 0xffffffff) {
          pcVar7 = pcVar3;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar6 = (int)pcVar7 - (int)(pcVar3 + 1);
        }
        FUN_004015d0(&local_60,pcVar3,uVar6);
        FUN_004015d0(param_3,local_60,local_5c);
        if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
          _free(local_60);
        }
        if (*pcVar8 == ',') {
          pcVar8 = pcVar8 + 1;
        }
        puVar4 = FUN_00430770(param_1,local_20,(int)pcVar8 - *param_1,0xffffffff);
        puVar5 = FUN_00430770(param_1,local_40,0,(int)_Str1 - *param_1);
        puVar4 = FUN_0047aee0(&local_60,puVar5,puVar4);
        FUN_004015d0(param_1,(char *)*puVar4,puVar4[1]);
        if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
          _free(local_60);
        }
        if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
          _free(local_40[0]);
        }
        if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
          _free(local_20[0]);
        }
        iVar2 = FUN_00555ad0(param_1,&DAT_00d245f0,0xffffffff,2);
        if (iVar2 != -1) {
          puVar4 = FUN_00430770(param_1,local_20,0,iVar2 + 1);
          FUN_004015d0(param_1,(char *)*puVar4,puVar4[1]);
          if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
            _free(local_20[0]);
          }
        }
        FUN_0056a140(param_3);
        return 1;
      }
    }
    cVar1 = *_Str1;
    while( true ) {
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar1 == ',') break;
      cVar1 = _Str1[1];
      _Str1 = _Str1 + 1;
    }
    if (*_Str1 == '\0') {
      return 0;
    }
    cVar1 = _Str1[1];
    _Str1 = _Str1 + 1;
    if (cVar1 == '\0') {
      return 0;
    }
  } while( true );
}


//// FUNCTION FUN_0056b170 @ 0056b170 ////

bool __cdecl FUN_0056b170(void *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00413450(param_1,(char *)*param_2,0,param_2[1]);
  return uVar1 != 0xffffffff;
}


//// FUNCTION FUN_0056b1a0 @ 0056b1a0 ////

int * __cdecl FUN_0056b1a0(int *param_1,void *param_2,int param_3)

{
  char *pcVar1;
  uint _Count;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  char *local_40;
  uint local_3c;
  uint local_38;
  char local_34 [20];
  void *local_20 [2];
  uint local_18;
  
  iVar6 = 0;
  local_40 = local_34;
  local_34[0] = '\0';
  local_3c = 0;
  local_38 = 0x14;
  _strncpy(local_40,"",0);
  local_3c = 0;
  *local_40 = '\0';
  if (*(int *)((int)param_2 + 4) == 0) goto LAB_0056b3ad;
  uVar5 = 0;
  uVar2 = 0;
  if (param_3 < 0) {
LAB_0056b31f:
    puVar3 = FUN_00430770(param_2,local_20,uVar5,uVar2 - uVar5);
    uVar5 = puVar3[1];
    pcVar1 = (char *)*puVar3;
    if (local_38 <= uVar5) {
      if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
        _free(local_40);
      }
      local_38 = uVar5 + 0x20 & 0xffffffe0;
      local_40 = _malloc(local_38);
    }
    _strncpy(local_40,pcVar1,uVar5);
    local_40[uVar5] = '\0';
    local_3c = uVar5;
  }
  else {
    do {
      _Count = local_3c;
      pcVar1 = local_40;
      if (uVar2 == 0xffffffff) {
        *param_1 = (int)(param_1 + 3);
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[1] = 0;
        param_1[2] = 0x14;
        if (0x13 < local_3c) {
          uVar5 = local_3c + 0x20 & 0xffffffe0;
          param_1[2] = uVar5;
          pvVar4 = _malloc(uVar5);
          *param_1 = (int)pvVar4;
        }
        _strncpy((char *)*param_1,pcVar1,_Count);
        param_1[1] = _Count;
        *(undefined1 *)(_Count + *param_1) = 0;
        if (local_38 < 0x15) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_40);
      }
      if (iVar6 != 0) {
        uVar5 = uVar2 + 1;
      }
      uVar2 = FUN_00413450(param_2,",",uVar5,1);
      iVar6 = iVar6 + 1;
    } while (iVar6 <= param_3);
    if (uVar2 != 0xffffffff) goto LAB_0056b31f;
    puVar3 = FUN_00430770(param_2,local_20,uVar5,0xffffffff);
    uVar5 = puVar3[1];
    pcVar1 = (char *)*puVar3;
    if (local_38 <= uVar5) {
      if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
        _free(local_40);
      }
      local_38 = uVar5 + 0x20 & 0xffffffe0;
      local_40 = _malloc(local_38);
    }
    _strncpy(local_40,pcVar1,uVar5);
    local_40[uVar5] = '\0';
    local_3c = uVar5;
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  FUN_0056a140(&local_40);
LAB_0056b3ad:
  uVar5 = local_3c;
  pcVar1 = local_40;
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0x14;
  if (0x13 < local_3c) {
    uVar2 = local_3c + 0x20 & 0xffffffe0;
    param_1[2] = uVar2;
    pvVar4 = _malloc(uVar2);
    *param_1 = (int)pvVar4;
  }
  _strncpy((char *)*param_1,pcVar1,uVar5);
  param_1[1] = uVar5;
  *(undefined1 *)(uVar5 + *param_1) = 0;
  if (local_38 < 0x15) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}


//// FUNCTION FUN_0056b420 @ 0056b420 ////

int __cdecl FUN_0056b420(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_2;
  iVar3 = 0;
  for (uVar2 = FUN_00568330(&param_1,(ushort *)&param_2,0,1); uVar2 != 0xffffffff;
      uVar2 = FUN_00568330(&param_1,(ushort *)&param_2,uVar2 + 1,1)) {
    iVar3 = iVar3 + 1;
    param_2 = uVar1;
  }
  return iVar3;
}


//// FUNCTION FUN_0056b470 @ 0056b470 ////

undefined4 * __cdecl FUN_0056b470(undefined4 *param_1,undefined4 *param_2)

{
  wchar_t *_Source;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  wchar_t *local_d0;
  uint local_cc;
  uint local_c8;
  wchar_t local_c4 [10];
  undefined2 *local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined2 local_a4 [10];
  undefined4 local_90;
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
  puStack_8 = &LAB_00cb1816;
  local_c = ExceptionList;
  uVar5 = param_2[1];
  local_90 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&DAT_00d245f8);
  uVar1 = FUN_0055d250(param_2,(ushort *)&DAT_00d245f8,0,uVar1);
  if (uVar1 != 0xffffffff) {
    uVar5 = uVar1;
  }
  local_d0 = local_c4;
  local_c4[0] = L'\0';
  local_cc = 0;
  local_c8 = 10;
  FUN_004036d0(&local_d0,(wchar_t *)*param_2,param_2[1]);
  local_b0 = local_a4;
  local_4 = 0;
  local_a4[0] = 0;
  local_ac = 0;
  local_a8 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_b0,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = FUN_009b4250();
  if (((((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 5)) || ((iVar2 == 6 || (iVar2 == 10)))) ||
     (iVar2 == 0xb)) {
    uVar1 = FUN_00ace02d((short *)&DAT_00d184c4);
    FUN_004036d0(&local_b0,L" ",uVar1);
  }
  else if (((iVar2 == 0) || (iVar2 == 0xc)) ||
          ((iVar2 == 0xd || ((iVar2 == 0xe || (iVar2 == 0xf)))))) {
    FUN_00403e90(&local_b0,L",");
  }
  else {
    FUN_00403e90(&local_b0,L".");
  }
  while( true ) {
    do {
      if (uVar5 < 4) {
        *param_1 = param_1 + 3;
        *(undefined2 *)(param_1 + 3) = 0;
        param_1[1] = 0;
        param_1[2] = 10;
        FUN_004036d0(param_1,local_d0,local_cc);
        if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        if (local_c8 < 0xb) {
          ExceptionList = local_c;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_d0);
      }
      uVar5 = uVar5 - 3;
    } while (uVar5 == 0);
    puVar3 = FUN_004211c0(&local_d0,local_2c,uVar5,0xffffffff);
    puVar4 = FUN_004211c0(&local_d0,local_6c,0,uVar5);
    puVar4 = FUN_00443250(local_4c,puVar4,&local_b0);
    puVar3 = FUN_00443250(local_8c,puVar4,puVar3);
    uVar1 = puVar3[1];
    _Source = (wchar_t *)*puVar3;
    if (local_c8 <= uVar1) {
      if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
        _free(local_d0);
      }
      local_c8 = uVar1 + 0x20 & 0xffffffe0;
      local_d0 = _malloc(local_c8 * 2);
    }
    _wcsncpy(local_d0,_Source,uVar1);
    local_d0[uVar1] = L'\0';
    local_cc = uVar1;
    if (10 < local_84) break;
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_8c[0]);
}


//// FUNCTION FUN_0056b730 @ 0056b730 ////

void __cdecl FUN_0056b730(undefined4 *param_1,undefined4 param_2,short *param_3)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  wchar_t *local_a0;
  size_t local_9c;
  uint local_98;
  wchar_t local_94 [10];
  wchar_t *local_80;
  size_t local_7c;
  uint local_78;
  ushort *local_60;
  undefined4 local_5c;
  uint local_58;
  ushort local_54 [10];
  undefined2 *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined2 local_34 [10];
  wchar_t *local_20;
  size_t local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_40 = local_34;
  local_34[0] = 0;
  local_3c = 0;
  local_38 = 10;
  FUN_004036d0(&local_40,(wchar_t *)*param_1,param_1[1]);
  FUN_00568cb0(&param_3,&local_a0);
  local_60 = local_54;
  local_54[0] = 0;
  local_5c = 0;
  local_58 = 10;
  FUN_004036d0(&local_60,local_a0,local_9c);
  if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  FUN_0055d180((int *)&local_40);
  FUN_0055d180((int *)&local_60);
  puVar1 = local_60;
  uVar2 = FUN_00ace02d((short *)local_60);
  uVar2 = FUN_0055d250(&local_40,puVar1,0,uVar2);
  if (uVar2 != 0xffffffff) {
    puVar3 = FUN_004211c0(param_1,&local_80,0,uVar2);
    local_a0 = local_94;
    local_94[0] = L'\0';
    local_9c = 0;
    local_98 = 10;
    FUN_004036d0(&local_a0,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_80);
    }
    if (param_3 == (short *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00ace02d(param_3);
    }
    puVar3 = FUN_004211c0(param_1,&local_80,iVar4 + uVar2,0xffffffff);
    local_20 = local_14;
    local_14[0] = L'\0';
    local_1c = 0;
    local_18 = 10;
    FUN_004036d0(&local_20,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_80);
    }
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar2);
    FUN_0040cae0(param_1,local_a0,local_9c);
    FUN_00568cb0(&param_2,&local_80);
    FUN_0040cae0(param_1,local_80,local_7c);
    if (10 < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_80);
    }
    FUN_0040cae0(param_1,local_20,local_1c);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0);
    }
  }
  if (10 < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  return;
}


//// FUNCTION FUN_0056b9d0 @ 0056b9d0 ////

void __fastcall FUN_0056b9d0(int param_1)

{
  if (7 < *(uint *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 7;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_0056ba00 @ 0056ba00 ////

int * __fastcall FUN_0056ba00(int *param_1)

{
  FUN_00568590(param_1);
  return param_1;
}


//// FUNCTION FUN_0056bab0 @ 0056bab0 ////

void * __thiscall FUN_0056bab0(void *this,void *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(uint *)((int)param_1 + 0x14) < param_2) {
    FUN_00acbc74();
  }
  uVar4 = *(int *)((int)param_1 + 0x14) - param_2;
  if (param_3 < uVar4) {
    uVar4 = param_3;
  }
  if (this == param_1) {
    FUN_00568600(this,uVar4 + param_2,0xffffffff);
    FUN_00568600(this,0,param_2);
    return this;
  }
  if (0x7ffffffe < uVar4) {
    FUN_00acbcb4();
  }
  if (*(uint *)((int)this + 0x18) < uVar4) {
    FUN_00568f00(this,uVar4);
  }
  else if (uVar4 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (7 < *(uint *)((int)this + 0x18)) {
      **(undefined2 **)((int)this + 4) = 0;
      return this;
    }
    *(undefined2 *)((int)this + 4) = 0;
    return this;
  }
  if (uVar4 != 0) {
    if (*(uint *)((int)param_1 + 0x18) < 8) {
      iVar3 = (int)param_1 + 4;
    }
    else {
      iVar3 = *(int *)((int)param_1 + 4);
    }
    if (*(uint *)((int)this + 0x18) < 8) {
      puVar6 = (undefined4 *)((int)this + 4);
    }
    else {
      puVar6 = *(undefined4 **)((int)this + 4);
    }
    uVar1 = uVar4 * 2;
    puVar5 = (undefined4 *)(iVar3 + param_2 * 2);
    for (uVar2 = (uVar4 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)((int)this + 0x14) = uVar4;
    if (7 < *(uint *)((int)this + 0x18)) {
      *(undefined2 *)(uVar1 + *(int *)((int)this + 4)) = 0;
      return this;
    }
    *(undefined2 *)((int)this + uVar1 + 4) = 0;
  }
  return this;
}


//// FUNCTION FUN_0056bbc0 @ 0056bbc0 ////

int * __cdecl FUN_0056bbc0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  wchar_t *_Source;
  uint uVar1;
  void *pvVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)(param_3 + 3);
      *(undefined2 *)(param_3 + 3) = 0;
      param_3[1] = 0;
      param_3[2] = 10;
      _Count = param_1[1];
      _Source = (wchar_t *)*param_1;
      if (9 < _Count) {
        uVar1 = _Count + 0x20 >> 5;
        param_3[2] = uVar1 << 5;
        pvVar2 = _malloc(uVar1 * 0x40);
        *param_3 = (int)pvVar2;
      }
      _wcsncpy((wchar_t *)*param_3,_Source,_Count);
      param_3[1] = _Count;
      *(undefined2 *)(*param_3 + _Count * 2) = 0;
    }
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_0056bc50 @ 0056bc50 ////

void __cdecl FUN_0056bc50(undefined4 param_1,char param_2,void *param_3,void *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  char *local_20;
  uint local_1c;
  uint local_18;
  
  uVar1 = FUN_00568dd0(&param_1,&param_2,0,1);
  if (uVar1 == 0xffffffff) {
    FUN_0048f010(&param_1,&local_20);
    FUN_004015d0(param_3,local_20,local_1c);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    FUN_004015d0(param_4,"",0);
  }
  else {
    puVar2 = FUN_00568c00(&param_1,&local_20,0,uVar1);
    FUN_004015d0(param_3,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    puVar2 = FUN_00568c00(&param_1,&local_20,uVar1 + 1,0xffffffff);
    FUN_004015d0(param_4,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  return;
}


//// FUNCTION FUN_0056bd30 @ 0056bd30 ////

int __cdecl FUN_0056bd30(undefined4 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = param_2;
  iVar3 = 0;
  for (uVar2 = FUN_00568dd0(&param_1,&param_2,0,1); uVar2 != 0xffffffff;
      uVar2 = FUN_00568dd0(&param_1,&param_2,uVar2 + 1,1)) {
    iVar3 = iVar3 + 1;
    param_2 = cVar1;
  }
  return iVar3;
}


//// FUNCTION Game_InitUserDataFolders @ 0056bd80 ////

undefined4 Game_InitUserDataFolders(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  char *local_3e8;
  uint local_3e4;
  uint local_3e0;
  char local_3dc [20];
  char *local_3c8;
  undefined4 local_3c4;
  uint local_3c0;
  char local_3bc [20];
  void *local_3a8 [2];
  uint local_3a0;
  wchar_t *local_388 [2];
  uint local_380;
  undefined4 local_368 [18];
  int local_320;
  int local_31c;
  char cStack_315;
  char local_314 [256];
  CHAR local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1857;
  local_c = ExceptionList;
  uVar8 = 0;
  ExceptionList = &local_c;
  GetModuleFileNameA((HMODULE)0x0,local_214,0x101);
  __splitpath(local_214,local_314,local_110,(char *)0x0,(char *)0x0);
  pcVar2 = local_110;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)local_110;
  pcVar2 = &cStack_315;
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = local_110;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_00ad0ec3(local_314);
  FUN_00569040();
  FUN_00567ff0(local_388);
  local_4 = 0;
  FUN_009ad040(local_3a8,local_388[0]);
  FUN_004073f0(local_3a8,"\\The Movies\\",0xc);
  FUN_0056a2e0(local_3a8);
  puVar4 = FUN_004312e0(&local_3e8,local_3a8,"Movies\\");
  FUN_0056a2e0(puVar4);
  if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e8);
  }
  puVar4 = FUN_004312e0(&local_3e8,local_3a8,"Starmaker\\");
  FUN_0056a2e0(puVar4);
  if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e8);
  }
  puVar4 = FUN_004312e0(&local_3e8,local_3a8,"CustomCostumes\\");
  FUN_0056a2e0(puVar4);
  if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e8);
  }
  puVar4 = FUN_004312e0(&local_3e8,local_3a8,"Saved Games\\");
  FUN_0056a2e0(puVar4);
  if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e8);
  }
  puVar4 = FUN_004312e0(&local_3e8,local_3a8,"Radio Music\\");
  FUN_0056a2e0(puVar4);
  if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e8);
  }
  puVar4 = FUN_004312e0(&local_3e8,local_3a8,"Movie Music\\");
  FUN_0056a2e0(puVar4);
  if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e8);
  }
  puVar4 = FUN_004312e0(&local_3e8,local_3a8,"Movie Sounds\\");
  FUN_0056a2e0(puVar4);
  if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e8);
  }
  puVar4 = FUN_004312e0(&local_3e8,local_3a8,"Graphics\\Logos\\");
  FUN_0056a2e0(puVar4);
  if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e8);
  }
  local_3c8 = local_3bc;
  local_3bc[0] = '\0';
  local_3c4 = 0;
  local_3c0 = 0x14;
  _strncpy(local_3c8,"",0);
  local_3c4 = 0;
  *local_3c8 = '\0';
  local_4._0_1_ = 2;
  uVar5 = FUN_009d4750(&local_3c8);
  if ((char)uVar5 != '\0') {
    uVar3 = FUN_004302c0(&local_3c8,&DAT_00d1835c,0xffffffff,1);
    if (uVar3 != 0xffffffff) {
      puVar4 = FUN_00430770(&local_3c8,&local_3e8,0,uVar3);
      FUN_004015d0(&local_3c8,(char *)*puVar4,puVar4[1]);
      if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
        _free(local_3e8);
      }
      FUN_004073f0(&local_3c8,"\\The Movies\\",0xc);
      FUN_0056a2e0(&local_3c8);
      FUN_009c89a0(local_368);
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_009ca9d0(local_368,"TMP*.wav",local_3c8,(undefined1 *)0x1);
      for (; (local_320 != 0 && (uVar8 < (uint)(local_31c - local_320 >> 2))); uVar8 = uVar8 + 1) {
        pcVar2 = *(char **)(local_320 + uVar8 * 4);
        local_3e8 = local_3dc;
        local_3dc[0] = '\0';
        local_3e4 = 0;
        local_3e0 = 0x14;
        pcVar7 = pcVar2;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar7 - (int)(pcVar2 + 1);
        if (0x13 < uVar3) {
          local_3e0 = uVar3 + 0x20 & 0xffffffe0;
          local_3e8 = _malloc(local_3e0);
        }
        _strncpy(local_3e8,pcVar2,uVar3);
        local_3e8[uVar3] = '\0';
        local_4 = CONCAT31(local_4._1_3_,4);
        local_3e4 = uVar3;
        FUN_009d3620(&local_3e8);
        if (0x14 < local_3e0) {
                    /* WARNING: Subroutine does not return */
          _free(local_3e8);
        }
      }
      local_4._0_1_ = 2;
      FUN_009c8560(local_368);
    }
  }
  if (0x14 < local_3c0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c8);
  }
  if (0x14 < local_3a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_3a8[0]);
  }
  if (10 < local_380) {
                    /* WARNING: Subroutine does not return */
    _free(local_388[0]);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(local_3a0 >> 8),1);
}


//// FUNCTION FUN_0056c1f0 @ 0056c1f0 ////

void * __thiscall FUN_0056c1f0(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 < 8) {
    puVar2 = (undefined4 *)((int)this + 4);
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 4);
  }
  if (puVar2 <= param_1) {
    puVar2 = (undefined4 *)((int)this + 4);
    puVar4 = puVar2;
    if (7 < uVar1) {
      puVar4 = (undefined4 *)*puVar2;
    }
    if (param_1 < (undefined4 *)((int)puVar4 + *(int *)((int)this + 0x14) * 2)) {
      if (7 < uVar1) {
        puVar2 = (undefined4 *)*puVar2;
      }
      pvVar3 = FUN_0056bab0(this,this,(int)param_1 - (int)puVar2 >> 1,param_2);
      return pvVar3;
    }
  }
  if (0x7ffffffe < param_2) {
    FUN_00acbcb4();
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_00568f00(this,param_2);
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (*(uint *)((int)this + 0x18) < 8) {
      *(undefined2 *)((int)this + 4) = 0;
      return this;
    }
    **(undefined2 **)((int)this + 4) = 0;
    return this;
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 8) {
      puVar2 = (undefined4 *)((int)this + 4);
    }
    else {
      puVar2 = *(undefined4 **)((int)this + 4);
    }
    uVar1 = param_2 * 2;
    for (uVar5 = (param_2 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(uint *)((int)this + 0x14) = param_2;
    if (7 < *(uint *)((int)this + 0x18)) {
      *(undefined2 *)(uVar1 + *(int *)((int)this + 4)) = 0;
      return this;
    }
    *(undefined2 *)((int)this + uVar1 + 4) = 0;
  }
  return this;
}


//// FUNCTION FUN_0056c2f0 @ 0056c2f0 ////

void * __thiscall
FUN_0056c2f0(void *this,uint param_1,uint param_2,void *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined2 *puVar2;
  int *piVar3;
  int *piVar4;
  void *_Dst;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *_Src;
  size_t _Size;
  
  if ((*(uint *)((int)this + 0x14) < param_1) || (*(uint *)((int)param_3 + 0x14) < param_4)) {
    FUN_00acbc74();
  }
  uVar1 = *(int *)((int)this + 0x14) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar1 = *(int *)((int)param_3 + 0x14) - param_4;
  if (uVar1 < param_5) {
    param_5 = uVar1;
  }
  if (-param_5 - 1 <= *(int *)((int)this + 0x14) - param_2) {
    FUN_00acbcb4();
  }
  uVar1 = *(uint *)((int)this + 0x14);
  uVar7 = (uVar1 - param_2) + param_5;
  iVar5 = (uVar1 - param_1) - param_2;
  if (uVar1 < uVar7) {
    if (0x7ffffffe < uVar7) {
      FUN_00acbcb4();
    }
    if (*(uint *)((int)this + 0x18) < uVar7) {
      FUN_00568f00(this,uVar7);
    }
    else if (uVar7 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 8) {
        puVar2 = (undefined2 *)((int)this + 4);
      }
      else {
        puVar2 = *(undefined2 **)((int)this + 4);
      }
      *puVar2 = 0;
    }
  }
  piVar8 = (int *)((int)this + 4);
  if (this == param_3) {
    if (param_2 < param_5) {
      if (param_1 < param_4) {
        uVar1 = param_1 + param_2;
        if (param_4 < uVar1) {
          piVar4 = piVar8;
          piVar3 = piVar8;
          if (7 < *(uint *)((int)this + 0x18)) {
            piVar4 = (int *)*piVar8;
            piVar3 = (int *)*piVar8;
          }
          _memmove((void *)((int)piVar4 + param_1 * 2),(void *)((int)piVar3 + param_4 * 2),
                   param_2 * 2);
          piVar4 = piVar8;
          piVar3 = piVar8;
          if (7 < *(uint *)((int)this + 0x18)) {
            piVar4 = (int *)*piVar8;
            piVar3 = (int *)*piVar8;
          }
          _memmove((void *)((int)piVar4 + (param_1 + param_5) * 2),(void *)((int)piVar3 + uVar1 * 2)
                   ,iVar5 * 2);
          piVar4 = piVar8;
          piVar3 = piVar8;
          if (7 < *(uint *)((int)this + 0x18)) {
            piVar4 = (int *)*piVar8;
            piVar3 = (int *)*piVar8;
          }
          uVar6 = param_5 - param_2;
          _Src = (void *)((int)piVar3 + (param_4 + param_5) * 2);
          _Dst = (void *)((int)piVar4 + uVar1 * 2);
        }
        else {
          piVar4 = piVar8;
          piVar3 = piVar8;
          if (7 < *(uint *)((int)this + 0x18)) {
            piVar4 = (int *)*piVar8;
            piVar3 = (int *)*piVar8;
          }
          _memmove((void *)((int)piVar4 + (param_1 + param_5) * 2),(void *)((int)piVar3 + uVar1 * 2)
                   ,iVar5 * 2);
          piVar4 = piVar8;
          piVar3 = piVar8;
          if (7 < *(uint *)((int)this + 0x18)) {
            piVar4 = (int *)*piVar8;
            piVar3 = (int *)*piVar8;
          }
          _Src = (void *)((int)piVar3 + ((param_4 - param_2) + param_5) * 2);
          _Dst = (void *)((int)piVar4 + param_1 * 2);
          uVar6 = param_5;
        }
        _Size = uVar6 * 2;
      }
      else {
        piVar4 = piVar8;
        piVar3 = piVar8;
        if (7 < *(uint *)((int)this + 0x18)) {
          piVar4 = (int *)*piVar8;
          piVar3 = (int *)*piVar8;
        }
        _memmove((void *)((int)piVar4 + (param_1 + param_5) * 2),
                 (void *)((int)piVar3 + (param_2 + param_1) * 2),iVar5 * 2);
        if (*(uint *)((int)this + 0x18) < 8) {
          _Size = param_5 * 2;
          _Src = (void *)((int)piVar8 + param_4 * 2);
          _Dst = (void *)((int)piVar8 + param_1 * 2);
        }
        else {
          _Size = param_5 * 2;
          _Src = (void *)(*piVar8 + param_4 * 2);
          _Dst = (void *)(*piVar8 + param_1 * 2);
        }
      }
    }
    else {
      piVar4 = piVar8;
      piVar3 = piVar8;
      if (7 < *(uint *)((int)this + 0x18)) {
        piVar4 = (int *)*piVar8;
        piVar3 = (int *)*piVar8;
      }
      _memmove((void *)((int)piVar4 + param_1 * 2),(void *)((int)piVar3 + param_4 * 2),param_5 * 2);
      piVar4 = piVar8;
      piVar3 = piVar8;
      if (7 < *(uint *)((int)this + 0x18)) {
        piVar4 = (int *)*piVar8;
        piVar3 = (int *)*piVar8;
      }
      _Size = iVar5 * 2;
      _Src = (void *)((int)piVar3 + (param_2 + param_1) * 2);
      _Dst = (void *)((int)piVar4 + (param_1 + param_5) * 2);
    }
    _memmove(_Dst,_Src,_Size);
  }
  else {
    piVar4 = piVar8;
    piVar3 = piVar8;
    if (7 < *(uint *)((int)this + 0x18)) {
      piVar4 = (int *)*piVar8;
      piVar3 = (int *)*piVar8;
    }
    _memmove((void *)((int)piVar4 + (param_1 + param_5) * 2),
             (void *)((int)piVar3 + (param_2 + param_1) * 2),iVar5 * 2);
    if (*(uint *)((int)param_3 + 0x18) < 8) {
      iVar5 = (int)param_3 + 4;
    }
    else {
      iVar5 = *(int *)((int)param_3 + 4);
    }
    piVar3 = piVar8;
    if (7 < *(uint *)((int)this + 0x18)) {
      piVar3 = (int *)*piVar8;
    }
    puVar9 = (undefined4 *)(iVar5 + param_4 * 2);
    puVar10 = (undefined4 *)((int)piVar3 + param_1 * 2);
    for (uVar1 = (param_5 & 0x7fffffff) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar1 = param_5 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  *(uint *)((int)this + 0x14) = uVar7;
  if (7 < *(uint *)((int)this + 0x18)) {
    piVar8 = (int *)*piVar8;
  }
  *(undefined2 *)((int)piVar8 + uVar7 * 2) = 0;
  return this;
}


//// FUNCTION FUN_0056c6b0 @ 0056c6b0 ////

void * __thiscall
FUN_0056c6b0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = param_1;
  uVar6 = *(uint *)((int)this + 0x18);
  if (uVar6 < 8) {
    puVar1 = (undefined4 *)((int)this + 4);
  }
  else {
    puVar1 = *(undefined4 **)((int)this + 4);
  }
  if (puVar1 <= param_3) {
    puVar1 = (undefined4 *)((int)this + 4);
    puVar3 = puVar1;
    if (7 < uVar6) {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (param_3 < (undefined4 *)((int)puVar3 + *(int *)((int)this + 0x14) * 2)) {
      if (7 < uVar6) {
        puVar1 = (undefined4 *)*puVar1;
      }
      pvVar2 = FUN_0056c2f0(this,(uint)param_1,(uint)param_2,this,(int)param_3 - (int)puVar1 >> 1,
                            param_4);
      return pvVar2;
    }
  }
  if (*(undefined4 **)((int)this + 0x14) < param_1) {
    FUN_00acbc74();
  }
  puVar3 = (undefined4 *)(*(int *)((int)this + 0x14) - (int)param_1);
  puVar1 = param_2;
  if (puVar3 < param_2) {
    puVar1 = puVar3;
  }
  if (-param_4 - 1 <= (uint)(*(int *)((int)this + 0x14) - (int)puVar1)) {
    FUN_00acbcb4();
  }
  iVar4 = (*(int *)((int)this + 0x14) - (int)param_1) - (int)puVar1;
  if (param_4 < puVar1) {
    puVar3 = (undefined4 *)((int)this + 4);
    param_2 = puVar3;
    if (7 < *(uint *)((int)this + 0x18)) {
      param_2 = (undefined4 *)*puVar3;
    }
    if (7 < *(uint *)((int)this + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    _memmove((void *)((int)puVar3 + ((int)param_1 + param_4) * 2),
             (void *)((int)param_2 + ((int)param_1 + (int)puVar1) * 2),iVar4 * 2);
  }
  if ((param_4 != 0) || (puVar1 != (undefined4 *)0x0)) {
    uVar6 = (param_4 - (int)puVar1) + *(int *)((int)this + 0x14);
    if (0x7ffffffe < uVar6) {
      FUN_00acbcb4();
    }
    if (*(uint *)((int)this + 0x18) < uVar6) {
      FUN_00568f00(this,uVar6);
    }
    else if (uVar6 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 8) {
        *(undefined2 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined2 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar6 != 0) {
      if (puVar1 < param_4) {
        puVar3 = (undefined4 *)((int)this + 4);
        param_1 = puVar3;
        if (7 < *(uint *)((int)this + 0x18)) {
          param_1 = (undefined4 *)*puVar3;
        }
        if (7 < *(uint *)((int)this + 0x18)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        _memmove((void *)((int)puVar3 + ((int)puVar7 + param_4) * 2),
                 (void *)((int)param_1 + ((int)puVar7 + (int)puVar1) * 2),iVar4 * 2);
      }
      if (*(uint *)((int)this + 0x18) < 8) {
        iVar4 = (int)this + 4;
      }
      else {
        iVar4 = *(int *)((int)this + 4);
      }
      puVar7 = (undefined4 *)(iVar4 + (int)puVar7 * 2);
      for (uVar5 = (param_4 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *param_3;
        param_3 = param_3 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = param_4 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar6;
      if (7 < *(uint *)((int)this + 0x18)) {
        *(undefined2 *)(*(int *)((int)this + 4) + uVar6 * 2) = 0;
        return this;
      }
      *(undefined2 *)((int)this + uVar6 * 2 + 4) = 0;
    }
  }
  return this;
}


//// FUNCTION FUN_0056c910 @ 0056c910 ////

void __cdecl FUN_0056c910(void *param_1,int *param_2,int param_3)

{
  short *psVar1;
  wchar_t *pwVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  size_t sVar6;
  undefined4 *puVar7;
  wchar_t *****pppppwVar8;
  undefined1 local_68 [4];
  wchar_t ****local_64 [4];
  undefined4 local_54;
  uint local_50;
  wchar_t *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  wchar_t local_40 [10];
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb1888;
  local_c = ExceptionList;
  local_50 = 7;
  local_54 = 0;
  local_64[0] = (wchar_t ****)((uint)local_64[0] & 0xffff0000);
  psVar1 = (short *)*param_2;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar4 = FUN_00ace02d(psVar1);
  FUN_0056c1f0(local_68,(undefined4 *)psVar1,uVar4);
  param_2 = (int *)**(int **)(param_3 + 4);
  if (param_2 != *(int **)(param_3 + 4)) {
    do {
      piVar3 = param_2;
      local_4c = local_40;
      local_40[0] = L'\0';
      local_48 = (undefined4 *)0x0;
      local_44 = (undefined4 *)&lpType_0000000a;
      puVar5 = (undefined4 *)FUN_00ace02d((short *)&DAT_00d2468c);
      if (local_44 <= puVar5) {
        if (&lpType_0000000a < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        local_44 = (undefined4 *)((uint)(puVar5 + 8) & 0xffffffe0);
        local_4c = _malloc((int)local_44 * 2);
      }
      _wcsncpy(local_4c,L"%",(size_t)puVar5);
      local_4c[(int)puVar5] = L'\0';
      local_48 = puVar5;
      FUN_0040cae0(&local_4c,(wchar_t *)piVar3[3],piVar3[4]);
      sVar6 = FUN_00ace02d((short *)&DAT_00d2468c);
      FUN_0040cae0(&local_4c,L"%",sVar6);
      local_2c = local_20;
      local_20[0] = L'\0';
      local_28 = 0;
      local_24 = 10;
      uVar4 = piVar3[0xc];
      pwVar2 = (wchar_t *)piVar3[0xb];
      if (9 < uVar4) {
        local_24 = uVar4 + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24 * 2);
      }
      _wcsncpy(local_2c,pwVar2,uVar4);
      pwVar2 = local_4c;
      local_2c[uVar4] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,2);
      local_28 = uVar4;
      uVar4 = FUN_00ace02d(local_4c);
      uVar4 = FUN_00568400(local_68,(ushort *)pwVar2,0,uVar4);
      pwVar2 = local_4c;
      puVar5 = local_48;
      while (local_4c = pwVar2, local_48 = puVar5, uVar4 != 0xffffffff) {
        uVar4 = FUN_00ace02d(pwVar2);
        puVar7 = (undefined4 *)FUN_00568400(local_68,(ushort *)pwVar2,0,uVar4);
        pwVar2 = local_2c;
        uVar4 = FUN_00ace02d(local_2c);
        FUN_0056c6b0(local_68,puVar7,puVar5,(undefined4 *)pwVar2,uVar4);
        pwVar2 = local_4c;
        uVar4 = FUN_00ace02d(local_4c);
        uVar4 = FUN_00568400(local_68,(ushort *)pwVar2,0,uVar4);
        pwVar2 = local_4c;
        puVar5 = local_48;
      }
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_4 = local_4 & 0xffffff00;
      if (&lpType_0000000a < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(pwVar2);
      }
      FUN_00568590((int *)&param_2);
    } while (param_2 != *(int **)(param_3 + 4));
  }
  pppppwVar8 = (wchar_t *****)local_64[0];
  if (local_50 < 8) {
    pppppwVar8 = local_64;
  }
  sVar6 = FUN_00ace02d((short *)pppppwVar8);
  FUN_0040cae0(param_1,(wchar_t *)pppppwVar8,sVar6);
  if (7 < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_64[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0056cbb0 @ 0056cbb0 ////

void __thiscall FUN_0056cbb0(void *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb18a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x7ffffff < param_1) {
    ExceptionList = &local_10;
    param_1 = FUN_00481230();
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 5;
  }
  if (uVar2 < param_1) {
    piVar1 = operator_new(param_1 * 0x20);
    local_8 = 0;
    FUN_0056bbc0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),piVar1);
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      FUN_00481090(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(int **)((int)this + 0xc) = piVar1 + param_1 * 8;
    *(int **)((int)this + 8) = piVar1;
    *(int **)((int)this + 4) = piVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0056cc90 @ 0056cc90 ////

void __cdecl FUN_0056cc90(undefined4 param_1,undefined4 param_2,void *param_3)

{
  char *_Memory;
  void *this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  void *local_4c;
  int local_48;
  uint local_44;
  char *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb18c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0056bd30(param_1,(char)param_2);
  this = param_3;
  piVar2 = *(int **)((int)param_3 + 8);
  if (*(int **)((int)param_3 + 4) != piVar2) {
    piVar2 = FUN_004bee00(piVar2,piVar2,*(int **)((int)param_3 + 4));
    FUN_00405fe0(piVar2,*(undefined4 **)((int)this + 8));
    *(int **)((int)this + 8) = piVar2;
  }
  FUN_00556c20(this,iVar1 + 1);
  param_3 = (void *)CONCAT31(param_3._1_3_,(undefined1)param_2);
  uVar5 = 0;
  uVar3 = FUN_00568dd0(&param_1,(char *)&param_3,0,1);
  while( true ) {
    if (uVar3 == 0xffffffff) {
      FUN_00568c00(&param_1,&local_4c,uVar5,0xffffffff);
      local_4 = 2;
      if (local_48 != 0) {
        FUN_0043a2d0(this,&local_4c);
      }
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      ExceptionList = local_c;
      return;
    }
    if ((int)uVar5 < (int)uVar3) {
      puVar4 = FUN_00568c00(&param_1,local_2c,uVar5,uVar3 - uVar5);
      iVar1 = *(int *)((int)this + 4);
      local_4 = 0;
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 5) <=
          (uint)(*(int *)((int)this + 8) - iVar1 >> 5))) {
        FUN_00439fd0(this,*(int **)((int)this + 8),1,puVar4);
        _Memory = local_2c[0];
        uVar5 = local_24;
      }
      else {
        piVar2 = *(int **)((int)this + 8);
        FUN_00439ea0(piVar2,1,puVar4);
        *(int **)((int)this + 8) = piVar2 + 8;
        _Memory = local_2c[0];
        uVar5 = local_24;
      }
    }
    else {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"",0);
      local_68 = 0;
      *local_6c = '\0';
      iVar1 = *(int *)((int)this + 4);
      local_4 = 1;
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 5) <=
          (uint)(*(int *)((int)this + 8) - iVar1 >> 5))) {
        FUN_00439fd0(this,*(int **)((int)this + 8),1,&local_6c);
        _Memory = local_6c;
        uVar5 = local_64;
      }
      else {
        piVar2 = *(int **)((int)this + 8);
        FUN_00439ea0(piVar2,1,&local_6c);
        *(int **)((int)this + 8) = piVar2 + 8;
        _Memory = local_6c;
        uVar5 = local_64;
      }
    }
    if (0x14 < uVar5) break;
    uVar5 = uVar3 + 1;
    param_3._1_3_ = (undefined3)((uint)param_3 >> 8);
    param_3 = (void *)CONCAT31(param_3._1_3_,(undefined1)param_2);
    uVar3 = FUN_00568dd0(&param_1,(char *)&param_3,uVar5,1);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0056cf00 @ 0056cf00 ////

void __cdecl FUN_0056cf00(undefined4 param_1,void *param_2,void *param_3)

{
  wchar_t *_Memory;
  void *this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  void *local_4c;
  int local_48;
  uint local_44;
  wchar_t *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb18f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0056b420(param_1,param_2);
  this = param_3;
  piVar2 = *(int **)((int)param_3 + 8);
  if (*(int **)((int)param_3 + 4) != piVar2) {
    piVar2 = FUN_0047a030(piVar2,piVar2,*(int **)((int)param_3 + 4));
    FUN_00481090(piVar2,*(undefined4 **)((int)this + 8));
    *(int **)((int)this + 8) = piVar2;
  }
  FUN_0056cbb0(this,iVar1 + 1);
  param_3 = param_2;
  uVar6 = 0;
  uVar3 = FUN_00568330(&param_1,(ushort *)&param_3,0,1);
  while( true ) {
    if (uVar3 == 0xffffffff) {
      FUN_00568cf0(&param_1,&local_4c,uVar6,0xffffffff);
      local_4 = 2;
      if (local_48 != 0) {
        FUN_00482460(this,&local_4c);
      }
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      ExceptionList = local_c;
      return;
    }
    if ((int)uVar6 < (int)uVar3) {
      puVar4 = FUN_00568cf0(&param_1,local_2c,uVar6,uVar3 - uVar6);
      iVar1 = *(int *)((int)this + 4);
      local_4 = 0;
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 5) <=
          (uint)(*(int *)((int)this + 8) - iVar1 >> 5))) {
        FUN_00481700(this,*(int **)((int)this + 8),1,puVar4);
        _Memory = local_2c[0];
        uVar6 = local_24;
      }
      else {
        piVar2 = *(int **)((int)this + 8);
        FUN_0047b760(piVar2,1,puVar4);
        *(int **)((int)this + 8) = piVar2 + 8;
        _Memory = local_2c[0];
        uVar6 = local_24;
      }
    }
    else {
      local_6c = local_60;
      local_60[0] = L'\0';
      local_68 = 0;
      local_64 = 10;
      uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
      if (local_64 <= uVar6) {
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        uVar5 = uVar6 + 0x20 >> 5;
        local_64 = uVar5 << 5;
        local_6c = _malloc(uVar5 * 0x40);
      }
      _wcsncpy(local_6c,(wchar_t *)&lpCaption_00d16918,uVar6);
      local_6c[uVar6] = L'\0';
      iVar1 = *(int *)((int)this + 4);
      local_4 = 1;
      local_68 = uVar6;
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 5) <=
          (uint)(*(int *)((int)this + 8) - iVar1 >> 5))) {
        FUN_00481700(this,*(int **)((int)this + 8),1,&local_6c);
        _Memory = local_6c;
        uVar6 = local_64;
      }
      else {
        piVar2 = *(int **)((int)this + 8);
        FUN_0047b760(piVar2,1,&local_6c);
        *(int **)((int)this + 8) = piVar2 + 8;
        _Memory = local_6c;
        uVar6 = local_64;
      }
    }
    if (10 < uVar6) break;
    uVar6 = uVar3 + 1;
    param_3 = param_2;
    uVar3 = FUN_00568330(&param_1,(ushort *)&param_3,uVar6,1);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0056d1f0 @ 0056d1f0 ////

void __fastcall FUN_0056d1f0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0056d240 @ 0056d240 ////

int * __thiscall FUN_0056d240(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0056d270 @ 0056d270 ////

int * __thiscall FUN_0056d270(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0056d320 @ 0056d320 ////

void __fastcall FUN_0056d320(int param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar2 = *(int *)(param_1 + 0xbc);
    if (*(undefined4 **)(iVar2 + 0x7c0) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar2 + 0x7c0) = *(undefined4 *)(iVar2 + 0x7bc);
    }
    if (*(int *)(iVar2 + 0x7bc) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0x7bc) + 4) = *(undefined4 *)(iVar2 + 0x7c0);
    }
    *(undefined4 *)(iVar2 + 0x7bc) = 0;
    *(undefined4 *)(iVar2 + 0x7c0) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x70) + 4))();
  *(undefined4 *)(param_1 + 0x84) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x70))();
  piVar1 = *(int **)(param_1 + 0xbc);
  if (piVar1[0x206] == 0) {
    (**(code **)(*piVar1 + 0x1a4))(0);
    iVar2 = *(int *)(param_1 + 0xbc);
    piVar1 = (int *)(iVar2 + 0x784);
    if (*(int **)(iVar2 + 0x788) != (int *)0x0) {
      **(int **)(iVar2 + 0x788) = *piVar1;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(iVar2 + 0x788);
    }
    *piVar1 = 0;
    *(undefined4 *)(iVar2 + 0x788) = 0;
    FUN_0059aed0(*(int *)(param_1 + 0xbc));
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x10c))();
    FUN_0059c810(*(int *)(param_1 + 0xbc));
    this = *(void **)(param_1 + 0xbc);
    iVar2 = FUN_00577900((int)this);
    FUN_0057b4b0(this,iVar2);
    CStaff_ApplyJobCostumeAndPlacement(*(int **)(param_1 + 0xbc),0);
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x224))(0,0);
    return;
  }
  FUN_0059aed0((int)piVar1);
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x104))("assist");
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x104))("followboss");
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x104))("panic");
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x224))((*(int **)(param_1 + 0xbc))[0x206],0);
  return;
}


//// FUNCTION FUN_0056d530 @ 0056d530 ////

void __fastcall FUN_0056d530(int *param_1)

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
  puStack_8 = &LAB_00cb1918;
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


//// FUNCTION FUN_0056d600 @ 0056d600 ////

void __fastcall FUN_0056d600(int param_1)

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
  puStack_8 = &LAB_00cb1950;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Assistant.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x42;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x38));
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
  uVar3 = FUN_0098b490("PersonToAssist");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x38));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Assistant.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x43;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x70));
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
  uVar3 = FUN_0098b490("PParent");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x70));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Assistant.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x44;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("(int&)(MyType)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x50),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Assistant.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x45;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("MyIndex");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x54),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0056d9c0 @ 0056d9c0 ////

void FUN_0056d9c0(void)

{
  undefined4 *puVar1;
  void *this;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  undefined4 *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1973;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00508d50();
  local_54 = operator_new(0xd8);
  local_4 = 0;
  if (local_54 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00559fb0(local_54);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104ce38[1])();
  DAT_0104ce4c = puVar1;
  (*(code *)*DAT_0104ce38)();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"assistants",10);
  uStack_28 = 10;
  pcStack_2c[10] = '\0';
  local_4 = 1;
  FUN_0055be10(DAT_0104ce4c,&pcStack_2c,'\0');
  local_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  this = FUN_0097c450("ai_assistant_pos.flm",0,(undefined4 *)0x0,0);
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  fVar5 = FUN_004012c0(0.0);
  uStack_44 = uStack_50;
  uStack_40 = uStack_4c;
  uStack_3c = uStack_48;
  FUN_00978350(this,&uStack_44,(float)fVar5,0);
  uVar2 = 0;
  pfVar3 = (float *)&DAT_0104ce50;
  do {
    local_54 = (undefined4 *)0x0;
    FUN_00976de0(this,uVar2 + 1,-1,&fStack_38,(float *)&local_54);
    *pfVar3 = fStack_38;
    pfVar3[1] = fStack_34;
    pfVar4 = pfVar3 + 3;
    (&DAT_0104ce20)[uVar2] = local_54;
    pfVar3[2] = fStack_30;
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar4;
  } while ((int)pfVar4 < 0x104ce98);
  if (this != (void *)0x0) {
    FUN_00971df0(this);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0056db80 @ 0056db80 ////

undefined4 * __thiscall FUN_0056db80(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *local_6c;
  uint local_68;
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
  puStack_8 = &LAB_00cb1990;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xa4) != 0) {
    ExceptionList = &local_c;
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"ai_mobilephone.flm",0x12);
    ExceptionList = local_c;
    return param_1;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_6c,"",0);
  local_68 = 0;
  *local_6c = '\0';
  local_4 = 0;
  if (DAT_0104ce4c != (void *)0x0) {
    uVar1 = FUN_00558a50(DAT_0104ce4c,&PTR_DAT_00e52f60 + *(int *)((int)this + 0x88) * 8,
                         (undefined4 *)0x1);
    if ((char)uVar1 != '\0') {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"idle",4);
      local_48 = 4;
      local_4c[4] = '\0';
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar2 = FUN_005584e0(DAT_0104ce4c,local_2c,&local_4c);
      FUN_004015d0(&local_6c,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_6c,local_68);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0056dd30 @ 0056dd30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_0056dd30(int param_1)

{
  undefined4 uVar1;
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
  puStack_8 = &LAB_00cb19a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0104ce18 & 1) == 0) {
    DAT_0104ce18 = DAT_0104ce18 | 1;
    DAT_0104cdf8 = &DAT_0104ce04;
    DAT_0104ce04 = 0;
    _DAT_0104cdfc = 0;
    DAT_0104ce00 = 0x14;
    ExceptionList = &local_c;
    _strncpy(&DAT_0104ce04,"error",5);
    _DAT_0104cdfc = 5;
    DAT_0104cdf8[5] = 0;
    _atexit(FUN_00d12080);
  }
  uVar1 = FUN_00558a50(DAT_0104ce4c,&PTR_DAT_00e52f60 + *(int *)(param_1 + 0x88) * 8,
                       (undefined4 *)0x1);
  if ((char)uVar1 != '\0') {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"costume",7);
    local_48 = 7;
    local_4c[7] = '\0';
    local_4 = 0;
    puVar2 = FUN_005584e0(DAT_0104ce4c,local_2c,&local_4c);
    FUN_004015d0(&DAT_0104cdf8,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return DAT_0104cdf8;
}


//// FUNCTION FUN_0056de80 @ 0056de80 ////

uint __thiscall FUN_0056de80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)((int)this + 0x84);
  iVar2 = *(int *)((int)pvVar3 + 0xa50);
  iVar1 = (int)pvVar3 + 0xa5c;
  while( true ) {
    if ((iVar2 == iVar1) || (pvVar3 = *(void **)(*(int *)(iVar2 + 8) + 0x7b8), pvVar3 == this)) {
      return CONCAT31((int3)((uint)pvVar3 >> 8),1);
    }
    if ((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x8c) == param_1)) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  return (uint)pvVar3 & 0xffffff00;
}


//// FUNCTION FUN_0056ded0 @ 0056ded0 ////

void __thiscall FUN_0056ded0(void *this,int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb19db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x88) = param_1;
  if ((((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) || ((param_1 == 7 || (param_1 == 4))))
  {
    uVar2 = FUN_0043b560();
    if ((0x7bb < (int)uVar2) && (*(int *)((int)this + 0xbc) != 0)) {
      puVar1 = operator_new(0x43c);
      uStack_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_00448680(puVar1);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*(int *)((int)this + 0x90) + 4))();
      *(undefined4 **)((int)this + 0xa4) = puVar1;
      (*(code *)**(undefined4 **)((int)this + 0x90))();
      pcStack_2c = acStack_20;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x14;
      _strncpy(pcStack_2c,"",0);
      uStack_28 = 0;
      *pcStack_2c = '\0';
      pcStack_4c = acStack_40;
      uStack_4 = 1;
      acStack_40[0] = '\0';
      uStack_48 = 0;
      uStack_44 = 0x14;
      _strncpy(pcStack_4c,"mobilephone",0xb);
      uStack_48 = 0xb;
      pcStack_4c[0xb] = '\0';
      uStack_4 = CONCAT31(uStack_4._1_3_,2);
      FUN_00448b10(*(void **)((int)this + 0xa4),&pcStack_4c,&pcStack_2c);
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_4c);
      }
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      (**(code **)(**(int **)((int)this + 0xa4) + 0x24))(*(undefined4 *)((int)this + 0xbc));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0056e0b0 @ 0056e0b0 ////

void __fastcall FUN_0056e0b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d24748;
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


//// FUNCTION FUN_0056e130 @ 0056e130 ////

void FUN_0056e130(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if ((int **)DAT_0104cea0 != &DAT_0104ceac) {
    do {
      piVar4 = DAT_0104ceac;
      puVar2 = (undefined4 *)DAT_0104ceac[2];
      piVar1 = DAT_0104ceac + 1;
      if ((int *)DAT_0104ceac[1] != (int *)0x0) {
        *(int *)DAT_0104ceac[1] = *DAT_0104ceac;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while ((int **)DAT_0104cea0 != &DAT_0104ceac);
  }
  return;
}


//// FUNCTION FUN_0056e190 @ 0056e190 ////

void FUN_0056e190(void)

{
  FUN_00508d60();
  FUN_0056e130();
  if (DAT_0104ce4c != (undefined4 *)0x0) {
    (**(code **)*DAT_0104ce4c)(1);
  }
  (*(code *)DAT_0104ce38[1])();
  DAT_0104ce4c = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0056e1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104ce38)();
  return;
}


//// FUNCTION FUN_0056e1e0 @ 0056e1e0 ////

void __fastcall FUN_0056e1e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  char **ppcVar7;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb1a79;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d247e4;
  param_1[0xe] = &PTR_LAB_00d247c4;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  if (param_1[0x21] != 0) {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x40;
    local_6c = _malloc(0x40);
    _strncpy(local_6c,"PIP_ASSIGN_ENTOURAGE_STAR_DECREASED",0x23);
    local_68 = 0x23;
    local_6c[0x23] = '\0';
    local_4._0_1_ = 6;
    FUN_00590dc0((void *)param_1[0x21],1,&local_6c,0);
    local_4._0_1_ = 5;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    iVar2 = (**(code **)(*(int *)param_1[0x21] + 0x27c))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)param_1[0x21] + 0x27c))();
      iVar2 = FUN_00472a30(iVar2);
      if ((iVar2 != 0) && (DAT_010583e4 == '\0')) {
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        _strncpy(local_6c,"star",4);
        local_68 = 4;
        local_6c[4] = '\0';
        local_4._0_1_ = 7;
        FUN_00558a50(DAT_00f88624,&local_6c,(undefined4 *)0x1);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x20;
        pcStack_2c = _malloc(0x20);
        _strncpy(pcStack_2c,"grudge_takeassistant",0x14);
        uStack_28 = 0x14;
        pcStack_2c[0x14] = '\0';
        pcStack_4c = acStack_40;
        acStack_40[0] = '\0';
        uStack_48 = 0;
        uStack_44 = 0x20;
        pcStack_4c = _malloc(0x20);
        _strncpy(pcStack_4c,"forgivetakeassistant",0x14);
        uStack_48 = 0x14;
        pcStack_4c[0x14] = '\0';
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x20;
        local_6c = _malloc(0x20);
        _strncpy(local_6c,"disliketakeassistant",0x14);
        local_68 = 0x14;
        local_6c[0x14] = '\0';
        pvVar3 = DAT_00f88624;
        piVar1 = (int *)param_1[0x21];
        ppcVar7 = &pcStack_2c;
        local_4._0_1_ = 10;
        fVar4 = FUN_00558610(DAT_00f88624,&pcStack_4c,0.0);
        fVar6 = (float)fVar4;
        fVar4 = FUN_00558610(pvVar3,&local_6c,0.0);
        fVar5 = (float)fVar4;
        iVar2 = (**(code **)(*piVar1 + 0x27c))();
        pvVar3 = (void *)FUN_00472a30(iVar2);
        CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppcVar7);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_4c);
        }
        local_4._0_1_ = 5;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
    }
  }
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 0x104))();
    (**(code **)(*(int *)param_1[0x2f] + 0x104))();
    (**(code **)(*(int *)param_1[0x2f] + 0x104))();
    iVar2 = param_1[0x2f];
    if (*(undefined4 **)(iVar2 + 0x7c0) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar2 + 0x7c0) = *(undefined4 *)(iVar2 + 0x7bc);
    }
    if (*(int *)(iVar2 + 0x7bc) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0x7bc) + 4) = *(undefined4 *)(iVar2 + 0x7c0);
    }
    *(undefined4 *)(iVar2 + 0x7bc) = 0;
    *(undefined4 *)(iVar2 + 0x7c0) = 0;
  }
  iVar2 = param_1[0x29];
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x110);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined4 **)(iVar2 + 200))();
    }
    (**(code **)(param_1[0x24] + 4))();
    param_1[0x29] = 0;
    (**(code **)param_1[0x24])();
  }
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19] = param_1[0x18];
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x19];
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x2a] = &PTR_FUN_00d18c4c;
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
  param_1[0x24] = &PTR_LAB_00d24748;
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
  param_1[0x1c] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e] = param_1[0x1d];
  }
  if (param_1[0x1d] != 0) {
    *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1e];
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e] = param_1[0x1d];
  }
  if (param_1[0x1d] != 0) {
    *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1e];
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19] = param_1[0x18];
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x19];
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0056e710 @ 0056e710 ////

void __thiscall FUN_0056e710(void *this,int *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1acf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x70) + 4))();
  *(int **)((int)this + 0x84) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x70))();
  if (*(int *)((int)this + 0x84) != 0) {
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x40;
    pcStack_2c = _malloc(0x40);
    _strncpy(pcStack_2c,"PIP_ASSIGN_ENTOURAGE_STAR_INCREASED",0x23);
    uStack_28 = 0x23;
    pcStack_2c[0x23] = '\0';
    uStack_4 = 0;
    FUN_00590dc0(*(void **)((int)this + 0x84),1,&pcStack_2c,0);
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
  }
  bVar1 = FUN_0059c5e0(*(int *)((int)this + 0xbc));
  if (!bVar1) {
    pvVar2 = operator_new(0x144);
    uStack_4 = 1;
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar6 = *(undefined4 *)((int)this + 0xbc);
      iVar3 = FUN_00598cd0(param_1);
      puVar4 = DesireFollowBoss_Constructor(pvVar2,iVar3,uVar6);
    }
    uStack_4 = 0xffffffff;
    TMCharacter_AddResidentDesire(*(void **)((int)this + 0xbc),(int)puVar4);
  }
  bVar1 = FUN_0059c5e0(*(int *)((int)this + 0xbc));
  if (!bVar1) {
    pvVar2 = operator_new(0x140);
    uStack_4 = 2;
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = DesireAssist_Constructor(pvVar2,*(int **)((int)this + 0xbc));
    }
    uStack_4 = 0xffffffff;
    TMCharacter_AddResidentDesire(*(void **)((int)this + 0xbc),(int)puVar4);
  }
  if (*(int *)((int)this + 0xa4) == 0) {
    bVar1 = FUN_0059c5e0(*(int *)((int)this + 0xbc));
    if (!bVar1) {
      pvVar2 = operator_new(0x140);
      uStack_4 = 3;
      if (pvVar2 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = DesirePanic_Constructor(pvVar2,*(undefined4 *)((int)this + 0xbc));
      }
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(*(void **)((int)this + 0xbc),(int)puVar4);
    }
    bVar1 = FUN_0059c5e0(*(int *)((int)this + 0xbc));
    if (!bVar1) {
      pvVar2 = operator_new(0x128);
      uStack_4 = 4;
      if (pvVar2 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = DesireGawp_Constructor(pvVar2,*(int *)((int)this + 0xbc));
      }
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(*(void **)((int)this + 0xbc),(int)puVar4);
    }
  }
  bVar1 = FUN_0059c5e0(*(int *)((int)this + 0xbc));
  if (!bVar1) {
    pvVar2 = operator_new(0x128);
    uStack_4 = 5;
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = DesirePlay_Constructor(pvVar2,*(int *)((int)this + 0xbc));
    }
    uStack_4 = 0xffffffff;
    TMCharacter_AddResidentDesire(*(void **)((int)this + 0xbc),(int)puVar4);
  }
  iVar3 = 0;
  do {
    uVar5 = FUN_0056de80(this,iVar3);
    if ((char)uVar5 != '\0') {
      *(int *)((int)this + 0x8c) = iVar3;
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  *(undefined4 *)((int)this + 0x8c) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0056ea00 @ 0056ea00 ////

undefined4 __fastcall FUN_0056ea00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    FUN_0056e710((void *)(param_1 + -0x38),*(int **)(param_1 + 0x4c));
    uVar1 = FUN_0056ded0((void *)(param_1 + -0x38),*(int *)(param_1 + 0x50));
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_0056ea30 @ 0056ea30 ////

undefined4 * __thiscall FUN_0056ea30(void *this,byte param_1)

{
  FUN_0056e1e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0056ea50 @ 0056ea50 ////

void __fastcall FUN_0056ea50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d24814;
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


//// FUNCTION FUN_0056eaa0 @ 0056eaa0 ////

undefined4 * __thiscall FUN_0056eaa0(void *this,byte param_1)

{
  FUN_0056ea50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0056eb10 @ 0056eb10 ////

void FUN_0056eb10(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104ce98;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104ce98;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_0056eb70 @ 0056eb70 ////

void __fastcall FUN_0056eb70(int *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *this;
  char **ppcVar7;
  float fVar8;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1ae8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((int *)param_1[0x21] != (int *)0x0) {
    ExceptionList = &pvStack_c;
    cVar1 = (**(code **)(*(int *)param_1[0x21] + 0x13c))();
    cVar2 = (**(code **)(*(int *)param_1[0x21] + 0x1dc))();
    iVar4 = FUN_005773c0(param_1[0x21]);
    iVar5 = GetPlayerStudio();
    if ((iVar4 == iVar5) && (cVar2 == '\0' && cVar1 != '\0')) goto LAB_0056ec5b;
  }
  bVar3 = FUN_0059c510(param_1[0x2f]);
  if (!bVar3) {
    iVar4 = param_1[0x29];
    if (iVar4 != 0) {
      piVar6 = (int *)(iVar4 + 0x110);
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (*(code *)**(undefined4 **)(iVar4 + 200))();
      }
      piVar6 = param_1 + 0x24;
      (**(code **)(param_1[0x24] + 4))();
      param_1[0x29] = 0;
      (**(code **)*piVar6)();
      (**(code **)(*piVar6 + 4))();
      param_1[0x29] = 0;
      (**(code **)*piVar6)();
    }
    (**(code **)(*param_1 + 4))();
    ExceptionList = pvStack_c;
    return;
  }
LAB_0056ec5b:
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"play",4);
  uStack_28 = 4;
  pcStack_2c[4] = '\0';
  ppcVar7 = &pcStack_2c;
  uStack_4 = 0;
  iVar4 = FUN_00598b60(param_1[0x2f]);
  piVar6 = FUN_00442050((void *)(iVar4 + 0x60),ppcVar7);
  *piVar6 = 0x3dcccccd;
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  if (((param_1[0x29] == 0) || (param_1[0x21] == 0)) ||
     (cVar1 = FUN_005855e0(param_1[0x21]), cVar1 == '\0')) {
    fVar8 = 0.2;
  }
  else {
    fVar8 = 1.0;
  }
  this = (void *)FUN_0059c530(param_1[0x2f]);
  FUN_00842f90(this,fVar8);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0056ed40 @ 0056ed40 ////

void __fastcall FUN_0056ed40(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d24814;
  return;
}


//// FUNCTION FUN_0056eda0 @ 0056eda0 ////

undefined4 * __fastcall FUN_0056eda0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1b6d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d247e4;
  param_1[0xe] = &PTR_LAB_00d247c4;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = param_1 + 0x1c;
  param_1[0x1c] = &PTR_FUN_00d16954;
  param_1[0x21] = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = param_1 + 0x24;
  param_1[0x24] = &PTR_LAB_00d24748;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_1 + 0x2a;
  param_1[0x2a] = &PTR_FUN_00d18c4c;
  param_1[0x2f] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x1a] = param_1;
  FUN_00acdb9e(0xe52f40);
  iVar1 = FUN_0097dda0();
  param_1[0x1b] = iVar1;
  if (s___AV__InList_VCAssistantData_TM__00e52f18[0x27] != '\0') {
    iVar1 = 0x60;
    pcVar3 = "AssistantLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe52f40);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VCAssistantData_TM__00e52f18[0x27] = '\0';
  }
  local_2c = local_20;
  param_1[0x23] = 0xffffffff;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"staff",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0056ef20 @ 0056ef20 ////

undefined4 * __cdecl FUN_0056ef20(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  float10 fVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  char **ppcVar13;
  undefined4 *puStack_90;
  char *pcStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  char acStack_80 [20];
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1be5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0xc0);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0056eda0(puVar2);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0x1e9] + 4))();
  param_1[0x1ee] = (int)puVar2;
  (**(code **)param_1[0x1e9])();
  (**(code **)(puVar2[0x2a] + 4))();
  puVar2[0x2f] = param_1;
  (**(code **)puVar2[0x2a])();
  iVar3 = FUN_0058f710((int)param_2);
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  uVar4 = FUN_00558a50(DAT_0104ce4c,&PTR_DAT_00e52f60 + iVar3 * 8,(undefined4 *)0x1);
  if ((char)uVar4 != '\0') {
    pcStack_8c = acStack_80;
    acStack_80[0] = '\0';
    uStack_88 = 0;
    uStack_84 = 0x14;
    _strncpy(pcStack_8c,"costume",7);
    uStack_88 = 7;
    pcStack_8c[7] = '\0';
    local_4._0_1_ = 2;
    puVar5 = FUN_005584e0(DAT_0104ce4c,&pcStack_4c,&pcStack_8c);
    FUN_004015d0(&puStack_2c,(char *)*puVar5,puVar5[1]);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    local_4._0_1_ = 1;
    if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_8c);
    }
  }
  iVar6 = FUN_00430120(&puStack_2c);
  if (iVar6 == 3) {
    puVar2[0x22] = 1;
    uVar10 = FUN_0043b560();
    if ((0x7bb < (int)uVar10) && (puVar2[0x2f] != 0)) {
      puVar5 = operator_new(0x43c);
      local_4._0_1_ = 3;
      if (puVar5 == (undefined4 *)0x0) {
        puStack_90 = (undefined4 *)0x0;
      }
      else {
        puStack_90 = FUN_00448680(puVar5);
      }
      local_4._0_1_ = 1;
      (**(code **)(puVar2[0x24] + 4))();
      puVar2[0x29] = puStack_90;
      (**(code **)puVar2[0x24])();
      pcStack_6c = acStack_60;
      acStack_60[0] = '\0';
      uStack_68 = 0;
      uStack_64 = 0x14;
      _strncpy(pcStack_6c,"",0);
      uStack_68 = 0;
      *pcStack_6c = '\0';
      pcStack_8c = acStack_80;
      acStack_80[0] = '\0';
      uStack_88 = 0;
      uStack_84 = 0x14;
      _strncpy(pcStack_8c,"mobilephone",0xb);
      uStack_88 = 0xb;
      pcStack_8c[0xb] = '\0';
      local_4._0_1_ = 5;
      FUN_00448b10((void *)puVar2[0x29],&pcStack_8c,&pcStack_6c);
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_8c);
      }
      local_4._0_1_ = 1;
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_6c);
      }
      (**(code **)(*(int *)puVar2[0x29] + 0x24))(puVar2[0x2f]);
    }
  }
  else {
    FUN_0056ded0(puVar2,iVar3);
    (**(code **)(*param_1 + 0xe0))(iVar6);
  }
  puVar2[0x19] = &DAT_0104ceac;
  puVar2[0x18] = DAT_0104ceac;
  *(undefined4 **)((int)DAT_0104ceac + 4) = puVar2 + 0x18;
  piVar7 = param_1 + 0x1ef;
  piVar1 = param_2 + 0x297;
  DAT_0104ceac = puVar2 + 0x18;
  param_1[0x1f0] = (int)piVar1;
  *piVar7 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar7;
  *piVar1 = (int)piVar7;
  FUN_0056e710(puVar2,param_2);
  iVar3 = (**(code **)(*param_2 + 0x27c))();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*param_2 + 0x27c))();
    iVar3 = FUN_00472a30(iVar3);
    if ((iVar3 != 0) && (DAT_010583e4 == '\0')) {
      pcStack_6c = acStack_60;
      acStack_60[0] = '\0';
      uStack_68 = 0;
      uStack_64 = 0x14;
      _strncpy(pcStack_6c,"star",4);
      uStack_68 = 4;
      pcStack_6c[4] = '\0';
      local_4._0_1_ = 6;
      FUN_00558a50(DAT_00f88624,&pcStack_6c,(undefined4 *)0x1);
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_6c);
      }
      pcStack_4c = acStack_40;
      acStack_40[0] = '\0';
      uStack_48 = 0;
      uStack_44 = 0x14;
      _strncpy(pcStack_4c,"grudge_addassistant",0x13);
      uStack_48 = 0x13;
      pcStack_4c[0x13] = '\0';
      pcStack_8c = acStack_80;
      acStack_80[0] = '\0';
      uStack_88 = 0;
      uStack_84 = 0x14;
      _strncpy(pcStack_8c,"forgetaddassistant",0x12);
      uStack_88 = 0x12;
      pcStack_8c[0x12] = '\0';
      pcStack_6c = acStack_60;
      acStack_60[0] = '\0';
      uStack_68 = 0;
      uStack_64 = 0x14;
      _strncpy(pcStack_6c,"likeaddassistant",0x10);
      uStack_68 = 0x10;
      pcStack_6c[0x10] = '\0';
      pvVar8 = DAT_00f88624;
      ppcVar13 = &pcStack_4c;
      local_4._0_1_ = 9;
      fVar9 = FUN_00558610(DAT_00f88624,&pcStack_8c,0.0);
      fVar12 = (float)fVar9;
      fVar9 = FUN_00558610(pvVar8,&pcStack_6c,0.0);
      fVar11 = (float)fVar9;
      iVar3 = (**(code **)(*param_2 + 0x27c))();
      pvVar8 = (void *)FUN_00472a30(iVar3);
      CGrudges_AddOrRefreshGrudge(pvVar8,fVar11,fVar12,ppcVar13);
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_6c);
      }
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_8c);
      }
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_4c);
      }
    }
  }
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2c);
  }
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0056f480 @ 0056f480 ////

void __fastcall FUN_0056f480(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0056f4b0 @ 0056f4b0 ////

void FUN_0056f4b0(void)

{
  return;
}


//// FUNCTION FUN_0056f4d0 @ 0056f4d0 ////

void __thiscall FUN_0056f4d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xa8c) = param_1;
  return;
}


//// FUNCTION FUN_0056f4e0 @ 0056f4e0 ////

void __thiscall FUN_0056f4e0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xa88) = param_1;
  return;
}


//// FUNCTION FUN_0056f4f0 @ 0056f4f0 ////

void __thiscall FUN_0056f4f0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xa90) = param_1;
  return;
}


//// FUNCTION FUN_0056f500 @ 0056f500 ////

void __thiscall FUN_0056f500(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xac8) = param_1;
  return;
}


//// FUNCTION FUN_0056f510 @ 0056f510 ////

float * __thiscall FUN_0056f510(void *this,float *param_1)

{
  FUN_004950c0((void *)((int)this + 0xa94),param_1);
  return param_1;
}


//// FUNCTION FUN_0056f530 @ 0056f530 ////

undefined1 __fastcall FUN_0056f530(int param_1)

{
  return *(undefined1 *)(param_1 + 0xac8);
}


//// FUNCTION FUN_0056f5c0 @ 0056f5c0 ////

int * __thiscall FUN_0056f5c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0056f660 @ 0056f660 ////

int __fastcall FUN_0056f660(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


//// FUNCTION CExtra_GetAmbitionCap @ 0056f7a0 ////

void __thiscall CExtra_GetAmbitionCap(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa8c);
  return;
}


//// FUNCTION CExtra_GetAmbitionTarget @ 0056f7b0 ////

void __thiscall CExtra_GetAmbitionTarget(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa88);
  return;
}


//// FUNCTION FUN_0056f7c0 @ 0056f7c0 ////

void __thiscall FUN_0056f7c0(void *this,undefined4 param_1)

{
  *(undefined1 *)((int)this + 0xa80) = 1;
  (**(code **)(*(int *)((int)this + 0xa68) + 4))();
  *(undefined4 *)((int)this + 0xa7c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xa68))();
  return;
}


//// FUNCTION CExtra_GetStatCategoryTag @ 0056f7f0 ////

void __fastcall CExtra_GetStatCategoryTag(int param_1)

{
  void *pvVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x814) == 4) {
    pcVar2 = "extra_amm";
    if (DAT_0104d8e8 == 0) {
      pcVar2 = "extra";
      pvVar1 = (void *)GlobalStatRegistry_Get();
      FUN_008c9a80(pvVar1,(undefined4 *)pcVar2);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x814) != 0x10) {
      CStaff_GetStatCategoryTag(param_1);
      return;
    }
    pcVar2 = "stuntman_amm";
    if (DAT_0104d8e8 == 0) {
      pcVar2 = "stuntman";
    }
  }
  pvVar1 = (void *)GlobalStatRegistry_Get();
  FUN_008c9a80(pvVar1,(undefined4 *)pcVar2);
  return;
}


//// FUNCTION FUN_0056f850 @ 0056f850 ////

void __thiscall FUN_0056f850(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = ((1.0 - (*(float *)((int)this + 0xa90) - 60.0) * 0.025) + *(float *)((int)this + 0xa8c)) *
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


//// FUNCTION FUN_0056f8b0 @ 0056f8b0 ////

undefined4 __fastcall FUN_0056f8b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xac4);
}


//// FUNCTION FUN_0056f8c0 @ 0056f8c0 ////

void __fastcall FUN_0056f8c0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1bfb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00420b80(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0x2ac] + 4))();
  param_1[0x2b1] = (int)puVar2;
  (**(code **)param_1[0x2ac])();
  FUN_005921f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0056f940 @ 0056f940 ////

void __thiscall FUN_0056f940(void *this,undefined4 param_1,void *param_2)

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
  float unaff_retaddr;
  float fVar9;
  float **ppfVar10;
  float local_8;
  float *local_4;
  
  pvVar7 = param_2;
  uVar4 = FUN_00449b70(param_2,&param_2);
  pfVar5 = &local_8;
  ppfVar10 = &local_4;
  this_00 = (void *)(**(code **)(*(int *)this + 0x1e0))(ppfVar10,pfVar5,uVar4);
  pfVar5 = (float *)FUN_0043b620(this_00,(float *)ppfVar10,pfVar5);
  fVar8 = FUN_0043b710(pfVar5);
  fVar9 = (float)((float10)1.0 - ABS(fVar8 * (float10)0.01) * (float10)(float)param_2);
  FUN_00449b80((int)pvVar7);
  pfVar5 = (float *)(**(code **)(*(int *)this + 0x210))(&local_8);
  fVar1 = *pfVar5 - unaff_EDI;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar8 = FUN_00449b90((int)pvVar7);
  pfVar5 = (float *)FUN_0056f850(this,(float *)&stack0xfffffff4);
  fVar2 = *pfVar5 - (float)fVar8;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar9 = ((1.0 - ABS(fVar2) * fVar9) + (1.0 - ABS(fVar1) * fVar9) + unaff_retaddr) * 0.33333334;
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
      fVar9 = (float)(fVar8 * (float10)fVar9);
    }
  }
  if (fVar9 < 0.0) {
    *local_4 = 0.0;
    return;
  }
  if (1.0 < fVar9) {
    *local_4 = 1.0;
    return;
  }
  *local_4 = fVar9;
  return;
}


//// FUNCTION FUN_0056fae0 @ 0056fae0 ////

void __thiscall FUN_0056fae0(void *this,float param_1)

{
  float10 fVar1;
  float fVar2;
  
  fVar2 = DAT_00e4fa4c;
  fVar1 = FUN_00586360();
  fVar1 = fVar1 * (float10)param_1;
  if (fVar1 < (float10)0.0) {
    FUN_004950a0((void *)((int)this + 0xa94),0.0,fVar2);
    return;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  FUN_004950a0((void *)((int)this + 0xa94),(float)fVar1,fVar2);
  return;
}


//// FUNCTION FUN_0056fb50 @ 0056fb50 ////

void __thiscall FUN_0056fb50(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0xa90) - 60.0) * 0.025;
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


//// FUNCTION FUN_0056fba0 @ 0056fba0 ////

void __thiscall FUN_0056fba0(void *this,undefined4 param_1)

{
  FUN_004af570();
  if (DAT_0104a974 == 0) {
    *(undefined4 *)((int)this + 0xa84) = param_1;
    return;
  }
  if (*(float *)(DAT_0104a974 + 0x7c) != 0.0) {
    *(undefined4 *)((int)this + 0xa84) = 0x3f800000;
    return;
  }
  *(undefined4 *)((int)this + 0xa84) = param_1;
  return;
}


//// FUNCTION CExtra_GetAmbitionLevel @ 0056fc00 ////

void __thiscall CExtra_GetAmbitionLevel(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa84);
  return;
}


//// FUNCTION CExtra_ApplyAmbitionDelta @ 0056fc10 ////

void __thiscall CExtra_ApplyAmbitionDelta(void *this,float param_1)

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  float10 fVar5;
  int iVar6;
  
  if (param_1 < 0.0) {
    iVar6 = 0x10;
    pvVar3 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar3,iVar6);
    if (cVar2 != '\0') {
      pvVar3 = (void *)0x0;
      iVar6 = 0x10;
      AwardBonusManager_Get();
      fVar5 = AwardBonus_GetValue(iVar6,pvVar3);
      param_1 = (float)(fVar5 * (float10)param_1);
    }
  }
  fVar1 = param_1 + *(float *)((int)this + 0xa84);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  FUN_0056fba0(this,fVar1);
  iVar6 = FUN_005773c0((int)this);
  iVar4 = GetPlayerStudio();
  if (iVar6 == iVar4) {
    FUN_0057cd50(*(float *)((int)this + 0xa84));
  }
  return;
}


//// FUNCTION FUN_0056fdc0 @ 0056fdc0 ////

void __fastcall FUN_0056fdc0(int *param_1)

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
  puStack_8 = &LAB_00cb1c18;
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


//// FUNCTION FUN_0056fe90 @ 0056fe90 ////

void __fastcall FUN_0056fe90(int param_1)

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
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1c80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &pvStack_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x27;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xa38));
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
  uVar3 = FUN_0098b490("PThresholds");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xa38));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x28;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
    FUN_00495030((undefined4 *)(param_1 + 0xa1c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x29;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
    FUN_0098c550((undefined4 *)(param_1 + 0x9ac));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x2a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
    FUN_0098c550((undefined4 *)(param_1 + 0x9cc));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x2b;
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
  uVar3 = FUN_0098b490("HeadMix");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x9ec));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x2c;
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
  uVar3 = FUN_0098b490("Health");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa0c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x2d;
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
  uVar3 = FUN_0098b490("Cuteness");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa10));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x2e;
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
  uVar3 = FUN_0098b490("SexAppeal");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa14));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x2f;
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
  uVar3 = FUN_0098b490("Weight");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xa18),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Extra.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x30;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
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
  uVar3 = FUN_0098b490("CreatedAsStuntman");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xa50),1);
  }
  FUN_005823f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00570750 @ 00570750 ////

int __cdecl FUN_00570750(char param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 != '\0') {
    iVar4 = 0;
    puVar3 = DAT_0104ced4;
    if (DAT_0104ced4 != &DAT_0104cee0) {
      do {
        cVar2 = (**(code **)(*(int *)puVar3[2] + 0x1c0))(0,0);
        if (cVar2 != '\0') {
          iVar4 = iVar4 + 1;
        }
        puVar1 = puVar3 + 1;
        puVar3 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104cee0);
    }
    return iVar4;
  }
  iVar4 = 0;
  for (puVar3 = DAT_0104ced4; puVar3 != &DAT_0104cee0; puVar3 = (undefined4 *)puVar3[1]) {
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


//// FUNCTION FUN_005707c0 @ 005707c0 ////

void __fastcall FUN_005707c0(int *param_1)

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
  if ((((((param_1[0x1bf] != 0) && (param_1[0x15a] != 0)) &&
        (this = (void *)FUN_0059bb90((int)param_1), this != (void *)0x0)) &&
       ((pvVar4 = (void *)FUN_0059c6e0(param_1,'\0'), this != pvVar4 &&
        (uVar5 = FUN_00430dd0(this,pvVar4), (char)uVar5 == '\0')))) &&
      ((cVar1 = FUN_00430e40((int)pvVar4), cVar1 == '\0' &&
       (cVar1 = FUN_00430e40((int)this), cVar1 == '\0')))) &&
     ((pvVar4 = (void *)FUN_0059bbd0(param_1), this != pvVar4 || (param_1[0x205] == 0x10)))) {
    iVar3 = FUN_004319b0((int)this);
    if ((*(void **)(param_1[0x1bf] + 0x2c) == (void *)0x0) ||
       (bVar2 = FUN_00a130c0(*(void **)(param_1[0x1bf] + 0x2c),iVar3), !bVar2)) {
      FUN_009d1bd0((void *)param_1[0x1bf],iVar3);
    }
  }
  return;
}


//// FUNCTION CExtra_PropagateAmbitionToWidget @ 005708d0 ////

void __thiscall CExtra_PropagateAmbitionToWidget(void *this,void *param_1)

{
  void *this_00;
  float *pfVar1;
  float10 fVar2;
  float fVar3;
  
  this_00 = param_1;
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)this + 0x568) == 0) {
      pfVar1 = (float *)(**(code **)(*(int *)this + 0x1e0))(&param_1);
      fVar2 = FUN_0043b710(pfVar1);
      FUN_009d63a0(this_00,(float)fVar2);
      fVar3 = *(float *)((int)this + 0xa90);
    }
    else {
      fVar2 = (float10)(**(code **)(*(int *)this + 0x1ac))(*(int *)((int)this + 0x568));
      FUN_009d63a0(this_00,(float)fVar2);
      fVar2 = (float10)(**(code **)(*(int *)this + 0x1b0))(*(undefined4 *)((int)this + 0x568));
      fVar3 = (float)fVar2;
    }
    FUN_009d6470(this_00,fVar3);
    FUN_009d6530(this_00,*(float *)((int)this + 0xa8c));
  }
  return;
}


//// FUNCTION FUN_00570a10 @ 00570a10 ////

void __fastcall FUN_00570a10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d249b4;
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


//// FUNCTION FUN_00570a70 @ 00570a70 ////

int * __fastcall FUN_00570a70(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  float fVar6;
  undefined1 local_14 [4];
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1cda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00580fb0(param_1);
  local_4 = 0;
  *param_1 = (int)&PTR_FUN_00d24a0c;
  param_1[0x1e] = (int)&PTR_LAB_00d249e8;
  param_1[0x28] = (int)&PTR_LAB_00d249d0;
  _eh_vector_constructor_iterator_(param_1 + 0x289,0x20,2,FUN_00401dc0,FUN_00401490);
  param_1[0x299] = 0;
  param_1[0x29d] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = (int)(param_1 + 0x29a);
  param_1[0x29a] = (int)&PTR_FUN_00d18c4c;
  param_1[0x29f] = 0;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  param_1[0x2a1] = 0x3f800000;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  local_4._0_1_ = 2;
  fVar6 = DAT_00e4fa4c;
  pfVar2 = (float *)FUN_0043b520(local_14,0.1);
  local_10 = &stack0xffffffcc;
  FUN_00495060(param_1 + 0x2a5,0.0,*pfVar2,fVar6);
  piVar1 = param_1 + 0x2a8;
  param_1[0x2aa] = 0;
  *piVar1 = 0;
  param_1[0x2a9] = 0;
  param_1[0x2af] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = (int)(param_1 + 0x2ac);
  param_1[0x2ac] = (int)&PTR_LAB_00d249b4;
  param_1[0x2b1] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x131] = 2;
  FUN_004015d0(param_1 + 0x289,"",0);
  FUN_004015d0(param_1 + 0x291,"",0);
  param_1[0x299] = 0;
  param_1[0x2aa] = (int)param_1;
  FUN_00acdb9e(0xe53150);
  local_10 = &stack0xffffffd4;
  iVar3 = FUN_0097dda0();
  param_1[0x2ab] = iVar3;
  if (s___AVCPerson_TM___00e5313c[0x11] != '\0') {
    iVar3 = 0xaa0;
    local_10 = &stack0xffffffcc;
    pcVar5 = "ExtraLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe53150);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s___AVCPerson_TM___00e5313c[0x11] = '\0';
  }
  param_1[0x2a9] = (int)&DAT_0104cee0;
  *piVar1 = (int)DAT_0104cee0;
  *(int **)((int)DAT_0104cee0 + 4) = piVar1;
  DAT_0104cee0 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00570ce0 @ 00570ce0 ////

void __fastcall FUN_00570ce0(int *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb1d3a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d24a0c;
  param_1[0x1e] = (int)&PTR_LAB_00d249e8;
  param_1[0x28] = (int)&PTR_LAB_00d249d0;
  local_4 = 4;
  piVar4 = param_1;
  pvVar2 = (void *)FUN_007e34b0();
  iVar3 = FUN_007e3a70(pvVar2,(int)piVar4);
  if (iVar3 != 0) {
    piVar4 = param_1;
    pvVar2 = (void *)FUN_007e34b0();
    FUN_007e4590(pvVar2,(int)piVar4);
  }
  if ((int *)param_1[0x2a9] != (int *)0x0) {
    *(int *)param_1[0x2a9] = param_1[0x2a8];
  }
  if (param_1[0x2a8] != 0) {
    *(int *)(param_1[0x2a8] + 4) = param_1[0x2a9];
  }
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  puVar1 = (undefined4 *)param_1[0x2b1];
  if (puVar1 != (undefined4 *)0x0) {
    piVar4 = puVar1 + 0x12;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x2ac] + 4))();
    param_1[0x2b1] = 0;
    (**(code **)param_1[0x2ac])();
  }
  param_1[0x2ac] = (int)&PTR_LAB_00d249b4;
  if ((int *)param_1[0x2ae] != (int *)0x0) {
    *(int *)param_1[0x2ae] = param_1[0x2ad];
  }
  if (param_1[0x2ad] != 0) {
    *(int *)(param_1[0x2ad] + 4) = param_1[0x2ae];
  }
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2b1] = 0;
  if ((int *)param_1[0x2ae] != (int *)0x0) {
    *(int *)param_1[0x2ae] = param_1[0x2ad];
  }
  if (param_1[0x2ad] != 0) {
    *(int *)(param_1[0x2ad] + 4) = param_1[0x2ae];
  }
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  if ((int *)param_1[0x2a9] != (int *)0x0) {
    *(int *)param_1[0x2a9] = param_1[0x2a8];
  }
  if (param_1[0x2a8] != 0) {
    *(int *)(param_1[0x2a8] + 4) = param_1[0x2a9];
  }
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x29a] = (int)&PTR_FUN_00d18c4c;
  if ((int *)param_1[0x29c] != (int *)0x0) {
    *(int *)param_1[0x29c] = param_1[0x29b];
  }
  if (param_1[0x29b] != 0) {
    *(int *)(param_1[0x29b] + 4) = param_1[0x29c];
  }
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x29f] = 0;
  if ((int *)param_1[0x29c] != (int *)0x0) {
    *(int *)param_1[0x29c] = param_1[0x29b];
  }
  if (param_1[0x29b] != 0) {
    *(int *)(param_1[0x29b] + 4) = param_1[0x29c];
  }
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x289,0x20,2,FUN_00401490);
  local_4 = 0xffffffff;
  FUN_005818a0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00570ef0 @ 00570ef0 ////

int * __cdecl FUN_00570ef0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *this;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1d5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = operator_new(0xacc);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00570a70(piVar2);
  }
  local_4 = 0xffffffff;
  piVar5 = param_1;
  (**(code **)(*piVar3 + 0xe0))();
  (**(code **)(*piVar3 + 0xe8))();
  piVar1 = param_1;
  if (param_1 != (int *)0x0) {
    piVar3[0x218] = param_1[0x218];
    piVar3[0x1f8] = param_1[0x1f8];
    piVar3[0x219] = param_1[0x219];
    piVar2 = (int *)(**(code **)(*param_1 + 0x1e4))(&param_1);
    piVar3[0x2a1] = *piVar2;
    piVar2 = (int *)(**(code **)(*piVar1 + 0x210))(&stack0x00000000);
    piVar3[0x2a2] = *piVar2;
    piVar2 = (int *)(**(code **)(*piVar1 + 0x214))(&stack0xffffffe4);
    piVar3[0x2a3] = *piVar2;
    iVar4 = (**(code **)(*piVar1 + 0x80))();
    piVar3[0x4f] = iVar4;
    piVar2 = (int *)FUN_00577370((int)piVar1);
    this = (void *)FUN_00577370((int)piVar3);
    FUN_00442410(this,piVar2);
    iVar4 = FUN_005a0bf0((int)piVar1);
    (**(code **)(piVar3[0x2ac] + 4))();
    piVar3[0x2b1] = iVar4;
    (**(code **)piVar3[0x2ac])();
    *(int *)(piVar3[0x2b1] + 0x48) = *(int *)(piVar3[0x2b1] + 0x48) + 1;
    ExceptionList = piVar5;
    return piVar3;
  }
  FUN_0056f8c0(piVar3);
  ExceptionList = piVar2;
  return piVar3;
}


//// FUNCTION FUN_00571060 @ 00571060 ////

int * __thiscall FUN_00571060(void *this,byte param_1)

{
  FUN_00570ce0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00571080 @ 00571080 ////

void __thiscall FUN_00571080(void *this,char param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  void *pvVar11;
  void *pvVar12;
  int *piVar13;
  uint uVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  int iVar17;
  int *piStack_120;
  undefined4 *local_11c;
  char *pcStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  char acStack_10c [20];
  void *apvStack_f8 [2];
  uint uStack_f0;
  undefined1 auStack_d8 [204];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1de0;
  local_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  if ((*(char *)((int)this + 0xa80) == '\0') && (param_1 == '\0')) {
    return;
  }
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xe0) = 0;
  if (*(int *)((int)this + 0x4a0) == 2) {
    uVar6 = FUN_00990ce0();
    *(uint *)((int)this + 0x4a0) = ~uVar6 & 1;
  }
  if (*(void **)((int)this + 0x6fc) != (void *)0x0) {
    FUN_009d2c50(*(void **)((int)this + 0x6fc),(void *)0x0,'\x01',-1.0,-1.0);
    if (*(undefined4 **)((int)this + 0x6fc) != (undefined4 *)0x0) {
      FUN_009d2b50(*(undefined4 **)((int)this + 0x6fc));
      *(undefined4 *)((int)this + 0x6fc) = 0;
    }
  }
  piVar13 = *(int **)((int)this + 0xa7c);
  if (piVar13 != (int *)0x0) {
    *(int *)((int)this + 0x860) = piVar13[0x218];
    *(int *)((int)this + 0x864) = piVar13[0x219];
    *(int *)((int)this + 0x7e0) = piVar13[0x1f8];
    (**(code **)(*piVar13 + 0x224))(0);
  }
  iVar9 = *(int *)((int)this + 0xa7c);
  if (((iVar9 == 0) || (*(int *)(iVar9 + 0x4c4) != 1)) || (*(int *)(iVar9 + 0x818) != 0)) {
    FUN_00588440();
    if (*(int *)((int)this + 0xa28) == 0) {
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
      puVar10 = FUN_009d2990(auStack_d8,*(char **)((int)this + 0xa24),*(char **)((int)this + 0xa44),
                             *(float *)((int)this + 0xa64));
      uStack_4 = 0;
      pvVar11 = FUN_009d30f0(*(int *)((int)this + 0x11c),(uint)(*(int *)((int)this + 0x4a0) != 0),1,
                             puVar10,'\0');
      *(void **)((int)this + 0x6fc) = pvVar11;
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
    puVar7 = (undefined4 *)FUN_0059c6e0(*(void **)((int)this + 0xa7c),'\0');
    puVar7[0x12] = puVar7[0x12] + 1;
    uVar8 = (**(code **)(**(int **)((int)this + 0xa7c) + 0xf0))();
    *(undefined4 *)((int)this + 0x6fc) = uVar8;
    FUN_00598b90(*(void **)((int)this + 0xa7c),0);
    iVar9 = FUN_00ace790(*(int **)((int)this + 0xa7c),0,&TM::CStaff::RTTI_Type_Descriptor,
                         &TM::CWannabe::RTTI_Type_Descriptor,0);
    if (iVar9 != 0) {
      FUN_00401e30((void *)((int)this + 0xa24),(undefined4 *)(iVar9 + 0xa34));
      FUN_00401e30((void *)((int)this + 0xa44),(undefined4 *)(iVar9 + 0xa54));
      *(undefined4 *)((int)this + 0xa64) = *(undefined4 *)(iVar9 + 0xa74);
      *(undefined4 *)((int)this + 0xa90) = *(undefined4 *)(iVar9 + 0xa9c);
    }
    *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(*(int *)((int)this + 0xa7c) + 0x11c);
    *(undefined4 *)(*(int *)((int)this + 0xa7c) + 0x11c) = 0;
    (**(code **)(*(int *)this + 0x128))(puVar7);
    FUN_0059bb60(this,(int)puVar7);
    FUN_0059bba0(this,(int)puVar7);
    piVar13 = puVar7 + 0x12;
    *piVar13 = *piVar13 + -1;
    if (*piVar13 == 0) {
      (**(code **)*puVar7)();
    }
  }
  if (*(void **)((int)this + 0xa7c) != (void *)0x0) {
    FUN_00599050(*(void **)((int)this + 0xa7c),1);
    (**(code **)(*(int *)this + 0x120))();
    piVar13 = *(int **)(*(int *)((int)this + 0xa7c) + 0x198);
    uVar6 = *(uint *)(*(int *)((int)this + 0xa7c) + 0x1dc);
    cVar4 = '\0';
    if (piVar13 != (int *)0x0) {
      cVar4 = (**(code **)(*piVar13 + 0x54))();
    }
    if (DAT_0104c6c8 == *(int *)((int)this + 0xa7c)) {
      (*(code *)DAT_0104c6b4[1])();
      DAT_0104c6c8 = 0;
      (*(code *)*DAT_0104c6b4)();
      (*(code *)DAT_0104d510[1])();
      DAT_0104d524 = (void *)0x0;
      (*(code *)*DAT_0104d510)();
      FUN_0053c900((int)this);
    }
    puVar7 = *(undefined4 **)((int)this + 0xa7c);
    if (puVar7 != (undefined4 *)0x0) {
      piVar1 = puVar7 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar7)();
      }
      (**(code **)(*(int *)((int)this + 0xa68) + 4))();
      *(undefined4 *)((int)this + 0xa7c) = 0;
      (*(code *)**(undefined4 **)((int)this + 0xa68))();
    }
    if (piVar13 != (int *)0x0) {
      if (cVar4 != '\0') {
        TMRoom_RegisterOccupant(piVar13,this);
      }
      pvVar11 = (void *)FUN_0093c970(piVar13);
      if (pvVar11 != (void *)0x0) {
        FUN_00945330(pvVar11,this,uVar6);
      }
      *(uint *)((int)this + 0x1dc) = uVar6;
      (**(code **)(*(int *)((int)this + 0x184) + 4))();
      *(int **)((int)this + 0x198) = piVar13;
      (*(code *)**(undefined4 **)((int)this + 0x184))();
    }
  }
  FUN_00598f30(this,0x29);
  bVar5 = FUN_0059c5e0((int)this);
  if (!bVar5) {
    pvVar11 = operator_new(0x128);
    uStack_4 = 1;
    if (pvVar11 == (void *)0x0) {
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(this,0);
    }
    else {
      puVar7 = DesirePlay_Constructor(pvVar11,(int)this);
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(this,(int)puVar7);
    }
  }
  bVar5 = FUN_0059c5e0((int)this);
  if (!bVar5) {
    pvVar11 = operator_new(0x140);
    uStack_4 = 2;
    if (pvVar11 == (void *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = DesireGetChanged_Constructor(pvVar11,this);
    }
    uStack_4 = 0xffffffff;
    TMCharacter_AddResidentDesire(this,(int)puVar7);
  }
  pvVar11 = operator_new(0x148);
  uStack_4 = 3;
  if (pvVar11 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireHeal_Constructor(pvVar11,(int)this);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(this,(int)puVar7);
  pvVar11 = operator_new(0x144);
  uStack_4 = 4;
  if (pvVar11 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireAgony_Constructor(pvVar11,this);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(this,(int)puVar7);
  FUN_009d6470(*(void **)((int)this + 0x6fc),*(float *)((int)this + 0xa90));
  FUN_009d6530(*(void **)((int)this + 0x6fc),*(float *)((int)this + 0xa8c));
  if ((DAT_0104d524 != this) && (*(int *)((int)this + 0x198) != 0)) {
    pcStack_118 = acStack_10c;
    acStack_10c[0] = '\0';
    uStack_114 = 0;
    uStack_110 = 0x14;
    _strncpy(pcStack_118,"room_ss_extras",0xe);
    uStack_114 = 0xe;
    pcStack_118[0xe] = '\0';
    uStack_4 = 5;
    puVar7 = FUN_0093c060(*(void **)((int)this + 0x198),apvStack_f8);
    bVar3 = true;
    bVar2 = true;
    uVar8 = FUN_00401ec0(puVar7,&pcStack_118);
    if ((char)uVar8 != '\0') {
      bVar5 = true;
      goto LAB_00571674;
    }
  }
  bVar5 = false;
LAB_00571674:
  if ((bVar2) && (0x14 < uStack_f0)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_f8[0]);
  }
  uStack_4 = 0xffffffff;
  if ((bVar3) && (0x14 < uStack_110)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_118);
  }
  if ((bVar5) && (local_11c = DAT_0104ed78, DAT_0104ed78 != &DAT_0104ed84)) {
    do {
      piVar13 = (int *)local_11c[2];
      if (piVar13 != (int *)0x0) {
        pvVar11 = (void *)CFacilityPreProduction_GetOccupyingRoom((int)piVar13);
        pvVar12 = (void *)FUN_005295b0(piVar13);
        piStack_120 = (int *)0x0;
        if (pvVar12 != (void *)0x0) {
          acStack_10c[0] = '\0';
          uStack_114 = 0;
          pcStack_118 = acStack_10c;
          uStack_110 = 0x14;
          _strncpy(pcStack_118,"extras",6);
          uStack_114 = 6;
          pcStack_118[6] = '\0';
          iVar17 = 0;
          pTVar16 = &TM::CCastRoom::RTTI_Type_Descriptor;
          pTVar15 = &TM::TMRoom::RTTI_Type_Descriptor;
          iVar9 = 0;
          uStack_4 = 6;
          piVar13 = (int *)FUN_00938a70(pvVar12,&pcStack_118);
          piStack_120 = (int *)FUN_00ace790(piVar13,iVar9,pTVar15,pTVar16,iVar17);
          uStack_4 = 0xffffffff;
          if (0x14 < uStack_110) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_118);
          }
        }
        if ((pvVar11 != (void *)0x0) && (piStack_120 != (int *)0x0)) {
          iVar9 = FUN_005b2220((int)pvVar11);
          iVar9 = *(int *)(iVar9 + 100);
          iVar17 = FUN_005b2220((int)pvVar11);
          if (iVar9 != *(int *)(iVar17 + 0x68)) {
            do {
              pvVar12 = *(void **)(iVar9 + 0x14);
              if (((pvVar12 != (void *)0x0) && (iVar17 = FUN_005a6470((int)pvVar12), iVar17 == 0))
                 && (iVar17 = FUN_005a6130((int)pvVar12), iVar17 == 0)) {
                FUN_005b4140(pvVar11,(int)this,pvVar12);
                uVar8 = FUN_005b54c0(pvVar11,(int)this);
                if (((char)uVar8 == '\0') &&
                   (uVar8 = FUN_005b20f0(pvVar11,'\x01'), (char)uVar8 != '\0')) {
                  puVar7 = FUN_005b5440(pvVar11,(int)this);
                  FUN_005b57c0((int)pvVar11);
                  FUN_005d6560((int)puVar7);
                }
                FUN_0059a6c0(this,'\x01');
                TMRoom_RegisterOccupant(piStack_120,this);
                pvVar11 = (void *)FUN_0093c970(piStack_120);
                if (((pvVar11 != (void *)0x0) &&
                    (uVar6 = FUN_009455e0(pvVar11,this), -1 < (int)uVar6)) &&
                   (uVar14 = FUN_0056f660((int)(piStack_120 + 0x23)), uVar6 < uVar14)) {
                  FUN_00931d40(*(void **)(piStack_120[0x24] + uVar6 * 4),'\0');
                  (**(code **)(**(int **)(piStack_120[0x24] + uVar6 * 4) + 100))();
                }
                (**(code **)(*piStack_120 + 0x50))();
                goto LAB_005718af;
              }
              iVar9 = iVar9 + 0x18;
              iVar17 = FUN_005b2220((int)pvVar11);
            } while (iVar9 != *(int *)(iVar17 + 0x68));
          }
        }
      }
      local_11c = (undefined4 *)local_11c[1];
    } while (local_11c != &DAT_0104ed84);
  }
LAB_005718af:
  *(undefined1 *)((int)this + 0xa80) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION CExtra_RefreshVisualRepresentation @ 005718e0 ////

void __fastcall CExtra_RefreshVisualRepresentation(void *param_1)

{
  FUN_00571080(param_1,'\x01');
  return;
}


//// FUNCTION CExtra_Tick @ 005718f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void CExtra_Tick(TMCharacter * character) */

void __fastcall CExtra_Tick(TMCharacter *character)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  TMCharacter *pTVar4;
  
  if ((*(float *)&character->field_0xa84 < 1.0) &&
     (_DAT_00e53304 < *(float *)&character->field_0xa84)) {
    FUN_00472920(&character->field_0xa84,DAT_00e53308);
  }
  CStaff_Tick(character);
  cVar1 = (**(code **)(*(int *)character + 0x1dc))();
  if (cVar1 != '\0') {
    pTVar4 = character;
    pvVar2 = (void *)FUN_007e34b0();
    iVar3 = FUN_007e3a70(pvVar2,(int)pTVar4);
    if (iVar3 != 0) {
      pTVar4 = character;
      pvVar2 = (void *)FUN_007e34b0();
      FUN_007e4590(pvVar2,(int)pTVar4);
    }
  }
  if (character->jobOrStudioId != 0) {
    FUN_00571080(character,'\0');
    FUN_005707c0((int *)character);
    return;
  }
  return;
}


//// FUNCTION FUN_00571980 @ 00571980 ////

void __fastcall FUN_00571980(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d24c50;
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


//// FUNCTION FUN_005719d0 @ 005719d0 ////

undefined4 * __thiscall FUN_005719d0(void *this,byte param_1)

{
  FUN_00571980(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005719f0 @ 005719f0 ////

void __fastcall FUN_005719f0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d24c50;
  return;
}


//// FUNCTION FUN_00571a50 @ 00571a50 ////

char * FUN_00571a50(void)

{
  return "costume_plain";
}


//// FUNCTION FUN_00571a60 @ 00571a60 ////

void __fastcall FUN_00571a60(int *param_1)

{
  (**(code **)(*param_1 + 0x198))();
  return;
}


//// FUNCTION FUN_00571a80 @ 00571a80 ////

void __fastcall FUN_00571a80(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x13c))();
  if (cVar1 != '\0') {
    param_1[0x15e] = 0x32;
    thunk_FUN_00538cb0(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00571ab0 @ 00571ab0 ////

void __fastcall FUN_00571ab0(int *param_1)

{
  (**(code **)(*param_1 + 0x19c))();
  FUN_0059ce50(param_1);
  return;
}


//// FUNCTION FUN_00571ad0 @ 00571ad0 ////

uint __fastcall FUN_00571ad0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x68c) == '\0') {
    FUN_0053d760();
  }
  if (DAT_0104d54c != '\0') {
    cVar1 = FUN_00553f70(0x38);
    if (cVar1 != '\0') {
      cVar1 = FUN_00553f70(0x3c);
      if (cVar1 != '\0') {
        cVar1 = FUN_00553f70(0x73);
        if (cVar1 != '\0') {
          uVar2 = FUN_0059fdb0(param_1 + -0xa0);
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
      }
    }
  }
  uVar3 = FUN_00539be0(param_1);
  return uVar3;
}


//// FUNCTION FUN_00571b60 @ 00571b60 ////

void __fastcall FUN_00571b60(int param_1)

{
  *(undefined1 *)(param_1 + 0x72c) = 1;
  return;
}


//// FUNCTION FUN_00571b70 @ 00571b70 ////

void FUN_00571b70(void)

{
  return;
}


//// FUNCTION FUN_00571b80 @ 00571b80 ////

void FUN_00571b80(void)

{
  return;
}


