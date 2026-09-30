//// FUNCTION FUN_0092d9f0 @ 0092d9f0 ////

void __thiscall FUN_0092d9f0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0092d0b0((void *)piVar6[1]);
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
    FUN_0092cd80(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0092dab0 @ 0092dab0 ////

void __fastcall FUN_0092dab0(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)param_1[0x9f];
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0xa4))();
    uVar3 = FUN_004cba70((int)piVar1);
    if (cVar2 != '\0' || (char)uVar3 != '\0') {
      *(undefined1 *)(param_1 + 0xa0) = 1;
      goto LAB_0092daff;
    }
  }
  if ((char)param_1[0xa0] != '\0') {
    (**(code **)(*param_1 + 0x4c))();
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
LAB_0092daff:
  if ((param_1[0x9f] != 0) && (param_1[0x3e] != 0)) {
    if ((param_1[0x3f] - param_1[0x3e]) / 0x18 != 0) {
      FUN_0092d550(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0092db50 @ 0092db50 ////

uint * __thiscall FUN_0092db50(void *this,uint *param_1)

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
  
  puStack_8 = &LAB_00cf1ab0;
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
    local_40 = &PTR_LAB_00d6d334;
    local_2c = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar2 = (uint *)FUN_0092c7e0(local_28,param_1,(int)local_34);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_0092d880(this,&param_1,puVar4,puVar2);
    puVar4 = (uint *)*puVar3;
    FUN_0092c2f0((int)local_28);
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


//// FUNCTION FUN_0092dc50 @ 0092dc50 ////

void __fastcall FUN_0092dc50(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *this;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3c = param_1;
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar9 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    *(char *)((int)puVar9 + 2) = pcVar7[2];
    DAT_010581d4 = 0x31;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar6 = FUN_00ace3df((int *)(local_3c + 0x204));
    pcVar3 = (char *)FUN_00ace33d(iVar6);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  iVar6 = local_3c;
  local_4 = 0xffffffff;
  uVar4 = FUN_0098b490("PSet");
  if ((char)uVar4 != '\0') {
    FUN_00990970((int *)(iVar6 + 0x204));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    *(char *)((int)puVar9 + 2) = pcVar7[2];
    DAT_010581d4 = 0x32;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar3 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    iVar6 = local_3c;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("BIsSetInUse");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(iVar6 + 0x21c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar9 = &DAT_010581d8;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      puVar9 = puVar9 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar7;
    *(char *)((int)puVar9 + 2) = pcVar7[2];
    DAT_010581d4 = 0x33;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    iVar6 = local_3c;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PendingActivity");
  if ((char)uVar4 != '\0') {
    FUN_0098c550((undefined4 *)(iVar6 + 0x220));
  }
  uVar4 = FUN_0098b490("ExperienceList");
  if (((char)uVar4 != '\0') && (bVar2 = FUN_009896f0("u32"), bVar2)) {
    if (DAT_010583e0 == 0) {
      local_3c = *(int *)(iVar6 + 0x248);
      FUN_0098a3a0(&local_3c);
      local_38 = **(int **)(iVar6 + 0x244);
      if ((int *)local_38 != *(int **)(iVar6 + 0x244)) {
        do {
          uVar8 = local_38;
          local_34 = *(undefined4 *)(local_38 + 0xc);
          FUN_0098a430(&local_34,4);
          FUN_00990970((int *)(uVar8 + 0x10));
          FUN_0092acd0((int *)&local_38);
        } while (local_38 != *(uint *)(iVar6 + 0x244));
      }
    }
    else if (DAT_010583e0 == 1) {
      this = (void *)(iVar6 + 0x240);
      local_38 = 0;
      FUN_0092d850((int)this);
      SLVAR_LoadUint(&local_38);
      uVar8 = 0;
      iVar6 = local_3c;
      if (local_38 != 0) {
        do {
          FUN_0098a430(&local_30,4);
          puVar5 = FUN_0092db50(this,&local_30);
          FUN_00990970((int *)puVar5);
          uVar8 = uVar8 + 1;
          iVar6 = local_3c;
        } while (uVar8 < local_38);
      }
    }
  }
  FUN_0093f3f0(iVar6);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092e060 @ 0092e060 ////

void __fastcall FUN_0092e060(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0092d9f0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0092e090 @ 0092e090 ////

void __fastcall FUN_0092e090(undefined4 *param_1)

{
  int iVar1;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf1b30;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6d3f4;
  param_1[0x19] = &PTR_LAB_00d6d3d0;
  local_4 = 4;
  if (param_1[0xab] != 0) {
    do {
      if (*(undefined4 **)(*(int *)param_1[0xaa] + 0x24) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(*(int *)param_1[0xaa] + 0x24))(1);
      }
      iVar1 = *(int *)param_1[0xaa];
      (**(code **)(*(int *)(iVar1 + 0x10) + 4))();
      *(undefined4 *)(iVar1 + 0x24) = 0;
      (*(code *)**(undefined4 **)(iVar1 + 0x10))();
      FUN_0092cd80(param_1 + 0xa9,&uStack_10,*(int **)param_1[0xaa]);
    } while (param_1[0xab] != 0);
  }
  if ((undefined4 *)param_1[0x97] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x97] = param_1[0x96];
  }
  if (param_1[0x96] != 0) {
    *(undefined4 *)(param_1[0x96] + 4) = param_1[0x97];
  }
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0092d9f0(param_1 + 0xa9,&uStack_10,*(int **)param_1[0xaa],(int *)param_1[0xaa]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xaa]);
}


//// FUNCTION FUN_0092e290 @ 0092e290 ////

void __fastcall FUN_0092e290(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6d390;
  return;
}


//// FUNCTION FUN_0092e2f0 @ 0092e2f0 ////

int __fastcall FUN_0092e2f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0092c220();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION CRehearseRoom_Constructor @ 0092e320 ////

undefined4 * __fastcall CRehearseRoom_Constructor(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char local_3c [8];
  undefined4 uStack_34;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1ba0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  piVar1 = param_1 + 0x96;
  *param_1 = &PTR_FUN_00d6d3f4;
  param_1[0x19] = &PTR_LAB_00d6d3d0;
  param_1[0x98] = 0;
  *piVar1 = 0;
  param_1[0x97] = 0;
  param_1[0x9d] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = param_1 + 0x9a;
  param_1[0x9a] = &PTR_LAB_00d1e3c4;
  param_1[0x9f] = 0;
  param_1[0xa1] = param_1 + 0xa4;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0x14;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  iVar2 = FUN_0092c220();
  param_1[0xaa] = iVar2;
  *(undefined1 *)(iVar2 + 0x29) = 1;
  *(undefined4 *)(param_1[0xaa] + 4) = param_1[0xaa];
  *(undefined4 *)param_1[0xaa] = param_1[0xaa];
  *(undefined4 *)(param_1[0xaa] + 8) = param_1[0xaa];
  param_1[0xab] = 0;
  pcVar3 = local_3c;
  local_4 = CONCAT31(local_4._1_3_,4);
  local_3c[0] = '\0';
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffffb8,"button_rehearse",0xf);
  FUN_0093c1b0(param_1,pcVar3,uVar4,uVar5);
  FUN_0093b350(param_1,4);
  FUN_0093b340(param_1,0);
  FUN_0093b330(param_1,0);
  *(undefined1 *)((int)param_1 + 0x1c9) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  param_1[0x98] = param_1;
  FUN_00acdb9e(0xe65ccc);
  iVar2 = FUN_0097dda0();
  param_1[0x99] = iVar2;
  if (s___AV__InList_VCRehearseRoom_TM___00e65ca4[0x26] != '\0') {
    iVar2 = 600;
    pcVar6 = "RLink";
    uStack_34 = 0x92e479;
    pcVar3 = (char *)FUN_00acdb9e(0xe65ccc);
    uStack_34 = 0x92e480;
    FUN_0097df60(pcVar3,pcVar6,iVar2);
    s___AV__InList_VCRehearseRoom_TM___00e65ca4[0x26] = '\0';
  }
  param_1[0x97] = &DAT_0105050c;
  *piVar1 = (int)DAT_0105050c;
  *(int **)((int)DAT_0105050c + 4) = piVar1;
  DAT_0105050c = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0092e4c0 @ 0092e4c0 ////

undefined4 * __thiscall FUN_0092e4c0(void *this,byte param_1)

{
  FUN_0092e090(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0092e4e0 @ 0092e4e0 ////

undefined4 * __fastcall FUN_0092e4e0(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1bce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d6d344;
  piVar1 = param_1 + 0x18;
  *param_1 = &PTR_FUN_00d6d364;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar1 + 4))();
  param_1[0x1d] = 0;
  (**(code **)*piVar1)();
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x22] = 6;
  param_1[0x21] = 0xffffffff;
  param_1[0x1f] = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0092e590 @ 0092e590 ////

undefined4 * __thiscall
FUN_0092e590(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1bfe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d6d344;
  piVar1 = (int *)((int)this + 0x60);
  *(undefined ***)this = &PTR_FUN_00d6d364;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(int **)((int)this + 0x6c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x74) = param_1;
  (**(code **)*piVar1)();
  *(undefined4 *)((int)this + 0x88) = param_2;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x84) = param_3;
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0092e640 @ 0092e640 ////

void __thiscall FUN_0092e640(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  uint *puVar4;
  uint uVar5;
  int **ppiVar6;
  undefined1 **ppuVar7;
  int aiStack_68 [2];
  undefined **ppuStack_60;
  int iStack_5c;
  int *piStack_58;
  undefined ***pppuStack_54;
  undefined4 *puStack_4c;
  undefined1 auStack_48 [28];
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1c33;
  local_c = ExceptionList;
  if (param_1 != (int *)0x0) {
    ExceptionList = &local_c;
    param_1 = (int *)(**(code **)(*param_1 + 0x80))();
    FUN_0092c770((void *)((int)this + 0x2a4),aiStack_68,(uint *)&param_1);
    if (aiStack_68[0] == *(int *)((int)this + 0x2a8)) {
      uVar5 = 0;
      if (*(void **)((int)this + 0x228) != (void *)0x0) {
        uVar5 = FUN_00944e30(*(void **)((int)this + 0x228),(int)piVar1);
      }
      param_1 = operator_new(0x90);
      uStack_4 = 0;
      if (param_1 == (int *)0x0) {
        puStack_4c = (undefined4 *)0x0;
      }
      else {
        puStack_4c = FUN_0092e590(param_1,piVar1,6,uVar5);
      }
      uStack_4 = 0xffffffff;
      iVar2 = FUN_004cbc20(*(void **)((int)this + 0x27c),0);
      puVar3 = (undefined4 *)FUN_00449b40(iVar2);
      puStack_2c = auStack_20;
      auStack_20[0] = 0;
      uStack_28 = 0;
      uStack_24 = 0x14;
      FUN_004015d0(&puStack_2c,(char *)*puVar3,puVar3[1]);
      ppuVar7 = &puStack_2c;
      ppiVar6 = &param_1;
      uStack_4 = 1;
      this_00 = (void *)FUN_00577370((int)piVar1);
      FUN_00441750(this_00,ppiVar6,ppuVar7);
      puStack_4c[0x20] = param_1;
      piStack_58 = puStack_4c + 6;
      pppuStack_54 = &ppuStack_60;
      ppuStack_60 = &PTR_LAB_00d6d334;
      iStack_5c = *piStack_58;
      *(int **)(*piStack_58 + 4) = &iStack_5c;
      *piStack_58 = (int)&iStack_5c;
      uStack_4._0_1_ = 2;
      param_1 = (int *)(**(code **)(*piVar1 + 0x80))();
      puVar4 = (uint *)FUN_0092c7e0(auStack_48,&param_1,(int)&ppuStack_60);
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      FUN_0092d790((void *)((int)this + 0x2a4),aiStack_68,puVar4);
      FUN_0092c2f0((int)auStack_48);
      FUN_0092c120(&ppuStack_60);
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_2c);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION CRehearseRoom_OnStaffDropped @ 0092e800 ////

void __thiscall CRehearseRoom_OnStaffDropped(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  void *pvVar8;
  float *pfVar9;
  void *unaff_EBX;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1c56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar2 == (int *)0x0) {
    piVar3 = (int *)FUN_00ace790(piVar3,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (piVar3 != (int *)0x0) {
      pvVar7 = (void *)FUN_005d1940((int)piVar3);
      piVar2 = (int *)FUN_005b22a0((int)pvVar7);
      iVar4 = (**(code **)(*piVar2 + 0x24))();
      if (iVar4 == 5) {
        iVar4 = FUN_005b25d0((int)pvVar7);
        if (iVar4 != 0) {
          iVar4 = *(int *)((int)this + 0x27c);
          iVar5 = FUN_005b25d0((int)pvVar7);
          iVar5 = FUN_004df220(iVar5);
          if (iVar5 == iVar4) {
            FUN_005d1980(piVar3,*(undefined4 *)(*(int *)((int)this + 0xc0) + 0x24c));
            pvVar8 = (void *)FUN_005b25d0((int)pvVar7);
            uVar6 = FUN_004e9bc0(pvVar8);
            if ((char)uVar6 == '\0') {
              piVar2 = (int *)FUN_005b22a0((int)pvVar7);
              pfVar9 = (float *)(**(code **)(*piVar2 + 0x38))(&param_1);
              if ((1.0 <= *pfVar9) ||
                 (iVar4 = FUN_005b25d0((int)pvVar7), *(int *)(iVar4 + 0x1c0) == 4)) {
                iVar4 = FUN_005b25d0((int)pvVar7);
                FUN_004df130(iVar4);
                FUN_005b5840(pvVar7,'\0');
                iVar5 = 0;
                pTVar11 = &TM::CPhaseShoot::RTTI_Type_Descriptor;
                pTVar10 = &TM::CPhaseBase::RTTI_Type_Descriptor;
                iVar4 = 0;
                piVar2 = (int *)FUN_005b22a0((int)pvVar7);
                piVar2 = (int *)FUN_00ace790(piVar2,iVar4,pTVar10,pTVar11,iVar5);
                if (piVar2 != (int *)0x0) {
                  (**(code **)(*piVar2 + 0x40))();
                }
              }
            }
            else {
              FUN_005b5840(pvVar7,'\0');
              pvVar7 = (void *)FUN_005b25d0((int)pvVar7);
              FUN_004ebac0(pvVar7);
            }
            (**(code **)(**(int **)(*(int *)((int)this + 0xc0) + 0x24c) + 0x54))(auStack_18);
            (**(code **)(*piVar3 + 0x30))(&stack0xffffffe4);
            (**(code **)(piVar3[0x28] + 0xc))();
            (**(code **)(*piVar3 + 0xcc))(1,1);
            ExceptionList = unaff_EBX;
            return;
          }
        }
      }
      else {
        piVar3 = (int *)FUN_005b22a0((int)pvVar7);
        iVar4 = (**(code **)(*piVar3 + 0x24))();
        if (iVar4 == 4) {
          piVar3 = (int *)FUN_005b22a0((int)pvVar7);
          cVar1 = (**(code **)(*piVar3 + 0x28))();
          if ((((cVar1 != '\0') && (*(int *)((int)pvVar7 + 0xac) != (int)pvVar7 + 0xb8)) &&
              (iVar4 = *(int *)(*(int *)((int)pvVar7 + 0xac) + 8), iVar4 != 0)) &&
             (iVar5 = *(int *)((int)this + 0x27c), iVar4 = FUN_004df220(iVar4), iVar4 == iVar5)) {
            FUN_00470a70(DAT_0104917c,pvVar7,0x80000acf,0,0);
          }
        }
      }
    }
  }
  else {
    TMRoom_OnObjectDropped(this,piVar3);
    FUN_0092bd00(this,'\0','\0','\x01');
    TMRoom_FinalizeSlotAssignment(this,piVar3,1);
    param_1 = operator_new(0x160);
    local_4 = 0;
    if (param_1 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = CastingPerkPip_Constructor(param_1,7,piVar2,0);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar3);
    param_1 = operator_new(0x160);
    local_4 = 1;
    if (param_1 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = CastingPerkPip_Constructor(param_1,0xc,piVar2,0);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar3);
    FUN_0092e640(this,piVar2);
    if (*(void **)((int)this + 0xd8) != (void *)0x0) {
      iVar4 = FUN_00404810(*(void **)((int)this + 0xd8),0);
      iVar5 = FUN_00404810(*(void **)((int)this + 0xd8),1);
      if (((iVar4 != 0) && (iVar5 != 0)) &&
         (uVar6 = FUN_00598ee0(*(int *)(iVar4 + 300)), (char)uVar6 != '\0')) {
        FUN_00598ee0(*(int *)(iVar5 + 300));
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092eb30 @ 0092eb30 ////

void __fastcall FUN_0092eb30(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0092eb70 @ 0092eb70 ////

void FUN_0092eb70(void)

{
  return;
}


//// FUNCTION CReleaseRoom_Constructor @ 0092eb80 ////

undefined4 * __fastcall CReleaseRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CInformationRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6d4c4;
  param_1[0x19] = &PTR_LAB_00d6d4a0;
  FUN_0093b350(param_1,0);
  *(undefined1 *)((int)param_1 + 0x1c9) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0092ec40 @ 0092ec40 ////

undefined4 * __thiscall FUN_0092ec40(void *this,byte param_1)

{
  thunk_FUN_009267e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION CReleaseRoom_OnProjectDropped @ 0092ec70 ////

void __thiscall CReleaseRoom_OnProjectDropped(void *this,int *param_1)

{
  int *piVar1;
  void *this_00;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvStack_28;
  undefined1 auStack_24 [8];
  void *apvStack_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1c8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if ((piVar1 != (int *)0x0) &&
     (this_00 = (void *)FUN_005d1940((int)piVar1), this_00 != (void *)0x0)) {
    piVar2 = (int *)FUN_005b22a0((int)this_00);
    iVar3 = (**(code **)(*piVar2 + 0x24))();
    if ((iVar3 == 7) && ((int *)piVar1[0xa0] != (int *)0x0)) {
      (**(code **)(*(int *)piVar1[0xa0] + 0x34))(auStack_24);
      (**(code **)(*piVar1 + 0x30))(&pvStack_28);
      (**(code **)(*piVar1 + 0xcc))(1,1);
      ExceptionList = apvStack_1c[0];
      return;
    }
    TMRoom_OnObjectDropped(this,param_1);
    piVar2 = (int *)0x0;
    *(undefined1 *)((int)piVar1 + 0x15d) = 0;
    if (piVar1[0xa0] == 0) {
      pvStack_28 = operator_new(0x238);
      uStack_4 = 0;
      if (pvStack_28 != (void *)0x0) {
        piVar2 = FUN_00947d20(pvStack_28,(int)piVar1);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0xdc))();
      iVar5 = *piVar2;
      uVar4 = (**(code **)(*piVar1 + 0x4c))(&pvStack_28);
      uVar4 = (**(code **)(*piVar1 + 0x34))(apvStack_1c,uVar4);
      (**(code **)(iVar5 + 0x28))(uVar4);
      (**(code **)(piVar1[0x9b] + 4))();
      piVar1[0xa0] = (int)piVar2;
      (**(code **)piVar1[0x9b])();
    }
    uVar4 = 0;
    iVar5 = 0;
    if (((0 < DAT_0104ed68) && (param_1 != (int *)0x0)) &&
       (iVar5 = FUN_00ace790(DAT_01050594,0,&TM::CRoomPointExplainer::RTTI_Type_Descriptor,
                             &TM::CMarketingExplainer::RTTI_Type_Descriptor,0), iVar5 != 0)) {
      uVar4 = FUN_009316b0(iVar5);
    }
    if (iVar3 == 6) {
      if ((0 < DAT_0104ed68) && (iVar5 != 0)) {
        FUN_005b0fe0(this_00,uVar4);
      }
      FUN_00470a70(DAT_0104917c,this_00,0x80000b1f,0,0);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION CReleaseRoom_OnProjectRemoved @ 0092ee30 ////

void CReleaseRoom_OnProjectRemoved(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1cab;
  local_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (piVar2[0xa0] == 0) {
    param_1 = operator_new(0x238);
    local_4 = 0;
    if (param_1 != (int *)0x0) {
      piVar4 = FUN_00947d20(param_1,(int)piVar2);
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar4 + 0xdc))();
    iVar1 = *piVar4;
    uVar3 = (**(code **)(*piVar2 + 0x4c))(&param_1);
    uVar3 = (**(code **)(*piVar2 + 0x34))(&stack0xffffffe4,uVar3);
    (**(code **)(iVar1 + 0x28))(uVar3);
    (**(code **)(piVar2[0x9b] + 4))();
    piVar2[0xa0] = (int)piVar4;
    (**(code **)piVar2[0x9b])();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092ef00 @ 0092ef00 ////

void __fastcall FUN_0092ef00(int *param_1)

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
  puStack_8 = &LAB_00cf1cc8;
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


//// FUNCTION FUN_0092f3e0 @ 0092f3e0 ////

void __fastcall FUN_0092f3e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0092f410 @ 0092f410 ////

void FUN_0092f410(void)

{
  return;
}


//// FUNCTION FUN_0092f420 @ 0092f420 ////

uint __cdecl FUN_0092f420(void *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  
  uVar3 = 0;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x5c) + uVar3 * 4);
      if (*(int *)(iVar2 + 8) == 4) {
        pcVar1 = (char *)FUN_009722a0(param_1,*(int *)(iVar2 + 0x10));
        pcVar4 = "\rp_crate_bp.msh";
        iVar2 = 0xf;
        bVar5 = true;
        do {
          pcVar4 = pcVar4 + 1;
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = *pcVar1 == *pcVar4;
          pcVar1 = pcVar1 + 1;
        } while (bVar5);
        if (bVar5) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)((int)param_1 + 0x4d));
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0092f490 @ 0092f490 ////

int * __thiscall FUN_0092f490(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0092f5d0 @ 0092f5d0 ////

undefined4 * FUN_0092f5d0(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  char *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1d3b;
  pvStack_c = ExceptionList;
  local_18 = "research";
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x104))();
  this = operator_new(0x140);
  puStack_8 = (undefined1 *)0x0;
  if (this != (void *)0x0) {
    puVar1 = DesireResearch_Constructor(this,(int)param_1);
    ExceptionList = &local_18;
    return puVar1;
  }
  ExceptionList = &local_18;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0092f690 @ 0092f690 ////

void __thiscall FUN_0092f690(void *this,int param_1)

{
  if (*(int **)((int)this + 0x270) != (int *)0x0) {
    FUN_004a4f70(*(int **)((int)this + 0x270));
  }
  FUN_0093cf40(this,param_1);
  return;
}


//// FUNCTION FUN_0092f6c0 @ 0092f6c0 ////

void __thiscall FUN_0092f6c0(void *this,undefined4 *param_1,float param_2)

{
  void *this_00;
  void *this_01;
  int iVar1;
  int iVar2;
  
  this_01 = (void *)FUN_0093c970(this);
  if (this_01 != (void *)0x0) {
    iVar1 = FUN_00944130((int)this_01);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = FUN_00944e20(this_01,iVar1);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x2c) != 0)) &&
         (this_00 = *(void **)(*(int *)(iVar2 + 0x2c) + 0x214), this_00 != (void *)0x0)) {
        FUN_009757a0(this_00,(byte *)*param_1,param_2,0);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0092f750 @ 0092f750 ////

void __thiscall FUN_0092f750(void *this,undefined4 *param_1,float param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_0093c970(this);
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_00944e20(pvVar1,0);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x2c) != 0)) &&
       (pvVar1 = *(void **)(*(int *)(iVar2 + 0x2c) + 0x214), pvVar1 != (void *)0x0)) {
      FUN_009757a0(pvVar1,(byte *)*param_1,param_2,0);
    }
  }
  return;
}


//// FUNCTION FUN_0092f790 @ 0092f790 ////

float10 __thiscall FUN_0092f790(void *param_1,undefined4 *param_2)

{
  void *this;
  int iVar1;
  float10 fVar2;
  
  this = (void *)FUN_0093c970(param_1);
  if (this != (void *)0x0) {
    iVar1 = FUN_00944e20(this,0);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) != 0)) &&
       (iVar1 = *(int *)(*(int *)(iVar1 + 0x2c) + 0x214), iVar1 != 0)) {
      fVar2 = FUN_009722e0(iVar1,(byte *)*param_2);
      return fVar2;
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_0092f830 @ 0092f830 ////

void __fastcall FUN_0092f830(int *param_1)

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
  puStack_8 = &LAB_00cf1d58;
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


//// FUNCTION FUN_0092f900 @ 0092f900 ////

void __cdecl FUN_0092f900(float *param_1,int param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  float local_60 [13];
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_60[0xb] = 0.0;
  local_60[10] = 0.0;
  local_60[9] = 0.0;
  local_60[7] = 0.0;
  local_60[6] = 0.0;
  local_60[5] = 0.0;
  local_60[3] = 0.0;
  local_60[2] = 0.0;
  local_60[1] = 0.0;
  local_60[8] = 1.0;
  local_60[4] = 1.0;
  local_60[0] = 1.0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x148) != 0) {
      pfVar2 = (float *)(*(int *)(param_2 + 0x148) + 0x18);
      pfVar3 = local_60;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar3 = *pfVar2;
        pfVar2 = pfVar2 + 1;
        pfVar3 = pfVar3 + 1;
      }
    }
    local_c = *(undefined4 *)(param_3 + 0x98);
    local_8 = *(undefined4 *)(param_3 + 0x9c);
    fVar4 = (float10)fcos((float10)*(float *)(param_3 + 0xac));
    local_4 = *(undefined4 *)(param_3 + 0xa0);
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_28 = 0;
    local_10 = 0x3f800000;
    local_20 = (float)fVar4;
    local_60[0xc] = (float)fVar4;
    fVar4 = (float10)fsin((float10)*(float *)(param_3 + 0xac));
    local_2c = (float)fVar4;
    local_24 = (float)-fVar4;
    FUN_009aafb0(local_60,local_60 + 0xc);
  }
  pfVar2 = local_60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_0092fa20 @ 0092fa20 ////

void __fastcall FUN_0092fa20(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)((int)param_1 + 0x270) != 0) &&
     (iVar2 = *(int *)(*(int *)((int)param_1 + 0x270) + 0x15c), iVar2 != 0)) {
    uVar1 = FUN_0049da10(iVar2);
    if ((char)uVar1 != '\0') {
      iVar2 = 1;
      goto LAB_0092fa49;
    }
  }
  iVar2 = 0;
LAB_0092fa49:
  FUN_0092f6c0(param_1,&PTR_DAT_00e65dc8,(float)iVar2);
  return;
}


//// FUNCTION FUN_0092fa70 @ 0092fa70 ////

void __fastcall FUN_0092fa70(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_30 [12];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1d7b;
  local_c = ExceptionList;
  uStack_24 = 0x92fa93;
  ExceptionList = &local_c;
  this = operator_new(0x60);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    pcVar2 = local_30;
    local_30[0] = '\0';
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffffc4,*(char **)(param_1 + 0x124),*(uint *)(param_1 + 0x128));
    puVar1 = FUN_00937ba0(this,param_1,pcVar2,uVar3,uVar4);
  }
  *(undefined4 **)(param_1 + 0x228) = puVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092fb00 @ 0092fb00 ////

void __fastcall FUN_0092fb00(void *param_1)

{
  float *pfVar1;
  float local_8;
  float local_4;
  
  local_8 = 0.0;
  if (*(int *)((int)param_1 + 0x270) != 0) {
    pfVar1 = (float *)FUN_0049d1f0(*(void **)(*(int *)((int)param_1 + 0x270) + 0x15c),&local_4);
    local_8 = *pfVar1;
  }
  FUN_0092f6c0(param_1,&PTR_DAT_00e65d88,local_8);
  return;
}


//// FUNCTION FUN_0092fba0 @ 0092fba0 ////

void __fastcall FUN_0092fba0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6d5c0;
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


//// FUNCTION CResearchRoom_RegisterSaveFields @ 0092fbf0 ////

void __fastcall CResearchRoom_RegisterSaveFields(int param_1)

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
  puStack_8 = &LAB_00cf1da0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ResearchRoom.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x1a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x1f8));
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
  uVar3 = FUN_0098b490("PResearchObject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x1f8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ResearchRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x1b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe65d44);
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
  uVar3 = FUN_0098b490("Category");
  if ((char)uVar3 != '\0') {
    FUN_0049bc30((undefined4 *)(param_1 + 500));
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092fdf0 @ 0092fdf0 ////

void __fastcall FUN_0092fdf0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf1dc6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6d63c;
  param_1[0x19] = &PTR_LAB_00d6d61c;
  puVar2 = (undefined4 *)param_1[0x9c];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x97] + 4))();
    param_1[0x9c] = 0;
    (**(code **)param_1[0x97])();
  }
  param_1[0x97] = &PTR_LAB_00d6d5c0;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009301d0 @ 009301d0 ////

void __thiscall FUN_009301d0(void *this,float param_1)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  void *pvStack_4;
  
  if (0.0 < param_1) {
    pvStack_4 = this;
    if (*(int *)((int)this + 0x270) != 0) {
      cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)((int)this + 0x270) + 0x15c) + 0x38) + 0x20))()
      ;
      if (cVar1 == '\0') {
        puVar2 = (undefined4 *)
                 FUN_0049d1f0(*(void **)(*(int *)((int)this + 0x270) + 0x15c),(float *)&pvStack_4);
        pvStack_4 = (void *)*puVar2;
        FUN_0049c6b0(*(void **)(*(int *)((int)this + 0x270) + 0x15c),param_1);
        pfVar3 = (float *)FUN_0049d1f0(*(void **)(*(int *)((int)this + 0x270) + 0x15c),&param_1);
        param_1 = *pfVar3;
        if (((float)pvStack_4 < 0.3) && (0.3 <= param_1)) {
          FUN_0092f6c0(this,&PTR_DAT_00e65d68,0.0);
        }
        if (((float)pvStack_4 < 1.0) && (1.0 <= param_1)) {
          FUN_0092f750(this,&PTR_DAT_00e65da8,1.0);
        }
      }
    }
    FUN_0092fb00(this);
  }
  return;
}


//// FUNCTION FUN_009302d0 @ 009302d0 ////

void __fastcall FUN_009302d0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  float10 fVar4;
  char **ppcVar5;
  float fVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1e18;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0xf8);
  ExceptionList = &local_c;
  if (iVar3 != *(int *)(param_1 + 0xfc)) {
    do {
      iVar1 = FUN_00ace790(*(int **)(iVar3 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                           &TM::CStaff::RTTI_Type_Descriptor,0);
      if (iVar1 != 0) {
        fVar4 = FUN_0043fec0(0xc);
        local_2c = local_20;
        fVar6 = (float)(fVar4 * (float10)0.03287671);
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"Research",8);
        local_28 = 8;
        local_2c[8] = '\0';
        ppcVar5 = &local_2c;
        local_4 = 0;
        pvVar2 = (void *)FUN_00577370(iVar1);
        FUN_004425f0(pvVar2,ppcVar5,fVar6);
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0xfc));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009303e0 @ 009303e0 ////

undefined4 * __thiscall FUN_009303e0(void *this,undefined4 *param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  void *local_20 [2];
  uint local_18;
  
  ppuVar1 = FUN_0049ba30((int *)((int)this + 600));
  puVar2 = FUN_0040d6b0(local_20,"ai_room_res_",ppuVar1);
  FUN_004312e0(param_1,puVar2,"_00.flm");
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return param_1;
}


//// FUNCTION FUN_00930440 @ 00930440 ////

undefined4 * __thiscall FUN_00930440(void *this,byte param_1)

{
  FUN_0092fdf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00930460 @ 00930460 ////

int __fastcall FUN_00930460(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined1 local_68 [12];
  void *local_5c [2];
  uint local_54;
  float afStack_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1e38;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x274) == '\0') {
    piVar1 = *(int **)(*(int *)((int)param_1 + 0xc0) + 0x24c);
    if ((piVar1 != (int *)0x0) && (piVar1[0x47] != 0)) {
      ExceptionList = &local_c;
      puVar2 = FUN_009303e0(param_1,local_5c);
      local_4 = 0;
      this = FUN_0097c450((char *)*puVar2,0,(undefined4 *)0x0,0);
      local_4 = 0xffffffff;
      if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
        _free(local_5c[0]);
      }
      iVar4 = piVar1[0x47];
      fVar6 = *(float *)(iVar4 + 0x80);
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x34))(local_68);
      FUN_00978350(this,puVar2,fVar6,iVar4);
      uVar3 = FUN_0092f420(this);
      if (uVar3 != 0xffffffff) {
        puVar2 = (undefined4 *)
                 FUN_0092f900(afStack_3c,(int)this,*(int *)(*(int *)((int)this + 0x5c) + uVar3 * 4))
        ;
        puVar5 = (undefined4 *)((int)param_1 + 0x278);
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      if (this != (void *)0x0) {
        FUN_00971df0(this);
      }
    }
    *(undefined1 *)((int)param_1 + 0x274) = 1;
  }
  ExceptionList = local_c;
  return (int)param_1 + 0x278;
}


//// FUNCTION FUN_00930580 @ 00930580 ////

void __fastcall FUN_00930580(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_4c [11];
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_1c = (undefined4 *)0x93058d;
  FUN_0093c930(param_1);
  *(undefined1 *)(param_1 + 0x9d) = 0;
  if (param_1[0x9c] != 0) {
    puStack_1c = (undefined4 *)0x9305a5;
    iVar2 = FUN_00930460(param_1);
    local_c = *(undefined4 *)(iVar2 + 0x24);
    local_8 = *(undefined4 *)(iVar2 + 0x28);
    local_4 = *(undefined4 *)(iVar2 + 0x2c);
    puStack_1c = &local_c;
    uStack_20 = 0x9305cc;
    (**(code **)(*(int *)param_1[0x9c] + 0x2c))();
    piVar1 = *(int **)(param_1[0x9c] + 0x11c);
    uStack_20 = 0x9305df;
    puVar3 = (undefined4 *)FUN_00930460(param_1);
    puVar4 = auStack_4c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    (**(code **)(*piVar1 + 0x24))();
  }
  return;
}


//// FUNCTION FUN_00930600 @ 00930600 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00930600(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  float10 fVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1e78;
  local_c = ExceptionList;
  if (DAT_0105052c == '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"research/MaxResearchersPerLab",0x1d);
    local_28 = 0x1d;
    local_2c[0x1d] = '\0';
    local_4 = 0;
    DAT_01050530 = FUN_00558750(DAT_00f88624,&local_2c,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"research/MinProductivity",0x18);
    local_28 = 0x18;
    local_2c[0x18] = '\0';
    local_4 = 1;
    fVar5 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
    _DAT_01050534 = (float)fVar5;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"research/MaxProductivity",0x18);
    local_28 = 0x18;
    local_2c[0x18] = '\0';
    local_4 = 2;
    fVar5 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
    _DAT_01050538 = (float)fVar5;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"research/teamworkfactors",0x18);
    local_28 = 0x18;
    local_2c[0x18] = '\0';
    local_4 = 3;
    uVar2 = FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
    cVar1 = (char)uVar2;
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    while (cVar1 != '\0') {
      puVar3 = FUN_00558de0(DAT_00f88624,&local_2c);
      local_4 = 4;
      uVar4 = FUN_00567d80(puVar3);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      fVar5 = FUN_005586b0(DAT_00f88624,4,0.0);
      if ((DAT_01050540 == 0) || ((uint)(DAT_01050544 - DAT_01050540 >> 2) <= uVar4)) {
        FUN_00567490(&DAT_0105053c,uVar4 + 1);
      }
      *(float *)(DAT_01050540 + uVar4 * 4) = (float)fVar5;
      uVar2 = FUN_00558120(DAT_00f88624,2);
      cVar1 = (char)uVar2;
    }
    DAT_0105052c = '\x01';
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009308c0 @ 009308c0 ////

undefined4 * __fastcall FUN_009308c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1ea6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6d63c;
  param_1[0x19] = &PTR_LAB_00d6d61c;
  FUN_0049ba00(param_1 + 0x96);
  param_1[0x9a] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = param_1 + 0x97;
  param_1[0x97] = &PTR_LAB_00d6d5c0;
  param_1[0x9c] = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa6] = 0x3f800000;
  param_1[0xa2] = 0x3f800000;
  param_1[0x9e] = 0x3f800000;
  FUN_00930600();
  FUN_0093b350(param_1,4);
  FUN_0093b340(param_1,4);
  FUN_0093b330(param_1,4);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CResearchRoom_Constructor @ 009309b0 ////

undefined4 * __thiscall CResearchRoom_Constructor(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1ec6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(this);
  *(undefined4 *)((int)this + 600) = param_1;
  *(undefined ***)this = &PTR_FUN_00d6d63c;
  *(undefined ***)((int)this + 100) = &PTR_LAB_00d6d61c;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 **)((int)this + 0x268) = (undefined4 *)((int)this + 0x25c);
  *(undefined4 *)((int)this + 0x25c) = &PTR_LAB_00d6d5c0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined1 *)((int)this + 0x274) = 0;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x298) = 0x3f800000;
  *(undefined4 *)((int)this + 0x288) = 0x3f800000;
  *(undefined4 *)((int)this + 0x278) = 0x3f800000;
  FUN_00930600();
  FUN_0093b350(this,4);
  FUN_0093b340(this,4);
  FUN_0093b330(this,4);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00930aa0 @ 00930aa0 ////

int __fastcall FUN_00930aa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00930600();
  if (DAT_01050540 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_01050544 - DAT_01050540 >> 2;
  }
  iVar1 = FUN_0093d320(param_1);
  if (iVar1 < iVar2 + -1) {
    iVar2 = FUN_0093d320(param_1);
    return iVar2;
  }
  if (DAT_01050540 == 0) {
    return -1;
  }
  return (DAT_01050544 - DAT_01050540 >> 2) + -1;
}


//// FUNCTION FUN_00930b10 @ 00930b10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00930b10(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  void *this;
  float *pfVar3;
  float10 extraout_ST0;
  undefined4 *puVar4;
  char **ppcVar5;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00930600();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"Research",8);
  local_28 = 8;
  local_2c[8] = '\0';
  ppcVar5 = &local_2c;
  puVar4 = &local_30;
  local_4 = 0;
  this = (void *)FUN_00577370(param_2);
  pfVar3 = (float *)FUN_00441750(this,puVar4,ppcVar5);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  fVar1 = (1.0 - *pfVar3) * _DAT_01050534;
  fVar2 = _DAT_01050538 * *pfVar3;
  FUN_00930aa0(param_1);
  ExceptionList = local_c;
  return extraout_ST0 * (float10)(fVar2 + fVar1);
}


//// FUNCTION FUN_00930bf0 @ 00930bf0 ////

float10 __fastcall FUN_00930bf0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_4;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  local_4 = 0.0;
  if (iVar2 != *(int *)(param_1 + 0xfc)) {
    do {
      iVar1 = FUN_00ace790(*(int **)(iVar2 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                           &TM::CStaff::RTTI_Type_Descriptor,0);
      if (iVar1 != 0) {
        fVar3 = FUN_00930b10(param_1,iVar1);
        local_4 = (float)(fVar3 + (float10)local_4);
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)(param_1 + 0xfc));
  }
  return (float10)local_4;
}


//// FUNCTION FUN_00930c60 @ 00930c60 ////

void __fastcall FUN_00930c60(void *param_1,undefined4 param_2)

{
  undefined4 *this;
  char cVar1;
  bool bVar2;
  void *pvVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  float10 fVar6;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1efb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((*(void **)((int)param_1 + 0xa8) != (void *)0x0) &&
     (ExceptionList = &pvStack_c, *(int **)((int)param_1 + 0xa4) != (int *)0x0)) {
    ExceptionList = &pvStack_c;
    FUN_00980ab0(*(void **)((int)param_1 + 0xa8),**(int **)((int)param_1 + 0xa4),
                 *(int *)((int)param_1 + 0x270) != 0);
    param_2 = extraout_EDX;
  }
  if (*(int *)((int)param_1 + 0xc0) != 0) {
    piVar4 = *(int **)(*(int *)((int)param_1 + 0xc0) + 0x24c);
    param_2 = 0;
    if (piVar4[0xae] != 0) {
      cVar1 = (**(code **)(*piVar4 + 0xc4))();
      param_2 = extraout_EDX_00;
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0xc0) + 0x24c) + 0x16c))();
        param_2 = extraout_EDX_01;
        if ((cVar1 != '\0') && (*(int *)((int)param_1 + 0x270) == 0)) {
          pvVar3 = (void *)FUN_004a30c0((int *)((int)param_1 + 600));
          param_2 = extraout_EDX_02;
          if (pvVar3 != (void *)0x0) {
            this_00 = operator_new(0x17c);
            uStack_4 = 0;
            if (this_00 == (void *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = FUN_004a5710(this_00,(int)param_1,(int)pvVar3);
            }
            uStack_4 = 0xffffffff;
            FUN_0092f490((void *)((int)param_1 + 0x25c),(int)piVar4);
            FUN_0049d1b0(pvVar3,param_1);
            FUN_0092fa20(param_1);
            param_2 = extraout_EDX_03;
          }
        }
      }
    }
  }
  if (*(int *)((int)param_1 + 0x270) != 0) {
    cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x270) + 0x15c) + 0x38) + 0x20))
                      ();
    if (cVar1 == '\0') {
      bVar2 = FUN_0043b920(0xe4fa4c);
      if (bVar2) {
        fVar6 = FUN_00930bf0((int)param_1);
        local_10 = (float)(fVar6 * (float10)0.03287671);
        iVar5 = AwardBonusManager_Get();
        if (iVar5 != 0) {
          iVar5 = 0xb;
          pvVar3 = (void *)AwardBonusManager_Get();
          cVar1 = AwardBonusManager_IsBonusActive(pvVar3,iVar5);
          if (cVar1 != '\0') {
            pvVar3 = (void *)0x0;
            iVar5 = 0xb;
            AwardBonusManager_Get();
            fVar6 = AwardBonus_GetValue(iVar5,pvVar3);
            local_10 = (float)(fVar6 * (float10)local_10);
          }
        }
        FUN_009301d0(param_1,local_10);
        FUN_009302d0((int)param_1);
      }
    }
    cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x270) + 0x15c) + 0x38) + 0x20))
                      ();
    param_2 = extraout_EDX_04;
    if (cVar1 != '\0') {
      fVar6 = FUN_0092f790(param_1,&PTR_DAT_00e65da8);
      param_2 = extraout_EDX_05;
      if ((float10)1.0 != fVar6) {
        pvVar3 = (void *)FUN_004a30c0((int *)((int)param_1 + 600));
        this = *(undefined4 **)((int)param_1 + 0x270);
        if (pvVar3 == (void *)0x0) {
          param_2 = extraout_EDX_06;
          if (this != (undefined4 *)0x0) {
            FUN_00401440(this);
            FUN_0092f490((void *)((int)param_1 + 0x25c),0);
            param_2 = extraout_EDX_08;
          }
        }
        else {
          FUN_004a5120(this,pvVar3);
          FUN_0049d1b0(pvVar3,param_1);
          FUN_0092f6c0(param_1,&PTR_DAT_00e65d68,1.0);
          FUN_0092fa20(param_1);
          param_2 = extraout_EDX_07;
        }
      }
    }
  }
  TMRoom_Tick((uint)param_1,param_2);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00930e90 @ 00930e90 ////

void __fastcall FUN_00930e90(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00930ed0 @ 00930ed0 ////

void FUN_00930ed0(void)

{
  return;
}


//// FUNCTION CReviewsRoom_OnGenericDropped @ 00931020 ////

void CReviewsRoom_OnGenericDropped(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_c [4];
  float fStack_8;
  
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
    if (piVar2 != (int *)0x0) {
      piVar2 = FUN_004aa230(DAT_0104a8ac,piVar2,0);
      (**(code **)(*piVar2 + 0xc))();
      return;
    }
    iVar3 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CInfoObject::RTTI_Type_Descriptor,0);
    pvVar1 = DAT_0104a8ac;
    if (iVar3 != 0) {
      uVar8 = 0;
      uVar7 = GetPlayerStudio();
      piVar2 = FUN_004aa2d0(pvVar1,uVar7,uVar8);
      (**(code **)(*piVar2 + 0xc))();
      return;
    }
  }
  else {
    iVar3 = FUN_005d1940((int)piVar2);
    piVar4 = (int *)FUN_005b22a0(iVar3);
    iVar5 = (**(code **)(*piVar4 + 0x24))();
    pvVar1 = DAT_0104a8ac;
    uVar7 = 0;
    if (iVar5 != 7) {
      piVar2 = (int *)FUN_005d1940((int)piVar2);
      piVar2 = FUN_004aa180(pvVar1,piVar2,uVar7);
      (**(code **)(*piVar2 + 0xc))();
      (**(code **)(*param_1 + 0x34))(auStack_c);
      if (fStack_8 <= 1.0) {
        fStack_8 = 1.0;
      }
      (**(code **)(*param_1 + 0xac))(&stack0xfffffff0);
      return;
    }
    FUN_006f6410(iVar3);
    if ((int *)piVar2[0xa0] != (int *)0x0) {
      iVar3 = *piVar2;
      uVar6 = (**(code **)(*(int *)piVar2[0xa0] + 0x34))(auStack_c);
      (**(code **)(iVar3 + 0x30))(uVar6);
      (**(code **)(*piVar2 + 0xcc))(1,1);
    }
  }
  return;
}


//// FUNCTION FUN_00931320 @ 00931320 ////

void __fastcall FUN_00931320(int *param_1)

{
  int *piVar1;
  undefined1 local_c [12];
  
  piVar1 = (int *)param_1[0x9b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3c] + 0x34))(local_c);
    (**(code **)(*piVar1 + 0x2c))(&stack0xffffffe4);
    *(undefined1 *)(param_1[0x9b] + 0x1fd) = 1;
  }
  FUN_0093c930(param_1);
  return;
}


//// FUNCTION FUN_00931390 @ 00931390 ////

void __fastcall FUN_00931390(int *param_1)

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
  puStack_8 = &LAB_00cf1f38;
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


//// FUNCTION CReviewsRoom_Constructor @ 00931460 ////

undefined4 * __fastcall CReviewsRoom_Constructor(undefined4 *param_1)

{
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6d7c4;
  param_1[0x19] = &PTR_LAB_00d6d7a0;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = param_1 + 0x96;
  param_1[0x96] = &PTR_FUN_00d6ca30;
  param_1[0x9b] = 0;
  *(undefined1 *)((int)param_1 + 0x1c9) = 0;
  return param_1;
}


//// FUNCTION FUN_009314b0 @ 009314b0 ////

void __fastcall FUN_009314b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf1f66;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6d7c4;
  param_1[0x19] = &PTR_LAB_00d6d7a0;
  puVar2 = (undefined4 *)param_1[0x9b];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x96] + 4))();
    param_1[0x9b] = 0;
    (**(code **)param_1[0x96])();
  }
  param_1[0x96] = &PTR_FUN_00d6ca30;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009315b0 @ 009315b0 ////

undefined4 * __thiscall FUN_009315b0(void *this,byte param_1)

{
  FUN_009314b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00931640 @ 00931640 ////

void FUN_00931640(void)

{
  return;
}


//// FUNCTION FUN_00931670 @ 00931670 ////

void __fastcall FUN_00931670(int param_1)

{
  int *_Memory;
  
  _Memory = *(int **)(param_1 + 0x220);
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  return;
}


//// FUNCTION FUN_009316b0 @ 009316b0 ////

undefined4 __fastcall FUN_009316b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x21c);
}


//// FUNCTION FUN_009316d0 @ 009316d0 ////

int * __thiscall FUN_009316d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_009316f0 @ 009316f0 ////

int * __thiscall FUN_009316f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_009317f0 @ 009317f0 ////

undefined4 * __thiscall FUN_009317f0(void *this,undefined4 *param_1)

{
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d6d86c;
  *(undefined4 *)((int)this + 0x50) = *param_1;
  *(undefined4 *)((int)this + 0x54) = param_1[1];
  *(undefined4 *)((int)this + 0x58) = param_1[2];
  return this;
}


//// FUNCTION FUN_00931860 @ 00931860 ////

undefined4 * __thiscall FUN_00931860(void *this,byte param_1)

{
  FUN_00931880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00931880 @ 00931880 ////

void __fastcall FUN_00931880(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6b268;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_009318b0 @ 009318b0 ////

void __thiscall FUN_009318b0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xa0);
    (**(code **)(*(int *)((int)this + 0x1d4) + 4))();
    *(int *)((int)this + 0x1e8) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x1d4))();
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x1e8) + 0xc0);
    (**(code **)(*(int *)((int)this + 0x1bc) + 4))();
    *(undefined4 *)((int)this + 0x1d0) = uVar1;
    (*(code *)**(undefined4 **)((int)this + 0x1bc))();
  }
  return;
}


//// FUNCTION FUN_00931910 @ 00931910 ////

void __fastcall FUN_00931910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00938cf0(*(int *)(param_1 + 0x1d0));
  *(bool *)(param_1 + 0x1ef) = iVar1 == *(int *)(param_1 + 0x1e8);
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  return;
}


//// FUNCTION FUN_00931960 @ 00931960 ////

void __thiscall FUN_00931960(void *this,undefined4 param_1)

{
  int iVar1;
  
  if (*(char *)((int)this + 0x1f0) == '\0') {
    iVar1 = FUN_00938cf0(*(int *)((int)this + 0x1d0));
    *(bool *)((int)this + 0x1ef) = iVar1 == *(int *)((int)this + 0x1e8);
    *(undefined1 *)((int)this + 0x1f0) = 1;
  }
  if (*(int *)((int)this + 0x1e8) != 0) {
    *(void **)(*(int *)((int)this + 0x1e8) + 0x9c) = this;
    (**(code **)(**(int **)((int)this + 0x1e8) + 0x5c))(param_1);
    (**(code **)(*(int *)this + 100))(param_1);
    (**(code **)(**(int **)((int)this + 0x1e8) + 0x1c))(param_1);
  }
  return;
}


//// FUNCTION FUN_00931a40 @ 00931a40 ////

undefined4 __thiscall FUN_00931a40(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1d0) != 0) {
    uVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x1d0) + 0x24c) + 0xc4))();
    if ((char)uVar1 != '\0') goto LAB_00931a88;
  }
  uVar1 = CONCAT31((int3)(uVar1 >> 8),*(char *)((int)this + 0x1ed));
  if (*(char *)((int)this + 0x1ed) != '\0') {
    uVar1 = (**(code **)(**(int **)((int)this + 0x1d0) + 0x20))();
    if (((char)uVar1 != '\0') && (uVar1 = 0, param_1 != 0)) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
  }
LAB_00931a88:
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00931a90 @ 00931a90 ////

undefined4 __fastcall FUN_00931a90(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = (**(code **)(*param_1 + 0x74))();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar1 = param_1[0x74];
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x256) != '\0')) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  if (((char)param_1[0x7b] != '\0') && (((int *)param_1[0x7a] != (int *)0x0 && (DAT_0104d524 != 0)))
     ) {
    cVar2 = (**(code **)(*(int *)param_1[0x7a] + 0x58))(DAT_0104d524);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x38))(DAT_0104d524);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    return 0;
  }
  uVar3 = (**(code **)(*param_1 + 0x38))(DAT_0104d524);
  return uVar3;
}


//// FUNCTION FUN_00931b10 @ 00931b10 ////

void __fastcall FUN_00931b10(int *param_1)

{
  char cVar1;
  
  if (*(char *)((int)param_1 + 0x119) != '\0') {
    *(undefined1 *)((int)param_1 + 0x185) = 0;
    FUN_008c06d0();
    if ((void *)param_1[0x39] != (void *)0x0) {
      FUN_0078a5b0((void *)param_1[0x39],*(byte *)((int)param_1 + 0x185));
    }
  }
  if (*(char *)((int)param_1 + 0x11a) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x80))();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00931b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x5c))();
      return;
    }
    if (param_1[0x39] == 0) {
      (**(code **)(*param_1 + 0x58))();
    }
    (**(code **)(*param_1 + 0x54))();
    if ((char)param_1[0x47] == '\0') {
      (**(code **)(*param_1 + 0x50))(1);
      return;
    }
    (**(code **)(*param_1 + 0x50))(0);
  }
  return;
}


//// FUNCTION FUN_00931bf0 @ 00931bf0 ////

void __fastcall FUN_00931bf0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    iVar1 = FUN_00938cf0(*(int *)(param_1 + 0x1d0));
    *(bool *)(param_1 + 0x1ef) = iVar1 == *(int *)(param_1 + 0x1e8);
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_0078a700(*(int *)(param_1 + 0xe4));
    if (((DAT_01050594 != param_1) && (DAT_0105029c != param_1)) &&
       (*(int *)(*(int *)(param_1 + 0xe4) + 0x74) == 0)) {
      if ((*(char *)(param_1 + 0x1ec) == '\0') ||
         (*(char *)(*(int *)(param_1 + 0x1d0) + 0x255) != '\0')) {
        pcVar2 = "UI_DROP_BUTTON_HIGHLIGHT";
      }
      else {
        if ((*(int *)(param_1 + 0x1e8) == 0) ||
           (*(char *)(*(int *)(param_1 + 0x1e8) + 0x1c4) != '\0')) goto LAB_00931ca7;
        pcVar2 = "UI_ROOM_HIGHLIGHT";
      }
      FUN_005392c0(pcVar2);
    }
  }
LAB_00931ca7:
  if ((*(char *)(param_1 + 0x1ec) != '\0') && (*(int **)(param_1 + 0x1e8) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00931cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x1e8) + 0x80))();
    return;
  }
  return;
}


//// FUNCTION FUN_00931cd0 @ 00931cd0 ////

void __fastcall FUN_00931cd0(int *param_1)

{
  FUN_008c09e0(param_1);
  if ((param_1[0x74] != 0) && (*(char *)(param_1[0x74] + 0x255) != '\0')) {
    FUN_0078a5f0((void *)param_1[0x39],1);
    FUN_00789190((void *)param_1[0x39],1);
    return;
  }
  FUN_0078a5f0((void *)param_1[0x39],0);
  FUN_00789190((void *)param_1[0x39],0);
  *(uint *)(param_1[0x39] + 0x98) = *(uint *)(param_1[0x39] + 0x98) | 0x40;
  return;
}


//// FUNCTION FUN_00931d40 @ 00931d40 ////

void __thiscall FUN_00931d40(void *this,char param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(char *)((int)this + 0x1ee) != param_1) {
    puVar2 = *(undefined4 **)((int)this + 0xe4);
    *(bool *)((int)this + 0x11c) = param_1 == '\0';
    if (puVar2 != (undefined4 *)0x0) {
      if (param_1 != '\0') {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
        (**(code **)(*(int *)((int)this + 0xd0) + 4))();
        *(undefined4 *)((int)this + 0xe4) = 0;
        (*(code *)**(undefined4 **)((int)this + 0xd0))();
        (**(code **)(*(int *)this + 0x58))();
        FUN_0078a800(*(int *)((int)this + 0xe4));
      }
      if (param_1 == '\0') {
        FUN_0078a760(*(int *)((int)this + 0xe4));
      }
    }
    *(char *)((int)this + 0x1ee) = param_1;
  }
  return;
}


//// FUNCTION FUN_00931dc0 @ 00931dc0 ////

undefined4 __fastcall FUN_00931dc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1e8);
}


//// FUNCTION FUN_00931e30 @ 00931e30 ////

void __thiscall FUN_00931e30(void *this,undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *this_00;
  uint uVar4;
  
  iVar2 = FUN_0093c970(*(void **)((int)this + 0x1e8));
  if ((*(void **)((int)this + 0x1e8) != (void *)0x0) && (iVar2 != 0)) {
    if (*(int *)(iVar2 + 0x20) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x20) >> 2;
    }
    uVar4 = *(uint *)((int)this + 0x1b8);
    if (uVar4 < uVar3) {
      this_00 = (void *)FUN_0093c970(*(void **)((int)this + 0x1e8));
      uVar3 = FUN_00944f80(this_00,uVar4);
      if ((char)uVar3 != '\0') {
        cVar1 = (**(code **)(*(int *)this + 0x7c))(param_1);
        if (cVar1 != '\0') {
          FUN_00931d40(this,'\x01');
          return;
        }
      }
      FUN_00931d40(this,'\0');
    }
  }
  return;
}


//// FUNCTION FUN_00931eb0 @ 00931eb0 ////

bool __thiscall FUN_00931eb0(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    if (*(int *)((int)this + 0x1d0) != 0) {
      cVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x1d0) + 0x24c) + 0xc4))();
      if (cVar1 != '\0') {
        return false;
      }
      if (*(int *)(*(int *)(*(int *)((int)this + 0x1d0) + 0x24c) + 0x2b8) != 5) {
        return false;
      }
    }
    piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::TMCharacter::RTTI_Type_Descriptor,0);
    if (piVar2 != (int *)0x0) {
      if ((*(char *)((int)this + 0x1ed) != '\0') &&
         (uVar3 = FUN_00598ee0((int)piVar2), (char)uVar3 != '\0')) {
        return true;
      }
      iVar4 = FUN_00ace790(piVar2,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                           &TM::CExtra::RTTI_Type_Descriptor,0);
      return iVar4 != 0;
    }
  }
  return false;
}


//// FUNCTION FUN_00931fb0 @ 00931fb0 ////

uint __fastcall FUN_00931fb0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x1d0) + 0x24c) + 0xc4))();
    if ((char)uVar2 != '\0') {
      return uVar2 & 0xffffff00;
    }
  }
  piVar1 = *(int **)(param_1 + 0x1e8);
  if ((piVar1 != (int *)0x0) &&
     (uVar2 = *(uint *)(param_1 + 0x1d0), *(int **)(uVar2 + 0x210) == piVar1)) {
    uVar2 = (**(code **)(*piVar1 + 0x84))();
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00932000 @ 00932000 ////

undefined4 __thiscall FUN_00932000(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0x1d0) != 0) &&
     (uVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x1d0) + 0x24c) + 0xc4))(),
     (char)uVar1 != '\0')) {
LAB_0093209d:
    return uVar1 & 0xffffff00;
  }
  if (*(int *)((int)this + 0x21c) == 0) {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) goto LAB_00932063;
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CStar::RTTI_Type_Descriptor,0);
  }
  else {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CStar::RTTI_Type_Descriptor,0);
  }
  if (iVar2 == 0) {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CInfoObject::RTTI_Type_Descriptor,0);
    uVar1 = 0;
    if (iVar2 == 0) goto LAB_0093209d;
  }
LAB_00932063:
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_009320b0 @ 009320b0 ////

void __thiscall FUN_009320b0(void *this,int *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0x21c) == 0) {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    pvVar1 = DAT_0104a8ac;
    uVar4 = 0;
    if (iVar2 == 0) {
      piVar3 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
      if (piVar3 == (int *)0x0) {
        iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                             &TM::CInfoObject::RTTI_Type_Descriptor,0);
        pvVar1 = DAT_0104a8ac;
        if (iVar2 != 0) {
          uVar5 = 0;
          uVar4 = GetPlayerStudio();
          piVar3 = FUN_004aa2d0(pvVar1,uVar4,uVar5);
          (**(code **)(*piVar3 + 0xc))();
        }
      }
      else {
        piVar3 = FUN_004aa230(DAT_0104a8ac,piVar3,0);
        (**(code **)(*piVar3 + 0xc))();
      }
    }
    else {
      piVar3 = (int *)FUN_005d1940(iVar2);
      piVar3 = FUN_004aa180(pvVar1,piVar3,uVar4);
      (**(code **)(*piVar3 + 0xc))();
    }
  }
  else {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CStar::RTTI_Type_Descriptor,0);
    if (iVar2 == 0) {
      iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                           &TM::CInfoObject::RTTI_Type_Descriptor,0);
      if (iVar2 != 0) {
        FUN_00812610();
      }
    }
    else {
      FUN_00812600();
    }
  }
  if (*(int *)((int)this + 0xe4) != 0) {
    FUN_0078a760(*(int *)((int)this + 0xe4));
  }
  return;
}


//// FUNCTION FUN_009321c0 @ 009321c0 ////

void __cdecl FUN_009321c0(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 1:
    *param_1 = L"SITT_ACTION_RELEASEMARKETING_MINIMAL";
    return;
  case 2:
    *param_1 = L"SITT_ACTION_RELEASEMARKETING_SMALL";
    return;
  case 3:
    *param_1 = L"SITT_ACTION_RELEASEMARKETING_AVERAGE";
    return;
  case 4:
    *param_1 = L"SITT_ACTION_RELEASEMARKETING_LARGE";
    return;
  case 5:
    *param_1 = L"SITT_ACTION_RELEASEMARKETING_HUGE";
    return;
  default:
    *param_1 = &lpCaption_00d16918;
    return;
  }
}


//// FUNCTION FUN_00932230 @ 00932230 ////

void __cdecl FUN_00932230(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *param_1 = "marketing_none";
    return;
  case 1:
    *param_1 = "marketing_lowest";
    return;
  case 2:
    *param_1 = "marketing_low";
    return;
  case 3:
    *param_1 = "marketing_medium";
    return;
  case 4:
    *param_1 = "marketing_high";
    return;
  case 5:
    *param_1 = "marketing_highest";
    return;
  default:
    *param_1 = &lpClass_00d16914;
    return;
  }
}


//// FUNCTION FUN_009322e0 @ 009322e0 ////

void __cdecl FUN_009322e0(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *param_1 = "casting_lead";
    return;
  case 1:
    *param_1 = "casting_nonlead";
    return;
  case 2:
    *param_1 = "casting_director";
    return;
  case 3:
    *param_1 = "casting_crew";
    return;
  case 4:
    *param_1 = "casting_stuntman";
    return;
  default:
    *param_1 = &lpClass_00d16914;
    return;
  }
}


//// FUNCTION FUN_00932350 @ 00932350 ////

uint __thiscall FUN_00932350(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1d0) != 0) {
    uVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x1d0) + 0x24c) + 0xc4))();
    if ((char)uVar1 != '\0') goto LAB_0093239e;
  }
  uVar1 = CONCAT31((int3)(uVar1 >> 8),*(char *)((int)this + 0x1ed));
  if (*(char *)((int)this + 0x1ed) != '\0') {
    uVar1 = (**(code **)(**(int **)((int)this + 0x1d0) + 0x20))();
    if (((char)uVar1 != '\0') && (uVar1 = 0, param_1 != 0)) {
      uVar1 = (**(code **)(*(int *)this + 0x7c))(param_1);
      return uVar1;
    }
  }
LAB_0093239e:
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00932520 @ 00932520 ////

void __thiscall FUN_00932520(void *this,undefined4 param_1)

{
  char cVar1;
  
  if ((*(int *)((int)this + 0x1d0) != 0) && (*(char *)(*(int *)((int)this + 0x1d0) + 0x256) != '\0')
     ) {
    FUN_00931d40(this,'\x01');
    return;
  }
  cVar1 = (**(code **)(*(int *)this + 0x7c))(param_1);
  FUN_00931d40(this,cVar1);
  return;
}


//// FUNCTION FUN_00932560 @ 00932560 ////

void __cdecl FUN_00932560(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar4 = DAT_01050554;
  if (DAT_01050554 != &DAT_01050560) {
    do {
      piVar2 = (int *)puVar4[2];
      if (((param_1 == 0) || (cVar3 = (**(code **)(*piVar2 + 0x78))(param_1), cVar3 != '\0')) &&
         ((int *)piVar2[0x74] != (int *)0x0)) {
        if (*(char *)((int)piVar2 + 0x11a) == '\0') {
          FUN_008c10b0(piVar2);
        }
        else if ((param_1 == 0) &&
                (cVar3 = (**(code **)(*(int *)piVar2[0x74] + 0x20))(), cVar3 == '\0')) {
          (**(code **)(*piVar2 + 0x5c))();
        }
        if (*(char *)((int)piVar2 + 0x1ed) != '\0') {
          (**(code **)(*piVar2 + 0x70))(param_1);
        }
      }
      puVar1 = puVar4 + 1;
      puVar4 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_01050560);
  }
  return;
}


//// FUNCTION FUN_009325e0 @ 009325e0 ////

int __cdecl FUN_009325e0(float *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = 0;
  puVar5 = DAT_01050554;
  if (DAT_01050554 != &DAT_01050560) {
    do {
      puVar5 = (undefined4 *)puVar5[1];
      iVar6 = iVar6 + 1;
    } while (puVar5 != &DAT_01050560);
    if (iVar6 != 0) {
      fVar2 = 3.4028235e+38;
      param_1[2] = 0.0;
      puVar5 = DAT_01050554;
      if (DAT_01050554 != &DAT_01050560) {
        do {
          iVar6 = puVar5[2];
          fVar4 = *param_1 - *(float *)(iVar6 + 0x94);
          fVar3 = param_1[1] - *(float *)(iVar6 + 0x98);
          fVar3 = SQRT(fVar4 * fVar4 +
                       fVar3 * fVar3 + -*(float *)(iVar6 + 0x9c) * -*(float *)(iVar6 + 0x9c));
          if ((fVar3 < fVar2) && (fVar3 < *(float *)(iVar6 + 0xe8))) {
            iVar7 = iVar6;
            fVar2 = fVar3;
          }
          puVar1 = puVar5 + 1;
          puVar5 = (undefined4 *)*puVar1;
        } while ((undefined4 *)*puVar1 != &DAT_01050560);
      }
      return iVar7;
    }
  }
  return 0;
}


//// FUNCTION FUN_00932a10 @ 00932a10 ////

void __fastcall FUN_00932a10(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d6dbc4;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00932a60 @ 00932a60 ////

void __fastcall FUN_00932a60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6dbc4;
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


//// FUNCTION FUN_00932ab0 @ 00932ab0 ////

void __fastcall FUN_00932ab0(int *param_1)

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


//// FUNCTION CRoomPointExplainer_Constructor @ 00932b00 ////

undefined4 * __thiscall
CRoomPointExplainer_Constructor
          (void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,char *param_6,uint param_7,uint param_8)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int in_stack_00000038;
  char *pcVar5;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf1fe6;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_008c10f0(this);
  piVar1 = (int *)((int)this + 0x1a8);
  *(undefined ***)this = &PTR_FUN_00d6dbd4;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 **)((int)this + 0x1c8) = (undefined4 *)((int)this + 0x1bc);
  *(undefined4 *)((int)this + 0x1bc) = &PTR_LAB_00d22784;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 **)((int)this + 0x1e0) = (undefined4 *)((int)this + 0x1d4);
  *(undefined4 *)((int)this + 0x1d4) = &PTR_FUN_00d23400;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = (undefined1 *)((int)this + 0x204);
  *(undefined1 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0x14;
  *(undefined4 *)((int)this + 0x218) = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  *(void **)((int)this + 0x1b0) = this;
  FUN_00acdb9e(0xe65e7c);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x1b4) = iVar2;
  if (DAT_00e65e78 != '\0') {
    iVar2 = 0x1a8;
    pcVar5 = "MyLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe65e7c);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    DAT_00e65e78 = '\0';
  }
  *(int ***)((int)this + 0x1ac) = &DAT_01050560;
  *piVar1 = (int)DAT_01050560;
  *(int **)((int)DAT_01050560 + 4) = piVar1;
  DAT_01050560 = piVar1;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined1 *)((int)this + 0x1ec) = 1;
  *(undefined1 *)((int)this + 0x1ed) = 1;
  *(undefined1 *)((int)this + 0x1f0) = 0;
  *(undefined1 *)((int)this + 0x1ef) = 0;
  FUN_004015d0((undefined4 *)((int)this + 0x1f8),param_6,param_7);
  puVar4 = FUN_0040d6b0(local_2c,"ui/",&param_6);
  puVar4 = FUN_004312e0(local_4c,puVar4,".dds");
  FUN_004015d0((void *)((int)this + 0x124),(char *)*puVar4,puVar4[1]);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  puVar4 = FUN_0040d6b0(local_4c,"ui/",&param_6);
  puVar4 = FUN_004312e0(local_2c,puVar4,"_h.dds");
  FUN_004015d0((void *)((int)this + 0x144),(char *)*puVar4,puVar4[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  puVar4 = FUN_0040d6b0(local_4c,"ui/",&param_6);
  puVar4 = FUN_004312e0(local_2c,puVar4,"_d.dds");
  FUN_004015d0((void *)((int)this + 0x164),(char *)*puVar4,puVar4[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  *(undefined4 *)((int)this + 0x10c) = param_1;
  *(undefined4 *)((int)this + 0x110) = param_2;
  *(undefined4 *)((int)this + 0x114) = param_3;
  *(undefined4 *)((int)this + 0x94) = param_1;
  *(undefined4 *)((int)this + 0x98) = param_2;
  *(undefined4 *)((int)this + 0x1b8) = param_5;
  *(undefined4 *)((int)this + 0x9c) = param_3;
  *(undefined4 *)((int)this + 500) = param_4;
  if (in_stack_00000038 != 0) {
    FUN_009318b0(this,in_stack_00000038);
  }
  *(undefined1 *)((int)this + 0x1ee) = 1;
  *(undefined1 *)((int)this + 0x11c) = 1;
  if (*(int *)((int)this + 0xe4) != 0) {
    FUN_0078a760(*(int *)((int)this + 0xe4));
  }
  *(undefined1 *)((int)this + 0x1ee) = 0;
  if (0x14 < param_8) {
                    /* WARNING: Subroutine does not return */
    _free(param_6);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00932e60 @ 00932e60 ////

undefined4 __cdecl FUN_00932e60(int *param_1)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
  piVar2 = (int *)FUN_009325e0(pfVar1);
  uVar3 = 0;
  if ((piVar2 != (int *)0x0) &&
     (uVar3 = CONCAT31((int3)((uint)piVar2 >> 8),*(char *)((int)piVar2 + 0x1ef)),
     *(char *)((int)piVar2 + 0x1ef) == '\0')) {
    uVar3 = (**(code **)(*piVar2 + 0x7c))(param_1);
    if ((char)uVar3 != '\0') {
      uVar4 = (**(code **)(*piVar2 + 100))(param_1);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00932ec0 @ 00932ec0 ////

uint __cdecl FUN_00932ec0(float *param_1)

{
  int iVar1;
  int *this;
  int *piVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 *unaff_retaddr;
  undefined1 auStack_18 [4];
  float fStack_14;
  int iStack_10;
  int iStack_c;
  float fStack_4;
  
  FUN_0078b0e0();
  (*(code *)DAT_01050288[1])();
  DAT_0105029c = 0;
  (*(code *)*DAT_01050288)();
  if ((DAT_01050594 != 0) && (*(int *)(DAT_01050594 + 0x1e8) != 0)) {
    *(undefined4 *)(*(int *)(DAT_01050594 + 0x1e8) + 0x9c) = 0;
  }
  (**(code **)((int)*param_1 + 0x34))(auStack_18);
  fStack_14 = 0.0;
  this = (int *)FUN_009325e0((float *)&stack0xffffffe4);
  piVar2 = (int *)0x0;
  if (this != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*this + 0x74))();
    if ((char)piVar2 != '\0') {
      piVar2 = (int *)(**(code **)(*this + 0x7c))(param_1);
      if ((char)piVar2 != '\0') {
        fStack_14 = (float)this[0x25];
        iStack_10 = this[0x26];
        iStack_c = this[0x27];
        fVar4 = FUN_00412f80(&fStack_14,(float *)&stack0xffffffe0);
        if (fVar4 < (float10)(float)this[0x3a]) {
          puVar3 = (undefined4 *)FUN_00529070(this,&fStack_14);
          *unaff_retaddr = *puVar3;
          unaff_retaddr[1] = puVar3[1];
          unaff_retaddr[2] = puVar3[2];
          if (param_1 != (float *)0x0) {
            (**(code **)(*this + 0x2c))(&fStack_4);
            if (fStack_4 != 3.4028235e+38) {
              *param_1 = fStack_4;
            }
          }
          (**(code **)(*this + 0x24))();
          (**(code **)(*this + 0x28))();
          FUN_009316f0(&DAT_01050580,(int)this);
          iVar1 = this[0x7a];
          if (iVar1 != 0) {
            *(int **)(iVar1 + 0x9c) = this;
          }
          return CONCAT31((int3)((uint)iVar1 >> 8),1);
        }
        piVar2 = (int *)0x0;
        if (DAT_01050594 != 0) {
          *(undefined4 *)(*(int *)(DAT_01050594 + 0x1e8) + 0x9c) = 0;
          piVar2 = FUN_009316f0(&DAT_01050580,0);
        }
      }
    }
  }
  return (uint)piVar2 & 0xffffff00;
}


//// FUNCTION FUN_00933040 @ 00933040 ////

void __fastcall FUN_00933040(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1ffb;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x218) == 0) {
    ExceptionList = &local_c;
    puVar3 = operator_new(0x5c);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_0053d690(puVar3);
      *puVar3 = &PTR_FUN_00d6d86c;
      puVar3[0x14] = *(undefined4 *)(param_1 + 0x94);
      puVar3[0x15] = *(undefined4 *)(param_1 + 0x98);
      puVar3[0x16] = *(undefined4 *)(param_1 + 0x9c);
    }
    local_4 = 0xffffffff;
    iVar4 = FUN_0094f600((int)puVar3,0x3f800000);
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + 1;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x218);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(int *)(param_1 + 0x218) = iVar4;
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00933110 @ 00933110 ////

void __fastcall FUN_00933110(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x218) != 0) {
    FUN_0094f2a0(*(int *)(param_1 + 0x218));
    puVar2 = *(undefined4 **)(param_1 + 0x218);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  return;
}


//// FUNCTION FUN_00933450 @ 00933450 ////

undefined4 * __thiscall FUN_00933450(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_retaddr;
  uint uVar3;
  char *local_44;
  uint local_40;
  uint uStack_3c;
  void *apvStack_24 [2];
  uint uStack_1c;
  
  local_44 = (char *)0x0;
  if (*(int **)((int)this + 0x1e8) == (int *)0x0) {
    FUN_008c0fa0(this,param_1);
    unaff_retaddr = param_1;
  }
  else {
    (**(code **)(**(int **)((int)this + 0x1e8) + 0x40))(&local_40);
    uVar3 = 0xffffffff;
    uVar1 = FUN_00413450(&local_44,"_",0,1);
    puVar2 = FUN_00430770(&local_44,apvStack_24,uVar1 + 1,uVar3);
    FUN_004015d0(&local_44,(char *)*puVar2,puVar2[1]);
    if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_24[0]);
    }
    FUN_0045f450((int *)&local_44);
    *unaff_retaddr = unaff_retaddr + 3;
    *(undefined1 *)(unaff_retaddr + 3) = 0;
    unaff_retaddr[1] = 0;
    unaff_retaddr[2] = 0x14;
    FUN_004015d0(unaff_retaddr,local_44,local_40);
    if (0x14 < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
  }
  return unaff_retaddr;
}


//// FUNCTION CRoomPointExplainer_Destructor @ 00933530 ////

void __fastcall CRoomPointExplainer_Destructor(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf209e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6dbd4;
  local_4 = 5;
  if (param_1[0x86] != 0) {
    FUN_0094f2a0(param_1[0x86]);
    puVar2 = (undefined4 *)param_1[0x86];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    param_1[0x86] = 0;
  }
  if ((undefined4 *)param_1[0x6b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6b] = param_1[0x6a];
  }
  if (param_1[0x6a] != 0) {
    *(undefined4 *)(param_1[0x6a] + 4) = param_1[0x6b];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  puVar2 = (undefined4 *)param_1[0x39];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)param_1[0x86];
  local_4 = CONCAT31(local_4._1_3_,4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x86] = 0;
  if (0x14 < (uint)param_1[0x80]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x7e]);
  }
  param_1[0x75] = &PTR_FUN_00d23400;
  if ((undefined4 *)param_1[0x77] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x77] = param_1[0x76];
  }
  if (param_1[0x76] != 0) {
    *(undefined4 *)(param_1[0x76] + 4) = param_1[0x77];
  }
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  if ((undefined4 *)param_1[0x77] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x77] = param_1[0x76];
  }
  if (param_1[0x76] != 0) {
    *(undefined4 *)(param_1[0x76] + 4) = param_1[0x77];
  }
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x6f] = &PTR_LAB_00d22784;
  if ((undefined4 *)param_1[0x71] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x71] = param_1[0x70];
  }
  if (param_1[0x70] != 0) {
    *(undefined4 *)(param_1[0x70] + 4) = param_1[0x71];
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  if ((undefined4 *)param_1[0x71] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x71] = param_1[0x70];
  }
  if (param_1[0x70] != 0) {
    *(undefined4 *)(param_1[0x70] + 4) = param_1[0x71];
  }
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  if ((undefined4 *)param_1[0x6b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6b] = param_1[0x6a];
  }
  if (param_1[0x6a] != 0) {
    *(undefined4 *)(param_1[0x6a] + 4) = param_1[0x6b];
  }
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  local_4 = 0xffffffff;
  FUN_008c0d90(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00933750 @ 00933750 ////

undefined4 * __thiscall
FUN_00933750(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,uint param_7,uint param_8)

{
  void *this_00;
  void *pvVar1;
  size_t sVar2;
  undefined4 *puVar3;
  char *pcStack00000038;
  int in_stack_0000003c;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_98;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf20d0;
  local_c = ExceptionList;
  pcStack00000038 = &stack0xffffff5c;
  puVar4 = &local_98;
  local_98 = local_98 & 0xffffff00;
  local_4 = 0;
  uVar5 = 0;
  uVar6 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffff5c,param_6,param_7);
  pcStack00000038 = &stack0xffffff48;
  CRoomPointExplainer_Constructor
            (this,param_1,param_2,param_3,param_4,param_5,(char *)puVar4,uVar5,uVar6);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_FUN_00d6dd5c;
  *(int *)((int)this + 0x21c) = in_stack_0000003c;
  if (in_stack_0000003c == 0) {
    pcStack00000038 = "rehearse_perform";
  }
  else if (in_stack_0000003c == 1) {
    pcStack00000038 = "rehearse_watch";
  }
  else {
    pcStack00000038 = "";
  }
  FUN_0048f010(&stack0x00000038,&local_6c);
  FUN_004015d0((void *)((int)this + 0xb0),local_6c,local_68);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  this_00 = (void *)((int)this + 0x188);
  uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(this_00,(wchar_t *)&lpCaption_00d16918,uVar5);
  if (*(int *)((int)this + 0x1d0) != 0) {
    local_98 = 0x9338be;
    pvVar1 = (void *)FUN_00ace790(*(int **)(*(int *)((int)this + 0x1d0) + 0x24c),0,
                                  &TM::TMFixedAsset::RTTI_Type_Descriptor,
                                  &TM::CSet::RTTI_Type_Descriptor,0);
    if ((pvVar1 != (void *)0x0) && (pvVar1 = (void *)FUN_004cbc20(pvVar1,0), pvVar1 != (void *)0x0))
    {
      uVar5 = FUN_00ace02d(L"<phrasebook>");
      FUN_004036d0(this_00,L"<phrasebook>",uVar5);
      sVar2 = FUN_00ace02d(L"<translate>SITT_ACTION_REHEARSE_GENRE</translate>");
      FUN_0040cae0(this_00,L"<translate>SITT_ACTION_REHEARSE_GENRE</translate>",sVar2);
      sVar2 = FUN_00ace02d(L"<phrase key=GENRE>");
      FUN_0040cae0(this_00,L"<phrase key=GENRE>",sVar2);
      puVar3 = FUN_00449f50(pvVar1,&local_4c);
      FUN_0040cae0(this_00,(wchar_t *)*puVar3,puVar3[1]);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
      FUN_0040cae0(this_00,L"</phrase></phrasebook>",sVar2);
    }
  }
  if (*(int *)((int)this + 0x18c) == 0) {
    if (in_stack_0000003c == 0) {
      pcStack00000038 = "TOOLTIP_DROPICON_REHEARSE";
    }
    else if (in_stack_0000003c == 1) {
      pcStack00000038 = "TOOLTIP_DROPICON_WATCH";
    }
    else {
      pcStack00000038 = "";
    }
    FUN_0048f010(&stack0x00000038,&local_4c);
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    FUN_004015d0(&local_6c,local_4c,local_48);
    local_4 = CONCAT31(local_4._1_3_,3);
    puVar3 = FUN_009b5030(local_2c,&local_6c);
    FUN_004036d0(this_00,(wchar_t *)*puVar3,puVar3[1]);
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
  }
  if (param_8 < 0x15) {
    ExceptionList = local_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_6);
}


//// FUNCTION FUN_00933a90 @ 00933a90 ////

undefined4 * __thiscall
FUN_00933a90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,uint param_7,uint param_8)

{
  undefined4 *puVar1;
  char *pcStack00000038;
  int in_stack_0000003c;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_98 [12];
  undefined4 uStack_8c;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2100;
  local_c = ExceptionList;
  pcStack00000038 = &stack0xffffff5c;
  pcVar2 = local_98;
  local_98[0] = '\0';
  local_4 = 0;
  uVar3 = 0;
  uVar4 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffff5c,param_6,param_7);
  pcStack00000038 = &stack0xffffff48;
  CRoomPointExplainer_Constructor(this,param_1,param_2,param_3,param_4,param_5,pcVar2,uVar3,uVar4);
  *(undefined ***)this = &PTR_FUN_00d6dde4;
  *(int *)((int)this + 0x21c) = in_stack_0000003c;
  *(undefined1 *)((int)this + 0x1ec) = 0;
  if (in_stack_0000003c == 0) {
    pcStack00000038 = "info_reviews";
  }
  else if (in_stack_0000003c == 1) {
    pcStack00000038 = "info_finance";
  }
  else {
    pcStack00000038 = "";
  }
  FUN_0048f010(&stack0x00000038,&local_6c);
  uStack_8c = 0x933ba3;
  FUN_004015d0((void *)((int)this + 0xb0),local_6c,local_68);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (in_stack_0000003c == 0) {
    pcStack00000038 = "TOOLTIP_DROPICON_INFO_REVIEWS";
  }
  else if (in_stack_0000003c == 1) {
    pcStack00000038 = "TOOLTIP_DROPICON_INFO_FINANCE";
  }
  else {
    pcStack00000038 = "";
  }
  FUN_0048f010(&stack0x00000038,&local_4c);
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  uStack_8c = 0x933c1a;
  FUN_004015d0(&local_6c,local_4c,local_48);
  local_4 = CONCAT31(local_4._1_3_,3);
  uStack_8c = 0x933c31;
  puVar1 = FUN_009b5030(local_2c,&local_6c);
  uStack_8c = 0x933c46;
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar1,puVar1[1]);
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
  if (0x14 < param_8) {
                    /* WARNING: Subroutine does not return */
    _free(param_6);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION CMarketingExplainer_Constructor @ 00933cc0 ////

undefined4 * __thiscall
CMarketingExplainer_Constructor
          (void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,char *param_6,uint param_7,uint param_8)

{
  void *this_00;
  undefined1 *puStack00000038;
  undefined4 in_stack_0000003c;
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char local_50 [8];
  undefined4 uStack_48;
  char **ppcVar4;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2118;
  local_c = ExceptionList;
  puStack00000038 = &stack0xffffffa4;
  pcVar1 = local_50;
  local_4 = 0;
  local_50[0] = '\0';
  uVar2 = 0;
  uVar3 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffa4,param_6,param_7);
  puStack00000038 = &stack0xffffff90;
  CRoomPointExplainer_Constructor(this,param_1,param_2,param_3,param_4,param_5,pcVar1,uVar2,uVar3);
  ppcVar4 = &local_2c;
  *(undefined ***)this = &PTR_FUN_00d6de6c;
  *(undefined4 *)((int)this + 0x21c) = in_stack_0000003c;
  *(undefined4 *)((int)this + 0x220) = 0;
  uStack_48 = 0x933d6b;
  this_00 = (void *)FUN_00932230(&stack0x00000038,in_stack_0000003c);
  FUN_0048f010(this_00,ppcVar4);
  FUN_004015d0((void *)((int)this + 0xb0),local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)&lpCaption_00d16918,uVar2);
  *(undefined1 *)((int)this + 0x1ec) = 0;
  if (0x14 < param_8) {
                    /* WARNING: Subroutine does not return */
    _free(param_6);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION CMarketingExplainer_Destructor @ 00933df0 ////

void __fastcall CMarketingExplainer_Destructor(undefined4 *param_1)

{
  int *_Memory;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2138;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6de6c;
  _Memory = (int *)param_1[0x88];
  local_4 = 0;
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (param_1[0x39] != 0) {
    FUN_00789240(param_1[0x39]);
    FUN_00789260(param_1[0x39]);
  }
  pvStack_c = (void *)0xffffffff;
  CRoomPointExplainer_Destructor(param_1);
  ExceptionList = unaff_ESI;
  return;
}


//// FUNCTION FUN_00933e80 @ 00933e80 ////

void __fastcall FUN_00933e80(int *param_1)

{
  undefined4 *puVar1;
  
  FUN_00931cd0(param_1);
  if (param_1[0x39] != 0) {
    puVar1 = operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_LAB_00d6d864;
      puVar1[1] = param_1;
      puVar1[2] = &LAB_00933150;
    }
    FUN_00789240(param_1[0x39]);
    puVar1 = operator_new(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_LAB_00d6d864;
      puVar1[1] = param_1;
      puVar1[2] = FUN_00931670;
      FUN_00789260(param_1[0x39]);
      return;
    }
    FUN_00789260(param_1[0x39]);
  }
  return;
}


//// FUNCTION FUN_00933f00 @ 00933f00 ////

undefined4 * __thiscall
FUN_00933f00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,uint param_7,uint param_8)

{
  void *this_00;
  undefined1 *puStack00000038;
  undefined4 in_stack_0000003c;
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char local_50 [8];
  undefined4 uStack_48;
  char **ppcVar4;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2158;
  local_c = ExceptionList;
  puStack00000038 = &stack0xffffffa4;
  pcVar1 = local_50;
  local_4 = 0;
  local_50[0] = '\0';
  uVar2 = 0;
  uVar3 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffa4,param_6,param_7);
  puStack00000038 = &stack0xffffff90;
  CRoomPointExplainer_Constructor(this,param_1,param_2,param_3,param_4,param_5,pcVar1,uVar2,uVar3);
  *(undefined4 *)((int)this + 0x21c) = in_stack_0000003c;
  *(undefined ***)this = &PTR_FUN_00d6def4;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 **)((int)this + 0x22c) = (undefined4 *)((int)this + 0x220);
  *(undefined4 *)((int)this + 0x220) = &PTR_FUN_00d18c3c;
  *(undefined4 *)((int)this + 0x234) = 0;
  ppcVar4 = &local_2c;
  uStack_48 = 0x933fc0;
  this_00 = (void *)FUN_009322e0(&stack0x00000038,in_stack_0000003c);
  FUN_0048f010(this_00,ppcVar4);
  FUN_004015d0((void *)((int)this + 0xb0),local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_8) {
                    /* WARNING: Subroutine does not return */
    _free(param_6);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00934020 @ 00934020 ////

undefined4 * __thiscall
FUN_00934020(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  undefined1 *puStack00000038;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_30 [12];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2180;
  local_c = ExceptionList;
  puStack00000038 = &stack0xffffffc4;
  pcVar2 = local_30;
  local_4 = 0;
  local_30[0] = '\0';
  uVar3 = 0;
  uVar4 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffc4,param_6,param_7);
  puStack00000038 = &stack0xffffffb0;
  CRoomPointExplainer_Constructor(this,param_1,param_2,param_3,param_4,param_5,pcVar2,uVar3,uVar4);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_FUN_00d6dff4;
  uStack_24 = 0x9340c7;
  FUN_004015d0((void *)((int)this + 0xb0),"script_stunticon",0x10);
  uVar1 = FUN_0051ff70(3);
  *(char *)((int)this + 0x21c) = (char)uVar1;
  *(undefined1 *)((int)this + 0x1ec) = 0;
  uStack_24 = 0x9340e5;
  uVar3 = FUN_00ace02d(L"<translate>SITT_ACTION_SCRIPTROOM_STUNT_START</translate>");
  uStack_24 = 0x9340f9;
  FUN_004036d0((void *)((int)this + 0x188),
               L"<translate>SITT_ACTION_SCRIPTROOM_STUNT_START</translate>",uVar3);
  if (0x14 < param_8) {
                    /* WARNING: Subroutine does not return */
    _free(param_6);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00934120 @ 00934120 ////

undefined4 * __thiscall FUN_00934120(void *this,byte param_1)

{
  CRoomPointExplainer_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00934140 @ 00934140 ////

undefined4 * __thiscall FUN_00934140(void *this,byte param_1)

{
  CRoomPointExplainer_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00934170 @ 00934170 ////

undefined4 * __thiscall FUN_00934170(void *this,byte param_1)

{
  CRoomPointExplainer_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009341a0 @ 009341a0 ////

undefined4 * __thiscall FUN_009341a0(void *this,byte param_1)

{
  CMarketingExplainer_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009341c0 @ 009341c0 ////

undefined4 * __thiscall FUN_009341c0(void *this,byte param_1)

{
  FUN_009341e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009341e0 @ 009341e0 ////

void __fastcall FUN_009341e0(undefined4 *param_1)

{
  param_1[0x88] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x8a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8a] = param_1[0x89];
  }
  if (param_1[0x89] != 0) {
    *(undefined4 *)(param_1[0x89] + 4) = param_1[0x8a];
  }
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  if ((undefined4 *)param_1[0x8a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8a] = param_1[0x89];
  }
  if (param_1[0x89] != 0) {
    *(undefined4 *)(param_1[0x89] + 4) = param_1[0x8a];
  }
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  CRoomPointExplainer_Destructor(param_1);
  return;
}


//// FUNCTION FUN_00934260 @ 00934260 ////

undefined4 * __thiscall FUN_00934260(void *this,byte param_1)

{
  CRoomPointExplainer_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00934290 @ 00934290 ////

void __fastcall FUN_00934290(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6e090;
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


//// FUNCTION FUN_009342e0 @ 009342e0 ////

undefined4 * __thiscall FUN_009342e0(void *this,byte param_1)

{
  FUN_00934290(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00934300 @ 00934300 ////

void __fastcall FUN_00934300(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6e090;
  return;
}


//// FUNCTION FUN_009343a0 @ 009343a0 ////

void __fastcall FUN_009343a0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_009343d0 @ 009343d0 ////

void FUN_009343d0(void)

{
  return;
}


//// FUNCTION FUN_009343f0 @ 009343f0 ////

int * __thiscall FUN_009343f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00934560 @ 00934560 ////

void __cdecl FUN_00934560(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00934640 @ 00934640 ////

void __fastcall FUN_00934640(int param_1)

{
  int *this;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_c = *(undefined4 *)(param_1 + 0x1f0);
  local_8 = *(undefined4 *)(param_1 + 500);
  local_4 = *(float *)(param_1 + 0x1f8) + 0.5;
  this = *(int **)(*(int *)(param_1 + 0x270) + 0x210);
  if (this != (int *)0x0) {
    (**(code **)(*this + 0x2c))(&local_c);
    FUN_005d1980(this,*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x24c));
    if (*(int *)(param_1 + 0xf8) == 0) {
      FUN_0053a270(this,0xffffffff);
      return;
    }
    FUN_0053a270(this,(*(int *)(param_1 + 0xfc) - *(int *)(param_1 + 0xf8)) / 0x18 + -1);
  }
  return;
}


//// FUNCTION FUN_009346f0 @ 009346f0 ////

void __thiscall FUN_009346f0(void *this,int param_1)

{
  float fVar1;
  
  fVar1 = (float)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar1 = fVar1 * 0.2;
  if (fVar1 < 0.0) {
    *(undefined4 *)((int)this + 0x274) = 0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *(float *)((int)this + 0x274) = fVar1;
  return;
}


//// FUNCTION GenreWritingStation_SetGenre @ 00934770 ////

void __thiscall GenreWritingStation_SetGenre(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x278) + 4))();
  *(undefined4 *)((int)this + 0x28c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x278))();
  return;
}


//// FUNCTION FUN_009347b0 @ 009347b0 ////

void __thiscall FUN_009347b0(void *this,int *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                &TM::CStaff::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                  &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (pvVar1 != (void *)0x0) {
      FUN_005d1980(pvVar1,*(undefined4 *)(*(int *)((int)this + 0xc0) + 0x24c));
      return;
    }
  }
  else {
    FUN_0053a230(pvVar1,1);
    CStar_SetCurrentProject(pvVar1,(void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00934860 @ 00934860 ////

void __fastcall FUN_00934860(int param_1)

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


//// FUNCTION FUN_00934950 @ 00934950 ////

void __cdecl FUN_00934950(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009349d0 @ 009349d0 ////

void __fastcall FUN_009349d0(int *param_1)

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
  puStack_8 = &LAB_00cf21b8;
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


//// FUNCTION FUN_00934aa0 @ 00934aa0 ////

void __fastcall FUN_00934aa0(int param_1)

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
  puStack_8 = &LAB_00cf21f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ScriptRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x23;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("PGenre");
  if ((char)uVar3 != '\0') {
    FUN_0044a970((int *)(param_1 + 0x214));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ScriptRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x22c));
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
  uVar3 = FUN_0098b490("PHall");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x22c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ScriptRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("BFirstAddedToHall");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 500),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ScriptRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x1f8));
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
    FUN_00990970((int *)(param_1 + 0x1f8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ScriptRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x27;
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
  uVar3 = FUN_0098b490("Quality");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x210));
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION DesireWriteScript_CreateInstance @ 00934f50 ////

int * DesireWriteScript_CreateInstance(int *param_1)

{
  void *pvVar1;
  int *this;
  uint unaff_EDI;
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  char local_20 [4];
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2223;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x144);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = DesireWriteScript_Constructor(pvVar1,param_1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = &DAT_00000014;
  _strncpy(local_2c,"writescript",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  pvVar1 = (void *)0x0;
  local_4 = 1;
  (**(code **)(*this + 0x44))(&local_2c,0,0,0,0,param_1);
  uStack_1c = 0xffffffff;
  if (0x14 < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  FUN_00842f90(this,1.0);
  ExceptionList = local_24;
  return this;
}


//// FUNCTION FUN_00935030 @ 00935030 ////

undefined4 __thiscall FUN_00935030(void *this,int *param_1)

{
  void *this_00;
  void *pvVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  undefined3 extraout_var;
  undefined4 uVar10;
  undefined3 extraout_var_00;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2258;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 0x200);
  ExceptionList = &local_c;
  uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
  piVar6 = (int *)FUN_004036d0(this_00,(wchar_t *)&lpCaption_00d16918,uVar5);
  if (param_1 == (int *)0x0) goto LAB_0093537e;
  iVar7 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if ((iVar7 != 0) &&
     ((pvVar8 = (void *)FUN_0053ae00(iVar7), pvVar8 == this ||
      (pvVar1 = *(void **)((int)this + 0x270), pvVar8 = (void *)FUN_005d1940(iVar7),
      pvVar8 == pvVar1)))) goto LAB_00935367;
  piVar9 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::TMCharacter::RTTI_Type_Descriptor,0);
  piVar6 = piVar9;
  if ((piVar9 == (int *)0x0) || (7 < piVar9[0x131])) {
LAB_0093537e:
    ExceptionList = local_c;
    return (uint)piVar6 & 0xffffff00;
  }
  iVar7 = FUN_00ace790(piVar9,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar7 != 0) {
    bVar2 = FUN_0059c5e0(iVar7);
    piVar6 = (int *)CONCAT31(extraout_var,bVar2);
    if (bVar2) goto LAB_0093537e;
  }
  uVar10 = FUN_00598ee0((int)piVar9);
  if (((char)uVar10 != '\0') && (iVar7 = (**(code **)(*piVar9 + 0x27c))(), iVar7 != 0)) {
    iVar7 = (**(code **)(*piVar9 + 0x27c))();
    cVar3 = FUN_004724d0(iVar7);
    piVar6 = (int *)CONCAT31(extraout_var_00,cVar3);
    if (cVar3 != '\0') goto LAB_0093537e;
  }
  piVar6 = (int *)0x0;
  if (*(int *)((int)this + 0xc0) == 0) goto LAB_0093537e;
  iVar7 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityScriptOffice::RTTI_Type_Descriptor,0);
  pvVar8 = (void *)0x0;
  if (iVar7 == 0) goto LAB_00935367;
  iVar11 = FUN_0084a090(iVar7);
  if ((iVar11 != 0) && (piVar6 = (int *)FUN_005b4cf0(iVar11), (int *)0x4 < piVar6))
  goto LAB_0093537e;
  if (*(void **)((int)this + 0x2a4) == this) {
    iVar7 = FUN_0084a0a0(iVar7);
    piVar6 = (int *)0x0;
    if (iVar7 == 0) goto LAB_0093537e;
    uVar4 = FUN_005b60b0(iVar11);
    if ((char)uVar4 != '\0') {
      FUN_00401de0(apvStack_4c,"SITT_ACTION_SCRIPTROOM_STUNT_ASSIST",0xffffffff);
      uStack_4 = 1;
LAB_00935325:
      puVar12 = FUN_009b5030(apvStack_2c,apvStack_4c);
      pvVar8 = FUN_00403e70(this_00,puVar12);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      goto LAB_00935367;
    }
    FUN_00401de0(apvStack_4c,"SITT_ACTION_SCRIPTROOM_ASSIST",0xffffffff);
    uStack_4 = 0;
  }
  else {
    iVar13 = FUN_0084a0a0(iVar7);
    if (iVar13 == 0) {
      FUN_00401de0(apvStack_4c,"SITT_ACTION_SCRIPTROOM_START",0xffffffff);
      uStack_4 = 2;
      puVar12 = FUN_009b5030(apvStack_2c,apvStack_4c);
      pvVar8 = FUN_00403e70(this_00,puVar12);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      goto LAB_00935367;
    }
    piVar6 = (int *)FUN_0084a0a0(iVar7);
    if (piVar6 != this) goto LAB_0093537e;
    uVar4 = FUN_005b60b0(iVar11);
    if ((char)uVar4 != '\0') {
      FUN_00401de0(apvStack_4c,"SITT_ACTION_SCRIPTROOM_STUNT_ASSIST",0xffffffff);
      uStack_4 = 4;
      goto LAB_00935325;
    }
    FUN_00401de0(apvStack_4c,"SITT_ACTION_SCRIPTROOM_ASSIST",0xffffffff);
    uStack_4 = 3;
  }
  puVar12 = FUN_009b5030(apvStack_2c,apvStack_4c);
  pvVar8 = FUN_00403e70(this_00,puVar12);
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_4c[0]);
  }
LAB_00935367:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)pvVar8 >> 8),1);
}


//// FUNCTION FUN_00935460 @ 00935460 ////

void __fastcall FUN_00935460(int param_1)

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


//// FUNCTION FUN_00935480 @ 00935480 ////

void __fastcall FUN_00935480(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6e150;
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


//// FUNCTION FUN_00935540 @ 00935540 ////

void * FUN_00935540(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION GenreWritingStation_Constructor @ 00935570 ////

undefined4 * __fastcall GenreWritingStation_Constructor(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf22aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6e184;
  param_1[0x19] = &PTR_LAB_00d6e160;
  param_1[0x9a] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = param_1 + 0x97;
  param_1[0x97] = &PTR_FUN_00d18c3c;
  param_1[0x9c] = 0;
  piVar1 = param_1 + 0x9e;
  param_1[0x9d] = 0;
  param_1[0xa1] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1a49c;
  param_1[0xa3] = 0;
  piVar2 = param_1 + 0xa4;
  param_1[0xa7] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d6e150;
  param_1[0xa9] = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  FUN_0093b350(param_1,5);
  FUN_0093b340(param_1,5);
  FUN_0093b330(param_1,5);
  *(undefined1 *)(param_1 + 0x96) = 0;
  (**(code **)(*piVar2 + 4))();
  param_1[0xa9] = 0;
  (**(code **)*piVar2)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"genre_action",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar3 = GenreKey_ToEnum(&local_2c);
  (**(code **)(*piVar1 + 4))();
  param_1[0xa3] = iVar3;
  (**(code **)*piVar1)();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009356d0 @ 009356d0 ////

void __thiscall FUN_009356d0(void *this,void *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *local_4c;
  int local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf22d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0093d540(this,param_1,param_2,param_3);
  puVar3 = (undefined4 *)FUN_00528450(*(int *)(param_3 + 0x24c));
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,(char *)*puVar3,puVar3[1]);
  local_4 = 0;
  uVar4 = FUN_00413450(&local_4c,"_",0,1);
  uVar2 = uVar4;
  while (uVar1 = uVar4, uVar1 != 0xffffffff) {
    uVar4 = FUN_00413450(&local_4c,"_",uVar1 + 1,1);
    uVar2 = uVar1;
  }
  puVar3 = FUN_00430770(&local_4c,local_2c,uVar2 + 1,0xffffffff);
  FUN_004015d0(&local_4c,(char *)*puVar3,puVar3[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (local_48 != 0) {
    puVar3 = FUN_00430770(&local_4c,local_2c,0,1);
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar5 = FUN_00567d80(puVar3);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (iVar5 != 0) {
      FUN_009346f0(this,iVar5);
    }
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00935830 @ 00935830 ////

void __fastcall FUN_00935830(int *param_1)

{
  void *this;
  int iVar1;
  
  iVar1 = param_1[0x3e];
  if (iVar1 != param_1[0x3f]) {
    do {
      this = (void *)FUN_00ace790(*(int **)(iVar1 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                                  &TM::CStaff::RTTI_Type_Descriptor,0);
      if (this != (void *)0x0) {
        FUN_0053a230(this,1);
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != param_1[0x3f]);
  }
  (**(code **)(param_1[0x97] + 4))();
  param_1[0x9c] = 0;
  (**(code **)param_1[0x97])();
                    /* WARNING: Could not recover jumptable at 0x0093589a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}


//// FUNCTION FUN_009358a0 @ 009358a0 ////

void __fastcall FUN_009358a0(int *param_1)

{
  void *this;
  int iVar1;
  
  iVar1 = param_1[0x3e];
  if (iVar1 != param_1[0x3f]) {
    do {
      this = (void *)FUN_00ace790(*(int **)(iVar1 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                                  &TM::CStaff::RTTI_Type_Descriptor,0);
      if (this != (void *)0x0) {
        CStar_SetCurrentProject(this,(void *)0x0);
      }
      iVar1 = iVar1 + 0x18;
    } while (iVar1 != param_1[0x3f]);
  }
  FUN_0093c8d0(param_1);
  return;
}


//// FUNCTION FUN_00935930 @ 00935930 ////

void __fastcall FUN_00935930(int param_1)

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


//// FUNCTION FUN_00935960 @ 00935960 ////

undefined4 * FUN_00935960(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00935990 @ 00935990 ////

undefined4 * __thiscall FUN_00935990(void *this,byte param_1)

{
  FUN_009359b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009359b0 @ 009359b0 ////

void __fastcall FUN_009359b0(undefined4 *param_1)

{
  param_1[0xa4] = &PTR_FUN_00d6e150;
  if ((undefined4 *)param_1[0xa6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa6] = param_1[0xa5];
  }
  if (param_1[0xa5] != 0) {
    *(undefined4 *)(param_1[0xa5] + 4) = param_1[0xa6];
  }
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa9] = 0;
  if ((undefined4 *)param_1[0xa6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa6] = param_1[0xa5];
  }
  if (param_1[0xa5] != 0) {
    *(undefined4 *)(param_1[0xa5] + 4) = param_1[0xa6];
  }
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0x9e] = &PTR_FUN_00d1a49c;
  if ((undefined4 *)param_1[0xa0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa0] = param_1[0x9f];
  }
  if (param_1[0x9f] != 0) {
    *(undefined4 *)(param_1[0x9f] + 4) = param_1[0xa0];
  }
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  if ((undefined4 *)param_1[0xa0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa0] = param_1[0x9f];
  }
  if (param_1[0x9f] != 0) {
    *(undefined4 *)(param_1[0x9f] + 4) = param_1[0xa0];
  }
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x97] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  TMRoom_Destructor(param_1);
  return;
}


//// FUNCTION FUN_00935b10 @ 00935b10 ////

void __fastcall FUN_00935b10(int param_1)

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


//// FUNCTION FUN_00935b40 @ 00935b40 ////

void FUN_00935b40(void)

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
  puStack_8 = &LAB_00cf22e8;
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


//// FUNCTION FUN_00935c00 @ 00935c00 ////

void __thiscall FUN_00935c00(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00935b40();
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
      _Dst = FUN_00935960((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00935540(param_1,iVar5,param_1 + param_2);
      FUN_00935960(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00934560(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00935540(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00934950(param_1,(int)pvVar3,iVar5);
    FUN_00934560(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00935e40 @ 00935e40 ////

void __thiscall FUN_00935e40(void *this,undefined4 *param_1)

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
  FUN_00935c00(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00935e90 @ 00935e90 ////

undefined4 __fastcall FUN_00935e90(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *_Memory;
  float local_30;
  float local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2308;
  local_c = ExceptionList;
  _Memory = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_2c = *(float *)(param_1 + 0x274) - 0.1;
  local_4 = 0;
  if (local_2c < 0.0) {
    local_2c = 0.0;
    goto LAB_00935f2e;
  }
  if (local_2c <= 1.0) {
    if (local_2c < 0.0) {
      local_2c = 0.0;
      goto LAB_00935f2e;
    }
    if (local_2c <= 1.0) goto LAB_00935f2e;
  }
  local_2c = 1.0;
LAB_00935f2e:
  local_30 = *(float *)(param_1 + 0x274) + 0.1;
  if (0.0 <= local_30) {
    if (local_30 <= 1.0) {
      if (local_30 < 0.0) {
        local_30 = 0.0;
      }
      else if (1.0 < local_30) {
        local_30 = 1.0;
      }
    }
    else {
      local_30 = 1.0;
    }
  }
  else {
    local_30 = 0.0;
  }
  if (local_2c < 0.11 != (local_2c == 0.11)) {
    local_2c = 0.0;
  }
  puVar6 = DAT_0104ac84;
  ExceptionList = &local_c;
  if (DAT_0104ac84 != &DAT_0104ac90) {
    do {
      this = (void *)puVar6[2];
      local_28 = this;
      if (((this != (void *)0x0) &&
          (((iVar1 = FUN_004bdcc0((int)this), iVar1 == 0 ||
            (iVar1 = *(int *)(param_1 + 0x28c), iVar2 = FUN_004bdcc0((int)this), _Memory = local_18,
            iVar2 == iVar1)) &&
           (pfVar3 = (float *)FUN_004bdbc0(this,&local_24), local_2c <= *pfVar3)))) &&
         ((pfVar3 = (float *)FUN_004bdbc0(this,&local_20),
          *pfVar3 < local_30 != (*pfVar3 == local_30) &&
          (uVar4 = FUN_004c9460(this,(void *)0x0,'\x01','\x01'), (char)uVar4 != '\0')))) {
        FUN_00935e40(local_1c,&local_28);
        *(undefined1 *)(param_1 + 0x2a8) = 0;
        _Memory = local_18;
      }
      puVar6 = (undefined4 *)puVar6[1];
    } while (puVar6 != &DAT_0104ac90);
    if (_Memory != (int *)0x0) {
      uVar4 = local_14 - (int)_Memory >> 2;
      if (uVar4 != 0) {
        iVar1 = *(int *)(*_Memory + 0x1e8);
        for (uVar5 = 1; uVar5 < uVar4; uVar5 = uVar5 + 1) {
          if (*(int *)(_Memory[uVar5] + 0x1e8) < iVar1) {
            iVar1 = *(int *)(_Memory[uVar5] + 0x1e8);
          }
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00936100 @ 00936100 ////

void __fastcall FUN_00936100(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *this;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_6c;
  int *piVar6;
  char **ppcVar7;
  uint local_44;
  undefined4 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf232b;
  local_c = ExceptionList;
  local_44 = 0;
  ExceptionList = &local_c;
  if (param_1[0x4a] != 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"ai_room_so_hall",0xf);
    ppcVar7 = &local_2c;
    piVar6 = param_1 + 0x49;
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_44 = 1;
    uStack_6c = 0x93617c;
    uVar2 = FUN_00401ec0(piVar6,ppcVar7);
    if (((char)uVar2 == '\0') && ((DAT_0104a974 == 0 || (*(float *)(DAT_0104a974 + 0x80) == 0.0))))
    {
      bVar1 = false;
      goto LAB_009361ac;
    }
  }
  bVar1 = true;
LAB_009361ac:
  if (((local_44 & 1) != 0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (!bVar1) {
    if ((param_1[0x36] == 0) || (param_1[0x8a] == 0)) {
      FUN_0093c5e0(param_1,'\0');
    }
    (**(code **)(*param_1 + 0x68))();
    if ((void *)param_1[0x8a] != (void *)0x0) {
      FUN_00944f10((void *)param_1[0x8a],&uStack_38,1);
      FUN_00944f40((void *)param_1[0x8a],&local_44,1);
      this = operator_new(0x220);
      uStack_4 = 0;
      if (this == (undefined4 *)0x0) {
        puStack_40 = (undefined4 *)0x0;
      }
      else {
        puStack_3c = &stack0xffffff88;
        puVar3 = &uStack_6c;
        uStack_6c = uStack_6c & 0xffffff00;
        uVar4 = 0;
        uVar5 = 0x14;
        puStack_40 = this;
        FUN_004015d0(&stack0xffffff88,"button_stuntman",0xf);
        puStack_3c = &stack0xffffff74;
        puStack_40 = FUN_00934020(this,uStack_38,uStack_34,uStack_30,local_44,0,(char *)puVar3,uVar4
                                  ,uVar5);
      }
      uStack_4 = 0xffffffff;
      *(undefined1 *)((int)puStack_40 + 0x1ed) = 1;
      FUN_00931d40(puStack_40,'\x01');
      FUN_00926df0(param_1 + 0x23,&puStack_40);
    }
    FUN_0093cd90(param_1,'\x01');
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009362e0 @ 009362e0 ////

void __thiscall FUN_009362e0(void *this,int *param_1)

{
  wchar_t *_Source;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 extraout_ECX;
  undefined1 *puVar12;
  uint uVar13;
  uint local_a8;
  undefined1 *local_a4;
  int *local_a0;
  uint local_9c;
  int iStack_98;
  undefined4 *puStack_94;
  uint uStack_90;
  wchar_t *pwStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined1 auStack_80 [20];
  void *local_6c [2];
  uint local_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2356;
  local_c = ExceptionList;
  pvVar9 = *(void **)((int)this + 0x270);
  local_9c = 0;
  if ((pvVar9 != (void *)0x0) && (param_1 == *(int **)((int)pvVar9 + 0x210))) {
    ExceptionList = &local_c;
    FUN_005b5840(pvVar9,'\0');
    *(undefined1 *)((int)this + 600) = 0;
    FUN_00934640((int)this);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::TMCharacter::RTTI_Type_Descriptor,0);
  if (piVar4 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  if (7 < piVar4[0x131]) {
    ExceptionList = local_c;
    return;
  }
  local_a0 = piVar4;
  iVar5 = FUN_00ace790(piVar4,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  if (iVar5 != 0) {
    local_a4 = &stack0xffffff40;
    bVar3 = FUN_0059c5e0(iVar5);
    if (bVar3) {
      ExceptionList = local_c;
      return;
    }
  }
  bVar3 = false;
  if (*(void **)((int)this + 0x2a4) == this) {
    iVar5 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                         &TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CFacilityScriptOffice::RTTI_Type_Descriptor,0);
    if ((iVar5 != 0) && (iVar5 = FUN_0084a0a0(iVar5), iVar5 != 0)) {
      CStar_SetCurrentProject(piVar4,*(void **)(iVar5 + 0x270));
    }
    goto LAB_00936908;
  }
  if (*(void **)((int)this + 0x270) != (void *)0x0) {
    CStar_SetCurrentProject(piVar4,*(void **)((int)this + 0x270));
    goto LAB_00936908;
  }
  local_a8 = local_a8 & 0xffffff00;
  if ((*(int *)((int)this + 0x9c) != 0) && (uVar6 = FUN_0051ff70(3), (char)uVar6 != '\0')) {
    local_a8 = CONCAT31(local_a8._1_3_,1);
  }
  *(undefined1 *)((int)this + 600) = 0;
  iVar5 = FUN_00935e90((int)this);
  puVar10 = (undefined4 *)0x0;
  if ((iVar5 == 0) || ((char)local_a8 != '\0')) {
LAB_0093649b:
    local_a4 = &stack0xffffff3c;
    FUN_00577960(piVar4,*(int *)((int)this + 0x28c),*(float *)((int)this + 0x274),(char)local_a8);
  }
  else {
    puVar10 = (undefined4 *)FUN_004bd050(iVar5);
    puVar10 = ScriptDefinition_CreateAndLoad(puVar10);
    FUN_004bdcd0(puVar10,*(undefined4 *)((int)this + 0x28c));
    *(int *)(iVar5 + 0x1e8) = *(int *)(iVar5 + 0x1e8) + 1;
    *(undefined4 *)(iVar5 + 0x1ec) = DAT_00e4fa4c;
    if (puVar10 == (undefined4 *)0x0) goto LAB_0093649b;
    FUN_00577910(piVar4,puVar10);
  }
  iVar5 = FUN_00577d80((int)piVar4);
  FUN_00433ba0((void *)((int)this + 0x25c),iVar5);
  if (puVar10 == (undefined4 *)0x0) {
    piVar11 = FUN_005be730((int *)local_6c,*(int *)((int)this + 0x28c));
    FUN_004be400(*(void **)((int)this + 0x270),piVar11);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
  }
  while ((*(int *)((int)this + 0x90) != 0 &&
         (*(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2 != 0))) {
    puVar10 = *(undefined4 **)(*(int *)((int)this + 0x94) + -4);
    if ((*(int *)((int)this + 0x90) != 0) &&
       (*(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2 != 0)) {
      *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + -4;
    }
    if (puVar10 != (undefined4 *)0x0) {
      piVar11 = puVar10 + 0x12;
      *piVar11 = *piVar11 + -1;
      if (*piVar11 == 0) {
        (**(code **)*puVar10)();
      }
    }
  }
  bVar3 = false;
  iStack_98 = 0;
  do {
    if (9 < iStack_98) break;
    bVar2 = false;
    FUN_0045f620(*(void **)((int)this + 0x270),&pwStack_8c);
    uStack_4 = 0;
    puVar10 = DAT_0104d688;
    if (DAT_0104d688 != &DAT_0104d694) {
      do {
        if ((void *)puVar10[2] == *(void **)((int)this + 0x270)) {
LAB_009365f8:
          bVar1 = false;
        }
        else {
          puVar7 = FUN_0045f620((void *)puVar10[2],local_6c);
          local_9c = local_9c | 1;
          iVar5 = _wcscmp((wchar_t *)*puVar7,pwStack_8c);
          if (iVar5 != 0) goto LAB_009365f8;
          bVar1 = true;
        }
        if (((local_9c & 1) != 0) && (local_9c = local_9c & 0xfffffffe, 10 < local_64)) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (bVar1) goto LAB_0093675f;
        puVar7 = puVar10 + 1;
        puVar10 = (undefined4 *)*puVar7;
      } while ((undefined4 *)*puVar7 != &DAT_0104d694);
    }
    PlayerMovies_Begin(&local_a8);
    PlayerMovies_End(&uStack_90);
    if (local_a8 != uStack_90) {
      do {
        iVar5 = _wcscmp(pwStack_8c,*(wchar_t **)(*(int *)(local_a8 + 8) + 0x70));
        if (iVar5 == 0) goto LAB_0093675f;
        local_a8 = *(uint *)(local_a8 + 4);
      } while (local_a8 != uStack_90);
    }
    puStack_94 = DAT_0104bcf0;
    if (DAT_0104bcf0 == &DAT_0104bcfc) {
LAB_00936755:
      bVar3 = true;
    }
    else {
      do {
        iVar5 = FUN_00ace790((int *)puStack_94[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                             &TM::CStudioAI::RTTI_Type_Descriptor,0);
        if (iVar5 != 0) {
          puVar12 = *(undefined1 **)(iVar5 + 0x238);
          local_a4 = (undefined1 *)(iVar5 + 0x244);
          if (puVar12 != local_a4) {
            do {
              puVar10 = FUN_005a3200(*(void **)(puVar12 + 8),apvStack_2c);
              iVar5 = _wcscmp((wchar_t *)*puVar10,pwStack_8c);
              if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_2c[0]);
              }
              if (iVar5 == 0) {
                bVar2 = true;
                break;
              }
              puVar12 = *(undefined1 **)(puVar12 + 4);
            } while (puVar12 != local_a4);
          }
        }
        puStack_94 = (undefined4 *)puStack_94[1];
      } while (puStack_94 != &DAT_0104bcfc);
      puStack_94 = &DAT_0104bcfc;
      if (!bVar2) goto LAB_00936755;
LAB_0093675f:
      piVar4 = FUN_005be730((int *)apvStack_4c,*(int *)((int)this + 0x28c));
      iVar5 = *(int *)((int)this + 0x270);
      uVar13 = piVar4[1];
      _Source = (wchar_t *)*piVar4;
      if (*(uint *)(iVar5 + 0x264) <= uVar13) {
        if (10 < *(uint *)(iVar5 + 0x264)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar5 + 0x25c));
        }
        uVar8 = uVar13 + 0x20 >> 5;
        *(uint *)(iVar5 + 0x264) = uVar8 << 5;
        pvVar9 = _malloc(uVar8 * 0x40);
        *(void **)(iVar5 + 0x25c) = pvVar9;
      }
      _wcsncpy(*(wchar_t **)(iVar5 + 0x25c),_Source,uVar13);
      *(uint *)(iVar5 + 0x260) = uVar13;
      *(undefined2 *)(*(int *)(iVar5 + 0x25c) + uVar13 * 2) = 0;
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
    }
    iStack_98 = iStack_98 + 1;
    uStack_4 = 0xffffffff;
    if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_8c);
    }
    piVar4 = local_a0;
  } while (!bVar3);
  pvVar9 = (void *)FUN_005b2130(*(int *)((int)this + 0x270));
  FUN_004bdcd0(pvVar9,*(undefined4 *)((int)this + 0x28c));
  local_a4 = &stack0xffffff40;
  uVar6 = extraout_ECX;
  FUN_00407070(&stack0xffffff40,0.0);
  FUN_004bd010(pvVar9,uVar6);
  FUN_004c3ae0(pvVar9,'\x01');
  FUN_005b26e0(*(void **)((int)this + 0x270),*(undefined4 *)((int)this + 0x28c));
  if ((*(int *)((int)this + 0xc0) != 0) &&
     (pvVar9 = (void *)FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                                    &TM::TMFixedAsset::RTTI_Type_Descriptor,
                                    &TM::CFacilityScriptOffice::RTTI_Type_Descriptor,0),
     pvVar9 != (void *)0x0)) {
    iVar5 = *(int *)((int)this + 0x270);
    FUN_0084aa00(pvVar9,iVar5,this);
    if ((*(int *)((int)this + 0x270) != 0) ||
       (FUN_00433ba0((void *)((int)this + 0x25c),iVar5), *(int *)((int)this + 0x270) != 0)) {
      FUN_00934640((int)this);
    }
  }
  local_a4 = *(undefined1 **)((int)this + 0x274);
  pvVar9 = (void *)FUN_005b2330(*(int *)((int)this + 0x270));
  FUN_005c88d0(pvVar9);
  bVar3 = true;
LAB_00936908:
  (**(code **)(*piVar4 + 0x224))();
  CStaff_ApplyJobCostumeAndPlacement(piVar4,0xe);
  if (*(int *)((int)this + 0x2a4) != 0) {
    FUN_0053a230(piVar4,0);
    if (bVar3) {
      TMRoom_RegisterOccupant(*(void **)((int)this + 0x2a4),piVar4);
      TMRoom_FinalizeSlotAssignment(this,piVar4,0);
      uVar6 = *(undefined4 *)((int)this + 0x28c);
      iVar5 = *(int *)((int)this + 0x2a4);
      (**(code **)(*(int *)(iVar5 + 0x278) + 4))();
      *(undefined4 *)(iVar5 + 0x28c) = uVar6;
      (*(code *)**(undefined4 **)(iVar5 + 0x278))();
      FUN_0053a270(piVar4,4);
    }
    else {
      FUN_0093e3a0(this,(int)param_1);
      TMRoom_RegisterOccupant(*(void **)((int)this + 0x2a4),piVar4);
      TMRoom_FinalizeSlotAssignment(*(void **)((int)this + 0x2a4),piVar4,0);
      pwStack_8c = (wchar_t *)auStack_80;
      auStack_80[0] = 0;
      uStack_88 = 0;
      uStack_84 = 0x14;
      uStack_4 = 1;
      if (*(int *)((int)this + 0x28c) != 0) {
        puVar10 = (undefined4 *)FUN_00449b40(*(int *)((int)this + 0x28c));
        FUN_00401e30(&pwStack_8c,puVar10);
        uVar13 = 0xffffffff;
        iVar5 = FUN_004155b0(&pwStack_8c,"_",0);
        puVar10 = FUN_00430770(&pwStack_8c,apvStack_4c,iVar5 + 1,uVar13);
        FUN_00401e30(&pwStack_8c,puVar10);
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
      }
      if (*(void **)((int)this + 0x228) != (void *)0x0) {
        uVar13 = FUN_00944e30(*(void **)((int)this + 0x228),(int)piVar4);
        piVar11 = (int *)FUN_00544d80(&DAT_01050608,(int *)&local_a0,&pwStack_8c);
        if (*piVar11 == DAT_0105060c) {
          local_a0 = (int *)0x0;
        }
        else {
          local_a0 = FUN_00515d20(&DAT_01050608,&pwStack_8c);
          local_a0 = (int *)*local_a0;
        }
        FUN_009450f0(*(void **)((int)this + 0x228),uVar13,(byte *)"ai_genre",(float)local_a0);
      }
      FUN_0053b960(piVar4,*(void **)((int)this + 0x2a4));
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_8c);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00936ad0 @ 00936ad0 ////

void __fastcall FUN_00936ad0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00936b00 @ 00936b00 ////

void FUN_00936b00(void)

{
  return;
}


//// FUNCTION FUN_00936b30 @ 00936b30 ////

void __fastcall FUN_00936b30(int param_1)

{
  int *_Memory;
  
  _Memory = *(int **)(param_1 + 0x270);
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x270) = 0;
  (**(code **)(*(int *)(param_1 + 600) + 4))();
  *(undefined4 *)(param_1 + 0x26c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00936b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1 + 600))();
  return;
}


//// FUNCTION FUN_00936bd0 @ 00936bd0 ////

ulonglong * __cdecl FUN_00936bd0(ulonglong *param_1,void *param_2)

{
  ulonglong uVar1;
  float local_4;
  
  CProject_GetQualityWithAwardBoost(param_2,&local_4);
  FUN_00acd42c();
  uVar1 = FUN_00acd42c();
  *param_1 = uVar1;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_00936c50 @ 00936c50 ////

ulonglong * __cdecl FUN_00936c50(ulonglong *param_1)

{
  ulonglong uVar1;
  int iStack00000008;
  
  uVar1 = FUN_00acd42c();
  iStack00000008 =
       *(int *)(&DAT_0105059c + (int)uVar1 * 4) - *(int *)(&DAT_01050598 + (int)uVar1 * 4);
  uVar1 = FUN_00acd42c();
  *param_1 = uVar1;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_00936cc0 @ 00936cc0 ////

ulonglong * __cdecl FUN_00936cc0(ulonglong *param_1,void *param_2)

{
  ulonglong uVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  ulonglong local_8;
  
  FUN_00585ff0(param_2,&local_c);
  FUN_00acd42c();
  local_8 = FUN_00acd42c();
  FUN_00471b10((longlong *)&local_8);
  FUN_00575ff0(param_2,&local_14);
  FUN_0043b570();
  FUN_0043b570();
  uStack_10 = *(undefined4 *)((int)param_2 + 0x7e0);
  FUN_0043b570();
  FUN_0043b570();
  uVar1 = FUN_00acd42c();
  *param_1 = uVar1;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_00936de0 @ 00936de0 ////

void __fastcall FUN_00936de0(int *param_1)

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
  puStack_8 = &LAB_00cf2368;
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


//// FUNCTION FUN_00936eb0 @ 00936eb0 ////

void __fastcall FUN_00936eb0(int param_1)

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
  puStack_8 = &LAB_00cf2390;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\SellRoom.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x15;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 500));
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
  uVar3 = FUN_0098b490("PSellObject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 500));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\SellRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x16;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("TickAdded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x210),4);
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CSellRoom_OnGenericRemoved @ 009370b0 ////

void __fastcall CSellRoom_OnGenericRemoved(int param_1)

{
  int *_Memory;
  
  _Memory = *(int **)(param_1 + 0x270);
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x270) = 0;
  (**(code **)(*(int *)(param_1 + 600) + 4))();
  *(undefined4 *)(param_1 + 0x26c) = 0;
  (*(code *)**(undefined4 **)(param_1 + 600))();
  return;
}


//// FUNCTION FUN_00937100 @ 00937100 ////

ulonglong * FUN_00937100(ulonglong *param_1,int *param_2)

{
  void *pvVar1;
  int iVar2;
  ulonglong uVar3;
  
  pvVar1 = (void *)FUN_00ace790(param_2,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                &TM::CStar::RTTI_Type_Descriptor,0);
  iVar2 = FUN_00ace790(param_2,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00936cc0(param_1,pvVar1);
    return param_1;
  }
  if (iVar2 != 0) {
    pvVar1 = (void *)FUN_005d1940(iVar2);
    FUN_00936bd0(param_1,pvVar1);
    return param_1;
  }
  uVar3 = FUN_00acd42c();
  *param_1 = uVar3;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION CSellRoom_Constructor @ 00937190 ////

undefined4 * __fastcall CSellRoom_Constructor(undefined4 *param_1)

{
  int *piVar1;
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf23b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  piVar1 = param_1 + 0x96;
  *param_1 = &PTR_FUN_00d6e29c;
  param_1[0x19] = &PTR_LAB_00d6e27c;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d23630;
  param_1[0x9b] = 0;
  local_4 = 1;
  param_1[0x9c] = 0;
  FUN_0093b350(param_1,1);
  FUN_0093b340(param_1,1);
  FUN_0093b330(param_1,1);
  _Memory = (int *)param_1[0x9c];
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x9c] = 0;
  (**(code **)(*piVar1 + 4))();
  param_1[0x9b] = 0;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00937260 @ 00937260 ////

void __fastcall FUN_00937260(undefined4 *param_1)

{
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf23d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6e29c;
  param_1[0x19] = &PTR_LAB_00d6e27c;
  _Memory = (int *)param_1[0x9c];
  local_4 = 1;
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x96] = &PTR_FUN_00d23630;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00937350 @ 00937350 ////

void __fastcall FUN_00937350(int param_1)

{
  undefined1 uVar1;
  ulonglong *puVar2;
  uint uVar3;
  size_t sVar4;
  void *this;
  undefined4 *puVar5;
  wchar_t **ppwVar6;
  void *local_54 [2];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  wchar_t *local_2c;
  size_t local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2406;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x270) == 0) && (*(int **)(param_1 + 0x26c) != (int *)0x0)) {
    local_2c = local_20;
    local_20[0] = L'\0';
    local_28 = 0;
    local_24 = 10;
    ppwVar6 = &local_2c;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar2 = FUN_00937100((ulonglong *)local_54,*(int **)(param_1 + 0x26c));
    thunk_FUN_00444a70((uint *)puVar2,ppwVar6);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    uVar3 = FUN_00ace02d(L"<phrasebook><translate>ROOM_SELL_PROGRESS</translate>");
    FUN_004036d0(&local_4c,L"<phrasebook><translate>ROOM_SELL_PROGRESS</translate>",uVar3);
    local_4._0_1_ = 1;
    sVar4 = FUN_00ace02d(L"<phrase key=price>");
    FUN_0040cae0(&local_4c,L"<phrase key=price>",sVar4);
    FUN_0040cae0(&local_4c,local_2c,local_28);
    sVar4 = FUN_00ace02d(L"</phrase></phrasebook>");
    FUN_0040cae0(&local_4c,L"</phrase></phrasebook>",sVar4);
    this = operator_new(0x80);
    local_4._0_1_ = 2;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 2;
    if (this == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
      local_4._0_1_ = uVar1;
    }
    else {
      local_54[0] = operator_new(0x70);
      local_4._0_1_ = 3;
      if (local_54[0] != (void *)0x0) {
        FUN_008f9fa0(local_54[0],*(int *)(param_1 + 0x26c));
      }
      local_4._0_1_ = 2;
      puVar5 = FUN_005e36e0(this,&local_4c);
    }
    *(undefined4 **)(param_1 + 0x270) = puVar5;
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00937990 @ 00937990 ////

undefined4 * __thiscall FUN_00937990(void *this,byte param_1)

{
  FUN_00937260(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION CSellRoom_OnProjectDropped @ 009379b0 ////

void __thiscall CSellRoom_OnProjectDropped(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_c [4];
  undefined4 uStack_8;
  
  if (*(int *)((int)this + 0x26c) == 0) {
    TMRoom_OnObjectDropped(this,param_1);
    *(undefined4 *)((int)this + 0x274) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    (**(code **)(*(int *)((int)this + 600) + 4))();
    *(int **)((int)this + 0x26c) = param_1;
    (*(code *)**(undefined4 **)((int)this + 600))();
    FUN_00937350((int)this);
    TMRoom_RegisterOccupant(this,param_1);
    TMRoom_FinalizeSlotAssignment(this,param_1,0);
    piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x34))(auStack_c);
      iVar1 = *piVar2;
      uStack_8 = 0x3f800000;
      uVar3 = (**(code **)(iVar1 + 0x4c))(&stack0x00000000);
      (**(code **)(iVar1 + 0xa8))(&stack0xffffffec,uVar3);
      *(undefined1 *)(piVar2 + 0x90) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00937a70 @ 00937a70 ////

void __fastcall FUN_00937a70(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2458;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6e4d4;
  puVar2 = (undefined4 *)param_1[0x17];
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x17] = 0;
  }
  local_4 = 0xffffffff;
  FUN_009456c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00937ba0 @ 00937ba0 ////

undefined4 * __thiscall FUN_00937ba0(void *this,int param_1,char *param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char local_2c [12];
  undefined *puStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2498;
  local_c = ExceptionList;
  pcVar1 = local_2c;
  local_2c[0] = '\0';
  local_4 = 0;
  uVar2 = 0;
  uVar3 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffc8,param_2,param_3);
  FUN_00945e80(this,param_1,pcVar1,uVar2,uVar3);
  *(undefined ***)this = &PTR_FUN_00d6e4d4;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    puStack_20 = &UNK_00937c16;
    _free(param_2);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00937c30 @ 00937c30 ////

undefined4 * __thiscall FUN_00937c30(void *this,byte param_1)

{
  FUN_00937a70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00937c50 @ 00937c50 ////

void __fastcall FUN_00937c50(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00937c90 @ 00937c90 ////

void FUN_00937c90(void)

{
  return;
}


//// FUNCTION CStarMakerRoom_OnWannabeDropped @ 00937ca0 ////

void __thiscall CStarMakerRoom_OnWannabeDropped(void *this,int *param_1)

{
  int iVar1;
  
  TMRoom_OnObjectDropped(this,param_1);
  if (*(int *)((int)this + 0x228) == 0) {
    FUN_0093c5e0(this,'\0');
  }
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CWannabe::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_0072e610(iVar1);
  }
  return;
}


//// FUNCTION FUN_00937d20 @ 00937d20 ////

void __fastcall FUN_00937d20(int *param_1)

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
  puStack_8 = &LAB_00cf24b8;
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


//// FUNCTION FUN_00937e70 @ 00937e70 ////

void __fastcall FUN_00937e70(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00937ea0 @ 00937ea0 ////

void FUN_00937ea0(void)

{
  return;
}


//// FUNCTION FUN_00937ec0 @ 00937ec0 ////

int __fastcall FUN_00937ec0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00938000 @ 00938000 ////

void __cdecl FUN_00938000(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00938070 @ 00938070 ////

int * __cdecl FUN_00938070(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_009380b0 @ 009380b0 ////

undefined4 * __cdecl FUN_009380b0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00938170 @ 00938170 ////

undefined4 __thiscall FUN_00938170(void *this,int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_c [12];
  
  uVar6 = 0;
  if (*(int *)((int)this + 0x210) != 0) {
    iVar3 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    pfVar4 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
    piVar5 = (int *)FUN_009325e0(pfVar4);
    uVar6 = CONCAT31((int3)((uint)piVar5 >> 8),*(char *)((int)this + 0x255));
    if ((*(char *)((int)this + 0x255) != '\0') && (iVar3 == 0)) goto LAB_00938241;
    cVar1 = FUN_0093b2d0(*(int *)((int)this + 0x210));
    uVar6 = CONCAT31(extraout_var,cVar1);
    if (cVar1 == '\0') goto LAB_00938241;
    bVar2 = FUN_0093c400(*(int *)((int)this + 0x210),(int)param_1);
    uVar6 = CONCAT31(extraout_var_00,bVar2);
    if (!bVar2) goto LAB_00938241;
    if (piVar5 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar5 + 0x7c))(param_1);
      if (cVar1 != '\0') goto LAB_0093820c;
    }
    uVar6 = (**(code **)(**(int **)((int)this + 0x210) + 0x58))(param_1);
    if ((char)uVar6 != '\0') {
LAB_0093820c:
      if (piVar5 != (int *)0x0) {
        iVar3 = *(int *)((int)this + 0x210);
        iVar7 = FUN_00931dc0((int)piVar5);
        if (iVar7 == iVar3) {
          (**(code **)(*piVar5 + 100))(param_1);
        }
      }
      uVar8 = (**(code **)(**(int **)((int)this + 0x210) + 0x1c))(param_1);
      return CONCAT31((int3)((uint)uVar8 >> 8),1);
    }
  }
LAB_00938241:
  return uVar6 & 0xffffff00;
}


//// FUNCTION FUN_00938250 @ 00938250 ////

undefined4 __fastcall FUN_00938250(int param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1d4) == 0) {
    return 0;
  }
  iVar3 = FUN_0097e350(*(void **)(*(int *)(param_1 + 0x1d4) + 0x11c),0);
  FUN_009dc300(iVar3);
  pvVar2 = *(void **)(*(int *)(param_1 + 0x1d4) + 0x11c);
  *(void **)(param_1 + 0x1d8) = pvVar2;
  iVar3 = FUN_0097e9d0(pvVar2);
  if (iVar3 != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x1d4) + 0x2e0);
    *puVar1 = *puVar1 | 0x1000;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_00938410 @ 00938410 ////

void __fastcall FUN_00938410(int *param_1)

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
  puStack_8 = &LAB_00cf24d8;
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


//// FUNCTION FUN_009385e0 @ 009385e0 ////

undefined4 * __thiscall FUN_009385e0(void *this,byte param_1)

{
  FUN_0053ba30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00938600 @ 00938600 ////

void __thiscall FUN_00938600(void *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x234) != 0) {
    iVar5 = 0;
    do {
      bVar2 = FUN_0093c400(*(int *)(*(int *)((int)this + 0x228) + iVar5 + 0x14),param_1);
      if (((!bVar2) ||
          (cVar3 = (**(code **)(**(int **)(*(int *)((int)this + 0x228) + iVar5 + 0x14) + 0x58))
                             (param_1), cVar3 == '\0')) &&
         (piVar1 = *(int **)(*(int *)((int)this + 0x228) + 0x14 + iVar5),
         *(char *)((int)piVar1 + 0x1ca) == '\0')) {
        (**(code **)(*piVar1 + 0x30))();
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x18;
    } while (uVar4 < *(uint *)((int)this + 0x234));
  }
  return;
}


//// FUNCTION FUN_00938690 @ 00938690 ////

void __fastcall FUN_00938690(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x228) + 0x14 + iVar3);
      if (*(char *)(iVar1 + 0x1ca) != '\0') {
        FUN_0093b140(iVar1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x234));
  }
  return;
}


//// FUNCTION FUN_009386e0 @ 009386e0 ////

undefined4 __fastcall FUN_009386e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_14;
  int local_10 [4];
  
  if ((*(char *)(param_1 + 0x255) != '\0') && (*(int *)(param_1 + 0x228) != 0)) {
    local_10[0] = (*(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x228)) / 0x18;
    if (local_10[0] != 0) {
      iVar6 = *(int *)(param_1 + 0x228);
      (**(code **)(*(int *)(param_1 + 0x1fc) + 4))();
      *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar6 + 0x14);
      (*(code *)**(undefined4 **)(param_1 + 0x1fc))();
      if (DAT_0104c6c8 != (int *)0x0) {
        FUN_0053b650(DAT_0104c6c8,*(undefined4 *)(param_1 + 0x24c),*(void **)(param_1 + 0x210));
      }
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x250) != 0) {
    iVar6 = *(int *)(param_1 + 0x210);
    piVar1 = (int *)(param_1 + 0x1fc);
    local_10[0] = iVar6;
    (**(code **)(*(int *)(param_1 + 0x1fc) + 4))();
    *(undefined4 *)(param_1 + 0x210) = 0;
    (**(code **)*piVar1)();
    if (DAT_0104c6c8 == (int *)0x0) {
      piVar4 = (int *)FUN_00980810(*(void **)(param_1 + 0x250),&DAT_0104cce0);
    }
    else {
      iVar6 = *DAT_0104c6c8;
      uVar2 = (**(code **)(*DAT_0104c6c8 + 0x4c))(&iStack_14);
      pfVar3 = (float *)(**(code **)(iVar6 + 0xb4))(local_10,uVar2);
      piVar4 = (int *)FUN_00980910(*(void **)(param_1 + 0x250),pfVar3);
      iVar6 = local_10[0];
    }
    if (piVar4 != (int *)0x0) {
      iVar5 = 0;
      if (*(int *)(param_1 + 0x228) != 0) {
        iVar5 = (*(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x228)) / 0x18;
      }
      if (*piVar4 < iVar5) {
        (**(code **)(*piVar1 + 4))();
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x210) = 0;
        (**(code **)*piVar1)();
        iStack_14 = 0;
        while( true ) {
          if ((*(int *)(param_1 + 0x228) == 0) ||
             ((uint)((*(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x228)) / 0x18) <= uVar7))
          goto LAB_009388ab;
          if (*(int **)(*(int *)(*(int *)(param_1 + 0x228) + iStack_14 + 0x14) + 0xa4) == piVar4)
          break;
          uVar7 = uVar7 + 1;
          iStack_14 = iStack_14 + 0x18;
        }
        iVar6 = *(int *)(param_1 + 0x228);
        (**(code **)(*piVar1 + 4))();
        *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(iVar6 + uVar7 * 0x18 + 0x14);
        (**(code **)*piVar1)();
LAB_009388ab:
        if (DAT_0104c6c8 != (int *)0x0) {
          FUN_0053b650(DAT_0104c6c8,*(undefined4 *)(param_1 + 0x24c),*(void **)(param_1 + 0x210));
        }
        if ((local_10[0] != 0) && (local_10[0] != *(int *)(param_1 + 0x210))) {
          *(undefined1 *)(local_10[0] + 0x1c4) = 0;
        }
        return 1;
      }
    }
    if (iVar6 != 0) {
      *(undefined1 *)(iVar6 + 0x1c4) = 0;
    }
  }
  return 0;
}


//// FUNCTION FUN_009389a0 @ 009389a0 ////

bool __thiscall FUN_009389a0(void *this,int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  
  FUN_009386e0((int)this);
  if (*(char *)((int)this + 0x255) != '\0') {
    iVar4 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    return iVar4 != 0;
  }
  iVar4 = *(int *)((int)this + 0x210);
  if (iVar4 == 0) {
    if ((*(int *)((int)this + 0x228) != 0) &&
       ((*(int *)((int)this + 0x22c) - *(int *)((int)this + 0x228)) / 0x18 != 0)) {
      return true;
    }
    return false;
  }
  if ((*(byte *)(*(int *)(iVar4 + 0xa4) + 0x6c) & 1) == 0) {
    return false;
  }
  bVar2 = FUN_0093c400(iVar4,(int)param_1);
  if ((bVar2) &&
     (cVar3 = (**(code **)(**(int **)((int)this + 0x210) + 0x58))(param_1), cVar3 != '\0')) {
    return true;
  }
  piVar1 = *(int **)(*(int *)((int)this + 0x210) + 0x9c);
  if ((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x7c))(param_1), cVar3 != '\0')) {
    return true;
  }
  return false;
}


//// FUNCTION FUN_00938a70 @ 00938a70 ////

undefined4 __thiscall FUN_00938a70(void *this,undefined4 *param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  int local_74;
  uint local_70;
  byte *local_6c;
  uint local_68;
  uint local_64;
  byte local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf24f8;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  local_4 = 0;
  local_70 = 0;
  if (*(int *)((int)this + 0x234) != 0) {
    local_74 = 0;
    ExceptionList = &local_c;
    do {
      puVar3 = FUN_0093c060(*(void **)(*(int *)((int)this + 0x228) + local_74 + 0x14),local_4c);
      uVar4 = puVar3[1];
      pcVar2 = (char *)*puVar3;
      if (local_64 <= uVar4) {
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        local_64 = uVar4 + 0x20 & 0xffffffe0;
        local_6c = _malloc(local_64);
      }
      _strncpy((char *)local_6c,pcVar2,uVar4);
      local_6c[uVar4] = 0;
      local_68 = uVar4;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      uVar4 = FUN_00413450(&local_6c,"_",0,1);
      if (uVar4 != 0xffffffff) {
        uVar5 = FUN_00413450(&local_6c,"_",uVar4 + 1,1);
        if (uVar5 != 0xffffffff) {
          uVar4 = uVar5;
        }
      }
      puVar3 = FUN_00430770(&local_6c,local_2c,uVar4 + 1,0xffffffff);
      uVar4 = puVar3[1];
      pcVar2 = (char *)*puVar3;
      if (local_64 <= uVar4) {
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        local_64 = uVar4 + 0x20 & 0xffffffe0;
        local_6c = _malloc(local_64);
      }
      _strncpy((char *)local_6c,pcVar2,uVar4);
      local_6c[uVar4] = 0;
      local_68 = uVar4;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      pbVar8 = (byte *)*param_1;
      pbVar6 = local_6c;
      do {
        bVar1 = *pbVar6;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00938c34:
          iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00938c39;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00938c34;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00938c39:
      if (iVar7 == 0) {
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        ExceptionList = local_c;
        return *(undefined4 *)(*(int *)((int)this + 0x228) + 0x14 + local_70 * 0x18);
      }
      local_70 = local_70 + 1;
      local_74 = local_74 + 0x18;
    } while (local_70 < *(uint *)((int)this + 0x234));
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00938cc0 @ 00938cc0 ////

undefined4 __thiscall FUN_00938cc0(void *this,uint param_1)

{
  if (param_1 < *(uint *)((int)this + 0x234)) {
    return *(undefined4 *)(*(int *)((int)this + 0x228) + param_1 * 0x18 + 0x14);
  }
  return 0;
}


//// FUNCTION FUN_00938cf0 @ 00938cf0 ////

undefined4 __fastcall FUN_00938cf0(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uStack0000000c;
  
  uStack0000000c = 0;
  this = *(void **)(*(int *)(param_1 + 0x24c) + 0x11c);
  if (this == (void *)0x0) {
    return 0;
  }
  iVar1 = FUN_00980910(this,(float *)&stack0x00000004);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x234) != 0) {
      piVar3 = (int *)(*(int *)(param_1 + 0x228) + 0x14);
      do {
        if (*(int *)(*piVar3 + 0xa4) == iVar1) {
          return *(undefined4 *)(*(int *)(param_1 + 0x228) + uVar2 * 0x18 + 0x14);
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (uVar2 < *(uint *)(param_1 + 0x234));
    }
  }
  return 0;
}


//// FUNCTION FUN_00938d60 @ 00938d60 ////

int __fastcall FUN_00938d60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = 0;
  uVar3 = *(int *)(param_1 + 0x234) - 1;
  if (-1 < (int)uVar3) {
    iVar4 = uVar3 * 0x18;
    do {
      if (uVar3 < *(uint *)(param_1 + 0x234)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x228) + iVar4 + 0x14);
      }
      else {
        iVar1 = 0;
      }
      iVar1 = FUN_0093d320(iVar1);
      iVar2 = iVar2 + iVar1;
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + -0x18;
    } while (-1 < (int)uVar3);
  }
  return iVar2;
}


//// FUNCTION FUN_00938db0 @ 00938db0 ////

void __thiscall FUN_00938db0(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  int iVar3;
  uint uVar4;
  int local_4;
  
  piVar2 = param_3;
  piVar1 = param_2;
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  uVar4 = *(int *)((int)this + 0x234) - 1;
  if (-1 < (int)uVar4) {
    iVar3 = uVar4 * 0x18;
    do {
      if (uVar4 < *(uint *)((int)this + 0x234)) {
        this_00 = *(void **)(*(int *)((int)this + 0x228) + iVar3 + 0x14);
      }
      else {
        this_00 = (void *)0x0;
      }
      FUN_0093d380(this_00,(int *)&param_2,(int *)&param_3,&local_4);
      *param_1 = *param_1 + (int)param_2;
      *piVar1 = *piVar1 + (int)param_3;
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + -0x18;
      *piVar2 = *piVar2 + local_4;
    } while (-1 < (int)uVar4);
  }
  return;
}


//// FUNCTION FUN_00938e60 @ 00938e60 ////

void __fastcall FUN_00938e60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x228) + iVar1 + 0x14) + 0x48))();
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x234));
  }
  return;
}


//// FUNCTION FUN_00938ea0 @ 00938ea0 ////

void __fastcall FUN_00938ea0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x228) + iVar1 + 0x14) + 0x44))();
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x234));
  }
  return;
}


//// FUNCTION FUN_00938ee0 @ 00938ee0 ////

void __fastcall FUN_00938ee0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x228) + iVar1 + 0x14) + 0x7c))();
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x234));
  }
  return;
}


//// FUNCTION FUN_00938f20 @ 00938f20 ////

void __fastcall FUN_00938f20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x228) + iVar1 + 0x14) + 0x4c))();
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x234));
  }
  return;
}


//// FUNCTION FUN_00938f60 @ 00938f60 ////

void __fastcall FUN_00938f60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x228) + iVar1 + 0x14) + 0x3c))();
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x234));
  }
  return;
}


//// FUNCTION FUN_00938fa0 @ 00938fa0 ////

void __fastcall FUN_00938fa0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x228) + iVar1 + 0x14) + 0x38))();
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_1 + 0x234));
  }
  return;
}


//// FUNCTION FUN_00939070 @ 00939070 ////

void __fastcall FUN_00939070(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0xdc))(0);
  FUN_00938600(param_1,DAT_0104c6c8);
  FUN_00938690((int)param_1);
  iVar3 = FUN_009386e0((int)param_1);
  if ((((iVar3 != 0) && (piVar1 = (int *)param_1[0x84], piVar1 != (int *)0x0)) &&
      (iVar3 = piVar1[0x71], *(char *)((int)param_1 + 0x255) == '\0')) &&
     ((cVar2 = (**(code **)(*piVar1 + 0x28))(DAT_0104c6c8), cVar2 != '\0' && ((char)iVar3 == '\0')))
     ) {
    FUN_005392c0("UI_ROOM_HIGHLIGHT");
  }
  uVar4 = FUN_00553fd0(0x73);
  if ((((char)uVar4 != '\0') && (DAT_0104c6c8 == 0)) &&
     ((param_1[0x84] != 0 &&
      ((cVar2 = FUN_0093b2a0(param_1[0x84]), cVar2 != '\0' &&
       (cVar2 = FUN_0093b2d0(param_1[0x84]), cVar2 != '\0')))))) {
    (**(code **)(*(int *)param_1[0x84] + 0x1c))(0);
  }
  return;
}


//// FUNCTION FUN_00939140 @ 00939140 ////

void __cdecl FUN_00939140(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d23400;
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


//// FUNCTION FUN_009391e0 @ 009391e0 ////

void __cdecl FUN_009391e0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d23400;
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


//// FUNCTION FUN_00939300 @ 00939300 ////

void __fastcall FUN_00939300(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6e4e8;
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


//// FUNCTION FUN_00939350 @ 00939350 ////

undefined4 * __thiscall FUN_00939350(void *this,byte param_1)

{
  FUN_00939300(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00939370 @ 00939370 ////

void FUN_00939370(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_0053ba30(param_1);
  }
  return;
}


//// FUNCTION FUN_009393a0 @ 009393a0 ////

void __fastcall FUN_009393a0(int param_1)

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
    FUN_0053ba30(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009393f0 @ 009393f0 ////

undefined4 * FUN_009393f0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_009391e0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00939420 @ 00939420 ////

void __thiscall FUN_00939420(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_00938070((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_0053ba30(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00939480 @ 00939480 ////

void FUN_00939480(void)

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
  puStack_8 = &LAB_00cf2518;
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


//// FUNCTION FUN_009394f0 @ 009394f0 ////

void __fastcall FUN_009394f0(int param_1)

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
    FUN_0053ba30(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009395b0 @ 009395b0 ////

void __thiscall FUN_009395b0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cf2538;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d23400;
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
      FUN_00939480();
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
        iVar3 = FUN_00937ec0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00939140(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_009391e0(puVar5,param_2,(int)&local_34);
      FUN_00939140((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00939370(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00939140((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_009393f0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00938000(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00939140((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_009380b0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00938000(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_009398e0 @ 009398e0 ////

void __fastcall FUN_009398e0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2590;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6e52c;
  param_1[0x1e] = &PTR_LAB_00d6e50c;
  param_1[0x28] = &PTR_FUN_00d6e4f4;
  local_4 = 4;
  if ((undefined4 *)param_1[0x86] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x86] = param_1[0x85];
  }
  if (param_1[0x85] != 0) {
    *(undefined4 *)(param_1[0x85] + 4) = param_1[0x86];
  }
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  while( true ) {
    if ((param_1[0x8a] == 0) || ((int)(param_1[0x8b] - param_1[0x8a]) / 0x18 == 0)) break;
    piVar1 = (int *)param_1[0x8a];
    piVar2 = (int *)param_1[0x8b];
    puVar3 = (undefined4 *)piVar1[5];
    piVar5 = piVar1 + 6;
    while (piVar5 != piVar2) {
      (**(code **)(*piVar1 + 4))();
      piVar1[5] = piVar1[0xb];
      (**(code **)*piVar1)();
      piVar5 = piVar1 + 0xc;
      piVar1 = piVar1 + 6;
    }
    puVar4 = (undefined4 *)param_1[0x8b];
    puVar6 = puVar4 + -6;
    if (puVar6 != puVar4) {
      piVar5 = puVar4 + -4;
      do {
        *puVar6 = &PTR_FUN_00d23400;
        if ((int *)*piVar5 != (int *)0x0) {
          *(int *)*piVar5 = piVar5[-1];
        }
        if (piVar5[-1] != 0) {
          *(int *)(piVar5[-1] + 4) = *piVar5;
        }
        piVar5[-1] = 0;
        *piVar5 = 0;
        piVar5[3] = 0;
        if ((int *)*piVar5 != (int *)0x0) {
          *(int *)*piVar5 = piVar5[-1];
        }
        if (piVar5[-1] != 0) {
          *(int *)(piVar5[-1] + 4) = *piVar5;
        }
        piVar5[-1] = 0;
        *piVar5 = 0;
        puVar6 = puVar6 + 6;
        piVar5 = piVar5 + 6;
      } while (puVar6 != puVar4);
    }
    param_1[0x8b] = param_1[0x8b] + -0x18;
    if (puVar3 != (undefined4 *)0x0) {
      piVar5 = puVar3 + 0x12;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  param_1[0x8e] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0x90] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x90] = param_1[0x8f];
  }
  if (param_1[0x8f] != 0) {
    *(undefined4 *)(param_1[0x8f] + 4) = param_1[0x90];
  }
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  if ((undefined4 *)param_1[0x90] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x90] = param_1[0x8f];
  }
  if (param_1[0x8f] != 0) {
    *(undefined4 *)(param_1[0x8f] + 4) = param_1[0x90];
  }
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  FUN_009393a0((int)(param_1 + 0x89));
  if ((undefined4 *)param_1[0x86] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x86] = param_1[0x85];
  }
  if (param_1[0x85] != 0) {
    *(undefined4 *)(param_1[0x85] + 4) = param_1[0x86];
  }
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x7f] = &PTR_FUN_00d23400;
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x81] = param_1[0x80];
  }
  if (param_1[0x80] != 0) {
    *(undefined4 *)(param_1[0x80] + 4) = param_1[0x81];
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x81] = param_1[0x80];
  }
  if (param_1[0x80] != 0) {
    *(undefined4 *)(param_1[0x80] + 4) = param_1[0x81];
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  local_4 = 0xffffffff;
  FUN_0053bbe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00939bd0 @ 00939bd0 ////

void FUN_00939bd0(void)

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
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf25f0;
  local_c = ExceptionList;
  local_50 = local_44;
  local_44[0] = '\0';
  local_4c = 0;
  local_48 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_50,"action",6);
  local_4c = 6;
  local_50[6] = '\0';
  local_30 = local_24;
  local_4 = 0;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_10 = 0x3e4ccccd;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00515a50(&DAT_01050608,local_58,&local_30);
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
  _strncpy(local_50,"comedy",6);
  local_4c = 6;
  local_50[6] = '\0';
  local_30 = local_24;
  local_4 = 2;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_10 = 0x3ecccccd;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00515a50(&DAT_01050608,local_58,&local_30);
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
  _strncpy(local_50,"horror",6);
  local_4c = 6;
  local_50[6] = '\0';
  local_30 = local_24;
  local_4 = 4;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_10 = 0x3f19999a;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00515a50(&DAT_01050608,local_58,&local_30);
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
  _strncpy(local_50,"romance",7);
  local_4c = 7;
  local_50[7] = '\0';
  local_30 = local_24;
  local_4 = 6;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_10 = 0x3f4ccccd;
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_00515a50(&DAT_01050608,local_58,&local_30);
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
  _strncpy(local_50,"sci-fi",6);
  local_4c = 6;
  local_50[6] = '\0';
  local_30 = local_24;
  local_4 = 8;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_10 = 0x3f800000;
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_00515a50(&DAT_01050608,local_58,&local_30);
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


//// FUNCTION FUN_00939f60 @ 00939f60 ////

void __thiscall FUN_00939f60(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2608;
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
    FUN_009395b0(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_00939420(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
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


//// FUNCTION FUN_0093a040 @ 0093a040 ////

void __thiscall FUN_0093a040(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0093a085;
    }
  }
  iVar1 = 0;
LAB_0093a085:
  FUN_009395b0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0093a0b0 @ 0093a0b0 ////

undefined4 * __fastcall FUN_0093a0b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2644;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053ba80(param_1);
  *param_1 = &PTR_FUN_00d6e52c;
  param_1[0x1e] = &PTR_LAB_00d6e50c;
  param_1[0x28] = &PTR_FUN_00d6e4f4;
  param_1[0x82] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = param_1 + 0x7f;
  param_1[0x7f] = &PTR_FUN_00d23400;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x91] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x93] = 0;
  param_1[0x91] = param_1 + 0x8e;
  param_1[0x8e] = &PTR_FUN_00d16bec;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)((int)param_1 + 0x255) = 0;
  *(undefined1 *)((int)param_1 + 0x256) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0093a180 @ 0093a180 ////

undefined4 * __thiscall FUN_0093a180(void *this,byte param_1)

{
  FUN_009398e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0093a1a0 @ 0093a1a0 ////

void __thiscall FUN_0093a1a0(void *this,uint param_1)

{
  FUN_00939f60(this,param_1,&PTR_FUN_00d23400,0,(int *)0x0);
  return;
}


//// FUNCTION FUN_0093a1e0 @ 0093a1e0 ////

void __thiscall FUN_0093a1e0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_009391e0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0093a040(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0093a850 @ 0093a850 ////

undefined4 * __thiscall FUN_0093a850(void *this,int *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined ********ppppppppuVar12;
  byte *pbVar13;
  bool bVar14;
  char *pcVar15;
  undefined4 ******local_6c;
  uint local_68;
  uint *local_64;
  undefined *******local_60 [2];
  int *local_58;
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2703;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053ba80(this);
  *(undefined ***)this = &PTR_FUN_00d6e52c;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d6e50c;
  *(undefined ***)((int)this + 0xa0) = &PTR_FUN_00d6e4f4;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 **)((int)this + 0x208) = (undefined4 *)((int)this + 0x1fc);
  *(undefined4 *)((int)this + 0x1fc) = &PTR_FUN_00d23400;
  *(undefined4 *)((int)this + 0x210) = 0;
  puVar7 = (undefined4 *)((int)this + 0x214);
  *(undefined4 *)((int)this + 0x21c) = 0;
  *puVar7 = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  piVar10 = (int *)((int)this + 0x238);
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(int **)((int)this + 0x244) = piVar10;
  *piVar10 = (int)&PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0x24c) = 0;
  local_4 = 4;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined1 *)((int)this + 0x254) = 0;
  *(undefined1 *)((int)this + 0x255) = 0;
  *(undefined1 *)((int)this + 0x256) = 0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*piVar10 + 4))();
    *(int **)((int)this + 0x24c) = param_1;
    (**(code **)*piVar10)();
    *(undefined4 *)((int)this + 0x234) = 0;
    *(void **)((int)this + 0x21c) = this;
    FUN_00acdb9e(0xe66028);
    iVar4 = FUN_0097dda0();
    *(int *)((int)this + 0x220) = iVar4;
    if (DAT_00e66024 != '\0') {
      iVar4 = 0x214;
      pcVar15 = "PlanLink";
      pcVar5 = (char *)FUN_00acdb9e(0xe66028);
      FUN_0097df60(pcVar5,pcVar15,iVar4);
      DAT_00e66024 = '\0';
    }
    *(undefined4 ***)((int)this + 0x218) = &DAT_010505e4;
    *puVar7 = DAT_010505e4;
    DAT_010505e4[1] = puVar7;
    pvVar3 = *(void **)(*(int *)((int)this + 0x24c) + 0x11c);
    DAT_010505e4 = puVar7;
    if (pvVar3 != (void *)0x0) {
      *(void **)((int)this + 0x250) = pvVar3;
      iVar4 = FUN_0097e9d0(pvVar3);
      *(int *)((int)this + 0x234) = iVar4;
      if (iVar4 == 0) {
        if (param_2 == '\0') {
          ExceptionList = local_c;
          return this;
        }
      }
      else if (param_2 == '\0') {
        param_1[0xb8] = param_1[0xb8] | 0x1000;
        if (*(uint *)((int)this + 0x234) < 2) {
          ExceptionList = local_c;
          return this;
        }
        local_2c = local_20;
        local_20[0] = 0;
        local_28 = 0;
        local_24 = 0x14;
        local_4c = local_40;
        local_40[0] = 0;
        local_48 = 0;
        local_44 = 0x14;
        local_4._0_1_ = 6;
        uVar11 = 1;
        do {
          iVar4 = MeshRoomList_GetRoomByIndex(*(void **)((int)this + 0x250),uVar11);
          pcVar5 = (char *)(iVar4 + 4);
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004015d0(&local_2c,(char *)(iVar4 + 4),(int)pcVar5 - (iVar4 + 5));
          uVar6 = FUN_00413450(&local_2c,"_",5,1);
        } while ((uVar6 == 0xffffffff) &&
                (uVar11 = uVar11 + 1, uVar11 < *(uint *)((int)this + 0x234)));
        uVar11 = FUN_00413450(&local_2c,"_",5,1);
        puVar7 = FUN_00430770(&local_2c,&local_6c,5,uVar11 - 5);
        FUN_004015d0(&local_4c,(char *)*puVar7,puVar7[1]);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        local_58 = FUN_00943650(*(void **)((int)this + 0x250),0,&local_4c,uVar11);
        local_60[0] = (undefined *******)&local_6c;
        local_68 = 0;
        local_64 = (uint *)0x0;
        local_6c = (undefined4 ******)&PTR_FUN_00d23400;
        if (local_58 != (int *)0x0) {
          local_64 = (uint *)(local_58 + 6);
          local_68 = *local_64;
          *(uint **)(*local_64 + 4) = &local_68;
          *local_64 = (uint)&local_68;
        }
        local_4._0_1_ = 7;
        FUN_0093a1e0((void *)((int)this + 0x224),(int)&local_6c);
        local_4._0_1_ = 6;
        FUN_0053ba30(&local_6c);
        uVar6 = 1;
        if (1 < *(uint *)((int)this + 0x234)) {
          do {
            local_58 = FUN_00943650(*(void **)((int)this + 0x250),uVar6,&local_4c,uVar11);
            local_60[0] = (undefined *******)&local_6c;
            local_68 = 0;
            local_64 = (uint *)0x0;
            local_6c = (undefined4 ******)&PTR_FUN_00d23400;
            if (local_58 != (int *)0x0) {
              local_64 = (uint *)(local_58 + 6);
              local_68 = *local_64;
              *(uint **)(*local_64 + 4) = &local_68;
              *local_64 = (uint)&local_68;
            }
            local_4._0_1_ = 8;
            FUN_0093a1e0((void *)((int)this + 0x224),(int)&local_6c);
            local_4._0_1_ = 6;
            local_6c = (undefined4 ******)&PTR_FUN_00d23400;
            if (local_64 != (uint *)0x0) {
              *local_64 = local_68;
            }
            if (local_68 != 0) {
              *(uint **)(local_68 + 4) = local_64;
            }
            uVar6 = uVar6 + 1;
            local_58 = (int *)0x0;
            local_68 = 0;
            local_64 = (uint *)0x0;
          } while (uVar6 < *(uint *)((int)this + 0x234));
        }
        if (*(int *)((int)this + 0x228) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)((int)this + 0x22c) - *(int *)((int)this + 0x228)) / 0x18;
        }
        local_6c = local_60;
        *(int *)((int)this + 0x234) = iVar4;
        local_60[0] = (undefined *******)((uint)local_60[0] & 0xffffff00);
        local_68 = 0;
        local_64 = (uint *)0x14;
        _strncpy((char *)local_6c,"so",2);
        local_68 = 2;
        *(byte *)((int)local_6c + 2) = 0;
        ppppppppuVar12 = (undefined ********)local_6c;
        pbVar13 = local_4c;
        do {
          bVar2 = *pbVar13;
          bVar14 = bVar2 < *(byte *)ppppppppuVar12;
          if (bVar2 != *(byte *)ppppppppuVar12) {
LAB_0093acbb:
            iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_0093acc0;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar13[1];
          bVar14 = bVar2 < *(byte *)((int)ppppppppuVar12 + 1);
          if (bVar2 != *(byte *)((int)ppppppppuVar12 + 1)) goto LAB_0093acbb;
          pbVar13 = pbVar13 + 2;
          ppppppppuVar12 = (undefined ********)((int)ppppppppuVar12 + 2);
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0093acc0:
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (iVar4 == 0) {
          _param_2 = 0;
          if (*(int *)((int)this + 0x234) != 0) {
            iVar4 = 0;
            uVar11 = 0;
            do {
              puVar8 = FUN_00ace080((uint *)(*(int *)(*(int *)(*(int *)((int)this + 0x228) + iVar4 +
                                                              0x14) + 0xa4) + 4),"so_office");
              if (puVar8 != (uint *)0x0) {
                _param_2 = FUN_00ace790(*(int **)(*(int *)((int)this + 0x228) + uVar11 * 0x18 + 0x14
                                                 ),0,&TM::TMRoom::RTTI_Type_Descriptor,
                                        &TM::CScriptRoom::RTTI_Type_Descriptor,0);
                break;
              }
              uVar11 = uVar11 + 1;
              iVar4 = iVar4 + 0x18;
            } while (uVar11 < *(uint *)((int)this + 0x234));
          }
          param_1 = (int *)0x0;
          if (*(int *)((int)this + 0x234) != 0) {
            iVar4 = 0;
            do {
              iVar9 = FUN_00ace790(*(int **)(*(int *)((int)this + 0x228) + iVar4 + 0x14),0,
                                   &TM::TMRoom::RTTI_Type_Descriptor,
                                   &TM::CScriptRoom::RTTI_Type_Descriptor,0);
              if (iVar9 != 0) {
                (**(code **)(*(int *)(iVar9 + 0x290) + 4))();
                *(int *)(iVar9 + 0x2a4) = _param_2;
                (*(code *)**(undefined4 **)(iVar9 + 0x290))();
              }
              param_1 = (int *)((int)param_1 + 1);
              iVar4 = iVar4 + 0x18;
            } while (param_1 < *(int **)((int)this + 0x234));
          }
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if (local_24 < 0x15) {
          ExceptionList = local_c;
          return this;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      iVar4 = (**(code **)(*param_1 + 0x5c))();
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (*(int *)(iVar4 + 4) != 0) {
        *(undefined1 *)((int)this + 0x255) = 1;
        puVar7 = operator_new(0x2b0);
        local_4._0_1_ = 9;
        if (puVar7 == (undefined4 *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = CRehearseRoom_Constructor(puVar7);
        }
        local_4._0_1_ = 4;
        (**(code **)(*piVar10 + 0x74))();
        (**(code **)(*piVar10 + 100))();
        local_6c = local_60;
        local_60[0] = (undefined *******)((uint)local_60[0] & 0xffffff00);
        local_68 = 0;
        local_64 = (uint *)0x14;
        _strncpy((char *)local_6c,"room_set",8);
        local_68 = 8;
        *(char *)(local_6c + 2) = '\0';
        FUN_004015d0(piVar10 + 0x69,(char *)local_6c,local_68);
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        FUN_0053b9e0(&local_6c,(int)piVar10);
        local_4 = CONCAT31(local_4._1_3_,10);
        FUN_0093a1e0((void *)((int)this + 0x224),(int)&local_6c);
        FUN_0053ba30(&local_6c);
        *(undefined4 *)((int)this + 0x234) = 1;
      }
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0093af40 @ 0093af40 ////

undefined4 * __cdecl FUN_0093af40(int *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2726;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00ace790(param_1,0,&TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacility::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00ace790(param_1,0,&TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CSet::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      pvVar2 = operator_new(0x25c);
      local_4 = 1;
      if (pvVar2 != (void *)0x0) {
        puVar3 = FUN_0093a850(pvVar2,param_1,'\x01');
        ExceptionList = local_c;
        return puVar3;
      }
    }
  }
  else {
    pvVar2 = operator_new(0x25c);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      puVar3 = FUN_0093a850(pvVar2,param_1,'\0');
      ExceptionList = local_c;
      return puVar3;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0093b020 @ 0093b020 ////

void __fastcall FUN_0093b020(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6e4e8;
  return;
}


//// FUNCTION FUN_0093b0a0 @ 0093b0a0 ////

void __fastcall FUN_0093b0a0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0093b0d0 @ 0093b0d0 ////

void FUN_0093b0d0(void)

{
  return;
}


//// FUNCTION FUN_0093b110 @ 0093b110 ////

int __fastcall FUN_0093b110(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0xa8) != 0) && (*(int **)(param_1 + 0xa4) != (int *)0x0)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xa8) + 0xf0), iVar1 != 0)) {
    return **(int **)(param_1 + 0xa4) * 0x10 + iVar1;
  }
  return 0;
}


//// FUNCTION FUN_0093b140 @ 0093b140 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0093b140(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined1 auStack_4 [4];
  
  if ((*(int *)(param_1 + 0xa8) != 0) && (*(int *)(param_1 + 0xa4) != 0)) {
    FUN_00566c00(DAT_0104cdf4);
    fVar3 = (float10)FUN_00ad181a(*(undefined4 *)(DAT_0104cdf4 + 0x3c));
    fsin((fVar3 / (float10)_DAT_00e6604c) * (float10)6.2831855);
    puVar2 = FUN_006a47d0(auStack_4);
    uVar1 = *puVar2;
    *(undefined4 *)(param_1 + 0x1d0) = uVar1;
    FUN_00980b20(*(void **)(param_1 + 0xa8),**(int **)(param_1 + 0xa4),uVar1);
  }
  return;
}


//// FUNCTION FUN_0093b200 @ 0093b200 ////

void __thiscall FUN_0093b200(void *this,char param_1)

{
  *(char *)((int)this + 0x1ca) = param_1;
  *(undefined4 *)((int)this + 0x1d4) = DAT_00e66054;
  *(undefined4 *)((int)this + 0x1d0) = DAT_00e66054;
  if (param_1 == '\0') {
    (**(code **)(*(int *)this + 0x30))();
  }
  return;
}


//// FUNCTION FUN_0093b230 @ 0093b230 ////

void __fastcall FUN_0093b230(int param_1)

{
  if ((*(void **)(param_1 + 0xa8) != (void *)0x0) && (*(int **)(param_1 + 0xa4) != (int *)0x0)) {
    FUN_00980b20(*(void **)(param_1 + 0xa8),**(int **)(param_1 + 0xa4),DAT_00e66054);
    *(undefined1 *)(param_1 + 0x1c4) = 1;
  }
  return;
}


//// FUNCTION FUN_0093b260 @ 0093b260 ////

void __fastcall FUN_0093b260(int param_1)

{
  if ((*(void **)(param_1 + 0xa8) != (void *)0x0) && (*(int **)(param_1 + 0xa4) != (int *)0x0)) {
    FUN_00980b20(*(void **)(param_1 + 0xa8),**(int **)(param_1 + 0xa4),DAT_00e6605c);
  }
  return;
}


//// FUNCTION FUN_0093b2a0 @ 0093b2a0 ////

undefined1 __fastcall FUN_0093b2a0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1c5);
}


//// FUNCTION FUN_0093b2d0 @ 0093b2d0 ////

undefined1 __fastcall FUN_0093b2d0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1c6);
}


//// FUNCTION FUN_0093b2e0 @ 0093b2e0 ////

void __thiscall FUN_0093b2e0(void *this,byte param_1)

{
  int iVar1;
  
  if ((((*(int *)((int)this + 0xa8) != 0) && (*(int **)((int)this + 0xa4) != (int *)0x0)) &&
      (iVar1 = *(int *)(*(int *)((int)this + 0xa8) + 0xf0), iVar1 != 0)) &&
     (iVar1 = **(int **)((int)this + 0xa4) * 0x10 + iVar1, iVar1 != 0)) {
    *(uint *)(iVar1 + 0xc) =
         *(uint *)(iVar1 + 0xc) ^ ((uint)param_1 << 1 ^ *(uint *)(iVar1 + 0xc)) & 2;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_0093b330 @ 0093b330 ////

void __thiscall FUN_0093b330(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1d8) = param_1;
  return;
}


//// FUNCTION FUN_0093b340 @ 0093b340 ////

void __thiscall FUN_0093b340(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1dc) = param_1;
  return;
}


//// FUNCTION FUN_0093b350 @ 0093b350 ////

void __thiscall FUN_0093b350(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1e0) = param_1;
  return;
}


//// FUNCTION FUN_0093b3a0 @ 0093b3a0 ////

void __fastcall FUN_0093b3a0(int param_1)

{
  int iVar1;
  
  ISerializable_WriteObjectHeader();
  if ((((*(int *)(param_1 + 0x44) != 0) && (*(int **)(param_1 + 0x40) != (int *)0x0)) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xf0), iVar1 != 0)) &&
     (iVar1 = **(int **)(param_1 + 0x40) * 0x10 + iVar1, iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(iVar1 + 4);
    *(byte *)(param_1 + 0x1f0) = (byte)(*(uint *)(iVar1 + 0xc) >> 1) & 1;
  }
  return;
}


//// FUNCTION FUN_0093b5c0 @ 0093b5c0 ////

int * __cdecl FUN_0093b5c0(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_0093b600 @ 0093b600 ////

undefined4 * __cdecl FUN_0093b600(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0093b640 @ 0093b640 ////

void __fastcall FUN_0093b640(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0xd8);
  if (piVar1 != (int *)0x0) {
    iVar4 = 0;
    for (piVar2 = (int *)piVar1[0x6d]; piVar2 != piVar1 + 0x70; piVar2 = (int *)piVar2[1]) {
      iVar4 = iVar4 + 1;
    }
    (**(code **)(*piVar1 + 4))();
    if (iVar4 == 0) {
      puVar3 = *(undefined4 **)(param_1 + 0xd8);
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0093b690 @ 0093b690 ////

void __fastcall FUN_0093b690(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
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
  float local_c;
  float local_8;
  float local_4;
  
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0.0;
  if (((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xf0) != 0)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0xa4) + 100), piVar1 != (int *)0x0)) {
    local_4 = 0.0;
    local_8 = 0.0;
    local_c = 0.0;
    local_14 = 0.0;
    local_18 = 0.0;
    local_1c = 0.0;
    local_24 = 0.0;
    local_28 = 0.0;
    local_2c = 0.0;
    local_10 = 1.0;
    local_20 = 1.0;
    local_30 = 1.0;
    FUN_0040b4f0(&local_30,*(float *)(*(int *)(param_1 + 0xf0) + 0xc4));
    iVar2 = *piVar1;
    iVar16 = 0;
    if (3 < iVar2) {
      pfVar14 = (float *)(piVar1[2] + 0x18);
      iVar15 = (iVar2 - 4U >> 2) + 1;
      iVar16 = iVar15 * 4;
      do {
        fVar3 = pfVar14[-6];
        fVar4 = pfVar14[-5];
        fVar5 = pfVar14[-4];
        fVar6 = pfVar14[-3];
        fVar7 = pfVar14[-2];
        fVar8 = pfVar14[-1];
        fVar9 = *pfVar14;
        fVar10 = pfVar14[1];
        fVar11 = pfVar14[2];
        fVar12 = pfVar14[3];
        fVar13 = pfVar14[4];
        local_4c = pfVar14[5];
        pfVar14 = pfVar14 + 0xc;
        iVar15 = iVar15 + -1;
        local_54 = fVar12 * local_30 + local_4c * local_18 + fVar13 * local_24 + local_c;
        local_50 = local_2c * fVar12 + local_4c * local_14 + fVar13 * local_20 + local_8;
        local_48 = local_54 +
                   fVar9 * local_30 + fVar11 * local_18 + fVar10 * local_24 + local_c +
                   fVar6 * local_30 + fVar8 * local_18 + fVar7 * local_24 + local_c +
                   fVar3 * local_30 + fVar5 * local_18 + fVar4 * local_24 + local_c + local_48;
        local_44 = local_50 +
                   local_2c * fVar9 + fVar11 * local_14 + fVar10 * local_20 + local_8 +
                   local_2c * fVar6 + fVar8 * local_14 + fVar7 * local_20 + local_8 +
                   local_2c * fVar3 + fVar5 * local_14 + fVar4 * local_20 + local_8 + local_44;
        local_40 = local_1c * fVar13 + local_28 * fVar12 + local_4c * local_10 + local_4 +
                   local_1c * fVar10 + local_28 * fVar9 + fVar11 * local_10 + local_4 +
                   local_1c * fVar7 + local_28 * fVar6 + fVar8 * local_10 + local_4 +
                   local_1c * fVar4 + local_28 * fVar3 + fVar5 * local_10 + local_4 + local_40;
      } while (iVar15 != 0);
    }
    if (iVar16 < iVar2) {
      pfVar14 = (float *)(piVar1[2] + iVar16 * 0xc);
      iVar16 = iVar2 - iVar16;
      do {
        fVar3 = *pfVar14;
        fVar4 = pfVar14[1];
        local_4c = pfVar14[2];
        pfVar14 = pfVar14 + 3;
        iVar16 = iVar16 + -1;
        local_54 = fVar3 * local_30 + local_4c * local_18 + fVar4 * local_24 + local_c;
        local_50 = local_2c * fVar3 + local_4c * local_14 + fVar4 * local_20 + local_8;
        local_48 = local_54 + local_48;
        local_44 = local_50 + local_44;
        local_40 = local_1c * fVar4 + local_28 * fVar3 + local_4c * local_10 + local_4 + local_40;
      } while (iVar16 != 0);
    }
    fVar3 = 1.0 / (float)iVar2;
    local_48 = local_48 * fVar3;
    local_44 = local_44 * fVar3;
    local_40 = local_40 * fVar3;
    local_3c = local_48;
    local_38 = local_44;
    local_34 = local_40;
    pfVar14 = (float *)(**(code **)(**(int **)(param_1 + 0xf0) + 0x34))(&local_54);
    fVar3 = pfVar14[1];
    fVar4 = pfVar14[2];
    *(float *)(param_1 + 0x1f0) = local_4c + *pfVar14;
    *(float *)(param_1 + 500) = local_48 + fVar3;
    *(float *)(param_1 + 0x1f8) = local_44 + fVar4;
    return;
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  return;
}


//// FUNCTION FUN_0093bd60 @ 0093bd60 ////

void __cdecl FUN_0093bd60(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_0093bdc0 @ 0093bdc0 ////

void __fastcall FUN_0093bdc0(int *param_1)

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
  puStack_8 = &LAB_00cf2758;
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


//// FUNCTION FUN_0093be90 @ 0093be90 ////

int * __fastcall
FUN_0093be90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *this;
  int iVar3;
  void *this_00;
  ulonglong uVar4;
  undefined4 *puVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf2783;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = 0;
  local_4 = 0;
  param_1[1] = DAT_0105bec0;
  uVar4 = FUN_00990ae0(param_1,param_2);
  param_1[2] = (int)uVar4;
  puVar2 = operator_new(0x528);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = FUN_005e2b90(puVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_008dcf70(this,param_4);
  puVar5 = this;
  iVar3 = FUN_0071b2a0();
  this_00 = (void *)FUN_0071b920(iVar3);
  FUN_00640700(this_00,puVar5);
  if (this != (undefined4 *)0x0) {
    this[0x12] = this[0x12] + 1;
  }
  puVar5 = (undefined4 *)*param_1;
  if (puVar5 != (undefined4 *)0x0) {
    piVar1 = puVar5 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(1);
    }
  }
  *param_1 = (int)this;
  piVar1 = this + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*this)(1);
    DAT_01050604 = DAT_0105bec0;
    ExceptionList = puVar2;
    return param_1;
  }
  DAT_01050604 = DAT_0105bec0;
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_0093bf90 @ 0093bf90 ////

void __fastcall FUN_0093bf90(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2798;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if ((int *)*param_1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)*param_1 + 0xc))(0x3f000000);
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
  puVar2 = (undefined4 *)*param_1;
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0093c010 @ 0093c010 ////

void __fastcall FUN_0093c010(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  param_1[1] = DAT_0105bec0;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[2] = (int)uVar1;
  FUN_005e2990((void *)*param_1);
  return;
}


//// FUNCTION FUN_0093c040 @ 0093c040 ////

int * __thiscall FUN_0093c040(void *this,byte param_1)

{
  FUN_0093bf90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0093c060 @ 0093c060 ////

undefined4 * __thiscall FUN_0093c060(void *this,undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_20;
  uint local_1c;
  uint local_18;
  byte local_14 [20];
  
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  _strncpy((char *)local_20,"",0);
  local_1c = 0;
  *local_20 = 0;
  pbVar3 = *(byte **)((int)this + 0x1a4);
  pbVar6 = local_20;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_0093c0d6:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_0093c0db;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_0093c0d6;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0093c0db:
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if ((iVar4 == 0) && (iVar4 = *(int *)((int)this + 0xa4), iVar4 != 0)) {
    local_20 = local_14;
    local_18 = 0x14;
    local_14[0] = 0;
    local_1c = 0;
    pcVar5 = (char *)(iVar4 + 4);
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_004015d0(&local_20,(char *)(iVar4 + 4),(int)pcVar5 - (iVar4 + 5));
    FUN_004015d0((undefined4 *)((int)this + 0x1a4),(char *)local_20,local_1c);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x1a4),*(uint *)((int)this + 0x1a8));
  return param_1;
}


//// FUNCTION FUN_0093c1b0 @ 0093c1b0 ////

void __thiscall FUN_0093c1b0(void *this,char *param_1,uint param_2,uint param_3)

{
  char in_stack_00000024;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf27b8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004015d0((void *)((int)this + 0x184),param_1,param_2);
  if (in_stack_00000024 != '\0') {
    (**(code **)(*(int *)this + 100))();
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0093c220 @ 0093c220 ////

void __fastcall FUN_0093c220(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xa8) == 0) || (*(int *)(param_1 + 0xa4) == 0)) goto LAB_0093c26a;
  if (*(int *)(param_1 + 0x240) == 0) {
LAB_0093c250:
    uVar2 = DAT_00e66060;
  }
  else {
    cVar1 = FUN_00960f30(*(int *)(param_1 + 0x240));
    uVar2 = DAT_00e6606c;
    if (cVar1 != '\0') goto LAB_0093c250;
  }
  FUN_00980b20(*(void **)(param_1 + 0xa8),**(int **)(param_1 + 0xa4),uVar2);
LAB_0093c26a:
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}


//// FUNCTION FUN_0093c280 @ 0093c280 ////

void __fastcall FUN_0093c280(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    if ((*(int *)(param_1 + 0x240) == 0) ||
       (cVar1 = FUN_00960f30(*(int *)(param_1 + 0x240)), uVar2 = DAT_00e6606c, cVar1 != '\0')) {
      uVar2 = DAT_00e66064;
    }
    FUN_00980b20(*(void **)(param_1 + 0xa8),**(int **)(param_1 + 0xa4),uVar2);
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    return;
  }
  return;
}


//// FUNCTION FUN_0093c2e0 @ 0093c2e0 ////

void __fastcall FUN_0093c2e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    if ((*(int *)(param_1 + 0x240) == 0) ||
       (cVar1 = FUN_00960f30(*(int *)(param_1 + 0x240)), uVar2 = DAT_00e6606c, cVar1 != '\0')) {
      uVar2 = DAT_00e66058;
    }
    FUN_00980b20(*(void **)(param_1 + 0xa8),**(int **)(param_1 + 0xa4),uVar2);
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    return;
  }
  return;
}


//// FUNCTION FUN_0093c340 @ 0093c340 ////

undefined4 *
FUN_0093c340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  void *this;
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_34 [16];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf27db;
  local_c = ExceptionList;
  uStack_24 = 0x93c366;
  ExceptionList = &local_c;
  this = operator_new(0x21c);
  local_4 = 0;
  if (this != (void *)0x0) {
    pcVar2 = local_34;
    local_34[0] = '\0';
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffffc0,(char *)*param_4,param_4[1]);
    puVar1 = CRoomPointExplainer_Constructor
                       (this,*param_1,param_1[1],param_1[2],param_2,param_3,pcVar2,uVar3,uVar4);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0093c400 @ 0093c400 ////

bool __cdecl FUN_0093c400(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if ((*(char *)(param_1 + 0x1c5) != '\0') && (param_2 != 0)) {
    return false;
  }
  if (*(uint *)(param_1 + 0x1e0) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0xf8) != 0) {
      uVar2 = (*(int *)(param_1 + 0xfc) - *(int *)(param_1 + 0xf8)) / 0x18;
    }
    if (*(uint *)(param_1 + 0x1e0) <= uVar2) {
      return false;
    }
  }
  if ((*(int *)(param_1 + 0xc0) != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0xf0) + 0xc4))(), cVar1 != '\0')) {
    return false;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x224) = 0;
    return (bool)*(undefined1 *)(param_1 + 0x1c5);
  }
  if ((*(int *)(param_1 + 0x240) != 0) &&
     (cVar1 = FUN_00960f30(*(int *)(param_1 + 0x240)), cVar1 == '\0')) {
    return false;
  }
  return *(char *)(param_1 + 0x1c6) != '\0';
}


//// FUNCTION RoomObject_SetAIInteractionKey @ 0093c4b0 ////

void __thiscall RoomObject_SetAIInteractionKey(void *this,undefined4 *param_1)

{
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2800;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004015d0((void *)((int)this + 0x164),*(char **)((int)this + 0x124),
               *(uint *)((int)this + 0x128));
  FUN_004015d0((int *)((int)this + 0x124),(char *)*param_1,param_1[1]);
  if (*(char *)((int)this + 0x1c9) != '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"",0);
    local_28 = 0;
    *local_2c = '\0';
    local_4c = local_40;
    local_4 = 0;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,".flm",4);
    local_48 = 4;
    local_4c[4] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00569860((int *)((int)this + 0x124),&local_4c,&local_2c);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  (**(code **)(*(int *)this + 100))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0093c5e0 @ 0093c5e0 ////

/* WARNING: Removing unreachable block (ram,0x0093c692) */

uint __thiscall FUN_0093c5e0(void *this,char param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  void *this_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte *_Dest;
  bool bVar6;
  byte local_20 [5];
  undefined1 local_1b;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf281b;
  local_c = ExceptionList;
  _Dest = local_20;
  puVar5 = (undefined4 *)0x0;
  local_20[0] = 0;
  ExceptionList = &local_c;
  _strncpy((char *)_Dest,"room_",5);
  local_1b = 0;
  pbVar2 = *(byte **)((int)this + 0x1a4);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *_Dest;
    if (bVar1 != *_Dest) {
LAB_0093c674:
      uVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0093c679;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < _Dest[1];
    if (bVar1 != _Dest[1]) goto LAB_0093c674;
    pbVar2 = pbVar2 + 2;
    _Dest = _Dest + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_0093c679:
  if ((uVar3 == 0) || (*(int *)((int)this + 0x128) == 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (!bVar6) {
    if (*(char *)((int)this + 0x1c9) == '\0') {
      FUN_0093b640((int)this);
      this_00 = operator_new(0x2e8);
      local_4 = 0;
      if (this_00 != (void *)0x0) {
        puVar5 = FUN_0040b940(this_00,*(int *)((int)this + 0xf0));
      }
      local_4 = 0xffffffff;
      (**(code **)(*(int *)((int)this + 0xc4) + 4))();
      *(undefined4 **)((int)this + 0xd8) = puVar5;
      (*(code *)**(undefined4 **)((int)this + 0xc4))();
      (**(code **)(**(int **)((int)this + 0xd8) + 0xb0))((int)this + 0x124);
    }
    puVar5 = *(undefined4 **)((int)this + 0x228);
    if ((puVar5 == (undefined4 *)0x0) ||
       (uVar4 = FUN_00479e80((undefined4 *)((int)this + 0x164),(undefined4 *)((int)this + 0x124)),
       (char)uVar4 != '\0')) {
      (**(code **)(*(int *)this + 0x94))();
      if (*(char *)((int)this + 0x1c9) == '\0') {
        uVar3 = FUN_00975c50(*(void **)(*(int *)((int)this + 0xd8) + 0x214),0);
        *(uint *)((int)this + 0x1ec) = uVar3;
        FUN_00946070(*(void **)((int)this + 0x228),uVar3);
      }
      else {
        uVar3 = FUN_009460c0(*(int **)((int)this + 0x228));
        *(uint *)((int)this + 0x1ec) = uVar3;
        if (*(char *)((int)this + 0x1cc) != '\0') {
          *(uint *)((int)this + 0x248) = uVar3;
        }
      }
      if (param_1 != '\0') {
        FUN_00944fe0(*(void **)((int)this + 0x228),(int)puVar5);
      }
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      uVar4 = FUN_004015d0((void *)((int)this + 0x164),*(char **)((int)this + 0x124),
                           *(uint *)((int)this + 0x128));
    }
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_0093c840 @ 0093c840 ////

void __fastcall FUN_0093c840(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_30 [12];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf283b;
  local_c = ExceptionList;
  uStack_24 = 0x93c863;
  ExceptionList = &local_c;
  this = operator_new(0x5c);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    pcVar2 = local_30;
    local_30[0] = '\0';
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffffc4,*(char **)(param_1 + 0x124),*(uint *)(param_1 + 0x128));
    puVar1 = FUN_00945e80(this,param_1,pcVar2,uVar3,uVar4);
  }
  *(undefined4 **)(param_1 + 0x228) = puVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0093c8d0 @ 0093c8d0 ////

void __fastcall FUN_0093c8d0(int *param_1)

{
  int *_Memory;
  
  (**(code **)(*param_1 + 0x4c))();
  (**(code **)(*param_1 + 0x68))();
  _Memory = (int *)param_1[0x88];
  if (_Memory != (int *)0x0) {
    FUN_0093bf90(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x88] = 0;
  if ((undefined4 *)param_1[0x8a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x8a])(1);
  }
  param_1[0x8a] = 0;
  return;
}


//// FUNCTION FUN_0093c930 @ 0093c930 ////

void __fastcall FUN_0093c930(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[0x3c] != 0) && (*(int *)(param_1[0x3c] + 0x2b8) == 5)) {
    uVar1 = FUN_0093c5e0(param_1,'\0');
    if ((char)uVar1 != '\0') {
      (**(code **)(*param_1 + 100))();
    }
    FUN_0093b690((int)param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_0093c970 @ 0093c970 ////

undefined4 __fastcall FUN_0093c970(void *param_1)

{
  if (*(int *)((int)param_1 + 0x228) == 0) {
    FUN_0093c5e0(param_1,'\0');
  }
  return *(undefined4 *)((int)param_1 + 0x228);
}


//// FUNCTION FUN_0093c990 @ 0093c990 ////

longlong * __thiscall FUN_0093c990(void *this,longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 local_18;
  undefined1 auStack_10 [12];
  
  local_18 = FUN_00acd42c();
  FUN_00471b10(&local_18);
  iVar3 = *(int *)((int)this + 0xf8);
  if (iVar3 != *(int *)((int)this + 0xfc)) {
    do {
      if (*(int **)(iVar3 + 0x14) != (int *)0x0) {
        piVar1 = (int *)FUN_00ace790(*(int **)(iVar3 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                                     &TM::CStaff::RTTI_Type_Descriptor,0);
        if (piVar1 != (int *)0x0) {
          piVar1 = (int *)(**(code **)(*piVar1 + 0x1d4))();
          puVar2 = (uint *)(**(code **)(*piVar1 + 0x10))(auStack_10);
          local_18 = CONCAT44(local_18._4_4_ + puVar2[1] + (uint)CARRY4((uint)local_18,*puVar2),
                              (uint)local_18 + *puVar2);
          FUN_00471b10(&local_18);
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0xfc));
  }
  *(uint *)param_1 = (uint)local_18;
  *(int *)((int)param_1 + 4) = local_18._4_4_;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_0093cb40 @ 0093cb40 ////

void __fastcall FUN_0093cb40(int param_1)

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


//// FUNCTION FUN_0093cc00 @ 0093cc00 ////

undefined4 * __thiscall FUN_0093cc00(void *this,byte param_1)

{
  FUN_0053d280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0093cc20 @ 0093cc20 ////

void __fastcall FUN_0093cc20(int param_1)

{
  undefined4 *this;
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *this_00;
  char *pcVar5;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2863;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0x128) == 0)) {
    this = (undefined4 *)(param_1 + 0x124);
    ExceptionList = &local_c;
    FUN_004015d0(this,"ai_",3);
    pcVar5 = (char *)(*(int *)(param_1 + 0xa4) + 4);
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(this,pcVar5,(int)pcVar2 - (*(int *)(param_1 + 0xa4) + 5));
    if (*(char *)(param_1 + 0x1c9) == '\0') {
      FUN_004073f0(this,".flm",4);
      puVar3 = FUN_0040d6b0(local_2c,"data/scene/interactions/",this);
      local_4 = 0;
      uVar4 = FUN_009d3660(puVar3,(uint *)0x0);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if ((char)uVar4 == '\0') {
        FUN_00403e20(this,"");
        ExceptionList = local_c;
        return;
      }
      this_00 = operator_new(0x2e8);
      local_4 = 1;
      if (this_00 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_0040b940(this_00,*(int *)(param_1 + 0xf0));
      }
      local_4 = 0xffffffff;
      (**(code **)(*(int *)(param_1 + 0xc4) + 4))();
      *(undefined4 **)(param_1 + 0xd8) = puVar3;
      (*(code *)**(undefined4 **)(param_1 + 0xc4))();
      (**(code **)(**(int **)(param_1 + 0xd8) + 0xb0))(this);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0093cd90 @ 0093cd90 ////

void __thiscall FUN_0093cd90(void *this,char param_1)

{
  int *piVar1;
  
  *(char *)((int)this + 0x1c8) = param_1;
  *(undefined4 *)((int)this + 0x9c) = 0;
  if (param_1 == '\0') {
    *(undefined4 *)((int)this + 0xa0) = 0xbf800000;
  }
  else {
    *(undefined4 *)((int)this + 0xa0) = 0x3fcccccd;
  }
  piVar1 = *(int **)((int)this + 0x90);
  if (piVar1 != *(int **)((int)this + 0x94)) {
    do {
      *(undefined4 *)(*piVar1 + 0xe8) = *(undefined4 *)((int)this + 0xa0);
      piVar1 = piVar1 + 1;
    } while (piVar1 != *(int **)((int)this + 0x94));
  }
  return;
}


//// FUNCTION FUN_0093cdf0 @ 0093cdf0 ////

int __thiscall FUN_0093cdf0(void *this,float *param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  bool bVar11;
  int local_38;
  float local_34;
  byte *local_20 [2];
  uint local_18;
  
  piVar9 = *(int **)((int)this + 0x90);
  local_34 = 3.4028235e+38;
  local_38 = 0;
  iVar8 = 0;
  if (piVar9 != *(int **)((int)this + 0x94)) {
    do {
      iVar8 = *piVar9;
      iVar2 = local_38;
      fVar3 = local_34;
      if ((*(void **)((int)this + 0x228) == (void *)0x0) ||
         (uVar6 = FUN_00944f80(*(void **)((int)this + 0x228),*(uint *)(iVar8 + 0x1b8)),
         (char)uVar6 != '\0')) {
        FUN_0048f010(&stack0x00000008,local_20);
        pbVar7 = *(byte **)(iVar8 + 0xb0);
        pbVar10 = local_20[0];
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_0093ce84:
            iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0093ce89;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_0093ce84;
          pbVar7 = pbVar7 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_0093ce89:
        if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
          _free(local_20[0]);
        }
        if (iVar8 == 0) {
          iVar2 = *piVar9;
          fVar3 = *param_1 - *(float *)(iVar2 + 0x94);
          fVar5 = param_1[1] - *(float *)(iVar2 + 0x98);
          fVar4 = param_1[2] - *(float *)(iVar2 + 0x9c);
          fVar3 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
          if ((local_38 != 0) && (local_34 <= fVar3)) {
            iVar2 = local_38;
            fVar3 = local_34;
          }
        }
      }
      local_34 = fVar3;
      local_38 = iVar2;
      piVar9 = piVar9 + 1;
      iVar8 = local_38;
    } while (piVar9 != *(int **)((int)this + 0x94));
  }
  return iVar8;
}


//// FUNCTION FUN_0093cf40 @ 0093cf40 ////

undefined4 __thiscall FUN_0093cf40(void *this,int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 in_EAX;
  uint3 uVar4;
  undefined4 uVar3;
  uint3 extraout_var;
  
  uVar4 = (uint3)((uint)in_EAX >> 8);
  if (*(char *)((int)this + 0x1c6) != '\0') {
    bVar1 = FUN_0093c400((int)this,param_1);
    if (bVar1) {
      cVar2 = (**(code **)(*(int *)this + 0x58))(param_1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x80))();
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    (**(code **)(*(int *)this + 0x84))();
    uVar4 = extraout_var;
  }
  return (uint)uVar4 << 8;
}


//// FUNCTION FUN_0093cf90 @ 0093cf90 ////

uint __thiscall FUN_0093cf90(void *this,int param_1)

{
  uint uVar1;
  uint in_EAX;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)((int)this + 0xfc);
    in_EAX = *(uint *)((int)this + 0xf8);
    if (in_EAX != uVar1) {
      do {
        if (*(int *)(in_EAX + 0x14) == param_1) break;
        in_EAX = in_EAX + 0x18;
      } while (in_EAX != uVar1);
      if (in_EAX != uVar1) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION TMRoom_FinalizeSlotAssignment @ 0093cfd0 ////

void __thiscall TMRoom_FinalizeSlotAssignment(void *this,int *param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  pvVar1 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                &TM::TMCharacter::RTTI_Type_Descriptor,0);
  if (pvVar1 != (void *)0x0) {
    if (*(char *)((int)this + 0x1c9) == '\0') {
      (**(code **)(*(int *)this + 0x50))(param_2);
      return;
    }
    if (*(int *)((int)this + 0x228) == 0) {
      FUN_0093c5e0(this,'\0');
    }
    if (*(void **)((int)this + 0x228) != (void *)0x0) {
      iVar2 = FUN_009455e0(*(void **)((int)this + 0x228),pvVar1);
      uVar3 = 0;
      while( true ) {
        if (*(int *)((int)this + 0x90) == 0) {
          return;
        }
        if ((uint)(*(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2) <= uVar3) {
          return;
        }
        if (*(int *)(*(int *)(*(int *)((int)this + 0x90) + uVar3 * 4) + 0x1b8) == iVar2) break;
        uVar3 = uVar3 + 1;
      }
      FUN_00931d40(*(void **)(*(int *)((int)this + 0x90) + uVar3 * 4),'\0');
      (**(code **)(**(int **)(*(int *)((int)this + 0x90) + uVar3 * 4) + 100))(pvVar1);
    }
  }
  return;
}


//// FUNCTION FUN_0093d320 @ 0093d320 ////

int __fastcall FUN_0093d320(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xf8);
  iVar2 = 0;
  if (iVar3 != *(int *)(param_1 + 0xfc)) {
    do {
      iVar1 = FUN_00ace790(*(int **)(iVar3 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                           &TM::TMCharacter::RTTI_Type_Descriptor,0);
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0xfc));
  }
  return iVar2;
}


//// FUNCTION FUN_0093d380 @ 0093d380 ////

void __thiscall FUN_0093d380(void *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  iVar3 = *(int *)((int)this + 0xf8);
  if (iVar3 != *(int *)((int)this + 0xfc)) {
    do {
      if (*(int **)(iVar3 + 0x14) != (int *)0x0) {
        iVar1 = FUN_00ace790(*(int **)(iVar3 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                             &TM::CStaff::RTTI_Type_Descriptor,0);
        if (iVar1 == 0) {
          *param_3 = *param_3 + 1;
        }
        else {
          uVar2 = FUN_00598ee0(iVar1);
          if ((char)uVar2 == '\0') {
            *param_2 = *param_2 + 1;
          }
          else {
            *param_1 = *param_1 + 1;
          }
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0xfc));
  }
  return;
}


//// FUNCTION FUN_0093d410 @ 0093d410 ////

void __fastcall FUN_0093d410(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x90);
  if (puVar1 != *(undefined4 **)(param_1 + 0x94)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x68))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x94));
  }
  *(undefined1 *)(param_1 + 0x1cb) = 1;
  return;
}


//// FUNCTION FUN_0093d440 @ 0093d440 ////

void __thiscall FUN_0093d440(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    do {
      iVar2 = *(int *)((int)this + 0x90);
      if ((iVar2 == 0) || ((uint)(*(int *)((int)this + 0x94) - iVar2 >> 2) <= uVar3)) break;
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(*(int *)(iVar2 + iVar1) + 0x1ed) = 1;
    } while (uVar3 < param_1);
  }
  for (; (iVar2 = *(int *)((int)this + 0x90), iVar2 != 0 &&
         (param_1 < (uint)(*(int *)((int)this + 0x94) - iVar2 >> 2))); param_1 = param_1 + 1) {
    *(undefined1 *)(*(int *)(iVar2 + param_1 * 4) + 0x1ed) = 0;
  }
  return;
}


//// FUNCTION FUN_0093d4b0 @ 0093d4b0 ////

void __fastcall FUN_0093d4b0(int param_1)

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


//// FUNCTION FUN_0093d540 @ 0093d540 ////

void __thiscall FUN_0093d540(void *this,void *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2898;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0xac) + 4))();
  *(undefined4 *)((int)this + 0xc0) = param_3;
  (*(code *)**(undefined4 **)((int)this + 0xac))();
  *(void **)((int)this + 0xa8) = param_1;
  *(int *)((int)this + 0x1e8) = param_2;
  if (param_1 != (void *)0x0) {
    iVar1 = MeshRoomList_GetRoomByIndex(param_1,param_2);
    *(int *)((int)this + 0xa4) = iVar1;
  }
  if (*(int *)((int)this + 0xc0) != 0) {
    uVar3 = *(undefined4 *)(*(int *)((int)this + 0xc0) + 0x24c);
    (**(code **)(*(int *)((int)this + 0xdc) + 4))();
    *(undefined4 *)((int)this + 0xf0) = uVar3;
    (*(code *)**(undefined4 **)((int)this + 0xdc))();
  }
  if (*(int *)((int)this + 0xa4) != 0) {
    puVar2 = FUN_0093c060(this,apvStack_2c);
    uStack_4 = 0;
    uVar3 = thunk_FUN_009623a0(puVar2);
    (**(code **)(*(int *)((int)this + 0x22c) + 4))();
    *(undefined4 *)((int)this + 0x240) = uVar3;
    (*(code *)**(undefined4 **)((int)this + 0x22c))();
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  FUN_0093cc20((int)this);
  FUN_0093b690((int)this);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0093d650 @ 0093d650 ////

void __fastcall FUN_0093d650(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  while ((piVar1 = *(int **)(param_1 + 0x90), piVar1 != (int *)0x0 &&
         (*(int *)(param_1 + 0x94) - (int)piVar1 >> 2 != 0))) {
    puVar2 = (undefined4 *)*piVar1;
    _memmove(piVar1,piVar1 + 1,(*(int *)(param_1 + 0x94) - (int)(piVar1 + 1) >> 2) << 2);
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -4;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0093d6c0 @ 0093d6c0 ////

undefined4 __thiscall FUN_0093d6c0(void *this,int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *unaff_retaddr;
  undefined4 uStack_24;
  float fStack_20;
  void *local_1c;
  float fStack_18;
  void *pvStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf28bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::TMCharacter::RTTI_Type_Descriptor,0);
  if (((param_1 == (int *)0x0) && (iVar4 == 0)) || (*(int *)((int)this + 0x128) == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  uStack_24._3_1_ = '\0';
  if ((*(char *)((int)this + 0x1c9) == '\0') &&
     ((*(int *)((int)this + 0xd8) == 0 || (*(int *)(*(int *)((int)this + 0xd8) + 0x214) == 0)))) {
    FUN_0093b640((int)this);
    local_1c = operator_new(0x2e8);
    local_4 = 0;
    if (local_1c == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_0040b940(local_1c,*(int *)((int)this + 0xf0));
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 0xc4) + 4))();
    *(undefined4 **)((int)this + 0xd8) = puVar5;
    (*(code *)**(undefined4 **)((int)this + 0xc4))();
    (**(code **)(**(int **)((int)this + 0xd8) + 0xb0))((int)this + 0x124);
    uStack_24._3_1_ = '\x01';
  }
  iVar4 = *(int *)((int)this + 0x228);
  if (iVar4 == 0) {
    (**(code **)(*(int *)this + 0x94))();
    if (*(char *)((int)this + 0x1c9) == '\0') {
      uVar6 = FUN_00975c50(*(void **)(*(int *)((int)this + 0xd8) + 0x214),0);
      *(uint *)((int)this + 0x1ec) = uVar6;
      FUN_00946070(*(void **)((int)this + 0x228),uVar6);
    }
    else {
      uVar6 = FUN_009460c0(*(int **)((int)this + 0x228));
      *(uint *)((int)this + 0x1ec) = uVar6;
      if (*(char *)((int)this + 0x1cc) != '\0') {
        *(uint *)((int)this + 0x248) = uVar6;
      }
    }
    uVar6 = *(uint *)((int)this + 0x1e0);
    if (uVar6 == 0) {
      uVar7 = *(uint *)((int)this + 0x1ec);
    }
    else {
      uVar7 = uVar6;
      if (*(uint *)((int)this + 0x1ec) <= uVar6) {
        uVar7 = *(uint *)((int)this + 0x1ec);
      }
    }
    *(uint *)((int)this + 0x1e0) = uVar7;
    if (uVar6 != uVar7) {
      FUN_0093d440(this,uVar7);
    }
    iVar4 = FUN_004015d0((void *)((int)this + 0x164),*(char **)((int)this + 0x124),
                         *(uint *)((int)this + 0x128));
  }
  uVar6 = CONCAT31((int3)((uint)iVar4 >> 8),*(char *)((int)this + 0x1c8));
  fStack_20 = 0.0;
  if (*(char *)((int)this + 0x1c8) == '\0') {
    if ((*(char *)((int)this + 0x1cc) == '\0') || (uVar9 = *(uint *)((int)this + 0x248), uVar9 == 0)
       ) {
      uVar6 = FUN_00944f60(*(void **)((int)this + 0x228),(int)param_1);
      uVar7 = uVar6;
    }
    else {
      uVar7 = *(uint *)((int)this + 0x244);
      uVar1 = uVar7 + 1;
      uVar6 = uVar1 / uVar9;
      *(uint *)((int)this + 0x244) = uVar1 % uVar9;
    }
  }
  else {
    if (*(int **)((int)this + 0x9c) == (int *)0x0) goto LAB_0093da65;
    uVar3 = (**(code **)(**(int **)((int)this + 0x9c) + 0x74))();
    local_1c = (void *)CONCAT31(local_1c._1_3_,uVar3);
    FUN_00931d40(*(void **)((int)this + 0x9c),'\x01');
    uVar6 = *(uint *)(*(int *)((int)this + 0x9c) + 0x1b8);
    uVar7 = FUN_00945330(*(void **)((int)this + 0x228),param_1,uVar6);
    if (uVar7 == uVar6) {
      uVar6 = FUN_00931d40(*(void **)((int)this + 0x9c),(char)local_1c);
    }
    else {
      uVar6 = FUN_00931d40(*(void **)((int)this + 0x9c),(char)local_1c);
      *(undefined4 *)((int)this + 0x9c) = 0;
      uVar9 = 0;
      while( true ) {
        if ((*(int *)((int)this + 0x90) == 0) ||
           (uVar6 = *(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2, uVar6 <= uVar9))
        goto LAB_0093d97c;
        uVar6 = *(uint *)(*(int *)((int)this + 0x90) + uVar9 * 4);
        if (*(uint *)(uVar6 + 0x1b8) == uVar7) break;
        uVar9 = uVar9 + 1;
      }
      uVar6 = *(uint *)(*(int *)((int)this + 0x90) + uVar9 * 4);
      *(uint *)((int)this + 0x9c) = uVar6;
    }
  }
LAB_0093d97c:
  if ((-1 < (int)uVar7) && (uVar7 < *(uint *)((int)this + 0x1ec))) {
    if (*(char *)((int)this + 0x1c9) == '\0') {
      FUN_009782d0(*(void **)(*(int *)((int)this + 0xd8) + 0x214),0,uVar7,&fStack_18,&fStack_20);
      if (uStack_24._3_1_ != '\0') {
        puVar5 = *(undefined4 **)((int)this + 0xd8);
        piVar2 = puVar5 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar5)(1);
        }
      }
      uVar8 = (**(code **)(*param_1 + 0xa8))(&fStack_18,&fStack_20);
    }
    else {
      puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x228) + 4))(uVar7);
      uVar8 = 0;
      if (puVar5 != (undefined4 *)0x0) {
        FUN_009782d0((void *)puVar5[0x85],0,0,(float *)&local_1c,(float *)&uStack_24);
        uVar8 = (**(code **)(*unaff_retaddr + 0xa8))(&local_1c,&uStack_24);
        piVar2 = puVar5 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          uVar8 = (**(code **)*puVar5)(1);
          ExceptionList = pvStack_14;
          return CONCAT31((int3)((uint)uVar8 >> 8),1);
        }
      }
    }
    ExceptionList = pvStack_10;
    return CONCAT31((int3)((uint)uVar8 >> 8),1);
  }
LAB_0093da65:
  ExceptionList = local_c;
  return uVar6 & 0xffffff00;
}


//// FUNCTION FUN_0093da90 @ 0093da90 ////

void __cdecl FUN_0093da90(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d23630;
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


//// FUNCTION FUN_0093db00 @ 0093db00 ////

int * __thiscall FUN_0093db00(void *this,undefined4 param_1)

{
  int *this_00;
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf28db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x128);
  local_4 = 0;
  if (this_00 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    FUN_008433b0(this_00);
    *this_00 = (int)&PTR_FUN_00d251ac;
  }
  pvVar1 = (void *)0x0;
  local_4 = 0xffffffff;
  (**(code **)(*this_00 + 0x44))((int)this + 0x104,0,0,0,0,param_1);
  FUN_00842f90(this_00,1.0);
  ExceptionList = pvVar1;
  return this_00;
}


//// FUNCTION FUN_0093dbc0 @ 0093dbc0 ////

void __cdecl FUN_0093dbc0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d23630;
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


//// FUNCTION FUN_0093dce0 @ 0093dce0 ////

void FUN_0093dce0(void)

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
  puStack_8 = &LAB_00cf28f8;
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


//// FUNCTION FUN_0093dd50 @ 0093dd50 ////

void FUN_0093dd50(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_0053d280(param_1);
  }
  return;
}


//// FUNCTION FUN_0093dd80 @ 0093dd80 ////

void __fastcall FUN_0093dd80(int param_1)

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
    FUN_0053d280(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0093ddd0 @ 0093ddd0 ////

undefined4 * FUN_0093ddd0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_0093dbc0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0093de00 @ 0093de00 ////

void __thiscall FUN_0093de00(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_0093b5c0((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_0053d280(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0093de60 @ 0093de60 ////

void FUN_0093de60(void)

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
  puStack_8 = &LAB_00cf2918;
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


//// FUNCTION FUN_0093df00 @ 0093df00 ////

void __fastcall FUN_0093df00(int param_1)

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
    FUN_0053d280(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0093df10 @ 0093df10 ////

void __thiscall FUN_0093df10(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0093b5c0((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_0053d280(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0093e010 @ 0093e010 ////

void __thiscall FUN_0093e010(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cf2938;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d23630;
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
      FUN_0093de60();
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
        iVar3 = FUN_00919570((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_0093da90(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_0093dbc0(puVar5,param_2,(int)&local_34);
      FUN_0093da90((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0093dd50(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_0093da90((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0093ddd0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_0093bd60(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_0093da90((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_0093b600((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_0093bd60(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0093e340 @ 0093e340 ////

void __thiscall FUN_0093e340(void *this,int param_1)

{
  int iVar1;
  void *extraout_EDX;
  void *this_00;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = *(int *)((int)this + 0x90);
    if ((iVar1 == 0) || ((uint)(*(int *)((int)this + 0x94) - iVar1 >> 2) <= uVar2)) {
      return;
    }
    if ((iVar1 == 0) || ((uint)(*(int *)((int)this + 0x94) - iVar1 >> 2) <= uVar2)) break;
    this_00 = *(void **)(iVar1 + uVar2 * 4);
    if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x1b8) == param_1)) goto LAB_0093e38a;
    uVar2 = uVar2 + 1;
  }
  FUN_0093dce0();
  this_00 = extraout_EDX;
LAB_0093e38a:
  FUN_00931d40(this_00,'\x01');
  return;
}


//// FUNCTION FUN_0093e3a0 @ 0093e3a0 ////

undefined4 __thiscall FUN_0093e3a0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    if (*(void **)((int)this + 0x228) != (void *)0x0) {
      uVar3 = FUN_00944da0(*(void **)((int)this + 0x228),param_1);
      if (-1 < (int)uVar3) {
        FUN_0093e340(this,uVar3);
      }
    }
    piVar1 = *(int **)((int)this + 0xfc);
    in_EAX = *(int **)((int)this + 0xf8);
    if (in_EAX != piVar1) {
      do {
        if (in_EAX[5] == iVar2) break;
        in_EAX = in_EAX + 6;
      } while (in_EAX != piVar1);
      if (in_EAX != piVar1) {
        uVar4 = FUN_0093df10((void *)((int)this + 0xf4),&param_1,in_EAX);
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}


//// FUNCTION FUN_0093e410 @ 0093e410 ////

void __thiscall FUN_0093e410(void *this,int param_1)

{
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x228) != 0) {
      FUN_00944e80(*(int *)((int)this + 0x228));
    }
    FUN_0093dd80((int)this + 0xf4);
    return;
  }
  *(int *)((int)this + 0x1e4) = param_1;
  return;
}


//// FUNCTION FUN_0093e450 @ 0093e450 ////

undefined4 __fastcall FUN_0093e450(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x128) != 0) {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x128) >> 8),*(char *)(param_1 + 0x1c9));
    if (*(char *)(param_1 + 0x1c9) == '\0') {
      uVar1 = FUN_0093dd80(param_1 + 0xf4);
      if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
        uVar1 = (**(code **)(**(int **)(param_1 + 0xd8) + 4))();
      }
    }
    if (*(int *)(param_1 + 0x228) != 0) {
      uVar1 = FUN_00944e80(*(int *)(param_1 + 0x228));
    }
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_0093e4a0 @ 0093e4a0 ////

undefined4 __fastcall FUN_0093e4a0(int param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  undefined4 *puVar4;
  char extraout_AL;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined3 uVar11;
  undefined3 extraout_var;
  int *piVar10;
  undefined3 extraout_var_00;
  void *this;
  char *pcVar12;
  uint _Count;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  int local_30;
  byte *local_2c;
  uint local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2960;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x8c) == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  iVar5 = FUN_0097e350(*(void **)(*(int *)(param_1 + 0x8c) + 0x11c),0);
  FUN_009dc300(iVar5);
  pvVar3 = *(void **)(*(int *)(param_1 + 0x8c) + 0x11c);
  *(void **)(param_1 + 0x44) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = 0;
    local_30 = FUN_0097e9d0(pvVar3);
    iVar5 = 0;
    if (0 < local_30) {
      do {
        iVar6 = MeshRoomList_GetRoomByIndex(*(void **)(param_1 + 0x44),iVar5);
        pcVar12 = (char *)(iVar6 + 4);
        do {
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        _Count = (int)pcVar12 - (iVar6 + 5);
        if (local_24 <= _Count) {
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          local_24 = _Count + 0x20 & 0xffffffe0;
          local_2c = _malloc(local_24);
        }
        _strncpy((char *)local_2c,(char *)(iVar6 + 4),_Count);
        local_2c[_Count] = 0;
        pbVar7 = *(byte **)(param_1 + 0x140);
        pbVar13 = local_2c;
        do {
          bVar2 = *pbVar7;
          bVar15 = bVar2 < *pbVar13;
          if (bVar2 != *pbVar13) {
LAB_0093e5d9:
            iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_0093e5de;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar15 = bVar2 < pbVar13[1];
          if (bVar2 != pbVar13[1]) goto LAB_0093e5d9;
          pbVar7 = pbVar7 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_0093e5de:
        local_28 = _Count;
        if (iVar6 == 0) {
          iVar6 = MeshRoomList_GetRoomByIndex(*(void **)(param_1 + 0x44),iVar5);
          *(int *)(param_1 + 0x40) = iVar6;
          *(int *)(param_1 + 0x184) = iVar5;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_30);
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar5 = MeshRoomList_GetRoomByIndex(*(void **)(param_1 + 0x44),0);
      *(int *)(param_1 + 0x40) = iVar5;
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  piVar14 = (int *)(param_1 + -100);
  puVar8 = FUN_0093c060(piVar14,&local_2c);
  local_4 = 1;
  uVar9 = thunk_FUN_009623a0(puVar8);
  (**(code **)(*(int *)(param_1 + 0x1c8) + 4))();
  *(undefined4 *)(param_1 + 0x1dc) = uVar9;
  (*(code *)**(undefined4 **)(param_1 + 0x1c8))();
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0093cc20((int)piVar14);
  FUN_0093b690((int)piVar14);
  uVar9 = FUN_0093cd90(piVar14,*(char *)(param_1 + 0x164));
  uVar11 = (undefined3)((uint)uVar9 >> 8);
  if (*(char *)(param_1 + 0x162) != '\0') {
    FUN_0093c5e0(this,'\0');
    (**(code **)(*piVar14 + 0x50))(0);
    (**(code **)(*piVar14 + 100))();
    (**(code **)(*piVar14 + 0x70))();
    if (extraout_AL == '\0') {
      FUN_0093dd80(param_1 + 0x90);
      uVar11 = extraout_var_00;
    }
    else {
      piVar14 = *(int **)(param_1 + 0x94);
      uVar11 = extraout_var;
      if (piVar14 != *(int **)(param_1 + 0x98)) {
        do {
          if ((int *)piVar14[5] == (int *)0x0) {
            piVar10 = FUN_0093b5c0((int)(piVar14 + 6),*(int *)(param_1 + 0x98),piVar14);
            puVar4 = *(undefined4 **)(param_1 + 0x98);
            puVar8 = puVar4 + -6;
            if (puVar8 != puVar4) {
              piVar10 = puVar4 + -4;
              do {
                *puVar8 = &PTR_FUN_00d23630;
                if ((int *)*piVar10 != (int *)0x0) {
                  *(int *)*piVar10 = piVar10[-1];
                }
                if (piVar10[-1] != 0) {
                  *(int *)(piVar10[-1] + 4) = *piVar10;
                }
                piVar10[-1] = 0;
                *piVar10 = 0;
                piVar10[3] = 0;
                if ((int *)*piVar10 != (int *)0x0) {
                  *(int *)*piVar10 = piVar10[-1];
                }
                if (piVar10[-1] != 0) {
                  *(int *)(piVar10[-1] + 4) = *piVar10;
                }
                piVar10[-1] = 0;
                *piVar10 = 0;
                puVar8 = puVar8 + 6;
                piVar10 = piVar10 + 6;
              } while (puVar8 != puVar4);
            }
            *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -0x18;
          }
          else {
            iVar5 = FUN_00ace790((int *)piVar14[5],0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CStaff::RTTI_Type_Descriptor,0);
            piVar10 = (int *)0x0;
            if (iVar5 != 0) {
              iVar6 = FUN_0053ae00(iVar5);
              if (iVar6 != param_1 + -100) {
                piVar10 = (int *)FUN_0093df10((void *)(param_1 + 0x90),&local_30,piVar14);
                piVar14 = (int *)*piVar10;
                goto LAB_0093e7d1;
              }
              piVar10 = (int *)(**(code **)(*(int *)(param_1 + -100) + 0x6c))(iVar5);
            }
            piVar14 = piVar14 + 6;
          }
LAB_0093e7d1:
          if (piVar14 == *(int **)(param_1 + 0x98)) {
            ExceptionList = local_c;
            return CONCAT31((int3)((uint)piVar10 >> 8),1);
          }
        } while( true );
      }
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar11,1);
}


//// FUNCTION FUN_0093e840 @ 0093e840 ////

void __thiscall FUN_0093e840(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf2978;
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
    FUN_0093e010(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_0093de00(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
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


//// FUNCTION FUN_0093e920 @ 0093e920 ////

void __thiscall FUN_0093e920(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0093e965;
    }
  }
  iVar1 = 0;
LAB_0093e965:
  FUN_0093e010(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION TMRoom_Constructor @ 0093e990 ////

undefined4 * __fastcall TMRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf29db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d6e70c;
  param_1[0x19] = &PTR_LAB_00d6e6ec;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0xbf800000;
  param_1[0x29] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x2b;
  param_1[0x2b] = &PTR_LAB_00d22784;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = param_1 + 0x31;
  param_1[0x31] = &PTR_LAB_00d60770;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = param_1 + 0x37;
  param_1[0x37] = &PTR_FUN_00d16bec;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = param_1 + 0x44;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x14;
  FUN_004015d0(param_1 + 0x41,"inroom",6);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x14;
  param_1[0x49] = param_1 + 0x4c;
  *(undefined1 *)(param_1 + 0x54) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0x14;
  param_1[0x51] = param_1 + 0x54;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x59] = param_1 + 0x5c;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x14;
  param_1[0x61] = param_1 + 100;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0x14;
  param_1[0x69] = param_1 + 0x6c;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0x14;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined1 *)((int)param_1 + 0x1c5) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)((int)param_1 + 0x1ca) = 0;
  *(undefined1 *)((int)param_1 + 0x1cb) = 0;
  *(undefined1 *)((int)param_1 + 0x1c6) = 1;
  *(undefined1 *)((int)param_1 + 0x1c9) = 1;
  *(undefined1 *)(param_1 + 0x73) = 1;
  *(undefined1 *)(param_1 + 0x74) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d1) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d2) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d3) = 0xff;
  param_1[0x74] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x75) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d5) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d6) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1d7) = 0xff;
  param_1[0x75] = 0xffffffff;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x7f] = 0;
  *(undefined2 *)(param_1 + 0x83) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 10;
  param_1[0x80] = param_1 + 0x83;
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8e] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x8b] = &PTR_LAB_00d33824;
  param_1[0x8e] = param_1 + 0x8b;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x74] = DAT_00e66068;
  *(undefined1 *)((int)param_1 + 0x1d3) = 0;
  param_1[0x75] = param_1[0x74];
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION TMRoom_Destructor @ 0093ec70 ////

void __fastcall TMRoom_Destructor(undefined4 *param_1)

{
  int *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf2ad5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6e70c;
  param_1[0x19] = &PTR_LAB_00d6e6ec;
  _Memory = (int *)param_1[0x88];
  local_4 = 0xe;
  if (_Memory != (int *)0x0) {
    FUN_0093bf90(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x88] = 0;
  if (param_1[0x4a] != 0) {
    if (*(char *)((int)param_1 + 0x1c9) == '\0') {
      FUN_0093dd80((int)(param_1 + 0x3d));
      if ((int *)param_1[0x36] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x36] + 4))();
      }
    }
    if (param_1[0x8a] != 0) {
      FUN_00944e80(param_1[0x8a]);
    }
  }
  FUN_0093b640((int)param_1);
  if ((undefined4 *)param_1[0x8a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x8a])(1);
  }
  param_1[0x8a] = 0;
  FUN_0093d650((int)param_1);
  param_1[0x8b] = &PTR_LAB_00d33824;
  if ((undefined4 *)param_1[0x8d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8d] = param_1[0x8c];
  }
  if (param_1[0x8c] != 0) {
    *(undefined4 *)(param_1[0x8c] + 4) = param_1[0x8d];
  }
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  if ((undefined4 *)param_1[0x8d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8d] = param_1[0x8c];
  }
  if (param_1[0x8c] != 0) {
    *(undefined4 *)(param_1[0x8c] + 4) = param_1[0x8d];
  }
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  if (10 < (uint)param_1[0x82]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x80]);
  }
  if (0x14 < (uint)param_1[0x6b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x69]);
  }
  if (0x14 < (uint)param_1[99]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x61]);
  }
  if (0x14 < (uint)param_1[0x5b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x59]);
  }
  if (0x14 < (uint)param_1[0x53]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x51]);
  }
  if (0x14 < (uint)param_1[0x4b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x49]);
  }
  if (0x14 < (uint)param_1[0x43]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x41]);
  }
  FUN_0093dd80((int)(param_1 + 0x3d));
  param_1[0x37] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0x39] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x39] = param_1[0x38];
  }
  if (param_1[0x38] != 0) {
    *(undefined4 *)(param_1[0x38] + 4) = param_1[0x39];
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  if ((undefined4 *)param_1[0x39] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x39] = param_1[0x38];
  }
  if (param_1[0x38] != 0) {
    *(undefined4 *)(param_1[0x38] + 4) = param_1[0x39];
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x31] = &PTR_LAB_00d60770;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x2b] = &PTR_LAB_00d22784;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2d] = param_1[0x2c];
  }
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2d] = param_1[0x2c];
  }
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if ((void *)param_1[0x24] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x24]);
  }
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


//// FUNCTION TMRoom_Tick @ 0093f000 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall TMRoom_Tick(uint param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piVar3;
  void *this;
  undefined4 *puVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar5;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  ulonglong uVar6;
  float local_38 [3];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2afe;
  local_c = ExceptionList;
  uVar5 = param_1;
  ExceptionList = &local_c;
  if ((((*(char *)(param_1 + 0x254) != '\0') &&
       (uVar5 = *(uint *)(param_1 + 0xa8), ExceptionList = &local_c, uVar5 != 0)) &&
      (ExceptionList = &local_c, *(int **)(param_1 + 0xa4) != (int *)0x0)) &&
     ((uVar5 = *(uint *)(uVar5 + 0xf0), ExceptionList = &local_c, uVar5 != 0 &&
      (iVar2 = **(int **)(param_1 + 0xa4) * 0x10 + uVar5, ExceptionList = &local_c, iVar2 != 0)))) {
    ExceptionList = &local_c;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 2;
    uVar5 = *(uint *)(param_1 + 0x250);
    *(uint *)(iVar2 + 4) = uVar5;
    param_2 = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(iVar2 + 8) = param_2;
    *(undefined1 *)(param_1 + 0x254) = 0;
  }
  if ((*(int *)(param_1 + 0x1e4) != 0) &&
     (iVar2 = *(int *)(param_1 + 0x1e4) + -1, *(int *)(param_1 + 0x1e4) = iVar2, iVar2 == 0)) {
    if (*(int *)(param_1 + 0x228) != 0) {
      FUN_00944e80(*(int *)(param_1 + 0x228));
    }
    FUN_0093dd80(param_1 + 0xf4);
    uVar5 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (*(char *)(param_1 + 0x1ca) != '\0') {
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d0);
  }
  if ((((*(char *)(param_1 + 0x1cb) == '\0') || (*(char *)(param_1 + 0x1c6) == '\0')) ||
      ((*(char *)(param_1 + 0x1c4) == '\0' && (*(char *)(param_1 + 0x224) == '\0')))) ||
     (*(int *)(param_1 + 0x204) == 0)) {
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1fc) == 0) {
      uVar6 = FUN_00990ae0(uVar5,param_2);
      param_2 = (undefined4)(uVar6 >> 0x20);
      *(int *)(param_1 + 0x1fc) = (int)uVar6;
      uVar5 = extraout_ECX_00;
    }
    if (*(int *)(param_1 + 0x220) == 0) {
      uVar6 = FUN_00990ae0(uVar5,param_2);
      param_2 = (undefined4)(uVar6 >> 0x20);
      uVar5 = *(int *)(param_1 + 0x1fc) + _DAT_00e5f228;
      if (uVar5 < (uint)uVar6) {
        FUN_00538ef0(local_38,(float *)&DAT_0104cce0,0.0);
        piVar3 = operator_new(0xc);
        local_4 = 0;
        if (piVar3 == (int *)0x0) {
          local_4 = 0xffffffff;
          *(undefined4 *)(param_1 + 0x220) = 0;
          uVar5 = extraout_ECX_01;
          param_2 = extraout_EDX_00;
        }
        else {
          this = operator_new(100);
          local_4._0_1_ = 1;
          if (this == (void *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = FUN_005e22c0(this,local_38,(undefined4 *)&DAT_00e54eec);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          piVar3 = FUN_0093be90(piVar3,param_1 + 0x200,param_1 + 0x200,puVar4);
          local_4 = 0xffffffff;
          *(int **)(param_1 + 0x220) = piVar3;
          uVar5 = extraout_ECX_02;
          param_2 = extraout_EDX_01;
        }
      }
    }
    else {
      pwVar1 = *(wchar_t **)(param_1 + 0x200);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar5 = FUN_00ace02d(pwVar1);
      FUN_004036d0(&local_2c,pwVar1,uVar5);
      local_4 = 2;
      FUN_0093c010(*(undefined4 **)(param_1 + 0x220),extraout_EDX_02);
      local_4 = 0xffffffff;
      uVar5 = extraout_ECX_03;
      param_2 = extraout_EDX_03;
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x220);
  if ((iVar2 != 0) &&
     (((*(int *)(param_1 + 0x204) == 0 || (*(uint *)(iVar2 + 4) < DAT_01050604)) ||
      (uVar6 = FUN_00990ae0(uVar5,param_2),
      (uint)(*(int *)(iVar2 + 8) + _DAT_00e5f22c) < (uint)uVar6)))) {
    piVar3 = *(int **)(param_1 + 0x220);
    if (piVar3 != (int *)0x0) {
      FUN_0093bf90(piVar3);
                    /* WARNING: Subroutine does not return */
      _free(piVar3);
    }
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  if (*(int *)(param_1 + 0x228) != 0) {
    uVar5 = 0;
    while ((iVar2 = *(int *)(param_1 + 0x90), iVar2 != 0 &&
           (uVar5 < (uint)(*(int *)(param_1 + 0x94) - iVar2 >> 2)))) {
      iVar2 = FUN_00944e20(*(void **)(param_1 + 0x228),*(int *)(*(int *)(iVar2 + uVar5 * 4) + 0x1b8)
                          );
      if ((*(char *)(*(int *)(*(int *)(param_1 + 0x90) + uVar5 * 4) + 0x1ed) == '\0') ||
         (iVar2 == 0)) {
        FUN_00931640();
        uVar5 = uVar5 + 1;
      }
      else {
        FUN_00931640();
        uVar5 = uVar5 + 1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0093f320 @ 0093f320 ////

void __thiscall FUN_0093f320(void *this,uint param_1)

{
  FUN_0093e840(this,param_1,&PTR_FUN_00d23630,0,(int *)0x0);
  return;
}


//// FUNCTION FUN_0093f360 @ 0093f360 ////

void __thiscall FUN_0093f360(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0093dbc0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0093e920(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0093f3f0 @ 0093f3f0 ////

void __fastcall FUN_0093f3f0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  puStack_8 = &LAB_00cf2ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x54;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x48));
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
  uVar3 = FUN_0098b490("PFloorPlan");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x48));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x55;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("BUseIndividualScenes");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x165),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x56;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("SoftObjectLimit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x174),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x57;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("MediumObjectLimit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x178),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x58;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("HardObjectLimit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x17c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x59;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
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
  uVar3 = FUN_0098b490("IconName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x120));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("RoomName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x140));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
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
  uVar3 = FUN_0098b490("DesireName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0xa0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
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
  uVar3 = FUN_0098b490("TheActivity");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0xc0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
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
  uVar3 = FUN_0098b490("LastActivity");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x100));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
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
  uVar3 = FUN_0098b490("MyIndex");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x184),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x78));
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
  uVar3 = FUN_0098b490("PParentAsset");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x78));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x60;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xc;
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
  uVar3 = FUN_0098b490("BIsEnabled");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x162),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x61;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xd;
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
  uVar3 = FUN_0098b490("BSnapsToIcon");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x164),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x62;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
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
  uVar3 = FUN_0098b490("SL_CurNum_Display");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x1ec),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 99;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
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
  uVar3 = FUN_0098b490("SL_MaxNum_Display");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x1e8),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 100;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x10;
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
  uVar3 = FUN_0098b490("SL_Display_Numbers");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x1f0),1);
  }
  uVar3 = FUN_0098b490("ObjectsIn");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x94) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = (*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x94)) / 0x18;
      }
      FUN_0098a3a0(&local_30);
      local_38 = 0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0x94) != 0 &&
          (local_34 < (uint)((*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x94)) / 0x18)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
          pcVar2 = (char *)&DAT_010581d8;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar2 = pcVar2 + 4;
          }
          local_2c = local_20;
          *pcVar2 = *pcVar5;
          DAT_010581d4 = 0x65;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 0x11;
          iVar4 = FUN_00ace3df((int *)(*(int *)(param_1 + 0x94) + local_38));
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
        uVar3 = FUN_0098b490("ObjectsIn[x]");
        if ((char)uVar3 != '\0') {
          FUN_00990970((int *)(*(int *)(param_1 + 0x94) + local_38));
        }
        local_38 = local_38 + 0x18;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_0093dd80(param_1 + 0x90);
      SLVAR_LoadUint(&local_34);
      FUN_0093f320((void *)(param_1 + 0x90),local_34);
      local_30 = 0;
      if (local_34 != 0) {
        local_38 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoom.cpp";
            pcVar2 = (char *)&DAT_010581d8;
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar2 = pcVar2 + 4;
            }
            local_2c = local_20;
            *pcVar2 = *pcVar5;
            DAT_010581d4 = 0x65;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 0x12;
            iVar4 = FUN_00ace3df((int *)(*(int *)(param_1 + 0x94) + local_38));
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
          uVar3 = FUN_0098b490("ObjectsIn[x]");
          if ((char)uVar3 != '\0') {
            FUN_00990970((int *)(*(int *)(param_1 + 0x94) + local_38));
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 0x18;
        } while (local_30 < local_34);
      }
    }
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION RoomFactory_CreateInteriorObjectForName @ 009405f0 ////

/* WARNING: Removing unreachable block (ram,0x0094283b) */
/* WARNING: Removing unreachable block (ram,0x00942849) */

undefined4 *
RoomFactory_CreateInteriorObjectForName(void *param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  char *pcVar8;
  byte bVar9;
  byte bVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  byte **ppbVar14;
  byte **ppbVar15;
  char **ppcVar16;
  undefined4 *local_94;
  byte *local_90;
  undefined4 local_8c;
  uint local_88;
  byte local_84 [20];
  char *local_70;
  undefined4 local_6c;
  uint local_68;
  char local_64 [20];
  byte *local_50 [2];
  uint local_48;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2f9a;
  local_c = ExceptionList;
  local_94 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  iVar2 = MeshRoomList_GetRoomByIndex(param_1,param_2);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar8 = (char *)(iVar2 + 4);
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,(char *)(iVar2 + 4),(int)pcVar8 - (iVar2 + 5));
  local_4 = 0;
  FUN_00430770(&local_2c,local_50,param_4 + 1,0xffffffff);
  local_90 = local_84;
  local_4._0_1_ = 1;
  local_84[0] = 0;
  local_8c = 0;
  local_88 = 0x14;
  _strncpy((char *)local_90,"postprod",8);
  local_8c = 8;
  local_90[8] = 0;
  pbVar3 = (byte *)*param_3;
  pbVar11 = local_90;
  do {
    bVar10 = *pbVar3;
    bVar12 = bVar10 < *pbVar11;
    if (bVar10 != *pbVar11) {
LAB_0094070c:
      iVar2 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00940711;
    }
    if (bVar10 == 0) break;
    bVar10 = pbVar3[1];
    bVar12 = bVar10 < pbVar11[1];
    if (bVar10 != pbVar11[1]) goto LAB_0094070c;
    pbVar3 = pbVar3 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar10 != 0);
  iVar2 = 0;
LAB_00940711:
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if (iVar2 == 0) {
    local_90 = local_84;
    local_84[0] = 0;
    local_8c = 0;
    local_88 = 0x14;
    _strncpy((char *)local_90,"postprod",8);
    local_8c = 8;
    local_90[8] = 0;
    pbVar3 = local_50[0];
    pbVar11 = local_90;
    do {
      bVar10 = *pbVar3;
      bVar12 = bVar10 < *pbVar11;
      if (bVar10 != *pbVar11) {
LAB_009407a4:
        iVar2 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_009407a9;
      }
      if (bVar10 == 0) break;
      bVar10 = pbVar3[1];
      bVar12 = bVar10 < pbVar11[1];
      if (bVar10 != pbVar11[1]) goto LAB_009407a4;
      pbVar3 = pbVar3 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar10 != 0);
    iVar2 = 0;
LAB_009407a9:
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if (iVar2 == 0) {
      puVar4 = operator_new(0x25c);
      local_4._0_1_ = 2;
      if (puVar4 == (undefined4 *)0x0) {
        local_94 = (undefined4 *)0x0;
      }
      else {
        local_94 = CPostProdRoom_Constructor(puVar4);
      }
      local_4._0_1_ = 1;
      *(undefined1 *)(local_94 + 0x96) = 0;
    }
  }
  local_90 = local_84;
  local_84[0] = 0;
  local_8c = 0;
  local_88 = 0x14;
  _strncpy((char *)local_90,"prod",4);
  local_8c = 4;
  local_90[4] = 0;
  pbVar3 = (byte *)*param_3;
  pbVar11 = local_90;
  do {
    bVar10 = *pbVar3;
    bVar12 = bVar10 < *pbVar11;
    if (bVar10 != *pbVar11) {
LAB_0094086d:
      iVar2 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_00940872;
    }
    if (bVar10 == 0) break;
    bVar10 = pbVar3[1];
    bVar12 = bVar10 < pbVar11[1];
    if (bVar10 != pbVar11[1]) goto LAB_0094086d;
    pbVar3 = pbVar3 + 2;
    pbVar11 = pbVar11 + 2;
  } while (bVar10 != 0);
  iVar2 = 0;
LAB_00940872:
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  local_90 = local_84;
  local_84[0] = 0;
  if (iVar2 == 0) {
    local_8c = 0;
    local_88 = 0x14;
    _strncpy((char *)local_90,"archive",7);
    local_8c = 7;
    local_90[7] = 0;
    pbVar3 = local_50[0];
    pbVar11 = local_90;
    do {
      bVar10 = *pbVar3;
      bVar12 = bVar10 < *pbVar11;
      if (bVar10 != *pbVar11) {
LAB_00940904:
        iVar2 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00940909;
      }
      if (bVar10 == 0) break;
      bVar10 = pbVar3[1];
      bVar12 = bVar10 < pbVar11[1];
      if (bVar10 != pbVar11[1]) goto LAB_00940904;
      pbVar3 = pbVar3 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar10 != 0);
    iVar2 = 0;
LAB_00940909:
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if (iVar2 == 0) {
      puVar4 = operator_new(0x278);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
      local_94 = CArchiveRoom_Constructor(puVar4);
      goto LAB_0094311f;
    }
    local_70 = local_64;
    local_64[0] = '\0';
    local_6c = 0;
    local_68 = 0x14;
    _strncpy(local_70,"trade",5);
    ppcVar16 = &local_70;
    ppbVar14 = local_50;
    local_6c = 5;
    local_70[5] = '\0';
    uVar5 = FUN_00401ec0(ppbVar14,ppcVar16);
    if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
    if ((byte)uVar5 == 0) {
      local_90 = local_84;
      local_8c = 0;
      local_88 = 0x14;
      local_84[0] = (byte)uVar5;
      _strncpy((char *)local_90,"postproduction",0xe);
      ppbVar14 = &local_90;
      ppbVar15 = local_50;
      local_8c = 0xe;
      local_90[0xe] = 0;
      bVar12 = false;
      uVar5 = FUN_00401ec0(ppbVar15,ppbVar14);
      if ((char)uVar5 == '\0') {
        local_70 = local_64;
        local_6c = 0;
        local_68 = 0x14;
        local_64[0] = (char)uVar5;
        _strncpy(local_70,"postprod",8);
        ppcVar16 = &local_70;
        ppbVar14 = local_50;
        local_6c = 8;
        local_70[8] = '\0';
        bVar12 = true;
        uVar5 = FUN_00401ec0(ppbVar14,ppcVar16);
        bVar13 = false;
        if ((char)uVar5 != '\0') goto LAB_00940a5d;
      }
      else {
LAB_00940a5d:
        bVar13 = true;
      }
      if ((bVar12) && (0x14 < local_68)) {
                    /* WARNING: Subroutine does not return */
        _free(local_70);
      }
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if (bVar13) {
        puVar4 = operator_new(600);
        local_4 = CONCAT31(local_4._1_3_,4);
        if (puVar4 != (undefined4 *)0x0) {
          local_94 = MovieViewerRoom_Constructor(puVar4);
          goto LAB_0094311f;
        }
        goto LAB_0094311d;
      }
      local_90 = local_84;
      local_84[0] = 0;
      local_8c = 0;
      local_88 = 0x14;
      _strncpy((char *)local_90,"release",7);
      ppbVar14 = &local_90;
      ppbVar15 = local_50;
      local_8c = 7;
      local_90[7] = 0;
      uVar5 = FUN_00401ec0(ppbVar15,ppbVar14);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"information",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 == '\0') {
          FUN_00401de0(&local_90,"review",0xffffffff);
          uVar5 = FUN_00401ec0(local_50,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 == '\0') {
            FUN_00401de0(&local_90,"finance",0xffffffff);
            uVar5 = FUN_00401ec0(local_50,&local_90);
            if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
              _free(local_90);
            }
            if ((char)uVar5 == '\0') goto LAB_0094312b;
            puVar4 = operator_new(600);
            local_4 = CONCAT31(local_4._1_3_,8);
            if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
            local_94 = CFinanceRoom_Constructor(puVar4);
          }
          else {
            puVar4 = operator_new(0x27c);
            local_4 = CONCAT31(local_4._1_3_,7);
            if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
            local_94 = CReviewsRoom_Constructor(puVar4);
          }
        }
        else {
          puVar4 = operator_new(0x274);
          local_4 = CONCAT31(local_4._1_3_,6);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
          local_94 = CInformationRoom_Constructor(puVar4);
        }
      }
      else {
        puVar4 = operator_new(0x274);
        local_4 = CONCAT31(local_4._1_3_,5);
        if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
        local_94 = CReleaseRoom_Constructor(puVar4);
      }
      goto LAB_0094311f;
    }
    goto LAB_0094312b;
  }
  local_8c = 0;
  local_88 = 0x14;
  _strncpy((char *)local_90,"cf",2);
  ppbVar14 = &local_90;
  local_8c = 2;
  puVar4 = param_3;
  local_90[2] = 0;
  uVar5 = FUN_00401ec0(puVar4,ppbVar14);
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if ((char)uVar5 != '\0') {
    local_90 = local_84;
    local_84[0] = 0;
    local_8c = 0;
    local_88 = 0x14;
    _strncpy((char *)local_90,"hire",4);
    ppbVar14 = &local_90;
    ppbVar15 = local_50;
    local_8c = 4;
    local_90[4] = 0;
    uVar5 = FUN_00401ec0(ppbVar15,ppbVar14);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if ((char)uVar5 == '\0') {
      local_90 = local_84;
      local_84[0] = 0;
      local_8c = 0;
      local_88 = 0x14;
      _strncpy((char *)local_90,"fire",4);
      ppbVar14 = &local_90;
      ppbVar15 = local_50;
      local_8c = 4;
      local_90[4] = 0;
      uVar5 = FUN_00401ec0(ppbVar15,ppbVar14);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 == '\0') goto LAB_0094312b;
      puVar4 = operator_new(0x278);
      local_4 = CONCAT31(local_4._1_3_,10);
      if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
      local_94 = RoomObject_CreateCancelProjectAction(puVar4);
    }
    else {
      pvVar6 = operator_new(0x25c);
      local_4 = CONCAT31(local_4._1_3_,9);
      if (pvVar6 == (void *)0x0) goto LAB_0094311d;
      local_94 = RoomObject_CreateHireAction(pvVar6,8);
    }
    goto LAB_0094311f;
  }
  local_70 = local_64;
  local_64[0] = '\0';
  local_6c = 0;
  local_68 = 0x14;
  _strncpy(local_70,"cosmeticsurgery",0xf);
  ppcVar16 = &local_70;
  local_6c = 0xf;
  puVar4 = param_3;
  local_70[0xf] = '\0';
  bVar10 = 4;
  uVar5 = FUN_00401ec0(puVar4,ppcVar16);
  if ((char)uVar5 == '\0') {
    local_90 = local_84;
    local_84[0] = 0;
    local_8c = 0;
    local_88 = 0x14;
    _strncpy((char *)local_90,"csu",3);
    ppbVar14 = &local_90;
    local_8c = 3;
    puVar4 = param_3;
    local_90[3] = 0;
    bVar10 = 0xc;
    uVar5 = FUN_00401ec0(puVar4,ppbVar14);
    bVar12 = false;
    if ((char)uVar5 != '\0') goto LAB_00940eb6;
  }
  else {
LAB_00940eb6:
    bVar12 = true;
  }
  if (((bVar10 & 8) != 0) && (bVar10 = bVar10 & 0xf7, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if (((bVar10 & 4) != 0) && (bVar10 = bVar10 & 0xfb, 0x14 < local_68)) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  if (bVar12) {
    local_70 = local_64;
    local_64[0] = '\0';
    local_6c = 0;
    local_68 = 0x14;
    _strncpy(local_70,"nip_tuck",8);
    ppcVar16 = &local_70;
    ppbVar14 = local_50;
    local_6c = 8;
    local_70[8] = '\0';
    bVar9 = bVar10 | 0x10;
    uVar5 = FUN_00401ec0(ppbVar14,ppcVar16);
    if ((byte)uVar5 == 0) {
      local_90 = local_84;
      local_8c = 0;
      local_88 = 0x14;
      local_84[0] = (byte)uVar5;
      _strncpy((char *)local_90,"niptuck",7);
      ppbVar14 = &local_90;
      ppbVar15 = local_50;
      local_8c = 7;
      local_90[7] = 0;
      bVar9 = bVar10 | 0x30;
      uVar5 = FUN_00401ec0(ppbVar15,ppbVar14);
      bVar12 = false;
      if ((char)uVar5 != '\0') goto LAB_00940fa1;
    }
    else {
LAB_00940fa1:
      bVar12 = true;
    }
    if (((bVar9 & 0x20) != 0) && (bVar9 = bVar9 & 0xdf, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if (((bVar9 & 0x10) != 0) && (bVar9 = bVar9 & 0xef, 0x14 < local_68)) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
    if (bVar12) {
      pvVar6 = operator_new(0x288);
      local_4 = CONCAT31(local_4._1_3_,0xb);
      if (pvVar6 == (void *)0x0) {
LAB_0094311d:
        local_94 = (undefined4 *)0x0;
      }
      else {
        local_94 = CHealthRoom_Constructor(pvVar6,0);
      }
LAB_0094311f:
      local_4._0_1_ = 1;
    }
    else {
      local_90 = local_84;
      local_84[0] = 0;
      local_8c = 0;
      local_88 = 0x14;
      _strncpy((char *)local_90,"implants",8);
      ppbVar14 = &local_90;
      ppbVar15 = local_50;
      local_8c = 8;
      local_90[8] = 0;
      uVar5 = FUN_00401ec0(ppbVar15,ppbVar14);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        pvVar6 = operator_new(0x288);
        local_4 = CONCAT31(local_4._1_3_,0xc);
        if (pvVar6 == (void *)0x0) goto LAB_0094311d;
        local_94 = CHealthRoom_Constructor(pvVar6,2);
        goto LAB_0094311f;
      }
      FUN_00401de0(&local_70,"liposuctio",0xffffffff);
      bVar10 = bVar9 | 0x40;
      uVar5 = FUN_00401ec0(local_50,&local_70);
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"lipo",0xffffffff);
        bVar10 = bVar9 | 0xc0;
        uVar5 = FUN_00401ec0(local_50,&local_90);
        bVar12 = false;
        if ((char)uVar5 != '\0') goto LAB_00941101;
      }
      else {
LAB_00941101:
        bVar12 = true;
      }
      if (((char)bVar10 < '\0') && (bVar10 = bVar10 & 0x7f, 0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if (((bVar10 & 0x40) != 0) && (0x14 < local_68)) {
                    /* WARNING: Subroutine does not return */
        _free(local_70);
      }
      if (bVar12) {
        pvVar6 = operator_new(0x288);
        local_4 = CONCAT31(local_4._1_3_,0xd);
        if (pvVar6 == (void *)0x0) goto LAB_0094311d;
        local_94 = CHealthRoom_Constructor(pvVar6,1);
        goto LAB_0094311f;
      }
    }
LAB_0094312b:
    if (local_94 != (undefined4 *)0x0) goto LAB_00943166;
  }
  else {
    local_90 = local_84;
    local_84[0] = 0;
    local_8c = 0;
    local_88 = 0x14;
    _strncpy((char *)local_90,"staff",5);
    ppbVar14 = &local_90;
    local_8c = 5;
    puVar4 = param_3;
    local_90[5] = 0;
    uVar5 = FUN_00401ec0(puVar4,ppbVar14);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    local_90 = local_84;
    local_88 = 0x14;
    local_8c = 0;
    local_84[0] = 0;
    if ((char)uVar5 != '\0') {
      _strncpy((char *)local_90,"hire_builder",0xc);
      ppbVar14 = &local_90;
      ppbVar15 = local_50;
      local_8c = 0xc;
      local_90[0xc] = 0;
      uVar5 = FUN_00401ec0(ppbVar15,ppbVar14);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        pvVar6 = operator_new(0x25c);
        local_4._0_1_ = 0xe;
        if (pvVar6 == (void *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = RoomObject_CreateHireAction(pvVar6,5);
        }
        FUN_00401de0(&local_90,"ai_room_staff_hire01",0xffffffff);
        local_4._0_1_ = 0xf;
        RoomObject_SetAIInteractionKey(local_94,&local_90);
        local_4._0_1_ = 1;
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
      }
      local_90 = local_84;
      puVar4 = (undefined4 *)0x0;
      local_84[0] = 0;
      local_8c = 0;
      local_88 = 0x14;
      _strncpy((char *)local_90,"hire_janitor",0xc);
      ppbVar14 = &local_90;
      ppbVar15 = local_50;
      local_8c = 0xc;
      local_90[0xc] = 0;
      uVar5 = FUN_00401ec0(ppbVar15,ppbVar14);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"fire",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(0x278);
          local_4._0_1_ = 0x12;
          if (puVar4 == (undefined4 *)0x0) {
            local_94 = (undefined4 *)0x0;
          }
          else {
            local_94 = RoomObject_CreateCancelProjectAction(puVar4);
          }
          FUN_00401de0(&local_90,"ai_room_staff_fire01",0xffffffff);
          local_4._0_1_ = 0x13;
          RoomObject_SetAIInteractionKey(local_94,&local_90);
          local_4._0_1_ = 1;
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
        }
        goto LAB_0094312b;
      }
      pvVar6 = operator_new(0x25c);
      local_4._0_1_ = 0x10;
      if (pvVar6 != (void *)0x0) {
        puVar4 = RoomObject_CreateHireAction(pvVar6,6);
      }
      FUN_00401de0(&local_90,"ai_room_staff_hire02",0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,0x11);
      RoomObject_SetAIInteractionKey(puVar4,&local_90);
      local_94 = puVar4;
LAB_00942380:
      local_4._0_1_ = 1;
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      goto LAB_0094312b;
    }
    _strncpy((char *)local_90,"detox",5);
    ppbVar14 = &local_90;
    local_8c = 5;
    puVar4 = param_3;
    local_90[5] = 0;
    uVar5 = FUN_00401ec0(puVar4,ppbVar14);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if ((char)uVar5 != '\0') {
      FUN_00401de0(&local_90,"detox",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 == '\0') goto LAB_0094312b;
      puVar4 = operator_new(0x288);
      local_4 = CONCAT31(local_4._1_3_,0x14);
      if (puVar4 != (undefined4 *)0x0) {
        local_94 = CDetoxRoom_Constructor(puVar4);
        goto LAB_0094311f;
      }
      goto LAB_0094311d;
    }
    FUN_00401de0(&local_90,"pr",0xffffffff);
    uVar5 = FUN_00401ec0(param_3,&local_90);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if ((char)uVar5 != '\0') {
      FUN_00401de0(&local_90,"pr",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        puVar4 = operator_new(0x29c);
        local_4 = CONCAT31(local_4._1_3_,0x15);
        if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
        local_94 = CPRRoom_Constructor(puVar4);
        goto LAB_0094311f;
      }
      FUN_00401de0(&local_90,"remove",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') goto LAB_0094312b;
      FUN_00401de0(&local_90,"review",0xffffffff);
      bVar12 = local_88 < 0x14;
      bVar13 = local_88 == 0x14;
LAB_0094251c:
      if (!bVar12 && !bVar13) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      goto LAB_0094312b;
    }
    FUN_00401de0(&local_90,"publicity",0xffffffff);
    uVar5 = FUN_00401ec0(param_3,&local_90);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if ((char)uVar5 != '\0') {
      FUN_00401de0(&local_90,"minimal",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        puVar4 = operator_new(0x25c);
        local_4._0_1_ = 0x16;
        if (puVar4 == (undefined4 *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = CMarketingRoom_Constructor(puVar4);
        }
        local_4._0_1_ = 1;
        FUN_009282e0(local_94,1);
        goto LAB_0094312b;
      }
      FUN_00401de0(&local_90,"small",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"average",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 == '\0') {
          FUN_00401de0(&local_90,"large",0xffffffff);
          uVar5 = FUN_00401ec0(local_50,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 == '\0') {
            FUN_00401de0(&local_90,"huge",0xffffffff);
            uVar5 = FUN_00401ec0(local_50,&local_90);
            if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
              _free(local_90);
            }
            if ((char)uVar5 == '\0') {
              FUN_00401de0(&local_90,"pr",0xffffffff);
              uVar5 = FUN_00401ec0(local_50,&local_90);
              if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
                _free(local_90);
              }
              if ((char)uVar5 != '\0') {
                puVar4 = operator_new(0x29c);
                local_4 = CONCAT31(local_4._1_3_,0x1b);
                if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
                local_94 = CPRRoom_Constructor(puVar4);
                goto LAB_0094311f;
              }
            }
            else {
              puVar4 = operator_new(0x25c);
              local_4._0_1_ = 0x1a;
              if (puVar4 == (undefined4 *)0x0) {
                local_94 = (undefined4 *)0x0;
              }
              else {
                local_94 = CMarketingRoom_Constructor(puVar4);
              }
              local_4._0_1_ = 1;
              FUN_009282e0(local_94,5);
            }
            goto LAB_0094312b;
          }
          puVar4 = operator_new(0x25c);
          local_4 = CONCAT31(local_4._1_3_,0x19);
          if (puVar4 == (undefined4 *)0x0) {
LAB_009427aa:
            local_94 = (undefined4 *)0x0;
          }
          else {
            local_94 = CMarketingRoom_Constructor(puVar4);
          }
LAB_009427ac:
          local_4._0_1_ = 1;
          FUN_009282e0(local_94,4);
        }
        else {
          puVar4 = operator_new(0x25c);
          local_4 = CONCAT31(local_4._1_3_,0x18);
          if (puVar4 == (undefined4 *)0x0) {
LAB_0094272b:
            local_94 = (undefined4 *)0x0;
          }
          else {
            local_94 = CMarketingRoom_Constructor(puVar4);
          }
LAB_0094272d:
          local_4._0_1_ = 1;
          FUN_009282e0(local_94,3);
        }
      }
      else {
        puVar4 = operator_new(0x25c);
        local_4 = CONCAT31(local_4._1_3_,0x17);
        if (puVar4 == (undefined4 *)0x0) {
LAB_009426ac:
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = CMarketingRoom_Constructor(puVar4);
        }
LAB_009426ae:
        local_4._0_1_ = 1;
        FUN_009282e0(local_94,2);
      }
      goto LAB_0094312b;
    }
    FUN_00401de0(&local_90,"so",0xffffffff);
    uVar5 = FUN_00401ec0(param_3,&local_90);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if ((char)uVar5 == '\0') {
      FUN_00401de0(&local_70,"preprod",0xffffffff);
      bVar12 = false;
      uVar5 = FUN_00401ec0(param_3,&local_70);
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"pp",0xffffffff);
        bVar12 = true;
        uVar5 = FUN_00401ec0(param_3,&local_90);
        bVar13 = false;
        if ((char)uVar5 != '\0') goto LAB_00941ded;
      }
      else {
LAB_00941ded:
        bVar13 = true;
      }
      if ((bVar12) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_70);
      }
      bVar12 = false;
      if (bVar13) {
        FUN_00401de0(&local_90,"extras",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(600);
          local_4 = CONCAT31(local_4._1_3_,0x29);
          if (puVar4 != (undefined4 *)0x0) {
            local_94 = CCastRoom_Constructor(puVar4);
            goto LAB_0094311f;
          }
          goto LAB_0094311d;
        }
        FUN_00401de0(&local_90,"director",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(600);
          local_4 = CONCAT31(local_4._1_3_,0x2a);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
          local_94 = CDirectorRoom_Constructor(puVar4);
          goto LAB_0094311f;
        }
        FUN_00401de0(&local_90,"actors",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(600);
          local_4 = CONCAT31(local_4._1_3_,0x2b);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
          local_94 = CLeadsRoom_Constructor(puVar4);
          goto LAB_0094311f;
        }
        FUN_00401de0(&local_90,"tech",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') goto LAB_0094312b;
        FUN_00401de0(&local_90,"shootit",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(600);
          local_4 = CONCAT31(local_4._1_3_,0x2c);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
          local_94 = CAdvanceRoom_Constructor(puVar4);
          goto LAB_0094311f;
        }
        FUN_00401de0(&local_90,"activate",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(600);
          local_4 = CONCAT31(local_4._1_3_,0x2d);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
          local_94 = CActivateRoom_Constructor(puVar4);
          goto LAB_0094311f;
        }
        FUN_00401de0(&local_70,"remove",0xffffffff);
        bVar12 = false;
        uVar5 = FUN_00401ec0(local_50,&local_70);
        if ((char)uVar5 == '\0') {
          FUN_00401de0(&local_90,"canit",0xffffffff);
          bVar12 = true;
          uVar5 = FUN_00401ec0(local_50,&local_90);
          bVar13 = false;
          if ((char)uVar5 != '\0') goto LAB_00942112;
        }
        else {
LAB_00942112:
          bVar13 = true;
        }
        if ((bVar12) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
          _free(local_70);
        }
        if (bVar13) {
          puVar4 = operator_new(0x278);
          local_4 = CONCAT31(local_4._1_3_,0x2e);
          if (puVar4 != (undefined4 *)0x0) {
            local_94 = RoomObject_CreateCancelProjectAction(puVar4);
            goto LAB_0094311f;
          }
          goto LAB_0094311d;
        }
        FUN_00401de0(&local_90,"hall",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 == '\0') {
          FUN_00401de0(&local_90,"crew",0xffffffff);
          uVar5 = FUN_00401ec0(local_50,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 != '\0') {
            puVar4 = operator_new(600);
            local_4 = CONCAT31(local_4._1_3_,0x2f);
            if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
            local_94 = CCrewRoom_Constructor(puVar4);
            goto LAB_0094311f;
          }
        }
        goto LAB_0094312b;
      }
      FUN_00401de0(&local_70,"stageschool",0xffffffff);
      uVar5 = FUN_00401ec0(param_3,&local_70);
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"ss",0xffffffff);
        bVar12 = true;
        uVar5 = FUN_00401ec0(param_3,&local_90);
        bVar13 = false;
        if ((char)uVar5 != '\0') goto LAB_00942286;
      }
      else {
LAB_00942286:
        bVar13 = true;
      }
      if ((bVar12) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_70);
      }
      if (bVar13) {
        FUN_00401de0(&local_90,"actors",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(0x288);
          local_4._0_1_ = 0x30;
          if (puVar4 == (undefined4 *)0x0) {
            local_94 = (undefined4 *)0x0;
          }
          else {
            local_94 = TMRoomCB_Constructor(puVar4);
          }
          local_4._0_1_ = 1;
          FUN_00943c80(local_94,1);
          FUN_00401de0(&local_90,"ai_room_ss_actors",0xffffffff);
          local_4 = CONCAT31(local_4._1_3_,0x31);
          RoomObject_SetAIInteractionKey(local_94,&local_90);
          goto LAB_00942380;
        }
        FUN_00401de0(&local_90,"directors",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(0x288);
          local_4._0_1_ = 0x32;
          if (puVar4 == (undefined4 *)0x0) {
            local_94 = (undefined4 *)0x0;
          }
          else {
            local_94 = TMRoomCB_Constructor(puVar4);
          }
          local_4._0_1_ = 1;
          FUN_00943c80(local_94,2);
          FUN_00401de0(&local_90,"ai_room_ss_directors",0xffffffff);
          local_4._0_1_ = 0x33;
          RoomObject_SetAIInteractionKey(local_94,&local_90);
          local_4._0_1_ = 1;
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          goto LAB_0094312b;
        }
        FUN_00401de0(&local_90,"extras",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 == '\0') {
          FUN_00401de0(&local_90,"starmaker",0xffffffff);
          uVar5 = FUN_00401ec0(local_50,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 != '\0') {
            puVar4 = operator_new(600);
            local_4 = CONCAT31(local_4._1_3_,0x36);
            if (puVar4 != (undefined4 *)0x0) {
              local_94 = CStarMakerRoom_Constructor(puVar4);
              goto LAB_0094311f;
            }
            goto LAB_0094311d;
          }
          FUN_00401de0(&local_90,"fire",0xffffffff);
          uVar5 = FUN_00401ec0(local_50,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 == '\0') goto LAB_0094312b;
          puVar4 = operator_new(0x278);
          local_4 = CONCAT31(local_4._1_3_,0x37);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
          local_94 = RoomObject_CreateCancelProjectAction(puVar4);
          goto LAB_0094311f;
        }
        puVar4 = operator_new(0x288);
        local_4._0_1_ = 0x34;
        if (puVar4 == (undefined4 *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = TMRoomCB_Constructor(puVar4);
        }
        local_4._0_1_ = 1;
        FUN_00943c80(local_94,3);
        FUN_00401de0(&local_90,"ai_room_ss_extras",0xffffffff);
        local_4._0_1_ = 0x35;
LAB_00942501:
        RoomObject_SetAIInteractionKey(local_94,&local_90);
        local_4._0_1_ = 1;
        bVar12 = local_88 < 0x14;
        bVar13 = local_88 == 0x14;
        goto LAB_0094251c;
      }
      FUN_00401de0(&local_90,"releaseoffice",0xffffffff);
      uVar5 = FUN_00401ec0(param_3,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        FUN_00401de0(&local_90,"low",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(0x25c);
          local_4 = CONCAT31(local_4._1_3_,0x38);
          if (puVar4 == (undefined4 *)0x0) goto LAB_009426ac;
          local_94 = CMarketingRoom_Constructor(puVar4);
          goto LAB_009426ae;
        }
        FUN_00401de0(&local_90,"med",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(0x25c);
          local_4 = CONCAT31(local_4._1_3_,0x39);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0094272b;
          local_94 = CMarketingRoom_Constructor(puVar4);
          goto LAB_0094272d;
        }
        FUN_00401de0(&local_90,"high",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(0x25c);
          local_4 = CONCAT31(local_4._1_3_,0x3a);
          if (puVar4 == (undefined4 *)0x0) goto LAB_009427aa;
          local_94 = CMarketingRoom_Constructor(puVar4);
          goto LAB_009427ac;
        }
        FUN_00401de0(&local_90,"store",0xffffffff);
        bVar12 = local_88 < 0x14;
        bVar13 = local_88 == 0x14;
        goto LAB_0094251c;
      }
      FUN_00401de0(&local_70,"wardrobe",0xffffffff);
      uVar5 = FUN_00401ec0(param_3,&local_70);
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"ward",0xffffffff);
        uVar5 = FUN_00401ec0(param_3,&local_90);
        bVar12 = false;
        if ((char)uVar5 != '\0') goto LAB_00942832;
      }
      else {
LAB_00942832:
        bVar12 = true;
      }
      if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_70);
      }
      if (bVar12) {
        FUN_00401de0(&local_90,"custom",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(600);
          local_4 = CONCAT31(local_4._1_3_,0x3b);
          if (puVar4 != (undefined4 *)0x0) {
            local_94 = CCostumeRoom_Constructor(puVar4);
            goto LAB_0094311f;
          }
          goto LAB_0094311d;
        }
        FUN_00401de0(&local_90,"auto",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          puVar4 = operator_new(0x2f4);
          local_4._0_1_ = 0x3c;
          if (puVar4 == (undefined4 *)0x0) {
            local_94 = (undefined4 *)0x0;
          }
          else {
            local_94 = CAutoWardrobeRoom_Constructor(puVar4);
          }
          local_4._0_1_ = 1;
          FUN_00401de0(&local_90,"wardrobe",0xffffffff);
          uVar5 = FUN_00401ec0(param_3,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 != '\0') {
            FUN_00401de0(&local_90,"ai_room_ward_auto",0xffffffff);
            local_4._0_1_ = 0x3d;
            RoomObject_SetAIInteractionKey(local_94,&local_90);
            local_4._0_1_ = 1;
            if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
              _free(local_90);
            }
          }
        }
        goto LAB_0094312b;
      }
      FUN_00401de0(&local_90,"sell",0xffffffff);
      uVar5 = FUN_00401ec0(param_3,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        FUN_00401de0(&local_90,"sell",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 == '\0') goto LAB_0094312b;
        puVar4 = operator_new(0x278);
        local_4 = CONCAT31(local_4._1_3_,0x3e);
        if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
        local_94 = CSellRoom_Constructor(puVar4);
        goto LAB_0094311f;
      }
      FUN_00401de0(&local_70,"customscript",0xffffffff);
      bVar12 = false;
      uVar5 = FUN_00401ec0(param_3,&local_70);
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"cso",0xffffffff);
        bVar12 = true;
        uVar5 = FUN_00401ec0(param_3,&local_90);
        bVar13 = false;
        if ((char)uVar5 != '\0') goto LAB_00942ae4;
      }
      else {
LAB_00942ae4:
        bVar13 = true;
      }
      if ((bVar12) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_70);
      }
      if (!bVar13) {
        FUN_00401de0(&local_90,"trailer",0xffffffff);
        uVar5 = FUN_00401ec0(param_3,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 != '\0') {
          FUN_00401de0(&local_90,"assign",0xffffffff);
          uVar5 = FUN_00401ec0(local_50,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 == '\0') goto LAB_0094312b;
          puVar4 = operator_new(0x274);
          local_4 = CONCAT31(local_4._1_3_,0x41);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
          local_94 = CTrailerStarRoom_Constructor(puVar4);
          goto LAB_0094311f;
        }
        FUN_00401de0(&local_70,"research",0xffffffff);
        bVar12 = false;
        uVar5 = FUN_00401ec0(param_3,&local_70);
        if ((char)uVar5 == '\0') {
          FUN_00401de0(&local_90,"res",0xffffffff);
          bVar12 = true;
          uVar5 = FUN_00401ec0(param_3,&local_90);
          bVar13 = false;
          if ((char)uVar5 != '\0') goto LAB_00942d0d;
        }
        else {
LAB_00942d0d:
          bVar13 = true;
        }
        if ((bVar12) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
          _free(local_70);
        }
        if (!bVar13) {
          FUN_00401de0(&local_90,"set",0xffffffff);
          uVar5 = FUN_00401ec0(local_50,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 == '\0') {
            FUN_00401de0(&local_90,"stuntschool",0xffffffff);
            uVar5 = FUN_00401ec0(param_3,&local_90);
            if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
              _free(local_90);
            }
            if ((char)uVar5 == '\0') {
              FUN_00401de0(&local_90,"hosp",0xffffffff);
              uVar5 = FUN_00401ec0(param_3,&local_90);
              if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
                _free(local_90);
              }
              if ((char)uVar5 != '\0') {
                FUN_00401de0(&local_90,"hosp",0xffffffff);
                uVar5 = FUN_00401ec0(local_50,&local_90);
                if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
                  _free(local_90);
                }
                if ((char)uVar5 != '\0') {
                  local_30 = operator_new(0x28c);
                  local_4 = CONCAT31(local_4._1_3_,0x4a);
                  if (local_30 == (undefined4 *)0x0) goto LAB_0094311d;
                  local_94 = CHospitalRoom_Constructor(local_30);
                  goto LAB_0094311f;
                }
              }
            }
            else {
              FUN_00401de0(&local_90,"create",0xffffffff);
              uVar5 = FUN_00401ec0(local_50,&local_90);
              if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
                _free(local_90);
              }
              if ((char)uVar5 == '\0') {
                FUN_00401de0(&local_90,"fire",0xffffffff);
                uVar5 = FUN_00401ec0(local_50,&local_90);
                if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
                  _free(local_90);
                }
                if ((char)uVar5 != '\0') {
                  local_30 = operator_new(0x278);
                  local_4._0_1_ = 0x48;
                  if (local_30 == (undefined4 *)0x0) {
                    local_94 = (undefined4 *)0x0;
                  }
                  else {
                    local_94 = RoomObject_CreateCancelProjectAction(local_30);
                  }
                  FUN_00401de0(&local_90,"ai_room_sts_fire",0xffffffff);
                  local_4._0_1_ = 0x49;
                  goto LAB_00942501;
                }
              }
              else {
                local_30 = operator_new(0x288);
                local_4._0_1_ = 0x46;
                if (local_30 == (undefined4 *)0x0) {
                  local_94 = (undefined4 *)0x0;
                }
                else {
                  local_94 = TMRoomCB_Constructor(local_30);
                }
                local_4._0_1_ = 1;
                FUN_00943c80(local_94,4);
                FUN_00401de0(&local_90,"ai_room_sts_create",0xffffffff);
                local_4._0_1_ = 0x47;
                RoomObject_SetAIInteractionKey(local_94,&local_90);
                local_4._0_1_ = 1;
                if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
                  _free(local_90);
                }
              }
            }
            goto LAB_0094312b;
          }
          local_30 = operator_new(0x2b0);
          local_4 = CONCAT31(local_4._1_3_,0x45);
          if (local_30 == (undefined4 *)0x0) goto LAB_0094311d;
          local_94 = CRehearseRoom_Constructor(local_30);
          goto LAB_0094311f;
        }
        bVar12 = RoomName_IsResearchCategory(local_50);
        if (!bVar12) {
          FUN_00401de0(&local_90,"fire",0xffffffff);
          uVar5 = FUN_00401ec0(local_50,&local_90);
          if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if ((char)uVar5 == '\0') {
            FUN_00401de0(&local_90,"hire",0xffffffff);
            uVar5 = FUN_00401ec0(local_50,&local_90);
            if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
              _free(local_90);
            }
            if ((char)uVar5 == '\0') goto LAB_0094312b;
            local_30 = operator_new(0x25c);
            local_4 = CONCAT31(local_4._1_3_,0x44);
            if (local_30 == (undefined4 *)0x0) goto LAB_0094311d;
            local_94 = RoomObject_CreateHireAction(local_30,0xf);
          }
          else {
            local_30 = operator_new(0x278);
            local_4 = CONCAT31(local_4._1_3_,0x43);
            if (local_30 == (undefined4 *)0x0) goto LAB_0094311d;
            local_94 = RoomObject_CreateCancelProjectAction(local_30);
          }
          goto LAB_0094311f;
        }
        pvVar6 = operator_new(0x2a8);
        local_4 = CONCAT31(local_4._1_3_,0x42);
        if (pvVar6 != (void *)0x0) {
          piVar7 = RoomName_ToResearchCategoryEnum((int *)&local_30,local_50);
          local_94 = CResearchRoom_Constructor(pvVar6,*piVar7);
          goto LAB_0094311f;
        }
        goto LAB_0094311d;
      }
      FUN_00401de0(&local_90,"create",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 == '\0') {
        FUN_00401de0(&local_90,"canit",0xffffffff);
        uVar5 = FUN_00401ec0(local_50,&local_90);
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        if ((char)uVar5 == '\0') goto LAB_0094312b;
        puVar4 = operator_new(0x278);
        local_4 = CONCAT31(local_4._1_3_,0x40);
        if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
        local_94 = RoomObject_CreateCancelProjectAction(puVar4);
      }
      else {
        puVar4 = operator_new(0x28c);
        local_4 = CONCAT31(local_4._1_3_,0x3f);
        if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
        local_94 = CCustomScriptRoom_Constructor(puVar4);
      }
      goto LAB_0094311f;
    }
    FUN_00401de0(&local_90,"fire",0xffffffff);
    uVar5 = FUN_00401ec0(local_50,&local_90);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if ((char)uVar5 != '\0') {
      puVar4 = operator_new(0x278);
      local_4 = CONCAT31(local_4._1_3_,0x1c);
      if (puVar4 == (undefined4 *)0x0) goto LAB_0094311d;
      local_94 = RoomObject_CreateCancelProjectAction(puVar4);
      goto LAB_0094311f;
    }
    FUN_00401de0(&local_90,"office",0xffffffff);
    uVar5 = FUN_00401ec0(local_50,&local_90);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if ((char)uVar5 != '\0') {
      puVar4 = operator_new(0x2ac);
      local_4._0_1_ = 0x1d;
      if (puVar4 == (undefined4 *)0x0) {
        local_94 = (undefined4 *)0x0;
      }
      else {
        local_94 = GenreWritingStation_Constructor(puVar4);
      }
      FUN_00401de0(&local_90,"ai_room_so_hall",0xffffffff);
      local_4._0_1_ = 0x1e;
      RoomObject_SetAIInteractionKey(local_94,&local_90);
      local_4._0_1_ = 1;
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      goto LAB_0094312b;
    }
    FUN_00401de0(&local_90,"action",0xffffffff);
    uVar5 = FUN_00401ec0(local_50,&local_90);
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if ((char)uVar5 == '\0') {
      FUN_00401de0(&local_90,"comedy",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        puVar4 = operator_new(0x2ac);
        local_4._0_1_ = 0x21;
        if (puVar4 == (undefined4 *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = GenreWritingStation_Constructor(puVar4);
        }
        FUN_00401de0(&local_90,"genre_comedy",0xffffffff);
        local_4._0_1_ = 0x22;
LAB_00941d4e:
        iVar2 = GenreKey_ToEnum(&local_90);
        GenreWritingStation_SetGenre(local_94,iVar2);
        goto joined_r0x00941cbb;
      }
      FUN_00401de0(&local_90,"horror",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        puVar4 = operator_new(0x2ac);
        local_4._0_1_ = 0x23;
        if (puVar4 == (undefined4 *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = GenreWritingStation_Constructor(puVar4);
        }
        FUN_00401de0(&local_90,"genre_horror",0xffffffff);
        local_4._0_1_ = 0x24;
        iVar2 = GenreKey_ToEnum(&local_90);
        GenreWritingStation_SetGenre(local_94,iVar2);
        goto joined_r0x00941cbb;
      }
      FUN_00401de0(&local_90,"romdrama",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        puVar4 = operator_new(0x2ac);
        local_4._0_1_ = 0x25;
        if (puVar4 == (undefined4 *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = GenreWritingStation_Constructor(puVar4);
        }
        FUN_00401de0(&local_90,"genre_romance",0xffffffff);
        local_4._0_1_ = 0x26;
        iVar2 = GenreKey_ToEnum(&local_90);
        GenreWritingStation_SetGenre(local_94,iVar2);
        goto joined_r0x00941cbb;
      }
      FUN_00401de0(&local_90,"scifi",0xffffffff);
      uVar5 = FUN_00401ec0(local_50,&local_90);
      if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if ((char)uVar5 != '\0') {
        puVar4 = operator_new(0x2ac);
        local_4._0_1_ = 0x27;
        if (puVar4 == (undefined4 *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = GenreWritingStation_Constructor(puVar4);
        }
        FUN_00401de0(&local_90,"genre_sci-fi",0xffffffff);
        local_4._0_1_ = 0x28;
        goto LAB_00941d4e;
      }
    }
    else {
      puVar4 = operator_new(0x2ac);
      local_4._0_1_ = 0x1f;
      if (puVar4 == (undefined4 *)0x0) {
        local_94 = (undefined4 *)0x0;
      }
      else {
        local_94 = GenreWritingStation_Constructor(puVar4);
      }
      FUN_00401de0(&local_90,"genre_action",0xffffffff);
      local_4._0_1_ = 0x20;
      iVar2 = GenreKey_ToEnum(&local_90);
      GenreWritingStation_SetGenre(local_94,iVar2);
joined_r0x00941cbb:
      local_4._0_1_ = 1;
      if (0x14 < local_88) {
        local_4._0_1_ = 1;
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
    }
    if (local_94 != (undefined4 *)0x0) {
      local_94[0x78] = 0;
      goto LAB_0094312b;
    }
  }
  local_30 = operator_new(600);
  local_4._0_1_ = 0x4b;
  if (local_30 == (undefined4 *)0x0) {
    local_94 = (undefined4 *)0x0;
  }
  else {
    local_94 = TMRoom_Constructor(local_30);
  }
  *(undefined1 *)((int)local_94 + 0x1c6) = 0;
LAB_00943166:
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[0]);
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return local_94;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_009431c0 @ 009431c0 ////

undefined4 * __thiscall FUN_009431c0(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION TMRoom_RegisterOccupant @ 009431e0 ////

void __thiscall TMRoom_RegisterOccupant(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf2fb8;
  local_c = ExceptionList;
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((int)this + 0xfc);
    iVar2 = *(int *)((int)this + 0xf8);
    if (iVar2 != iVar1) {
      do {
        if (*(void **)(iVar2 + 0x14) == param_1) break;
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != iVar1);
      if (iVar2 != iVar1) {
        return;
      }
    }
    ExceptionList = &local_c;
    FUN_0053b650(param_1,*(undefined4 *)((int)this + 0xf0),this);
    local_18 = &local_24;
    local_1c = (int *)((int)param_1 + 0x18);
    local_24 = &PTR_FUN_00d23630;
    local_10 = param_1;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
    local_4 = 0;
    FUN_0093f360((void *)((int)this + 0xf4),(int)&local_24);
    FUN_0053d280(&local_24);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00943650 @ 00943650 ////

int * __cdecl FUN_00943650(void *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int in_stack_00000024;
  
  piVar1 = RoomFactory_CreateInteriorObjectForName(param_1,param_2,param_3,param_4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x74))(param_1,param_2,in_stack_00000024);
    if (((in_stack_00000024 != 0) && (*(int *)(in_stack_00000024 + 0x24c) != 0)) &&
       (*(int *)(*(int *)(in_stack_00000024 + 0x24c) + 0x2b8) != 0)) {
      (**(code **)(*piVar1 + 100))();
    }
    return piVar1;
  }
  return (int *)0x0;
}


//// FUNCTION TMRoom_OnObjectDropped @ 009436b0 ////

void __thiscall TMRoom_OnObjectDropped(void *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    TMRoom_RegisterOccupant(this,param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_009436f0 @ 009436f0 ////

void __fastcall FUN_009436f0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00943720 @ 00943720 ////

void FUN_00943720(void)

{
  return;
}


//// FUNCTION TMRoomCB_OnObjectDropped @ 00943730 ////

void __thiscall TMRoomCB_OnObjectDropped(void *this,int *param_1)

{
  if (*(char *)((int)this + 0x280) != '\0') {
    TMRoom_RegisterOccupant(this,param_1);
    TMRoom_FinalizeSlotAssignment(this,param_1,0);
  }
  if (*(code **)((int)this + 600) != (code *)0x0) {
    (**(code **)((int)this + 600))(param_1);
  }
  return;
}


//// FUNCTION FUN_009437b0 @ 009437b0 ////

void __fastcall FUN_009437b0(int *param_1)

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
  puStack_8 = &LAB_00cf2ff8;
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


//// FUNCTION TMRoomCB_Constructor @ 00943880 ////

undefined4 * __fastcall TMRoomCB_Constructor(undefined4 *param_1)

{
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6eb4c;
  param_1[0x19] = &PTR_LAB_00d6eb2c;
  param_1[0x98] = param_1 + 0x9b;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0x14;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  FUN_004015d0(param_1 + 0x49,"",0);
  param_1[0xa1] = 0;
  *(undefined1 *)((int)param_1 + 0x1c9) = 1;
  return param_1;
}


//// FUNCTION FUN_00943900 @ 00943900 ////

undefined4 * __thiscall FUN_00943900(void *this,byte param_1)

{
  FUN_00943920(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00943920 @ 00943920 ////

void __fastcall FUN_00943920(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x9a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x98]);
  }
  TMRoom_Destructor(param_1);
  return;
}


//// FUNCTION FUN_00943950 @ 00943950 ////

uint __thiscall FUN_00943950(void *this,undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *apvStack_20 [2];
  uint uStack_18;
  
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)((int)this + 0x200),(wchar_t *)&lpCaption_00d16918,uVar2);
  if (*(code **)((int)this + 0x25c) == (code *)0x0) {
    return 0;
  }
  uVar3 = (**(code **)((int)this + 0x25c))(param_1);
  cVar1 = (char)uVar3;
  if (cVar1 != '\0') {
    puVar4 = FUN_009b5030(apvStack_20,(undefined4 *)((int)this + 0x260));
    uVar3 = FUN_004036d0((void *)((int)this + 0x200),(wchar_t *)*puVar4,puVar4[1]);
    if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_20[0]);
    }
  }
  uVar2 = CONCAT31((int3)((uint)uVar3 >> 8),*(char *)((int)this + 0x280));
  if ((*(char *)((int)this + 0x280) != '\0') && (*(uint *)((int)this + 0x1e0) != 0)) {
    uVar2 = 0;
    if (*(int *)((int)this + 0xf8) != 0) {
      uVar2 = (*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x18;
    }
    if (*(uint *)((int)this + 0x1e0) <= uVar2) {
      return uVar2 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),cVar1);
}


//// FUNCTION FUN_00943a30 @ 00943a30 ////

void __fastcall FUN_00943a30(int param_1)

{
  char *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_0048f010(&stack0x00000004,&local_20);
  FUN_004015d0((void *)(param_1 + 0x260),local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return;
}


//// FUNCTION FUN_00943a80 @ 00943a80 ////

void __fastcall FUN_00943a80(int param_1)

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
  puStack_8 = &LAB_00cf3020;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoomCB.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 10;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("BUsesActivity");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x21c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TMRoomCB.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0xb;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("(int&)(CallbackType)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x220),4);
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00943c80 @ 00943c80 ////

void __thiscall FUN_00943c80(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x284) = param_1;
  switch(param_1) {
  case 1:
    *(undefined1 **)((int)this + 600) = &LAB_005804c0;
    *(code **)((int)this + 0x25c) = FUN_00577bc0;
    break;
  case 2:
    *(undefined1 **)((int)this + 600) = &LAB_005804b0;
    *(code **)((int)this + 0x25c) = FUN_00577ca0;
    break;
  case 3:
    *(undefined1 **)((int)this + 600) = &LAB_005804a0;
    *(code **)((int)this + 0x25c) = FUN_00577ad0;
    break;
  case 4:
    *(undefined1 **)((int)this + 600) = &LAB_005804d0;
    *(code **)((int)this + 0x25c) = FUN_00577b40;
    break;
  default:
    goto switchD_00943c97_default;
  }
  FUN_00943a30((int)this);
  *(undefined4 *)((int)this + 0x1e0) = 5;
switchD_00943c97_default:
  return;
}


//// FUNCTION FUN_00943f00 @ 00943f00 ////

void __cdecl FUN_00943f00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00943f40 @ 00943f40 ////

void __cdecl FUN_00943f40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_00944030 @ 00944030 ////

void __cdecl FUN_00944030(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00944130 @ 00944130 ////

int __fastcall FUN_00944130(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
}


//// FUNCTION FUN_00944300 @ 00944300 ////

void __cdecl FUN_00944300(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00944470 @ 00944470 ////

void * FUN_00944470(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009444f0 @ 009444f0 ////

void __cdecl FUN_009444f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00944530 @ 00944530 ////

void __thiscall FUN_00944530(void *this,int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d23630;
  *(int *)((int)this + 0x14) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x24) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 **)((int)this + 0x24) = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x18) = &PTR_LAB_00d60770;
  *(int *)((int)this + 0x2c) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x20) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
    *(undefined4 *)((int)this + 0x30) = param_3;
    return;
  }
  *(undefined4 *)((int)this + 0x30) = param_3;
  return;
}


//// FUNCTION FUN_009445c0 @ 009445c0 ////

int * __thiscall FUN_009445c0(void *this,int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf3043;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d23630;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 **)((int)this + 0x24) = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x18) = &PTR_LAB_00d60770;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  local_4 = 1;
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = uVar1;
  (*(code *)**(undefined4 **)this)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00944650 @ 00944650 ////

void __fastcall FUN_00944650(undefined4 *param_1)

{
  void *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf3063;
  local_c = ExceptionList;
  local_4 = 1;
  if (param_1[0xb] != 0) {
    this = *(void **)(param_1[0xb] + 0x214);
    ExceptionList = &local_c;
    if (this != (void *)0x0) {
      ExceptionList = &local_c;
      uVar1 = FUN_009734c0(this,(byte *)0xd16590);
      if ((char)uVar1 != '\0') {
        FUN_00403180(param_1[0xb]);
        goto LAB_009446ab;
      }
    }
    (**(code **)(*(int *)param_1[0xb] + 4))();
  }
LAB_009446ab:
  param_1[6] = &PTR_LAB_00d60770;
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
  *param_1 = &PTR_FUN_00d23630;
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
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00944750 @ 00944750 ////

undefined4 * __thiscall FUN_00944750(void *this,byte param_1)

{
  FUN_00944650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00944920 @ 00944920 ////

void __fastcall FUN_00944920(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *this;
  int *unaff_retaddr;
  void *pvStack_40;
  void *local_3c;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf30ae;
  local_c = ExceptionList;
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x1c9) != '\0') {
    local_2c = local_20;
    this = (undefined4 *)0x0;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    FUN_004015d0(&local_2c,*(char **)(param_1 + 0x3c),*(uint *)(param_1 + 0x40));
    local_4 = 0;
    FUN_004073f0(&local_2c,"_00.flm",7);
    local_3c = operator_new(0x2e8);
    local_4._0_1_ = 1;
    if (local_3c == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_0040b940(local_3c,*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0xc0) + 0x24c));
    }
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*piVar3 + 0xb0))(&local_2c);
    pvStack_40 = operator_new(0x2b4);
    puStack_8._0_1_ = 2;
    if (pvStack_40 != (void *)0x0) {
      this = FUN_00402380(pvStack_40,(int)unaff_retaddr,piVar3);
    }
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    local_4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x34))(unaff_retaddr);
    FUN_004015d0(this + 0x31,*(char **)(*(int *)(param_1 + 0x18) + 0x104),
                 *(uint *)(*(int *)(param_1 + 0x18) + 0x108));
    iVar2 = local_4;
    this[0x84] = this[0x84] | 2;
    TMCharacter_AddResidentDesire(unaff_retaddr,local_4);
    FUN_00401a00(this,iVar2);
    FUN_00976de0((void *)piVar3[0x85],0,-1,(float *)&pvStack_40,(float *)&stack0xffffffb8);
    (**(code **)(*unaff_retaddr + 0xa8))(&pvStack_40,&stack0xffffffb8);
    TMCharacter_AddAction(unaff_retaddr,(int)this);
    this[0x90] = 2;
    FUN_00401a70((int)this);
    piVar1 = piVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar3)(1);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00944b10 @ 00944b10 ////

void __fastcall FUN_00944b10(int param_1)

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


//// FUNCTION FUN_00944b80 @ 00944b80 ////

undefined4 * FUN_00944b80(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00944bc0 @ 00944bc0 ////

void __cdecl FUN_00944bc0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00944c30 @ 00944c30 ////

undefined4 __thiscall FUN_00944c30(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBX;
  undefined4 *this_00;
  float unaff_retaddr;
  void *local_1c [3];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf30cb;
  local_c = ExceptionList;
  uVar1 = *(uint *)(param_1 * 4 + *(int *)((int)this + 0x20));
  piVar2 = *(int **)(uVar1 + 0x2c);
  this_00 = (undefined4 *)0x0;
  piVar3 = *(int **)(uVar1 + 0x14);
  if ((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) {
    ExceptionList = &local_c;
    local_1c[0] = operator_new(0x2b4);
    local_4 = 0;
    if (local_1c[0] != (void *)0x0) {
      this_00 = FUN_00402380(local_1c[0],(int)piVar3,piVar2);
    }
    local_4 = 0xffffffff;
    iVar4 = (**(code **)(**(int **)((int)this + 0x18) + 0x34))(piVar3);
    FUN_004015d0(this_00 + 0x31,*(char **)(*(int *)(unaff_EBX + 0x18) + 0x104),
                 *(uint *)(*(int *)(unaff_EBX + 0x18) + 0x108));
    this_00[0x84] = this_00[0x84] | 2;
    TMCharacter_AddResidentDesire(piVar3,iVar4);
    FUN_00401a00(this_00,iVar4);
    if (-1 < (int)unaff_retaddr) {
      FUN_00976de0((void *)piVar2[0x85],0,-1,(float *)local_1c,(float *)&stack0x00000000);
      (**(code **)(*piVar3 + 0xa8))(local_1c,&stack0x00000000);
    }
    TMCharacter_AddAction(piVar3,(int)this_00);
    this_00[0x90] = 2;
    FUN_00401a70((int)this_00);
    uVar5 = (**(code **)(*piVar2 + 0xa4))();
    piVar3 = piVar2 + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      uVar5 = (**(code **)*piVar2)(1);
    }
    ExceptionList = pvStack_10;
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00944da0 @ 00944da0 ////

uint __thiscall FUN_00944da0(void *this,int param_1)

{
  int iVar1;
  undefined4 *_Memory;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if ((*(int *)((int)this + 0x20) == 0) ||
       ((uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2) <= uVar2)) {
      return 0xffffffff;
    }
    iVar1 = *(int *)(*(int *)((int)this + 0x20) + uVar2 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) == param_1)) break;
    uVar2 = uVar2 + 1;
  }
  _Memory = *(undefined4 **)(*(int *)((int)this + 0x20) + uVar2 * 4);
  if (_Memory != (undefined4 *)0x0) {
    FUN_00944650(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(*(int *)((int)this + 0x20) + uVar2 * 4) = 0;
  return uVar2;
}


//// FUNCTION FUN_00944e20 @ 00944e20 ////

undefined4 __thiscall FUN_00944e20(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0x20) + param_1 * 4);
}


//// FUNCTION FUN_00944e30 @ 00944e30 ////

uint __thiscall FUN_00944e30(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((*(int *)((int)this + 0x20) == 0) ||
       ((uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2) <= uVar2)) {
      return 0xffffffff;
    }
    iVar1 = *(int *)(*(int *)((int)this + 0x20) + uVar2 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) == param_1)) {
      if (*(char *)(*(int *)((int)this + 0x18) + 0x1c9) == '\0') {
        return uVar2;
      }
      if (*(int *)(iVar1 + 0x2c) != 0) {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_00944e80 @ 00944e80 ////

void __fastcall FUN_00944e80(int param_1)

{
  int iVar1;
  undefined4 *_Memory;
  uint uVar2;
  
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x24) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    _Memory = *(undefined4 **)(iVar1 + uVar2 * 4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_00944650(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x20) + uVar2 * 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00944ed0 @ 00944ed0 ////

undefined8 __fastcall FUN_00944ed0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar1 = 0;
      (uVar2 = param_2, *(int *)(param_1 + 0x20) != 0 &&
      (uVar2 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2, uVar1 < uVar2));
      uVar1 = uVar1 + 1) {
    param_2 = *(uint *)(*(int *)(param_1 + 0x20) + uVar1 * 4);
    uVar2 = *(int *)(param_1 + 0x20) + uVar1 * 4;
    if (((param_2 == 0) || (uVar2 = param_2, *(int *)(param_2 + 0x14) == 0)) ||
       (*(int *)(param_2 + 0x2c) == 0)) goto LAB_00944f0a;
  }
  uVar1 = 0xffffffff;
LAB_00944f0a:
  return CONCAT44(uVar2,uVar1);
}


//// FUNCTION FUN_00944f10 @ 00944f10 ////

void __thiscall FUN_00944f10(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x10 + *(int *)((int)this + 0x30));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return;
}


//// FUNCTION FUN_00944f40 @ 00944f40 ////

void __thiscall FUN_00944f40(void *this,undefined4 *param_1,int param_2)

{
  *param_1 = *(undefined4 *)(param_2 * 0x10 + 0xc + *(int *)((int)this + 0x30));
  return;
}


//// FUNCTION FUN_00944f60 @ 00944f60 ////

uint __thiscall FUN_00944f60(void *this,int param_1)

{
  uint uVar1;
  int extraout_ECX;
  uint extraout_EDX;
  undefined8 uVar2;
  
  uVar1 = FUN_00944e30(this,param_1);
  if ((int)uVar1 < 0) {
    uVar2 = FUN_00944ed0(extraout_ECX,extraout_EDX);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}


//// FUNCTION FUN_00944f80 @ 00944f80 ////

uint __thiscall FUN_00944f80(void *this,uint param_1)

{
  int *piVar1;
  uint in_EAX;
  
  if (*(int *)((int)this + 0x20) != 0) {
    in_EAX = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
    if (param_1 < in_EAX) {
      piVar1 = (int *)(*(int *)((int)this + 0x20) + param_1 * 4);
      return CONCAT31((int3)((uint)piVar1 >> 8),*piVar1 == 0);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00944fb0 @ 00944fb0 ////

undefined4 __thiscall FUN_00944fb0(void *this,uint param_1)

{
  int iVar1;
  
  if (((*(int *)((int)this + 0x20) != 0) &&
      (param_1 < (uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2))) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x20) + param_1 * 4), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x14);
  }
  return 0;
}


//// FUNCTION FUN_00944fe0 @ 00944fe0 ////

void __thiscall FUN_00944fe0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint local_c;
  uint local_8;
  
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x20) == 0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
    }
    uVar6 = 0;
    if (local_c != 0) {
      do {
        if (local_8 <= uVar6) {
          return;
        }
        iVar3 = uVar6 * 4;
        iVar4 = *(int *)(*(int *)(param_1 + 0x20) + iVar3);
        if (iVar4 == 0) {
          *(undefined4 *)(*(int *)((int)this + 0x20) + iVar3) = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + 0x14);
          puVar5 = operator_new(0x34);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            piVar1 = puVar5 + 1;
            puVar5[3] = 0;
            *piVar1 = 0;
            puVar5[2] = 0;
            puVar5[3] = puVar5;
            *puVar5 = &PTR_FUN_00d23630;
            puVar5[5] = iVar4;
            if (iVar4 != 0) {
              piVar2 = (int *)(iVar4 + 0x18);
              puVar5[2] = piVar2;
              *piVar1 = *piVar2;
              *(int **)(*piVar2 + 4) = piVar1;
              *piVar2 = (int)piVar1;
            }
            puVar5[9] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = puVar5 + 6;
            puVar5[6] = &PTR_LAB_00d60770;
            puVar5[0xb] = 0;
            puVar5[0xc] = uVar6;
          }
          *(undefined4 **)(*(int *)((int)this + 0x20) + iVar3) = puVar5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_c);
    }
  }
  return;
}


//// FUNCTION FUN_009450f0 @ 009450f0 ////

uint __thiscall FUN_009450f0(void *this,uint param_1,byte *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  
  if (((-1 < (int)param_1) && (iVar1 = *(int *)((int)this + 0x20), iVar1 != 0)) &&
     (in_EAX = *(int *)((int)this + 0x24) - iVar1 >> 2, param_1 < in_EAX)) {
    iVar2 = *(int *)(iVar1 + param_1 * 4);
    in_EAX = iVar1 + param_1 * 4;
    if (((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 0x2c), iVar1 != 0)) &&
       (*(void **)(iVar1 + 0x214) != (void *)0x0)) {
      uVar3 = FUN_009734c0(*(void **)(iVar1 + 0x214),param_2);
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_009757a0(*(void **)(iVar1 + 0x214),param_2,param_3,0);
      }
      return uVar3 & 0xffffff00;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00945160 @ 00945160 ////

void __fastcall FUN_00945160(int param_1)

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


//// FUNCTION FUN_009451f0 @ 009451f0 ////

int __fastcall FUN_009451f0(int *param_1,uint param_2,void *param_3)

{
  int iVar1;
  undefined4 *_Memory;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf30eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar6 = FUN_00944ed0((int)param_1,param_2);
  iVar2 = (int)uVar6;
  if (iVar2 < 0) {
    FUN_0053a270(param_3,0xffffffff);
    ExceptionList = local_c;
    return iVar2;
  }
  iVar1 = iVar2 * 4;
  _Memory = *(undefined4 **)(iVar1 + param_1[8]);
  if (_Memory != (undefined4 *)0x0) {
    FUN_00944650(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(iVar1 + param_1[8]) = 0;
  if (*(char *)(param_1[6] + 0x1c9) != '\0') {
    pvVar3 = operator_new(0x34);
    uVar4 = 0;
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      iVar7 = iVar2;
      iVar5 = (**(code **)(*param_1 + 4))(iVar2);
      uVar4 = FUN_00944530(pvVar3,(int)param_3,iVar5,iVar7);
    }
    *(undefined4 *)(param_1[8] + iVar1) = uVar4;
    local_4 = 0xffffffff;
    FUN_00944c30(param_1,iVar2);
    FUN_0053a270(param_3,iVar2);
    ExceptionList = local_c;
    return iVar2;
  }
  pvVar3 = operator_new(0x34);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00944530(pvVar3,(int)param_3,0,iVar2);
  }
  *(undefined4 *)(param_1[8] + iVar1) = uVar4;
  FUN_0053a270(param_3,iVar2);
  ExceptionList = local_c;
  return iVar2;
}


//// FUNCTION FUN_00945330 @ 00945330 ////

uint __thiscall FUN_00945330(void *this,void *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined8 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3116;
  local_c = ExceptionList;
  if ((((int)param_2 < 0) || (*(int *)((int)this + 0x20) == 0)) ||
     ((uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2) <= param_2)) {
    return 0xffffffff;
  }
  ExceptionList = &local_c;
  uVar2 = FUN_00944e30(this,(int)param_1);
  uVar6 = extraout_EDX;
  if (-1 < (int)uVar2) {
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x20) + uVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00944650(puVar1);
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    *(undefined4 *)(*(int *)((int)this + 0x20) + uVar2 * 4) = 0;
    FUN_0053a270(param_1,0xffffffff);
    uVar6 = extraout_EDX_00;
  }
  if ((param_2 != uVar2) && (iVar5 = *(int *)(*(int *)((int)this + 0x20) + param_2 * 4), iVar5 != 0)
     ) {
    pvVar3 = *(void **)(iVar5 + 0x14);
    if (pvVar3 != (void *)0x0) {
      FUN_0053a270(pvVar3,0xffffffff);
      uVar6 = extraout_EDX_01;
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x20) + param_2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00944650(puVar1);
                    /* WARNING: Subroutine does not return */
      _free(puVar1);
    }
    *(undefined4 *)(*(int *)((int)this + 0x20) + param_2 * 4) = 0;
  }
  if (*(int *)(*(int *)((int)this + 0x20) + param_2 * 4) != 0) {
    uVar7 = FUN_00944ed0((int)this,uVar6);
    uVar6 = (uint)uVar7;
    if (-1 < (int)uVar6) {
      if (*(char *)(*(int *)((int)this + 0x18) + 0x1c9) != '\0') {
        pvVar3 = operator_new(0x34);
        local_4 = 1;
        if (pvVar3 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar2 = uVar6;
          iVar5 = (**(code **)(*(int *)this + 4))(uVar6);
          uVar4 = FUN_00944530(pvVar3,(int)param_1,iVar5,uVar2);
        }
        *(undefined4 *)(*(int *)((int)this + 0x20) + uVar6 * 4) = uVar4;
        local_4 = 0xffffffff;
        FUN_00944c30(this,uVar6);
        FUN_0053a270(param_1,uVar6);
        ExceptionList = local_c;
        return uVar6;
      }
      pvVar3 = operator_new(0x34);
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00944530(pvVar3,(int)param_1,0,uVar6);
      }
      *(undefined4 *)(*(int *)((int)this + 0x20) + uVar6 * 4) = uVar4;
      FUN_0053a270(param_1,uVar6);
    }
    ExceptionList = local_c;
    return uVar6;
  }
  if (*(char *)(*(int *)((int)this + 0x18) + 0x1c9) != '\0') {
    pvVar3 = operator_new(0x34);
    uVar4 = 0;
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      uVar6 = param_2;
      iVar5 = (**(code **)(*(int *)this + 4))(param_2);
      uVar4 = FUN_00944530(pvVar3,(int)param_1,iVar5,uVar6);
    }
    *(undefined4 *)(*(int *)((int)this + 0x20) + param_2 * 4) = uVar4;
    local_4 = 0xffffffff;
    FUN_00944c30(this,param_2);
    FUN_0053a270(param_1,param_2);
    ExceptionList = local_c;
    return param_2;
  }
  pvVar3 = operator_new(0x34);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00944530(pvVar3,(int)param_1,0,param_2);
  }
  *(undefined4 *)(*(int *)((int)this + 0x20) + param_2 * 4) = uVar4;
  FUN_0053a270(param_1,param_2);
  ExceptionList = local_c;
  return param_2;
}


//// FUNCTION FUN_009455c0 @ 009455c0 ////

undefined4 __thiscall FUN_009455c0(void *this,int param_1)

{
  uint uVar1;
  int extraout_ECX;
  
  uVar1 = FUN_00944e30(this,param_1);
  if (-1 < (int)uVar1) {
    return *(undefined4 *)(*(int *)(extraout_ECX + 0x20) + uVar1 * 4);
  }
  return 0;
}


//// FUNCTION FUN_009455e0 @ 009455e0 ////

void __thiscall FUN_009455e0(void *this,void *param_1)

{
  uint uVar1;
  int *extraout_ECX;
  uint extraout_EDX;
  
  uVar1 = FUN_00944e30(this,(int)param_1);
  if ((int)uVar1 < 0) {
    FUN_009451f0(extraout_ECX,extraout_EDX,param_1);
  }
  return;
}


//// FUNCTION FUN_00945600 @ 00945600 ////

void __fastcall FUN_00945600(int param_1)

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


//// FUNCTION FUN_00945630 @ 00945630 ////

undefined4 * FUN_00945630(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00944bc0(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_00945660 @ 00945660 ////

void __fastcall FUN_00945660(int param_1)

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


//// FUNCTION FUN_00945690 @ 00945690 ////

void __fastcall FUN_00945690(int param_1)

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


//// FUNCTION FUN_009456c0 @ 009456c0 ////

void __fastcall FUN_009456c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf314c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6ecbc;
  local_4 = 3;
  FUN_00944e80((int)param_1);
  if (0x14 < (uint)param_1[0x11]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[1] = &PTR_FUN_00d23400;
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
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00945790 @ 00945790 ////

void FUN_00945790(void)

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
  puStack_8 = &LAB_00cf3168;
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


//// FUNCTION FUN_00945800 @ 00945800 ////

void FUN_00945800(void)

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
  puStack_8 = &LAB_00cf3188;
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


//// FUNCTION FUN_00945870 @ 00945870 ////

undefined4 * __thiscall FUN_00945870(void *this,byte param_1)

{
  FUN_009456c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00945930 @ 00945930 ////

void __thiscall FUN_00945930(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00945790();
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
      _Dst = FUN_00944b80((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00944470(param_1,iVar5,param_1 + param_2);
      FUN_00944b80(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00943f00(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00944470(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00944300(param_1,(int)pvVar3,iVar5);
    FUN_00943f00(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00945b10 @ 00945b10 ////

void __thiscall FUN_00945b10(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf31a0;
  local_10 = ExceptionList;
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  iVar3 = *(int *)((int)this + 4);
  local_18 = param_3[3];
  local_14 = &stack0xffffffd0;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - iVar3 >> 4;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar3 >> 4;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd0;
    if (0xfffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar2 = FUN_00945800();
      iVar3 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar3 >> 4;
    }
    if (uVar2 < iVar7 + param_2) {
      if (0xfffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar7 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 4;
        }
        uVar2 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar2 * 0x10);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_009444f0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00944bc0(puVar5,param_2,&local_24);
      FUN_009444f0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)_Memory >> 4;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar2 * 4;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 4;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 4) < param_2) {
      FUN_009444f0(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_00945630(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar3;
      FUN_00943f40(param_1,(undefined4 *)(iVar3 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_009444f0(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00944030(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_00943f40(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00945da0 @ 00945da0 ////

void __thiscall FUN_00945da0(void *this,uint param_1)

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
    FUN_00945930(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
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


//// FUNCTION FUN_00945e80 @ 00945e80 ////

undefined4 * __thiscall FUN_00945e80(void *this,int param_1,char *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
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
  
  puStack_8 = &LAB_00cf31f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d6ecbc;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = &PTR_FUN_00d23400;
  *(int *)((int)this + 0x18) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0xc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  piVar1 = (int *)((int)this + 0x3c);
  *piVar1 = (int)this + 0x48;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x14;
  FUN_004015d0(piVar1,param_2,param_3);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,".flm",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00569860(piVar1,&local_4c,&local_2c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00946000 @ 00946000 ////

void __thiscall FUN_00946000(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00944bc0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_00945b10(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00946070 @ 00946070 ////

void __thiscall FUN_00946070(void *this,uint param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_00945da0((void *)((int)this + 0x1c),param_1);
    for (uVar1 = 0;
        (*(int *)((int)this + 0x20) != 0 &&
        (uVar1 < (uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2)));
        uVar1 = uVar1 + 1) {
      *(undefined4 *)(*(int *)((int)this + 0x20) + uVar1 * 4) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_009460c0 @ 009460c0 ////

uint __fastcall FUN_009460c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint _Count;
  char *_Source;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint local_f4;
  float local_ec;
  char *local_e8;
  undefined4 local_e4;
  uint local_e0;
  char local_dc [20];
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  char *local_ac;
  uint uStack_a8;
  uint local_a4;
  void *local_8c [2];
  uint local_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3221;
  local_c = ExceptionList;
  local_e8 = local_dc;
  local_dc[0] = '\0';
  local_e4 = 0;
  local_e0 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_e8,"_00.flm",7);
  local_e4 = 7;
  local_e8[7] = '\0';
  local_4 = 0;
  FUN_0047aee0(&local_ac,param_1 + 0xf,&local_e8);
  local_f4 = 0;
  local_ec = 0.0;
  if ((void *)param_1[0xc] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  while( true ) {
    puVar4 = FUN_0040d6b0(local_8c,"data/scene/interactions/",&local_ac);
    local_4._0_1_ = 2;
    uVar5 = FUN_009d3660(puVar4,(uint *)0x0);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    if ((char)uVar5 == '\0') {
      FUN_00946070(param_1,local_f4);
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      if (0x14 < local_e0) {
                    /* WARNING: Subroutine does not return */
        _free(local_e8);
      }
      ExceptionList = local_c;
      return local_f4;
    }
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 4))();
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00976de0((void *)puVar4[0x85],0,-1,&fStack_c8,&local_ec);
      fStack_bc = fStack_c8;
      fStack_b0 = local_ec;
      iVar2 = param_1[0xc];
      uStack_c0 = 0x3ca3d70a;
      uStack_b8 = uStack_c4;
      uStack_b4 = 0x3ca3d70a;
      if ((iVar2 == 0) || ((uint)(param_1[0xe] - iVar2 >> 4) <= (uint)(param_1[0xd] - iVar2 >> 4)))
      {
        FUN_00945b10(param_1 + 0xb,(undefined4 *)param_1[0xd],1,&fStack_bc);
      }
      else {
        puVar3 = (undefined4 *)param_1[0xd];
        FUN_00944bc0(puVar3,1,&fStack_bc);
        param_1[0xd] = (int)(puVar3 + 4);
      }
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
    local_f4 = local_f4 + 1;
    if (local_e0 < 2) {
      if (0x14 < local_e0) {
                    /* WARNING: Subroutine does not return */
        _free(local_e8);
      }
      local_e0 = 0x20;
      local_e8 = _malloc(0x20);
    }
    _strncpy(local_e8,"_",1);
    local_e4 = 1;
    local_e8[1] = '\0';
    if ((int)local_f4 < 10) {
      FUN_004073f0(&local_e8,"0",1);
    }
    puVar4 = FUN_00569d60(apvStack_6c,local_f4);
    puVar4 = FUN_004312e0(apvStack_4c,puVar4,".flm");
    FUN_004073f0(&local_e8,(char *)*puVar4,puVar4[1]);
    if (0x14 < uStack_44) break;
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_6c[0]);
    }
    puVar4 = FUN_0047aee0(apvStack_2c,param_1 + 0xf,&local_e8);
    _Count = puVar4[1];
    _Source = (char *)*puVar4;
    if (local_a4 <= _Count) {
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      local_a4 = _Count + 0x20 & 0xffffffe0;
      local_ac = _malloc(local_a4);
    }
    _strncpy(local_ac,_Source,_Count);
    local_ac[_Count] = '\0';
    uStack_a8 = _Count;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_4c[0]);
}


//// FUNCTION FUN_00946440 @ 00946440 ////

void __fastcall FUN_00946440(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00946470 @ 00946470 ////

void FUN_00946470(void)

{
  return;
}


//// FUNCTION FUN_009464b0 @ 009464b0 ////

void __fastcall FUN_009464b0(int *param_1)

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
  puStack_8 = &LAB_00cf3238;
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


//// FUNCTION FUN_00946580 @ 00946580 ////

long __fastcall FUN_00946580(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  char local_21;
  void *local_20;
  int local_1c;
  uint local_18;
  
  if (*(int *)(param_1 + 600) == -1) {
    *(undefined4 *)(param_1 + 600) = 0;
    if ((*(int *)(param_1 + 0xc0) != 0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 0x24c), iVar1 != 0)) {
      puVar2 = (undefined4 *)FUN_00528450(iVar1);
      FUN_00403de0(&local_20,puVar2);
      local_21 = *(char *)(local_1c + -1 + (int)local_20);
      lVar3 = _atol(&local_21);
      *(long *)(param_1 + 600) = lVar3;
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      return lVar3;
    }
  }
  return *(long *)(param_1 + 600);
}


//// FUNCTION FUN_009468a0 @ 009468a0 ////

void __fastcall FUN_009468a0(int param_1)

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
  puStack_8 = &LAB_00cf3290;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TrailerStarRoom.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x11;
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
  uVar3 = FUN_0098b490("TrailerID");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 500),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\TrailerStarRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x12;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x1f8));
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
    FUN_00990970((int *)(param_1 + 0x1f8));
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CTrailerStarRoom_Constructor @ 00946ab0 ////

undefined4 * __fastcall CTrailerStarRoom_Constructor(undefined4 *param_1)

{
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6ed9c;
  param_1[0x19] = &PTR_LAB_00d6ed7c;
  param_1[0x9a] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = param_1 + 0x97;
  param_1[0x97] = &PTR_FUN_00d26fd0;
  param_1[0x9c] = 0;
  param_1[0x96] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x1c9) = 0;
  return param_1;
}


//// FUNCTION FUN_00946b10 @ 00946b10 ////

void __fastcall FUN_00946b10(int param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  size_t sVar3;
  void *this_00;
  int iVar4;
  void *unaff_retaddr;
  char *pcStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  char acStack_60 [20];
  char acStack_4c [60];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf32be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x2e8);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0040b940(this,*(int *)(*(int *)(param_1 + 0xc0) + 0x24c));
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0xc4) + 4))();
  *(undefined4 **)(param_1 + 0xd8) = puVar2;
  (*(code *)**(undefined4 **)(param_1 + 0xc4))();
  pcStack_6c = acStack_60;
  acStack_60[0] = '\0';
  uStack_68 = 0;
  uStack_64 = 0x14;
  _strncpy(pcStack_6c,"ai_droptrailer",0xe);
  uStack_68 = 0xe;
  pcStack_6c[0xe] = '\0';
  local_4 = 1;
  FUN_00946580(param_1);
  sVar3 = _sprintf(acStack_4c,(char *)&param_2_00d1b93c);
  FUN_004073f0(&pcStack_6c,acStack_4c,sVar3);
  FUN_004073f0(&pcStack_6c,".flm",4);
  (**(code **)(**(int **)(param_1 + 0xd8) + 0xb0))();
  FUN_004031e0(*(void **)(param_1 + 0xd8),1);
  this_00 = operator_new(0x2b4);
  puStack_8._0_1_ = 2;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00402380(this_00,(int)unaff_retaddr,*(undefined4 *)(param_1 + 0xd8));
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  iVar4 = FUN_0059c530((int)unaff_retaddr);
  FUN_00401a00(puVar2,iVar4);
  TMCharacter_AddAction(unaff_retaddr,(int)puVar2);
  puVar2[0x90] = 2;
  FUN_00401a70((int)puVar2);
  puVar2 = *(undefined4 **)(param_1 + 0xd8);
  piVar1 = puVar2 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar2)();
  }
  if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00946ce0 @ 00946ce0 ////

undefined4 * __thiscall FUN_00946ce0(void *this,byte param_1)

{
  FUN_00946d00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00946d00 @ 00946d00 ////

void __fastcall FUN_00946d00(undefined4 *param_1)

{
  param_1[0x97] = &PTR_FUN_00d26fd0;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  TMRoom_Destructor(param_1);
  return;
}


//// FUNCTION CTrailerStarRoom_OnStarDropped @ 00946d80 ////

void __thiscall CTrailerStarRoom_OnStarDropped(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float fStack_50;
  char *pcStack_4c;
  int iStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf32d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    TMRoom_RegisterOccupant(this,piVar1);
    iVar4 = *(int *)((int)this + 0x270);
    iVar3 = (**(code **)(*piVar2 + 0x270))();
    if (iVar3 == iVar4) {
      FUN_00946b10((int)this);
    }
    else {
      iVar4 = FUN_0084b200(*(int *)((int)this + 0x270));
      if (iVar4 != 0) {
        iVar4 = *(int *)((int)this + 0x270);
        iVar3 = 0;
        uVar5 = FUN_0084b200(iVar4);
        FUN_00470a70(DAT_0104917c,iVar4,0x8000025c,uVar5,iVar3);
      }
      FUN_00470a70(DAT_0104917c,*(undefined4 *)((int)this + 0x270),0x80000234,piVar2,0);
      puVar6 = (undefined4 *)FUN_00528450(*(int *)((int)this + 0x270));
      pcStack_4c = acStack_40;
      acStack_40[0] = '\0';
      iStack_48 = 0;
      uStack_44 = 0x14;
      FUN_004015d0(&pcStack_4c,(char *)*puVar6,puVar6[1]);
      uStack_4 = 0;
      puVar6 = FUN_00430770(&pcStack_4c,apvStack_2c,iStack_48 - 1,0xffffffff);
      FUN_004015d0(&pcStack_4c,(char *)*puVar6,puVar6[1]);
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      iVar4 = FUN_00567d80(&pcStack_4c);
      if (iVar4 != 0) {
        if (uStack_44 < 0x11) {
          if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_4c);
          }
          uStack_44 = 0x20;
          pcStack_4c = _malloc(0x20);
        }
        _strncpy(pcStack_4c,"ai_assigntrailer",0x10);
        iStack_48 = 0x10;
        pcStack_4c[0x10] = '\0';
        FUN_004701b0(&pcStack_4c,iVar4);
        FUN_004073f0(&pcStack_4c,".flm",4);
        RoomObject_SetAIInteractionKey(this,&pcStack_4c);
        TMRoom_FinalizeSlotAssignment(this,param_1,0);
        puVar6 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x270) + 0x1cc))(&param_1);
        param_1 = (int *)*puVar6;
        pfVar7 = (float *)FUN_0084c3c0(&fStack_50,piVar2);
        FUN_009757a0(*(void **)(*(int *)((int)this + 0xd8) + 0x214),(byte *)"ai_reaction",
                     ((float)param_1 - *pfVar7) + 0.5,0);
      }
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_4c);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00946fd0 @ 00946fd0 ////

void __fastcall FUN_00946fd0(int param_1)

{
  int *piVar1;
  int *this;
  void *this_00;
  undefined4 *puVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_retaddr;
  char *pcStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  char acStack_60 [20];
  char acStack_4c [60];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3319;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x2e8);
  puVar6 = (undefined4 *)0x0;
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0040b940(this_00,*(int *)(*(int *)(param_1 + 0xc0) + 0x24c));
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0xc4) + 4))();
  *(undefined4 **)(param_1 + 0xd8) = puVar2;
  (*(code *)**(undefined4 **)(param_1 + 0xc4))();
  pcStack_6c = acStack_60;
  acStack_60[0] = '\0';
  uStack_68 = 0;
  uStack_64 = 0x14;
  _strncpy(pcStack_6c,"ai_droptrailer_both",0x13);
  uStack_68 = 0x13;
  pcStack_6c[0x13] = '\0';
  local_4 = 1;
  FUN_00946580(param_1);
  sVar3 = _sprintf(acStack_4c,(char *)&param_2_00d1b93c);
  FUN_004073f0(&pcStack_6c,acStack_4c,sVar3);
  FUN_004073f0(&pcStack_6c,".flm",4);
  (**(code **)(**(int **)(param_1 + 0xd8) + 0xb0))();
  this = *(int **)(*(int *)(param_1 + 0xf8) + 0x14);
  puVar2 = (undefined4 *)FUN_005998e0((int)this);
  TMCharacter_CancelAction(this,puVar2);
  pvVar4 = operator_new(0x2b4);
  puStack_8._0_1_ = 2;
  if (pvVar4 != (void *)0x0) {
    puVar6 = FUN_00402380(pvVar4,(int)this,*(undefined4 *)(param_1 + 0xd8));
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  iVar5 = FUN_0059c530((int)unaff_retaddr);
  FUN_00401a00(puVar6,iVar5);
  TMCharacter_AddAction(this,(int)puVar6);
  puVar6[0x90] = 2;
  FUN_00401a70((int)puVar6);
  FUN_0059c8e0(this,&DAT_00d2061c);
  if (unaff_retaddr[0x128] != this[0x128]) {
    FUN_004031c0(*(void **)(param_1 + 0xd8),1);
  }
  FUN_004031e0(*(void **)(param_1 + 0xd8),2);
  pvVar4 = operator_new(0x2b4);
  puStack_8._0_1_ = 3;
  if (pvVar4 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_00402380(pvVar4,(int)unaff_retaddr,*(undefined4 *)(param_1 + 0xd8));
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  iVar5 = FUN_0059c530((int)unaff_retaddr);
  FUN_00401a00(puVar6,iVar5);
  TMCharacter_AddAction(unaff_retaddr,(int)puVar6);
  puVar6[0x90] = 2;
  FUN_00401a70((int)puVar6);
  puVar6 = *(undefined4 **)(param_1 + 0xd8);
  piVar1 = puVar6 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar6)();
  }
  FUN_0059c8e0(unaff_retaddr,&DAT_00d2061c);
  FUN_004f1e30(*(int **)(param_1 + 0xd8),unaff_retaddr,this,5);
  if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_009472a0 @ 009472a0 ////

void __fastcall FUN_009472a0(int param_1)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    pcVar4 = "p_icon_new.msh";
    if (*(char *)(param_1 + 0x1fc) == '\0') {
      pcVar4 = "p_icon_new_red.msh";
    }
    pcVar2 = pcVar4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((undefined4 *)(param_1 + 0x200),pcVar4,(int)pcVar2 - (int)(pcVar4 + 1));
    pbVar3 = FUN_009de1d0(*(char **)(param_1 + 0x200),1);
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x18))(pbVar3);
    if (pbVar3 != (byte *)0x0) {
      FUN_009de3b0(pbVar3);
    }
    *(undefined1 *)(param_1 + 0x160) = 1;
    *(undefined1 *)(param_1 + 0x15f) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x160) = 1;
  *(undefined1 *)(param_1 + 0x15f) = 1;
  return;
}


//// FUNCTION CInfoObject_Constructor @ 00947350 ////

undefined4 * __fastcall CInfoObject_Constructor(undefined4 *param_1)

{
  CRoomPlaceObject_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6eedc;
  param_1[0x1e] = &PTR_FUN_00d6eebc;
  param_1[0x28] = &PTR_FUN_00d6eea4;
  FUN_004015d0(param_1 + 0x6f,"INFO_FLY_TO_LOCATION",0x14);
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)((int)param_1 + 0x15f) = 1;
  return param_1;
}


//// FUNCTION FUN_009473a0 @ 009473a0 ////

void __thiscall FUN_009473a0(void *this,byte param_1)

{
  FUN_009473b0((void *)((int)this + -0x78),param_1);
  return;
}


//// FUNCTION FUN_009473b0 @ 009473b0 ////

undefined4 * __thiscall FUN_009473b0(void *this,byte param_1)

{
  thunk_FUN_00947680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00947490 @ 00947490 ////

void __fastcall FUN_00947490(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_009474d0 @ 009474d0 ////

void FUN_009474d0(void)

{
  return;
}


//// FUNCTION FUN_009474e0 @ 009474e0 ////

void __fastcall FUN_009474e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00947510 @ 00947510 ////

void FUN_00947510(void)

{
  return;
}


//// FUNCTION FUN_00947530 @ 00947530 ////

void __fastcall FUN_00947530(int *param_1)

{
  bool bVar1;
  undefined4 uStack_8;
  int *piStack_4;
  
  (**(code **)(*param_1 + 0xd0))();
  FUN_005386c0((int)param_1);
  if ((param_1[0x47] != 0) && (*(char *)((int)param_1 + 0x1fd) != '\0')) {
    uStack_8 = 2;
    piStack_4 = param_1;
    bVar1 = FUN_00413cc0(DAT_00f87aa0);
    if (!bVar1) {
      (**(code **)(*(int *)param_1[0x47] + 0x10))(&uStack_8,1);
    }
  }
  return;
}


//// FUNCTION FUN_00947590 @ 00947590 ////

void __fastcall FUN_00947590(int *param_1)

{
  FUN_0053a3a0(param_1);
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_00947640 @ 00947640 ////

undefined4 __fastcall FUN_00947640(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0053a280(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = (**(code **)(*(int *)(param_1 + -0x78) + 0xdc))();
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00947680 @ 00947680 ////

void __fastcall FUN_00947680(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f044;
  param_1[0x1e] = &PTR_LAB_00d6f024;
  param_1[0x28] = &PTR_FUN_00d6f00c;
  if (0x14 < (uint)param_1[0x82]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x80]);
  }
  FUN_0053bbe0(param_1);
  return;
}


//// FUNCTION FUN_00947770 @ 00947770 ////

void __fastcall FUN_00947770(int *param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined1 local_c [12];
  
  piVar3 = (int *)param_1[0x8d];
  if (piVar3 != (int *)0x0) {
    if (piVar3 == DAT_0104c6c8) {
LAB_00947795:
      *(undefined1 *)((int)param_1 + 0x1fd) = 1;
    }
    else if (piVar3 != (int *)0x0) {
      if (piVar3[0x7e] == 1) goto LAB_00947795;
      if (piVar3 != (int *)0x0) {
        pfVar4 = (float *)(param_1 + 0x40);
        this = (void *)(**(code **)(*piVar3 + 0x34))(local_c);
        uVar1 = FUN_004294e0(this,pfVar4);
        if ((char)uVar1 != '\0') {
          *(undefined1 *)((int)param_1 + 0x1fd) = 0;
        }
      }
    }
  }
  if (param_1[0x8d] != 0) {
    iVar2 = FUN_005d1940(param_1[0x8d]);
    piVar3 = (int *)FUN_005b22a0(iVar2);
    iVar2 = (**(code **)(*piVar3 + 0x24))();
    if (iVar2 == 7) goto LAB_009477f4;
  }
  piVar3 = param_1 + 0x12;
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    (**(code **)*param_1)(1);
  }
LAB_009477f4:
  FUN_0053a3a0(param_1);
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_00947810 @ 00947810 ////

void __fastcall FUN_00947810(int *param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  if ((int *)param_1[0x8d] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x8d] + 0x34))(local_c);
    param_1[0x42] = *(int *)(iVar1 + 8);
  }
  (**(code **)(*param_1 + 0xd0))();
  FUN_005386c0((int)param_1);
  if (((int *)param_1[0x47] != (int *)0x0) && (*(char *)((int)param_1 + 0x1fd) != '\0')) {
    (**(code **)(*(int *)param_1[0x47] + 0x10))(0,1);
  }
  return;
}


//// FUNCTION FUN_00947870 @ 00947870 ////

void __fastcall FUN_00947870(int *param_1)

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
  puStack_8 = &LAB_00cf3338;
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


//// FUNCTION FUN_00947940 @ 00947940 ////

void __fastcall FUN_00947940(int *param_1)

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
  puStack_8 = &LAB_00cf3358;
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


//// FUNCTION CRoomPlaceObject_Constructor @ 00947a10 ////

undefined4 * __fastcall CRoomPlaceObject_Constructor(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3386;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053ba80(param_1);
  *param_1 = &PTR_FUN_00d6f044;
  param_1[0x1e] = &PTR_LAB_00d6f024;
  param_1[0x28] = &PTR_FUN_00d6f00c;
  param_1[0x80] = param_1 + 0x83;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0x14;
  local_4 = 1;
  puVar1 = FUN_00433eb0();
  param_1[0x47] = puVar1;
  puVar1[0x27] = puVar1[0x27] | 0x4000000;
  *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) | 0x80;
  *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) | 2;
  FUN_0097e330((void *)param_1[0x47],1);
  *(undefined1 *)((int)param_1 + 0x15d) = 0;
  *(undefined1 *)((int)param_1 + 0x15e) = 0;
  *(undefined1 *)((int)param_1 + 0x1fd) = 1;
  *(undefined1 *)(param_1 + 0x7f) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00947ae0 @ 00947ae0 ////

undefined4 * __thiscall FUN_00947ae0(void *this,byte param_1)

{
  FUN_00947680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00947cb0 @ 00947cb0 ////

undefined4 * __fastcall FUN_00947cb0(undefined4 *param_1)

{
  CRoomPlaceObject_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6f1b4;
  param_1[0x1e] = &PTR_LAB_00d6f190;
  param_1[0x28] = &PTR_FUN_00d6f178;
  param_1[0x8b] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = param_1 + 0x88;
  param_1[0x88] = &PTR_FUN_00d29d20;
  param_1[0x8d] = 0;
  *(undefined1 *)((int)param_1 + 0x1fd) = 0;
  return param_1;
}


//// FUNCTION FUN_00947d20 @ 00947d20 ////

undefined4 * __thiscall FUN_00947d20(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  void **ppvVar4;
  void *local_1c [2];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf33c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_1c[0] = this;
  CRoomPlaceObject_Constructor(this);
  *(undefined ***)this = &PTR_FUN_00d6f1b4;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d6f190;
  *(undefined ***)((int)this + 0xa0) = &PTR_FUN_00d6f178;
  piVar3 = (int *)((int)this + 0x224);
  *(undefined4 *)((int)this + 0x22c) = 0;
  *piVar3 = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 **)((int)this + 0x22c) = (undefined4 *)((int)this + 0x220);
  *(undefined4 *)((int)this + 0x220) = &PTR_FUN_00d29d20;
  *(int *)((int)this + 0x234) = param_1;
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x228) = piVar1;
    *piVar3 = *piVar1;
    *(int **)(*piVar1 + 4) = piVar3;
    *piVar1 = (int)piVar3;
  }
  piVar3 = *(int **)((int)this + 0x234);
  local_4 = 1;
  uVar2 = (**(code **)(*piVar3 + 0x4c))(&param_1);
  ppvVar4 = local_1c;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x34))(ppvVar4,uVar2);
  FUN_0053a1e0(this,piVar3,(int *)ppvVar4);
  *(undefined1 *)((int)this + 0x1fd) = 0;
  ExceptionList = pvStack_14;
  return this;
}


//// FUNCTION FUN_00947df0 @ 00947df0 ////

undefined4 * __thiscall FUN_00947df0(void *this,byte param_1)

{
  FUN_00947e10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00947e10 @ 00947e10 ////

void __fastcall FUN_00947e10(undefined4 *param_1)

{
  param_1[0x88] = &PTR_FUN_00d29d20;
  if ((undefined4 *)param_1[0x8a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8a] = param_1[0x89];
  }
  if (param_1[0x89] != 0) {
    *(undefined4 *)(param_1[0x89] + 4) = param_1[0x8a];
  }
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  if ((undefined4 *)param_1[0x8a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8a] = param_1[0x89];
  }
  if (param_1[0x89] != 0) {
    *(undefined4 *)(param_1[0x89] + 4) = param_1[0x8a];
  }
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *param_1 = &PTR_FUN_00d6f044;
  param_1[0x1e] = &PTR_LAB_00d6f024;
  param_1[0x28] = &PTR_FUN_00d6f00c;
  if (0x14 < (uint)param_1[0x82]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x80]);
  }
  FUN_0053bbe0(param_1);
  return;
}


//// FUNCTION FUN_00947f80 @ 00947f80 ////

undefined4 * __thiscall FUN_00947f80(void *this,undefined4 param_1)

{
  FUN_00999750(this);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_00d6f328;
  return this;
}


//// FUNCTION FUN_00947fa0 @ 00947fa0 ////

void __fastcall FUN_00947fa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f328;
  FUN_00999aa0(param_1);
  return;
}


//// FUNCTION FUN_00947fc0 @ 00947fc0 ////

void FUN_00947fc0(void)

{
  return;
}


//// FUNCTION FUN_00948030 @ 00948030 ////

int __fastcall FUN_00948030(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}


//// FUNCTION FUN_00948390 @ 00948390 ////

void __cdecl FUN_00948390(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 10;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 10; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_009483e0 @ 009483e0 ////

void __cdecl FUN_009483e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00948420 @ 00948420 ////

void __cdecl FUN_00948420(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_00948810 @ 00948810 ////

undefined4 * __thiscall FUN_00948810(void *this,byte param_1)

{
  FUN_00947fa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00948830 @ 00948830 ////

void __fastcall FUN_00948830(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00f87aa0 != 0) {
    bVar2 = FUN_00413cc0(DAT_00f87aa0);
    if (!bVar2) {
      iVar1 = *(int *)(param_1 + 0x18);
      FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
      FUN_009e6680(*(int **)(iVar1 + 0x110));
    }
  }
  return;
}


//// FUNCTION FUN_00948870 @ 00948870 ////

void __thiscall FUN_00948870(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * 0.6 + 0.4;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0xac) = fVar1;
  *(float *)((int)this + 0xb0) = param_1 * 0.3 + 0.2;
  *(float *)((int)this + 200) = param_1 * 0.00135 + 0.00015;
  *(float *)((int)this + 0xd0) = param_1 * 0.00045000002 + 5e-05;
  *(float *)((int)this + 0x148) = (DAT_00e66088 - 0.05) * param_1 + 0.05;
  return;
}


//// FUNCTION FUN_00948920 @ 00948920 ////

void __thiscall FUN_00948920(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return;
}


//// FUNCTION FUN_00948980 @ 00948980 ////

void FUN_00948980(float *param_1,float *param_2)

{
  float10 fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 1.0;
  fVar1 = (float10)FUN_00ad1010();
  if ((float10)1e-30 <= ABS(fVar1)) {
    local_8 = param_2[1];
    local_4 = (float)((fVar1 - (float10)1.5707964) / fVar1);
    local_18 = *param_2 * local_4;
    local_14 = local_8 * local_4;
    local_4 = (param_2[2] - 1.0) * local_4;
    local_10 = local_4 + 1.0;
    FUN_00412e20(&local_18);
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}


//// FUNCTION FUN_00948cf0 @ 00948cf0 ////

void __cdecl FUN_00948cf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -10;
    param_3 = param_3 + -10;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00948d60 @ 00948d60 ////

void __cdecl FUN_00948d60(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00948dc0 @ 00948dc0 ////

void __cdecl FUN_00948dc0(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_00948e80 @ 00948e80 ////

void __cdecl FUN_00948e80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00948f20 @ 00948f20 ////

void __cdecl FUN_00948f20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (*param_2 < *param_1) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = fVar1;
    param_1[1] = fVar2;
  }
  if (*param_3 < *param_2) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = fVar1;
    param_2[1] = fVar2;
  }
  if (*param_2 < *param_1) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = fVar1;
    param_1[1] = fVar2;
  }
  return;
}


//// FUNCTION FUN_00948f90 @ 00948f90 ////

void __cdecl FUN_00948f90(int param_1,int param_2,int param_3,float param_4,undefined4 param_5)

{
  int iVar1;
  
  while ((param_3 < param_2 &&
         (iVar1 = (param_2 + -1) / 2, *(float *)(param_1 + iVar1 * 8) < param_4))) {
    *(undefined4 *)(param_1 + param_2 * 8) = *(undefined4 *)(param_1 + iVar1 * 8);
    *(undefined4 *)(param_1 + 4 + param_2 * 8) = *(undefined4 *)(param_1 + 4 + iVar1 * 8);
    param_2 = iVar1;
  }
  *(float *)(param_1 + param_2 * 8) = param_4;
  *(undefined4 *)(param_1 + 4 + param_2 * 8) = param_5;
  return;
}


//// FUNCTION FUN_00948ff0 @ 00948ff0 ////

void __cdecl FUN_00948ff0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 **ppuVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *local_10;
  undefined4 *local_c [3];
  
  puVar6 = param_3;
  iVar10 = (int)param_3 - param_1 >> 3;
  iVar11 = param_2 - param_1 >> 3;
  iVar8 = iVar11;
  param_2 = iVar10;
  while (iVar3 = iVar8, iVar3 != 0) {
    iVar8 = param_2 % iVar3;
    param_2 = iVar3;
  }
  if ((param_2 < iVar10) && (0 < param_2)) {
    puVar12 = (undefined4 *)(param_1 + param_2 * 8);
    do {
      uVar1 = puVar12[1];
      uVar2 = *puVar12;
      if (puVar12 + iVar11 * 2 == puVar6) {
        ppuVar9 = (undefined4 **)&param_1;
      }
      else {
        param_3 = puVar12 + iVar11 * 2;
        ppuVar9 = &param_3;
      }
      puVar7 = *ppuVar9;
      puVar5 = puVar12;
      while (puVar4 = puVar7, puVar4 != puVar12) {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        iVar8 = (int)puVar6 - (int)puVar4 >> 3;
        if (iVar11 < iVar8) {
          local_10 = puVar4 + iVar11 * 2;
          ppuVar9 = &local_10;
        }
        else {
          local_c[0] = (undefined4 *)(param_1 + (iVar8 * 0x1fffffff + iVar11) * 8);
          ppuVar9 = local_c;
        }
        puVar5 = puVar4;
        puVar7 = *ppuVar9;
      }
      puVar12 = puVar12 + -2;
      param_2 = param_2 + -1;
      *puVar5 = uVar2;
      puVar5[1] = uVar1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00949100 @ 00949100 ////

void __fastcall FUN_00949100(int *param_1)

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


//// FUNCTION FUN_009491d0 @ 009491d0 ////

void * FUN_009491d0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00949230 @ 00949230 ////

void __cdecl FUN_00949230(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009492c0 @ 009492c0 ////

void __cdecl FUN_009492c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3 + 4;
    puVar2 = param_1 + 4;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        param_3[1] = param_1[1];
        param_3[2] = param_1[2];
        puVar1[-1] = puVar2[-1];
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        puVar1[3] = puVar2[3];
        puVar1[4] = puVar2[4];
        puVar1[5] = puVar2[5];
      }
      param_1 = param_1 + 10;
      param_3 = param_3 + 10;
      puVar1 = puVar1 + 10;
      puVar2 = puVar2 + 10;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00949350 @ 00949350 ////

void __cdecl FUN_00949350(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00948f20(param_1,param_1 + iVar1 * 2,param_1 + iVar1 * 4);
    FUN_00948f20(param_2 + iVar1 * -2,param_2,param_2 + iVar1 * 2);
    FUN_00948f20(param_3 + iVar1 * -4,param_3 + iVar1 * -2,param_3);
    FUN_00948f20(param_1 + iVar1 * 2,param_2,param_3 + iVar1 * -2);
    return;
  }
  FUN_00948f20(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_009493e0 @ 009493e0 ////

void __cdecl FUN_009493e0(int param_1,int param_2,int param_3,float param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(float *)(param_1 + iVar1 * 8) < *(float *)(param_1 + -8 + iVar1 * 8)) {
      iVar1 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 8) = *(undefined4 *)(param_1 + iVar1 * 8);
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = *(undefined4 *)(param_1 + 4 + iVar1 * 8);
    iVar2 = iVar1;
  }
  if (iVar1 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
    iVar2 = param_3 + -1;
  }
  FUN_00948f90(param_1,iVar2,param_2,param_4,param_5);
  return;
}


//// FUNCTION FUN_009495f0 @ 009495f0 ////

void __fastcall FUN_009495f0(int param_1)

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


//// FUNCTION FUN_00949660 @ 00949660 ////

undefined4 * FUN_00949660(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00949700 @ 00949700 ////

void __cdecl FUN_00949700(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + 4;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        puVar1[-1] = param_3[3];
        *puVar1 = param_3[4];
        puVar1[1] = param_3[5];
        puVar1[2] = param_3[6];
        puVar1[3] = param_3[7];
        puVar1[4] = param_3[8];
        puVar1[5] = param_3[9];
      }
      param_1 = param_1 + 10;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_009497a0 @ 009497a0 ////

void __cdecl FUN_009497a0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  
  pfVar6 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1) * 2;
  FUN_00949350(param_2,pfVar6,param_3 + -2);
  for (pfVar7 = pfVar6; ((param_2 < pfVar7 && (*pfVar7 <= pfVar7[-2])) && (pfVar7[-2] <= *pfVar7));
      pfVar7 = pfVar7 + -2) {
  }
  do {
    pfVar6 = pfVar6 + 2;
    pfVar8 = pfVar6;
    pfVar4 = pfVar7;
    if ((param_3 <= pfVar6) || (*pfVar6 < *pfVar7)) break;
  } while (*pfVar6 <= *pfVar7);
joined_r0x00949824:
  do {
    pfVar3 = pfVar7;
    if (param_3 <= pfVar6) {
joined_r0x0094986e:
      for (; param_2 < pfVar3; pfVar3 = pfVar3 + -2) {
        pfVar9 = pfVar7 + -2;
        pfVar5 = pfVar4;
        if (*pfVar4 <= *pfVar9) {
          if (*pfVar4 < *pfVar9) break;
          fVar1 = pfVar4[-1];
          fVar2 = pfVar4[-2];
          pfVar5 = pfVar4 + -2;
          *pfVar5 = *pfVar9;
          pfVar4[-1] = pfVar7[-1];
          *pfVar9 = fVar2;
          pfVar7[-1] = fVar1;
        }
        pfVar7 = pfVar9;
        pfVar4 = pfVar5;
      }
      if (pfVar3 == param_2) {
        if (pfVar6 == param_3) {
          param_1[1] = pfVar8;
          *param_1 = pfVar4;
          return;
        }
        if (pfVar8 != pfVar6) {
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = *pfVar8;
          pfVar4[1] = pfVar8[1];
          *pfVar8 = fVar1;
          pfVar8[1] = fVar2;
        }
        fVar1 = *pfVar4;
        fVar2 = pfVar4[1];
        *pfVar4 = *pfVar6;
        pfVar4[1] = pfVar6[1];
        *pfVar6 = fVar1;
        pfVar6[1] = fVar2;
        pfVar6 = pfVar6 + 2;
        pfVar8 = pfVar8 + 2;
        pfVar7 = pfVar3;
        pfVar4 = pfVar4 + 2;
      }
      else {
        pfVar7 = pfVar3 + -2;
        if (pfVar6 == param_3) {
          pfVar5 = pfVar4 + -2;
          if (pfVar7 != pfVar5) {
            fVar1 = *pfVar7;
            fVar2 = pfVar3[-1];
            *pfVar7 = *pfVar5;
            pfVar3[-1] = pfVar4[-1];
            *pfVar5 = fVar1;
            pfVar4[-1] = fVar2;
          }
          fVar1 = *pfVar5;
          fVar2 = pfVar4[-1];
          *pfVar5 = pfVar8[-2];
          pfVar4[-1] = pfVar8[-1];
          pfVar8[-2] = fVar1;
          pfVar8[-1] = fVar2;
          pfVar8 = pfVar8 + -2;
          pfVar4 = pfVar5;
        }
        else {
          fVar1 = pfVar6[1];
          fVar2 = *pfVar6;
          *pfVar6 = *pfVar7;
          pfVar6[1] = pfVar3[-1];
          pfVar6 = pfVar6 + 2;
          *pfVar7 = fVar2;
          pfVar3[-1] = fVar1;
        }
      }
      goto joined_r0x00949824;
    }
    if (*pfVar6 <= *pfVar4) {
      if (*pfVar6 < *pfVar4) goto joined_r0x0094986e;
      fVar1 = pfVar8[1];
      fVar2 = *pfVar8;
      *pfVar8 = *pfVar6;
      pfVar8[1] = pfVar6[1];
      pfVar8 = pfVar8 + 2;
      *pfVar6 = fVar2;
      pfVar6[1] = fVar1;
    }
    pfVar6 = pfVar6 + 2;
  } while( true );
}


//// FUNCTION FUN_00949990 @ 00949990 ////

void __cdecl FUN_00949990(int param_1,int param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2 - param_1 >> 3;
  iVar4 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    iVar5 = param_1 + iVar4 * 8;
    do {
      puVar1 = (undefined4 *)(iVar5 + -4);
      pfVar2 = (float *)(iVar5 + -8);
      iVar5 = iVar5 + -8;
      iVar4 = iVar4 + -1;
      FUN_009493e0(param_1,iVar4,iVar3,*pfVar2,*puVar1);
    } while (0 < iVar4);
  }
  return;
}


//// FUNCTION FUN_00949a50 @ 00949a50 ////

void __fastcall FUN_00949a50(int param_1)

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


//// FUNCTION FUN_00949a90 @ 00949a90 ////

void __fastcall FUN_00949a90(int param_1)

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


//// FUNCTION FUN_00949ac0 @ 00949ac0 ////

undefined4 * FUN_00949ac0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00949230(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_00949af0 @ 00949af0 ////

void __thiscall FUN_00949af0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar2 = param_2;
    while (param_3 != puVar1) {
      puVar3 = param_3 + 10;
      puVar5 = puVar2 + 10;
      puVar6 = param_3;
      puVar7 = puVar2;
      for (iVar4 = 10; puVar2 = puVar5, param_3 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00949bd0 @ 00949bd0 ////

void __cdecl FUN_00949bd0(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  
  pfVar2 = param_1;
  if (param_1 != param_2) {
    while (pfVar1 = pfVar2, pfVar2 = pfVar1 + 2, pfVar2 != param_2) {
      pfVar4 = pfVar2;
      pfVar3 = param_1;
      if (*param_1 <= *pfVar2) {
        do {
          pfVar3 = pfVar4;
          pfVar4 = pfVar3 + -2;
        } while (*pfVar2 < *pfVar4);
      }
      if ((pfVar3 != pfVar2) && (pfVar2 != pfVar1 + 4)) {
        FUN_00948ff0((int)pfVar3,(int)pfVar2,pfVar1 + 4);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00949c90 @ 00949c90 ////

void __fastcall FUN_00949c90(int param_1)

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


//// FUNCTION FUN_00949cf0 @ 00949cf0 ////

undefined4 * FUN_00949cf0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00949700(param_1,param_2,param_3);
  return param_1 + param_2 * 10;
}


//// FUNCTION FUN_00949d20 @ 00949d20 ////

void __fastcall FUN_00949d20(int param_1)

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


//// FUNCTION FUN_00949d50 @ 00949d50 ////

void __thiscall FUN_00949d50(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00949d90 @ 00949d90 ////

void __cdecl FUN_00949d90(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  
  for (iVar3 = param_2 - (int)param_1; 1 < iVar3 >> 3; iVar3 = iVar3 + -8) {
    uVar1 = *(undefined4 *)((int)param_1 + iVar3 + -4);
    fVar2 = *(float *)((int)param_1 + iVar3 + -8);
    *(undefined4 *)((int)param_1 + iVar3 + -8) = *param_1;
    *(undefined4 *)((int)param_1 + iVar3 + -4) = param_1[1];
    FUN_009493e0((int)param_1,0,iVar3 + -8 >> 3,fVar2,uVar1);
  }
  return;
}


//// FUNCTION FUN_00949de0 @ 00949de0 ////

void __fastcall FUN_00949de0(int param_1)

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


//// FUNCTION FUN_00949e10 @ 00949e10 ////

void __fastcall FUN_00949e10(int param_1)

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


//// FUNCTION FUN_00949e40 @ 00949e40 ////

void __cdecl FUN_00949e40(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float *local_8;
  float *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 3;
    if (iVar2 < 0x21) {
LAB_00949ec3:
      if (1 < iVar2) {
        FUN_00949bd0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (8 < (int)((int)param_2 - (int)param_1 & 0xfffffff8U)) {
          FUN_00949990((int)param_1,(int)param_2);
        }
        FUN_00949d90(param_1,(int)param_2);
        return;
      }
      goto LAB_00949ec3;
    }
    FUN_009497a0(&local_8,param_1,param_2);
    pfVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffff8U) <
        (int)((int)param_2 - (int)local_4 & 0xfffffff8U)) {
      FUN_00949e40(param_1,local_8,param_3);
      param_1 = pfVar1;
    }
    else {
      FUN_00949e40(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00949f10 @ 00949f10 ////

void __fastcall FUN_00949f10(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Memory;
  undefined1 uVar3;
  LONG LVar4;
  int iVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf3437;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6f344;
  local_4 = 7;
  (**(code **)(*(int *)param_1[0x22] + 0x1c))();
  (**(code **)(*(int *)param_1[0x23] + 0x1c))();
  puVar2 = (undefined4 *)param_1[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x22] = 0;
  puVar2 = (undefined4 *)param_1[0x23];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x23] = 0;
  if (*(void **)param_1[0x4c] != (void *)0x0) {
    FUN_0099b400(*(void **)param_1[0x4c]);
    *(undefined4 *)param_1[0x4c] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x43];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0x43] = 0;
  }
  _Memory = *(void **)(param_1[0x44] + 0x40);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1[0x44] + 0x40) = 0;
  puVar2 = (undefined4 *)param_1[0x44];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0x44] = 0;
  }
  iVar6 = 0;
  while( true ) {
    if (param_1[0x54] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(param_1[0x55] - param_1[0x54]) >> 3;
    }
    if (iVar5 <= iVar6) break;
    puVar2 = *(undefined4 **)(iVar6 * 8 + param_1[0x54] + 4);
    if ((puVar2 != (undefined4 *)0x0) && (puVar2 != (undefined4 *)0x0)) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(param_1[0x54] + iVar6 * 8 + 4) = 0;
    }
    iVar6 = iVar6 + 1;
  }
  if ((void *)param_1[0x54] == (void *)0x0) {
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    if ((void *)param_1[0x4c] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x4c]);
    }
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    if ((void *)param_1[0x46] == (void *)0x0) {
      param_1[0x46] = 0;
      param_1[0x47] = 0;
      param_1[0x48] = 0;
      if ((void *)param_1[0x3f] == (void *)0x0) {
        param_1[0x3f] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        puVar2 = (undefined4 *)param_1[0x23];
        local_4._0_1_ = 2;
        if (puVar2 != (undefined4 *)0x0) {
          piVar1 = puVar2 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(1);
          }
        }
        param_1[0x23] = 0;
        puVar2 = (undefined4 *)param_1[0x22];
        local_4 = CONCAT31(local_4._1_3_,1);
        if (puVar2 != (undefined4 *)0x0) {
          piVar1 = puVar2 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(1);
          }
        }
        param_1[0x22] = 0;
        if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[0x1f] = param_1[0x1e];
        }
        if (param_1[0x1e] != 0) {
          *(undefined4 *)(param_1[0x1e] + 4) = param_1[0x1f];
        }
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        local_4 = 0xffffffff;
        FUN_0053ddb0(param_1);
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x3f]);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x46]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x54]);
}


//// FUNCTION FUN_0094a1c0 @ 0094a1c0 ////

void __fastcall FUN_0094a1c0(int param_1,undefined4 param_2)

{
  void *_Memory;
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  if ((*(uint *)(param_1 + 0xa8) & 1) == 0) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1;
    uVar5 = FUN_00990ae0(param_1,param_2);
    fVar2 = (float)(int)uVar5;
    if ((int)uVar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0xc0) = fVar2;
    iVar4 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x150) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x150) >> 3;
      }
      _Memory = *(void **)(param_1 + 0x150);
      if (iVar3 <= iVar4) break;
      puVar1 = *(undefined4 **)((int)_Memory + iVar4 * 8 + 4);
      if ((puVar1 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)0x0)) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(*(int *)(param_1 + 0x150) + iVar4 * 8 + 4) = 0;
      }
      iVar4 = iVar4 + 1;
    }
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  return;
}


//// FUNCTION FUN_0094a280 @ 0094a280 ////

void __fastcall FUN_0094a280(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6f36c;
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


//// FUNCTION FUN_0094a2d0 @ 0094a2d0 ////

undefined4 * __thiscall FUN_0094a2d0(void *this,byte param_1)

{
  FUN_0094a280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094a2f0 @ 0094a2f0 ////

void FUN_0094a2f0(void)

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
  puStack_8 = &LAB_00cf3458;
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


//// FUNCTION FUN_0094a360 @ 0094a360 ////

void FUN_0094a360(void)

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
  puStack_8 = &LAB_00cf3478;
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


//// FUNCTION FUN_0094a3d0 @ 0094a3d0 ////

void FUN_0094a3d0(void)

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
  puStack_8 = &LAB_00cf3498;
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


//// FUNCTION FUN_0094a460 @ 0094a460 ////

undefined4 * __thiscall FUN_0094a460(void *this,byte param_1)

{
  FUN_00949f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094a570 @ 0094a570 ////

void __thiscall FUN_0094a570(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf34b0;
  local_10 = ExceptionList;
  iVar3 = *(int *)((int)this + 4);
  local_3c = *param_3;
  local_38 = param_3[1];
  local_34 = param_3[2];
  local_30 = param_3[3];
  local_2c = param_3[4];
  local_28 = param_3[5];
  local_24 = param_3[6];
  local_20 = param_3[7];
  local_1c = param_3[8];
  local_18 = param_3[9];
  local_14 = &stack0xffffffb8;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x28;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x28;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffb8;
    if (0x6666666U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_0094a2f0();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x28;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x6666666 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x28;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_00948030((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x28);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_009492c0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00949700(puVar5,param_2,&local_3c);
      FUN_009492c0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 10);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x28;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 10;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 10;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0x28) < param_2) {
      FUN_009492c0(param_1,puVar4,param_1 + param_2 * 10);
      local_8 = 2;
      FUN_00949cf0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x28,&local_3c)
      ;
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x28;
      *(int *)((int)this + 8) = iVar3;
      FUN_00948390(param_1,(undefined4 *)(iVar3 + param_2 * -0x28),&local_3c);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_009492c0(puVar4 + param_2 * -10,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00948cf0(param_1,puVar4 + param_2 * -10,puVar4);
    FUN_00948390(param_1,param_1 + param_2 * 10,&local_3c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0094a860 @ 0094a860 ////

void __thiscall FUN_0094a860(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0094a360();
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
      _Dst = FUN_00949660((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009491d0(param_1,iVar5,param_1 + param_2);
      FUN_00949660(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009483e0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009491d0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00948d60(param_1,(int)pvVar3,iVar5);
    FUN_009483e0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0094aa40 @ 0094aa40 ////

void __thiscall FUN_0094aa40(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cf34c0;
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
      uVar2 = FUN_0094a3d0();
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
      puVar5 = (undefined4 *)FUN_00948e80(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00949230(puVar5,param_2,&local_20);
      FUN_00948e80(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_00948e80(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_00949ac0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_00948420(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00948e80(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00948dc0((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_00948420(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0094acc0 @ 0094acc0 ////

void __thiscall FUN_0094acc0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x28;
  }
  if (param_1 <= uVar1) {
    if ((iVar2 != 0) && (param_1 < (uint)(((int)*(undefined4 **)((int)this + 8) - iVar2) / 0x28))) {
      FUN_00949af0(this,&param_1,(undefined4 *)(iVar2 + param_1 * 0x28),
                   *(undefined4 **)((int)this + 8));
    }
    return;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x28;
  }
  FUN_0094a570(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_0094ad60 @ 0094ad60 ////

void __thiscall FUN_0094ad60(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x28 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x28;
      goto LAB_0094ada5;
    }
  }
  iVar1 = 0;
LAB_0094ada5:
  FUN_0094a570(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x28;
  return;
}


//// FUNCTION FUN_0094add0 @ 0094add0 ////

void __thiscall FUN_0094add0(void *this,uint param_1)

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
    FUN_0094a860(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
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


//// FUNCTION FUN_0094ae60 @ 0094ae60 ////

void __thiscall FUN_0094ae60(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 3;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 3;
    }
    FUN_0094aa40(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if ((iVar2 != 0) && (param_1 < (uint)((int)*(undefined4 **)((int)this + 8) - iVar2 >> 3))) {
    FUN_00949d50(this,&param_1,(undefined4 *)(iVar2 + param_1 * 8),*(undefined4 **)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_0094af60 @ 0094af60 ////

void __thiscall FUN_0094af60(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x28) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x28))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00949700(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 10;
    return;
  }
  FUN_0094ad60(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0094b030 @ 0094b030 ////

void __thiscall FUN_0094b030(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00949230(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_0094aa40(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0094b0a0 @ 0094b0a0 ////

void FUN_0094b0a0(void)

{
  float *pfVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0046ec60(&DAT_01050620,8);
  local_c = 0;
  do {
    fVar3 = (float10)local_c;
    pfVar1 = (float *)(DAT_01050624 + local_c * 2);
    local_c = local_c + 1;
    fVar4 = (float10)fsin(fVar3 * (float10)0.7853982);
    fVar3 = (float10)fcos(fVar3 * (float10)0.7853982);
    *pfVar1 = (float)fVar4;
    pfVar1[1] = (float)fVar3;
    puVar2 = DAT_01050628;
  } while (local_c < 8);
  local_8 = *DAT_01050624;
  local_4 = DAT_01050624[1];
  if ((uint)((int)DAT_01050628 - (int)DAT_01050624 >> 3) <
      (uint)(DAT_0105062c - (int)DAT_01050624 >> 3)) {
    FUN_0046deb0(DAT_01050628,1,&local_8);
    DAT_01050628 = puVar2 + 2;
    return;
  }
  FUN_0046e9b0(&DAT_01050620,DAT_01050628,1,&local_8);
  return;
}


//// FUNCTION FUN_0094b170 @ 0094b170 ////

void __fastcall FUN_0094b170(int param_1)

{
  void *this;
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [8];
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x88) + 0x10))(local_40);
  pfVar8 = (float *)(**(code **)(*piVar1 + 0x10))(&fStack_50);
  fVar2 = *pfVar8 - *pfVar7;
  fVar5 = pfVar8[1] - pfVar7[1];
  fVar4 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + (pfVar8[2] - pfVar7[2]) * (pfVar8[2] - pfVar7[2]));
  fVar3 = 1.0 / fVar4;
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x88) + 0x10))(&fStack_48);
  fStack_34 = *pfVar7;
  fStack_30 = pfVar7[1];
  fStack_2c = pfVar7[2];
  this = (void *)(param_1 + 0x114);
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_0094af60(this,&fStack_34);
  uVar14 = FUN_00acd42c();
  iVar9 = 0;
  if (0 < (int)uVar14) {
    do {
      iVar9 = iVar9 + 1;
      fVar6 = (float)iVar9;
      pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x88) + 0x10))(local_40);
      fStack_34 = fVar4 * fVar6 + *pfVar7;
      uStack_18 = 0;
      uStack_14 = 0;
      fStack_30 = fVar3 * fVar2 * 10.0 * fVar6 + pfVar7[1];
      uStack_10 = 0;
      fStack_50 = fVar5 * fVar3 * 10.0 * fVar6 + pfVar7[2];
      fStack_2c = fStack_50;
      fVar11 = FUN_00990e30(4.0,12.0);
      fStack_28 = (float)fVar11;
      fVar11 = FUN_00990e30(0.001,1.0);
      fVar12 = FUN_00990e30(-1.0,1.0);
      fVar13 = FUN_00990e30(-1.0,1.0);
      fStack_4c = (float)fVar13;
      fStack_48 = (float)fVar12;
      fStack_44 = (float)fVar11;
      fStack_24 = fStack_4c;
      fStack_20 = (float)fVar12;
      fStack_1c = (float)fVar11;
      FUN_00412e20(&fStack_24);
      FUN_0094af60(this,&fStack_34);
    } while (iVar9 < (int)uVar14);
  }
  puVar10 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x8c) + 0x10))(local_40);
  uStack_38 = *puVar10;
  fStack_34 = (float)puVar10[1];
  fStack_30 = (float)puVar10[2];
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_0094af60(this,&uStack_38);
  iVar9 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar9 = (*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28;
  }
  FUN_0040f4c0((void *)(param_1 + 0xf8),iVar9 - 1);
  if (*(int *)(param_1 + 0x118) != 0) {
    *(int *)(param_1 + 0xf4) =
         ((*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28) * 5 + -5;
    return;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0xfffffffb;
  return;
}


//// FUNCTION FUN_0094b4a0 @ 0094b4a0 ////

void __fastcall FUN_0094b4a0(int param_1)

{
  float *pfVar1;
  void *this;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  int local_78;
  int local_74;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [10];
  
  pfVar11 = *(float **)(param_1 + 0x118);
  pfVar1 = (float *)(param_1 + 0x90);
  *pfVar11 = *pfVar1;
  pfVar11[1] = *(float *)(param_1 + 0x94);
  pfVar11[2] = *(float *)(param_1 + 0x98);
  iVar9 = *(int *)(param_1 + 0x11c);
  *(float *)(iVar9 + -0x28) = *(float *)(param_1 + 0x9c);
  *(undefined4 *)(iVar9 + -0x24) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(iVar9 + -0x20) = *(undefined4 *)(param_1 + 0xa4);
  fVar4 = *(float *)(param_1 + 0x9c) - *pfVar1;
  fVar3 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x94);
  fVar2 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x98);
  fVar5 = 1.0 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = fVar5 * fVar4 * 10.0;
  fVar4 = fVar3 * fVar5 * 10.0;
  fVar5 = fVar2 * fVar5 * 10.0;
  uVar15 = FUN_00acd42c();
  local_74 = (int)uVar15;
  this = (void *)(param_1 + 0x114);
  iVar9 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar9 = (*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28;
  }
  iVar9 = iVar9 + -2;
  if (local_74 < iVar9) {
    FUN_00948920(&local_50,(undefined4 *)(*(int *)(param_1 + 0x11c) + -0x28));
    FUN_0094acc0(this,local_74 + 1);
    puVar16 = &local_50;
  }
  else {
    if (local_74 <= iVar9) goto LAB_0094b728;
    FUN_00948920(local_28,(undefined4 *)(*(int *)(param_1 + 0x11c) + -0x28));
    if ((*(int *)(param_1 + 0x118) != 0) &&
       ((*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28 != 0)) {
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + -0x28;
    }
    local_74 = local_74 - iVar9;
    if (0 < local_74) {
      do {
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        fVar12 = FUN_00990e30(4.0,12.0);
        local_44 = (float)fVar12;
        fVar12 = FUN_00990e30(0.001,1.0);
        fVar13 = FUN_00990e30(-1.0,1.0);
        fVar14 = FUN_00990e30(-1.0,1.0);
        local_40 = (float)fVar14;
        local_3c = (float)fVar13;
        local_38 = (float)fVar12;
        FUN_00412e20(&local_40);
        FUN_0094af60(this,&local_50);
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
    puVar16 = local_28;
  }
  FUN_0094af60(this,puVar16);
LAB_0094b728:
  iVar9 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar9 = (*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28;
  }
  local_78 = 1;
  if (3 < iVar9 + -2) {
    local_74 = 3;
    iVar10 = 0x28;
    do {
      fVar7 = (float)local_78;
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + iVar10);
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar7 + *pfVar1;
      pfVar11[1] = fVar4 * fVar7 + fVar2;
      pfVar11[2] = fVar5 * fVar7 + fVar3;
      fVar7 = (float)(local_74 + -1);
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + 0x28 + iVar10);
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar7 + *pfVar1;
      pfVar11[1] = fVar4 * fVar7 + fVar2;
      fVar8 = (float)local_74;
      pfVar11[2] = fVar5 * fVar7 + fVar3;
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + 0x50 + iVar10);
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar8 + *pfVar1;
      pfVar11[1] = fVar4 * fVar8 + fVar2;
      pfVar11[2] = fVar5 * fVar8 + fVar3;
      fVar7 = (float)(local_74 + 1);
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + iVar10 + 0x78);
      local_78 = local_78 + 4;
      local_74 = local_74 + 4;
      iVar10 = iVar10 + 0xa0;
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar7 + *pfVar1;
      pfVar11[1] = fVar4 * fVar7 + fVar2;
      pfVar11[2] = fVar5 * fVar7 + fVar3;
    } while (local_78 < iVar9 + -4);
  }
  if (local_78 < iVar9 + -1) {
    iVar10 = local_78 * 0x28;
    do {
      fVar7 = (float)local_78;
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + iVar10);
      local_78 = local_78 + 1;
      iVar10 = iVar10 + 0x28;
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar7 + *pfVar1;
      pfVar11[1] = fVar4 * fVar7 + fVar2;
      pfVar11[2] = fVar5 * fVar7 + fVar3;
    } while (local_78 < iVar9 + -1);
  }
  return;
}


//// FUNCTION CameraPath_GenerateSplineWithShake @ 0094b990 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CameraPath_GenerateSplineWithShake(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  short sVar10;
  undefined4 *puVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 extraout_ST0;
  ulonglong uVar21;
  float local_21c;
  float local_218;
  float local_214;
  void *local_210;
  int local_20c;
  float *local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  int *local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined4 local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined1 local_18c [4];
  void *local_188;
  float *local_184;
  int local_180;
  undefined1 local_17c [4];
  void *local_178;
  float *local_174;
  int local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined1 local_148 [4];
  void *local_144;
  int local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0;
  float local_9c;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_70;
  float local_64;
  float local_58;
  float local_4c;
  float local_40;
  float local_34;
  float local_30;
  float local_24;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Moderate confidence: generates a camera path between waypoints
                       (this+0x118/+0x11c array) using cubic-ish blending plus sinusoidal
                       shake/wobble (amplitude terms multiplied by sin() at multiple frequencies),
                       computing per-segment arc length and appending each point via the
                       already-named SpawnPointList_Append. Likely a cinematic camera
                       dolly/flythrough path generator. Not fully traced -- name is content-based,
                       not RTTI-verified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf34f1;
  local_c = ExceptionList;
  fVar3 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x90);
  fVar6 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x94);
  fVar4 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x98);
  local_1b4 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4);
  if (ABS(local_1b4 - *(float *)(param_1 + 0xe0)) <= 1.0) {
    ExceptionList = &local_c;
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) * 0.9;
  }
  else {
    fVar3 = _DAT_01050630 + *(float *)(param_1 + 0xe8);
    ExceptionList = &local_c;
    *(float *)(param_1 + 0xe8) = fVar3;
    if (0.0 < fVar3) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
  }
  fVar3 = (float)DAT_0105beb8 * _DAT_00e66074 + *(float *)(param_1 + 0x108);
  *(float *)(param_1 + 0x108) = fVar3;
  local_160 = _DAT_01050614 * fVar3;
  local_154 = _DAT_0105061c * fVar3 + *(float *)(param_1 + 0xe8);
  local_150 = _DAT_01050618 * fVar3 + *(float *)(param_1 + 0xe8);
  local_f0 = local_160 + *(float *)(param_1 + 0xe8);
  local_14c = fVar3 * _DAT_00e6608c + *(float *)(param_1 + 0xe8);
  if (*(int *)(param_1 + 0x118) == 0) {
    local_208 = (float *)0x0;
  }
  else {
    local_208 = (float *)((*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28);
  }
  local_210 = (void *)((int)local_208 >> 1);
  local_218 = 0.0;
  if (0 < (int)local_208) {
    iVar17 = 0;
    local_204 = (float)-(int)local_210;
    local_200 = 1.0 / (float)((int)local_210 + 1);
    local_21c = 0.0;
    local_1d8 = (int *)(1.0 / (1.0 / (float)(int)local_210));
    do {
      local_214 = (float)(int)local_218;
      fVar3 = (float)(int)local_218 * 10.0;
      local_160 = _DAT_01050614 * fVar3;
      local_1c4 = _DAT_0105061c * fVar3 + local_154;
      fVar18 = (float10)fsin((float10)(_DAT_01050618 * fVar3) + (float10)local_150);
      fVar19 = (float10)fsin((float10)local_160 + (float10)local_f0);
      fVar20 = (float10)fsin((float10)local_1c4);
      local_210 = (void *)(float)fVar20;
      local_12c = (float)fVar19;
      local_128 = (float)fVar18;
      local_124 = (float)local_210;
      FUN_00412e20(&local_12c);
      fVar18 = (float10)fsin((float10)local_214 * (float10)_DAT_00e6608c * (float10)10.0 +
                             (float10)local_14c);
      if (-3 < (int)local_21c) {
        fVar19 = ABS((float10)(int)local_21c) * (float10)0.5 + (float10)0.1;
        if ((float10)0.0 <= fVar19) {
          if ((float10)1.0 < fVar19) {
            fVar19 = (float10)1.0;
          }
        }
        else {
          fVar19 = (float10)0.0;
        }
        fVar18 = fVar19 * fVar18;
      }
      local_1d4 = 1.0;
      if (local_218 == (float)((int)local_208 + -2)) {
        iVar15 = *(int *)(param_1 + 0x118);
        fVar3 = *(float *)(iVar15 + 8 + iVar17) - *(float *)(param_1 + 0xa4);
        fVar6 = *(float *)(iVar15 + 4 + iVar17) - *(float *)(param_1 + 0xa0);
        fVar4 = *(float *)(iVar15 + iVar17) - *(float *)(param_1 + 0x9c);
        local_1d4 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4) * 0.1;
      }
      iVar15 = *(int *)(param_1 + 0x118);
      local_cc = local_12c + *(float *)(iVar15 + 0x10 + iVar17);
      local_90 = local_cc * 0.5;
      local_214 = (1.0 - ABS((float)(int)local_204) * local_200) * (float)local_1d8;
      if (1.0 < local_214) {
        local_214 = 1.0;
      }
      local_214 = local_214 * local_214;
      if ((-1 < (int)local_21c) || (local_218 == (float)((int)local_208 + -1))) {
        local_214 = 0.0;
      }
      local_214 = local_214 * 5.0;
      pfVar13 = (float *)(iVar15 + 0x1c + iVar17);
      local_1f0 = 0.0;
      local_1ec = 0.0;
      local_1e8 = 0.0;
      local_20c = 0;
      fVar18 = (float10)local_1d4 * (float10)*(float *)(iVar15 + 0xc + iVar17) * fVar18;
      local_210 = (void *)(float)((float10)((local_124 + *(float *)(iVar15 + 0x18 + iVar17)) * 0.5)
                                 * fVar18);
      local_1c4 = (float)((float10)((local_128 + *(float *)(iVar15 + 0x14 + iVar17)) * 0.5) * fVar18
                         );
      local_84 = (float)((float10)local_90 * fVar18);
      local_10c = (float)local_210 + *(float *)(iVar15 + 8 + iVar17);
      local_110 = local_1c4 + *(float *)(iVar15 + 4 + iVar17);
      local_114 = local_84 + *(float *)(iVar15 + iVar17);
      *pfVar13 = local_114;
      pfVar13[1] = local_110;
      pfVar13[2] = local_10c;
      pfVar13 = (float *)(*(int *)(param_1 + 0x118) + 0x24 + iVar17);
      *pfVar13 = local_214 * local_1d4 + *pfVar13;
      pfVar13 = (float *)(*(int *)(param_1 + 0x118) + 0x1c + iVar17);
      local_16c = *pfVar13;
      local_168 = pfVar13[1];
      local_164 = pfVar13[2];
      pvVar9 = FUN_00459e40(DAT_00f88720,&local_16c,50.0);
      if (*(int *)((int)pvVar9 + 4) == 0) {
        local_214 = 0.0;
      }
      else {
        local_214 = (float)(*(int *)((int)pvVar9 + 8) - *(int *)((int)pvVar9 + 4) >> 2);
      }
      iVar15 = 0;
      if (0 < (int)local_214) {
        do {
          (**(code **)(**(int **)(*(int *)((int)pvVar9 + 4) + iVar15 * 4) + 0x34))(&local_198);
          fVar3 = *(float *)(param_1 + 0xa4) - local_190;
          fVar6 = *(float *)(param_1 + 0xa0) - local_194;
          fVar4 = *(float *)(param_1 + 0x9c) - local_198;
          if (900.0 < fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6) {
            fStack_1a8 = local_164 - local_190;
            fStack_1ac = local_168 - local_194;
            local_1b0 = local_16c - local_198;
            local_138 = local_1b0;
            local_134 = fStack_1ac;
            local_130 = fStack_1a8;
            if (1e-30 < ABS(fStack_1a8 + fStack_1ac + local_1b0)) {
              fVar3 = *(float *)(param_1 + 0x90) - local_198;
              fVar6 = *(float *)(param_1 + 0x94) - local_194;
              fVar4 = *(float *)(param_1 + 0x98) - local_190;
              fVar3 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4);
              if (20.0 < fVar3) {
                fVar3 = 20.0;
              }
              fVar4 = SQRT(local_1b0 * local_1b0 + fStack_1ac * fStack_1ac + fStack_1a8 * fStack_1a8
                          );
              if (fVar4 < fVar3) {
                fVar4 = 1.0 / fVar4;
                local_20c = local_20c + 1;
                local_1e4 = local_1b0 * fVar4 * fVar3;
                local_1e0 = fVar4 * fStack_1ac * fVar3 - fStack_1ac;
                local_1dc = fVar3 * fVar4 * fStack_1a8 - fStack_1a8;
                local_1f0 = (local_1e4 - local_1b0) + local_1f0;
                local_1ec = local_1e0 + local_1ec;
                local_1e8 = local_1dc + local_1e8;
              }
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_214);
      }
      local_210 = FUN_0045a060(DAT_00f88720,&local_16c,50.0);
      if (*(int *)((int)local_210 + 4) == 0) {
        local_214 = 0.0;
      }
      else {
        local_214 = (float)(*(int *)((int)local_210 + 8) - *(int *)((int)local_210 + 4) >> 2);
      }
      iVar15 = 0;
      if (0 < (int)local_214) {
        do {
          (**(code **)(**(int **)(*(int *)((int)local_210 + 4) + iVar15 * 4) + 0x34))(&local_1a4);
          fVar3 = *(float *)(param_1 + 0xa4) - local_19c;
          fVar4 = *(float *)(param_1 + 0xa0) - local_1a0;
          fVar6 = *(float *)(param_1 + 0x9c) - local_1a4;
          if (900.0 < fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4) {
            local_1f4 = local_164 - local_19c;
            local_1f8 = local_168 - local_1a0;
            local_1fc = local_16c - local_1a4;
            local_e4 = local_1fc;
            local_e0 = local_1f8;
            local_dc = local_1f4;
            if (1e-30 < ABS(local_1f4 + local_1f8 + local_1fc)) {
              fVar3 = *(float *)(param_1 + 0x90) - local_1a4;
              fVar6 = *(float *)(param_1 + 0x94) - local_1a0;
              fVar4 = *(float *)(param_1 + 0x98) - local_19c;
              fVar3 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4);
              if (20.0 < fVar3) {
                fVar3 = 20.0;
              }
              fVar4 = SQRT(local_1fc * local_1fc + local_1f8 * local_1f8 + local_1f4 * local_1f4);
              if (fVar4 < fVar3) {
                fVar4 = 1.0 / fVar4;
                local_20c = local_20c + 1;
                local_1d0 = local_1fc * fVar4 * fVar3;
                local_1cc = fVar4 * local_1f8 * fVar3 - local_1f8;
                local_1c8 = fVar3 * fVar4 * local_1f4 - local_1f4;
                local_1f0 = (local_1d0 - local_1fc) + local_1f0;
                local_1ec = local_1cc + local_1ec;
                local_1e8 = local_1c8 + local_1e8;
              }
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_214);
      }
      if (0 < local_20c) {
        iVar15 = *(int *)(param_1 + 0x118);
        fVar3 = 1.0 / (float)local_20c;
        local_1ec = fVar3 * local_1ec;
        local_1e8 = fVar3 * local_1e8;
        *(float *)(iVar15 + 0x1c + iVar17) = local_1f0 * fVar3 + *(float *)(iVar15 + 0x1c + iVar17);
        *(float *)(iVar15 + 0x20 + iVar17) = local_1ec + *(float *)(iVar15 + 0x20 + iVar17);
        pfVar13 = (float *)(iVar15 + 0x24 + iVar17);
        *pfVar13 = local_1e8 + *pfVar13;
      }
      local_218 = (float)((int)local_218 + 1);
      local_21c = (float)((int)local_21c + -1);
      local_204 = (float)((int)local_204 + 1);
      iVar17 = iVar17 + 0x28;
    } while ((int)local_218 < (int)local_208);
  }
  pfVar13 = local_208;
  FUN_0040f4c0((void *)(param_1 + 0xf8),(int)local_208 - 1);
  iVar17 = 0;
  local_1d4 = (float)((int)pfVar13 + -1);
  if (0 < (int)local_1d4) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0xfc) + iVar17 * 4) = 5;
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)local_1d4);
  }
  pvVar9 = (void *)0x0;
  iVar17 = 0;
  local_21c = 0.0;
  local_144 = (void *)0x0;
  local_140 = 0;
  local_13c = 0;
  pfVar13 = (float *)0x0;
  local_188 = (void *)0x0;
  local_184 = (float *)0x0;
  local_180 = 0;
  local_178 = (void *)0x0;
  local_174 = (float *)0x0;
  local_170 = 0;
  local_4 = 2;
  local_20c = 0;
  if (0 < (int)local_1d4) {
    iVar17 = 0;
    do {
      iVar15 = local_20c;
      local_1d8 = (int *)(*(int *)(param_1 + 0xfc) + local_20c * 4);
      local_200 = 1.0 / (float)*(int *)(*(int *)(param_1 + 0xfc) + local_20c * 4);
      pfVar13 = local_184;
      if (local_20c == (int)local_1d4 + -1) {
        iVar2 = *(int *)(param_1 + 0x118) + local_20c * 0x28;
        local_1a4 = *(float *)(iVar2 + 0x1c);
        local_1a0 = *(float *)(iVar2 + 0x20);
        local_19c = *(float *)(iVar2 + 0x24);
        local_e4 = *(float *)(iVar2 + 0x44);
        local_e0 = *(float *)(iVar2 + 0x48);
        local_dc = *(float *)(iVar2 + 0x4c);
        local_204 = 0.0;
        if (0 < *local_1d8) {
          local_114 = local_e4 - local_1a4;
          local_110 = local_e0 - local_1a0;
          local_10c = local_dc - local_19c;
          do {
            local_218 = 0.0;
            fVar3 = (float)(int)local_204 * local_200;
            local_80 = fVar3 * local_110;
            local_7c = fVar3 * local_10c;
            local_138 = local_114 * fVar3 + local_1a4;
            local_134 = local_80 + local_1a0;
            local_130 = local_7c + local_19c;
            if ((pvVar9 != (void *)0x0) &&
               (local_1b0 = (float)((iVar17 - (int)pvVar9) / 0xc), local_1b0 != 0.0)) {
              local_16c = *(float *)(iVar17 + -0xc);
              local_168 = *(float *)(iVar17 + -8);
              local_164 = *(float *)(iVar17 + -4);
              local_218 = SQRT((local_134 - local_168) * (local_134 - local_168) +
                               (local_138 - local_16c) * (local_138 - local_16c) +
                               (local_130 - local_164) * (local_130 - local_164));
            }
            local_21c = local_218 + local_21c;
            if ((local_188 == (void *)0x0) ||
               ((uint)(local_180 - (int)local_188 >> 2) <=
                (uint)((int)pfVar13 - (int)local_188 >> 2))) {
              FUN_00481520(local_18c,pfVar13,1,&local_218);
            }
            else {
              *pfVar13 = local_218;
              local_184 = pfVar13 + 1;
            }
            pfVar13 = local_184;
            if ((local_178 == (void *)0x0) ||
               ((uint)(local_170 - (int)local_178 >> 2) <=
                (uint)((int)local_174 - (int)local_178 >> 2))) {
              FUN_00481520(local_17c,local_174,1,&local_21c);
            }
            else {
              *local_174 = local_21c;
              local_174 = local_174 + 1;
            }
            SpawnPointList_Append(local_148,&local_138);
            local_204 = (float)((int)local_204 + 1);
            pvVar9 = local_144;
            iVar17 = local_140;
          } while ((int)local_204 < *(int *)(*(int *)(param_1 + 0xfc) + iVar15 * 4));
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x118);
        if (local_20c == 0) {
          local_10 = *(float *)(iVar2 + 0x4c) - *(float *)(iVar2 + 0x24);
          local_1fc = *(float *)(iVar2 + 0x1c) -
                      (*(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x1c));
          local_1f8 = *(float *)(iVar2 + 0x20) -
                      (*(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x20));
          local_1f4 = *(float *)(iVar2 + 0x24) - local_10;
          local_1d0 = local_1fc;
          local_1cc = local_1f8;
          local_1c8 = local_1f4;
        }
        else {
          iVar1 = iVar2 + -0x28 + local_20c * 0x28;
          local_1fc = *(float *)(iVar1 + 0x1c);
          local_1f8 = *(float *)(iVar1 + 0x20);
          local_1f4 = *(float *)(iVar1 + 0x24);
        }
        local_b8 = local_1fc * -0.5;
        iVar1 = iVar2 + local_20c * 0x28;
        local_1e4 = *(float *)(iVar1 + 0x1c);
        local_b4 = local_1f8 * -0.5;
        local_1e0 = *(float *)(iVar1 + 0x20);
        local_1dc = *(float *)(iVar1 + 0x24);
        local_1f0 = *(float *)(iVar1 + 0x44);
        local_1ec = *(float *)(iVar1 + 0x48);
        local_1e8 = *(float *)(iVar1 + 0x4c);
        iVar2 = iVar2 + (local_20c * 5 + 10) * 8;
        local_ac = *(float *)(iVar2 + 0x1c);
        local_198 = local_ac * 0.5;
        local_a8 = *(float *)(iVar2 + 0x20);
        local_a4 = *(float *)(iVar2 + 0x24);
        local_194 = local_a8 * 0.5;
        local_214 = 0.0;
        local_190 = local_a4 * 0.5;
        if (0 < *local_1d8) {
          local_34 = local_1e8 * 0.5;
          local_d8 = local_1f0 * 0.5 + local_b8;
          local_d4 = local_1ec * 0.5 + local_b4;
          local_d0 = local_34 + local_1f4 * -0.5;
          local_40 = local_1e8 + local_1e8;
          local_58 = local_1dc * 2.5;
          local_90 = local_1fc - local_1e4 * 2.5;
          local_88 = local_1f4 - local_58;
          local_30 = local_90 + local_1f0 + local_1f0;
          local_108 = local_30 - local_198;
          local_104 = ((local_1f8 - local_1e0 * 2.5) + local_1ec + local_1ec) - local_194;
          local_100 = (local_88 + local_40) - local_190;
          local_4c = local_1e8 * 1.5;
          local_64 = local_1dc * 1.5;
          local_cc = local_1e4 * 1.5 + local_b8;
          local_c4 = local_64 + local_1f4 * -0.5;
          local_24 = local_cc - local_1f0 * 1.5;
          local_fc = local_24 + local_198;
          local_f8 = ((local_1e0 * 1.5 + local_b4) - local_1ec * 1.5) + local_194;
          local_f4 = (local_c4 - local_4c) + local_190;
          do {
            local_208 = (float *)0x0;
            local_118 = (float)(int)local_214 * local_200;
            fVar3 = local_118 * local_118;
            local_204 = fVar3 * local_118;
            local_120 = local_118 * local_d8;
            local_11c = local_d4 * local_118;
            local_118 = local_d0 * local_118;
            local_f0 = local_108 * fVar3;
            local_ec = local_104 * fVar3;
            local_70 = local_f4 * local_204;
            local_160 = local_204 * local_fc + local_f0;
            local_158 = local_70 + local_100 * fVar3;
            local_9c = local_160 + local_120;
            local_12c = local_9c + local_1e4;
            local_128 = local_f8 * local_204 + local_ec + local_11c + local_1e0;
            local_124 = local_158 + local_118 + local_1dc;
            if ((pvVar9 != (void *)0x0) &&
               (local_1b0 = (float)((iVar17 - (int)pvVar9) / 0xc), local_1b0 != 0.0)) {
              local_1c0 = *(float *)(iVar17 + -0xc);
              local_1bc = *(float *)(iVar17 + -8);
              local_1b8 = *(float *)(iVar17 + -4);
              local_208 = (float *)SQRT((local_128 - local_1bc) * (local_128 - local_1bc) +
                                        (local_12c - local_1c0) * (local_12c - local_1c0) +
                                        (local_124 - local_1b8) * (local_124 - local_1b8));
            }
            local_21c = (float)local_208 + local_21c;
            if ((local_188 == (void *)0x0) ||
               ((uint)(local_180 - (int)local_188 >> 2) <=
                (uint)((int)pfVar13 - (int)local_188 >> 2))) {
              FUN_00481520(local_18c,pfVar13,1,&local_208);
            }
            else {
              *pfVar13 = (float)local_208;
              local_184 = pfVar13 + 1;
            }
            pfVar13 = local_184;
            if ((local_178 == (void *)0x0) ||
               ((uint)(local_170 - (int)local_178 >> 2) <=
                (uint)((int)local_174 - (int)local_178 >> 2))) {
              FUN_00481520(local_17c,local_174,1,&local_21c);
            }
            else {
              *local_174 = local_21c;
              local_174 = local_174 + 1;
            }
            SpawnPointList_Append(local_148,&local_12c);
            local_214 = (float)((int)local_214 + 1);
            pvVar9 = local_144;
            iVar17 = local_140;
          } while ((int)local_214 < *(int *)(*(int *)(param_1 + 0xfc) + iVar15 * 4));
        }
      }
      local_20c = iVar15 + 1;
    } while (local_20c < (int)local_1d4);
  }
  local_218 = 0.0;
  if ((pvVar9 != (void *)0x0) &&
     (local_1b0 = (float)((iVar17 - (int)pvVar9) / 0xc), local_1b0 != 0.0)) {
    local_1b8 = *(float *)(iVar17 + -4);
    local_1c0 = *(float *)(iVar17 + -0xc);
    local_1bc = *(float *)(iVar17 + -8);
    iVar17 = *(int *)(param_1 + 0x11c);
    fVar3 = *(float *)(iVar17 + -0xc) - local_1c0;
    fVar4 = *(float *)(iVar17 + -8) - local_1bc;
    fVar6 = *(float *)(iVar17 + -4) - local_1b8;
    local_218 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6);
  }
  local_21c = local_218 + local_21c;
  if ((local_188 == (void *)0x0) ||
     ((uint)(local_180 - (int)local_188 >> 2) <= (uint)((int)pfVar13 - (int)local_188 >> 2))) {
    FUN_00481520(local_18c,pfVar13,1,&local_218);
  }
  else {
    *pfVar13 = local_218;
    local_184 = pfVar13 + 1;
  }
  if ((local_178 == (void *)0x0) ||
     ((uint)(local_170 - (int)local_178 >> 2) <= (uint)((int)local_174 - (int)local_178 >> 2))) {
    FUN_00481520(local_17c,local_174,1,&local_21c);
  }
  else {
    *local_174 = local_21c;
    local_174 = local_174 + 1;
  }
  SpawnPointList_Append(local_148,(undefined4 *)(*(int *)(param_1 + 0x11c) + -0xc));
  if (local_144 == (void *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = (local_140 - (int)local_144) / 0xc;
  }
  local_20c = iVar17;
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    iVar15 = 0;
    if (-1 < *(int *)(param_1 + 0x144)) {
      do {
        iVar2 = iVar15 * 8;
        iVar1 = iVar15 * 8;
        iVar15 = iVar15 + 1;
        *(float *)(*(int *)(param_1 + 0x150) + iVar1) =
             *(float *)(*(int *)(param_1 + 0x150) + iVar2) + *(float *)(param_1 + 0x148);
      } while (iVar15 <= *(int *)(param_1 + 0x144));
    }
    local_200 = 0.0;
    if (-1 < *(int *)(param_1 + 0x144)) {
      do {
        local_1d8 = (int *)((int)local_200 * 8);
        puVar11 = (undefined4 *)((int)local_1d8 + *(int *)(param_1 + 0x150));
        if (*(float *)((int)local_1d8 + *(int *)(param_1 + 0x150)) <= local_21c) {
          local_200 = (float)((int)local_200 + 1);
        }
        else {
          pvVar9 = (void *)puVar11[1];
          uVar5 = *puVar11;
          FUN_009afab0(pvVar9,0);
          iVar17 = *(int *)(param_1 + 0x150);
          iVar15 = *(int *)(param_1 + 0x144);
          *(undefined4 *)((int)local_1d8 + iVar17) = *(undefined4 *)(iVar17 + iVar15 * 8);
          *(undefined4 *)((int)local_1d8 + iVar17 + 4) = *(undefined4 *)(iVar17 + iVar15 * 8 + 4);
          puVar11 = (undefined4 *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x144) * 8);
          *puVar11 = uVar5;
          puVar11[1] = pvVar9;
          *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
          iVar17 = local_20c;
        }
      } while ((int)local_200 <= *(int *)(param_1 + 0x144));
    }
    pfVar13 = *(float **)(param_1 + 0x150);
    FUN_00949e40(pfVar13,pfVar13 + *(int *)(param_1 + 0x144) * 2 + 2,
                 (int)(pfVar13 + *(int *)(param_1 + 0x144) * 2 + 2) - (int)pfVar13 >> 3);
    iVar15 = *(int *)(param_1 + 0x144);
    local_200 = (float)(iVar17 + -2);
    if (-1 < (int)local_200) {
      pfVar13 = (float *)((int)local_144 + (int)local_200 * 0xc + 0x14);
      do {
        if (iVar15 < 0) break;
        local_218 = *(float *)((int)local_178 + (int)local_200 * 4);
        local_1d8 = (int *)((int)local_200 * 4);
        iVar2 = iVar15 * 8;
        fVar3 = *(float *)(*(int *)(param_1 + 0x150) + iVar2);
        while (local_218 <= fVar3) {
          iVar17 = *(int *)(*(int *)(param_1 + 0x150) + iVar2 + 4);
          fVar6 = (*(float *)(*(int *)(param_1 + 0x150) + iVar2) - local_218) /
                  (*(float *)((int)(local_1d8 + 1) + (int)local_178) - local_218);
          fVar7 = 1.0 - fVar6;
          local_160 = fVar7 * pfVar13[-5];
          local_15c = fVar7 * pfVar13[-4];
          fVar3 = pfVar13[-3];
          fVar4 = pfVar13[-1];
          local_94 = fVar6 * *pfVar13;
          local_1c0 = fVar6 * pfVar13[-2] + local_160;
          *(float *)(iVar17 + 0x10) = local_1c0;
          local_1bc = fVar6 * fVar4 + local_15c;
          *(float *)(iVar17 + 0x14) = local_1bc;
          local_1b8 = local_94 + fVar7 * fVar3;
          *(float *)(iVar17 + 0x18) = local_1b8;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x150) + iVar2 + 4) + 0x20) =
               *(undefined4 *)(param_1 + 0xac);
          fVar3 = *(float *)(param_1 + 0xb0);
          if (0.0 <= fVar3) {
            if (1.0 < fVar3) {
              fVar3 = 1.0;
            }
          }
          else {
            fVar3 = 0.0;
          }
          iVar15 = iVar15 + -1;
          *(float *)(*(int *)(*(int *)(param_1 + 0x150) + iVar2 + 4) + 0x1c) = fVar3 * 1.5;
          iVar17 = local_20c;
          if (iVar15 < 0) break;
          iVar2 = iVar15 * 8;
          fVar3 = *(float *)(*(int *)(param_1 + 0x150) + iVar2);
        }
        local_200 = (float)((int)local_200 + -1);
        pfVar13 = pfVar13 + -3;
      } while (-1 < (int)local_200);
    }
  }
  local_1b0 = (float)(iVar17 * 9 - *(int *)((int)*(void **)(param_1 + 0x110) + 0x18));
  FUN_009e6720(*(void **)(param_1 + 0x110),iVar17 * 9,iVar17 * 0x10 + -0x10);
  uVar21 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  local_c0 = (float)uVar21;
  uVar21 = FUN_00acd42c();
  iVar15 = (int)uVar21;
  if (iVar17 + 10 < (int)uVar21) {
    iVar15 = iVar17 + 10;
  }
  local_200 = local_21c * 0.05;
  local_14c = local_21c - local_200;
  local_210 = (void *)(local_21c * 0.1);
  local_154 = local_21c - (float)local_210;
  fVar3 = local_1b4 - *(float *)(param_1 + 0xe0);
  if (fVar3 <= 1.0) {
    if (-1.0 <= fVar3) {
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) * 0.9;
    }
    else {
      fVar3 = *(float *)(param_1 + 0xe4) + 0.3;
      *(float *)(param_1 + 0xe4) = fVar3;
      if (0.0 < fVar3) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0xe4) - 0.3;
    *(float *)(param_1 + 0xe4) = fVar3;
    if (fVar3 < -0.45) {
      *(undefined4 *)(param_1 + 0xe4) = 0xbee66666;
    }
  }
  local_204 = 1.0;
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    local_1d8 = *(int **)(param_1 + 0x128);
    if ((int)local_1d8 < 1) goto LAB_0094d22e;
    fVar18 = (float10)(int)local_1d8 * (float10)0.001;
  }
  else {
    fVar18 = (extraout_ST0 - (float10)*(float *)(param_1 + 0xc0)) /
             (float10)*(float *)(param_1 + 0xbc);
  }
  fVar18 = (float10)1.0 - fVar18;
  if ((float10)0.0 <= fVar18) {
    if ((float10)1.0 < fVar18) {
      fVar18 = (float10)1.0;
    }
  }
  else {
    fVar18 = (float10)0.0;
  }
  local_204 = (float)fVar18;
LAB_0094d22e:
  pfVar13 = *(float **)(*(int *)(param_1 + 0x110) + 0x28);
  local_21c = 0.0;
  local_218 = 0.0;
  local_1c4 = local_200;
  local_150 = (float)local_210;
  if (0 < iVar17) {
    local_208 = (float *)((int)local_144 + 0x14);
    local_1d8 = (int *)(iVar15 + -10);
    local_a0 = 10 - iVar15;
    do {
      fVar3 = local_218;
      local_21c = local_21c + *(float *)((int)local_188 + (int)local_218 * 4);
      if ((int)local_1d8 <= (int)local_218) {
        local_1b4 = (float)(local_a0 + (int)local_218);
      }
      uVar21 = FUN_00acd42c();
      local_1b4 = (float)uVar21;
      iVar17 = *(int *)(*(int *)(param_1 + 0x130) + *(int *)(param_1 + 0xd4) * 4);
      if ((iVar17 == 0) || ((*(byte *)(iVar17 + 0x54) & 8) == 0)) {
        local_1b4 = 0.0;
      }
      local_1fc = 0.0;
      local_1f8 = 0.0;
      local_1f4 = 0.0;
      if ((int)fVar3 < local_20c + -1) {
        local_1fc = local_208[-2] - local_208[-5];
        local_1f8 = local_208[-1] - local_208[-4];
        local_1f4 = *local_208 - local_208[-3];
        local_1c0 = local_1fc;
        local_1bc = local_1f8;
        local_1b8 = local_1f4;
      }
      if (0 < (int)fVar3) {
        local_94 = local_208[-3] - local_208[-6];
        local_1fc = (local_208[-5] - local_208[-8]) + local_1fc;
        local_1f8 = (local_208[-4] - local_208[-7]) + local_1f8;
        local_1f4 = local_94 + local_1f4;
      }
      FUN_00412e20(&local_1fc);
      FUN_00948980(&local_d8,&local_1fc);
      FUN_00412fd0(&local_160,&local_d8,&local_1fc);
      local_214 = 0.0;
      local_1d4 = 0.0;
      if (local_21c < local_150 == (local_21c == local_150)) {
        if (local_154 <= local_21c) {
          local_214 = (local_21c - local_154) / (float)local_210;
          if (0.0 <= local_214) {
            if (1.0 < local_214) {
              local_214 = 1.0;
            }
          }
          else {
            local_214 = 0.0;
          }
          local_214 = local_214 * local_214;
          if (0.0 <= local_214) {
            if (1.0 < local_214) {
              local_214 = 1.0;
            }
          }
          else {
            local_214 = 0.0;
          }
          local_1d4 = local_214 * *(float *)(param_1 + 0xf0);
        }
      }
      else {
        local_214 = 1.0 - local_21c / local_150;
        if (0.0 <= local_214) {
          if (1.0 < local_214) {
            local_214 = 1.0;
          }
        }
        else {
          local_214 = 0.0;
        }
        local_214 = local_214 * local_214;
        if (0.0 <= local_214) {
          if (1.0 < local_214) {
            local_214 = 1.0;
          }
          local_1d4 = local_214 * *(float *)(param_1 + 0xec);
        }
        else {
          local_214 = 0.0;
          local_1d4 = *(float *)(param_1 + 0xec) * 0.0;
        }
      }
      local_fc = local_208[-5];
      local_f8 = local_208[-4];
      local_f4 = local_208[-3];
      local_bc = (1.0 - local_214) * *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xe4);
      local_214 = 0.0;
      local_c0 = local_21c * 0.5;
      pfVar12 = pfVar13 + 4;
      do {
        pfVar14 = pfVar13;
        fVar4 = local_214;
        local_1e0 = *(float *)(DAT_01050624 + 4 + (int)local_214 * 8);
        local_1e4 = *(float *)(DAT_01050624 + (int)local_214 * 8);
        local_70 = local_d0 * local_1e0;
        local_ec = local_15c * local_1e4;
        local_e8 = local_158 * local_1e4;
        local_120 = local_160 * local_1e4 + local_d8 * local_1e0;
        local_11c = local_ec + local_d4 * local_1e0;
        local_118 = local_e8 + local_70;
        pfVar13 = (float *)FUN_0040a530(&local_1d0,(int)local_1b4,(uint)*(byte *)(param_1 + 0x126),
                                        (uint)*(byte *)(param_1 + 0x125),
                                        (uint)*(byte *)(param_1 + 0x124));
        pfVar12[-1] = *pfVar13;
        fVar3 = local_bc + local_1d4 + *(float *)(param_1 + 0xb0);
        local_c8 = local_11c * fVar3;
        local_c4 = local_118 * fVar3;
        local_108 = local_fc + local_120 * fVar3;
        *pfVar14 = local_108;
        local_104 = local_f8 + local_c8;
        pfVar14[1] = local_104;
        local_100 = local_f4 + local_c4;
        pfVar14[2] = local_100;
        local_1f0 = local_c0 - *(float *)(param_1 + 0xc4);
        local_1ec = (float)(int)local_214 * 0.125 * 4.0 + *(float *)(param_1 + 0xcc);
        *pfVar12 = local_1f0;
        local_214 = (float)((int)fVar4 + 1);
        pfVar12[1] = local_1ec;
        pfVar13 = pfVar14 + 6;
        pfVar12 = pfVar12 + 6;
      } while ((int)local_214 < 8);
      pfVar14[6] = pfVar14[-0x2a];
      pfVar14[7] = pfVar14[-0x29];
      pfVar14[8] = pfVar14[-0x28];
      pfVar14[9] = pfVar14[-0x27];
      pfVar14[10] = pfVar14[-0x26];
      pfVar14[0xb] = pfVar14[-0x25];
      pfVar13 = pfVar14 + 0xc;
      pfVar14[0xb] = *(float *)(param_1 + 0xcc) + 4.0;
      local_218 = (float)((int)local_218 + 1);
      local_208 = local_208 + 3;
    } while ((int)local_218 < local_20c);
  }
  if (0 < (int)local_1b0) {
    pfVar13 = *(float **)(*(int *)(param_1 + 0x110) + 0x2c);
    if (0 < local_20c + -1) {
      sVar16 = 9;
      local_210 = (void *)(local_20c + -1);
      do {
        iVar17 = 0;
        pfVar12 = pfVar13;
        sVar10 = sVar16;
        do {
          sVar8 = (short)iVar17;
          local_1d0 = (float)CONCAT22(sVar16 + -9 + sVar8,sVar10 + -8);
          *pfVar12 = local_1d0;
          *(short *)(pfVar12 + 1) = sVar10;
          local_1b0 = (float)CONCAT22(sVar10,sVar10 + -8);
          pfVar13 = pfVar12 + 3;
          iVar17 = iVar17 + 1;
          *(float *)((int)pfVar12 + 6) = local_1b0;
          sVar10 = sVar10 + 1;
          *(short *)((int)pfVar12 + 10) = sVar16 + 1 + sVar8;
          pfVar12 = pfVar13;
        } while (iVar17 < 8);
        sVar16 = sVar16 + 9;
        local_210 = (void *)((int)local_210 + -1);
      } while (local_210 != (void *)0x0);
    }
  }
  if (local_178 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_178);
  }
  if (local_188 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_188);
  }
  if (local_144 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0094d8f0 @ 0094d8f0 ////

void __fastcall FUN_0094d8f0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf350b;
  local_c = ExceptionList;
  if (0 < DAT_0105be08) {
    ExceptionList = &local_c;
    FUN_0094ae60((void *)(param_1 + 0x14c),0x14);
    iVar2 = 0;
    do {
      this = operator_new(0x48);
      local_4 = 0;
      if (this == (void *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_009afba0(this,DAT_00e6607c,DAT_00e66078,0,0,0,0x41200000);
      }
      *(undefined4 **)(*(int *)(param_1 + 0x150) + iVar2 + 4) = puVar1;
      local_4 = 0xffffffff;
      FUN_009afab0(*(void **)(*(int *)(param_1 + 0x150) + 4 + iVar2),0);
      iVar2 = iVar2 + 8;
    } while (iVar2 < 0xa0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0094d9c0 @ 0094d9c0 ////

void __fastcall FUN_0094d9c0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6f36c;
  return;
}


//// FUNCTION GuidingStreamEffect_Constructor @ 0094da20 ////

undefined4 * __thiscall GuidingStreamEffect_Constructor(void *this,int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar8;
  ulonglong uVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 *puVar12;
  char *pcVar13;
  byte abStack_3c [4];
  undefined4 uStack_38;
  uint *puStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint auStack_28 [5];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cf35dd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053dcd0(this);
  *(undefined ***)this = &PTR_FUN_00d6f344;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    puVar5 = *(undefined4 **)((int)this + 0x88);
    if (puVar5 != (undefined4 *)0x0) {
      piVar1 = puVar5 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)();
      }
    }
  }
  *(int *)((int)this + 0x88) = param_1;
  local_4._0_1_ = 2;
  *(undefined4 *)((int)this + 0x8c) = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
    puVar5 = *(undefined4 **)((int)this + 0x8c);
    if (puVar5 != (undefined4 *)0x0) {
      piVar1 = puVar5 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)();
      }
    }
  }
  *(int *)((int)this + 0x8c) = param_2;
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffffc | 4;
  *(undefined4 *)((int)this + 0xac) = 0x3f800000;
  *(undefined4 *)((int)this + 0xb0) = 0x3f000000;
  *(undefined4 *)((int)this + 0xb4) = 0x447a0000;
  *(undefined4 *)((int)this + 0xbc) = 0x447a0000;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0x3ac49ba6;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0x3a03126f;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = DAT_00e66080;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0xbe800000;
  *(undefined4 *)((int)this + 0xf0) = 0x3f800000;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = DAT_00e660bc;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x140) = DAT_00e66084;
  *(undefined4 *)((int)this + 0x144) = 0xffffffff;
  *(undefined4 *)((int)this + 0x148) = DAT_00e66088;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  local_4 = (undefined4 *)CONCAT31(local_4._1_3_,7);
  *(void **)((int)this + 0x80) = this;
  FUN_00acdb9e(0xe66130);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x84) = iVar3;
  if (s___AV__InList_VCGuidingStream_TM__00e66108[0x27] != '\0') {
    iVar3 = 0x78;
    pcVar13 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe66130);
    FUN_0097df60(pcVar4,pcVar13,iVar3);
    s___AV__InList_VCGuidingStream_TM__00e66108[0x27] = '\0';
  }
  puStack_34 = auStack_28;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0x20;
  puStack_34 = _malloc(0x20);
  _strncpy((char *)puStack_34,"gs_wiggle_speed_factor",0x16);
  uStack_30 = 0x16;
  *(char *)((int)puStack_34 + 0x16) = '\0';
  local_4._0_1_ = 8;
  CVarSystem_Register_STUBBED();
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  puStack_34 = auStack_28;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0x20;
  puStack_34 = _malloc(0x20);
  _strncpy((char *)puStack_34,"gs_animation_frame_ms",0x15);
  uStack_30 = 0x15;
  *(char *)((int)puStack_34 + 0x15) = '\0';
  local_4._0_1_ = 9;
  CVarSystem_Register_STUBBED();
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  puStack_34 = auStack_28;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0x20;
  puStack_34 = _malloc(0x20);
  _strncpy((char *)puStack_34,"gs_particle_interval_ms",0x17);
  uStack_30 = 0x17;
  *(char *)((int)puStack_34 + 0x17) = '\0';
  local_4._0_1_ = 10;
  CVarSystem_Register_STUBBED();
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  puStack_34 = auStack_28;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0x14;
  _strncpy((char *)puStack_34,"gs_particle_speed",0x11);
  uStack_30 = 0x11;
  *(char *)((int)puStack_34 + 0x11) = '\0';
  local_4._0_1_ = 0xb;
  CVarSystem_Register_STUBBED();
  local_4 = (undefined4 *)CONCAT31(local_4._1_3_,7);
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x88) + 0x10))();
  *(undefined4 *)((int)this + 0x90) = *puVar5;
  *(undefined4 *)((int)this + 0x94) = puVar5[1];
  *(undefined4 *)((int)this + 0x98) = puVar5[2];
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x8c) + 0x10))();
  *(undefined4 *)((int)this + 0x9c) = *puVar5;
  *(undefined4 *)((int)this + 0xa0) = puVar5[1];
  *(undefined4 *)((int)this + 0xa4) = puVar5[2];
  (**(code **)(**(int **)((int)this + 0x88) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x8c) + 0x18))();
  uVar9 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  local_4 = (undefined4 *)(float)(int)uVar9;
  if ((int)uVar9 < 0) {
    local_4 = (undefined4 *)((float)local_4 + 4.2949673e+09);
  }
  *(undefined4 **)((int)this + 0xb8) = local_4;
  *(undefined4 **)((int)this + 0xd8) = local_4;
  fVar8 = FUN_00990e30(0.0,*(float *)((int)this + 0x140));
  *(float *)((int)this + 0x13c) = (float)((float10)(float)local_4 - fVar8);
  puVar5 = operator_new(0x1c);
  pvStack_c._0_1_ = 0xc;
  local_4 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00999750(puVar5);
    *puVar5 = &PTR_FUN_00d6f328;
    puVar5[6] = this;
  }
  pvStack_c._0_1_ = 7;
  *(undefined4 **)((int)this + 0x10c) = puVar5;
  puVar5 = FUN_00452010();
  *(undefined4 **)((int)this + 0x110) = puVar5;
  local_4 = operator_new(0x24);
  pvStack_c._0_1_ = 0xd;
  if (local_4 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_009910f0(local_4);
  }
  *(undefined4 *)(*(int *)((int)this + 0x110) + 0x40) = uVar6;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0xc) = 7;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0xbfffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0x7fffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x2000000;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0xfeffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x8000000;
  iVar3 = *(int *)(*(int *)((int)this + 0x110) + 0x40);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,7);
  *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x10000000;
  FUN_0094add0((void *)((int)this + 300),1);
  puVar5 = *(undefined4 **)((int)this + 0x130);
  pvVar7 = FUN_0099bb50(PTR_DAT_00e6609c,0,0,0,'\0');
  *puVar5 = pvVar7;
  pvVar7 = *(void **)(*(int *)((int)this + 0x110) + 0x40);
  if (*(int *)((int)pvVar7 + 0x18) != **(int **)((int)this + 0x130)) {
    Engine_SetResourceReference(pvVar7,**(int **)((int)this + 0x130));
  }
  FUN_0094d8f0((int)this);
  FUN_0094b170((int)this);
  if ((*(byte *)((int)this + 0xa8) & 4) != 0) {
    CameraPath_GenerateSplineWithShake((int)this);
  }
  abStack_3c[0] = 0;
  abStack_3c[1] = 0;
  abStack_3c[2] = 0;
  abStack_3c[3] = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[4] = 0;
  puStack_34 = (uint *)0xffffffff;
  uStack_38 = FUN_009b01a0("UI_GUIDING_STREAM_APPEAR_SOUND");
  puVar12 = &DAT_00d17518;
  iVar11 = 0;
  pbVar10 = abStack_3c;
  iVar3 = 2;
  pvVar7 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar7,iVar3,pbVar10,iVar11,puVar12);
  ExceptionList = pvStack_14;
  return this;
}


//// FUNCTION FUN_0094e040 @ 0094e040 ////

void __fastcall FUN_0094e040(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar10;
  ulonglong uVar11;
  undefined1 uStack_24;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf35fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x88) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x20))();
  uVar11 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  fVar1 = (float)(int)uVar11;
  if ((int)uVar11 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (*(float *)(param_1 + 0xdc) < fVar1 - *(float *)(param_1 + 0xd8)) {
    *(float *)(param_1 + 0xd8) = fVar1;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    pvVar9 = *(void **)(*(int *)(param_1 + 0x110) + 0x40);
    if (*(int *)((int)pvVar9 + 0x18) != **(int **)(param_1 + 0x130)) {
      Engine_SetResourceReference(pvVar9,**(int **)(param_1 + 0x130));
    }
  }
  *(float *)(param_1 + 0xc4) =
       (float)DAT_0105beb8 * *(float *)(param_1 + 200) + *(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0xcc) =
       (float)DAT_0105beb8 * *(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0xcc);
  fVar2 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x90);
  fVar4 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x94);
  fVar3 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0xe0) = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  cVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
  if (cVar5 != '\0') {
    puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x88) + 0x10))();
    *(undefined4 *)(param_1 + 0x90) = *puVar6;
    *(undefined4 *)(param_1 + 0x94) = puVar6[1];
    *(undefined4 *)(param_1 + 0x98) = puVar6[2];
  }
  cVar5 = (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))();
  if (cVar5 != '\0') {
    puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x8c) + 0x10))();
    *(undefined4 *)(param_1 + 0x9c) = *puVar6;
    *(undefined4 *)(param_1 + 0xa0) = puVar6[1];
    *(undefined4 *)(param_1 + 0xa4) = puVar6[2];
  }
  cVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 0x14))();
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x14))();
    if (cVar5 != '\0') {
      uVar7 = *(int *)(param_1 + 0x128) - DAT_0105beb8;
      uVar7 = uVar7 & ((int)uVar7 < 0) - 1;
      goto LAB_0094e205;
    }
  }
  uVar7 = DAT_0105beb8 + *(int *)(param_1 + 0x128);
  if (1000 < (int)uVar7) {
    uVar7 = 1000;
  }
LAB_0094e205:
  *(uint *)(param_1 + 0x128) = uVar7;
  if ((0 < DAT_0105be08) && (*(float *)(param_1 + 0x140) < fVar1 - *(float *)(param_1 + 0x13c))) {
    iVar10 = *(int *)(param_1 + 0x144) + 1;
    *(float *)(param_1 + 0x13c) = fVar1;
    *(int *)(param_1 + 0x144) = iVar10;
    if (((*(uint *)(param_1 + 0xa8) >> 2 & 1) == 0) ||
       (uStack_24 = 1, 0 < *(int *)(param_1 + 0x128))) {
      uStack_24 = 0;
    }
    if (*(int *)(param_1 + 0x150) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x150) >> 3;
    }
    if (iVar10 < iVar8) {
      *(undefined4 *)(*(int *)(param_1 + 0x150) + iVar10 * 8) = 0;
      FUN_009afab0(*(void **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x144) * 8 + 4),
                   uStack_24);
    }
    else {
      uStack_18 = 0;
      pvVar9 = operator_new(0x48);
      uStack_4 = 0;
      if (pvVar9 == (void *)0x0) {
        puStack_14 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 0x118);
        puStack_14 = FUN_009afba0(pvVar9,DAT_00e6607c,DAT_00e66078,*puVar6,puVar6[1],puVar6[2],
                                  0x40800000);
      }
      uStack_4 = 0xffffffff;
      FUN_009afab0(puStack_14,uStack_24);
      FUN_0094b030((void *)(param_1 + 0x14c),&uStack_18);
    }
  }
  FUN_0094b4a0(param_1);
  CameraPath_GenerateSplineWithShake(param_1);
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    uVar11 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_00);
    fVar1 = (float)(int)uVar11;
    if ((int)uVar11 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0xbc) < fVar1 - *(float *)(param_1 + 0xc0)) {
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0094e410 @ 0094e410 ////

void __fastcall FUN_0094e410(int param_1)

{
  void *this;
  
  this = (void *)FUN_00ace790(*(int **)(param_1 + 100),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                              &TM::TMFixedAsset::RTTI_Type_Descriptor,0);
  if (this != (void *)0x0) {
    FUN_005311a0(this,param_1);
  }
  return;
}


//// FUNCTION FUN_0094e440 @ 0094e440 ////

void __fastcall FUN_0094e440(int param_1)

{
  void *this;
  
  this = (void *)FUN_00ace790(*(int **)(param_1 + 100),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                              &TM::TMFixedAsset::RTTI_Type_Descriptor,0);
  if (this != (void *)0x0) {
    FUN_00534d30(this,param_1,'\0');
  }
  return;
}


//// FUNCTION FUN_0094e470 @ 0094e470 ////

undefined4 * __thiscall FUN_0094e470(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d6f418;
  piVar1 = (int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 **)((int)this + 0x5c) = (undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x50) = &PTR_FUN_00d172b0;
  *(int *)((int)this + 100) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x58) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return this;
}


//// FUNCTION FUN_0094e4d0 @ 0094e4d0 ////

void __fastcall FUN_0094e4d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f418;
  param_1[0x14] = &PTR_FUN_00d172b0;
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
  *param_1 = &PTR_FUN_00d6b268;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0094e530 @ 0094e530 ////

undefined4 * __thiscall FUN_0094e530(void *this,byte param_1)

{
  FUN_0094e4d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094e550 @ 0094e550 ////

undefined4 * __thiscall FUN_0094e550(void *this,undefined4 param_1)

{
  FUN_00999750(this);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_00d6f45c;
  return this;
}


//// FUNCTION FUN_0094e570 @ 0094e570 ////

void __fastcall FUN_0094e570(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f45c;
  FUN_00999aa0(param_1);
  return;
}


//// FUNCTION FUN_0094e590 @ 0094e590 ////

void __fastcall FUN_0094e590(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x90) & 1) == 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
    iVar2 = FUN_00566c70();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0xa0) = fVar1;
  }
  return;
}


//// FUNCTION FUN_0094e610 @ 0094e610 ////

void __cdecl FUN_0094e610(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return;
}


//// FUNCTION FUN_0094e650 @ 0094e650 ////

undefined4 * __thiscall FUN_0094e650(void *this,byte param_1)

{
  FUN_0094e570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094e670 @ 0094e670 ////

void __thiscall FUN_0094e670(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = 1.0;
  if ((*(byte *)((int)this + 0x90) & 1) != 0) {
    iVar2 = FUN_00566c70();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar1 = 1.0 - (fVar1 - *(float *)((int)this + 0xa0)) / *(float *)((int)this + 0x9c);
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
  }
  fVar1 = fVar1 * *(float *)((int)this + 0x8c);
  if (fVar1 < 0.0) {
LAB_0094e716:
    *param_1 = 0.0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_0094e716;
    if (fVar1 <= 1.0) goto LAB_0094e73e;
  }
  fVar1 = 1.0;
LAB_0094e73e:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_0094e750 @ 0094e750 ////

int __fastcall FUN_0094e750(int param_1)

{
  float10 fVar1;
  int local_4;
  
  local_4 = 0;
  do {
    fVar1 = (float10)fcos(((float10)6.2831855 / (float10)local_4) * (float10)0.5);
    if ((float10)*(float *)(param_1 + 0xac) - fVar1 * (float10)*(float *)(param_1 + 0xac) <
        (float10)0.2) {
      return local_4;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 100);
  return local_4;
}


//// FUNCTION FUN_0094e810 @ 0094e810 ////

void __fastcall FUN_0094e810(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar4 = (**(code **)(**(int **)((int)param_1 + 0x78) + 0xc))();
  if (cVar4 != '\0') {
    puVar5 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x78) + 0x10))(&fStack_c);
    *(undefined4 *)((int)param_1 + 0x7c) = *puVar5;
    *(undefined4 *)((int)param_1 + 0x80) = puVar5[1];
    *(undefined4 *)((int)param_1 + 0x84) = puVar5[2];
  }
  fVar1 = *(float *)((int)param_1 + 0xa8) + *(float *)((int)param_1 + 0xa4);
  *(float *)((int)param_1 + 0xa4) = fVar1;
  if (1.0 <= fVar1) {
    *(float *)((int)param_1 + 0xa4) = fVar1 - 1.0;
  }
  iVar10 = 0;
  if (*(int *)((int)param_1 + 0xbc) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (*(int *)((int)param_1 + 0xc0) - *(int *)((int)param_1 + 0xbc)) / 0xc;
  }
  fVar1 = *(float *)((int)param_1 + 0xac);
  fVar2 = *(float *)((int)param_1 + 0xb0);
  iStack_40 = 0;
  if (0 < iVar8) {
    uStack_48 = 0xffffff;
    uStack_44 = 0xffffff;
    iVar9 = 0;
    do {
      iVar6 = *(int *)((int)param_1 + 0xbc) + iVar9;
      fStack_18 = *(float *)(*(int *)((int)param_1 + 0xbc) + iVar9) +
                  *(float *)((int)param_1 + 0x7c);
      fStack_14 = *(float *)(iVar6 + 4) + *(float *)((int)param_1 + 0x80);
      fStack_10 = *(float *)(iVar6 + 8) + *(float *)((int)param_1 + 0x84);
      pfVar7 = (float *)(*(int *)(*(int *)((int)param_1 + 0xb4) + 0x28) + iVar10);
      *pfVar7 = fStack_18;
      pfVar7[1] = fStack_14;
      pfVar7[2] = fStack_10;
      FUN_0094e670(param_1,&fStack_30);
      uVar11 = FUN_00acd42c();
      iVar6 = (int)uVar11;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      uStack_48 = CONCAT13((char)iVar6,(undefined3)uStack_48);
      fVar3 = (float)iStack_40 * ((fVar1 * fVar1 * 3.1415927) / (float)(iVar8 + -1));
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xb4) + 0x28) + 0xc + iVar10) = uStack_48;
      uStack_24 = *(undefined4 *)((int)param_1 + 0xa4);
      iVar6 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0x28);
      *(float *)(iVar6 + 0x10 + iVar10) = fVar3;
      *(undefined4 *)(iVar6 + 0x14 + iVar10) = uStack_24;
      iVar6 = *(int *)((int)param_1 + 0xbc) + iVar9;
      fStack_c = *(float *)(*(int *)((int)param_1 + 0xbc) + iVar9) + *(float *)((int)param_1 + 0x7c)
      ;
      fStack_8 = *(float *)(iVar6 + 4) + *(float *)((int)param_1 + 0x80);
      fStack_4 = *(float *)(iVar6 + 8) + *(float *)((int)param_1 + 0x84);
      pfVar7 = (float *)(*(int *)(*(int *)((int)param_1 + 0xb4) + 0x28) + 0x18 + iVar10);
      *pfVar7 = fStack_c;
      pfVar7[1] = fStack_8;
      pfVar7[2] = fStack_4;
      iVar6 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0x28);
      *(float *)(iVar6 + 0x20 + iVar10) =
           *(float *)((int)param_1 + 0xb0) + *(float *)(iVar6 + 0x20 + iVar10);
      fStack_28 = fVar3;
      FUN_0094e670(param_1,&fStack_2c);
      uVar11 = FUN_00acd42c();
      iVar6 = (int)uVar11;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      uStack_44 = CONCAT13((char)iVar6,(undefined3)uStack_44);
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xb4) + 0x28) + 0x24 + iVar10) = uStack_44;
      fStack_1c = fVar2 + *(float *)((int)param_1 + 0xa4);
      iVar6 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0x28);
      *(float *)(iVar6 + 0x28 + iVar10) = fVar3;
      *(float *)(iVar6 + 0x2c + iVar10) = fStack_1c;
      iStack_40 = iStack_40 + 1;
      iVar10 = iVar10 + 0x30;
      iVar9 = iVar9 + 0xc;
      fStack_20 = fVar3;
    } while (iStack_40 < iVar8);
  }
  FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
  FUN_009e6680(*(int **)((int)param_1 + 0xb4));
  FUN_009e6680(*(int **)((int)param_1 + 0xb4));
  FUN_009e6680(*(int **)((int)param_1 + 0xb4));
  FUN_009e6680(*(int **)((int)param_1 + 0xb4));
  return;
}


//// FUNCTION FUN_0094eb40 @ 0094eb40 ////

void __fastcall FUN_0094eb40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Memory;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf363f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6f470;
  local_4 = 3;
  (**(code **)(*(int *)param_1[0x1e] + 0x1c))();
  puVar2 = (undefined4 *)param_1[0x1e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x1e] = 0;
  puVar2 = (undefined4 *)param_1[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0x22] = 0;
  }
  _Memory = *(void **)(param_1[0x2d] + 0x40);
  if (_Memory == (void *)0x0) {
    *(undefined4 *)(param_1[0x2d] + 0x40) = 0;
    puVar2 = (undefined4 *)param_1[0x2d];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x2d] = 0;
    }
    if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x33] = param_1[0x32];
    }
    if (param_1[0x32] != 0) {
      *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
    }
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    if ((void *)param_1[0x2f] == (void *)0x0) {
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      puVar2 = (undefined4 *)param_1[0x1e];
      local_4 = local_4 & 0xffffff00;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      param_1[0x1e] = 0;
      local_4 = 0xffffffff;
      FUN_0053ddb0(param_1);
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2f]);
  }
  FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0094ecd0 @ 0094ecd0 ////

undefined4 * __thiscall FUN_0094ecd0(void *this,byte param_1)

{
  FUN_0094eb40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094ecf0 @ 0094ecf0 ////

void __fastcall FUN_0094ecf0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6f498;
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


//// FUNCTION FUN_0094ed40 @ 0094ed40 ////

undefined4 * __thiscall FUN_0094ed40(void *this,byte param_1)

{
  FUN_0094ecf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094ed60 @ 0094ed60 ////

void __fastcall FUN_0094ed60(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_1c;
  undefined4 local_14;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar3 = FUN_0094e750(param_1);
  FUN_009e6720(*(void **)(param_1 + 0xb4),iVar3 * 2 + 2,iVar3 * 2);
  if (*(undefined4 **)(param_1 + 0xbc) != *(undefined4 **)(param_1 + 0xc0)) {
    uVar4 = FUN_0094e610(*(undefined4 **)(param_1 + 0xc0),*(undefined4 **)(param_1 + 0xc0),
                         *(undefined4 **)(param_1 + 0xbc));
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
  }
  local_1c = 0;
  if (0 < iVar3) {
    local_4 = 0;
    do {
      fVar6 = (float10)local_1c * (float10)(6.2831855 / (float)iVar3);
      fVar7 = (float10)fsin(fVar6);
      local_c = (float)(fVar7 * (float10)*(float *)(param_1 + 0xac));
      fVar6 = (float10)fcos(fVar6);
      local_8 = (float)(fVar6 * (float10)*(float *)(param_1 + 0xac));
      SpawnPointList_Append((void *)(param_1 + 0xb8),&local_c);
      local_1c = local_1c + 1;
    } while (local_1c < iVar3);
  }
  SpawnPointList_Append((void *)(param_1 + 0xb8),*(undefined4 **)(param_1 + 0xbc));
  if (0 < iVar3) {
    sVar2 = 0;
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 0xb4) + 0x2c);
    do {
      local_14 = CONCAT22(sVar2 + 1,sVar2);
      *puVar5 = local_14;
      sVar1 = sVar2 + 2;
      *(short *)(puVar5 + 1) = sVar1;
      local_1c = CONCAT22(sVar2 + 3,sVar2 + 1);
      *(int *)((int)puVar5 + 6) = local_1c;
      sVar2 = sVar2 + 2;
      iVar3 = iVar3 + -1;
      *(short *)((int)puVar5 + 10) = sVar1;
      puVar5 = puVar5 + 3;
    } while (iVar3 != 0);
  }
  return;
}


//// FUNCTION FUN_0094eea0 @ 0094eea0 ////

void __fastcall FUN_0094eea0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6f498;
  return;
}


//// FUNCTION FUN_0094ef00 @ 0094ef00 ////

undefined4 * __thiscall FUN_0094ef00(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *pvVar8;
  void *pvVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  undefined1 *puVar13;
  byte abStack_38 [4];
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf36b5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053dcd0(this);
  *(undefined ***)this = &PTR_FUN_00d6f470;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    puVar6 = *(undefined4 **)((int)this + 0x78);
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = puVar6 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)();
      }
    }
  }
  *(int *)((int)this + 0x78) = param_1;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xfffffffc | 4;
  *(undefined4 *)((int)this + 0x94) = 0x447a0000;
  *(undefined4 *)((int)this + 0x9c) = 0x447a0000;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xbd23d70a;
  *(undefined4 *)((int)this + 0xac) = param_2;
  *(undefined4 *)((int)this + 0xb0) = 0x40800000;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(void **)((int)this + 0xd0) = this;
  FUN_00acdb9e(0xe661cc);
  iVar4 = FUN_0097dda0();
  *(int *)((int)this + 0xd4) = iVar4;
  if (s___AV__InList_VCGuidingStreamIcon_00e661a0[0x2b] != '\0') {
    iVar4 = 200;
    pcVar12 = "Link";
    pcVar5 = (char *)FUN_00acdb9e(0xe661cc);
    FUN_0097df60(pcVar5,pcVar12,iVar4);
    s___AV__InList_VCGuidingStreamIcon_00e661a0[0x2b] = '\0';
  }
  puVar6 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x78) + 0x10))();
  *(undefined4 *)((int)this + 0x7c) = *puVar6;
  *(undefined4 *)((int)this + 0x80) = puVar6[1];
  *(undefined4 *)((int)this + 0x84) = puVar6[2];
  (**(code **)(**(int **)((int)this + 0x78) + 0x18))();
  iVar4 = FUN_00566c70();
  fVar3 = (float)iVar4;
  if (iVar4 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x98) = fVar3;
  puVar6 = operator_new(0x1c);
  puStack_8._0_1_ = 4;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_00999750(puVar6);
    *puVar6 = &PTR_FUN_00d6f45c;
    puVar6[6] = this;
  }
  puStack_8._0_1_ = 3;
  *(undefined4 **)((int)this + 0x88) = puVar6;
  puVar6 = FUN_00452010();
  *(undefined4 **)((int)this + 0xb4) = puVar6;
  puVar6 = operator_new(0x24);
  puStack_8._0_1_ = 5;
  if (puVar6 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_009910f0(puVar6);
  }
  *(undefined4 *)(*(int *)((int)this + 0xb4) + 0x40) = uVar7;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0xc) = 7;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0xbfffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x80000000;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x2000000;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0xfeffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x8000000;
  iVar4 = *(int *)(*(int *)((int)this + 0xb4) + 0x40);
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x10000000;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  pvVar8 = FUN_0099bb50(PTR_DAT_00e661f0,0,0,0,'\0');
  pvVar9 = *(void **)(*(int *)((int)this + 0xb4) + 0x40);
  if (*(void **)((int)pvVar9 + 0x18) != pvVar8) {
    Engine_SetResourceReference(pvVar9,(int)pvVar8);
  }
  if (pvVar8 != (void *)0x0) {
    FUN_0099b400(pvVar8);
  }
  abStack_38[0] = 0;
  abStack_38[1] = 0;
  abStack_38[2] = 0;
  abStack_38[3] = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_30 = 0xffffffff;
  uStack_34 = FUN_009b01a0("UI_GUIDING_STREAM_APPEAR_SOUND");
  puVar13 = &DAT_00d17518;
  iVar11 = 0;
  pbVar10 = abStack_38;
  iVar4 = 2;
  pvVar9 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar9,iVar4,pbVar10,iVar11,puVar13);
  FUN_0094ed60((int)this);
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_0094f250 @ 0094f250 ////

undefined4 * __fastcall FUN_0094f250(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d6f4a4;
  return param_1;
}


//// FUNCTION FUN_0094f270 @ 0094f270 ////

void __fastcall FUN_0094f270(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f4a4;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_0094f280 @ 0094f280 ////

void FUN_0094f280(int param_1)

{
  FUN_0094fc20(param_1);
  return;
}


//// FUNCTION FUN_0094f290 @ 0094f290 ////

void __fastcall FUN_0094f290(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0094a1c0(param_3,param_2);
  return;
}


//// FUNCTION FUN_0094f2a0 @ 0094f2a0 ////

void FUN_0094f2a0(int param_1)

{
  FUN_0094e590(param_1);
  return;
}


//// FUNCTION FUN_0094f2e0 @ 0094f2e0 ////

int * __thiscall FUN_0094f2e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0094f430 @ 0094f430 ////

undefined4 * __thiscall FUN_0094f430(void *this,byte param_1)

{
  FUN_0094f270(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094f450 @ 0094f450 ////

void FUN_0094f450(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf36cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(100);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0053c420(puVar1);
    *puVar1 = &PTR_FUN_00d6f4a4;
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0105069c[1])();
  DAT_010506b0 = puVar1;
  (*(code *)*DAT_0105069c)();
  FUN_0094b0a0();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0094f4e0 @ 0094f4e0 ////

undefined ****** FUN_0094f4e0(float param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined ******ppppppuVar2;
  char cVar3;
  undefined ******ppppppuVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf36eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc4);
  ppppppuVar2 = (undefined ******)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    ppppppuVar2 = (undefined ******)FUN_0094fd90(pvVar1,param_1,param_2,param_3);
  }
  ppppppuVar4 = ppppppuVar2 + 0x2d;
  ppppppuVar2[0x2e] = (undefined *****)&DAT_010506c8;
  *ppppppuVar4 = (undefined *****)DAT_010506c8;
  DAT_010506c8[1] = (undefined *****)ppppppuVar4;
  cVar3 = '\x01';
  local_4 = 0xffffffff;
  DAT_010506c8 = ppppppuVar4;
  ppppppuVar4 = ppppppuVar2;
  pvVar1 = (void *)FUN_00642110();
  FUN_0064c610(pvVar1,cVar3,ppppppuVar4);
  ExceptionList = local_c;
  return ppppppuVar2;
}


//// FUNCTION FUN_0094f580 @ 0094f580 ////

void FUN_0094f580(int param_1,int param_2)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf370b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x15c);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = GuidingStreamEffect_Constructor(this,param_1,param_2);
  }
  piVar1 = puVar2 + 0x1e;
  puVar2[0x1f] = &DAT_01050648;
  *piVar1 = (int)DAT_01050648;
  *(int **)((int)DAT_01050648 + 4) = piVar1;
  DAT_01050648 = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0094f600 @ 0094f600 ////

void FUN_0094f600(int param_1,undefined4 param_2)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf372b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0094ef00(this,param_1,param_2);
  }
  piVar1 = puVar2 + 0x32;
  puVar2[0x33] = &DAT_0105067c;
  *piVar1 = (int)DAT_0105067c;
  *(int **)((int)DAT_0105067c + 4) = piVar1;
  DAT_0105067c = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0094f880 @ 0094f880 ////

void FUN_0094f880(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  FUN_00947fc0();
  puVar3 = DAT_010506b0;
  if (DAT_010506b0 != (undefined4 *)0x0) {
    iVar2 = DAT_010506b0[0x12];
    DAT_010506b0[0x12] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (*(code *)DAT_0105069c[1])();
    DAT_010506b0 = (undefined4 *)0x0;
    (*(code *)*DAT_0105069c)();
  }
  if ((int **)DAT_0105063c != &DAT_01050648) {
    do {
      piVar4 = DAT_01050648;
      puVar3 = (undefined4 *)DAT_01050648[2];
      piVar1 = DAT_01050648 + 1;
      if ((int *)DAT_01050648[1] != (int *)0x0) {
        *(int *)DAT_01050648[1] = *DAT_01050648;
      }
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
    } while ((int **)DAT_0105063c != &DAT_01050648);
  }
  DAT_0105063c = &DAT_01050648;
  DAT_01050648 = (int *)&DAT_01050638;
  if ((int **)DAT_010506bc != &DAT_010506c8) {
    do {
      piVar4 = DAT_010506c8;
      puVar3 = (undefined4 *)DAT_010506c8[2];
      piVar1 = DAT_010506c8 + 1;
      if ((int *)DAT_010506c8[1] != (int *)0x0) {
        *(int *)DAT_010506c8[1] = *DAT_010506c8;
      }
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
    } while ((int **)DAT_010506bc != &DAT_010506c8);
  }
  DAT_010506bc = &DAT_010506c8;
  DAT_010506c8 = (int *)&DAT_010506b8;
  if ((int **)DAT_01050670 == &DAT_0105067c) {
    DAT_01050670 = &DAT_0105067c;
    DAT_0105067c = (int *)&DAT_0105066c;
    return;
  }
  do {
    piVar4 = DAT_0105067c;
    puVar3 = (undefined4 *)DAT_0105067c[2];
    piVar1 = DAT_0105067c + 1;
    if ((int *)DAT_0105067c[1] != (int *)0x0) {
      *(int *)DAT_0105067c[1] = *DAT_0105067c;
    }
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *piVar1;
    }
    *piVar4 = 0;
    *piVar1 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  } while ((int **)DAT_01050670 != &DAT_0105067c);
  DAT_01050670 = &DAT_0105067c;
  DAT_0105067c = (int *)&DAT_0105066c;
  return;
}


//// FUNCTION FUN_0094fb80 @ 0094fb80 ////

void __thiscall FUN_0094fb80(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d6f4c4;
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


//// FUNCTION FUN_0094fbd0 @ 0094fbd0 ////

void __fastcall FUN_0094fbd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6f4c4;
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


//// FUNCTION FUN_0094fc20 @ 0094fc20 ////

void __fastcall FUN_0094fc20(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0xa8) & 1) == 0) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1;
    iVar2 = FUN_00566c70();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0xb0) = fVar1;
  }
  return;
}


//// FUNCTION FUN_0094fcb0 @ 0094fcb0 ////

void __thiscall FUN_0094fcb0(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = 1.0;
  if ((*(byte *)((int)this + 0xa8) & 1) != 0) {
    iVar2 = FUN_00566c70();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar1 = 1.0 - (fVar1 - *(float *)((int)this + 0xb0)) / *(float *)((int)this + 0xac);
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
  }
  fVar1 = fVar1 * *(float *)((int)this + 100);
  if (fVar1 < 0.0) {
LAB_0094fd53:
    *param_1 = 0.0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_0094fd53;
    if (fVar1 <= 1.0) goto LAB_0094fd7b;
  }
  fVar1 = 1.0;
LAB_0094fd7b:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_0094fd90 @ 0094fd90 ////

undefined4 * __thiscall
FUN_0094fd90(void *this,float param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf376f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d6f4d4;
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  *(float *)((int)this + 100) = param_1;
  *(undefined4 *)((int)this + 0x68) = (undefined1 *)((int)this + 0x74);
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x68),(char *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x88) = (undefined1 *)((int)this + 0x94);
  *(undefined1 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x88),(char *)*param_3,param_3[1]);
  uVar1 = DAT_00e6626c;
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffffc;
  *(undefined4 *)((int)this + 0xac) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(void **)((int)this + 0xbc) = this;
  FUN_00acdb9e(0xe66294);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0xc0) = iVar2;
  if (s___AVCGuidingStreamUI_TM___00e66278[0x1a] != '\0') {
    iVar2 = 0xb4;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe66294);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCGuidingStreamUI_TM___00e66278[0x1a] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0094ff00 @ 0094ff00 ////

void __fastcall FUN_0094ff00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f4d4;
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2e] = param_1[0x2d];
  }
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x2e];
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (0x14 < (uint)param_1[0x24]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x22]);
  }
  if (0x14 < (uint)param_1[0x1c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  FUN_0053c500(param_1);
  return;
}


