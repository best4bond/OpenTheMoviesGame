//// FUNCTION FUN_004a9150 @ 004a9150 ////

void __thiscall FUN_004a9150(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004a8920((void *)piVar6[1]);
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
    FUN_004a7ff0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004a9210 @ 004a9210 ////

void __thiscall FUN_004a9210(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_004a8b90(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_004a6830((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_004a8b90(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_004a92d0 @ 004a92d0 ////

void __thiscall FUN_004a92d0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004a8960((void *)piVar6[1]);
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
    FUN_004a8300(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004a9390 @ 004a9390 ////

void __thiscall FUN_004a9390(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_004a8d40(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_004a6890((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_004a8d40(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_004a9450 @ 004a9450 ////

void __thiscall FUN_004a9450(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004a89a0((void *)piVar6[1]);
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
    FUN_004a8610(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004a9510 @ 004a9510 ////

undefined4 * __thiscall FUN_004a9510(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004a89e0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_004a89e0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_004a89e0(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_004a67d0((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x29) != '\0') {
          FUN_004a89e0(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_004a89e0(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_004a6580((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x29) != '\0') {
          FUN_004a89e0(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_004a89e0(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_004a9090(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_004a96b0 @ 004a96b0 ////

undefined4 * __thiscall FUN_004a96b0(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004a8b90(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_004a8b90(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_004a8b90(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_004a6830((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x29) != '\0') {
          FUN_004a8b90(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_004a8b90(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_004a6600((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x29) != '\0') {
          FUN_004a8b90(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_004a8b90(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_004a9210(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_004a9850 @ 004a9850 ////

undefined4 * __thiscall FUN_004a9850(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004a8d40(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_004a8d40(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_004a8d40(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_004a6890((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x29) != '\0') {
          FUN_004a8d40(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_004a8d40(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_004a6680((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x29) != '\0') {
          FUN_004a8d40(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_004a8d40(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_004a9390(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_004a99f0 @ 004a99f0 ////

uint * __thiscall FUN_004a99f0(void *this,uint *param_1)

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
  
  puStack_8 = &LAB_00ca6940;
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
    local_40 = &PTR_LAB_00d1dbd4;
    local_2c = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar2 = (uint *)FUN_004a7a80(local_28,param_1,(int)local_34);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_004a9510(this,&param_1,puVar4,puVar2);
    puVar4 = (uint *)*puVar3;
    FUN_004a7990((int)local_28);
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


//// FUNCTION FUN_004a9af0 @ 004a9af0 ////

uint * __thiscall FUN_004a9af0(void *this,uint *param_1)

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
  
  puStack_8 = &LAB_00ca6960;
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
    local_40 = &PTR_LAB_00d1dbe4;
    local_2c = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar2 = (uint *)FUN_004a7ae0(local_28,param_1,(int)local_34);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_004a96b0(this,&param_1,puVar4,puVar2);
    puVar4 = (uint *)*puVar3;
    FUN_004a79e0((int)local_28);
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


//// FUNCTION FUN_004a9bf0 @ 004a9bf0 ////

uint * __thiscall FUN_004a9bf0(void *this,uint *param_1)

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
  
  puStack_8 = &LAB_00ca6980;
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
    local_40 = &PTR_LAB_00d1dbf4;
    local_2c = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar2 = (uint *)FUN_004a7b40(local_28,param_1,(int)local_34);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_004a9850(this,&param_1,puVar4,puVar2);
    puVar4 = (uint *)*puVar3;
    FUN_004a7a30((int)local_28);
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


//// FUNCTION FUN_004a9cf0 @ 004a9cf0 ////

void __fastcall FUN_004a9cf0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar2 = FUN_0098b490("MostRecentMovieReviews");
  if (((char)uVar2 != '\0') && (bVar1 = FUN_009896f0("u32"), bVar1)) {
    if (DAT_010583e0 == 0) {
      local_8 = *(undefined4 *)(param_1 + 0x30);
      FUN_0098a3a0(&local_8);
      local_c = **(int **)(param_1 + 0x2c);
      if ((int *)local_c != *(int **)(param_1 + 0x2c)) {
        do {
          uVar4 = local_c;
          local_4 = *(uint *)(local_c + 0xc);
          FUN_0098a430(&local_4,4);
          FUN_00990970((int *)(uVar4 + 0x10));
          FUN_004a6580((int *)&local_c);
        } while (local_c != *(uint *)(param_1 + 0x2c));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_c = 0;
      FUN_004a9000(param_1 + 0x28);
      SLVAR_LoadUint(&local_c);
      uVar4 = 0;
      if (local_c != 0) {
        do {
          FUN_0098a430(&local_4,4);
          puVar3 = FUN_004a99f0((void *)(param_1 + 0x28),&local_4);
          FUN_00990970((int *)puVar3);
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_c);
      }
    }
  }
  uVar2 = FUN_0098b490("MostRecentStarReviews");
  if (((char)uVar2 != '\0') && (bVar1 = FUN_009896f0("u32"), bVar1)) {
    if (DAT_010583e0 == 0) {
      local_4 = *(uint *)(param_1 + 0x3c);
      FUN_0098a3a0(&local_4);
      local_c = **(int **)(param_1 + 0x38);
      if ((int *)local_c != *(int **)(param_1 + 0x38)) {
        do {
          uVar4 = local_c;
          local_8 = *(undefined4 *)(local_c + 0xc);
          FUN_0098a430(&local_8,4);
          FUN_00990970((int *)(uVar4 + 0x10));
          FUN_004a6600((int *)&local_c);
        } while (local_c != *(uint *)(param_1 + 0x38));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_c = 0;
      FUN_004a9030(param_1 + 0x34);
      SLVAR_LoadUint(&local_c);
      uVar4 = 0;
      if (local_c != 0) {
        do {
          FUN_0098a430(&local_4,4);
          puVar3 = FUN_004a9af0((void *)(param_1 + 0x34),&local_4);
          FUN_00990970((int *)puVar3);
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_c);
      }
    }
  }
  uVar2 = FUN_0098b490("MostRecentStudioReviews");
  if (((char)uVar2 != '\0') && (bVar1 = FUN_009896f0("u32"), bVar1)) {
    if (DAT_010583e0 == 0) {
      local_4 = *(uint *)(param_1 + 0x48);
      FUN_0098a3a0(&local_4);
      local_c = **(int **)(param_1 + 0x44);
      if ((int *)local_c != *(int **)(param_1 + 0x44)) {
        do {
          uVar4 = local_c;
          local_8 = *(undefined4 *)(local_c + 0xc);
          FUN_0098a430(&local_8,4);
          FUN_00990970((int *)(uVar4 + 0x10));
          FUN_004a6680((int *)&local_c);
        } while (local_c != *(uint *)(param_1 + 0x44));
        FUN_00989780();
        return;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_c = 0;
      FUN_004a89a0(*(void **)(*(int *)(param_1 + 0x44) + 4));
      *(int *)(*(int *)(param_1 + 0x44) + 4) = *(int *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(int *)(*(int *)(param_1 + 0x44) + 8) = *(int *)(param_1 + 0x44);
      SLVAR_LoadUint(&local_c);
      if (local_c != 0) {
        uVar4 = 0;
        do {
          FUN_0098a430(&local_4,4);
          puVar3 = FUN_004a9bf0((void *)(param_1 + 0x40),&local_4);
          FUN_00990970((int *)puVar3);
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_c);
      }
    }
  }
  FUN_00989780();
  return;
}


//// FUNCTION FUN_004a9fe0 @ 004a9fe0 ////

void __fastcall FUN_004a9fe0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004a9150(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004aa010 @ 004aa010 ////

void __fastcall FUN_004aa010(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004a92d0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004aa040 @ 004aa040 ////

void __fastcall FUN_004aa040(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004a9450(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004aa070 @ 004aa070 ////

void __fastcall FUN_004aa070(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca69e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1dc70;
  param_1[0xe] = &PTR_LAB_00d1dc50;
  local_4 = 4;
  FUN_004a8ef0((int)param_1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004a9450(param_1 + 0x1e,&local_10,*(int **)param_1[0x1f],(int *)param_1[0x1f]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1f]);
}


//// FUNCTION FUN_004aa180 @ 004aa180 ////

int * __thiscall FUN_004aa180(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  uint *puVar4;
  void *pvStack_4;
  
  piVar1 = param_1;
  pvStack_4 = this;
  param_1 = (int *)(**(code **)(*param_1 + 0x1c))();
  FUN_004a7840((void *)((int)this + 0x60),&pvStack_4,(uint *)&param_1);
  cVar2 = (char)param_2;
  if (pvStack_4 == *(void **)((int)this + 100)) {
    piVar3 = FUN_00482340((int)piVar1,(char)param_2 != '\0');
    if (cVar2 != '\0') {
      *(undefined1 *)(piVar3 + 0x18) = 1;
    }
    param_2 = (**(code **)(*piVar1 + 0x1c))();
    puVar4 = FUN_004a99f0((void *)((int)this + 0x60),&param_2);
    (**(code **)(*puVar4 + 4))();
    puVar4[5] = (uint)piVar3;
    (**(code **)*puVar4)();
    return piVar3;
  }
  piVar1 = *(int **)((int)pvStack_4 + 0x24);
  if ((char)param_2 != '\0') {
    FUN_0040bd00((int)piVar1);
  }
  (**(code **)(*piVar1 + 8))();
  if (cVar2 != '\0') {
    *(undefined1 *)(piVar1 + 0x18) = 1;
  }
  return piVar1;
}


//// FUNCTION FUN_004aa230 @ 004aa230 ////

int * __thiscall FUN_004aa230(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  void *pvStack_4;
  
  piVar1 = param_1;
  pvStack_4 = this;
  param_1 = (int *)(**(code **)(*param_1 + 0x80))();
  FUN_004a78b0((void *)((int)this + 0x6c),&pvStack_4,(uint *)&param_1);
  if (pvStack_4 == *(void **)((int)this + 0x70)) {
    piVar2 = FUN_004ffb90((int)piVar1);
    if ((char)param_2 != '\0') {
      *(undefined1 *)(piVar2 + 0x18) = 1;
    }
    param_2 = (**(code **)(*piVar1 + 0x80))();
    puVar3 = FUN_004a9af0((void *)((int)this + 0x6c),&param_2);
    (**(code **)(*puVar3 + 4))();
    puVar3[5] = (uint)piVar2;
    (**(code **)*puVar3)();
    return piVar2;
  }
  piVar1 = *(int **)((int)pvStack_4 + 0x24);
  (**(code **)(*piVar1 + 8))();
  if ((char)param_2 != '\0') {
    *(undefined1 *)(piVar1 + 0x18) = 1;
  }
  return piVar1;
}


//// FUNCTION FUN_004aa2d0 @ 004aa2d0 ////

int * __thiscall FUN_004aa2d0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  void *local_4;
  
  uVar1 = param_1;
  local_4 = this;
  param_1 = FUN_00509aa0(param_1);
  FUN_004a7920((void *)((int)this + 0x78),&local_4,&param_1);
  if (local_4 == *(void **)((int)this + 0x7c)) {
    piVar2 = FUN_0051e640(uVar1);
    if ((char)param_2 != '\0') {
      *(undefined1 *)(piVar2 + 0x18) = 1;
    }
    param_2 = FUN_00509aa0(uVar1);
    puVar3 = FUN_004a9bf0((void *)((int)this + 0x78),&param_2);
    (**(code **)(*puVar3 + 4))();
    puVar3[5] = (uint)piVar2;
    (**(code **)*puVar3)();
    return piVar2;
  }
  piVar2 = *(int **)((int)local_4 + 0x24);
  (**(code **)(*piVar2 + 8))();
  if ((char)param_2 != '\0') {
    *(undefined1 *)(piVar2 + 0x18) = 1;
  }
  return piVar2;
}


//// FUNCTION FUN_004aa370 @ 004aa370 ////

int __fastcall FUN_004aa370(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004aa3a0 @ 004aa3a0 ////

int __fastcall FUN_004aa3a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7650();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004aa3d0 @ 004aa3d0 ////

int __fastcall FUN_004aa3d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a76a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004aa400 @ 004aa400 ////

undefined4 * __thiscall FUN_004aa400(void *this,byte param_1)

{
  FUN_004aa070(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004aa420 @ 004aa420 ////

undefined4 * __fastcall FUN_004aa420(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6a24;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d1dc50;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d1dc70;
  iVar1 = FUN_004a7600();
  param_1[0x19] = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(undefined4 *)(param_1[0x19] + 4) = param_1[0x19];
  *(undefined4 *)param_1[0x19] = param_1[0x19];
  *(undefined4 *)(param_1[0x19] + 8) = param_1[0x19];
  param_1[0x1a] = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_004a7650();
  param_1[0x1c] = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1c];
  *(undefined4 *)param_1[0x1c] = param_1[0x1c];
  *(undefined4 *)(param_1[0x1c] + 8) = param_1[0x1c];
  param_1[0x1d] = 0;
  local_4._0_1_ = 3;
  iVar1 = FUN_004a76a0();
  param_1[0x1f] = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x1f];
  *(undefined4 *)param_1[0x1f] = param_1[0x1f];
  *(undefined4 *)(param_1[0x1f] + 8) = param_1[0x1f];
  param_1[0x20] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004a8ef0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004aa500 @ 004aa500 ////

void FUN_004aa500(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6a3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x84);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004aa420(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104a898[1])();
  DAT_0104a8ac = puVar2;
  (*(code *)*DAT_0104a898)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004aa580 @ 004aa580 ////

void __fastcall FUN_004aa580(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004aa5b0 @ 004aa5b0 ////

void FUN_004aa5b0(void)

{
  return;
}


//// FUNCTION FUN_004aa620 @ 004aa620 ////

void __fastcall FUN_004aa620(int *param_1)

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
  puStack_8 = &LAB_00ca6a58;
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


//// FUNCTION FUN_004aa6f0 @ 004aa6f0 ////

void __fastcall FUN_004aa6f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1dc98;
  param_1[0xe] = &PTR_LAB_00d1dc78;
  local_4 = 0;
  if ((undefined4 *)param_1[0x2c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2c] = param_1[0x2b];
  }
  if (param_1[0x2b] != 0) {
    *(undefined4 *)(param_1[0x2b] + 4) = param_1[0x2c];
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if (10 < (uint)param_1[0x24]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x22]);
  }
  if (10 < (uint)param_1[0x1c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004aa7c0 @ 004aa7c0 ////

void __fastcall FUN_004aa7c0(int param_1)

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
  puStack_8 = &LAB_00ca6ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ReviewItemData.cpp";
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Value");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ReviewItemData.cpp";
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
  uVar3 = FUN_0098b490("ToolTipWeight");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x2c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ReviewItemData.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0xc;
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
  uVar3 = FUN_0098b490("Text");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x30));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ReviewItemData.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0xd;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("ToolTip");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x50));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ReviewItemData.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    local_2c = local_20;
    DAT_010581d4 = 0xe;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("Locked");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x70),1);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004aac40 @ 004aac40 ////

undefined4 * __thiscall FUN_004aac40(void *this,byte param_1)

{
  FUN_004aa6f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004aac60 @ 004aac60 ////

undefined4 * __thiscall
FUN_004aac60(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6b0a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d1dc78;
  *(undefined ***)this = &PTR_FUN_00d1dc98;
  *(undefined4 *)((int)this + 100) = param_4;
  *(undefined4 *)((int)this + 0x68) = (undefined2 *)((int)this + 0x74);
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x68),(wchar_t *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x88) = (undefined2 *)((int)this + 0x94);
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x88),(wchar_t *)*param_3,param_3[1]);
  *(undefined1 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(void **)((int)this + 0xb4) = this;
  FUN_00acdb9e(0xe5137c);
  iVar1 = FUN_0097dda0();
  *(int *)((int)this + 0xb8) = iVar1;
  if (s___AV__CP_VCStudioReview_TM___TM__00e51358[0x22] != '\0') {
    iVar1 = 0xac;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe5137c);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__CP_VCStudioReview_TM___TM__00e51358[0x22] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004aad90 @ 004aad90 ////

undefined4 * __fastcall FUN_004aad90(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6b5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1dc98;
  param_1[0xe] = &PTR_LAB_00d1dc78;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = param_1 + 0x1d;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 10;
  param_1[0x22] = param_1 + 0x25;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 10;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x2d] = param_1;
  FUN_00acdb9e(0xe5137c);
  iVar1 = FUN_0097dda0();
  param_1[0x2e] = iVar1;
  if (s__PAVCReviewItemData_TM___00e51384[0x19] != '\0') {
    iVar1 = 0xac;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe5137c);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s__PAVCReviewItemData_TM___00e51384[0x19] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004aaea0 @ 004aaea0 ////

void __fastcall FUN_004aaea0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1dcec;
  param_1[1] = 0;
  param_1[2] = 0x3c23d70a;
  return;
}


//// FUNCTION FUN_004aaef0 @ 004aaef0 ////

void FUN_004aaef0(void)

{
  return;
}


//// FUNCTION FUN_004aaf20 @ 004aaf20 ////

void FUN_004aaf20(void)

{
  SetEvent(DAT_0104a8b4);
  WaitForSingleObject(DAT_0104a8b0,0xffffffff);
  CloseHandle(DAT_0104a8b0);
  CloseHandle(DAT_0104a8b4);
  CloseHandle(DAT_0104a8b8);
  DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  return;
}


//// FUNCTION FUN_004aaf80 @ 004aaf80 ////

undefined4 __fastcall FUN_004aaf80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return CONCAT31((int3)(iVar1 >> 0xb),iVar1 >> 3 == 0);
}


//// FUNCTION FUN_004ab300 @ 004ab300 ////

void __fastcall FUN_004ab300(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float local_14;
  undefined4 local_10;
  undefined4 local_c [3];
  
  if (*(char *)(param_1 + 0xb4) != '\0') {
    pfVar1 = (float *)(param_1 + 0x84);
    FUN_0046d650(pfVar1,0,4,0,(float *)(*(int *)(param_1 + 0x80) + 0xcc));
    puVar2 = (undefined4 *)FUN_0097fa60(*(void **)(*(int *)(param_1 + 0x80) + 0x11c),local_c);
    FUN_009840b0(&local_14,puVar2);
    *pfVar1 = local_14;
    *(undefined4 *)(param_1 + 0x88) = local_10;
    FUN_0046d650(pfVar1,0,4,1,(float *)(*(int *)(param_1 + 0x80) + 0xcc));
  }
  return;
}


//// FUNCTION FUN_004ab390 @ 004ab390 ////

void __fastcall FUN_004ab390(int param_1)

{
  *(undefined4 *)(param_1 + 0x94) = 0x461c3c00;
  *(undefined4 *)(param_1 + 0x98) = 0x461c3c00;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  return;
}


//// FUNCTION FUN_004ab440 @ 004ab440 ////

void __fastcall FUN_004ab440(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  
  if ((*(int *)(param_1 + 0x60) == 0) ||
     (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 3 == 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x80) + 0x140))();
  fVar1 = (float)fVar6;
  fVar2 = (float)(fVar6 * (float10)0.5);
  iVar5 = FUN_005998e0(*(int *)(param_1 + 0x80));
  if ((*(char *)(*(int *)(iVar5 + 0x25c) + 0x2b3) == '\0') ||
     (fVar3 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x94),
     fVar4 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x98),
     fVar3 = fVar3 * fVar3 + fVar4 * fVar4, 3.0 <= fVar3)) {
    fVar3 = *(float *)(param_1 + 8) + *(float *)(param_1 + 4);
    *(float *)(param_1 + 4) = fVar3;
    if (fVar1 < fVar3) {
      *(float *)(param_1 + 4) = fVar1;
    }
    if (*(float *)(param_1 + 4) < fVar2) {
      *(float *)(param_1 + 4) = fVar2;
      return;
    }
  }
  else {
    fVar2 = fVar3 * 0.33333334 * (fVar1 - fVar2) + fVar2;
    if ((fVar2 < *(float *)(param_1 + 4)) ||
       (*(float *)(param_1 + 4) < 0.0 != (*(float *)(param_1 + 4) == 0.0))) {
      *(float *)(param_1 + 4) = fVar2;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_004ab550 @ 004ab550 ////

void __fastcall FUN_004ab550(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00598ee0(*(int *)(param_1 + 0x80));
  if ((char)uVar1 == '\0') {
    FUN_00990e30(2.5,7.5);
    FUN_0046bdd0();
  }
  else {
    FUN_0046bdd0();
  }
  uVar2 = FUN_00acd42c();
  *(int *)(param_1 + 0xa8) = (int)uVar2;
  if (*(int *)(param_1 + 0xa8) < 1) {
    *(undefined4 *)(param_1 + 0xa8) = 1;
  }
  return;
}


//// FUNCTION FUN_004ab6f0 @ 004ab6f0 ////

void __fastcall FUN_004ab6f0(int param_1)

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


//// FUNCTION FUN_004ab870 @ 004ab870 ////

void __cdecl FUN_004ab870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004ab8a0 @ 004ab8a0 ////

void __cdecl FUN_004ab8a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004ab980 @ 004ab980 ////

void FUN_004ab980(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1c);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_004ab9a0 @ 004ab9a0 ////

void __fastcall FUN_004ab9a0(int param_1)

{
  FUN_004ab6f0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004ab9c0 @ 004ab9c0 ////

void FUN_004ab9c0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_004ab9f0 @ 004ab9f0 ////

void FUN_004ab9f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
    puVar1[6] = param_3[4];
  }
  return;
}


//// FUNCTION FUN_004abad0 @ 004abad0 ////

int * __cdecl FUN_004abad0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
    piVar1 = (int *)*DAT_0104a8fc;
    if (piVar1 != DAT_0104a8fc) {
      while (piVar1[2] != param_1) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == DAT_0104a8fc) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
          return (int *)0x0;
        }
      }
      piVar2 = piVar1 + 2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  }
  return piVar2;
}


//// FUNCTION FUN_004abb60 @ 004abb60 ////

void __fastcall FUN_004abb60(int param_1)

{
  FUN_004ab6f0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004abb90 @ 004abb90 ////

void __fastcall FUN_004abb90(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)**(int **)(param_1 + 4);
  if (_Memory != *(int **)(param_1 + 4)) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_004abc50 @ 004abc50 ////

void __fastcall FUN_004abc50(int param_1)

{
  bool bVar1;
  float *pfVar2;
  void *pvVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24 [2];
  undefined1 auStack_1c [12];
  undefined1 auStack_10 [16];
  
  if (*(int *)(param_1 + 0x60) == 0) {
    return;
  }
  if (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 3 == 0) {
    return;
  }
  local_50 = *(float *)(*(int *)(param_1 + 100) + -8);
  local_4c = *(float *)(*(int *)(param_1 + 100) + -4);
  local_c8 = local_4c - *(float *)(param_1 + 0x88);
  local_c4 = local_50 - *(float *)(param_1 + 0x84);
  local_c0 = local_c8;
  local_94 = local_c4;
  local_90 = local_c8;
  FUN_00412c90(&local_94);
  fVar6 = 0.35;
  local_90 = local_90 * *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x84) = local_94 * *(float *)(param_1 + 4) + *(float *)(param_1 + 0x84);
  *(float *)(param_1 + 0x88) = local_90 + *(float *)(param_1 + 0x88);
  local_94 = *(float *)(*(int *)(param_1 + 0x80) + 0xc4);
  fVar5 = (float10)fpatan((float10)local_c8,(float10)local_c4);
  local_c8 = (float)fVar5;
  fVar5 = FUN_004012c0(local_c8);
  fVar7 = (float)fVar5;
  fVar5 = FUN_004012c0(local_94);
  pfVar2 = FUN_00429400(&local_c8,(float)fVar5,fVar7,fVar6);
  local_74 = *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x84);
  local_94 = *pfVar2;
  local_70 = *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x88);
  local_6c = 0.0;
  bVar1 = false;
  local_b8 = 0.0;
  local_b4 = 0.0;
  local_b0 = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = 0.0;
  (**(code **)(**(int **)(param_1 + 0x80) + 0x48))(local_24);
  pvVar3 = FUN_00458d80(DAT_00f88720,&fStack_78,6.0);
  piVar4 = *(int **)((int)pvVar3 + 4);
  if (piVar4 != *(int **)((int)pvVar3 + 8)) {
    do {
      if ((int *)*piVar4 != *(int **)(param_1 + 0x80)) {
        pfVar2 = (float *)(**(code **)(*(int *)*piVar4 + 0x34))(auStack_1c);
        local_90 = *pfVar2;
        fStack_8c = pfVar2[1];
        fStack_88 = pfVar2[2];
        local_c8 = local_90 - fStack_78;
        local_c4 = fStack_8c - local_74;
        local_c0 = fStack_88 - local_70;
        fStack_40 = local_c8;
        fStack_3c = local_c4;
        fStack_38 = local_c0;
        if (local_c0 * local_c0 + local_c8 * local_c8 + local_c4 * local_c4 < 1e-12) {
          fVar5 = FUN_00990e30(-1e-06,1e-06);
          local_c8 = (float)fVar5;
          fVar5 = FUN_00990e30(-1e-06,1e-06);
          local_c4 = (float)fVar5;
        }
        fVar5 = FUN_00412e20(&local_c8);
        if ((float10)0.5 <= fVar5) {
          if (!bVar1) {
            local_4c = fStack_78 - local_90;
            fStack_48 = local_74 - fStack_8c;
            fStack_44 = local_70 - fStack_88;
            fStack_34 = local_4c;
            fStack_30 = fStack_48;
            fStack_2c = fStack_44;
            pfVar2 = (float *)(**(code **)(*(int *)*piVar4 + 0x48))(auStack_10);
            fStack_84 = *pfVar2;
            fStack_80 = pfVar2[1];
            fStack_7c = pfVar2[2];
            fVar7 = fStack_80 * fStack_48 + fStack_7c * fStack_44 + fStack_84 * local_4c;
            if (fVar7 < 0.0) {
              fVar7 = 0.0;
            }
            fStack_28 = fStack_84 * fVar7;
            local_24[0] = fStack_80 * fVar7;
            fStack_8c = local_24[0] + fStack_8c;
            fStack_88 = fVar7 * fStack_7c + fStack_88;
            fStack_a4 = (fStack_28 + local_90) - fStack_78;
            fStack_ac = fStack_8c - local_74;
            fStack_a8 = fStack_88 - local_70;
            local_b0 = fStack_a4;
            if (fStack_ac * fStack_ac + fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4 < 0.001) {
              local_b0 = 0.001;
            }
            fStack_a0 = fStack_ac;
            fStack_9c = fStack_a8;
            fVar5 = FUN_00412e20(&local_b0);
            fVar5 = ((float10)6.0 - fVar5) * (float10)0.16666667;
            fStack_ac = (float)((float10)fStack_ac * fVar5);
            fStack_a8 = (float)((float10)fStack_a8 * fVar5);
            fStack_bc = (float)((float10)fStack_bc - (float10)local_b0 * fVar5);
            local_b8 = local_b8 - fStack_ac;
            local_b4 = local_b4 - fStack_a8;
          }
        }
        else {
          bVar1 = true;
          fVar5 = ((float10)0.5 - fVar5) + ((float10)0.5 - fVar5);
          local_c4 = (float)(fVar5 * (float10)local_c4);
          local_c0 = (float)((float10)local_c0 * fVar5);
          local_6c = (float)((float10)local_6c - (float10)local_c8 * fVar5);
          local_68 = local_68 - local_c4;
          local_64 = local_64 - local_c0;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)((int)pvVar3 + 8));
    if (bVar1) {
      fVar7 = 0.5;
      fStack_bc = local_6c * 5.0;
      local_b8 = local_68 * 5.0;
      local_b4 = local_64 * 5.0;
      fStack_a4 = fStack_bc;
      fStack_a0 = local_b8;
      fStack_9c = local_b4;
      goto LAB_004ac178;
    }
  }
  fVar7 = 0.1;
  fStack_bc = fStack_bc + fStack_bc;
  local_b8 = local_b8 + local_b8;
  local_b4 = local_b4 + local_b4;
LAB_004ac178:
  fStack_84 = fStack_bc;
  fStack_80 = local_b8;
  fStack_7c = local_b4;
  fVar5 = FUN_00412e20(&fStack_84);
  if ((float10)1.25 < fVar5) {
    fStack_bc = fStack_84 * 1.25;
    local_b8 = fStack_80 * 1.25;
    local_b4 = fStack_7c * 1.25;
    fStack_a4 = fStack_bc;
    fStack_a0 = local_b8;
    fStack_9c = local_b4;
  }
  fStack_54 = *(float *)(param_1 + 0x84) - fStack_54;
  fVar6 = *(float *)(param_1 + 0x88) - local_50;
  fVar6 = SQRT(fStack_54 * fStack_54 + fVar6 * fVar6);
  if (fVar6 < 1.25) {
    fVar6 = fVar6 * 0.8;
    fStack_bc = fStack_bc * fVar6;
    local_b8 = local_b8 * fVar6;
    local_b4 = local_b4 * fVar6;
  }
  fStack_58 = local_b4;
  local_60 = fStack_bc - *(float *)(param_1 + 0x8c);
  fStack_5c = local_b8 - *(float *)(param_1 + 0x90);
  fVar5 = FUN_00412e20(&local_60);
  if (fVar5 < (float10)fVar7) {
    FUN_009840b0(&local_c8,&fStack_bc);
    *(float *)(param_1 + 0x8c) = local_c8;
    *(float *)(param_1 + 0x90) = local_c4;
  }
  else {
    local_60 = local_60 * fVar7;
    fStack_5c = fStack_5c * fVar7;
    fStack_58 = fStack_58 * fVar7;
    FUN_009840b0(&local_c8,&local_60);
    *(float *)(param_1 + 0x8c) = local_c8 + *(float *)(param_1 + 0x8c);
    *(float *)(param_1 + 0x90) = local_c4 + *(float *)(param_1 + 0x90);
  }
  FUN_004012c0(fStack_98);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x28))(&fStack_78,&stack0xffffff34);
  return;
}


//// FUNCTION FUN_004ac340 @ 004ac340 ////

void __thiscall FUN_004ac340(void *this,uint param_1)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int local_14;
  float local_10;
  float local_c;
  
  if ((*(int *)((int)this + 0x60) != 0) &&
     (*(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 3 != 0)) {
    pfVar4 = *(float **)((int)this + 100);
    local_14 = *(int *)((int)this + 0xa8);
    local_10 = pfVar4[-2];
    local_c = pfVar4[-1];
    pfVar1 = pfVar4;
    if (pfVar4 != *(float **)((int)this + 0x60)) {
      do {
        pfVar3 = pfVar1 + -2;
        if (local_14 == 0) {
          return;
        }
        uVar2 = FUN_0046d9f0(pfVar3,&local_10);
        if ((char)uVar2 == '\0') {
          local_10 = *pfVar3;
          local_c = pfVar1[-1];
          FUN_0046d620(&local_10,0,8,param_1);
          local_14 = local_14 + -1;
        }
        pfVar4 = pfVar4 + -2;
        pfVar1 = pfVar3;
      } while (pfVar4 != *(float **)((int)this + 0x60));
    }
  }
  return;
}


//// FUNCTION FUN_004ac3f0 @ 004ac3f0 ////

int __fastcall FUN_004ac3f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004ab980();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004ac410 @ 004ac410 ////

int __fastcall FUN_004ac410(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004ab9c0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004ac430 @ 004ac430 ////

void __thiscall FUN_004ac430(void *this,uint param_1)

{
  if (*(char *)((int)this + 0xb4) == '\0') {
    FUN_0046d650((float *)((int)this + 0x84),0,4,param_1,
                 (float *)(*(int *)((int)this + 0x80) + 0xcc));
    FUN_004ac340(this,param_1);
  }
  return;
}


//// FUNCTION FUN_004ac470 @ 004ac470 ////

void __fastcall FUN_004ac470(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3 != 0)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  }
  return;
}


//// FUNCTION FUN_004ac490 @ 004ac490 ////

void __fastcall FUN_004ac490(void *param_1)

{
  if (*(char *)((int)param_1 + 0xb4) == '\0') {
    FUN_0046d650((float *)((int)param_1 + 0x84),0,4,1,
                 (float *)(*(int *)((int)param_1 + 0x80) + 0xcc));
    FUN_004ac340(param_1,1);
    *(undefined1 *)((int)param_1 + 0xb4) = 1;
  }
  return;
}


//// FUNCTION FUN_004ac4d0 @ 004ac4d0 ////

void __fastcall FUN_004ac4d0(void *param_1)

{
  if (*(char *)((int)param_1 + 0xb4) != '\0') {
    *(undefined1 *)((int)param_1 + 0xb4) = 0;
    FUN_0046d650((float *)((int)param_1 + 0x84),0,4,0,
                 (float *)(*(int *)((int)param_1 + 0x80) + 0xcc));
    FUN_004ac340(param_1,0);
  }
  return;
}


//// FUNCTION FUN_004ac510 @ 004ac510 ////

void __fastcall FUN_004ac510(int param_1)

{
  int iVar1;
  
  while ((iVar1 = *(int *)(param_1 + 0x60), iVar1 != 0 &&
         (*(int *)(param_1 + 100) - iVar1 >> 3 != 0))) {
    if ((iVar1 != 0) && (*(int *)(param_1 + 100) - iVar1 >> 3 != 0)) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -8;
    }
    if (*(char *)(param_1 + 0x9c) != '\0') {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_004ac560 @ 004ac560 ////

void __fastcall FUN_004ac560(void *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)((int)param_1 + 0xb4);
  *(undefined1 *)((int)param_1 + 0xb4) = 0;
  FUN_004ac340(param_1,0);
  FUN_004ac510((int)param_1);
  *(undefined1 *)((int)param_1 + 0xb4) = uVar1;
  return;
}


//// FUNCTION FUN_004ac590 @ 004ac590 ////

void __fastcall FUN_004ac590(int param_1)

{
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


//// FUNCTION FUN_004ac5c0 @ 004ac5c0 ////

void __fastcall FUN_004ac5c0(int param_1)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar3 = 0.1;
  fVar2 = (float10)fpatan((float10)*(float *)(param_1 + 0x98) - (float10)*(float *)(param_1 + 0x88),
                          (float10)*(float *)(param_1 + 0x94) - (float10)*(float *)(param_1 + 0x84))
  ;
  local_10 = (float)fVar2;
  fVar1 = *(float *)(*(int *)(param_1 + 0x80) + 0xc4);
  fVar2 = FUN_004012c0(local_10);
  FUN_00429400(&local_10,fVar1,(float)fVar2,fVar3);
  local_8 = *(undefined4 *)(param_1 + 0x98);
  local_c = *(undefined4 *)(param_1 + 0x94);
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0x80) + 0x28))(&local_c,&local_10);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x98);
  FUN_004ac510(param_1);
  return;
}


//// FUNCTION FUN_004ac670 @ 004ac670 ////

void __thiscall FUN_004ac670(void *this,int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  while( true ) {
    if (*(int *)(param_1 + 4) == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = iVar1 - *(int *)(param_1 + 4) >> 3;
    if (iVar4 == 0) break;
    fVar2 = *param_2 - *(float *)(iVar1 + -8);
    fVar3 = param_2[1] - *(float *)(iVar1 + -4);
    if (*(float *)((int)this + 4) * *(float *)((int)this + 4) + 1e-05 <=
        fVar3 * fVar3 + fVar2 * fVar2) {
      return;
    }
    if (iVar4 != 0) {
      *(int *)(param_1 + 8) = iVar1 + -8;
    }
    if (*(char *)((int)this + 0x9c) != '\0') {
      *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + -1;
    }
  }
  return;
}


//// FUNCTION FUN_004ac6f0 @ 004ac6f0 ////

void FUN_004ac6f0(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  void *this;
  undefined4 *puVar3;
  
  puVar3 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      this = *(void **)(puVar3[2] + 0x5d8);
      uVar2 = *(undefined1 *)((int)this + 0xb4);
      *(undefined1 *)((int)this + 0xb4) = 0;
      FUN_004ac340(this,0);
      FUN_004ac510((int)this);
      *(undefined1 *)((int)this + 0xb4) = uVar2;
      puVar1 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  return;
}


//// FUNCTION FUN_004ac740 @ 004ac740 ////

void __fastcall FUN_004ac740(int param_1)

{
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


//// FUNCTION FUN_004ac770 @ 004ac770 ////

void __fastcall FUN_004ac770(void *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)((int)param_1 + 0xb4);
  *(undefined1 *)((int)param_1 + 0xb4) = 0;
  FUN_004ac340(param_1,0);
  FUN_004ac510((int)param_1);
  *(undefined1 *)((int)param_1 + 0xb4) = uVar1;
  return;
}


//// FUNCTION FUN_004ac7a0 @ 004ac7a0 ////

void __thiscall FUN_004ac7a0(void *this,uint param_1)

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
  puStack_8 = &LAB_00ca6b78;
  local_c = ExceptionList;
  if (0xcccccccU - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_004ac840 @ 004ac840 ////

void __thiscall FUN_004ac840(void *this,uint param_1)

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
  puStack_8 = &LAB_00ca6b98;
  local_c = ExceptionList;
  if (0x6666666U - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_004ac8e0 @ 004ac8e0 ////

void * __thiscall FUN_004ac8e0(void *this,byte param_1)

{
  FUN_004ac740((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004ac900 @ 004ac900 ////

void __thiscall FUN_004ac900(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca6bb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x1fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_0046e880();
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
    FUN_004ab870(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
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


//// FUNCTION FUN_004aca10 @ 004aca10 ////

int __thiscall FUN_004aca10(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca6bc0;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x1fffffff < uVar1) {
      uVar1 = FUN_0046e880();
    }
    puVar2 = operator_new(uVar1 * 8);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1 * 2;
    local_8 = 0;
    uVar3 = FUN_004ab8a0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_004acae0 @ 004acae0 ////

void * __thiscall FUN_004acae0(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (this == param_1) {
    return this;
  }
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (int)*(undefined4 **)((int)param_1 + 8) - (int)puVar1 >> 3;
    if (uVar3 != 0) {
      _Memory = *(undefined4 **)((int)this + 4);
      if (_Memory == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)this + 8) - (int)_Memory >> 3;
      }
      if (uVar3 <= uVar4) {
        FUN_0046d100(puVar1,*(undefined4 **)((int)param_1 + 8),_Memory);
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 3) * 8;
        return this;
      }
      if (_Memory == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)this + 0xc) - (int)_Memory >> 3;
      }
      if (uVar4 < uVar3) {
        if (_Memory != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 3;
        }
        uVar2 = FUN_0046e960(this,uVar3);
        if ((char)uVar2 == '\0') {
          return this;
        }
        uVar2 = FUN_0046e1a0(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                             *(undefined4 **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar2;
        return this;
      }
      if (_Memory == (undefined4 *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)_Memory >> 3;
      }
      puVar1 = *(undefined4 **)((int)param_1 + 4) + iVar5 * 2;
      FUN_0046d100(*(undefined4 **)((int)param_1 + 4),puVar1,_Memory);
      uVar2 = FUN_0046dd70(puVar1,*(undefined4 **)((int)param_1 + 8),*(undefined4 **)((int)this + 8)
                          );
      *(undefined4 *)((int)this + 8) = uVar2;
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


//// FUNCTION FUN_004acc80 @ 004acc80 ////

void __fastcall FUN_004acc80(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
    FUN_004ac740((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_004acd10 @ 004acd10 ////

undefined4 * __thiscall FUN_004acd10(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6bf1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004aaea0(this);
  FUN_0053d690((undefined4 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = &PTR_LAB_00d1dd2c;
  *(undefined ***)this = &PTR_FUN_00d1dd20;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  piVar1 = (int *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x78) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 **)((int)this + 0x78) = (undefined4 *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x6c) = &PTR_FUN_00d165ac;
  *(int *)((int)this + 0x80) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x74) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  iVar3 = *(int *)(*(int *)((int)this + 0x80) + 0x11c);
  local_18 = *(undefined4 *)(iVar3 + 0x3c);
  local_14 = *(undefined4 *)(iVar3 + 0x40);
  local_10 = *(undefined4 *)(iVar3 + 0x44);
  local_4 = 2;
  FUN_009840b0((float *)((int)this + 0x84),&local_18);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0x461c3c00;
  *(undefined4 *)((int)this + 0x98) = 0x461c3c00;
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0xb5) = 0;
  *(undefined1 *)((int)this + 0xb6) = 0;
  FUN_004ab550((int)this);
  FUN_004ac900((void *)((int)this + 0x5c),0x80);
  if (*(char *)((int)this + 0xb4) == '\0') {
    FUN_0046d650((float *)((int)this + 0x84),0,4,1,(float *)(*(int *)((int)this + 0x80) + 0xcc));
    FUN_004ac340(this,1);
    *(undefined1 *)((int)this + 0xb4) = 1;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004acea0 @ 004acea0 ////

int __cdecl FUN_004acea0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  local_14 = *param_1;
  local_10 = param_1[1];
  local_c = param_1[2];
  local_8 = param_1[3];
  local_4 = param_1[4];
  bVar1 = false;
  if (local_14 == 0) {
    if (DAT_00e513e0 == 0) {
      DAT_00e513e0 = 1;
    }
    iVar3 = DAT_00e513e0 + 1;
    local_14 = DAT_00e513e0;
  }
  else {
    piVar2 = (int *)*DAT_0104a8f0;
    iVar3 = DAT_00e513e0;
    if (piVar2 != DAT_0104a8f0) {
      do {
        if (piVar2[2] == local_14) {
          piVar2[3] = local_10;
          piVar2[4] = local_c;
          piVar2[5] = local_8;
          piVar2[6] = local_4;
          bVar1 = true;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != DAT_0104a8f0);
      iVar3 = DAT_00e513e0;
      if (bVar1) goto LAB_004acf5b;
    }
  }
  DAT_00e513e0 = iVar3;
  piVar2 = DAT_0104a8f0 + 1;
  iVar3 = FUN_004ab9f0(DAT_0104a8f0,DAT_0104a8f0[1],&local_14);
  FUN_004ac7a0(&DAT_0104a8ec,1);
  *piVar2 = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
LAB_004acf5b:
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  SetEvent(DAT_0104a8b8);
  return local_14;
}


//// FUNCTION FUN_004acfd0 @ 004acfd0 ////

void __fastcall FUN_004acfd0(int param_1)

{
  FUN_004acc80(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004acff0 @ 004acff0 ////

undefined4 * __thiscall
FUN_004acff0(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = *param_3;
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)((int)param_3 + 5);
  *(undefined4 *)((int)this + 0x10) = param_3[2];
  *(undefined4 *)((int)this + 0x14) = param_3[3];
  *(undefined4 *)((int)this + 0x18) = param_3[4];
  *(undefined4 *)((int)this + 0x1c) = param_3[5];
  FUN_004aca10((void *)((int)this + 0x20),(int)(param_3 + 6));
  return this;
}


//// FUNCTION FUN_004ad040 @ 004ad040 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_004ad040(float *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float local_60;
  float local_5c;
  float local_58;
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
  float local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ca6c0e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((DAT_0104a930 & 1) == 0) {
    DAT_0104a930 = DAT_0104a930 | 1;
    DAT_0104a924 = (void *)0x0;
    DAT_0104a928 = 0;
    _DAT_0104a92c = 0;
    ExceptionList = &local_14;
    _atexit(FUN_00d11650);
  }
  local_c = 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  _DAT_0104a918 = *param_2;
  _DAT_0104a91c = param_2[1];
  DAT_0104a90d = 0;
  DAT_0104a90c = 0;
  local_48 = *param_2 - *param_1;
  local_44 = param_2[1] - param_1[1];
  FUN_00412c90(&local_48);
  local_54 = (*param_1 - *param_2) * (*param_1 - *param_2) +
             (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]);
  if (local_54 <= _DAT_00e513e4) {
    DAT_0104a90c = '\0';
    local_38 = *param_2;
    local_34 = param_2[1];
  }
  else {
    DAT_0104a90c = '\x01';
    local_40 = local_48 * 80.0 + *param_1;
    local_3c = local_44 * 80.0 + param_1[1];
    local_38 = local_40;
    local_34 = local_3c;
    pfVar1 = (float *)FUN_0046d1c0(&local_28,&local_38,0x81);
    local_38 = *pfVar1;
    local_34 = pfVar1[1];
  }
  DAT_0104a90d = 0;
  uVar2 = FUN_0046f310(&DAT_0104a920,param_1,&local_38);
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
    if ((DAT_0104a930 & 2) == 0) {
      _DAT_0104a904 = _DAT_00e51400 * _DAT_00e51400;
      DAT_0104a930 = DAT_0104a930 | 2;
    }
    if (_DAT_0104a904 < local_54) {
      local_3c = local_44;
      DAT_0104a90c = '\x01';
      local_40 = local_48;
      local_60 = SQRT(local_54) * 0.5;
      FUN_00412c90(&local_40);
      local_5c = local_40 * local_60 + *param_1;
      local_58 = local_3c * local_60 + param_1[1];
      pfVar1 = (float *)FUN_0046d1c0(&local_28,&local_5c,0x81);
      local_50 = *pfVar1;
      local_4c = pfVar1[1];
      if ((local_5c - local_50) * (local_5c - local_50) * 4.0 +
          (local_58 - local_4c) * (local_58 - local_4c) * 4.0 <
          (*param_1 - local_50) * (*param_1 - local_50) +
          (param_1[1] - local_4c) * (param_1[1] - local_4c)) {
        uVar3 = FUN_0046f310(&DAT_0104a920,param_1,&local_50);
        uVar2 = uVar3 & 0xff;
        if ((char)uVar3 != '\0') goto LAB_004ad480;
      }
      local_5c = 1.0;
      if (_DAT_00e51400 < local_60) {
        do {
          if ((char)uVar2 != '\0') goto LAB_004ad480;
          local_40 = local_44 * local_5c + local_48;
          local_3c = -(local_48 * local_5c) + local_44;
          local_30 = local_40;
          local_2c = local_3c;
          FUN_00412c90(&local_40);
          local_50 = local_40 * local_60 + *param_1;
          local_4c = local_3c * local_60 + param_1[1];
          local_28 = local_50;
          local_24 = local_4c;
          pfVar1 = (float *)FUN_0046d1c0(local_20,&local_50,0x81);
          local_50 = *pfVar1;
          local_4c = pfVar1[1];
          if (4.0 < (*param_1 - local_50) * (*param_1 - local_50) +
                    (param_1[1] - local_4c) * (param_1[1] - local_4c)) {
            uVar2 = FUN_0046f310(&DAT_0104a920,param_1,&local_50);
            uVar2 = uVar2 & 0xff;
          }
          local_60 = local_60 * 0.5;
          local_5c = local_5c + 1.0;
        } while (_DAT_00e51400 < local_60);
        if ((char)uVar2 != '\0') goto LAB_004ad480;
      }
    }
    if (DAT_0104a924 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104a924);
    }
    DAT_0104a924 = (void *)0x0;
    DAT_0104a928 = 0;
    _DAT_0104a92c = 0;
    FUN_0046eda0(&DAT_0104a920,&local_38);
    DAT_0104a90c = '\0';
    if (local_54 <= _DAT_00e51400 * _DAT_00e51400) {
      DAT_0104a90d = 0;
    }
    else {
      DAT_0104a90d = 1;
    }
  }
  else {
LAB_004ad480:
    if (DAT_0104a90c != '\0') {
      if (DAT_0104a924 == (void *)0x0) {
        _DAT_0104a910 = 0;
        _DAT_0104a914 = 0;
      }
      else {
        _DAT_0104a910 = DAT_0104a928 - (int)DAT_0104a924 >> 3;
        _DAT_0104a914 = _DAT_0104a910 - (DAT_0104a928 - (int)DAT_0104a924 >> 0x1f) >> 1;
      }
      goto LAB_004ad455;
    }
  }
  _DAT_0104a910 = 0;
LAB_004ad455:
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  ExceptionList = local_14;
  return &DAT_0104a908;
}


//// FUNCTION FUN_004ad4d0 @ 004ad4d0 ////

void __cdecl FUN_004ad4d0(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
    for (piVar1 = (int *)*DAT_0104a8f0; piVar1 != DAT_0104a8f0; piVar1 = (int *)*piVar1) {
      if (piVar1[2] == param_1) {
        if (piVar1 != DAT_0104a8f0) {
          *(int *)piVar1[1] = *piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
          _free(piVar1);
        }
        break;
      }
    }
    piVar1 = (int *)*DAT_0104a8fc;
    if (piVar1 != DAT_0104a8fc) {
      while (piVar1[2] != param_1) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == DAT_0104a8fc) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
          return;
        }
      }
      if (piVar1 != DAT_0104a8fc) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        FUN_004ac740((int)piVar1);
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  }
  return;
}


//// FUNCTION FUN_004ad590 @ 004ad590 ////

void __fastcall FUN_004ad590(int param_1)

{
  FUN_004acc80(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004ad5b0 @ 004ad5b0 ////

void * FUN_004ad5b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca6c31;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x30);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_004acff0(this,param_1,param_2,param_3);
  }
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_004ad630 @ 004ad630 ////

void __fastcall FUN_004ad630(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6c7d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1dd20;
  param_1[3] = &PTR_LAB_00d1dd2c;
  local_4 = 2;
  FUN_004ad4d0(param_1[0x2b]);
  if (*(char *)(param_1 + 0x2d) != '\0') {
    *(undefined1 *)(param_1 + 0x2d) = 0;
    FUN_0046d650((float *)(param_1 + 0x21),0,4,0,(float *)(param_1[0x20] + 0xcc));
    FUN_004ac340(param_1,0);
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1d] = param_1[0x1c];
  }
  if (param_1[0x1c] != 0) {
    *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1d];
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1d] = param_1[0x1c];
  }
  if (param_1[0x1c] != 0) {
    *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1d];
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if ((void *)param_1[0x18] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1 + 3);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004ad750 @ 004ad750 ////

void __thiscall FUN_004ad750(void *this,undefined4 *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float *pfVar7;
  int *piVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  int extraout_ECX;
  float unaff_ESI;
  float10 fVar13;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  float local_14;
  undefined4 uStack_10;
  
  local_38 = *param_1;
  local_34 = param_1[1];
  local_30 = (float)param_1[2];
  if (*(char *)((int)this + 0xb4) == '\0') {
    return;
  }
  pfVar1 = (float *)((int)this + 0x84);
  *(undefined1 *)((int)this + 0xb4) = 0;
  FUN_0046d650(pfVar1,0,4,0,(float *)(*(int *)((int)this + 0x80) + 0xcc));
  FUN_004ac340(this,0);
  local_28 = *(undefined4 *)((int)this + 0x90);
  local_2c = *(float *)((int)this + 0x8c);
  pfVar7 = (float *)(**(code **)(**(int **)((int)this + 0x80) + 0x34))(&local_14);
  fStack_1c = pfVar7[2];
  fStack_20 = pfVar7[1] - local_2c;
  fStack_24 = *pfVar7 - local_30;
  FUN_009840b0(&stack0xffffffbc,&fStack_24);
  *pfVar1 = unaff_ESI;
  *(float *)((int)this + 0x88) = fStack_40;
  FUN_009840b0(&stack0xffffffbc,&uStack_3c);
  fVar2 = *(float *)((int)this + 0x88) - fStack_40;
  if ((*pfVar1 - unaff_ESI) * (*pfVar1 - unaff_ESI) + fVar2 * fVar2 <
      *(float *)((int)this + 4) * *(float *)((int)this + 4) + 1e-05) {
    FUN_009840b0(&stack0xffffffbc,&uStack_3c);
    *(float *)((int)this + 0x98) = fStack_40;
    *(undefined1 *)((int)this + 0xb6) = 1;
    *(float *)((int)this + 0x94) = unaff_ESI;
    FUN_004ac5c0((int)this);
    FUN_004ac490(this);
    return;
  }
  if (*(int *)((int)this + 0xac) != 0) {
    piVar8 = FUN_004abad0(*(int *)((int)this + 0xac));
    *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    if (piVar8 != (int *)0x0) {
      iVar11 = piVar8[5];
      *(int *)((int)this + 0x94) = piVar8[4];
      *(undefined1 *)((int)this + 0xb6) = 1;
      *(int *)((int)this + 0x98) = iVar11;
      *(char *)((int)this + 0x9c) = (char)piVar8[1];
      *(undefined1 *)((int)this + 0xb5) = *(undefined1 *)((int)piVar8 + 5);
      *(int *)((int)this + 0xa0) = piVar8[2];
      *(int *)((int)this + 0xa4) = piVar8[3];
      FUN_004acae0((void *)((int)this + 0x5c),piVar8 + 6);
      if (*(int *)((int)this + 0x60) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 3;
      }
      while ((uVar12 = uVar12 - 1, 1 < uVar12 &&
             (iVar11 = *(int *)((int)this + 0x60),
             fVar2 = *(float *)(iVar11 + -8 + uVar12 * 8) - *pfVar1,
             fVar5 = *(float *)(iVar11 + -4 + uVar12 * 8) - *(float *)((int)this + 0x88),
             fVar4 = *(float *)(iVar11 + uVar12 * 8) - *pfVar1,
             fVar3 = *(float *)(iVar11 + 4 + uVar12 * 8) - *(float *)((int)this + 0x88),
             fVar2 * fVar2 + fVar5 * fVar5 <= fVar4 * fVar4 + fVar3 * fVar3))) {
        if ((*(int *)((int)this + 0x60) != 0) &&
           (*(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 3 != 0)) {
          *(int *)((int)this + 100) = *(int *)((int)this + 100) + -8;
        }
      }
      if ((*(int *)((int)this + 0x60) != 0) &&
         (2 < (uint)(*(int *)((int)this + 100) - *(int *)((int)this + 0x60) >> 3))) {
        FUN_004ac470((int)this + 0x5c);
      }
      FUN_004ad4d0(*(int *)((int)this + 0xac));
      *(undefined4 *)((int)this + 0xac) = 0;
      goto LAB_004adac4;
    }
  }
  if (((*(char *)((int)this + 0xb6) == '\0') || (*(char *)((int)this + 0xb5) != '\0')) ||
     ((*(char *)((int)this + 0x9c) != '\0' &&
      (*(int *)((int)this + 0xa0) < *(int *)((int)this + 0xa4))))) {
LAB_004ada5a:
    bVar6 = true;
  }
  else {
    uVar9 = FUN_004aaf80((int)this + 0x5c);
    if ((char)uVar9 != '\0') goto LAB_004ada5a;
    pfVar7 = (float *)((int)this + 0x94);
    pfVar10 = (float *)FUN_009840b0(&stack0xffffffbc,&uStack_3c);
    fVar13 = FUN_00451120(pfVar10,pfVar7);
    if ((((float10)1e-07 < fVar13) && (*(char *)((int)this + 0x9c) == '\0')) ||
       ((uVar12 = FUN_0046c0d0((int)this + 0x5c), 4 < uVar12 &&
        (fVar13 = FUN_00451120((float *)(*(int *)((int)this + 100) + -8),pfVar1),
        (float10)16.0 < fVar13)))) goto LAB_004ada5a;
    bVar6 = false;
  }
  if ((*(uint *)((int)this + 0xb0) <= *(uint *)(DAT_0104cdf4 + 0x3c)) && (bVar6)) {
    FUN_005998e0(*(int *)((int)this + 0x80));
    FUN_009840b0(&stack0xffffffbc,&uStack_3c);
    uStack_10 = *(undefined4 *)((int)this + 0x88);
    iStack_18 = *(int *)((int)this + 0xac);
    local_14 = *pfVar1;
    iVar11 = FUN_004acea0(&iStack_18);
    *(int *)((int)this + 0xac) = iVar11;
  }
LAB_004adac4:
  FUN_004ab440((int)this);
  FUN_004ac670(this,(int)this + 0x5c,pfVar1);
  FUN_004abc50(extraout_ECX);
  FUN_004ac490(this);
  return;
}


//// FUNCTION FUN_004adb30 @ 004adb30 ////

undefined4 * __thiscall FUN_004adb30(void *this,byte param_1)

{
  FUN_004ad630(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004adb90 @ 004adb90 ////

bool FUN_004adb90(void)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  bool bVar5;
  int local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  local_14 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  bVar5 = DAT_0104a8f4 != 0;
  if (bVar5) {
    iVar1 = *DAT_0104a8f0;
    local_14 = *(int *)(iVar1 + 8);
    local_10 = *(float *)(iVar1 + 0xc);
    local_c = *(undefined4 *)(iVar1 + 0x10);
    local_8 = *(float *)(iVar1 + 0x14);
    local_4 = *(undefined4 *)(iVar1 + 0x18);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  if (bVar5) {
    piVar2 = (int *)FUN_004ad040(&local_10,&local_8);
    *piVar2 = local_14;
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
    piVar4 = (int *)*DAT_0104a8f0;
    if (piVar4[2] == *piVar2) {
      if (piVar4 != DAT_0104a8f0) {
        *(int *)piVar4[1] = *piVar4;
        *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar4);
      }
      piVar4 = (int *)*DAT_0104a8fc;
      if (piVar4 != DAT_0104a8fc) {
        do {
          if (piVar4[2] == *piVar2) {
            if (piVar4 != DAT_0104a8fc) {
              *(int *)piVar4[1] = *piVar4;
              *(int *)(*piVar4 + 4) = piVar4[1];
              FUN_004ac740((int)piVar4);
                    /* WARNING: Subroutine does not return */
              _free(piVar4);
            }
            break;
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != DAT_0104a8fc);
      }
      piVar4 = DAT_0104a8fc + 1;
      pvVar3 = FUN_004ad5b0(DAT_0104a8fc,DAT_0104a8fc[1],piVar2);
      FUN_004ac840(&DAT_0104a8f8,1);
      *piVar4 = (int)pvVar3;
      **(undefined4 **)((int)pvVar3 + 4) = pvVar3;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  }
  return bVar5;
}


//// FUNCTION FUN_004adce0 @ 004adce0 ////

void FUN_004adce0(void)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  float local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  do {
    if (DAT_0104a8f4 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
      return;
    }
    iVar1 = *DAT_0104a8f0;
    local_10 = *(float *)(iVar1 + 0xc);
    local_c = *(undefined4 *)(iVar1 + 0x10);
    local_8 = *(float *)(iVar1 + 0x14);
    local_4 = *(undefined4 *)(iVar1 + 0x18);
    piVar4 = (int *)*DAT_0104a8f0;
    if (piVar4 != DAT_0104a8f0) {
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
      _free(piVar4);
    }
    piVar2 = (int *)FUN_004ad040(&local_10,&local_8);
    piVar4 = (int *)*DAT_0104a8fc;
    if (piVar4 != DAT_0104a8fc) {
      do {
        if (piVar4[2] == *piVar2) {
          if (piVar4 != DAT_0104a8fc) {
            *(int *)piVar4[1] = *piVar4;
            *(int *)(*piVar4 + 4) = piVar4[1];
            FUN_004ac740((int)piVar4);
                    /* WARNING: Subroutine does not return */
            _free(piVar4);
          }
          break;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != DAT_0104a8fc);
    }
    piVar4 = DAT_0104a8fc + 1;
    pvVar3 = FUN_004ad5b0(DAT_0104a8fc,DAT_0104a8fc[1],piVar2);
    FUN_004ac840(&DAT_0104a8f8,1);
    *piVar4 = (int)pvVar3;
    **(undefined4 **)((int)pvVar3 + 4) = pvVar3;
  } while( true );
}


//// FUNCTION FUN_004ade40 @ 004ade40 ////

void FUN_004ade40(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8d4);
  InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0104a8bc);
  DAT_0104a8b4 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  DAT_0104a8b8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  DAT_0104a8b0 = FUN_00acfa09((LPSECURITY_ATTRIBUTES)0x0,0,0x4ade00,&DAT_0104a8b4,0,(LPDWORD)0x0);
  return;
}


//// FUNCTION FUN_004adea0 @ 004adea0 ////

void __fastcall FUN_004adea0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004adf00 @ 004adf00 ////

void FUN_004adf00(void)

{
  FUN_004fcfb0();
  return;
}


//// FUNCTION FUN_004adf90 @ 004adf90 ////

void __thiscall FUN_004adf90(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6c9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0xac) + 4))();
  *(undefined4 *)((int)this + 0xc0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xac))();
  puVar2 = *(undefined4 **)((int)this + 0xa8);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  puVar2 = operator_new(0x8c);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00472380(puVar2);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0xa8) = puVar2;
  FUN_00471c10(puVar2,param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004ae040 @ 004ae040 ////

void __thiscall FUN_004ae040(void *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  
  if ((((*(int **)((int)this + 0xc0) == (int *)0x0) ||
       (cVar1 = (**(code **)(**(int **)((int)this + 0xc0) + 0x20))(), cVar1 == '\0')) ||
      (cVar1 = (**(code **)(**(int **)((int)this + 0xc0) + 0x1c4))(), cVar1 != '\0')) &&
     (param_3 == '\0')) {
    return;
  }
  FUN_00471b10((longlong *)&stack0xfffffff0);
  FUN_00471f30(*(void **)((int)this + 0xa8),param_1,param_2);
  return;
}


//// FUNCTION FUN_004ae0a0 @ 004ae0a0 ////

void __fastcall FUN_004ae0a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  float fVar6;
  char cVar7;
  undefined8 uStack_14;
  
  if (param_1[0x30] != 0) {
    iVar1 = FUN_005773c0(param_1[0x30]);
    iVar2 = GetPlayerStudio();
    if (iVar1 == iVar2) {
      (**(code **)(*param_1 + 8))();
      FUN_00acd42c();
      FUN_00471b10((longlong *)&stack0xffffffe4);
      uStack_14 = FUN_00acd42c();
      FUN_00471b10(&uStack_14);
      fVar6 = (float)(longlong)uStack_14 * 1.1920929e-07;
      FUN_00ace790((int *)param_1[0x30],0,&TM::CStaff::RTTI_Type_Descriptor,
                   &TM::CStar::RTTI_Type_Descriptor,0);
      piVar3 = (int *)GetPlayerStudio();
      uVar5 = FUN_00acd42c();
      uVar4 = (undefined4)uVar5;
      uStack_14 = CONCAT44((int)(uVar5 >> 0x20),(undefined4)uStack_14);
      FUN_00471b10((longlong *)&stack0xffffffc8);
      (**(code **)(*piVar3 + 0x2c))();
      cVar7 = '\0';
      FUN_00471b10((longlong *)&stack0xffffffbc);
      FUN_004ae040(param_1,uVar4,fVar6,cVar7);
    }
  }
  return;
}


//// FUNCTION FUN_004ae1c0 @ 004ae1c0 ////

longlong * __fastcall FUN_004ae1c0(int *param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_retaddr;
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x20))();
  cVar3 = '\0';
  uVar1 = unaff_ESI;
  uVar2 = local_8;
  FUN_00471b10((longlong *)&stack0xffffffe4);
  FUN_004ae040(param_1,uVar1,uVar2,cVar3);
  *(undefined4 *)unaff_retaddr = unaff_ESI;
  *(undefined4 *)((int)unaff_retaddr + 4) = local_8;
  FUN_00471b10(unaff_retaddr);
  return unaff_retaddr;
}


//// FUNCTION FUN_004ae240 @ 004ae240 ////

longlong * __fastcall FUN_004ae240(int *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *unaff_retaddr;
  undefined1 local_8 [8];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(local_8);
  if (0.0 < (float)*plVar1 * 1.1920929e-07) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(&stack0xfffffff4);
    param_1[0x32] = *puVar2;
    param_1[0x33] = puVar2[1];
    FUN_00471b10((longlong *)(param_1 + 0x32));
  }
  *(int *)unaff_retaddr = param_1[0x32];
  *(int *)((int)unaff_retaddr + 4) = param_1[0x33];
  FUN_00471b10(unaff_retaddr);
  return unaff_retaddr;
}


//// FUNCTION FUN_004ae370 @ 004ae370 ////

void __fastcall FUN_004ae370(void *param_1)

{
  int *piVar1;
  undefined4 unaff_EDI;
  undefined4 uVar2;
  char cVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  uStack_c = DAT_0104a94c;
  local_10 = DAT_0104a948;
  uStack_1c = 0x4ae393;
  FUN_00471b10((longlong *)&local_10);
  uStack_1c = 0x4ae3ac;
  local_8 = FUN_00acd42c();
  uStack_1c = 0x4ae3bd;
  FUN_00471b10(&local_8);
  local_10 = (undefined4)local_8;
  uStack_c = local_8._4_4_;
  uStack_1c = 0x4ae3d6;
  FUN_00471b10((longlong *)&local_10);
  uStack_1c = 0x4ae3db;
  piVar1 = (int *)GetPlayerStudio();
  uStack_1c = 2;
  local_24 = local_10;
  local_20 = uStack_c;
  FUN_00471b10((longlong *)&local_24);
  (**(code **)(*piVar1 + 0x2c))();
  cVar3 = '\0';
  uVar2 = uStack_1c;
  FUN_00471b10((longlong *)&stack0xffffffd0);
  FUN_004ae040(param_1,uVar2,unaff_EDI,cVar3);
  return;
}


//// FUNCTION FUN_004ae430 @ 004ae430 ////

void __fastcall FUN_004ae430(void *param_1)

{
  int *piVar1;
  undefined4 unaff_EDI;
  undefined4 uVar2;
  char cVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  uStack_c = DAT_0104a954;
  local_10 = DAT_0104a950;
  uStack_1c = 0x4ae453;
  FUN_00471b10((longlong *)&local_10);
  uStack_1c = 0x4ae46c;
  local_8 = FUN_00acd42c();
  uStack_1c = 0x4ae47d;
  FUN_00471b10(&local_8);
  local_10 = (undefined4)local_8;
  uStack_c = local_8._4_4_;
  uStack_1c = 0x4ae496;
  FUN_00471b10((longlong *)&local_10);
  uStack_1c = 0x4ae49b;
  piVar1 = (int *)GetPlayerStudio();
  uStack_1c = 2;
  local_24 = local_10;
  local_20 = uStack_c;
  FUN_00471b10((longlong *)&local_24);
  (**(code **)(*piVar1 + 0x2c))();
  cVar3 = '\0';
  uVar2 = uStack_1c;
  FUN_00471b10((longlong *)&stack0xffffffd0);
  FUN_004ae040(param_1,uVar2,unaff_EDI,cVar3);
  return;
}


//// FUNCTION FUN_004ae4f0 @ 004ae4f0 ////

undefined4 __fastcall FUN_004ae4f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x814) == 0xd)) && (*(int *)(iVar1 + 0xa20) != 0)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_004ae520 @ 004ae520 ////

void __fastcall FUN_004ae520(int *param_1)

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
  puStack_8 = &LAB_00ca6cb8;
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


//// FUNCTION FUN_004ae5f0 @ 004ae5f0 ////

longlong * __thiscall FUN_004ae5f0(void *this,longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_10;
  undefined4 local_c;
  longlong local_8;
  
  iVar1 = *(int *)((int)this + 0xc0);
  local_10 = 0;
  local_c = 0;
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x814) != 0xd)) || (*(int *)(iVar1 + 0xa20) == 0)) {
    plVar2 = FUN_00526cc0(this,&local_8);
    local_10 = (undefined4)*plVar2;
    local_c = *(undefined4 *)((int)plVar2 + 4);
  }
  else {
    local_10 = DAT_0104a958;
    local_c = DAT_0104a95c;
  }
  FUN_00471b10((longlong *)&local_10);
  *(undefined4 *)((int)param_1 + 4) = local_c;
  *(undefined4 *)param_1 = local_10;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_004ae720 @ 004ae720 ////

longlong * __fastcall FUN_004ae720(int *param_1)

{
  undefined4 unaff_ESI;
  longlong *unaff_retaddr;
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0x10))();
  cVar3 = '\0';
  uVar1 = unaff_ESI;
  uVar2 = local_10;
  FUN_00471b10((longlong *)&stack0xffffffdc);
  FUN_004ae040(param_1,uVar1,uVar2,cVar3);
  uStack_8 = local_10;
  uStack_c = unaff_ESI;
  FUN_00471b10((longlong *)&uStack_c);
  *(undefined4 *)((int)unaff_retaddr + 4) = uStack_8;
  *(undefined4 *)unaff_retaddr = uStack_c;
  FUN_00471b10(unaff_retaddr);
  *(undefined4 *)(unaff_retaddr + 1) = 2;
  return unaff_retaddr;
}


//// FUNCTION FUN_004ae7a0 @ 004ae7a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae7a0(void)

{
  float10 fVar1;
  ulonglong uVar2;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6dc2;
  local_c = ExceptionList;
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_104,"staff",5);
  local_100 = 5;
  local_104[5] = '\0';
  local_4 = 0;
  FUN_00558a50(DAT_00f88624,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"redundancy_payment_months",0x19);
  local_100 = 0x19;
  local_104[0x19] = '\0';
  local_4 = 1;
  fVar1 = FUN_00558610(DAT_00f88624,&local_104,0.0);
  _DAT_0104a938 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"entourage_salary",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4 = 2;
  FUN_00558610(DAT_00f88624,&local_104,0.0);
  uVar2 = FUN_00acd42c();
  DAT_0104a95c = (undefined4)(uVar2 >> 0x20);
  DAT_0104a958 = (undefined4)uVar2;
  FUN_00471b10((longlong *)&DAT_0104a958);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"misc_costs",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4 = 3;
  FUN_0055c540(local_e4,&local_104);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"stars",5);
  local_120 = 5;
  local_124[5] = '\0';
  local_4._0_1_ = 6;
  FUN_00558a50(local_e4,&local_124,(undefined4 *)0x1);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"daily_star_pr_room_fee",0x16);
  local_120 = 0x16;
  local_124[0x16] = '\0';
  local_4._0_1_ = 7;
  FUN_00558610(local_e4,&local_124,0.0);
  uVar2 = FUN_00acd42c();
  DAT_0104a944 = (undefined4)(uVar2 >> 0x20);
  DAT_0104a940 = (undefined4)uVar2;
  FUN_00471b10((longlong *)&DAT_0104a940);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"daily_star_detox_fee",0x14);
  local_120 = 0x14;
  local_124[0x14] = '\0';
  local_4._0_1_ = 8;
  FUN_00558610(local_e4,&local_124,0.0);
  uVar2 = FUN_00acd42c();
  DAT_0104a94c = (undefined4)(uVar2 >> 0x20);
  DAT_0104a948 = (undefined4)uVar2;
  FUN_00471b10((longlong *)&DAT_0104a948);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"daily_star_surgery_fee",0x16);
  local_120 = 0x16;
  local_124[0x16] = '\0';
  local_4._0_1_ = 9;
  FUN_00558610(local_e4,&local_124,0.0);
  uVar2 = FUN_00acd42c();
  DAT_0104a954 = (undefined4)(uVar2 >> 0x20);
  DAT_0104a950 = (undefined4)uVar2;
  FUN_00471b10((longlong *)&DAT_0104a950);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"selling",7);
  local_120 = 7;
  local_124[7] = '\0';
  local_4._0_1_ = 10;
  FUN_00558a50(local_e4,&local_124,(undefined4 *)0x1);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"star0",5);
  local_120 = 5;
  local_124[5] = '\0';
  local_4._0_1_ = 0xb;
  _DAT_010505b0 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"star1",5);
  local_120 = 5;
  local_124[5] = '\0';
  local_4._0_1_ = 0xc;
  _DAT_010505b4 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"star2",5);
  local_120 = 5;
  local_124[5] = '\0';
  local_4._0_1_ = 0xd;
  _DAT_010505b8 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"star3",5);
  local_120 = 5;
  local_124[5] = '\0';
  local_4._0_1_ = 0xe;
  _DAT_010505bc = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"star4",5);
  local_120 = 5;
  local_124[5] = '\0';
  local_4._0_1_ = 0xf;
  _DAT_010505c0 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"star5",5);
  local_120 = 5;
  local_124[5] = '\0';
  local_4._0_1_ = 0x10;
  _DAT_010505c4 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"project0",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4._0_1_ = 0x11;
  _DAT_01050598 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"project1",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4._0_1_ = 0x12;
  _DAT_0105059c = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"project2",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4._0_1_ = 0x13;
  _DAT_010505a0 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"project3",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4._0_1_ = 0x14;
  _DAT_010505a4 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"project4",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4._0_1_ = 0x15;
  _DAT_010505a8 = FUN_00558750(local_e4,&local_124,0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"project5",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4._0_1_ = 0x16;
  _DAT_010505ac = FUN_00558750(local_e4,&local_124,0);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  FUN_004fd240();
  FUN_004fe310();
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004af0c0 @ 004af0c0 ////

void __fastcall FUN_004af0c0(int param_1)

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
  puStack_8 = &LAB_00ca6dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\SalaryCosts.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("Salary");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x90),8);
  }
  FUN_005271c0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004af1d0 @ 004af1d0 ////

undefined4 * __fastcall FUN_004af1d0(undefined4 *param_1)

{
  FUN_005278e0(param_1);
  *param_1 = &PTR_FUN_00d1de9c;
  param_1[0xe] = &PTR_LAB_00d1de7c;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x2b;
  param_1[0x2b] = &PTR_FUN_00d18c4c;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return param_1;
}


//// FUNCTION FUN_004af230 @ 004af230 ////

void __fastcall FUN_004af230(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6e06;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1de9c;
  param_1[0xe] = &PTR_LAB_00d1de7c;
  puVar2 = (undefined4 *)param_1[0x2a];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x2a] = 0;
  }
  param_1[0x2b] = &PTR_FUN_00d18c4c;
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
  local_4 = 0xffffffff;
  FUN_005270c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004af320 @ 004af320 ////

undefined4 * __thiscall FUN_004af320(void *this,byte param_1)

{
  FUN_004af230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004af340 @ 004af340 ////

void __fastcall FUN_004af340(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004af370 @ 004af370 ////

void __fastcall FUN_004af370(int param_1)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x60) = 0xbf800000;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  bVar1 = FUN_00541f60(0);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  return;
}


//// FUNCTION FUN_004af3d0 @ 004af3d0 ////

void __fastcall FUN_004af3d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1df2c;
  param_1[0xe] = &PTR_LAB_00d1df0c;
  local_4 = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004af430 @ 004af430 ////

int * __thiscall FUN_004af430(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004af4a0 @ 004af4a0 ////

undefined4 * __thiscall FUN_004af4a0(void *this,byte param_1)

{
  FUN_004af3d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004af4c0 @ 004af4c0 ////

void __cdecl FUN_004af4c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(DAT_0104a974 + 0x60 + param_1 * 4) = param_2;
  return;
}


//// FUNCTION FUN_004af4e0 @ 004af4e0 ////

void FUN_004af4e0(void)

{
  if (DAT_0104a974 != 0) {
    FUN_004af370(DAT_0104a974);
    return;
  }
  return;
}


//// FUNCTION FUN_004af530 @ 004af530 ////

void FUN_004af530(void)

{
  if (DAT_0104a974 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104a974)(1);
  }
  (*(code *)DAT_0104a960[1])();
  DAT_0104a974 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x004af562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104a960)();
  return;
}


//// FUNCTION FUN_004af570 @ 004af570 ////

undefined4 FUN_004af570(void)

{
  return DAT_0104a974;
}


//// FUNCTION FUN_004af5b0 @ 004af5b0 ////

void __fastcall FUN_004af5b0(int *param_1)

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
  puStack_8 = &LAB_00ca6e38;
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


//// FUNCTION FUN_004af680 @ 004af680 ////

void __fastcall FUN_004af680(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1df40;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004af6d0 @ 004af6d0 ////

void __fastcall FUN_004af6d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1df40;
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


//// FUNCTION FUN_004af720 @ 004af720 ////

void __fastcall FUN_004af720(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
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
  puStack_8 = &LAB_00ca6e58;
  local_c = ExceptionList;
  local_38 = (undefined4 *)(param_1 + 0x28);
  local_34 = 9;
  ExceptionList = &local_c;
  do {
    if (DAT_00e67469 == '\0') {
      local_2c = local_20;
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Sandbox.cpp";
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
      local_4 = 0;
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
    uVar3 = FUN_0098b490("Option[x]");
    if ((char)uVar3 != '\0') {
      FUN_0098a430(local_38,4);
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


//// FUNCTION FUN_004af870 @ 004af870 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004af870(int param_1,undefined4 param_2,char param_3)

{
  float *pfVar1;
  size_t sVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined1 local_84 [24];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar1 = FUN_0043b720(local_84,(float)param_1);
  DAT_00e4fa4c = *pfVar1;
  _DAT_00e4fa50 = pfVar1[1];
  _DAT_00e4fa54 = pfVar1[2];
  _DAT_00e4fa58 = pfVar1[3];
  _DAT_00e4fa5c = pfVar1[4];
  _DAT_00e4fa60 = pfVar1[5];
  if (param_3 != '\0') {
    DAT_010503d1 = 0;
    DAT_010503d0 = 0;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"savedefaults/",0xd);
  local_68 = 0xd;
  local_6c[0xd] = '\0';
  local_4 = 0;
  if (param_3 == '\0') {
    sVar2 = _sprintf(local_4c,(char *)&param_2_00d1b93c);
    pcVar4 = local_4c;
  }
  else {
    sVar2 = 8;
    pcVar4 = "tutorial";
  }
  FUN_004073f0(&local_6c,pcVar4,sVar2);
  if ((DAT_0104de24 != '\0') &&
     ((*(int *)(DAT_0104a974 + 0x78) == 0x40000000 || (*(int *)(DAT_0104a974 + 0x78) == 0x40400000))
     )) {
    FUN_004073f0(&local_6c,"_clean",6);
    DAT_0104de24 = '\0';
  }
  FUN_00467d50();
  FUN_00422750(DAT_00f87b04,&local_6c);
  GlobalStatRegistry_Get();
  FUN_008c9620();
  uVar3 = FUN_00acd42c();
  FUN_00471b10((longlong *)&stack0xffffff64);
  FUN_00442be0(DAT_00f87ed8,(int)uVar3,(int)(uVar3 >> 0x20));
  *(float *)(DAT_0104a974 + 0x60) = (float)((param_1 + -0x76c) / 10);
  FUN_00530d90();
  FUN_0048f3f0();
  FUN_005434e0();
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION SandboxMode_Constructor @ 004afa60 ////

/* WARNING: Removing unreachable block (ram,0x004afd34) */
/* WARNING: Removing unreachable block (ram,0x004afc77) */
/* WARNING: Removing unreachable block (ram,0x004afbbd) */
/* WARNING: Removing unreachable block (ram,0x004afb60) */
/* WARNING: Removing unreachable block (ram,0x004afc1a) */
/* WARNING: Removing unreachable block (ram,0x004afcd4) */
/* WARNING: Removing unreachable block (ram,0x004afd91) */
/* WARNING: Removing unreachable block (ram,0x004afb03) */

undefined4 * __fastcall SandboxMode_Constructor(undefined4 *param_1)

{
  char local_20 [12];
  undefined1 local_14;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers a full sandbox/cheat toggle bundle via the stubbed cvar
                       registration (CVarSystem_Register_STUBBED, 0x005434a0): sbx_waywardnessoff,
                       sbx_disrepairoff, sbx_shootingoff, sbx_perfectscripts, sbx_instantbuild,
                       sbx_tutorial, sbx_nostunts, sbx_noinjuries. All inert in retail — see
                       0x005434a0 for the full writeup on the disabled dev console this belongs to.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6ee3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d1df2c;
  param_1[0xe] = &PTR_LAB_00d1df0c;
  FUN_004af370((int)param_1);
  local_20[0] = '\0';
  _strncpy(local_20,"sbx_waywardnessoff",0x12);
  local_e = 0;
  local_4._0_1_ = 2;
  CVarSystem_Register_STUBBED();
  local_20[0] = '\0';
  _strncpy(local_20,"sbx_disrepairoff",0x10);
  local_10 = 0;
  local_4._0_1_ = 3;
  CVarSystem_Register_STUBBED();
  local_20[0] = '\0';
  _strncpy(local_20,"sbx_shootingoff",0xf);
  local_11 = 0;
  local_4._0_1_ = 4;
  CVarSystem_Register_STUBBED();
  local_20[0] = '\0';
  _strncpy(local_20,"sbx_perfectscripts",0x12);
  local_e = 0;
  local_4._0_1_ = 5;
  CVarSystem_Register_STUBBED();
  local_20[0] = '\0';
  _strncpy(local_20,"sbx_instantbuild",0x10);
  local_10 = 0;
  local_4._0_1_ = 6;
  CVarSystem_Register_STUBBED();
  local_20[0] = '\0';
  _strncpy(local_20,"sbx_tutorial",0xc);
  local_14 = 0;
  local_4._0_1_ = 7;
  CVarSystem_Register_STUBBED();
  local_20[0] = '\0';
  _strncpy(local_20,"sbx_nostunts",0xc);
  local_14 = 0;
  local_4._0_1_ = 8;
  CVarSystem_Register_STUBBED();
  local_20[0] = '\0';
  _strncpy(local_20,"sbx_noinjuries",0xe);
  local_12 = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  CVarSystem_Register_STUBBED();
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004afdc0 @ 004afdc0 ////

undefined4 * FUN_004afdc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6efb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x84);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = SandboxMode_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_004afe20 @ 004afe20 ////

void FUN_004afe20(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6f23;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe51408);
  local_2c = local_20;
  puVar5 = (undefined4 *)0x0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_004afdc0,&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0098f9e0(0x4af4f0);
  FUN_0098fdd0("PSandbox",&DAT_0104a960);
  puVar3 = operator_new(0x84);
  local_4 = 1;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = SandboxMode_Constructor(puVar3);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104a960[1])();
  DAT_0104a974 = puVar5;
  (*(code *)*DAT_0104a960)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004aff80 @ 004aff80 ////

int __cdecl FUN_004aff80(int param_1)

{
  int iVar1;
  uint3 uVar2;
  undefined **ppuVar3;
  uint uVar4;
  
  ppuVar3 = &PTR_DAT_00e514b8;
  uVar4 = 0;
  do {
    iVar1 = FUN_009f3c40(ppuVar3);
    uVar2 = (uint3)((uint)iVar1 >> 8);
    if (param_1 == iVar1) {
      return CONCAT31(uVar2,1);
    }
    uVar4 = uVar4 + 0x20;
    ppuVar3 = ppuVar3 + 8;
  } while (uVar4 < 0x40);
  return (uint)uVar2 << 8;
}


//// FUNCTION FUN_004affc0 @ 004affc0 ////

bool __cdecl FUN_004affc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f3be0("ver17");
  return param_1 != iVar1;
}


//// FUNCTION FUN_004affe0 @ 004affe0 ////

void __fastcall FUN_004affe0(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  *(undefined4 *)(param_1 + 0xa8) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar1 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0x7c) = (int)uVar1;
  return;
}


//// FUNCTION FUN_004b0010 @ 004b0010 ////

void __fastcall FUN_004b0010(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0xa8) = 2;
    return;
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0xa8) = 3;
    return;
  }
  if (iVar1 == 3) {
    BuildAndDrawPrimitive(*(int *)(param_1 + 0x80));
    FUN_009a85a0((int *)(param_1 + 0x84));
  }
  return;
}


//// FUNCTION FUN_004b0060 @ 004b0060 ////

undefined4 * __thiscall FUN_004b0060(void *this,byte param_1)

{
  FUN_009f3d60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b00d0 @ 004b00d0 ////

void __cdecl FUN_004b00d0(float param_1)

{
  if ((DAT_0104a980 == '\0') && (DAT_0104a97c != (void *)0x0)) {
    FUN_009a4f10();
    if (DAT_0104a981 != '\0') {
      param_1 = param_1 * 0.5 + 0.5;
    }
    FUN_005e5cd0(DAT_0104a97c,param_1,'\0');
    FUN_009a4fb0();
    FUN_009a6360();
    return;
  }
  return;
}


//// FUNCTION FUN_004b0170 @ 004b0170 ////

int * __thiscall FUN_004b0170(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004b0340 @ 004b0340 ////

void __cdecl FUN_004b0340(int *param_1)

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


//// FUNCTION FUN_004b0390 @ 004b0390 ////

void __cdecl FUN_004b0390(int param_1)

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


//// FUNCTION FUN_004b0470 @ 004b0470 ////

undefined4 * __fastcall FUN_004b0470(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0xff;
  *(undefined1 *)((int)param_1 + 5) = 0xff;
  *(undefined1 *)((int)param_1 + 6) = 0xff;
  *(undefined1 *)((int)param_1 + 7) = 0xff;
  param_1[1] = 0xffffffff;
  FUN_009a8100(param_1);
  return param_1;
}


//// FUNCTION FUN_004b05e0 @ 004b05e0 ////

void __fastcall FUN_004b05e0(int *param_1)

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


//// FUNCTION FUN_004b0660 @ 004b0660 ////

undefined4 * __thiscall FUN_004b0660(void *this,undefined4 *param_1)

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
    cVar1 = *(char *)((int)puVar4 + 0x2d);
  }
  return puVar2;
}


//// FUNCTION FUN_004b06b0 @ 004b06b0 ////

void __thiscall FUN_004b06b0(void *this,int param_1)

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


//// FUNCTION FUN_004b0710 @ 004b0710 ////

void __thiscall FUN_004b0710(void *this,int *param_1)

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


//// FUNCTION FUN_004b07a0 @ 004b07a0 ////

void __fastcall FUN_004b07a0(int *param_1)

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


//// FUNCTION FUN_004b0840 @ 004b0840 ////

void __fastcall FUN_004b0840(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_004b0880 @ 004b0880 ////

undefined4 * __cdecl FUN_004b0880(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 10;
  FUN_004036d0(param_1,(wchar_t *)PTR_DAT_00e5822c,DAT_00e58230);
  return param_1;
}


//// FUNCTION FUN_004b08c0 @ 004b08c0 ////

undefined4 * __cdecl FUN_004b08c0(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 10;
  FUN_004036d0(param_1,(wchar_t *)PTR_DAT_00e5824c,DAT_00e58250);
  return param_1;
}


//// FUNCTION FUN_004b0960 @ 004b0960 ////

undefined4 * __fastcall FUN_004b0960(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  float10 fVar10;
  float local_44 [2];
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6f61;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053dcd0(param_1);
  *param_1 = &PTR_FUN_00d1e090;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0xff;
  *(undefined1 *)((int)param_1 + 0x89) = 0xff;
  *(undefined1 *)((int)param_1 + 0x8a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x8b) = 0xff;
  local_4 = 0;
  param_1[0x22] = 0xffffffff;
  FUN_009a8100(param_1 + 0x21);
  pvVar5 = FUN_0099bb50("ui/autosave.dds",0,0,0,'\0');
  puVar6 = operator_new(0x3c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_0041f350(puVar6);
  }
  param_1[0x20] = puVar6;
  puVar6 = operator_new(0x24);
  local_4._0_1_ = 1;
  if (puVar6 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_009910f0(puVar6);
  }
  *(undefined4 *)(param_1[0x20] + 4) = uVar7;
  *(undefined1 *)(*(int *)(param_1[0x20] + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(param_1[0x20] + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)((int)*(void **)(param_1[0x20] + 4) + 0x18) != pvVar5) {
    Engine_SetResourceReference(*(void **)(param_1[0x20] + 4),(int)pvVar5);
  }
  fVar4 = DAT_0105c400;
  iVar2 = param_1[0x20];
  fVar3 = DAT_0105c404 - 128.0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(float *)(iVar2 + 0x10) = (fVar4 - 96.0) - 64.0;
  *(float *)(iVar2 + 0x14) = fVar3 - 64.0;
  iVar2 = param_1[0x20];
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(float *)(iVar2 + 0x1c) = (fVar4 - 96.0) + 64.0;
  *(float *)(iVar2 + 0x20) = fVar3 + 64.0;
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  if ((DAT_0104aa00 & 1) == 0) {
    DAT_0104aa00 = DAT_0104aa00 | 1;
    local_2c = (char *)&local_20;
    local_20 = (ushort)local_20._1_1_ << 8;
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SAVE_AUTOSAVING",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_009b5030(&DAT_0104a9e0,&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    _atexit(FUN_00d11780);
  }
  local_2c = (char *)&local_20;
  local_20 = 0;
  local_28 = 0;
  local_24 = 10;
  uVar8 = FUN_00ace02d((short *)&DAT_00d1e05c);
  FUN_004036d0(&local_2c,L"h1",uVar8);
  local_4._0_1_ = 4;
  piVar9 = FUN_0082db00(&local_2c);
  param_1[0x26] = piVar9;
  local_4 = (uint)local_4._1_3_ << 8;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  param_1[0x21] = DAT_0104a9e0;
  FUN_009a8180((void *)param_1[0x26],local_44,DAT_0104a9e0);
  param_1[0x24] = 0x42800000;
  piVar9 = (int *)FUN_0071b2a0();
  fVar10 = (float10)(**(code **)(*piVar9 + 0x10))();
  param_1[0x23] = (float)(fVar10 * (float10)0.5 - (float10)local_44[0] * (float10)0.5);
  FUN_00567cb0(&fStack_3c,0);
  iVar2 = param_1[0x20];
  *(float *)(iVar2 + 0x28) = fStack_3c;
  *(undefined4 *)(iVar2 + 0x2c) = uStack_38;
  iVar2 = param_1[0x20];
  *(undefined4 *)(iVar2 + 0x30) = uStack_34;
  *(undefined4 *)(iVar2 + 0x34) = uStack_30;
  param_1[0x2a] = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_004b0c50 @ 004b0c50 ////

void __fastcall FUN_004b0c50(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  void *_Memory_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1e090;
  _Memory = (int *)param_1[0x26];
  local_4 = 0;
  if (_Memory != (int *)0x0) {
    iVar1 = _Memory[1];
    _Memory[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    param_1[0x26] = 0;
  }
  if (param_1[0x20] != 0) {
    _Memory_00 = *(void **)(param_1[0x20] + 4);
    if (_Memory_00 != (void *)0x0) {
      FUN_00990ec0((int)_Memory_00);
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    *(undefined4 *)(param_1[0x20] + 4) = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x20]);
}


//// FUNCTION FUN_004b0d10 @ 004b0d10 ////

void __fastcall FUN_004b0d10(int param_1)

{
  longlong lVar1;
  wchar_t *_Source;
  float fVar2;
  int *piVar3;
  longlong *plVar4;
  tm *ptVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  void *pvVar15;
  undefined1 local_ac [4];
  void *pvStack_a8;
  void *pvStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  wchar_t awStack_84 [66];
  
  *(undefined4 *)(param_1 + 0x28) = DAT_00e4fa4c;
  piVar3 = (int *)GetPlayerStudio();
  plVar4 = (longlong *)(**(code **)(*piVar3 + 0x24))(local_ac);
  lVar1 = *plVar4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(float *)(param_1 + 100) = (float)lVar1 * 1.1920929e-07;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  _time((time_t *)&pvStack_a8);
  ptVar5 = _localtime((time_t *)&pvStack_a8);
  FUN_00acfa94(awStack_84,0x40,(short *)&DAT_00d1e0e0,ptVar5);
  lVar6 = __wtol(awStack_84);
  *(long *)(param_1 + 0x2c) = lVar6;
  FUN_00acfa94(awStack_84,0x40,(short *)&DAT_00d1e0d8,ptVar5);
  lVar6 = __wtol(awStack_84);
  *(long *)(param_1 + 0x30) = lVar6;
  FUN_00acfa94(awStack_84,0x40,(short *)&DAT_00d1e0d0,ptVar5);
  lVar6 = __wtol(awStack_84);
  *(long *)(param_1 + 0x34) = lVar6;
  FUN_00acfa94(awStack_84,0x40,(short *)&DAT_00d18f7c,ptVar5);
  lVar6 = __wtol(awStack_84);
  *(long *)(param_1 + 0x38) = lVar6;
  FUN_00acfa94(awStack_84,0x40,(short *)&PTR_DAT_00d1e0c8,ptVar5);
  lVar6 = __wtol(awStack_84);
  *(long *)(param_1 + 0x3c) = lVar6;
  FUN_00acfa94(awStack_84,0x40,(short *)&DAT_00d1e0c0,ptVar5);
  lVar6 = __wtol(awStack_84);
  *(long *)(param_1 + 0x40) = lVar6;
  uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x44),(wchar_t *)&lpCaption_00d16918,uVar7);
  puVar8 = FUN_004b0880(&pvStack_a4);
  FUN_004036d0((void *)(param_1 + 0x68),(wchar_t *)*puVar8,puVar8[1]);
  if (10 < uStack_9c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_a4);
  }
  piVar3 = (int *)GetPlayerStudio();
  puVar8 = (undefined4 *)(**(code **)(*piVar3 + 0x20))(&pvStack_a4);
  FUN_004036d0((void *)(param_1 + 0x88),(wchar_t *)*puVar8,puVar8[1]);
  if (10 < uStack_a0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_a8);
  }
  iVar9 = GetPlayerStudio();
  fVar2 = (float)*(int *)(iVar9 + 0x1ec);
  if (*(int *)(iVar9 + 0x1ec) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0xa8) = fVar2 * 1.6666667e-05 * 0.016666668;
  iVar9 = GetPlayerStudio();
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar9 + 0x1e4);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  iVar9 = FUN_0045f420();
  iVar9 = *(int *)(iVar9 + 0x98);
  iVar10 = FUN_0045f420();
  do {
    if (iVar9 == iVar10 + 0xa4) {
LAB_004b0f42:
      puVar8 = FUN_00421b80(&pvStack_a8);
      uVar7 = puVar8[1];
      _Source = (wchar_t *)*puVar8;
      if (*(uint *)(param_1 + 0xbc) <= uVar7) {
        if (10 < *(uint *)(param_1 + 0xbc)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(param_1 + 0xb4));
        }
        uVar14 = uVar7 + 0x20 >> 5;
        *(uint *)(param_1 + 0xbc) = uVar14 << 5;
        pvVar15 = _malloc(uVar14 * 0x40);
        *(void **)(param_1 + 0xb4) = pvVar15;
      }
      _wcsncpy(*(wchar_t **)(param_1 + 0xb4),_Source,uVar7);
      *(uint *)(param_1 + 0xb8) = uVar7;
      *(undefined2 *)(*(int *)(param_1 + 0xb4) + uVar7 * 2) = 0;
      if (10 < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_a8);
      }
      if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 0x78) == 2.0)) {
        *(undefined1 *)(param_1 + 0xd4) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 0xd4) = 0;
      return;
    }
    piVar3 = *(int **)(iVar9 + 8);
    iVar11 = (**(code **)(*piVar3 + 4))();
    iVar12 = GetPlayerStudio();
    if (iVar11 == iVar12) {
      uVar13 = (**(code **)(*piVar3 + 0x28))();
      *(undefined4 *)(param_1 + 0xb0) = uVar13;
      goto LAB_004b0f42;
    }
    iVar9 = *(int *)(iVar9 + 4);
  } while( true );
}


//// FUNCTION FUN_004b1010 @ 004b1010 ////

bool __cdecl FUN_004b1010(undefined4 *param_1)

{
  void *this;
  uint uVar1;
  undefined4 *this_00;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  uint uVar5;
  wchar_t local_38 [4];
  undefined4 uStack_30;
  int local_18;
  void *local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6f9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x28);
  local_4 = 0;
  local_14 = this;
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    local_10 = &stack0xffffffbc;
    pwVar3 = local_38;
    local_38[0] = L'\0';
    uVar4 = 0;
    uVar5 = 10;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffffbc,(wchar_t *)&lpCaption_00d16918,uVar1);
    this_00 = FUN_009f3dd0(this,pwVar3,uVar4,uVar5);
  }
  local_10 = &stack0xffffffb8;
  pwVar3 = (wchar_t *)&stack0xffffffc4;
  uVar1 = 0;
  uVar4 = 10;
  local_4 = 0xffffffff;
  FUN_004036d0(&stack0xffffffb8,(wchar_t *)*param_1,param_1[1]);
  FUN_009f3e50(this_00,pwVar3,uVar1,uVar4);
  uStack_30 = 0x4b10dc;
  FUN_009f3ce0(this_00,&local_18,4);
  uStack_30 = 0x4b10ea;
  iVar2 = FUN_009f3c40(&PTR_DAT_00e51498);
  FUN_009f3cb0(this_00);
  if (this_00 != (undefined4 *)0x0) {
    FUN_009f3d60(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  ExceptionList = local_c;
  return local_18 == iVar2;
}


//// FUNCTION AutosaveSystem_TriggerAutosave @ 004b1130 ////

void __cdecl AutosaveSystem_TriggerAutosave(wchar_t *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* AutosaveSystem_TriggerAutosave - __cdecl(wchar_t* message, uint length, uint
                       capacity), a CBasicString<wchar_t>-unpacked param triple matching this
                       codebase's usual wide-string-argument convention. Allocates a save-state
                       object (operator_new(0xac)) if one doesn't already exist at
                       *(DAT_0104a978+0x74), calls through two vtable slots on it (offsets 0 and 4
                       relative to DAT_0104a978+0x60 - likely a "begin"/"prepare" pair), then marks
                       save-in-progress state at offsets 0x78/0x7c/0xa8 of the save-state object.
                       
                       Called from exactly 3 places: FUN_004b3ae0 (the WinMain shutdown-tail
                       function - likely a final save-on-exit), one not-yet-named caller at
                       0x6879aa, and WInterface::Tick itself (VA 0x6a3790) - confirming
                       WInterface::Tick's own existing comment ("handles quicksave triggers") was
                       accurate. WInterface::Tick is already hooked by the debugger DLL; this
                       function is now ALSO hooked separately (2026-10-01) specifically to get a
                       precise "an autosave/quicksave just started here" signal, distinct from
                       WInterface::Tick's own per-frame noise - added after the game crashed
                       (nvd3dum.dll access violation, 0xc0000005) while injected, with the user
                       suspecting an autosave was in progress at the time. See
                       project_the_movies_re.md for the crash details and whether this hook
                       corroborates the theory on a future capture. */
  puStack_8 = &LAB_00ca6fc3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004036d0(&PTR_DAT_00e514f8,param_1,param_2);
  uVar4 = extraout_EDX;
  if (*(int *)(DAT_0104a978 + 0x74) == 0) {
    puVar3 = operator_new(0xac);
    local_4._0_1_ = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_004b0960(puVar3);
    }
    iVar1 = DAT_0104a978;
    puVar5 = (undefined4 *)(DAT_0104a978 + 0x60);
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*(int *)(DAT_0104a978 + 0x60) + 4))();
    puVar5 = (undefined4 *)*puVar5;
    *(undefined4 **)(iVar1 + 0x74) = puVar3;
    (*(code *)*puVar5)();
    uVar4 = extraout_EDX_00;
  }
  iVar2 = DAT_0104a978;
  iVar1 = *(int *)(DAT_0104a978 + 0x74);
  *(undefined4 *)(iVar1 + 0xa8) = 1;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  uVar6 = FUN_00990ae0(iVar2,uVar4);
  *(int *)(iVar1 + 0x7c) = (int)uVar6;
  FUN_00547480(&DAT_0104a994,(int)(uVar6 >> 0x20));
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004b1210 @ 004b1210 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b1210(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00547480(&DAT_0104a994,param_2);
  switch(param_3) {
  case 0:
    param_3 = 5;
    break;
  case 1:
    param_3 = 0xf;
    break;
  case 2:
    param_3 = 0x1e;
    break;
  case 3:
    param_3 = 0x2d;
    break;
  case 4:
    param_3 = 0x3c;
    break;
  case 5:
    param_3 = 0;
    break;
  default:
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"autosave",8);
    local_28 = 8;
    local_2c[8] = '\0';
    local_4 = 0;
    param_3 = FUN_00558750(DAT_00f88624,&local_2c,0x14);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  _DAT_00e51450 = (float)param_3 * 60.0;
  return;
}


//// FUNCTION FUN_004b1330 @ 004b1330 ////

uint FUN_004b1330(void)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  uint local_98;
  char **ppcStack_94;
  wchar_t *local_74;
  uint local_70;
  uint local_6c;
  wchar_t local_68 [10];
  char *local_54;
  undefined4 local_50;
  uint local_4c;
  char local_48 [20];
  undefined4 local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009893f0();
  local_54 = local_48;
  DAT_010583dc = &LAB_004b0130;
  local_48[0] = '\0';
  local_50 = 0;
  local_4c = 0x14;
  ppcStack_94 = (char **)0x4b1384;
  _strncpy(local_54,"Loading Game\n",0xd);
  local_50 = 0xd;
  local_54[0xd] = '\0';
  ppcStack_94 = &local_54;
  local_4 = 0;
  local_98 = 0x4b13a4;
  FUN_00989710();
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  local_74 = local_68;
  local_68[0] = L'\0';
  local_70 = 0;
  local_6c = 10;
  FUN_004036d0(&local_74,(wchar_t *)PTR_DAT_00e51458,DAT_00e5145c);
  pwVar5 = (wchar_t *)&local_98;
  local_4 = 1;
  local_98 = local_98 & 0xffff0000;
  uVar6 = 0;
  uVar7 = 10;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&stack0xffffff5c,(wchar_t *)&lpCaption_00d16918,uVar2);
  FUN_009f3dd0(local_34,pwVar5,uVar6,uVar7);
  pwVar5 = (wchar_t *)&stack0xffffff64;
  uVar2 = 0;
  uVar6 = 10;
  local_4._0_1_ = 2;
  FUN_004036d0(&stack0xffffff58,local_74,local_70);
  bVar1 = FUN_009f3e50(local_34,pwVar5,uVar2,uVar6);
  if (!bVar1) {
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar2 = FUN_009f3d60(local_34);
    if (10 < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_74);
    }
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  uVar2 = FUN_009f3d40((int)local_34);
  pvVar3 = operator_new(uVar2);
  FUN_009f3ce0(local_34,pvVar3,uVar2);
  FUN_009f3cb0(local_34);
  FUN_00989490(&DAT_010584f4,pvVar3,uVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar4 = FUN_009f3d60(local_34);
  if (10 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_004b1510 @ 004b1510 ////

void FUN_004b1510(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      puVar2 = (undefined4 *)DAT_0104cfc8[2];
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_0104cfc8 != &DAT_0104cfd4);
  }
  return;
}


//// FUNCTION FUN_004b15f0 @ 004b15f0 ////

int * __fastcall FUN_004b15f0(int *param_1)

{
  FUN_004b05e0(param_1);
  return param_1;
}


//// FUNCTION FUN_004b1600 @ 004b1600 ////

void __fastcall FUN_004b1600(int param_1)

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


//// FUNCTION FUN_004b1670 @ 004b1670 ////

int * __fastcall FUN_004b1670(int *param_1)

{
  FUN_004b07a0(param_1);
  return param_1;
}


//// FUNCTION FUN_004b1680 @ 004b1680 ////

void FUN_004b1680(void)

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


//// FUNCTION FUN_004b16d0 @ 004b16d0 ////

undefined4 * __thiscall
FUN_004b16d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = (undefined1 *)((int)this + 0x18);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xc),(char *)*param_4,param_4[1]);
  *(undefined1 *)((int)this + 0x2c) = param_5;
  *(undefined1 *)((int)this + 0x2d) = 0;
  return this;
}


//// FUNCTION FUN_004b1730 @ 004b1730 ////

int * __fastcall FUN_004b1730(int *param_1)

{
  FUN_004b05e0(param_1);
  return param_1;
}


//// FUNCTION FUN_004b1740 @ 004b1740 ////

void * __thiscall FUN_004b1740(void *this,byte param_1)

{
  FUN_004b0840((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b1770 @ 004b1770 ////

undefined4 * __thiscall FUN_004b1770(void *this,byte param_1)

{
  FUN_004b0c50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b1790 @ 004b1790 ////

void __cdecl FUN_004b1790(char *param_1,size_t param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  char *pcVar6;
  size_t sVar7;
  uint uVar8;
  char local_74 [4];
  undefined4 uStack_70;
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
  
  puStack_8 = &LAB_00ca7038;
  local_c = ExceptionList;
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  uStack_70 = 0x4b17de;
  ExceptionList = &local_c;
  _strncpy((char *)local_4c,"\n",1);
  local_48 = 1;
  local_4c[1] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004073f0(&local_4c,param_1,param_2);
  FUN_004073f0(&local_4c,"\n",1);
  if (DAT_010583e0 == 0) {
    FUN_0098be10(&local_4c);
  }
  if (DAT_010583e0 == 1) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    local_4 = CONCAT31(local_4._1_3_,2);
    SLVAR_LoadString(&local_2c);
    pbVar2 = local_2c;
    pbVar4 = local_4c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_004b1886:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_004b188b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_004b1886;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_004b188b:
    if (iVar3 != 0) {
      pcVar6 = local_74;
      local_74[0] = '\0';
      sVar7 = 0;
      uVar8 = 0x14;
      FUN_004015d0(&stack0xffffff80,param_1,param_2);
      FUN_004b1790(pcVar6,sVar7,uVar8);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004b1910 @ 004b1910 ////

void FUN_004b1910(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  size_t sVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 *this;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_7c;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca706b;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  ExceptionList = &pvStack_c;
  FUN_004036d0(&local_4c,(wchar_t *)PTR_DAT_00e51458,DAT_00e5145c);
  local_4 = 0;
  FUN_004211c0(&local_4c,local_2c,local_48 - 4,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  bVar2 = FUN_00431270(local_2c,L".jad");
  if (bVar2) {
    sVar4 = FUN_00ace02d(L".jad");
    FUN_0040cae0(&local_4c,L".jad",sVar4);
  }
  uVar5 = FUN_009d36d0(&local_4c,(uint *)0x0);
  if ((char)uVar5 != '\0') {
    FUN_009d3590(&local_4c);
  }
  bVar2 = true;
  bVar1 = false;
  pvVar6 = operator_new(0x28);
  local_4._0_1_ = 2;
  if (pvVar6 == (void *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    pwVar8 = (wchar_t *)&uStack_7c;
    uStack_7c = uStack_7c & 0xffff0000;
    uVar9 = 0;
    uVar10 = 10;
    uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff78,(wchar_t *)&lpCaption_00d16918,uVar7);
    this = FUN_009f3dd0(pvVar6,pwVar8,uVar9,uVar10);
  }
  pwVar8 = (wchar_t *)&stack0xffffff80;
  uVar7 = 0;
  uVar9 = 10;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004036d0(&stack0xffffff74,local_4c,local_48);
  bVar3 = FUN_009f3e50(this,pwVar8,uVar7,uVar9);
  if (bVar3) {
    sVar4 = FUN_009894e0(0x10584f4);
    pvVar6 = (void *)FUN_009894d0(&DAT_010584f4);
    bVar3 = FUN_009f3d10(this,pvVar6,sVar4);
    if (!bVar3) goto LAB_004b1a74;
    bVar1 = true;
    if (DAT_0104a980 == '\0') {
      DAT_0104a982 = 0;
    }
  }
  else {
    bVar2 = false;
LAB_004b1a74:
    if (DAT_0104dcf0 != 0) {
      uStack_7c = 0x4b1a90;
      FUN_00470a70(DAT_0104917c,DAT_0104dcf0,0x667,0,0);
    }
    if (!bVar2) goto LAB_004b1ab0;
  }
  FUN_009f3cb0(this);
  if (!bVar1) {
    FUN_009d3590(&local_4c);
  }
LAB_004b1ab0:
  if (this != (undefined4 *)0x0) {
    FUN_009f3d60(this);
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  FUN_009894b0(&DAT_010584f4);
  FUN_00989720();
  FUN_009897a0();
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004b1b60 @ 004b1b60 ////

void __fastcall FUN_004b1b60(int param_1)

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


//// FUNCTION FUN_004b1bf0 @ 004b1bf0 ////

void __fastcall FUN_004b1bf0(int param_1)

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


//// FUNCTION FUN_004b1c20 @ 004b1c20 ////

int * __fastcall FUN_004b1c20(int *param_1)

{
  FUN_004b07a0(param_1);
  return param_1;
}


//// FUNCTION FUN_004b1c30 @ 004b1c30 ////

void __fastcall FUN_004b1c30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b1680();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004b1c60 @ 004b1c60 ////

void * FUN_004b1c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x30);
  if (this != (void *)0x0) {
    FUN_004b16d0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_004b1cf0 @ 004b1cf0 ////

void __fastcall FUN_004b1cf0(int param_1)

{
  int iVar1;
  
  if ((DAT_0104a988 != 0) && (iVar1 = DAT_0104a98c - DAT_0104a988 >> 5, 0 < iVar1)) {
    iVar1 = FUN_00990d30(0,iVar1);
    FUN_004036d0((void *)(param_1 + 0x44),*(wchar_t **)(iVar1 * 0x20 + DAT_0104a988),
                 *(uint *)(iVar1 * 0x20 + DAT_0104a988 + 4));
  }
  return;
}


//// FUNCTION FUN_004b1d40 @ 004b1d40 ////

void __fastcall FUN_004b1d40(int param_1)

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


//// FUNCTION FUN_004b1d70 @ 004b1d70 ////

int __fastcall FUN_004b1d70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b1680();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004b1dc0 @ 004b1dc0 ////

void __fastcall FUN_004b1dc0(int param_1)

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


//// FUNCTION FUN_004b1df0 @ 004b1df0 ////

void FUN_004b1df0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    FUN_004b1df0(*(void **)((int)param_1 + 8));
    FUN_004b0840((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004b1e30 @ 004b1e30 ////

void __fastcall FUN_004b1e30(int param_1)

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


//// FUNCTION FUN_004b1e60 @ 004b1e60 ////

void __fastcall FUN_004b1e60(int param_1)

{
  FUN_004b1df0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION Serialization_BeginSave @ 004b1e90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Serialization_BeginSave(void)

{
  DAT_00e67464 = DAT_00e67464 + 1;
  DAT_010583dc = &LAB_004b0130;
  DAT_00e67460 = 1000;
  if (DAT_010584b8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010584b8);
  }
  DAT_010584b8 = (void *)0x0;
  DAT_010584bc = 0;
  DAT_010584c0 = 0;
  if (DAT_01058434 == (void *)0x0) {
    DAT_01058434 = (void *)0x0;
    DAT_01058438 = 0;
    _DAT_0105843c = 0;
    if ((undefined **)DAT_01058448 != &DAT_01058454) {
      do {
        *DAT_01058448 = 0;
        DAT_01058448 = (int *)DAT_01058448[1];
        *(undefined4 *)(*DAT_01058448 + 4) = 0;
      } while ((undefined **)DAT_01058448 != &DAT_01058454);
    }
    DAT_010583e0 = 0;
    DAT_01058448 = (int *)&DAT_01058454;
    DAT_01058454 = &DAT_01058444;
    FUN_00989430(&DAT_010584f4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_01058434);
}


//// FUNCTION FUN_004b1f50 @ 004b1f50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1f50(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (DAT_0104a978 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0104a978 + 0x28;
  }
  FUN_00470a70(DAT_0104917c,DAT_00f87aa0,0x5a2,iVar3,0);
  puVar4 = DAT_0104c5ec;
  if ((DAT_0104c5ec != &DAT_0104c5f8) &&
     (bVar5 = DAT_0104c5ec != &DAT_0104c5f8,
     *(int *)(DAT_0104c5ec[2] + 0x48) = *(int *)(DAT_0104c5ec[2] + 0x48) + 1, bVar5)) {
    do {
      puVar2 = (undefined4 *)puVar4[1];
      if (puVar2 != &DAT_0104c5f8) {
        *(int *)(puVar2[2] + 0x48) = *(int *)(puVar2[2] + 0x48) + 1;
      }
      puVar4 = (undefined4 *)puVar4[2];
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      puVar4 = puVar2;
    } while (puVar2 != &DAT_0104c5f8);
  }
  DAT_010583dc = 0;
  if ((undefined **)DAT_01058448 != &DAT_01058454) {
    do {
      *DAT_01058448 = 0;
      DAT_01058448 = (int *)DAT_01058448[1];
      *(undefined4 *)(*DAT_01058448 + 4) = 0;
    } while ((undefined **)DAT_01058448 != &DAT_01058454);
  }
  DAT_01058448 = (int *)&DAT_01058454;
  DAT_01058454 = &DAT_01058444;
  if (DAT_01058434 == (void *)0x0) {
    DAT_01058434 = (void *)0x0;
    DAT_01058438 = 0;
    _DAT_0105843c = 0;
    if (DAT_010584b8 == (void *)0x0) {
      DAT_010584b8 = (void *)0x0;
      DAT_010584bc = 0;
      DAT_010584c0 = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(DAT_010584b8);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_01058434);
}


//// FUNCTION FUN_004b2050 @ 004b2050 ////

void __thiscall
FUN_004b2050(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca7088;
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
  piVar3 = FUN_004b1c60(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_004b214b:
        *(undefined1 *)(*piVar4 + 0x2c) = 1;
        *(undefined1 *)(piVar5 + 0xb) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x2c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004b06b0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x2c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x2c) = 0;
        FUN_004b0710(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xb] == '\0') goto LAB_004b214b;
      if (piVar6 == (int *)*piVar2) {
        FUN_004b0710(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x2c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x2c) = 0;
      FUN_004b06b0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x2c);
  } while( true );
}


//// FUNCTION FUN_004b2200 @ 004b2200 ////

void __thiscall FUN_004b2200(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca70a8;
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
  FUN_004b05e0((int *)&param_2);
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
      goto LAB_004b2371;
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
      piVar2 = (int *)FUN_004b0340(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x2d) == '\0') {
      uVar3 = FUN_004b0390((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_004b2371:
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
            FUN_004b06b0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x2d) == '\0') {
            if ((*(char *)(*piVar4 + 0x2c) != '\x01') || (*(char *)(piVar4[2] + 0x2c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x2c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x2c) = 1;
                *(undefined1 *)(piVar4 + 0xb) = 0;
                FUN_004b0710(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xb) = (char)piVar5[0xb];
              *(undefined1 *)(piVar5 + 0xb) = 1;
              *(undefined1 *)(piVar4[2] + 0x2c) = 1;
              FUN_004b06b0(this,(int)piVar5);
              break;
            }
LAB_004b2434:
            *(undefined1 *)(piVar4 + 0xb) = 0;
          }
        }
        else {
          if ((char)piVar4[0xb] == '\0') {
            *(undefined1 *)(piVar4 + 0xb) = 1;
            *(undefined1 *)(piVar5 + 0xb) = 0;
            FUN_004b0710(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x2d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x2c) == '\x01') && (*(char *)(*piVar4 + 0x2c) == '\x01'))
            goto LAB_004b2434;
            if (*(char *)(*piVar4 + 0x2c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x2c) = 1;
              *(undefined1 *)(piVar4 + 0xb) = 0;
              FUN_004b06b0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xb) = (char)piVar5[0xb];
            *(undefined1 *)(piVar5 + 0xb) = 1;
            *(undefined1 *)(*piVar4 + 0x2c) = 1;
            FUN_004b0710(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xb) = 1;
  }
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_004b24e0 @ 004b24e0 ////

void __thiscall FUN_004b24e0(void *this,undefined4 *param_1,undefined4 *param_2)

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
    cVar1 = *(char *)((int)puVar6 + 0x2d);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_004b2546;
    }
    FUN_004b07a0((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = __stricmp((char *)param_2[3],(char *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_004b2546:
  puVar5 = (undefined4 *)FUN_004b2050(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_004b25a0 @ 004b25a0 ////

void __thiscall FUN_004b25a0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004b1df0((void *)piVar6[1]);
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
    FUN_004b2200(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004b2660 @ 004b2660 ////

void __fastcall FUN_004b2660(undefined4 *param_1)

{
  if ((undefined4 *)param_1[0x37] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x37],(undefined4 *)param_1[0x38]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x37]);
  }
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  if (10 < (uint)param_1[0x2f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2d]);
  }
  if (10 < (uint)param_1[0x24]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x22]);
  }
  if (10 < (uint)param_1[0x1c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  if (10 < (uint)param_1[0x13]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  FUN_0098a1c0(param_1);
  return;
}


//// FUNCTION FUN_004b2710 @ 004b2710 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2710(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (DAT_0104a988 != (undefined4 *)0x0) {
    FUN_00481090(DAT_0104a988,DAT_0104a98c);
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104a988);
  }
  DAT_0104a988 = (undefined4 *)0x0;
  DAT_0104a98c = (undefined4 *)0x0;
  _DAT_0104a990 = 0;
  puVar3 = (undefined4 *)DAT_0104a978[0x1d];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    puVar2 = DAT_0104a978;
    puVar3 = DAT_0104a978 + 0x18;
    (**(code **)(DAT_0104a978[0x18] + 4))();
    puVar3 = (undefined4 *)*puVar3;
    puVar2[0x1d] = 0;
    (*(code *)*puVar3)();
  }
  if (DAT_0104a978 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104a978)(1);
  }
  DAT_0104a978 = (undefined4 *)0x0;
  return;
}


//// FUNCTION FUN_004b27d0 @ 004b27d0 ////

undefined4 * __fastcall FUN_004b27d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca70fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0098a100(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d1e128;
  FUN_0043b510(param_1 + 10);
  param_1[0x11] = param_1 + 0x14;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 10;
  param_1[0x1a] = param_1 + 0x1d;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 10;
  param_1[0x22] = param_1 + 0x25;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 10;
  param_1[0x2d] = param_1 + 0x30;
  *(undefined2 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 10;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004b2890 @ 004b2890 ////

undefined4 * __thiscall FUN_004b2890(void *this,byte param_1)

{
  FUN_004b2660(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b28b0 @ 004b28b0 ////

void FUN_004b28b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca711b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe8);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_004b27d0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_004b0d10((int)piVar2);
  if ((DAT_0104a988 != 0) && (iVar3 = DAT_0104a98c - DAT_0104a988 >> 5, 0 < iVar3)) {
    iVar3 = FUN_00990d30(0,iVar3);
    FUN_004036d0(piVar2 + 0x11,*(wchar_t **)(iVar3 * 0x20 + DAT_0104a988),
                 *(uint *)(iVar3 * 0x20 + DAT_0104a988 + 4));
  }
  if (piVar2[0x12] != 0) {
    FUN_005e6d10(DAT_0104a97c,piVar2 + 0x11);
  }
  (**(code **)(*piVar2 + 4))();
  (**(code **)*piVar2)(1);
  ExceptionList = puVar1;
  return;
}


//// FUNCTION FUN_004b2980 @ 004b2980 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2980(void)

{
  uint *puVar1;
  size_t sVar2;
  uint uVar3;
  uint local_24;
  int local_8;
  undefined1 *local_4;
  
  thunk_FUN_009d10d0();
  local_8 = FUN_009f3c40(&PTR_DAT_00e51478);
  FUN_0098a3a0(&local_8);
  local_24 = 0x4b29af;
  FUN_0098a3a0((undefined4 *)&DAT_00e51454);
  local_4 = &stack0xffffffd0;
  puVar1 = &local_24;
  local_24 = local_24 & 0xffffff00;
  sVar2 = 0;
  uVar3 = 0x14;
  FUN_004015d0(&stack0xffffffd0,"[HEADER]",8);
  FUN_004b1790((char *)puVar1,sVar2,uVar3);
  FUN_004b28b0();
  puVar1 = &local_24;
  local_24 = local_24 & 0xffffff00;
  sVar2 = 0;
  uVar3 = 0x14;
  local_4 = &stack0xffffffd0;
  FUN_004015d0(&stack0xffffffd0,"[/HEADER]",9);
  FUN_004b1790((char *)puVar1,sVar2,uVar3);
  FUN_0098a3a0((undefined4 *)(DAT_0104cdf4 + 0x3c));
  FUN_009893f0();
  puVar1 = &local_24;
  local_24 = local_24 & 0xffffff00;
  sVar2 = 0;
  uVar3 = 0x14;
  local_4 = &stack0xffffffd0;
  FUN_004015d0(&stack0xffffffd0,"[STATICS]",9);
  FUN_004b1790((char *)puVar1,sVar2,uVar3);
  FUN_009903d0();
  puVar1 = &local_24;
  local_24 = local_24 & 0xffffff00;
  sVar2 = 0;
  uVar3 = 0x14;
  local_4 = &stack0xffffffd0;
  FUN_004015d0(&stack0xffffffd0,"[/STATICS]",10);
  FUN_004b1790((char *)puVar1,sVar2,uVar3);
  puVar1 = &local_24;
  local_24 = local_24 & 0xffffff00;
  sVar2 = 0;
  uVar3 = 0x14;
  local_4 = &stack0xffffffd0;
  FUN_004015d0(&stack0xffffffd0,"[OBJECTS]",9);
  FUN_004b1790((char *)puVar1,sVar2,uVar3);
  FUN_0098cdd0();
  puVar1 = &local_24;
  local_24 = local_24 & 0xffffff00;
  sVar2 = 0;
  uVar3 = 0x14;
  local_4 = &stack0xffffffd0;
  FUN_004015d0(&stack0xffffffd0,"[/OBJECTS]",10);
  FUN_004b1790((char *)puVar1,sVar2,uVar3);
  while ((undefined **)DAT_01058448 != &DAT_01058454) {
    *DAT_01058448 = 0;
    DAT_01058448 = (int *)DAT_01058448[1];
    *(undefined4 *)(*DAT_01058448 + 4) = 0;
  }
  DAT_01058448 = (int *)&DAT_01058454;
  DAT_01058454 = &DAT_01058444;
  if (DAT_01058434 == (void *)0x0) {
    DAT_01058434 = (void *)0x0;
    DAT_01058438 = 0;
    _DAT_0105843c = 0;
    if (DAT_010584b8 == (void *)0x0) {
      DAT_010584b8 = (void *)0x0;
      DAT_010584bc = 0;
      DAT_010584c0 = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(DAT_010584b8);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_01058434);
}


//// FUNCTION Savegame_LoadFromDisk @ 004b2b40 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Savegame_LoadFromDisk(void)

{
  void **ppvVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  char local_34 [8];
  undefined4 uStack_2c;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca713b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if ((undefined **)DAT_01058448 != &DAT_01058454) {
    do {
      ExceptionList = ppvVar1;
      *DAT_01058448 = 0;
      DAT_01058448 = (int *)DAT_01058448[1];
      *(undefined4 *)(*DAT_01058448 + 4) = 0;
      ppvVar1 = ExceptionList;
    } while ((undefined **)DAT_01058448 != &DAT_01058454);
  }
  DAT_01058448 = (int *)&DAT_01058454;
  DAT_01058454 = &DAT_01058444;
  if (DAT_01058434 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_01058434);
  }
  DAT_01058434 = (void *)0x0;
  DAT_01058438 = 0;
  _DAT_0105843c = 0;
  if (DAT_010584b8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_010584b8);
  }
  DAT_010584b8 = (void *)0x0;
  DAT_010584bc = 0;
  DAT_010584c0 = 0;
  if (DAT_01050be8 == (void *)0x0) {
    DAT_00e67464 = DAT_00e67464 + 1;
    DAT_01050be8 = (void *)0x0;
    DAT_01050bec = 0;
    DAT_01050bf0 = 0;
    DAT_010583e0 = 1;
    SLVAR_LoadUint(&local_14);
    uStack_2c = 0x4b2c2c;
    uVar2 = FUN_004aff80(local_14);
    if ((char)uVar2 != '\0') {
      uStack_2c = 0x4b2c46;
      iVar3 = FUN_009f3be0("ver17");
      if (local_14 != iVar3) {
        SLVAR_LoadUint(&DAT_010583e8);
      }
      local_10 = operator_new(0xe8);
      local_4 = 0;
      if (local_10 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = FUN_004b27d0(local_10);
      }
      local_10 = (undefined4 *)&stack0xffffffc0;
      pcVar5 = local_34;
      local_4 = 0xffffffff;
      local_34[0] = '\0';
      sVar6 = 0;
      uVar7 = 0x14;
      FUN_004015d0(&stack0xffffffc0,"[HEADER]",8);
      FUN_004b1790(pcVar5,sVar6,uVar7);
      (**(code **)(*piVar4 + 0x14))();
      local_10 = (undefined4 *)&stack0xffffffc0;
      pcVar5 = local_34;
      local_34[0] = '\0';
      sVar6 = 0;
      uVar7 = 0x14;
      FUN_004015d0(&stack0xffffffc0,"[/HEADER]",9);
      FUN_004b1790(pcVar5,sVar6,uVar7);
      if (piVar4[0x12] != 0) {
        FUN_005e6d10(DAT_0104a97c,piVar4 + 0x11);
      }
      SLVAR_LoadUint((undefined4 *)(DAT_0104cdf4 + 0x3c));
      DAT_00e4fa4c = piVar4[10];
      (**(code **)*piVar4)();
      FUN_0098c0d0();
      FUN_004b1510();
      if ((undefined **)DAT_01058404 != &DAT_01058410) {
        do {
          *DAT_01058404 = 0;
          DAT_01058404 = (int *)DAT_01058404[1];
          *(undefined4 *)(*DAT_01058404 + 4) = 0;
        } while ((undefined **)DAT_01058404 != &DAT_01058410);
      }
      local_10 = (undefined4 *)&stack0xffffffc0;
      DAT_01058404 = (int *)&DAT_01058410;
      DAT_01058410 = &DAT_01058400;
      pcVar5 = local_34;
      local_34[0] = '\0';
      sVar6 = 0;
      uVar7 = 0x14;
      FUN_004015d0(&stack0xffffffc0,"[STATICS]",9);
      FUN_004b1790(pcVar5,sVar6,uVar7);
      SLVAR_LoadOrSaveStatics();
      pcVar5 = local_34;
      local_34[0] = '\0';
      sVar6 = 0;
      uVar7 = 0x14;
      local_10 = (undefined4 *)&stack0xffffffc0;
      FUN_004015d0(&stack0xffffffc0,"[/STATICS]",10);
      FUN_004b1790(pcVar5,sVar6,uVar7);
      pcVar5 = local_34;
      local_34[0] = '\0';
      sVar6 = 0;
      uVar7 = 0x14;
      local_10 = (undefined4 *)&stack0xffffffc0;
      FUN_004015d0(&stack0xffffffc0,"[OBJECTS]",9);
      FUN_004b1790(pcVar5,sVar6,uVar7);
      FUN_0098cf50();
      FUN_0098b750();
      FUN_0098dcc0();
      FUN_0098bb60();
    }
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_01050be8);
}


//// FUNCTION FUN_004b2e40 @ 004b2e40 ////

void __fastcall FUN_004b2e40(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004b25a0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004b2e70 @ 004b2e70 ////

uint __cdecl FUN_004b2e70(int param_1,wchar_t *param_2,uint param_3,uint param_4)

{
  char cVar1;
  void *this;
  uint uVar2;
  undefined4 *this_00;
  undefined4 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  char *_Source;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  wchar_t local_80 [2];
  undefined4 uStack_7c;
  uint local_5c;
  wchar_t *local_58;
  wchar_t *local_54;
  wchar_t *local_50;
  int local_4c;
  uint local_48;
  int local_44 [3];
  undefined4 local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca716b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  this = operator_new(0x28);
  local_4._0_1_ = 1;
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    local_34 = &stack0xffffff74;
    pwVar5 = local_80;
    local_80[0] = L'\0';
    uVar7 = 0;
    uVar8 = 10;
    local_30 = this;
    uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff74,(wchar_t *)&lpCaption_00d16918,uVar2);
    this_00 = FUN_009f3dd0(this,pwVar5,uVar7,uVar8);
  }
  local_30 = &stack0xffffff70;
  pwVar5 = (wchar_t *)&stack0xffffff7c;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar2 = 0;
  uVar7 = 10;
  FUN_004036d0(&stack0xffffff70,param_2,param_3);
  FUN_009f3e50(this_00,pwVar5,uVar2,uVar7);
  FUN_009f3ce0(this_00,&local_4c,4);
  uVar3 = FUN_004aff80(local_4c);
  if ((char)uVar3 != '\0') {
    local_44[0] = 0;
    iVar4 = FUN_009f3be0("ver17");
    if (local_4c != iVar4) {
      FUN_009f3ce0(this_00,local_44,4);
    }
    FUN_009f3ce0(this_00,&local_48,4);
    local_30 = operator_new(local_48 & 0xfffffffe);
    FUN_009f3ce0(this_00,local_30,local_48);
    FUN_009f3ce0(this_00,&local_38,4);
    *(undefined4 *)(param_1 + 0x28) = local_38;
    FUN_009f3ce0(this_00,(void *)(param_1 + 100),4);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0x2c),4);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0x30),4);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0x34),4);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0x38),4);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0x3c),4);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0x40),4);
    FUN_009f3ce0(this_00,&local_5c,4);
    pwVar5 = operator_new(local_5c & 0xfffffffe);
    FUN_009f3ce0(this_00,pwVar5,local_5c);
    uVar2 = FUN_00ace02d(pwVar5);
    FUN_004036d0((void *)(param_1 + 0x44),pwVar5,uVar2);
    FUN_009f3ce0(this_00,&local_5c,4);
    local_58 = operator_new(local_5c & 0xfffffffe);
    FUN_009f3ce0(this_00,local_58,local_5c);
    uVar2 = FUN_00ace02d(local_58);
    FUN_004036d0((void *)(param_1 + 0x68),local_58,uVar2);
    FUN_009f3ce0(this_00,&local_5c,4);
    local_54 = operator_new(local_5c & 0xfffffffe);
    FUN_009f3ce0(this_00,local_54,local_5c);
    uVar2 = FUN_00ace02d(local_54);
    FUN_004036d0((void *)(param_1 + 0x88),local_54,uVar2);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0xa8),4);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0xac),4);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0xb0),4);
    FUN_009f3ce0(this_00,&local_5c,4);
    local_50 = operator_new(local_5c & 0xfffffffe);
    FUN_009f3ce0(this_00,local_50,local_5c);
    uVar2 = FUN_00ace02d(local_50);
    FUN_004036d0((void *)(param_1 + 0xb4),local_50,uVar2);
    FUN_009f3ce0(this_00,(void *)(param_1 + 0xd4),1);
    if (local_44[0] != 0) {
      FUN_009f3ce0(this_00,local_44 + 2,4);
      local_44[1] = 0;
      if (local_44[2] != 0) {
        local_34 = (undefined1 *)(param_1 + 0xd8);
        FUN_009f3ce0(this_00,&local_5c,4);
        _Source = operator_new(local_5c + 1);
        FUN_009f3ce0(this_00,_Source,local_5c);
        _Source[local_5c] = '\0';
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        pcVar6 = _Source;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar2 = (int)pcVar6 - (int)(_Source + 1);
        if (0x13 < uVar2) {
          local_24 = uVar2 + 0x20 & 0xffffffe0;
          local_2c = _malloc(local_24);
        }
        uStack_7c = 0x4b3282;
        _strncpy(local_2c,_Source,uVar2);
        local_2c[uVar2] = '\0';
        local_4._0_1_ = 2;
        local_28 = uVar2;
        FUN_0043a2d0(local_34,&local_2c);
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Source);
      }
    }
    FUN_009f3cb0(this_00);
    if (this_00 != (undefined4 *)0x0) {
      FUN_009f3d60(this_00);
                    /* WARNING: Subroutine does not return */
      _free(this_00);
    }
                    /* WARNING: Subroutine does not return */
    _free(pwVar5);
  }
  uVar2 = FUN_009f3cb0(this_00);
  if (this_00 != (undefined4 *)0x0) {
    FUN_009f3d60(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION Savegame_LoadAndRestoreGame @ 004b3550 ////

/* WARNING: Removing unreachable block (ram,0x004b366e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl Savegame_LoadAndRestoreGame(undefined4 *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *_Memory;
  undefined1 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca71c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009abd80(1);
  _DAT_010583ec = 0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (*(char *)((int)DAT_00f87b04 + 0x86) == '\0') {
    local_2c = local_20;
    DAT_0104a981 = '\x01';
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"",0);
    local_28 = 0;
    *local_2c = '\0';
    local_4._0_1_ = 1;
    FUN_00422750(DAT_00f87b04,&local_2c);
    local_4._0_1_ = 0;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4._0_1_ = 0;
  *DAT_00f87b04 = 0;
  FUN_004036d0(&PTR_DAT_00e51458,(wchar_t *)*param_1,param_1[1]);
  FUN_00418480('\x01');
  FUN_00415520();
  Camera_RegisterDebugStates('\0');
  FUN_005861b0();
  FUN_006425d0();
  FUN_00954600();
  FUN_00957870();
  uVar4 = DAT_0105cc5c;
  fVar3 = DAT_00e551e0;
  DAT_0105cc5c = 0;
  local_4._0_1_ = 2;
  fVar1 = DAT_00e551dc - 256.0;
  fVar2 = DAT_00e551dc + 256.0;
  pvVar5 = operator_new(0x70);
  local_4._0_1_ = 3;
  if (pvVar5 == (void *)0x0) {
    DAT_0104a97c = (float *)0x0;
  }
  else {
    DAT_0104a97c = FUN_005e6b20(pvVar5,fVar1,fVar2,fVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (DAT_0104a981 == '\0') {
    FUN_005e6af0(DAT_0104a97c);
  }
  DAT_010583e4 = 1;
  DAT_010583e8 = 0;
  if (param_2 != '\0') {
    FUN_00797400();
    FUN_006a44f0();
    FUN_006dd1d0();
    FUN_005e16e0();
  }
  uVar6 = FUN_004b1330();
  if ((char)uVar6 != '\0') {
    Savegame_LoadFromDisk();
    FUN_009894b0(&DAT_010584f4);
    FUN_009897a0();
    FUN_004b1f50();
    pvVar5 = (void *)FUN_00523ea0();
    FUN_00525910(pvVar5);
    FUN_004a36a0();
    FUN_0048f3f0();
    FUN_00793910();
    FUN_00854990();
    _Memory = DAT_0104a97c;
    DAT_010583e4 = 0;
    DAT_010583e8 = 0;
    if (DAT_0104a97c == (float *)0x0) {
      DAT_0104a97c = (float *)0x0;
      DAT_0104a981 = 0;
      FUN_0046fd20();
      FUN_00471a80();
      local_4 = 0xffffffff;
      DAT_0105cc5c = uVar4;
      uVar6 = FUN_009abd80(-1);
      ExceptionList = pvStack_c;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    FUN_005e5ef0((int)DAT_0104a97c);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_010583e4 = 0;
  DAT_010583e8 = 0;
  local_4 = 0xffffffff;
  DAT_0105cc5c = uVar4;
  uVar7 = FUN_009abd80(-1);
  ExceptionList = pvStack_c;
  return uVar7 & 0xffffff00;
}


//// FUNCTION Savegame_SaveToDisk @ 004b37e0 ////

/* WARNING: Removing unreachable block (ram,0x004b38ff) */

void __cdecl Savegame_SaveToDisk(undefined4 *param_1,char param_2)

{
  float *_Memory;
  undefined1 uVar1;
  void *this;
  float local_38;
  float local_34;
  char local_20 [11];
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca71f3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_009abd80(1);
  local_4 = 0;
  FUN_004036d0(&PTR_DAT_00e51458,(wchar_t *)*param_1,param_1[1]);
  FUN_00418480('\x01');
  uVar1 = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  local_4._0_1_ = 1;
  local_34 = 256.0;
  local_38 = 768.0;
  param_1 = (undefined4 *)0x44228000;
  if (param_2 != '\0') {
    local_38 = 997.0;
    local_34 = 897.0;
    param_1 = (undefined4 *)0x4431c000;
  }
  this = operator_new(0x70);
  local_4._0_1_ = 2;
  if (this == (void *)0x0) {
    DAT_0104a97c = (float *)0x0;
  }
  else {
    DAT_0104a97c = FUN_005e6b20(this,local_34,local_38,(float)param_1);
  }
  local_20[0] = '\0';
  _strncpy(local_20,"Saving Game",0xb);
  local_15 = 0;
  local_4._0_1_ = 3;
  FUN_00989710();
  local_4 = CONCAT31(local_4._1_3_,1);
  Serialization_BeginSave();
  FUN_004b2980();
  FUN_004b1910();
  _Memory = DAT_0104a97c;
  if (DAT_0104a97c == (float *)0x0) {
    DAT_0104a97c = (float *)0x0;
    local_4 = 0xffffffff;
    DAT_0105cc5c = uVar1;
    FUN_009abd80(-1);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_005e5ef0((int)DAT_0104a97c);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_004b39b0 @ 004b39b0 ////

int __fastcall FUN_004b39b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b1680();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004b39e0 @ 004b39e0 ////

void __fastcall FUN_004b39e0(undefined4 param_1,undefined4 param_2)

{
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
  puStack_8 = &LAB_00ca7210;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00547480(&DAT_0104a994,param_2);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  FUN_004036d0(&local_4c,DAT_0104a9a0,DAT_0104a9a4);
  local_4 = 0;
  FUN_0040cae0(&local_4c,(wchar_t *)PTR_DAT_00e514f8,DAT_00e514fc);
  FUN_004211c0(&PTR_DAT_00e514f8,&local_2c,0,DAT_00e514fc - 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (DAT_0104deb0 == '\0') {
    FUN_004036d0(&PTR_DAT_00e5822c,local_2c,local_28);
  }
  DAT_0104a980 = 1;
  Savegame_SaveToDisk(&local_4c,'\x01');
  DAT_0104a980 = 0;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004b3ae0 @ 004b3ae0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3ae0(void)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 extraout_EDX;
  float10 fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  wchar_t *in_stack_ffffff34;
  uint in_stack_ffffff38;
  uint in_stack_ffffff3c;
  int iVar9;
  TypeDescriptor *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TypeDescriptor *pTVar14;
  float *pfVar15;
  byte bVar16;
  float fStack_9c;
  float fStack_98;
  undefined1 auStack_94 [4];
  undefined1 *puStack_90;
  void *apvStack_8c [2];
  uint uStack_84;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca723b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int **)(DAT_0104a978 + 0x74) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)(DAT_0104a978 + 0x74) + 0xc))();
  }
  iVar1 = FUN_00423320(DAT_00f87b04);
  if ((((iVar1 == 0) && (DAT_0104a974 != 0)) && (*(float *)(DAT_0104a974 + 0x78) != 0.0)) &&
     (0.0 < _DAT_00e51450)) {
    uVar2 = FUN_0053c9f0();
    if ((char)uVar2 == '\0') {
      FUN_00547500((float *)&DAT_0104a994,extraout_EDX);
      uVar7 = FUN_00acd42c();
      uVar8 = FUN_00acd42c();
      if (((int)uVar8 < (int)uVar7) && (DAT_00e67b9e == '\0')) {
        puStack_90 = &stack0xffffff34;
        FUN_00421240(&stack0xffffff34,L"autosave.jad",0xffffffff);
        AutosaveSystem_TriggerAutosave(in_stack_ffffff34,in_stack_ffffff38,in_stack_ffffff3c);
      }
    }
  }
  do {
    do {
      while( true ) {
        while( true ) {
          if (DAT_0104a978 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = DAT_0104a978 + 0x28;
          }
          iVar1 = FUN_00470470(DAT_0104917c,iVar1);
          if (iVar1 == 0) {
            ExceptionList = pvStack_c;
            return;
          }
          iVar1 = FUN_0046f5e0(iVar1);
          if (iVar1 != 0x209) break;
          puVar5 = FUN_004b08c0(apvStack_2c);
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          if (puVar5[1] != 0) {
            FUN_004b08c0(apvStack_6c);
            uStack_4 = 1;
            Savegame_SaveToDisk(apvStack_6c,'\0');
            uStack_4 = 0xffffffff;
            if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_6c[0]);
            }
          }
          DAT_0104deb0 = 0;
        }
        if (iVar1 != 0x231) break;
        bVar16 = 0;
        iVar9 = 1;
        iVar1 = DAT_00f87b04;
        pvVar3 = (void *)FUN_004f3b20();
        FUN_004f98f0(pvVar3,iVar9,iVar1,bVar16);
        iVar1 = 2;
        pvVar3 = (void *)FUN_004f3b20();
        FUN_004f77d0(pvVar3,iVar1);
        FUN_004b08c0(apvStack_8c);
        uStack_4 = 0;
        Savegame_LoadAndRestoreGame(apvStack_8c,'\x01');
        DAT_0104deb0 = 0;
        pvVar3 = (void *)FUN_004f3b20();
        FUN_004f98b0(pvVar3);
        uStack_4 = 0xffffffff;
        if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_8c[0]);
        }
      }
    } while (iVar1 != 0x259);
    iVar1 = 0;
    uVar2 = 2;
    FUN_004f3b20();
    uVar2 = FUN_004f3220(uVar2,iVar1);
    iVar1 = 1;
    uVar12 = 2;
    FUN_004f3b20();
    uVar12 = FUN_004f3220(uVar12,iVar1);
    iVar1 = 2;
    uVar13 = 2;
    FUN_004f3b20();
    uVar13 = FUN_004f3220(uVar13,iVar1);
    iVar1 = 2;
    FUN_004f3b20();
    fVar6 = FUN_004f30a0(iVar1);
    fStack_9c = (float)fVar6;
    iVar1 = 1;
    FUN_004f3b20();
    fVar6 = FUN_004f30a0(iVar1);
    fStack_98 = (float)fVar6;
    bVar16 = 0;
    iVar9 = 1;
    iVar1 = DAT_00f87b04;
    pvVar3 = (void *)FUN_004f3b20();
    FUN_004f98f0(pvVar3,iVar9,iVar1,bVar16);
    iVar1 = 2;
    pvVar3 = (void *)FUN_004f3b20();
    FUN_004f77d0(pvVar3,iVar1);
    FUN_004b08c0(apvStack_4c);
    uStack_4 = 2;
    Savegame_LoadAndRestoreGame(apvStack_4c,'\x01');
    DAT_0104deb0 = 0;
    pvVar3 = (void *)FUN_004f3b20();
    FUN_004f98b0(pvVar3);
    FUN_004af4c0(6,0x40400000);
    FUN_0043b520(auStack_94,1960.0);
    FUN_0044e400();
    DAT_010503d1 = DAT_0104dd04;
    DAT_010503d0 = 1;
    iVar1 = GlobalStatRegistry_Get();
    FUN_008d23b0(iVar1);
    iVar9 = 0;
    pTVar14 = &TM::CStudioPlayer::RTTI_Type_Descriptor;
    pTVar10 = &TM::CStudio::RTTI_Type_Descriptor;
    iVar1 = 0;
    piVar4 = (int *)GetPlayerStudio();
    piVar4 = (int *)FUN_00ace790(piVar4,iVar1,pTVar10,pTVar14,iVar9);
    if (piVar4 != (int *)0x0) {
      FUN_004036d0(piVar4 + 0x8d,(wchar_t *)PTR_DAT_00e57d8c,DAT_00e57d90);
      (**(code **)(*piVar4 + 0x1c))();
      (**(code **)(*piVar4 + 0x50))();
      piVar4[0x7b] = 0;
    }
    iVar1 = 0;
    uVar11 = 2;
    FUN_004f3b20();
    FUN_004f3200(uVar11,iVar1,uVar2);
    iVar1 = 1;
    uVar2 = 2;
    FUN_004f3b20();
    FUN_004f3200(uVar2,iVar1,uVar12);
    iVar1 = 2;
    uVar2 = 2;
    FUN_004f3b20();
    FUN_004f3200(uVar2,iVar1,uVar13);
    pfVar15 = &fStack_9c;
    iVar1 = 2;
    pvVar3 = (void *)FUN_004f3b20();
    FUN_004f8ea0(pvVar3,pfVar15,iVar1);
    pfVar15 = &fStack_98;
    iVar1 = 1;
    pvVar3 = (void *)FUN_004f3b20();
    FUN_004f8ea0(pvVar3,pfVar15,iVar1);
    *(undefined1 *)(DAT_00f87b04 + 0xb) = 1;
    uStack_4 = 0xffffffff;
  } while (uStack_44 < 0xb);
                    /* WARNING: Subroutine does not return */
  _free(apvStack_4c[0]);
}


//// FUNCTION FUN_004b3f00 @ 004b3f00 ////

undefined4 * __fastcall FUN_004b3f00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0098a100(param_1);
  local_4 = 0;
  FUN_0040a070(param_1 + 10);
  *param_1 = &PTR_FUN_00d1e1c0;
  param_1[10] = &PTR_LAB_00d1e1b8;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = param_1 + 0x18;
  param_1[0x18] = &PTR_LAB_00d1e108;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004b3f80 @ 004b3f80 ////

undefined4 * __thiscall FUN_004b3f80(void *this,byte param_1)

{
  FUN_004b3fa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b3fa0 @ 004b3fa0 ////

void __fastcall FUN_004b3fa0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca7278;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  param_1[0x18] = &PTR_LAB_00d1e108;
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
    puVar1 = param_1 + 10;
  }
  FUN_00526bb0(puVar1);
  local_4 = 0xffffffff;
  FUN_0098a1c0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004b4040 @ 004b4040 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004b4040(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint local_294;
  char *local_290;
  uint local_28c;
  uint local_288;
  char local_284 [20];
  undefined4 local_270 [2];
  undefined4 local_268 [18];
  int local_220;
  int local_21c;
  char cStack_215;
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca72b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0104aa14 & 1) == 0) {
    DAT_0104aa14 = DAT_0104aa14 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0104aa0c = FUN_004b1680();
    *(undefined1 *)(DAT_0104aa0c + 0x2d) = 1;
    *(int *)(DAT_0104aa0c + 4) = DAT_0104aa0c;
    *(int *)DAT_0104aa0c = DAT_0104aa0c;
    *(int *)(DAT_0104aa0c + 8) = DAT_0104aa0c;
    _DAT_0104aa10 = 0;
    _atexit(FUN_00d117f0);
  }
  local_4 = 0xffffffff;
  if (DAT_0104aa04 == '\0') {
    FUN_009c89a0(local_268);
    local_4 = 1;
    FUN_009ca9d0(local_268,"*.dlc","data\\",(undefined1 *)0x1);
    for (local_294 = 0; (local_220 != 0 && (local_294 < (uint)(local_21c - local_220 >> 2)));
        local_294 = local_294 + 1) {
      __splitpath(*(char **)(local_220 + local_294 * 4),(char *)0x0,(char *)0x0,local_214,local_110)
      ;
      pcVar2 = local_110;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar2 - (int)local_110;
      pcVar2 = &cStack_215;
      do {
        pcVar5 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar5 != '\0');
      pcVar5 = local_110;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar2 = pcVar2 + 1;
      }
      local_290 = local_284;
      pcVar2 = local_214;
      local_284[0] = '\0';
      local_28c = 0;
      local_288 = 0x14;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar2 - (int)(local_214 + 1);
      if (0x13 < uVar3) {
        local_288 = uVar3 + 0x20 & 0xffffffe0;
        local_290 = _malloc(local_288);
      }
      _strncpy(local_290,local_214,uVar3);
      local_290[uVar3] = '\0';
      local_4 = CONCAT31(local_4._1_3_,2);
      local_28c = uVar3;
      FUN_004b24e0(&DAT_0104aa08,local_270,&local_290);
      if (0x14 < local_288) {
                    /* WARNING: Subroutine does not return */
        _free(local_290);
      }
    }
    DAT_0104aa04 = '\x01';
    local_4 = 0xffffffff;
    FUN_009c8560(local_268);
  }
  ExceptionList = local_c;
  return &DAT_0104aa08;
}


//// FUNCTION FUN_004b4260 @ 004b4260 ////

undefined1 __cdecl FUN_004b4260(int param_1)

{
  undefined4 *puVar1;
  undefined *this;
  int iVar2;
  undefined4 **ppuVar3;
  int iVar4;
  undefined1 local_d;
  uint local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  this = FUN_004b4040();
  iVar4 = 0;
  local_d = 1;
  local_c = 0;
  do {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 == 0) || ((uint)(*(int *)(param_1 + 8) - iVar2 >> 5) <= local_c)) {
      return local_d;
    }
    puVar1 = *(undefined4 **)(this + 4);
    local_8 = FUN_004b0660(this,(undefined4 *)(iVar4 + iVar2));
    if (local_8 == *(undefined4 **)(this + 4)) {
LAB_004b42cb:
      local_4 = *(undefined4 **)(this + 4);
      ppuVar3 = &local_4;
    }
    else {
      iVar2 = __stricmp(*(char **)(iVar4 + iVar2),(char *)local_8[3]);
      if (iVar2 < 0) goto LAB_004b42cb;
      ppuVar3 = &local_8;
    }
    if (*ppuVar3 == puVar1) {
      local_d = 0;
    }
    local_c = local_c + 1;
    iVar4 = iVar4 + 0x20;
  } while( true );
}


//// FUNCTION FUN_004b4300 @ 004b4300 ////

void __fastcall FUN_004b4300(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0xa8) == 3) {
    uVar2 = FUN_00990ae0(param_1,param_2);
    if (1000 < (uint)((int)uVar2 - *(int *)(param_1 + 0x7c))) {
      uVar1 = FUN_0053c9f0();
      if ((char)uVar1 != '\0') {
        FUN_0053ca50();
        return;
      }
      FUN_004b39e0(extraout_ECX,extraout_EDX);
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_004b4340 @ 004b4340 ////

void __fastcall FUN_004b4340(int param_1)

{
  undefined *puVar1;
  int local_8;
  undefined4 local_4;
  
  FUN_0098c270((float *)(param_1 + 0x28));
  FUN_0098c270((float *)(param_1 + 100));
  FUN_0098a3a0((undefined4 *)(param_1 + 0x2c));
  FUN_0098a3a0((undefined4 *)(param_1 + 0x30));
  FUN_0098a3a0((undefined4 *)(param_1 + 0x34));
  FUN_0098a3a0((undefined4 *)(param_1 + 0x38));
  FUN_0098a3a0((undefined4 *)(param_1 + 0x3c));
  FUN_0098a3a0((undefined4 *)(param_1 + 0x40));
  FUN_0098bfd0((undefined4 *)(param_1 + 0x44));
  FUN_0098bfd0((undefined4 *)(param_1 + 0x68));
  FUN_0098bfd0((undefined4 *)(param_1 + 0x88));
  FUN_0098c270((float *)(param_1 + 0xa8));
  FUN_0098a3a0((undefined4 *)(param_1 + 0xac));
  FUN_0098a3a0((undefined4 *)(param_1 + 0xb0));
  FUN_0098bfd0((undefined4 *)(param_1 + 0xb4));
  FUN_0098a380((undefined4 *)(param_1 + 0xd4));
  puVar1 = FUN_004b4040();
  local_4 = *(undefined4 *)(puVar1 + 8);
  FUN_0098a3a0(&local_4);
  local_8 = **(int **)(puVar1 + 4);
  if ((int *)local_8 != *(int **)(puVar1 + 4)) {
    do {
      FUN_0098be10((undefined4 *)(local_8 + 0xc));
      FUN_004b05e0(&local_8);
    } while (local_8 != *(int *)(puVar1 + 4));
  }
  return;
}


//// FUNCTION FUN_004b4440 @ 004b4440 ////

undefined1 __cdecl FUN_004b4440(undefined4 *param_1)

{
  undefined1 uVar1;
  wchar_t *pwVar2;
  uint uVar3;
  uint uVar4;
  wchar_t local_110 [6];
  undefined4 uStack_104;
  undefined4 local_f4 [54];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca72cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004b27d0(local_f4);
  pwVar2 = local_110;
  local_110[0] = L'\0';
  uVar3 = 0;
  uVar4 = 10;
  local_4 = 0;
  FUN_004036d0(&stack0xfffffee4,(wchar_t *)*param_1,param_1[1]);
  uVar3 = FUN_004b2e70((int)local_f4,pwVar2,uVar3,uVar4);
  if ((char)uVar3 == '\0') {
    local_4 = 0xffffffff;
    FUN_004b2660(local_f4);
    ExceptionList = pvStack_c;
    return 0;
  }
  uStack_104 = 0x4b44e6;
  uVar1 = FUN_004b4260((int)local_1c);
  local_4 = 0xffffffff;
  FUN_004b2660(local_f4);
  ExceptionList = pvStack_c;
  return uVar1;
}


//// FUNCTION AutosaveSystem_Constructor @ 004b4520 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AutosaveSystem_Constructor(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int local_40;
  undefined1 *local_3c;
  undefined4 local_38;
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
  puStack_8 = &LAB_00ca730b;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"autosave",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 0;
  CVarSystem_Register_STUBBED();
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_30 = local_30 & 0xfffffffe | 2;
  local_34 = 0;
  local_3c = &LAB_004b04d0;
  local_38 = 0x11;
  FUN_009a14d0((int *)&local_3c);
  puVar1 = operator_new(0x78);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_0104a978 = (undefined4 *)0x0;
  }
  else {
    DAT_0104a978 = FUN_004b3f00(puVar1);
  }
  local_4 = 0xffffffff;
  DAT_0104a981 = 0;
  DAT_0104a982 = 0;
  FUN_00471840("MT_GAME_SAVE",0x209);
  FUN_00471840("MT_GAME_LOAD",0x231);
  FUN_00547480(&DAT_0104a994,extraout_EDX);
  FUN_005474a0((float *)&DAT_0104a994,extraout_EDX_00);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"time",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4 = 2;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  if (local_24 < 0x15) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"Autosave Setting",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    local_4 = 3;
    lVar2 = Config_GetOrCreateInt(g_configRegistryPath,&local_2c,1);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    switch(lVar2) {
    case 0:
      local_40 = 5;
      break;
    case 1:
      local_40 = 0xf;
      break;
    case 2:
      local_40 = 0x1e;
      break;
    case 3:
      local_40 = 0x2d;
      break;
    case 4:
      local_40 = 0x3c;
      break;
    case 5:
      local_40 = 0;
      break;
    default:
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"autosave",8);
      local_28 = 8;
      local_2c[8] = '\0';
      local_4 = 4;
      local_40 = FUN_00558750(DAT_00f88624,&local_2c,0x14);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    ExceptionList = local_c;
    _DAT_00e51450 = (float)local_40 * 60.0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_004b4810 @ 004b4810 ////

void FUN_004b4810(void)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_78;
  wchar_t *local_54;
  uint local_50;
  uint local_4c;
  wchar_t local_48 [10];
  undefined4 local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7330;
  local_c = ExceptionList;
  local_54 = local_48;
  local_48[0] = L'\0';
  local_50 = 0;
  local_4c = 10;
  ExceptionList = &local_c;
  FUN_004036d0(&local_54,DAT_0104a9a0,DAT_0104a9a4);
  local_4 = 0;
  sVar3 = FUN_00ace02d(L"quicksave.jad");
  FUN_0040cae0(&local_54,L"quicksave.jad",sVar3);
  pwVar6 = (wchar_t *)&local_78;
  local_78 = (uint)local_78._2_2_ << 0x10;
  uVar7 = 0;
  uVar8 = 10;
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&stack0xffffff7c,(wchar_t *)&lpCaption_00d16918,uVar4);
  FUN_009f3dd0(local_34,pwVar6,uVar7,uVar8);
  pwVar6 = (wchar_t *)&stack0xffffff84;
  uVar4 = 0;
  uVar7 = 10;
  local_4._0_1_ = 1;
  FUN_004036d0(&stack0xffffff78,local_54,local_50);
  bVar1 = FUN_009f3e50(local_34,pwVar6,uVar4,uVar7);
  if (bVar1) {
    FUN_009f3cb0(local_34);
    cVar2 = FUN_004b4440(&local_54);
    if (cVar2 != '\0') {
      if (DAT_0104deb0 == '\0') {
        FUN_004036d0(&PTR_DAT_00e5824c,local_54,local_50);
      }
      if (DAT_0104a978 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = DAT_0104a978 + 0x28;
      }
      local_78 = 0x4b4963;
      FUN_00470a70(DAT_0104917c,iVar5,0x231,0,0);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_009f3d60(local_34);
  }
  else {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_009f3d60(local_34);
  }
  if (10 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004b49b0 @ 004b49b0 ////

char __fastcall FUN_004b49b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = GetPlayerStudio();
  uVar2 = FUN_0058d0d0(iVar1);
  return '\x01' - (uVar2 < *(uint *)(param_1 + 0x1f0));
}


//// FUNCTION FUN_004b49d0 @ 004b49d0 ////

undefined1 __fastcall FUN_004b49d0(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  float10 fVar3;
  
  uVar2 = 1;
  fVar3 = FUN_0043b710((float *)(param_1 + 0x1d8));
  if ((float10)0.0 < fVar3) {
    uVar1 = FUN_0043b680((float *)(param_1 + 0x1d8),(float *)&DAT_00e4fa4c);
    if ((char)uVar1 != '\0') {
      uVar2 = 0;
    }
  }
  fVar3 = FUN_0043b710((float *)(param_1 + 0x1dc));
  if ((float10)0.0 < fVar3) {
    uVar1 = FUN_0043b6c0((float *)(param_1 + 0x1dc),(float *)&DAT_00e4fa4c);
    if ((char)uVar1 != '\0') {
      return 0;
    }
  }
  return uVar2;
}


//// FUNCTION FUN_004b4a40 @ 004b4a40 ////

int __fastcall FUN_004b4a40(int param_1)

{
  return param_1 + 0x1a0;
}


//// FUNCTION FUN_004b4a50 @ 004b4a50 ////

undefined4 __fastcall FUN_004b4a50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f0);
}


//// FUNCTION FUN_004b4a60 @ 004b4a60 ////

undefined4 __fastcall FUN_004b4a60(int param_1)

{
  return *(undefined4 *)(param_1 + 500);
}


//// FUNCTION FUN_004b4a70 @ 004b4a70 ////

void FUN_004b4a70(void)

{
  return;
}


//// FUNCTION FUN_004b4a90 @ 004b4a90 ////

undefined4 * __fastcall FUN_004b4a90(undefined4 *param_1)

{
  FUN_009b38a0(param_1);
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *param_1 = &PTR_FUN_00d1e2b8;
  return param_1;
}


//// FUNCTION FUN_004b4ab0 @ 004b4ab0 ////

void __fastcall FUN_004b4ab0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1e2b8;
  FUN_009b32b0(param_1);
  return;
}


//// FUNCTION FUN_004b4ae0 @ 004b4ae0 ////

undefined1 __thiscall FUN_004b4ae0(void *this,int param_1)

{
  return *(undefined1 *)(param_1 + 0x194 + (int)this);
}


//// FUNCTION FUN_004b4b00 @ 004b4b00 ////

int * __thiscall FUN_004b4b00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004b4b40 @ 004b4b40 ////

int __fastcall FUN_004b4b40(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_004b4b60 @ 004b4b60 ////

int * __thiscall FUN_004b4b60(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004b4b80 @ 004b4b80 ////

int * __thiscall FUN_004b4b80(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004b4cf0 @ 004b4cf0 ////

int __fastcall FUN_004b4cf0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x4c;
}


//// FUNCTION FUN_004b4d90 @ 004b4d90 ////

int __fastcall FUN_004b4d90(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_004b5030 @ 004b5030 ////

void __thiscall FUN_004b5030(void *this,int *param_1)

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


//// FUNCTION FUN_004b51d0 @ 004b51d0 ////

void __cdecl FUN_004b51d0(int param_1)

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


//// FUNCTION FUN_004b51f0 @ 004b51f0 ////

void __cdecl FUN_004b51f0(int *param_1)

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


//// FUNCTION FUN_004b5230 @ 004b5230 ////

void __fastcall FUN_004b5230(int *param_1)

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


//// FUNCTION FUN_004b5290 @ 004b5290 ////

void __fastcall FUN_004b5290(int *param_1)

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


//// FUNCTION FUN_004b5330 @ 004b5330 ////

void __cdecl FUN_004b5330(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_004b5370 @ 004b5370 ////

void __cdecl FUN_004b5370(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_004b5430 @ 004b5430 ////

int * __thiscall FUN_004b5430(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004b5500 @ 004b5500 ////

undefined4 * __cdecl FUN_004b5500(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004b5670 @ 004b5670 ////

undefined4 * FUN_004b5670(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca734e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  puVar2[0xe] = puVar2[0xe] | 2;
  puVar3 = operator_new(0x24);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_009910f0(puVar3);
  }
  puVar2[1] = iVar4;
  *(undefined1 *)(iVar4 + 0xc) = 6;
  *(uint *)(puVar2[1] + 0x10) = *(uint *)(puVar2[1] + 0x10) & 0xbfffffff;
  local_4 = 0xffffffff;
  _sprintf(local_10c,"Thumbs\\Films\\%s");
  pcVar1 = local_10c;
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  _sprintf(pcVar5 + -3,(char *)&PTR_DAT_00d1e2c0);
  pvVar6 = FUN_0099bb50(local_10c,0,0,0,'\0');
  if (*(void **)((int)puVar2[1] + 0x18) != pvVar6) {
    Engine_SetResourceReference((void *)puVar2[1],(int)pvVar6);
  }
  if (pvVar6 != (void *)0x0) {
    FUN_0099b400(pvVar6);
  }
  puVar2[0xc] = 0x3f800000;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xd] = 0x3f800000;
  puVar2[2] = 0xffffffff;
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_004b57d0 @ 004b57d0 ////

int __fastcall FUN_004b57d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x1a8); iVar1 != param_1 + 0x1b4; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION FUN_004b57f0 @ 004b57f0 ////

void __thiscall FUN_004b57f0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x1f8);
  return;
}


//// FUNCTION FUN_004b5800 @ 004b5800 ////

void __thiscall FUN_004b5800(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x1fc);
  return;
}


//// FUNCTION FUN_004b5810 @ 004b5810 ////

void __thiscall FUN_004b5810(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x200);
  return;
}


//// FUNCTION FUN_004b5820 @ 004b5820 ////

void __thiscall FUN_004b5820(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x204);
  return;
}


//// FUNCTION FUN_004b5830 @ 004b5830 ////

void __thiscall FUN_004b5830(void *this,int param_1)

{
  if (*(void **)((int)this + 0x23c) != (void *)0x0) {
    FUN_004cdca0(*(void **)((int)this + 0x23c),param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_004b5850 @ 004b5850 ////

undefined4 __fastcall FUN_004b5850(int param_1)

{
  return *(undefined4 *)(param_1 + 0x23c);
}


//// FUNCTION FUN_004b5890 @ 004b5890 ////

undefined4 * __thiscall FUN_004b5890(void *this,byte param_1)

{
  FUN_004b4ab0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b58b0 @ 004b58b0 ////

void __thiscall FUN_004b58b0(void *this,float *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0051ff70(2);
  if (((char)uVar2 == '\0') && (fVar1 = *(float *)((int)this + 0x248), 0.0 <= fVar1)) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    *param_1 = fVar1;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_004b5910 @ 004b5910 ////

undefined4 __fastcall FUN_004b5910(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x248)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_004b5930 @ 004b5930 ////

undefined4 __fastcall FUN_004b5930(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return CONCAT31((int3)(iVar1 >> 0xd),iVar1 >> 5 == 0);
}


//// FUNCTION FUN_004b59a0 @ 004b59a0 ////

void __fastcall FUN_004b59a0(int param_1)

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


//// FUNCTION FUN_004b5b60 @ 004b5b60 ////

void __fastcall FUN_004b5b60(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004b5ca0 @ 004b5ca0 ////

undefined4 * __thiscall FUN_004b5ca0(void *this,undefined4 *param_1)

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
LAB_004b5ce4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004b5ce9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004b5ce4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004b5ce9:
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


//// FUNCTION FUN_004b5ea0 @ 004b5ea0 ////

void __thiscall FUN_004b5ea0(void *this,int param_1)

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


//// FUNCTION FUN_004b5f30 @ 004b5f30 ////

int * __fastcall FUN_004b5f30(int *param_1)

{
  FUN_004b5290(param_1);
  return param_1;
}


//// FUNCTION FUN_004b5f40 @ 004b5f40 ////

int * __fastcall FUN_004b5f40(int *param_1)

{
  FUN_004b5230(param_1);
  return param_1;
}


//// FUNCTION FUN_004b5fa0 @ 004b5fa0 ////

void __cdecl FUN_004b5fa0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_004b5fe0 @ 004b5fe0 ////

void __cdecl FUN_004b5fe0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_004b6010 @ 004b6010 ////

void __cdecl FUN_004b6010(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_004b6080 @ 004b6080 ////

void __fastcall FUN_004b6080(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_004b6150 @ 004b6150 ////

int __cdecl FUN_004b6150(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ca7371;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x4c) {
    local_8 = 1;
    if ((void *)param_3 != (void *)0x0) {
      FUN_004b9a90((void *)param_3,(undefined4 *)param_1);
    }
    param_3 = param_3 + 0x4c;
  }
  ExceptionList = local_10;
  return (int)(void *)param_3;
}


//// FUNCTION FUN_004b61e0 @ 004b61e0 ////

void * __cdecl FUN_004b61e0(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ca7391;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x13) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004b9a90(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x4c);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_004b6270 @ 004b6270 ////

undefined4 * __thiscall FUN_004b6270(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x138) == 0) {
    FUN_009b5030(param_1,(undefined4 *)((int)this + 0x70));
    return param_1;
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x134),*(uint *)((int)this + 0x138));
  return param_1;
}


//// FUNCTION FUN_004b62d0 @ 004b62d0 ////

undefined4 * __thiscall FUN_004b62d0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x158) == 0) {
    FUN_009b5030(param_1,(undefined4 *)((int)this + 0x90));
    return param_1;
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x154),*(uint *)((int)this + 0x158));
  return param_1;
}


//// FUNCTION FUN_004b6330 @ 004b6330 ////

undefined4 * __thiscall FUN_004b6330(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0xb0),*(uint *)((int)this + 0xb4));
  return param_1;
}


//// FUNCTION FUN_004b6370 @ 004b6370 ////

undefined4 * __thiscall FUN_004b6370(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x110),*(uint *)((int)this + 0x114));
  return param_1;
}


//// FUNCTION FUN_004b63b0 @ 004b63b0 ////

undefined4 * __thiscall FUN_004b63b0(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0xf0),*(uint *)((int)this + 0xf4));
  return param_1;
}


//// FUNCTION FUN_004b63f0 @ 004b63f0 ////

undefined4 * __thiscall FUN_004b63f0(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0xd0),*(uint *)((int)this + 0xd4));
  return param_1;
}


//// FUNCTION FUN_004b6430 @ 004b6430 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6430(void)

{
  if (DAT_0104aa70 < 0xb) {
    if (0x14 < DAT_0104aa70) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104aa68);
    }
    DAT_0104aa70 = 0x20;
    DAT_0104aa68 = _malloc(0x20);
  }
  _strncpy(DAT_0104aa68,"incidental",10);
  DAT_0104aa6c = 10;
  DAT_0104aa68[10] = '\0';
  if (DAT_0104aa90 < 6) {
    if (0x14 < DAT_0104aa90) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104aa88);
    }
    DAT_0104aa90 = 0x20;
    DAT_0104aa88 = _malloc(0x20);
  }
  _strncpy(DAT_0104aa88,"intro",5);
  DAT_0104aa8c = 5;
  DAT_0104aa88[5] = '\0';
  if (DAT_0104aab0 < 0xc) {
    if (0x14 < DAT_0104aab0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104aaa8);
    }
    DAT_0104aab0 = 0x20;
    DAT_0104aaa8 = _malloc(0x20);
  }
  _strncpy(DAT_0104aaa8,"preparation",0xb);
  _DAT_0104aaac = 0xb;
  DAT_0104aaa8[0xb] = '\0';
  if (DAT_0104aad0 < 10) {
    if (0x14 < DAT_0104aad0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104aac8);
    }
    DAT_0104aad0 = 0x20;
    DAT_0104aac8 = _malloc(0x20);
  }
  _strncpy(DAT_0104aac8,"traveling",9);
  _DAT_0104aacc = 9;
  DAT_0104aac8[9] = '\0';
  if (DAT_0104aaf0 < 0xb) {
    if (0x14 < DAT_0104aaf0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104aae8);
    }
    DAT_0104aaf0 = 0x20;
    DAT_0104aae8 = _malloc(0x20);
  }
  _strncpy(DAT_0104aae8,"resolution",10);
  _DAT_0104aaec = 10;
  DAT_0104aae8[10] = '\0';
  if (DAT_0104ab10 < 0xe) {
    if (0x14 < DAT_0104ab10) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104ab08);
    }
    DAT_0104ab10 = 0x20;
    DAT_0104ab08 = _malloc(0x20);
  }
  _strncpy(DAT_0104ab08,"investigation",0xd);
  _DAT_0104ab0c = 0xd;
  DAT_0104ab08[0xd] = '\0';
  if (DAT_0104ab30 < 8) {
    if (0x14 < DAT_0104ab30) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104ab28);
    }
    DAT_0104ab30 = 0x20;
    DAT_0104ab28 = _malloc(0x20);
  }
  _strncpy(DAT_0104ab28,"pursuit",7);
  _DAT_0104ab2c = 7;
  DAT_0104ab28[7] = '\0';
  if (DAT_0104ab50 < 9) {
    if (0x14 < DAT_0104ab50) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104ab48);
    }
    DAT_0104ab50 = 0x20;
    DAT_0104ab48 = _malloc(0x20);
  }
  _strncpy(DAT_0104ab48,"violence",8);
  _DAT_0104ab4c = 8;
  DAT_0104ab48[8] = '\0';
  if (DAT_0104ab70 < 0xd) {
    if (0x14 < DAT_0104ab70) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104ab68);
    }
    DAT_0104ab70 = 0x20;
    DAT_0104ab68 = _malloc(0x20);
  }
  _strncpy(DAT_0104ab68,"conversation",0xc);
  _DAT_0104ab6c = 0xc;
  DAT_0104ab68[0xc] = '\0';
  if (DAT_0104ab90 < 7) {
    if (0x14 < DAT_0104ab90) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104ab88);
    }
    DAT_0104ab90 = 0x20;
    DAT_0104ab88 = _malloc(0x20);
  }
  _strncpy(DAT_0104ab88,"loving",6);
  _DAT_0104ab8c = 6;
  DAT_0104ab88[6] = '\0';
  if (DAT_0104abb0 < 6) {
    if (0x14 < DAT_0104abb0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104aba8);
    }
    DAT_0104abb0 = 0x20;
    DAT_0104aba8 = _malloc(0x20);
  }
  _strncpy(DAT_0104aba8,"stunt",5);
  _DAT_0104abac = 5;
  DAT_0104aba8[5] = '\0';
  if (DAT_0104abd0 < 10) {
    if (0x14 < DAT_0104abd0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_0104abc8);
    }
    DAT_0104abd0 = 0x20;
    DAT_0104abc8 = _malloc(0x20);
  }
  _strncpy(DAT_0104abc8,"suggested",9);
  _DAT_0104abcc = 9;
  DAT_0104abc8[9] = '\0';
  return;
}


//// FUNCTION FUN_004b6880 @ 004b6880 ////

undefined4 __cdecl FUN_004b6880(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca73ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_009d3660(param_1,(uint *)0x0);
  if ((char)uVar1 == '\0') {
    ExceptionList = local_c;
    return uVar1;
  }
  piVar2 = operator_new(100);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009b38a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d1e2b8;
    piVar2[0x15] = 0;
    piVar2[0x17] = 0;
    *(undefined1 *)(piVar2 + 0xf) = 0;
    *(undefined1 *)(piVar2 + 0x16) = 0;
  }
  local_4 = 0xffffffff;
  FUN_004015d0(piVar2 + 1,(char *)*param_1,param_1[1]);
  uVar3 = FUN_009d3720(param_1);
  piVar2[0xb] = uVar3;
  piVar2[0x15] = param_2;
  uVar1 = AsyncLoadJob_ExecuteSync(piVar2);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_004b6940 @ 004b6940 ////

undefined4 * __cdecl FUN_004b6940(undefined4 *param_1,int param_2)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)(&DAT_0104aa68)[param_2 * 8],(&DAT_0104aa6c)[param_2 * 8]);
  return param_1;
}


//// FUNCTION FUN_004b6980 @ 004b6980 ////

undefined4 * __cdecl FUN_004b6980(undefined4 *param_1,float param_2)

{
  char *pcVar1;
  
  if (param_2 < 0.2 == (param_2 == 0.2)) {
    if (param_2 < 0.4 == (param_2 == 0.4)) {
      if (param_2 < 0.6 == (param_2 == 0.6)) {
        if (param_2 < 0.8 == (param_2 == 0.8)) {
          pcVar1 = "ui/bar_stunt05.dds";
        }
        else {
          pcVar1 = "ui/bar_stunt04.dds";
        }
      }
      else {
        pcVar1 = "ui/bar_stunt03.dds";
      }
    }
    else {
      pcVar1 = "ui/bar_stunt02.dds";
    }
  }
  else {
    pcVar1 = "ui/bar_stunt01.dds";
  }
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,pcVar1,0x12);
  return param_1;
}


//// FUNCTION FUN_004b6a80 @ 004b6a80 ////

void __fastcall FUN_004b6a80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1e3c4;
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


//// FUNCTION FUN_004b6b20 @ 004b6b20 ////

void __fastcall FUN_004b6b20(int param_1)

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


//// FUNCTION FUN_004b6b40 @ 004b6b40 ////

void __fastcall FUN_004b6b40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1e3d4;
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


//// FUNCTION FUN_004b6c20 @ 004b6c20 ////

void __thiscall FUN_004b6c20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1e3e4;
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


//// FUNCTION FUN_004b6c70 @ 004b6c70 ////

void __fastcall FUN_004b6c70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1e3e4;
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


//// FUNCTION FUN_004b6d00 @ 004b6d00 ////

undefined4 * __thiscall FUN_004b6d00(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_004b6d70 @ 004b6d70 ////

int * __fastcall FUN_004b6d70(int *param_1)

{
  FUN_004b5290(param_1);
  return param_1;
}


//// FUNCTION FUN_004b6d80 @ 004b6d80 ////

int * __fastcall FUN_004b6d80(int *param_1)

{
  FUN_004b5230(param_1);
  return param_1;
}


//// FUNCTION FUN_004b6d90 @ 004b6d90 ////

void FUN_004b6d90(void)

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


//// FUNCTION FUN_004b6e50 @ 004b6e50 ////

undefined4 * __thiscall FUN_004b6e50(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_004b6ed0 @ 004b6ed0 ////

void * FUN_004b6ed0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_004b6f00 @ 004b6f00 ////

void * FUN_004b6f00(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_004b6f80 @ 004b6f80 ////

void * __thiscall FUN_004b6f80(void *this,byte param_1)

{
  FUN_004b6080((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b6fa0 @ 004b6fa0 ////

int * __cdecl FUN_004b6fa0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = param_1[1];
    _Source = (char *)*param_1;
    if ((uint)param_3[2] <= _Count) {
      if (0x14 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[2] = _Size;
      pvVar1 = _malloc(_Size);
      *param_3 = (int)pvVar1;
    }
    _strncpy((char *)*param_3,_Source,_Count);
    param_3[1] = _Count;
    *(undefined1 *)(_Count + *param_3) = 0;
    (**(code **)(param_3[8] + 4))();
    param_3[0xd] = param_1[0xd];
    (**(code **)param_3[8])();
    FUN_004b9560(param_3 + 0xe,param_1 + 0xe);
    param_3[0x12] = param_1[0x12];
    param_1 = param_1 + 0x13;
    param_3 = param_3 + 0x13;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004b70e0 @ 004b70e0 ////

void __cdecl FUN_004b70e0(void *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ca73d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_004b9a90(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x4c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004b7170 @ 004b7170 ////

int * __cdecl FUN_004b7170(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x48);
    _Source = *(char **)(param_2 + -0x4c);
    iVar3 = param_2 + -0x4c;
    piVar2 = param_3 + -0x13;
    if ((uint)param_3[-0x11] <= _Count) {
      if (0x14 < (uint)param_3[-0x11]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-0x11] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar2 = (int)pvVar1;
    }
    _strncpy((char *)*piVar2,_Source,_Count);
    param_3[-0x12] = _Count;
    *(undefined1 *)(_Count + *piVar2) = 0;
    (**(code **)(param_3[-0xb] + 4))();
    param_3[-6] = *(int *)(param_2 + -0x18);
    (**(code **)param_3[-0xb])();
    FUN_004b9560(param_3 + -5,(void *)(param_2 + -0x14));
    param_3[-1] = *(int *)(param_2 + -4);
    param_3 = piVar2;
    param_2 = iVar3;
  } while (iVar3 != param_1);
  return piVar2;
}


//// FUNCTION FUN_004b7270 @ 004b7270 ////

undefined4 * __thiscall FUN_004b7270(void *this,byte param_1)

{
  FUN_004b6c70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b7290 @ 004b7290 ////

uint __fastcall FUN_004b7290(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1e4) != 0) {
    if ((*(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e4)) / 0x18 != 0) {
      iVar2 = *(int *)(param_1 + 0x1e8);
      iVar3 = *(int *)(param_1 + 0x1e4);
      if (iVar3 != iVar2) {
        do {
          if (*(int *)(iVar3 + 0x14) != 0) {
            uVar1 = FUN_00960f30(*(int *)(iVar3 + 0x14));
            if ((char)uVar1 == '\0') {
              return uVar1 & 0xffffff00;
            }
          }
          iVar2 = *(int *)(param_1 + 0x1e8);
          iVar3 = iVar3 + 0x18;
        } while (iVar3 != iVar2);
      }
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 1;
}


//// FUNCTION FUN_004b7310 @ 004b7310 ////

undefined4 __fastcall FUN_004b7310(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_004b7290(param_1);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_004b49d0(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_004b7340 @ 004b7340 ////

uint __thiscall FUN_004b7340(void *this,undefined4 *param_1)

{
  undefined4 *in_EAX;
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x178);
  if (puVar2 != *(undefined4 **)((int)this + 0x17c)) {
    do {
      puVar1 = FUN_00ace080((uint *)*puVar2,(char *)*param_1);
      if (puVar1 != (uint *)0x0) {
        return CONCAT31((int3)((uint)puVar1 >> 8),1);
      }
      in_EAX = *(undefined4 **)((int)this + 0x17c);
      puVar2 = puVar2 + 8;
    } while (puVar2 != in_EAX);
  }
  return (uint)in_EAX & 0xffffff00;
}


//// FUNCTION FUN_004b7390 @ 004b7390 ////

uint __thiscall FUN_004b7390(void *this,undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x178);
  if (puVar2 != *(undefined4 **)((int)this + 0x17c)) {
    do {
      uVar1 = FUN_00494570(puVar2,param_1);
      if ((char)uVar1 != '\0') {
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      in_EAX = *(undefined4 **)((int)this + 0x17c);
      puVar2 = puVar2 + 8;
    } while (puVar2 != in_EAX);
  }
  return (uint)in_EAX & 0xffffff00;
}


//// FUNCTION FUN_004b73e0 @ 004b73e0 ////

undefined4 __thiscall FUN_004b73e0(void *this,void *param_1)

{
  bool bVar1;
  bool bVar2;
  uint in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  bVar2 = false;
  bVar1 = false;
  if (param_1 != (void *)0x0) {
    puVar3 = FUN_004b63b0(param_1,local_20);
    puVar4 = FUN_004b63b0(this,local_40);
    bVar2 = true;
    bVar1 = true;
    in_EAX = FUN_00401ec0(puVar4,puVar3);
    param_1._0_1_ = 1;
    if ((char)in_EAX != '\0') goto LAB_004b742b;
  }
  param_1._0_1_ = 0;
LAB_004b742b:
  if (bVar1) {
    in_EAX = local_38;
    if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
  }
  if ((bVar2) && (0x14 < local_18)) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return CONCAT31((int3)(in_EAX >> 8),param_1._0_1_);
}


//// FUNCTION FUN_004b74b0 @ 004b74b0 ////

undefined4 * __cdecl FUN_004b74b0(undefined4 *param_1,undefined4 *param_2)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  char local_84 [20];
  char *local_70;
  uint local_6c;
  uint local_68;
  char local_64 [20];
  void *local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7428;
  pvStack_c = ExceptionList;
  local_70 = local_64;
  local_64[0] = '\0';
  local_6c = 0;
  local_68 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_70,"",0);
  local_6c = 0;
  *local_70 = '\0';
  local_4 = 0;
  this = operator_new(0xd8);
  local_50 = this;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0040d6b0(local_4c,"scene/",param_2);
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar1 = FUN_0055c540(this,puVar1);
  }
  local_4 = 0;
  if ((this != (void *)0x0) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  local_90 = local_84;
  local_84[0] = '\0';
  local_8c = 0;
  local_88 = 0x14;
  _strncpy(local_90,"",0);
  local_8c = 0;
  *local_90 = '\0';
  local_4._0_1_ = 4;
  uVar2 = FUN_00558a50(puVar1,&local_90,(undefined4 *)0x0);
  local_4._0_1_ = 0;
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if ((char)uVar2 != '\0') {
    local_90 = local_84;
    local_84[0] = '\0';
    local_8c = 0;
    local_88 = 0x14;
    _strncpy(local_90,"sisname",7);
    local_8c = 7;
    local_90[7] = '\0';
    local_4._0_1_ = 5;
    puVar3 = FUN_005584e0(puVar1,local_2c,&local_90);
    FUN_004015d0(&local_70,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4._0_1_ = 0;
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
  }
  local_4._0_1_ = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_70,local_6c);
  if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_004b76e0 @ 004b76e0 ////

uint __thiscall FUN_004b76e0(void *this,char *param_1,uint param_2,uint param_3)

{
  uint _Count;
  char *_Source;
  undefined4 *puVar1;
  uint *_Dest;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_38;
  undefined1 local_34 [20];
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  local_20 = local_14;
  local_14[0] = '\0';
  local_1c = 0;
  local_18 = 0x14;
  FUN_004015d0(&local_20,param_1,param_2);
  puVar1 = (undefined4 *)FUN_0048ad50((int *)&local_20);
  puVar5 = *(undefined4 **)((int)this + 0x188);
  if (puVar5 != *(undefined4 **)((int)this + 0x18c)) {
    do {
      _Count = puVar5[1];
      _Dest = (uint *)local_34;
      local_38 = 0x14;
      _Source = (char *)*puVar5;
      local_34[0] = 0;
      if (0x13 < _Count) {
        local_38 = _Count + 0x20 & 0xffffffe0;
        _Dest = _malloc(local_38);
      }
      _strncpy((char *)_Dest,_Source,_Count);
      *(undefined1 *)(_Count + (int)_Dest) = 0;
      uVar4 = 0;
      if (_Count != 0) {
        do {
          iVar2 = _tolower((int)*(char *)(uVar4 + (int)_Dest));
          *(char *)(uVar4 + (int)_Dest) = (char)iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < _Count);
      }
      puVar3 = FUN_00ace080(_Dest,local_20);
      if (puVar3 != (uint *)0x0) {
        if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
          _free(_Dest);
        }
        if (local_18 < 0x15) {
          if (param_3 < 0x15) {
            return CONCAT31((int3)(local_38 >> 8),1);
          }
                    /* WARNING: Subroutine does not return */
          _free(param_1);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
      puVar1 = *(undefined4 **)((int)this + 0x18c);
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar1);
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (param_3 < 0x15) {
    return (uint)puVar1 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_004b7880 @ 004b7880 ////

undefined4 * __thiscall FUN_004b7880(void *this,undefined4 *param_1)

{
  FUN_004b6980(param_1,*(float *)((int)this + 0x248));
  return param_1;
}


//// FUNCTION FUN_004b7920 @ 004b7920 ////

undefined4 * FUN_004b7920(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004b7950 @ 004b7950 ////

void __fastcall FUN_004b7950(int param_1)

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


//// FUNCTION FUN_004b7980 @ 004b7980 ////

undefined4 * FUN_004b7980(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004b79b0 @ 004b79b0 ////

void __fastcall FUN_004b79b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b6d90();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004b79f0 @ 004b79f0 ////

undefined4 * __thiscall
FUN_004b79f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_004b7a70 @ 004b7a70 ////

void FUN_004b7a70(int param_1,int param_2,int param_3)

{
  FUN_004b6150(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_004b7b10 @ 004b7b10 ////

void __cdecl FUN_004b7b10(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    _Count = param_3[1];
    _Source = (char *)*param_3;
    if ((uint)param_1[2] <= _Count) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar1 = _malloc(_Size);
      *param_1 = (int)pvVar1;
    }
    _strncpy((char *)*param_1,_Source,_Count);
    param_1[1] = _Count;
    *(undefined1 *)(_Count + *param_1) = 0;
    (**(code **)(param_1[8] + 4))();
    param_1[0xd] = param_3[0xd];
    (**(code **)param_1[8])();
    FUN_004b9560(param_1 + 0xe,param_3 + 0xe);
    param_1[0x12] = param_3[0x12];
    param_1 = param_1 + 0x13;
  } while( true );
}


//// FUNCTION FUN_004b7c10 @ 004b7c10 ////

undefined4 * __thiscall FUN_004b7c10(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_004b5ca0(&DAT_0104aa18,(undefined4 *)((int)this + 0xf0));
  puVar1 = DAT_0104aa1c;
  if (local_8 != DAT_0104aa1c) {
    uVar2 = FUN_00441060((undefined4 *)((int)this + 0xf0),local_8 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &local_8;
      goto LAB_004b7c55;
    }
  }
  local_4 = puVar1;
  ppuVar3 = &local_4;
LAB_004b7c55:
  if (*ppuVar3 != puVar1) {
    *param_1 = (*ppuVar3)[0xb];
    return param_1;
  }
  FUN_0043b520(param_1,0.0);
  return param_1;
}


//// FUNCTION FUN_004b7c90 @ 004b7c90 ////

float10 __thiscall FUN_004b7c90(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_1c;
  undefined4 local_c;
  undefined8 local_8;
  
  iVar4 = FUN_005b2220(param_2);
  if (*(int *)(iVar4 + 100) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)(iVar4 + 0x68) - *(int *)(iVar4 + 100)) / 0x18;
  }
  fVar1 = (float)iVar4;
  if (iVar4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)*(int *)((int)param_1 + 0x1f0);
  if (*(int *)((int)param_1 + 0x1f0) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar6 = 0;
  for (iVar4 = *(int *)((int)param_1 + 0x1a8); iVar4 != (int)param_1 + 0x1b4;
      iVar4 = *(int *)(iVar4 + 4)) {
    iVar6 = iVar6 + 1;
  }
  fVar3 = (float)iVar6;
  if (iVar6 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_1c = 0.0;
  if (*(int *)(param_2 + 0x114) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x118) - *(int *)(param_2 + 0x114) >> 2;
  }
  piVar7 = *(int **)((int)param_1 + 100);
  if (piVar7 != *(int **)((int)param_1 + 0x68)) {
    do {
      iVar6 = FUN_00449b50(*piVar7);
      if (iVar6 + -1 < iVar4) {
        local_1c = local_1c + *(float *)(*(int *)(param_2 + 0x114) + (iVar6 + -1) * 4);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != *(int **)((int)param_1 + 0x68));
  }
  local_8 = 0x3feddb6800000000;
  FUN_0043b710((float *)&DAT_00e4fa4c);
  pfVar5 = (float *)FUN_004b7c10(param_1,&local_c);
  FUN_0043b710(pfVar5);
  fVar8 = (float10)FUN_00ace9b0();
  if (fVar2 <= fVar1) {
    fVar9 = (float10)1.0;
  }
  else {
    fVar9 = (float10)1.0 / (((float10)fVar2 - (float10)fVar1) + (float10)1.0);
  }
  if (fVar1 <= fVar3) {
    fVar10 = (float10)1.0;
  }
  else {
    fVar10 = (float10)1.0 / (((float10)fVar1 - (float10)fVar3) + (float10)1.0);
  }
  return (fVar10 * fVar9 + ((float10)1.0 - fVar8) + (float10)local_1c) * (float10)0.33333334;
}


//// FUNCTION FUN_004b7e40 @ 004b7e40 ////

void __fastcall FUN_004b7e40(int param_1)

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


//// FUNCTION FUN_004b7e70 @ 004b7e70 ////

int __fastcall FUN_004b7e70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b6d90();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004b7ea0 @ 004b7ea0 ////

void FUN_004b7ea0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x13) {
    FUN_004b8150(param_1);
  }
  return;
}


//// FUNCTION FUN_004b7ed0 @ 004b7ed0 ////

void __fastcall FUN_004b7ed0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x13) {
    FUN_004b8150(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004b7f20 @ 004b7f20 ////

void * FUN_004b7f20(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_004b70e0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x4c + (int)param_1);
}


//// FUNCTION FUN_004b7f50 @ 004b7f50 ////

void * FUN_004b7f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_004b79f0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_004b7fb0 @ 004b7fb0 ////

void __cdecl FUN_004b7fb0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d1e3e4;
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


//// FUNCTION FUN_004b8020 @ 004b8020 ////

void __fastcall FUN_004b8020(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x13) {
    FUN_004b8150(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004b8040 @ 004b8040 ////

void FUN_004b8040(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_004b8040(*(void **)((int)param_1 + 8));
    FUN_004b6080((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004b8080 @ 004b8080 ////

void __cdecl FUN_004b8080(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d1e3e4;
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


//// FUNCTION FUN_004b8150 @ 004b8150 ////

void __fastcall FUN_004b8150(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca7453;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004b7ed0((int)(param_1 + 0xe));
  param_1[8] = &PTR_FUN_00d1e3d4;
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
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004b81f0 @ 004b81f0 ////

void __fastcall FUN_004b81f0(int param_1)

{
  FUN_004b8040(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004b82a0 @ 004b82a0 ////

undefined4 * __thiscall FUN_004b82a0(void *this,byte param_1)

{
  FUN_004b8150(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b82c0 @ 004b82c0 ////

void __fastcall FUN_004b82c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1e40c;
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


//// FUNCTION FUN_004b8310 @ 004b8310 ////

void __fastcall FUN_004b8310(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1e418;
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


//// FUNCTION FUN_004b8360 @ 004b8360 ////

undefined4 * __thiscall FUN_004b8360(void *this,byte param_1)

{
  FUN_004b82c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b8380 @ 004b8380 ////

undefined4 * __thiscall FUN_004b8380(void *this,byte param_1)

{
  FUN_004b8310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004b83a0 @ 004b83a0 ////

void FUN_004b83a0(void)

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
  puStack_8 = &LAB_00ca7468;
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


//// FUNCTION FUN_004b8410 @ 004b8410 ////

undefined4 * FUN_004b8410(undefined4 *param_1,int param_2,int param_3)

{
  FUN_004b8080(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_004b8440 @ 004b8440 ////

void __thiscall
FUN_004b8440(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca7488;
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
  piVar3 = FUN_004b7f50(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_004b853b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004b5ea0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_004b5030(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_004b853b;
      if (piVar6 == (int *)*piVar2) {
        FUN_004b5030(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_004b5ea0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_004b85f0 @ 004b85f0 ////

void FUN_004b85f0(void)

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
  puStack_8 = &LAB_00ca74a8;
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


//// FUNCTION FUN_004b8660 @ 004b8660 ////

void FUN_004b8660(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_004b6c70(param_1);
  }
  return;
}


//// FUNCTION FUN_004b8690 @ 004b8690 ////

void FUN_004b8690(void)

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
  puStack_8 = &LAB_00ca74c8;
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


//// FUNCTION FUN_004b8700 @ 004b8700 ////

void __thiscall FUN_004b8700(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca74e8;
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
  FUN_004b5290((int *)&param_2);
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
      goto LAB_004b8871;
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
      piVar2 = (int *)FUN_004b51f0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_004b51d0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_004b8871:
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
            FUN_004b5ea0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_004b5030(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_004b5ea0(this,(int)piVar5);
              break;
            }
LAB_004b8934:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_004b5030(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_004b8934;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_004b5ea0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_004b5030(this,piVar5);
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


//// FUNCTION FUN_004b89d0 @ 004b89d0 ////

void FUN_004b89d0(void)

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
  puStack_8 = &LAB_00ca7508;
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


//// FUNCTION FUN_004b8a40 @ 004b8a40 ////

void __thiscall FUN_004b8a40(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca7520;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x35e50d7 < param_1) {
    ExceptionList = &local_10;
    FUN_004b83a0();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x4c;
  }
  if (uVar1 < param_1) {
    pvVar2 = operator_new(param_1 * 0x4c);
    local_8 = 0;
    FUN_004b61e0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),pvVar2);
    local_8 = 0xffffffff;
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      FUN_004b7ea0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(void **)((int)this + 0xc) = (void *)(param_1 * 0x4c + (int)pvVar2);
    *(void **)((int)this + 8) = pvVar2;
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004b8b40 @ 004b8b40 ////

undefined4 __thiscall FUN_004b8b40(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x35e50d7 < param_1) {
    FUN_004b83a0();
  }
  pvVar1 = operator_new(param_1 * 0x4c);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x4c + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_004b8c30 @ 004b8c30 ////

void __fastcall FUN_004b8c30(int param_1)

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
    FUN_004b6c70(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004b8c80 @ 004b8c80 ////

void __thiscall FUN_004b8c80(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_004b8ce4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_004b8ce9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004b8ce4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004b8ce9:
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
      puVar5 = (undefined4 *)FUN_004b8440(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_004b5230((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_004b8440(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_004b8da0 @ 004b8da0 ////

void __thiscall FUN_004b8da0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004b8040((void *)piVar6[1]);
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
    FUN_004b8700(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004b8e60 @ 004b8e60 ////

void __thiscall FUN_004b8e60(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_004b89d0();
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
      _Dst = FUN_004b7920((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_004b6ed0(param_1,iVar5,param_1 + param_2);
      FUN_004b7920(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_004b5330(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_004b6ed0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_004b5fa0(param_1,(int)pvVar3,iVar5);
    FUN_004b5330(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_004b9040 @ 004b9040 ////

void __thiscall FUN_004b9040(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_004b85f0();
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
      _Dst = FUN_004b7980((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_004b6f00(param_1,iVar5,param_1 + param_2);
      FUN_004b7980(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_004b5370(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_004b6f00(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_004b5fe0(param_1,(int)pvVar3,iVar5);
    FUN_004b5370(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_004b9220 @ 004b9220 ////

void __thiscall FUN_004b9220(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ca7538;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d1e3e4;
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
      FUN_004b8690();
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
        iVar3 = FUN_004b4d90((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_004b7fb0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_004b8080(puVar5,param_2,(int)&local_34);
      FUN_004b7fb0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_004b8660(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_004b7fb0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004b8410(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_004b6010(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_004b7fb0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_004b5500((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_004b6010(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_004b9560 @ 004b9560 ////

void * __thiscall FUN_004b9560(void *this,void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (this == param_1) {
    return this;
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    iVar5 = (int)*(undefined4 **)((int)param_1 + 8) - *(int *)((int)param_1 + 4);
    iVar3 = iVar5 >> 0x1f;
    iVar5 = iVar5 / 0x4c + iVar3;
    uVar6 = iVar5 - iVar3;
    if (iVar5 != iVar3) {
      piVar2 = *(int **)((int)this + 4);
      if (piVar2 == (int *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(int *)((int)this + 8) - (int)piVar2) / 0x4c;
      }
      if (uVar6 <= uVar1) {
        piVar2 = FUN_004b6fa0(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                              piVar2);
        FUN_004b7ea0(piVar2,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             ((*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 0x4c) * 0x4c +
             *(int *)((int)this + 4);
        return this;
      }
      if (piVar2 == (int *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (*(int *)((int)this + 0xc) - (int)piVar2) / 0x4c;
      }
      if (uVar1 < uVar6) {
        if (piVar2 != (int *)0x0) {
          FUN_004b7ea0(piVar2,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        uVar6 = FUN_004b4cf0((int)param_1);
        uVar4 = FUN_004b8b40(this,uVar6);
        if ((char)uVar4 == '\0') {
          return this;
        }
        uVar4 = FUN_004b7a70(*(int *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                             *(int *)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar4;
        return this;
      }
      iVar3 = FUN_004b4cf0((int)this);
      puVar7 = *(undefined4 **)((int)param_1 + 4) + iVar3 * 0x13;
      FUN_004b6fa0(*(undefined4 **)((int)param_1 + 4),puVar7,piVar2);
      iVar3 = FUN_004b6150((int)puVar7,*(int *)((int)param_1 + 8),*(int *)((int)this + 8));
      *(int *)((int)this + 8) = iVar3;
      return this;
    }
  }
  FUN_004b7ed0((int)this);
  return this;
}


//// FUNCTION FUN_004b9700 @ 004b9700 ////

void __fastcall FUN_004b9700(int param_1)

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
    FUN_004b6c70(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004b9710 @ 004b9710 ////

undefined4 * __thiscall FUN_004b9710(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004b8440(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_004b8440(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_004b8440(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_004b5230((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_004b8440(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_004b8440(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_004b5290((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_004b9892;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_004b8440(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_004b8440(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_004b9892:
  puVar4 = (undefined4 *)FUN_004b8c80(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_004b9990 @ 004b9990 ////

void __thiscall FUN_004b9990(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_004b99d5;
    }
  }
  iVar1 = 0;
LAB_004b99d5:
  FUN_004b9220(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_004b9a00 @ 004b9a00 ////

undefined4 * __thiscall FUN_004b9a00(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca756e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d1e3d4;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x48) = 0;
  FUN_004b8a40((void *)((int)this + 0x38),10);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004b9a90 @ 004b9a90 ////

undefined4 * __thiscall FUN_004b9a90(void *this,undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca759e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  piVar1 = (int *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(int **)((int)this + 0x2c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1e3d4;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = 2;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  (**(code **)*piVar1)();
  FUN_004b9560((void *)((int)this + 0x38),param_1 + 0xe);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004b9b40 @ 004b9b40 ////

void __fastcall FUN_004b9b40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca768f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1e424;
  local_4 = 0x10;
  if ((undefined4 *)param_1[0x6a] != param_1 + 0x6d) {
    do {
      piVar1 = (int *)param_1[0x6a];
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
    } while ((undefined4 *)param_1[0x6a] != param_1 + 0x6d);
  }
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15] = param_1[0x14];
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1[0x14] + 4) = param_1[0x15];
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x8a] = &PTR_LAB_00d1e3c4;
  if ((undefined4 *)param_1[0x8c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8c] = param_1[0x8b];
  }
  if (param_1[0x8b] != 0) {
    *(undefined4 *)(param_1[0x8b] + 4) = param_1[0x8c];
  }
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  if ((undefined4 *)param_1[0x8c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8c] = param_1[0x8b];
  }
  if (param_1[0x8b] != 0) {
    *(undefined4 *)(param_1[0x8b] + 4) = param_1[0x8c];
  }
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  if (0x14 < (uint)param_1[0x84]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x82]);
  }
  FUN_004b8c30((int)(param_1 + 0x78));
  FUN_004b8310(param_1 + 0x68);
  if ((undefined4 *)param_1[0x62] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x62],(undefined4 *)param_1[99]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x62]);
  }
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  if ((undefined4 *)param_1[0x5e] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x5e],(undefined4 *)param_1[0x5f]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x5e]);
  }
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  if (10 < (uint)param_1[0x57]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x55]);
  }
  if (10 < (uint)param_1[0x4f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4d]);
  }
  if (0x14 < (uint)param_1[0x46]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x44]);
  }
  if (0x14 < (uint)param_1[0x3e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3c]);
  }
  if (0x14 < (uint)param_1[0x36]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x34]);
  }
  if (0x14 < (uint)param_1[0x2e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2c]);
  }
  if (0x14 < (uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x24]);
  }
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x19]);
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15] = param_1[0x14];
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1[0x14] + 4) = param_1[0x15];
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004b9e10 @ 004b9e10 ////

int * __thiscall FUN_004b9e10(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_34;
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
  puStack_8 = &LAB_00ca76a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_004b5ca0(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    uVar3 = FUN_00441060(puVar1,piVar2 + 3);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return piVar2 + 0xb;
    }
  }
  puVar4 = (undefined4 *)FUN_0043b510(&param_1);
  local_30 = local_24;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,(char *)*puVar1,puVar1[1]);
  local_10 = *puVar4;
  local_4 = 0;
  piVar2 = FUN_004b9710(this,&local_34,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_004b9f20 @ 004b9f20 ////

void __thiscall FUN_004b9f20(void *this,undefined4 *param_1)

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
  FUN_004b8e60(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_004b9fc0 @ 004b9fc0 ////

void __thiscall FUN_004b9fc0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_004b8080(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_004b9990(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004ba050 @ 004ba050 ////

void __thiscall FUN_004ba050(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_68 [19];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca76c8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff8c;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004b9a90(local_68,param_3);
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0x4c;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x4c;
    }
    if (0x35e50d7U - iVar2 < param_2) {
      FUN_004b83a0();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x4c;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x35e50d7 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x4c;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_004b4cf0((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0x4c);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = (void *)FUN_004b6150(*(int *)((int)this + 4),(int)param_1,(int)pvVar4);
      FUN_004b70e0(pvVar5,param_2,local_68);
      FUN_004b6150((int)param_1,*(int *)((int)this + 8),(int)((int)pvVar5 + param_2 * 0x4c));
      local_8 = 0;
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x4c;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004b7ea0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0x4c + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar3) * 0x4c + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      piVar1 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar1 - (int)param_1) / 0x4c) < param_2) {
        FUN_004b6150((int)param_1,(int)piVar1,(int)(param_1 + param_2 * 0x13));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004b7f20(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x4c,local_68);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x4c;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_004b7b10(param_1,(int *)(iVar3 + param_2 * -0x4c),local_68);
      }
      else {
        iVar3 = FUN_004b6150((int)(piVar1 + param_2 * -0x13),(int)piVar1,(int)piVar1);
        *(int *)((int)this + 8) = iVar3;
        FUN_004b7170((int)param_1,(int)(piVar1 + param_2 * -0x13),piVar1);
        FUN_004b7b10(param_1,param_1 + param_2 * 0x13,local_68);
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_004b8150(local_68);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004ba350 @ 004ba350 ////

void __cdecl FUN_004ba350(void *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca76f1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_004b9a90(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004ba400 @ 004ba400 ////

void __fastcall FUN_004ba400(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004b8da0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004ba430 @ 004ba430 ////

undefined4 * __thiscall FUN_004ba430(void *this,byte param_1)

{
  FUN_004b9b40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION SceneTemplate_LoadFromIni @ 004ba450 ////

void __fastcall SceneTemplate_LoadFromIni(void *param_1)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  void *pvVar13;
  void *pvVar14;
  byte *pbVar15;
  int *piVar16;
  byte *pbVar17;
  undefined4 ****ppppuVar18;
  float10 fVar19;
  uint _Size;
  byte *local_9c;
  undefined4 local_98;
  uint local_94;
  byte local_90 [20];
  void *local_7c;
  char *local_78;
  undefined4 *local_74;
  char *local_70;
  byte *local_6c [2];
  uint local_64;
  undefined ****local_4c;
  int local_48;
  int *local_44;
  undefined4 ***local_40 [2];
  int local_38;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Loads a "scene" template from scene/<name>.ini -- distinct from
                       ScriptDefinition (which is a shot-list+cast template). A scene represents a
                       filmable location/setting with: name/description/sisname, interaction text,
                       numsliders, tag/tagdesc, runtime (clamped, falls back to
                       "generated_scene_template.flm" if >6000), technology requirements list,
                       applicable date range (from/to year, clamped >=1900), applicable genre list
                       (via GenreKey_ToEnum), content ratings (rating/violence/realism, each clamped
                       0-1), quality level, a list of role entries (via FUN_0048e370/FUN_0048d920 --
                       a SceneRole-type object), metaprops, categories (falls back to
                       "uncategorised"), available camera rigs (checks for rig_crane/rig_dolly, sets
                       bitflags), and a stunt level. Good pairing with ScriptDefinition_LoadFromIni
                       for understanding the movie-making data model. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca788d;
  local_c = ExceptionList;
  local_74 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  local_7c = param_1;
  puVar6 = operator_new(0xd8);
  local_4 = 0;
  local_70 = (char *)puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_0040d6b0(local_2c,"scene/",(undefined4 *)((int)param_1 + 0xd0));
    local_4 = CONCAT31(local_4._1_3_,1);
    local_74 = (undefined4 *)0x1;
    puVar6 = FUN_0055c540(puVar6,puVar7);
  }
  if ((((uint)local_74 & 1) != 0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4c = (undefined ****)local_40;
  local_40[0] = (undefined4 ***)((uint)local_40[0] & 0xffffff00);
  local_48 = 0;
  local_44 = (int *)0x14;
  _strncpy((char *)local_4c,"",0);
  local_48 = 0;
  *(byte *)local_4c = 0;
  local_4 = 3;
  uVar8 = FUN_00558a50(puVar6,&local_4c,(undefined4 *)0x0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((char)uVar8 != '\0') {
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"name",4);
    local_98 = 4;
    local_9c[4] = 0;
    local_4 = 4;
    puVar7 = FUN_005584e0(puVar6,local_6c,&local_9c);
    FUN_004015d0((void *)((int)param_1 + 0x70),(char *)*puVar7,puVar7[1]);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"description",0xb);
    local_98 = 0xb;
    local_9c[0xb] = 0;
    local_4 = 5;
    puVar7 = FUN_005584e0(puVar6,local_6c,&local_9c);
    FUN_004015d0((void *)((int)param_1 + 0x90),(char *)*puVar7,puVar7[1]);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"sisname",7);
    local_98 = 7;
    local_9c[7] = 0;
    local_4 = 6;
    puVar7 = FUN_005584e0(puVar6,local_6c,&local_9c);
    FUN_004015d0((void *)((int)param_1 + 0xf0),(char *)*puVar7,puVar7[1]);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"interaction",0xb);
    local_98 = 0xb;
    local_9c[0xb] = 0;
    local_4 = 7;
    puVar7 = FUN_005584e0(puVar6,local_6c,&local_9c);
    pcVar11 = (char *)*puVar7;
    local_78 = pcVar11 + 1;
    pcVar9 = pcVar11;
    do {
      cVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar5 != '\0');
    FUN_004015d0((void *)((int)param_1 + 0xb0),pcVar11,(int)pcVar9 - (int)local_78);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"numsliders",10);
    local_98 = 10;
    local_9c[10] = 0;
    local_4 = 8;
    uVar8 = FUN_00558750(puVar6,&local_9c,0);
    *(undefined4 *)((int)param_1 + 0x130) = uVar8;
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    local_4c = (undefined ****)local_40;
    local_40[0] = (undefined4 ***)((uint)local_40[0] & 0xffffff00);
    local_48 = 0;
    local_44 = (int *)0x14;
    local_9c = local_90;
    local_4 = 9;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"tag",3);
    local_98 = 3;
    local_9c[3] = 0;
    local_4._0_1_ = 10;
    puVar7 = FUN_005584e0(puVar6,local_6c,&local_9c);
    FUN_004015d0(&local_4c,(char *)*puVar7,puVar7[1]);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4 = CONCAT31(local_4._1_3_,9);
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    bVar4 = FUN_00430950(&local_4c,"");
    if (bVar4) {
      puVar7 = FUN_009ad240(local_6c,(char *)local_4c,'\x01');
      FUN_004036d0((void *)((int)param_1 + 0x134),(wchar_t *)*puVar7,puVar7[1]);
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"tagdesc",7);
    local_98 = 7;
    local_9c[7] = 0;
    local_4._0_1_ = 0xb;
    puVar7 = FUN_005584e0(puVar6,local_6c,&local_9c);
    FUN_004015d0(&local_4c,(char *)*puVar7,puVar7[1]);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4 = CONCAT31(local_4._1_3_,9);
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    bVar4 = FUN_00430950(&local_4c,"");
    if (bVar4) {
      puVar7 = FUN_009ad240(local_6c,(char *)local_4c,'\x01');
      FUN_004036d0((void *)((int)param_1 + 0x154),(wchar_t *)*puVar7,puVar7[1]);
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
    }
    if (4 < *(uint *)((int)param_1 + 0xb4)) {
      puVar7 = FUN_00430770((void *)((int)param_1 + 0xb0),local_6c,0,
                            *(uint *)((int)param_1 + 0xb4) - 4);
      FUN_004015d0((void *)((int)param_1 + 0x110),(char *)*puVar7,puVar7[1]);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"runtime",7);
    local_98 = 7;
    local_9c[7] = 0;
    local_4 = CONCAT31(local_4._1_3_,0xc);
    uVar8 = FUN_00558750(puVar6,&local_9c,100);
    *(undefined4 *)((int)param_1 + 500) = uVar8;
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    if (6000 < *(uint *)((int)param_1 + 500)) {
      FUN_004015d0((void *)((int)param_1 + 0xb0),"generated_scene_template.flm",0x1c);
    }
    if (*(int *)((int)param_1 + 500) == 0) {
      *(undefined4 *)((int)param_1 + 500) = 1;
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  local_9c = local_90;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"technology",10);
  local_98 = 10;
  local_9c[10] = 0;
  local_4 = 0xd;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if ((char)uVar8 != '\0') {
    puVar7 = FUN_00558de0(puVar6,local_6c);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (puVar7[1] != 0) {
      do {
        puVar7 = FUN_00558590(puVar6,local_6c,4);
        local_4 = 0xe;
        iVar10 = FUN_009601d0(puVar7);
        local_4 = 0xffffffff;
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        if (iVar10 != 0) {
          local_44 = (int *)(iVar10 + 0x18);
          local_40[0] = &local_4c;
          local_4c = (undefined ****)&PTR_LAB_00d1e3e4;
          local_48 = *local_44;
          *(int **)(*local_44 + 4) = &local_48;
          *local_44 = (int)&local_48;
          local_4 = 0xf;
          local_38 = iVar10;
          FUN_004b9fc0((void *)((int)local_7c + 0x1e0),(int)&local_4c);
          local_4c = (undefined ****)&PTR_LAB_00d1e3e4;
          if (local_44 != (int *)0x0) {
            *local_44 = local_48;
          }
          if (local_48 != 0) {
            *(int **)(local_48 + 4) = local_44;
          }
          local_38 = 0;
          local_48 = 0;
          local_44 = (int *)0x0;
        }
        local_4 = 0xffffffff;
        uVar8 = FUN_00558120(puVar6,2);
      } while ((char)uVar8 != '\0');
    }
  }
  local_9c = local_90;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"date",4);
  local_98 = 4;
  local_9c[4] = 0;
  local_4 = 0x10;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  pvVar14 = local_7c;
  if ((char)uVar8 != '\0') {
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"from",4);
    local_98 = 4;
    local_9c[4] = 0;
    local_4 = 0x11;
    fVar19 = FUN_00558610(puVar6,&local_9c,0.0);
    pvVar14 = local_7c;
    FUN_0043b700((void *)((int)local_7c + 0x1d8),(float)fVar19);
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"to",2);
    local_98 = 2;
    local_9c[2] = 0;
    local_4 = 0x12;
    fVar19 = FUN_00558610(puVar6,&local_9c,0.0);
    FUN_0043b700((void *)((int)pvVar14 + 0x1dc),(float)fVar19);
    local_4 = 0xffffffff;
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
  }
  local_4 = 0xffffffff;
  fVar19 = FUN_0043b710((float *)((int)pvVar14 + 0x1d8));
  if (fVar19 < (float10)1900.0) {
    FUN_0043b700((void *)((int)pvVar14 + 0x1d8),1900.0);
  }
  fVar19 = FUN_0043b710((float *)((int)pvVar14 + 0x1dc));
  if (fVar19 < (float10)1900.0) {
    FUN_0043b700((float *)((int)pvVar14 + 0x1dc),0.0);
  }
  local_9c = local_90;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"genre",5);
  local_98 = 5;
  local_9c[5] = 0;
  local_4 = 0x13;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if ((char)uVar8 != '\0') {
    puVar7 = FUN_00558de0(puVar6,local_6c);
    pvVar14 = local_7c;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (puVar7[1] != 0) {
      pvVar13 = (void *)((int)local_7c + 0x60);
      do {
        puVar7 = FUN_00558de0(puVar6,&local_4c);
        local_4 = 0x14;
        puVar7 = FUN_0040d6b0(local_6c,"genre_",puVar7);
        local_4 = CONCAT31(local_4._1_3_,0x15);
        local_74 = (undefined4 *)GenreKey_ToEnum(puVar7);
        iVar10 = *(int *)((int)pvVar14 + 100);
        if ((iVar10 == 0) ||
           ((uint)(*(int *)((int)pvVar14 + 0x6c) - iVar10 >> 2) <=
            (uint)(*(int *)((int)pvVar14 + 0x68) - iVar10 >> 2))) {
          FUN_004b9040(pvVar13,*(undefined4 **)((int)pvVar14 + 0x68),1,&local_74);
        }
        else {
          puVar3 = *(uint **)((int)pvVar14 + 0x68);
          *puVar3 = (uint)local_74;
          *(uint **)((int)pvVar14 + 0x68) = puVar3 + 1;
        }
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        local_4 = 0xffffffff;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        uVar8 = FUN_00558120(puVar6,2);
      } while ((char)uVar8 != '\0');
    }
  }
  local_9c = local_90;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"rating",6);
  local_98 = 6;
  local_9c[6] = 0;
  local_4 = 0x16;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  pvVar14 = local_7c;
  if ((char)uVar8 != '\0') {
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,(char *)&PTR_LAB_00d1e498,3);
    local_98 = 3;
    local_9c[3] = 0;
    local_4 = 0x17;
    fVar19 = FUN_00558610(puVar6,&local_9c,0.0);
    pvVar14 = local_7c;
    if ((float10)0.0 <= fVar19) {
      if ((float10)1.0 < fVar19) {
        fVar19 = (float10)1.0;
      }
    }
    else {
      fVar19 = (float10)0.0;
    }
    local_78 = (char *)(float)fVar19;
    *(char **)((int)local_7c + 0x1fc) = local_78;
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"violence",8);
    local_98 = 8;
    local_9c[8] = 0;
    local_4 = 0x18;
    fVar19 = FUN_00558610(puVar6,&local_9c,0.0);
    if ((float10)0.0 <= fVar19) {
      if ((float10)1.0 < fVar19) {
        fVar19 = (float10)1.0;
      }
    }
    else {
      fVar19 = (float10)0.0;
    }
    local_78 = (char *)(float)fVar19;
    *(char **)((int)pvVar14 + 0x200) = local_78;
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"realism",7);
    local_98 = 7;
    local_9c[7] = 0;
    local_4 = 0x19;
    fVar19 = FUN_00558610(puVar6,&local_9c,0.0);
    if ((float10)0.0 <= fVar19) {
      if ((float10)1.0 < fVar19) {
        fVar19 = (float10)1.0;
      }
    }
    else {
      fVar19 = (float10)0.0;
    }
    local_78 = (char *)(float)fVar19;
    *(char **)((int)pvVar14 + 0x204) = local_78;
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
  }
  local_9c = local_90;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"level",5);
  local_98 = 5;
  local_9c[5] = 0;
  local_4 = 0x1a;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if ((char)uVar8 != '\0') {
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"quality",7);
    local_98 = 7;
    local_9c[7] = 0;
    local_4 = 0x1b;
    fVar19 = FUN_00558610(puVar6,&local_9c,0.5);
    if ((float10)0.0 <= fVar19) {
      if ((float10)1.0 < fVar19) {
        fVar19 = (float10)1.0;
      }
    }
    else {
      fVar19 = (float10)0.0;
    }
    local_78 = (char *)(float)fVar19;
    *(char **)((int)pvVar14 + 0x1f8) = local_78;
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
  }
  local_9c = local_90;
  local_74 = (undefined4 *)0x0;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"role",4);
  local_98 = 4;
  local_9c[4] = 0;
  local_4 = 0x1c;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if ((((char)uVar8 != '\0') && (cVar5 = FUN_00558bb0(puVar6,6), cVar5 != '\0')) &&
     (cVar5 = FUN_00558bb0(puVar6,0), cVar5 != '\0')) {
    piVar16 = (int *)((int)local_7c + 0x1b4);
    do {
      local_70 = operator_new(0xc4);
      local_4 = 0x1d;
      if (local_70 == (char *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_0048e370((undefined4 *)local_70);
      }
      local_4 = 0xffffffff;
      FUN_0048d920(puVar7,puVar6,local_74);
      piVar1 = puVar7 + 0x18;
      local_74 = (undefined4 *)((int)local_74 + 1);
      puVar7[0x19] = piVar16;
      *piVar1 = *piVar16;
      *(int **)(*piVar16 + 4) = piVar1;
      *piVar16 = (int)piVar1;
      cVar5 = FUN_0048c730((int)puVar7);
      if (cVar5 != '\0') {
        *(int *)((int)local_7c + 0x1f0) = *(int *)((int)local_7c + 0x1f0) + 1;
      }
      FUN_0048c730((int)puVar7);
      cVar5 = FUN_00558bb0(puVar6,2);
    } while (cVar5 != '\0');
  }
  local_9c = local_90;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"metaprops",9);
  local_98 = 9;
  local_9c[9] = 0;
  local_4 = 0x1e;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if ((char)uVar8 != '\0') {
    puVar7 = FUN_00558de0(puVar6,local_6c);
    pvVar14 = local_7c;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (puVar7[1] != 0) {
      pvVar13 = (void *)((int)local_7c + 0x174);
      do {
        local_78 = (char *)FUN_00558590(puVar6,local_6c,4);
        iVar10 = *(int *)((int)pvVar14 + 0x178);
        local_4 = 0x1f;
        if ((iVar10 == 0) ||
           ((uint)(*(int *)((int)pvVar14 + 0x180) - iVar10 >> 5) <=
            (uint)(*(int *)((int)pvVar14 + 0x17c) - iVar10 >> 5))) {
          FUN_00439fd0(pvVar13,*(int **)((int)pvVar14 + 0x17c),1,(undefined4 *)local_78);
        }
        else {
          piVar16 = *(int **)((int)pvVar14 + 0x17c);
          FUN_00439ea0(piVar16,1,(undefined4 *)local_78);
          *(int **)((int)pvVar14 + 0x17c) = piVar16 + 8;
        }
        local_4 = 0xffffffff;
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        uVar8 = FUN_00558120(puVar6,2);
      } while ((char)uVar8 != '\0');
    }
  }
  local_9c = local_90;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"categories",10);
  local_98 = 10;
  local_9c[10] = 0;
  local_4 = 0x20;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if ((char)uVar8 != '\0') {
    puVar7 = FUN_00558de0(puVar6,local_6c);
    pvVar14 = local_7c;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (puVar7[1] != 0) {
      pvVar13 = (void *)((int)local_7c + 0x184);
      do {
        local_78 = (char *)FUN_00558590(puVar6,local_6c,4);
        iVar10 = *(int *)((int)pvVar14 + 0x188);
        local_4 = 0x21;
        if ((iVar10 == 0) ||
           ((uint)(*(int *)((int)pvVar14 + 400) - iVar10 >> 5) <=
            (uint)(*(int *)((int)pvVar14 + 0x18c) - iVar10 >> 5))) {
          FUN_00439fd0(pvVar13,*(int **)((int)pvVar14 + 0x18c),1,(undefined4 *)local_78);
        }
        else {
          piVar16 = *(int **)((int)pvVar14 + 0x18c);
          FUN_00439ea0(piVar16,1,(undefined4 *)local_78);
          *(int **)((int)pvVar14 + 0x18c) = piVar16 + 8;
        }
        local_4 = 0xffffffff;
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        uVar8 = FUN_00558120(puVar6,2);
      } while ((char)uVar8 != '\0');
    }
  }
  pvVar14 = (void *)((int)local_7c + 0x184);
  if ((*(int *)((int)local_7c + 0x188) == 0) ||
     (*(int *)((int)local_7c + 0x18c) - *(int *)((int)local_7c + 0x188) >> 5 == 0)) {
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"uncategorised",0xd);
    local_98 = 0xd;
    local_9c[0xd] = 0;
    local_4 = 0x22;
    FUN_0043a2d0(pvVar14,&local_9c);
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
  }
  local_78 = (char *)((int)local_7c + 0x194);
  local_74 = &DAT_0104aa68;
  do {
    pcVar11 = &stack0xffffff3c;
    _Size = 0x14;
    uVar12 = local_74[1];
    local_70 = (char *)*local_74;
    if (0x13 < uVar12) {
      _Size = uVar12 + 0x20 & 0xffffffe0;
      pcVar11 = _malloc(_Size);
    }
    _strncpy(pcVar11,local_70,uVar12);
    pcVar11[uVar12] = '\0';
    uVar12 = FUN_004b76e0(local_7c,pcVar11,uVar12,_Size);
    pvVar14 = local_7c;
    *local_78 = (char)uVar12;
    local_74 = local_74 + 8;
    local_78 = local_78 + 1;
  } while ((int)local_74 < 0x104abe8);
  local_9c = local_90;
  *(uint *)((int)local_7c + 0x240) = *(uint *)((int)local_7c + 0x240) & 0xfffffffc;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"rigs",4);
  local_98 = 4;
  local_9c[4] = 0;
  local_4 = 0x23;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if ((char)uVar8 != '\0') {
    puVar7 = FUN_00558de0(puVar6,local_6c);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (puVar7[1] != 0) {
      do {
        FUN_00558590(puVar6,local_6c,4);
        local_9c = local_90;
        local_90[0] = 0;
        local_98 = 0;
        local_94 = 0x14;
        _strncpy((char *)local_9c,"rig_crane",9);
        local_98 = 9;
        local_9c[9] = 0;
        pbVar15 = local_6c[0];
        pbVar17 = local_9c;
        do {
          bVar2 = *pbVar15;
          bVar4 = bVar2 < *pbVar17;
          if (bVar2 != *pbVar17) {
LAB_004bb957:
            iVar10 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
            goto LAB_004bb95c;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar15[1];
          bVar4 = bVar2 < pbVar17[1];
          if (bVar2 != pbVar17[1]) goto LAB_004bb957;
          pbVar15 = pbVar15 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar2 != 0);
        iVar10 = 0;
LAB_004bb95c:
        if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
          _free(local_9c);
        }
        if (iVar10 == 0) {
          *(uint *)((int)local_7c + 0x240) = *(uint *)((int)local_7c + 0x240) | 1;
        }
        local_4c = (undefined ****)local_40;
        local_40[0] = (undefined4 ***)((uint)local_40[0] & 0xffffff00);
        local_48 = 0;
        local_44 = (int *)0x14;
        _strncpy((char *)local_4c,"rig_dolly",9);
        local_48 = 9;
        *(byte *)((int)local_4c + 9) = 0;
        pbVar15 = local_6c[0];
        ppppuVar18 = (undefined4 ****)local_4c;
        do {
          bVar2 = *pbVar15;
          bVar4 = bVar2 < *(byte *)ppppuVar18;
          if (bVar2 != *(byte *)ppppuVar18) {
LAB_004bb9f4:
            iVar10 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
            goto LAB_004bb9f9;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar15[1];
          bVar4 = bVar2 < *(byte *)((int)ppppuVar18 + 1);
          if (bVar2 != *(byte *)((int)ppppuVar18 + 1)) goto LAB_004bb9f4;
          pbVar15 = pbVar15 + 2;
          ppppuVar18 = (undefined4 ****)((int)ppppuVar18 + 2);
        } while (bVar2 != 0);
        iVar10 = 0;
LAB_004bb9f9:
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if (iVar10 == 0) {
          *(uint *)((int)local_7c + 0x240) = *(uint *)((int)local_7c + 0x240) | 2;
        }
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        uVar8 = FUN_00558120(puVar6,2);
        pvVar14 = local_7c;
      } while ((char)uVar8 != '\0');
    }
  }
  local_9c = local_90;
  local_90[0] = 0;
  local_98 = 0;
  local_94 = 0x14;
  _strncpy((char *)local_9c,"stunt",5);
  local_98 = 5;
  local_9c[5] = 0;
  local_4 = 0x24;
  uVar8 = FUN_00558a50(puVar6,&local_9c,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if ((char)uVar8 != '\0') {
    local_9c = local_90;
    local_90[0] = 0;
    local_98 = 0;
    local_94 = 0x14;
    _strncpy((char *)local_9c,"level",5);
    local_98 = 5;
    local_9c[5] = 0;
    local_4 = 0x25;
    fVar19 = FUN_00558610(puVar6,&local_9c,0.0);
    if ((float10)0.0 <= fVar19) {
      if ((float10)1.0 < fVar19) {
        fVar19 = (float10)1.0;
      }
    }
    else {
      fVar19 = (float10)0.0;
    }
    local_70 = (char *)(float)fVar19;
    *(char **)((int)pvVar14 + 0x248) = local_70;
    local_4 = 0xffffffff;
    if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c);
    }
  }
  local_4 = 0xffffffff;
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)*puVar6)();
  }
  *(undefined1 *)((int)pvVar14 + 0x244) = 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004bbbb0 @ 004bbbb0 ////

void __thiscall FUN_004bbbb0(void *this,void *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  puVar5 = *(undefined4 **)((int)this + 0x178);
  if (puVar5 != *(undefined4 **)((int)this + 0x17c)) {
    do {
      piVar7 = *(int **)((int)param_1 + 4);
      piVar2 = *(int **)((int)param_1 + 8);
      if (piVar7 != piVar2) {
        do {
          pbVar6 = (byte *)*piVar7;
          pbVar3 = (byte *)*puVar5;
          do {
            bVar1 = *pbVar3;
            bVar8 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_004bbc1a:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_004bbc1f;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar8 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_004bbc1a;
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_004bbc1f:
          if (iVar4 == 0) goto LAB_004bbc78;
          piVar7 = piVar7 + 8;
        } while (piVar7 != *(int **)((int)param_1 + 8));
      }
      iVar4 = *(int *)((int)param_1 + 4);
      if ((iVar4 == 0) ||
         ((uint)(*(int *)((int)param_1 + 0xc) - iVar4 >> 5) <= (uint)((int)piVar2 - iVar4 >> 5))) {
        FUN_00439fd0(param_1,piVar2,1,puVar5);
      }
      else {
        FUN_00439ea0(piVar2,1,puVar5);
        *(int **)((int)param_1 + 8) = piVar2 + 8;
      }
LAB_004bbc78:
      puVar5 = puVar5 + 8;
    } while (puVar5 != *(undefined4 **)((int)this + 0x17c));
  }
  return;
}


//// FUNCTION FUN_004bbcc0 @ 004bbcc0 ////

int __fastcall FUN_004bbcc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b6d90();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004bbcf0 @ 004bbcf0 ////

void __fastcall FUN_004bbcf0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1e40c;
  return;
}


//// FUNCTION FUN_004bbd50 @ 004bbd50 ////

void __fastcall FUN_004bbd50(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1e418;
  return;
}


//// FUNCTION FUN_004bbdb0 @ 004bbdb0 ////

void __thiscall FUN_004bbdb0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x4c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x4c;
      goto LAB_004bbdf5;
    }
  }
  iVar1 = 0;
LAB_004bbdf5:
  FUN_004ba050(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x4c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_004bbe20 @ 004bbe20 ////

undefined4 * __fastcall FUN_004bbe20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca79d5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  piVar1 = param_1 + 0x14;
  *param_1 = &PTR_FUN_00d1e424;
  param_1[0x16] = 0;
  *piVar1 = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1 + 0x1f;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x14;
  param_1[0x24] = param_1 + 0x27;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x14;
  param_1[0x2c] = param_1 + 0x2f;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x14;
  param_1[0x34] = param_1 + 0x37;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x14;
  param_1[0x3c] = param_1 + 0x3f;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x14;
  param_1[0x44] = param_1 + 0x47;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x14;
  param_1[0x4d] = param_1 + 0x50;
  *(undefined2 *)(param_1 + 0x50) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 10;
  param_1[0x55] = param_1 + 0x58;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 10;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x6b] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  puVar2 = param_1 + 0x6d;
  param_1[0x6f] = 0;
  *puVar2 = 0;
  param_1[0x6e] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x68] = &PTR_LAB_00d1e418;
  param_1[0x6a] = puVar2;
  *puVar2 = param_1 + 0x69;
  local_4._0_1_ = 0xf;
  local_4._1_3_ = 0;
  param_1[0x75] = 0;
  FUN_0043b510(param_1 + 0x76);
  FUN_0043b510(param_1 + 0x77);
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = param_1 + 0x85;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0x14;
  param_1[0x8d] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = param_1 + 0x8a;
  param_1[0x8a] = &PTR_LAB_00d1e3c4;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  local_4 = CONCAT31(local_4._1_3_,0x12);
  param_1[0x7d] = 1;
  param_1[0x7c] = 0;
  *(undefined1 *)((int)param_1 + 0x245) = 0;
  param_1[0x4c] = 0;
  param_1[0x16] = param_1;
  FUN_00acdb9e(0xe516c0);
  iVar3 = FUN_0097dda0();
  param_1[0x17] = iVar3;
  if (s___AV__InList_VCPart_TM___MV___00e516a0[0x1e] != '\0') {
    iVar3 = 0x50;
    pcVar5 = "GlobalLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe516c0);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s___AV__InList_VCPart_TM___MV___00e516a0[0x1e] = '\0';
  }
  param_1[0x15] = &DAT_0104aa48;
  *piVar1 = (int)DAT_0104aa48;
  *(int **)((int)DAT_0104aa48 + 4) = piVar1;
  DAT_0104aa48 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004bc0f0 @ 004bc0f0 ////

void __thiscall FUN_004bc0f0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca79e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)FUN_00528450(param_2);
  FUN_004015d0((void *)((int)this + 0x208),(char *)*puVar1,puVar1[1]);
  (**(code **)(*(int *)((int)this + 0x228) + 4))();
  *(int *)((int)this + 0x23c) = param_2;
  (*(code *)**(undefined4 **)((int)this + 0x228))();
  FUN_004015d0((undefined4 *)((int)this + 0xd0),(char *)*param_1,param_1[1]);
  puVar1 = FUN_0040d6b0(apvStack_2c,"scene/",(undefined4 *)((int)this + 0xd0));
  uStack_4 = 0;
  FUN_00552ab0(puVar1,&LAB_004bc0e0,(int)this);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004bc1b0 @ 004bc1b0 ////

void __thiscall FUN_004bc1b0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7a08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x228) + 4))();
  *(undefined4 *)((int)this + 0x23c) = 0;
  (*(code *)**(undefined4 **)((int)this + 0x228))();
  FUN_004015d0((void *)((int)this + 0x208),(char *)*param_2,param_2[1]);
  FUN_004015d0((undefined4 *)((int)this + 0xd0),(char *)*param_1,param_1[1]);
  puVar1 = FUN_0040d6b0(apvStack_2c,"scene/",(undefined4 *)((int)this + 0xd0));
  uStack_4 = 0;
  FUN_00552ab0(puVar1,&LAB_004bc0e0,(int)this);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004bc270 @ 004bc270 ////

undefined4 * __cdecl FUN_004bc270(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  char *_Source;
  void **ppvVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint _Size;
  void *pvVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  int in_stack_00000024;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca7a33;
  local_4 = 0;
  ppvVar2 = &pvStack_c;
  pvStack_c = ExceptionList;
  puVar6 = DAT_0104aa3c;
  do {
    ExceptionList = ppvVar2;
    if (puVar6 == &DAT_0104aa48) {
      puVar6 = operator_new(0x24c);
      local_4._0_1_ = 1;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_004bbe20(puVar6);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      puVar7 = (undefined4 *)FUN_00528450(in_stack_00000024);
      uVar9 = puVar7[1];
      _Source = (char *)*puVar7;
      if ((uint)puVar6[0x84] <= uVar9) {
        if (0x14 < (uint)puVar6[0x84]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[0x82]);
        }
        _Size = uVar9 + 0x20 & 0xffffffe0;
        puVar6[0x84] = _Size;
        pvVar8 = _malloc(_Size);
        puVar6[0x82] = pvVar8;
      }
      _strncpy((char *)puVar6[0x82],_Source,uVar9);
      puVar6[0x83] = uVar9;
      *(undefined1 *)(uVar9 + puVar6[0x82]) = 0;
      (**(code **)(puVar6[0x8a] + 4))();
      puVar6[0x8f] = in_stack_00000024;
      (**(code **)puVar6[0x8a])();
      if ((uint)puVar6[0x36] <= param_2) {
        if (0x14 < (uint)puVar6[0x36]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[0x34]);
        }
        uVar9 = param_2 + 0x20 & 0xffffffe0;
        puVar6[0x36] = uVar9;
        pvVar8 = _malloc(uVar9);
        puVar6[0x34] = pvVar8;
      }
      _strncpy((char *)puVar6[0x34],(char *)param_1,param_2);
      puVar6[0x35] = param_2;
      *(undefined1 *)(param_2 + puVar6[0x34]) = 0;
      SceneTemplate_LoadFromIni(puVar6);
      if (param_3 < 0x15) {
        ExceptionList = pvStack_c;
        return puVar6;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    puVar7 = (undefined4 *)puVar6[2];
    puVar3 = FUN_004b63f0(puVar7,local_2c);
    pbVar4 = (byte *)*puVar3;
    pbVar10 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_004bc2f0:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_004bc2f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_004bc2f0;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_004bc2f5:
    if ((iVar5 == 0) && (puVar7[0x8f] == 0)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (bVar11) {
      puVar7[0x12] = puVar7[0x12] + 1;
      (**(code **)(puVar7[0x8a] + 4))();
      puVar7[0x8f] = in_stack_00000024;
      (**(code **)puVar7[0x8a])();
      if (param_3 < 0x15) {
        ExceptionList = pvStack_c;
        return puVar7;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    puVar6 = (undefined4 *)puVar6[1];
    ppvVar2 = ExceptionList;
  } while( true );
}


//// FUNCTION FUN_004bc4e0 @ 004bc4e0 ////

undefined4 * __cdecl FUN_004bc4e0(undefined4 *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7a4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x24c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_004bbe20(puVar1);
  }
  local_4 = 0xffffffff;
  if (param_3 != '\0') {
    FUN_004bc0f0(puVar1,param_1,param_2);
    ExceptionList = local_c;
    return puVar1;
  }
  if (param_2 != 0) {
    puVar2 = (undefined4 *)FUN_00528450(param_2);
    FUN_004015d0(puVar1 + 0x82,(char *)*puVar2,puVar2[1]);
    (**(code **)(puVar1[0x8a] + 4))();
    puVar1[0x8f] = param_2;
    (**(code **)puVar1[0x8a])();
    FUN_004015d0(puVar1 + 0x34,(char *)*param_1,param_1[1]);
    SceneTemplate_LoadFromIni(puVar1);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_004bc5d0 @ 004bc5d0 ////

undefined4 * __cdecl FUN_004bc5d0(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7a6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x24c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_004bbe20(puVar1);
  }
  local_4 = 0xffffffff;
  if (param_3 != '\0') {
    FUN_004bc1b0(puVar1,param_1,param_2);
    ExceptionList = local_c;
    return puVar1;
  }
  FUN_004015d0(puVar1 + 0x82,(char *)*param_2,param_2[1]);
  (**(code **)(puVar1[0x8a] + 4))();
  puVar1[0x8f] = 0;
  (**(code **)puVar1[0x8a])();
  FUN_004015d0(puVar1 + 0x34,(char *)*param_1,param_1[1]);
  SceneTemplate_LoadFromIni(puVar1);
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_004bc6b0 @ 004bc6b0 ////

undefined4 __fastcall FUN_004bc6b0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7a8b;
  local_c = ExceptionList;
  uVar5 = *(uint *)(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (DAT_00e515ac <= uVar5 - uVar1) {
    uVar5 = uVar1 + DAT_00e515ac;
  }
  if (uVar1 < uVar5) {
    local_14 = uVar5 - uVar1;
    ExceptionList = &local_c;
    do {
      local_10 = operator_new(0x24c);
      local_4 = 0;
      if (local_10 == (undefined4 *)0x0) {
        local_10 = (undefined4 *)0x0;
      }
      else {
        local_10 = FUN_004bbe20(local_10);
      }
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = *(int *)(iVar2 + 0x48c);
      local_4 = 0xffffffff;
      if ((iVar3 == 0) ||
         ((uint)(*(int *)(iVar2 + 0x494) - iVar3 >> 2) <=
          (uint)(*(int *)(iVar2 + 0x490) - iVar3 >> 2))) {
        FUN_004b8e60((void *)(iVar2 + 0x488),*(undefined4 **)(iVar2 + 0x490),1,&local_10);
      }
      else {
        puVar4 = *(undefined4 **)(iVar2 + 0x490);
        *puVar4 = local_10;
        *(undefined4 **)(iVar2 + 0x490) = puVar4 + 1;
      }
      local_14 = local_14 + -1;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    } while (local_14 != 0);
    uVar5 = 0;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION FUN_004bc7a0 @ 004bc7a0 ////

void __thiscall FUN_004bc7a0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x4c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x4c))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_004b70e0(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x4c;
    return;
  }
  FUN_004bbdb0(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004bc830 @ 004bc830 ////

undefined4 * __cdecl FUN_004bc830(byte *param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined4 *this;
  void **ppvVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  bool bVar8;
  int in_stack_00000024;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca7ab3;
  local_4 = 0;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  puVar6 = DAT_0104aa3c;
  do {
    ExceptionList = ppvVar2;
    if (puVar6 == &DAT_0104aa48) {
      puVar6 = operator_new(0x24c);
      local_4._0_1_ = 1;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_004bbe20(puVar6);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004bc0f0(puVar6,&param_1,in_stack_00000024);
      if (param_3 < 0x15) {
        ExceptionList = local_c;
        return puVar6;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    this = (undefined4 *)puVar6[2];
    puVar3 = FUN_004b63f0(this,local_2c);
    pbVar4 = (byte *)*puVar3;
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_004bc8b0:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_004bc8b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_004bc8b0;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_004bc8b5:
    if ((iVar5 == 0) && (this[0x8f] == 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (bVar8) {
      this[0x12] = this[0x12] + 1;
      (**(code **)(this[0x8a] + 4))();
      this[0x8f] = in_stack_00000024;
      (**(code **)this[0x8a])();
      if (param_3 < 0x15) {
        ExceptionList = local_c;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    puVar6 = (undefined4 *)puVar6[1];
    ppvVar2 = ExceptionList;
  } while( true );
}


//// FUNCTION FUN_004bc9c0 @ 004bc9c0 ////

undefined4 * __cdecl FUN_004bc9c0(void *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000024;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca7ad3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x24c);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_004bbe20(puVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004bc1b0(puVar1,&param_1,in_stack_00000024);
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_004bca50 @ 004bca50 ////

void __cdecl FUN_004bca50(int param_1,void *param_2)

{
  int *piVar1;
  byte bVar2;
  char *pcVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *this;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  byte *local_100;
  uint local_fc;
  uint local_f8;
  byte local_f4 [20];
  uint local_e0;
  undefined4 *local_dc;
  void *local_d8 [2];
  uint local_d0;
  void *local_b8 [2];
  uint local_b0;
  void *local_98 [2];
  uint local_90;
  void *local_78 [2];
  uint local_70;
  undefined4 local_58 [19];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca7afb;
  local_c = ExceptionList;
  local_100 = local_f4;
  uVar9 = 0;
  local_f4[0] = 0;
  local_fc = 0;
  local_f8 = 0x14;
  local_e0 = *(uint *)((int)param_2 + 4);
  local_4 = 0;
  this = (undefined4 *)&DAT_0104aa24;
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  if (local_e0 != 0) {
    do {
      uVar6 = FUN_00413450(param_2,"/",uVar9,1);
      if (uVar6 == 0xffffffff) {
        puVar5 = FUN_00430770(param_2,local_78,uVar9,0xffffffff);
        puVar5 = FUN_0040d6b0(local_d8,"cat_",puVar5);
        uVar9 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_f8 <= uVar9) {
          if (0x14 < local_f8) {
                    /* WARNING: Subroutine does not return */
            _free(local_100);
          }
          local_f8 = uVar9 + 0x20 & 0xffffffe0;
          local_100 = _malloc(local_f8);
        }
        _strncpy((char *)local_100,pcVar3,uVar9);
        local_100[uVar9] = 0;
        local_fc = uVar9;
        if (0x14 < local_d0) {
                    /* WARNING: Subroutine does not return */
          _free(local_d8[0]);
        }
        uVar9 = local_e0;
        if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
          _free(local_78[0]);
        }
      }
      else {
        puVar5 = FUN_00430770(param_2,local_98,uVar9,uVar6 - uVar9);
        puVar5 = FUN_0040d6b0(local_b8,"cat_",puVar5);
        uVar9 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_f8 <= uVar9) {
          if (0x14 < local_f8) {
                    /* WARNING: Subroutine does not return */
            _free(local_100);
          }
          local_f8 = uVar9 + 0x20 & 0xffffffe0;
          local_100 = _malloc(local_f8);
        }
        _strncpy((char *)local_100,pcVar3,uVar9);
        local_100[uVar9] = 0;
        local_fc = uVar9;
        if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
          _free(local_b8[0]);
        }
        if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
          _free(local_98[0]);
        }
        uVar9 = uVar6 + 1;
      }
      local_dc = (undefined4 *)this[2];
      for (puVar5 = (undefined4 *)this[1]; puVar5 != local_dc; puVar5 = puVar5 + 0x13) {
        pbVar7 = (byte *)*puVar5;
        pbVar10 = local_100;
        do {
          bVar2 = *pbVar7;
          bVar11 = bVar2 < *pbVar10;
          if (bVar2 != *pbVar10) {
LAB_004bccfa:
            iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_004bccff;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar11 = bVar2 < pbVar10[1];
          if (bVar2 != pbVar10[1]) goto LAB_004bccfa;
          pbVar7 = pbVar7 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar2 != 0);
        iVar8 = 0;
LAB_004bccff:
        if (iVar8 == 0) {
          puVar5[0x12] = puVar5[0x12] + 1;
          this = puVar5 + 0xe;
          goto LAB_004bcd4f;
        }
      }
      puVar5 = FUN_004b9a00(local_58,&local_100);
      local_4._0_1_ = 1;
      FUN_004bc7a0(this,puVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004b8150(local_58);
      *(int *)(this[2] + -4) = *(int *)(this[2] + -4) + 1;
      this = (undefined4 *)(this[2] + -0x14);
LAB_004bcd4f:
      if (this == (undefined4 *)0x0) goto joined_r0x004bcd6f;
      ppvVar4 = ExceptionList;
    } while (uVar9 < local_e0);
  }
  ExceptionList = ppvVar4;
  puVar5 = FUN_004b9a00(local_58,(undefined4 *)(param_1 + 0x70));
  local_4._0_1_ = 2;
  FUN_004bc7a0(this,puVar5);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004b8150(local_58);
  *(int *)(this[2] + -4) = *(int *)(this[2] + -4) + 1;
  iVar8 = this[2];
  piVar1 = (int *)(iVar8 + -0x2c);
  (**(code **)(*piVar1 + 4))();
  *(int *)(iVar8 + -0x18) = param_1;
  (**(code **)*piVar1)();
joined_r0x004bcd6f:
  if (local_f8 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_100);
}


//// FUNCTION FUN_004bcf20 @ 004bcf20 ////

void __fastcall FUN_004bcf20(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004bcf50 @ 004bcf50 ////

void FUN_004bcf50(void)

{
  return;
}


//// FUNCTION FUN_004bcf60 @ 004bcf60 ////

void __fastcall FUN_004bcf60(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004bcf90 @ 004bcf90 ////

void FUN_004bcf90(void)

{
  return;
}


//// FUNCTION FUN_004bcfa0 @ 004bcfa0 ////

void __fastcall FUN_004bcfa0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004bd010 @ 004bd010 ////

void __thiscall FUN_004bd010(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x124) = param_1;
  return;
}


//// FUNCTION FUN_004bd040 @ 004bd040 ////

void FUN_004bd040(void)

{
  return;
}


//// FUNCTION FUN_004bd050 @ 004bd050 ////

int __fastcall FUN_004bd050(int param_1)

{
  return param_1 + 0xec;
}


//// FUNCTION FUN_004bd060 @ 004bd060 ////

int __thiscall FUN_004bd060(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  
  pbVar2 = *(byte **)this;
  while( true ) {
    bVar1 = *pbVar2;
    bVar3 = bVar1 < *param_1;
    if (bVar1 != *param_1) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar3 = bVar1 < param_1[1];
    if (bVar1 != param_1[1]) break;
    pbVar2 = pbVar2 + 2;
    param_1 = param_1 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar3) - (uint)(bVar3 != 0);
}


//// FUNCTION FUN_004bd0b0 @ 004bd0b0 ////

int * __thiscall FUN_004bd0b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004bd0f0 @ 004bd0f0 ////

int __fastcall FUN_004bd0f0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_004bd4d0 @ 004bd4d0 ////

void __thiscall FUN_004bd4d0(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * *(float *)this;
  if (fVar1 < 0.0) {
    *(undefined4 *)this = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)this = 0x3f800000;
    return;
  }
  *(float *)this = fVar1;
  return;
}


//// FUNCTION FUN_004bd6f0 @ 004bd6f0 ////

void __thiscall FUN_004bd6f0(void *this,int *param_1)

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


//// FUNCTION FUN_004bd7b0 @ 004bd7b0 ////

void __cdecl FUN_004bd7b0(int param_1)

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


//// FUNCTION FUN_004bd7d0 @ 004bd7d0 ////

void __cdecl FUN_004bd7d0(int *param_1)

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


//// FUNCTION FUN_004bd800 @ 004bd800 ////

void __fastcall FUN_004bd800(int *param_1)

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


//// FUNCTION FUN_004bd860 @ 004bd860 ////

void __fastcall FUN_004bd860(int *param_1)

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


//// FUNCTION FUN_004bd8d0 @ 004bd8d0 ////

void __cdecl FUN_004bd8d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_004bdb90 @ 004bdb90 ////

void __thiscall FUN_004bdb90(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0xd4) + 4))();
  *(undefined4 *)((int)this + 0xe8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xd4))();
  return;
}


//// FUNCTION FUN_004bdbc0 @ 004bdbc0 ////

void __thiscall FUN_004bdbc0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x124);
  return;
}


//// FUNCTION FUN_004bdbd0 @ 004bdbd0 ////

void __thiscall FUN_004bdbd0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x128);
  return;
}


//// FUNCTION FUN_004bdbe0 @ 004bdbe0 ////

void __thiscall FUN_004bdbe0(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 0x124);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x124) = fVar1;
  if (*(float *)((int)this + 0x128) < *(float *)((int)this + 0x124)) {
    *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x128);
  }
  return;
}


//// FUNCTION FUN_004bdc40 @ 004bdc40 ////

undefined4 __fastcall FUN_004bdc40(int param_1)

{
  if (*(float *)(param_1 + 0x128) <= *(float *)(param_1 + 0x124)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_004bdcc0 @ 004bdcc0 ////

undefined4 __fastcall FUN_004bdcc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x120);
}


//// FUNCTION FUN_004bdcd0 @ 004bdcd0 ////

void __thiscall FUN_004bdcd0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x10c) + 4))();
  *(undefined4 *)((int)this + 0x120) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x10c))();
  return;
}


//// FUNCTION FUN_004bdd00 @ 004bdd00 ////

void __fastcall FUN_004bdd00(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004bdd60 @ 004bdd60 ////

void __fastcall FUN_004bdd60(int param_1)

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


//// FUNCTION FUN_004bdec0 @ 004bdec0 ////

void __fastcall FUN_004bdec0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004be150 @ 004be150 ////

undefined4 * __thiscall FUN_004be150(void *this,undefined4 *param_1)

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
LAB_004be194:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004be199;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004be194;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004be199:
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


//// FUNCTION FUN_004be200 @ 004be200 ////

void __thiscall FUN_004be200(void *this,int param_1)

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


//// FUNCTION FUN_004be260 @ 004be260 ////

int * __fastcall FUN_004be260(int *param_1)

{
  FUN_004bd860(param_1);
  return param_1;
}


//// FUNCTION FUN_004be270 @ 004be270 ////

int * __fastcall FUN_004be270(int *param_1)

{
  FUN_004bd800(param_1);
  return param_1;
}


//// FUNCTION FUN_004be2d0 @ 004be2d0 ////

void * __cdecl FUN_004be2d0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_004be310 @ 004be310 ////

void __cdecl FUN_004be310(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_004be340 @ 004be340 ////

void __fastcall FUN_004be340(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_004be3b0 @ 004be3b0 ////

undefined4 * __thiscall FUN_004be3b0(void *this,byte param_1)

{
  FUN_004bdd00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004be400 @ 004be400 ////

void __thiscall FUN_004be400(void *this,undefined4 *param_1)

{
  FUN_004036d0((void *)((int)this + 0x25c),(wchar_t *)*param_1,param_1[1]);
  return;
}


//// FUNCTION FUN_004be420 @ 004be420 ////

void __fastcall FUN_004be420(int *param_1)

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
  puStack_8 = &LAB_00ca7b38;
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


//// FUNCTION FUN_004be4f0 @ 004be4f0 ////

void __fastcall FUN_004be4f0(int *param_1)

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
  puStack_8 = &LAB_00ca7b58;
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


//// FUNCTION FUN_004be5c0 @ 004be5c0 ////

void __fastcall FUN_004be5c0(int param_1)

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
  puStack_8 = &LAB_00ca7b80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x3b;
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
  uVar3 = FUN_0098b490("(int&)(Gender)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x3c;
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
  uVar3 = FUN_0098b490("ID");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004be7c0 @ 004be7c0 ////

void __fastcall FUN_004be7c0(int *param_1)

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
  puStack_8 = &LAB_00ca7b98;
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


//// FUNCTION FUN_004be910 @ 004be910 ////

void __fastcall FUN_004be910(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d18c3c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004be930 @ 004be930 ////

void __fastcall FUN_004be930(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d1a49c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004be980 @ 004be980 ////

void __fastcall FUN_004be980(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d1e55c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004be9b0 @ 004be9b0 ////

void __fastcall FUN_004be9b0(int param_1)

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


//// FUNCTION FUN_004be9d0 @ 004be9d0 ////

void __fastcall FUN_004be9d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1e55c;
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


//// FUNCTION FUN_004bead0 @ 004bead0 ////

void __fastcall FUN_004bead0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1e56c;
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


//// FUNCTION FUN_004bebf0 @ 004bebf0 ////

undefined4 * __thiscall FUN_004bebf0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_004bec50 @ 004bec50 ////

int * __fastcall FUN_004bec50(int *param_1)

{
  FUN_004bd860(param_1);
  return param_1;
}


//// FUNCTION FUN_004bec60 @ 004bec60 ////

int * __fastcall FUN_004bec60(int *param_1)

{
  FUN_004bd800(param_1);
  return param_1;
}


//// FUNCTION FUN_004bec70 @ 004bec70 ////

undefined4 * __thiscall FUN_004bec70(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_004becb0 @ 004becb0 ////

void FUN_004becb0(void)

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


//// FUNCTION FUN_004bed20 @ 004bed20 ////

undefined4 * __thiscall FUN_004bed20(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_004bed80 @ 004bed80 ////

void * FUN_004bed80(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_004bede0 @ 004bede0 ////

void * __thiscall FUN_004bede0(void *this,byte param_1)

{
  FUN_004be340((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004bee00 @ 004bee00 ////

int * __cdecl FUN_004bee00(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  int iVar1;
  uint _Size;
  void *pvVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = param_1[1];
    _Source = (char *)*param_1;
    if ((uint)param_3[2] <= _Count) {
      if (0x14 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[2] = _Size;
      pvVar2 = _malloc(_Size);
      *param_3 = (int)pvVar2;
    }
    _strncpy((char *)*param_3,_Source,_Count);
    iVar1 = *param_3;
    param_3[1] = _Count;
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
    *(undefined1 *)(_Count + iVar1) = 0;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004bee80 @ 004bee80 ////

int * __cdecl FUN_004bee80(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = param_1[1];
    _Source = (char *)*param_1;
    if ((uint)param_3[2] <= _Count) {
      if (0x14 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[2] = _Size;
      pvVar1 = _malloc(_Size);
      *param_3 = (int)pvVar1;
    }
    _strncpy((char *)*param_3,_Source,_Count);
    param_3[1] = _Count;
    *(undefined1 *)(_Count + *param_3) = 0;
    param_3[8] = param_1[8];
    param_1 = param_1 + 9;
    param_3 = param_3 + 9;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004bef00 @ 004bef00 ////

int * __cdecl FUN_004bef00(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x20);
    _Source = *(char **)(param_2 + -0x24);
    iVar2 = param_2 + -0x24;
    piVar3 = param_3 + -9;
    if ((uint)param_3[-7] <= _Count) {
      if (0x14 < (uint)param_3[-7]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar3);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-7] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar3 = (int)pvVar1;
    }
    _strncpy((char *)*piVar3,_Source,_Count);
    param_3[-8] = _Count;
    *(undefined1 *)(_Count + *piVar3) = 0;
    param_3[-1] = *(int *)(param_2 + -4);
    param_2 = iVar2;
    param_3 = piVar3;
  } while (iVar2 != param_1);
  return piVar3;
}


//// FUNCTION FUN_004bef80 @ 004bef80 ////

int * __cdecl FUN_004bef80(undefined4 *param_1,undefined4 *param_2,int *param_3)

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


//// FUNCTION FUN_004bf010 @ 004bf010 ////

void __cdecl FUN_004bf010(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_004bf090 @ 004bf090 ////

void __fastcall FUN_004bf090(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x188) != param_1 + 0x194) {
    do {
      piVar1 = *(int **)(param_1 + 0x188);
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
    } while (*(int *)(param_1 + 0x188) != param_1 + 0x194);
  }
  return;
}


//// FUNCTION FUN_004bf100 @ 004bf100 ////

void __fastcall FUN_004bf100(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x1bc) != param_1 + 0x1c8) {
    do {
      piVar1 = *(int **)(param_1 + 0x1bc);
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
    } while (*(int *)(param_1 + 0x1bc) != param_1 + 0x1c8);
  }
  return;
}


//// FUNCTION FUN_004bf210 @ 004bf210 ////

void FUN_004bf210(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = DAT_0104ac84;
  if (DAT_0104ac50 != &DAT_0104ac5c) {
    do {
      piVar1 = DAT_0104ac50;
      puVar2 = (undefined4 *)DAT_0104ac50[2];
      piVar4 = DAT_0104ac50 + 1;
      if ((int *)DAT_0104ac50[1] != (int *)0x0) {
        *(int *)DAT_0104ac50[1] = *DAT_0104ac50;
      }
      iVar3 = *piVar1;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar4;
      }
      *piVar1 = 0;
      *piVar4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar4 = puVar2 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      piVar4 = DAT_0104ac84;
    } while (DAT_0104ac50 != &DAT_0104ac5c);
  }
  while (piVar4 != &DAT_0104ac90) {
    puVar2 = (undefined4 *)piVar4[2];
    DAT_0104ac84 = piVar4;
    if ((int *)piVar4[1] != (int *)0x0) {
      *(int *)piVar4[1] = *piVar4;
    }
    if (*piVar4 != 0) {
      *(int *)(*piVar4 + 4) = piVar4[1];
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4 = DAT_0104ac84;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      piVar4 = DAT_0104ac84;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
        piVar4 = DAT_0104ac84;
      }
    }
  }
  DAT_0104ac84 = piVar4;
  return;
}


//// FUNCTION FUN_004bf2c0 @ 004bf2c0 ////

void __fastcall FUN_004bf2c0(int param_1)

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


//// FUNCTION FUN_004bf2f0 @ 004bf2f0 ////

void __fastcall FUN_004bf2f0(int param_1)

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


//// FUNCTION FUN_004bf320 @ 004bf320 ////

undefined4 * FUN_004bf320(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004bf390 @ 004bf390 ////

void __fastcall FUN_004bf390(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004becb0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004bf3d0 @ 004bf3d0 ////

undefined4 * __thiscall
FUN_004bf3d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_004bf470 @ 004bf470 ////

void __cdecl FUN_004bf470(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    _Count = param_3[1];
    _Source = (char *)*param_3;
    if ((uint)param_1[2] <= _Count) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar1 = _malloc(_Size);
      *param_1 = (int)pvVar1;
    }
    _strncpy((char *)*param_1,_Source,_Count);
    param_1[1] = _Count;
    *(undefined1 *)(_Count + *param_1) = 0;
    param_1[8] = param_3[8];
    param_1 = param_1 + 9;
  } while( true );
}


//// FUNCTION FUN_004bf5b0 @ 004bf5b0 ////

int * __cdecl FUN_004bf5b0(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
      param_3[8] = param_1[8];
    }
    param_1 = param_1 + 9;
    param_3 = param_3 + 9;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004bf640 @ 004bf640 ////

int * __cdecl FUN_004bf640(undefined4 *param_1,undefined4 *param_2,int *param_3)

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
      param_3[8] = param_1[8];
    }
    param_1 = param_1 + 9;
    param_3 = param_3 + 9;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004bf6d0 @ 004bf6d0 ////

void __fastcall FUN_004bf6d0(int param_1)

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


//// FUNCTION FUN_004bf700 @ 004bf700 ////

void __fastcall FUN_004bf700(int param_1)

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


//// FUNCTION FUN_004bf730 @ 004bf730 ////

void __fastcall FUN_004bf730(int param_1)

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


//// FUNCTION FUN_004bf760 @ 004bf760 ////

int __fastcall FUN_004bf760(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004becb0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004bf790 @ 004bf790 ////

void * FUN_004bf790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_004bf3d0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_004bf850 @ 004bf850 ////

void __cdecl FUN_004bf850(int *param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (int *)0x0) {
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      _Count = param_3[1];
      _Source = (char *)*param_3;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_1[2] = _Size;
        pvVar1 = _malloc(_Size);
        *param_1 = (int)pvVar1;
      }
      _strncpy((char *)*param_1,_Source,_Count);
      param_1[1] = _Count;
      *(undefined1 *)(_Count + *param_1) = 0;
      param_1[8] = param_3[8];
    }
    param_1 = param_1 + 9;
  }
  return;
}


//// FUNCTION FUN_004bf940 @ 004bf940 ////

void FUN_004bf940(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_004bf940(*(void **)((int)param_1 + 8));
    FUN_004be340((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004bfa20 @ 004bfa20 ////

int * FUN_004bfa20(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_004bf850(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_004bfa50 @ 004bfa50 ////

void __thiscall FUN_004bfa50(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 != param_3) {
    piVar1 = FUN_004bee00(param_3,*(undefined4 **)((int)this + 8),param_2);
    FUN_00405fe0(piVar1,*(undefined4 **)((int)this + 8));
    *(int **)((int)this + 8) = piVar1;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_004bfaa0 @ 004bfaa0 ////

void FUN_004bfaa0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    FUN_004bdd00(param_1);
  }
  return;
}


//// FUNCTION FUN_004bfad0 @ 004bfad0 ////

void __fastcall FUN_004bfad0(int param_1)

{
  FUN_004bf940(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004bfb00 @ 004bfb00 ////

void __fastcall FUN_004bfb00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1e57c;
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


//// FUNCTION FUN_004bfb50 @ 004bfb50 ////

void __fastcall FUN_004bfb50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1e588;
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


//// FUNCTION FUN_004bfba0 @ 004bfba0 ////

void __fastcall FUN_004bfba0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1e594;
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


//// FUNCTION FUN_004bfbf0 @ 004bfbf0 ////

undefined4 * __thiscall FUN_004bfbf0(void *this,byte param_1)

{
  FUN_004bfb00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004bfc10 @ 004bfc10 ////

undefined4 * __thiscall FUN_004bfc10(void *this,byte param_1)

{
  FUN_004bfb50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004bfc30 @ 004bfc30 ////

undefined4 * __thiscall FUN_004bfc30(void *this,byte param_1)

{
  FUN_004bfba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004bfc50 @ 004bfc50 ////

void __fastcall FUN_004bfc50(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 9) {
    FUN_004bdd00(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004bfca0 @ 004bfca0 ////

void FUN_004bfca0(void)

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
  puStack_8 = &LAB_00ca7bb8;
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


//// FUNCTION FUN_004bfd10 @ 004bfd10 ////

void __thiscall FUN_004bfd10(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_004bee80(param_3,*(undefined4 **)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 9) {
      FUN_004bdd00(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_004bfd70 @ 004bfd70 ////

void FUN_004bfd70(void)

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
  puStack_8 = &LAB_00ca7bd8;
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


//// FUNCTION FUN_004bfde0 @ 004bfde0 ////

void __thiscall
FUN_004bfde0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca7bf8;
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
  piVar3 = FUN_004bf790(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_004bfedb:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004be200(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_004bd6f0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_004bfedb;
      if (piVar6 == (int *)*piVar2) {
        FUN_004bd6f0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_004be200(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_004bff90 @ 004bff90 ////

void __thiscall FUN_004bff90(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca7c18;
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
  FUN_004bd860((int *)&param_2);
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
      goto LAB_004c0101;
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
      piVar2 = (int *)FUN_004bd7d0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_004bd7b0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_004c0101:
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
            FUN_004be200(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_004bd6f0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_004be200(this,(int)piVar5);
              break;
            }
LAB_004c01c4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_004bd6f0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_004c01c4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_004be200(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_004bd6f0(this,piVar5);
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


//// FUNCTION FUN_004c0260 @ 004c0260 ////

void __fastcall FUN_004c0260(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ca7d07;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1e5c0;
  param_1[0x19] = &PTR_LAB_00d1e5a0;
  local_4 = 0xd;
  FUN_004bf090((int)param_1);
  FUN_004bf100((int)param_1);
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_004bfba0(param_1 + 0x6d);
  FUN_004bfb50(param_1 + 0x60);
  if ((undefined4 *)param_1[0x5a] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x5a],(undefined4 *)param_1[0x5b]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x5a]);
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  if ((undefined4 *)param_1[0x56] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x56],(undefined4 *)param_1[0x57]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x56]);
  }
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x52],(undefined4 *)param_1[0x53]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x52]);
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x4b] = &PTR_LAB_00d1e56c;
  if ((undefined4 *)param_1[0x4d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4d] = param_1[0x4c];
  }
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4d];
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  if ((undefined4 *)param_1[0x4d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4d] = param_1[0x4c];
  }
  if (param_1[0x4c] != 0) {
    *(undefined4 *)(param_1[0x4c] + 4) = param_1[0x4d];
  }
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x43] = &PTR_FUN_00d1a49c;
  if ((undefined4 *)param_1[0x45] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x45] = param_1[0x44];
  }
  if (param_1[0x44] != 0) {
    *(undefined4 *)(param_1[0x44] + 4) = param_1[0x45];
  }
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  if ((undefined4 *)param_1[0x45] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x45] = param_1[0x44];
  }
  if (param_1[0x44] != 0) {
    *(undefined4 *)(param_1[0x44] + 4) = param_1[0x45];
  }
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  if (0x14 < (uint)param_1[0x3d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3b]);
  }
  param_1[0x35] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x37] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x37] = param_1[0x36];
  }
  if (param_1[0x36] != 0) {
    *(undefined4 *)(param_1[0x36] + 4) = param_1[0x37];
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  if ((undefined4 *)param_1[0x37] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x37] = param_1[0x36];
  }
  if (param_1[0x36] != 0) {
    *(undefined4 *)(param_1[0x36] + 4) = param_1[0x37];
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if (10 < (uint)param_1[0x2f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2d]);
  }
  param_1[0x27] = &PTR_FUN_00d1e55c;
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x29] = param_1[0x28];
  }
  if (param_1[0x28] != 0) {
    *(undefined4 *)(param_1[0x28] + 4) = param_1[0x29];
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x29] = param_1[0x28];
  }
  if (param_1[0x28] != 0) {
    *(undefined4 *)(param_1[0x28] + 4) = param_1[0x29];
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004c05f0 @ 004c05f0 ////

void __fastcall FUN_004c05f0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 9) {
    FUN_004bdd00(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004c0660 @ 004c0660 ////

undefined4 __thiscall FUN_004c0660(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
    param_1 = FUN_004bfca0();
  }
  pvVar1 = operator_new(param_1 * 4);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 4 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_004c0700 @ 004c0700 ////

void __thiscall FUN_004c0700(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_004bfca0();
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
      _Dst = FUN_004bf320((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_004bed80(param_1,iVar5,param_1 + param_2);
      FUN_004bf320(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_004bd8d0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_004bed80(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_004be310(param_1,(int)pvVar3,iVar5);
    FUN_004bd8d0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_004c08e0 @ 004c08e0 ////

void __thiscall FUN_004c08e0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined1 *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [20];
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca7d28;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_40 = local_34;
  local_34[0] = 0;
  local_3c = 0;
  local_38 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_40,(char *)*param_3,param_3[1]);
  local_20 = param_3[8];
  iVar2 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x24;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x24;
    }
    if (0x71c71c7U - iVar1 < param_2) {
      FUN_004bfd70();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x24;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x71c71c7 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x24;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_004bd0f0((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_004bf640(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_004bf850(piVar4,param_2,&local_40);
      FUN_004bf640(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004bfaa0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar3 + uVar5 * 9;
      *(int **)((int)this + 8) = piVar3 + (param_2 + iVar2) * 9;
      *(int **)((int)this + 4) = piVar3;
    }
    else {
      piVar3 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar3 - (int)param_1) / 0x24) < param_2) {
        FUN_004bf640(param_1,piVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004bfa20(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x24,&local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_004bf470(param_1,(int *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        piVar4 = FUN_004bf640(piVar3 + param_2 * -9,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_004bef00((int)param_1,(int)(piVar3 + param_2 * -9),piVar3);
        FUN_004bf470(param_1,param_1 + param_2 * 9,&local_40);
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


//// FUNCTION FUN_004c0c00 @ 004c0c00 ////

void __thiscall FUN_004c0c00(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_004c0c64:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_004c0c69;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004c0c64;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004c0c69:
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
      puVar5 = (undefined4 *)FUN_004bfde0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_004bd800((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_004bfde0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_004c0d20 @ 004c0d20 ////

void __thiscall FUN_004c0d20(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004bf940((void *)piVar6[1]);
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
    FUN_004bff90(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004c0de0 @ 004c0de0 ////

undefined4 * __thiscall FUN_004c0de0(void *this,byte param_1)

{
  FUN_004c0260(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004c0e00 @ 004c0e00 ////

void __fastcall FUN_004c0e00(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca7d48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)param_1[0x41] = param_1[0x40];
  }
  if (param_1[0x40] != 0) {
    *(undefined4 *)(param_1[0x40] + 4) = param_1[0x41];
  }
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  if (0x14 < (uint)param_1[0x3a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x38]);
  }
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x35],(undefined4 *)param_1[0x36]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x35]);
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if (0x14 < (uint)param_1[0x2e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2c]);
  }
  FUN_004bfc50((int)(param_1 + 0x28));
  if ((void *)param_1[0x25] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x25]);
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x19],(undefined4 *)param_1[0x1a]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x19]);
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 0xe;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004c0f60 @ 004c0f60 ////

int __thiscall FUN_004c0f60(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca7d60;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x7ffffff < uVar1) {
      uVar1 = FUN_004061d0();
    }
    piVar2 = operator_new(uVar1 * 0x20);
    *(int **)((int)this + 4) = piVar2;
    *(int **)((int)this + 8) = piVar2;
    *(int **)((int)this + 0xc) = piVar2 + uVar1 * 8;
    local_8 = 0;
    piVar2 = FUN_004bef80(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),piVar2);
    *(int **)((int)this + 8) = piVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_004c1040 @ 004c1040 ////

int __thiscall FUN_004c1040(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca7d70;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x3fffffff < uVar1) {
      uVar1 = FUN_004bfca0();
    }
    puVar2 = operator_new(uVar1 * 4);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    local_8 = 0;
    uVar3 = FUN_004bf010(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_004c1110 @ 004c1110 ////

int __thiscall FUN_004c1110(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca7d80;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x71c71c7 < uVar1) {
      uVar1 = FUN_004bfd70();
    }
    piVar2 = operator_new(uVar1 * 0x24);
    *(int **)((int)this + 4) = piVar2;
    *(int **)((int)this + 8) = piVar2;
    *(int **)((int)this + 0xc) = piVar2 + uVar1 * 9;
    local_8 = 0;
    piVar2 = FUN_004bf5b0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),piVar2);
    *(int **)((int)this + 8) = piVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_004c11e0 @ 004c11e0 ////

void __thiscall FUN_004c11e0(void *this,uint param_1,void *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca7d98;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 5;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 5;
    }
    ExceptionList = &local_c;
    FUN_00439fd0(this,*(int **)((int)this + 8),param_1 - iVar2,&param_2);
  }
  else {
    ExceptionList = &local_c;
    if ((iVar2 != 0) &&
       (ExceptionList = &local_c, param_1 < (uint)((int)*(int **)((int)this + 8) - iVar2 >> 5))) {
      ExceptionList = &local_c;
      FUN_004bfa50(this,&param_1,(int *)(param_1 * 0x20 + iVar2),*(int **)((int)this + 8));
    }
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004c1290 @ 004c1290 ////

void __thiscall FUN_004c1290(void *this,uint param_1)

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
    FUN_004c0700(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
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


//// FUNCTION FUN_004c1370 @ 004c1370 ////

void __thiscall FUN_004c1370(void *this,uint param_1,void *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca7db8;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x24;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x24;
    }
    ExceptionList = &local_c;
    FUN_004c08e0(this,*(int **)((int)this + 8),param_1 - iVar2,&param_2);
  }
  else {
    ExceptionList = &local_c;
    if (iVar2 != 0) {
      ExceptionList = &local_c;
      if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x24)) {
        ExceptionList = &local_c;
        FUN_004bfd10(this,&param_1,(int *)(iVar2 + param_1 * 0x24),*(int **)((int)this + 8));
      }
    }
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004c1450 @ 004c1450 ////

void __thiscall FUN_004c1450(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_004c1495;
    }
  }
  iVar1 = 0;
LAB_004c1495:
  FUN_004c08e0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_004c14c0 @ 004c14c0 ////

undefined4 * __thiscall FUN_004c14c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004bfde0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_004bfde0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_004bfde0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_004bd800((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_004bfde0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_004bfde0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_004bd860((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_004c1642;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_004bfde0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_004bfde0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_004c1642:
  puVar4 = (undefined4 *)FUN_004c0c00(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_004c16a0 @ 004c16a0 ////

void __thiscall FUN_004c16a0(void *this,uint param_1)

{
  undefined1 local_18 [20];
  undefined1 *local_4;
  
  local_4 = &stack0xffffffdc;
  local_18[0] = 0;
  FUN_004c11e0(this,param_1,local_18,0,0x14);
  return;
}


//// FUNCTION FUN_004c16e0 @ 004c16e0 ////

void __thiscall FUN_004c16e0(void *this,undefined4 *param_1)

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
  FUN_004c0700(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_004c1760 @ 004c1760 ////

void __thiscall FUN_004c1760(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_004bf850(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 9;
    return;
  }
  FUN_004c1450(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004c1840 @ 004c1840 ////

int * __thiscall FUN_004c1840(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00ca7dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_004be150(this,param_1);
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
  piVar2 = FUN_004c14c0(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_004c1940 @ 004c1940 ////

void __fastcall FUN_004c1940(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 local_60 [4];
  undefined4 uStack_5c;
  undefined1 *local_38;
  uint local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0098b490("Set");
  if ((char)uVar2 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 5);
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (local_38 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0x2c) != 0 &&
          (local_38 < (undefined1 *)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 5)));
          local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
          puVar8 = &DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar8 = puVar8 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
          *(char *)((int)puVar8 + 2) = pcVar5[2];
          DAT_010581d4 = 0x30;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          uStack_5c = 0x4c1a35;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 0;
          pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
          pcVar5 = pcVar3;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        uVar2 = FUN_0098b490("Set[x]");
        if ((char)uVar2 != '\0') {
          FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0x2c) + local_34));
        }
        local_34 = local_34 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      FUN_004063f0(param_1 + 0x28);
      SLVAR_LoadUint(&local_38);
      FUN_004c16a0((void *)(param_1 + 0x28),(uint)local_38);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        iVar4 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
            puVar8 = &DAT_010581d8;
            for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar8 = puVar8 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
            *(char *)((int)puVar8 + 2) = pcVar5[2];
            DAT_010581d4 = 0x30;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            uStack_5c = 0x4c1b71;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 1;
            pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
            pcVar5 = pcVar3;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
          }
          uVar2 = FUN_0098b490("Set[x]");
          if ((char)uVar2 != '\0') {
            FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0x2c) + iVar4));
          }
          local_30 = local_30 + 1;
          iVar4 = iVar4 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar8 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar8 = puVar8 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar8 + 2) = pcVar5[2];
    DAT_010581d4 = 0x31;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    uStack_5c = 0x4c1c6c;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar2 = FUN_0098b490("Scene");
  if ((char)uVar2 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x38));
  }
  uVar2 = FUN_0098b490("Parts");
  if ((char)uVar2 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)(*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2);
      }
      FUN_0098a3a0(&local_30);
      for (local_38 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0x5c) != 0 &&
          (local_38 < (undefined1 *)(*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2)));
          local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
          puVar8 = &DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar8 = puVar8 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
          *(char *)((int)puVar8 + 2) = pcVar5[2];
          DAT_010581d4 = 0x32;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          uStack_5c = 0x4c1dae;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 3;
          pcVar3 = (char *)FUN_00ace33d(0xe4fe30);
          pcVar5 = pcVar3;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        uVar2 = FUN_0098b490("Parts[x]");
        if ((char)uVar2 != '\0') {
          FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x5c) + (int)local_38 * 4),4);
        }
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x5c));
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      SLVAR_LoadUint(&local_38);
      FUN_004c1290((void *)(param_1 + 0x58),(uint)local_38);
      puVar7 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
            puVar8 = &DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar8 = puVar8 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
            *(char *)((int)puVar8 + 2) = pcVar5[2];
            DAT_010581d4 = 0x32;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            uStack_5c = 0x4c1ef3;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 4;
            pcVar3 = (char *)FUN_00ace33d(0xe4fe30);
            pcVar5 = pcVar3;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
          }
          uVar2 = FUN_0098b490("Parts[x]");
          if ((char)uVar2 != '\0') {
            FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x5c) + (int)puVar7 * 4),4);
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 < local_38);
      }
    }
  }
  uVar2 = FUN_0098b490("Sliders");
  if ((char)uVar2 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x6c) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)((*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c)) / 0x24);
      }
      FUN_0098a3a0(&local_30);
      local_38 = (undefined1 *)0x0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0x6c) != 0 &&
          (local_34 < (uint)((*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c)) / 0x24)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
          puVar8 = &DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar8 = puVar8 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
          *(char *)((int)puVar8 + 2) = pcVar5[2];
          DAT_010581d4 = 0x33;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          uStack_5c = 0x4c2077;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 5;
          pcVar3 = (char *)FUN_00ace33d(0xe517c0);
          pcVar5 = pcVar3;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        uVar2 = FUN_0098b490("Sliders[x]");
        if ((char)uVar2 != '\0') {
          puVar8 = (undefined4 *)(local_38 + *(int *)(param_1 + 0x6c));
          FUN_0098c550(puVar8);
          uStack_5c = 0x4c210d;
          FUN_0098a430(puVar8 + 8,4);
        }
        local_38 = local_38 + 0x24;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      FUN_004bfc50(param_1 + 0x68);
      SLVAR_LoadUint(&local_38);
      local_30 = &stack0xffffff90;
      FUN_004c1370((void *)(param_1 + 0x68),(uint)local_38,&stack0xffffff9c,0,0x14);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
            puVar8 = &DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar8 = puVar8 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
            *(char *)((int)puVar8 + 2) = pcVar5[2];
            DAT_010581d4 = 0x33;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            uStack_5c = 0x4c21e1;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 6;
            pcVar3 = (char *)FUN_00ace33d(0xe517c0);
            pcVar5 = pcVar3;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
          }
          uVar2 = FUN_0098b490("Sliders[x]");
          if ((char)uVar2 != '\0') {
            puVar8 = (undefined4 *)(local_34 + *(int *)(param_1 + 0x6c));
            FUN_0098c550(puVar8);
            uStack_5c = 0x4c2277;
            FUN_0098a430(puVar8 + 8,4);
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x24;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar8 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar8 = puVar8 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar8 + 2) = pcVar5[2];
    DAT_010581d4 = 0x34;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    uStack_5c = 0x4c22ec;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar2 = FUN_0098b490("Backdrop");
  if ((char)uVar2 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x78));
  }
  uVar2 = FUN_0098b490("ListPropNames");
  if ((char)uVar2 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x9c) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 5);
      }
      FUN_0098a3a0(&local_30);
      local_38 = (undefined1 *)0x0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0x9c) != 0 &&
          (local_34 < (uint)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 5)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
          puVar8 = &DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar8 = puVar8 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
          *(char *)((int)puVar8 + 2) = pcVar5[2];
          DAT_010581d4 = 0x35;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          uStack_5c = 0x4c244b;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 8;
          pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
          pcVar5 = pcVar3;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        uVar2 = FUN_0098b490("ListPropNames[x]");
        if ((char)uVar2 != '\0') {
          FUN_0098c550((undefined4 *)(local_38 + *(int *)(param_1 + 0x9c)));
        }
        local_38 = local_38 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      puVar8 = *(undefined4 **)(param_1 + 0x9c);
      local_38 = (undefined1 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar8 == *(undefined4 **)(param_1 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(param_1 + 0x9c));
          }
          if (0x14 < (uint)puVar8[2]) break;
          puVar8 = puVar8 + 8;
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar8);
      }
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      SLVAR_LoadUint(&local_38);
      local_30 = &stack0xffffff94;
      local_60[0] = 0;
      FUN_004c11e0((void *)(param_1 + 0x98),(uint)local_38,local_60,0,0x14);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
            puVar8 = &DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar8 = puVar8 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
            *(char *)((int)puVar8 + 2) = pcVar5[2];
            DAT_010581d4 = 0x35;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            uStack_5c = 0x4c25e5;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 9;
            pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
            pcVar5 = pcVar3;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
          }
          uVar2 = FUN_0098b490("ListPropNames[x]");
          if ((char)uVar2 != '\0') {
            FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0x9c) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar8 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar8 = puVar8 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar8 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar8 + 2) = pcVar5[2];
    DAT_010581d4 = 0x36;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    uStack_5c = 0x4c26eb;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
    pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar2 = FUN_0098b490("OverlayName");
  if ((char)uVar2 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0xa8));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004c27a0 @ 004c27a0 ////

void __fastcall FUN_004c27a0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint local_60;
  undefined1 *local_38;
  uint local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x41;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    local_60 = 0x4c2835;
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
  uVar3 = FUN_0098b490("POwner");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x38));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x42;
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
  uVar3 = FUN_0098b490("WorkingTitle");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x50));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x43;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    local_60 = 0x4c29f0;
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
  uVar3 = FUN_0098b490("PProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x70));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x44;
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
  uVar3 = FUN_0098b490("SourceName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x88));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x45;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    local_60 = 0x4c2bae;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xa8));
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
  uVar3 = FUN_0098b490("PGenre");
  if ((char)uVar3 != '\0') {
    FUN_0044a970((int *)(param_1 + 0xa8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x46;
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
  uVar3 = FUN_0098b490("Quality");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xc0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x47;
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
  uVar3 = FUN_0098b490("MaxQuality");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xc4));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x48;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    local_60 = 0x4c2e55;
    iVar4 = FUN_00ace3df((int *)(param_1 + 200));
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
  uVar3 = FUN_0098b490("PScriptOffice");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 200));
  }
  uVar3 = FUN_0098b490("RequiredTechs");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0xf4) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)(*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4) >> 5);
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (local_38 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0xf4) != 0 &&
          (local_38 < (undefined1 *)(*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4) >> 5)));
          local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
          puVar6 = &DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar6 = puVar6 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
          *(char *)((int)puVar6 + 2) = pcVar5[2];
          DAT_010581d4 = 0x49;
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
        uVar3 = FUN_0098b490("RequiredTechs[x]");
        if ((char)uVar3 != '\0') {
          FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0xf4) + local_34));
        }
        local_34 = local_34 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      FUN_004063f0(param_1 + 0xf0);
      SLVAR_LoadUint(&local_38);
      FUN_004c16a0((void *)(param_1 + 0xf0),(uint)local_38);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
            puVar6 = &DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar6 = puVar6 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
            *(char *)((int)puVar6 + 2) = pcVar5[2];
            DAT_010581d4 = 0x49;
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
          uVar3 = FUN_0098b490("RequiredTechs[x]");
          if ((char)uVar3 != '\0') {
            FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0xf4) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  uVar3 = FUN_0098b490("RequiredSets");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x104) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)(*(int *)(param_1 + 0x108) - *(int *)(param_1 + 0x104) >> 5);
      }
      FUN_0098a3a0(&local_30);
      local_38 = (undefined1 *)0x0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0x104) != 0 &&
          (local_34 < (uint)(*(int *)(param_1 + 0x108) - *(int *)(param_1 + 0x104) >> 5)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
          puVar6 = &DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar6 = puVar6 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
          *(char *)((int)puVar6 + 2) = pcVar5[2];
          DAT_010581d4 = 0x4a;
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
        uVar3 = FUN_0098b490("RequiredSets[x]");
        if ((char)uVar3 != '\0') {
          FUN_0098c550((undefined4 *)(local_38 + *(int *)(param_1 + 0x104)));
        }
        local_38 = local_38 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      if (*(undefined4 **)(param_1 + 0x104) != (undefined4 *)0x0) {
        FUN_00405fe0(*(undefined4 **)(param_1 + 0x104),*(undefined4 **)(param_1 + 0x108));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x104));
      }
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      SLVAR_LoadUint(&local_38);
      local_30 = &stack0xffffff94;
      local_60 = local_60 & 0xffffff00;
      FUN_004c11e0((void *)(param_1 + 0x100),(uint)local_38,&local_60,0,0x14);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
            puVar6 = &DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar6 = puVar6 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
            *(char *)((int)puVar6 + 2) = pcVar5[2];
            DAT_010581d4 = 0x4a;
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
          uVar3 = FUN_0098b490("RequiredSets[x]");
          if ((char)uVar3 != '\0') {
            FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0x104) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  uVar3 = FUN_0098b490("RequiredCostumes");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0xe4) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe4) >> 5);
      }
      FUN_0098a3a0(&local_30);
      local_38 = (undefined1 *)0x0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0xe4) != 0 &&
          (local_34 < (uint)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe4) >> 5)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
          puVar6 = &DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar6 = puVar6 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
          *(char *)((int)puVar6 + 2) = pcVar5[2];
          DAT_010581d4 = 0x4b;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 0xc;
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
        uVar3 = FUN_0098b490("RequiredCostumes[x]");
        if ((char)uVar3 != '\0') {
          FUN_0098c550((undefined4 *)(local_38 + *(int *)(param_1 + 0xe4)));
        }
        local_38 = local_38 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      if (*(undefined4 **)(param_1 + 0xe4) != (undefined4 *)0x0) {
        FUN_00405fe0(*(undefined4 **)(param_1 + 0xe4),*(undefined4 **)(param_1 + 0xe8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0xe4));
      }
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0;
      SLVAR_LoadUint(&local_38);
      local_30 = &stack0xffffff94;
      local_60 = local_60 & 0xffffff00;
      FUN_004c11e0((void *)(param_1 + 0xe0),(uint)local_38,&local_60,0,0x14);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
            puVar6 = &DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar6 = puVar6 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
            *(char *)((int)puVar6 + 2) = pcVar5[2];
            DAT_010581d4 = 0x4b;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 0xd;
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
          uVar3 = FUN_0098b490("RequiredCostumes[x]");
          if ((char)uVar3 != '\0') {
            FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0xe4) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x4c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
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
  uVar3 = FUN_0098b490("Price");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x114),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x4d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
    local_60 = 0x4c38cc;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x11c));
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
  uVar3 = FUN_0098b490("Shots");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x11c);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Script.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x4e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x10;
    local_60 = 0x4c39b5;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x150));
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
  uVar3 = FUN_0098b490("Parts");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x150);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004c3a50 @ 004c3a50 ////

void FUN_004c3a50(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104ac48;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104ac48;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_004c3ab0 @ 004c3ab0 ////

void __fastcall FUN_004c3ab0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004c0d20(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004c3ae0 @ 004c3ae0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c3ae0(void *this,char param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float10 fVar13;
  int iVar14;
  TypeDescriptor *pTVar15;
  TypeDescriptor *pTVar16;
  int iVar17;
  undefined4 *puVar18;
  int local_48;
  float local_44;
  float local_40;
  void *local_38;
  undefined4 local_34;
  int local_30;
  uint *local_2c;
  int *local_28;
  int *local_24;
  uint local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca7f20;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xe8) == 0) {
    return;
  }
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x128) = 0;
  fVar13 = FUN_005b5040(*(int *)((int)this + 0xe8));
  fVar13 = fVar13 / (float10)_DAT_0104ac3c;
  if ((float10)0.0 <= fVar13) {
    if ((float10)1.0 < fVar13) {
      fVar13 = (float10)1.0;
    }
  }
  else {
    fVar13 = (float10)0.0;
  }
  fVar13 = fVar13 * (float10)_DAT_0104ac18;
  if ((float10)0.0 <= fVar13) {
    if ((float10)1.0 < fVar13) {
      fVar13 = (float10)1.0;
    }
  }
  else {
    fVar13 = (float10)0.0;
  }
  fVar13 = fVar13 + (float10)*(float *)((int)this + 0x128);
  if ((float10)0.0 <= fVar13) {
    if ((float10)1.0 < fVar13) {
      fVar13 = (float10)1.0;
    }
  }
  else {
    fVar13 = (float10)0.0;
  }
  *(float *)((int)this + 0x128) = (float)fVar13;
  iVar4 = FUN_005b50b0(*(int *)((int)this + 0xe8));
  fVar1 = (float)iVar4 / _DAT_0104ac34;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * _DAT_0104ac10;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + *(float *)((int)this + 0x128);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x128) = fVar1;
  iVar4 = FUN_005b5190(*(int *)((int)this + 0xe8));
  fVar1 = (float)iVar4 / _DAT_0104ac38;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * _DAT_0104ac14;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + *(float *)((int)this + 0x128);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x128) = fVar1;
  iVar4 = FUN_005b77a0(*(int *)((int)this + 0xe8));
  fVar1 = (float)iVar4 / _DAT_0104ac44;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * _DAT_0104ac20;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + *(float *)((int)this + 0x128);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x128) = fVar1;
  iVar4 = FUN_005b2220(*(int *)((int)this + 0xe8));
  if (iVar4 == 0) {
    fVar1 = 0.0;
  }
  else {
    iVar11 = *(int *)(iVar4 + 100);
    iVar10 = 0;
    local_40 = 0.0;
    if (iVar11 != *(int *)(iVar4 + 0x68)) {
      do {
        iVar17 = 0;
        pTVar16 = &TM::CExtra::RTTI_Type_Descriptor;
        pTVar15 = &TM::CStaff::RTTI_Type_Descriptor;
        iVar14 = 0;
        piVar5 = (int *)FUN_005a6470(*(int *)(iVar11 + 0x14));
        iVar14 = FUN_00ace790(piVar5,iVar14,pTVar15,pTVar16,iVar17);
        if (iVar14 != 0) {
          iVar10 = iVar10 + 1;
        }
        iVar11 = iVar11 + 0x18;
        local_40 = (float)iVar10;
      } while (iVar11 != *(int *)(iVar4 + 0x68));
    }
    fVar1 = (float)(int)local_40 / _DAT_0104ac40;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
  }
  fVar1 = fVar1 * _DAT_0104ac1c;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + *(float *)((int)this + 0x128);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x128) = fVar1;
  iVar4 = *(int *)((int)this + 0xe8);
  iVar11 = *(int *)(iVar4 + 0xac);
  iVar10 = 0;
  if (iVar11 != iVar4 + 0xb8) {
    do {
      iVar11 = *(int *)(iVar11 + 4);
      iVar10 = iVar10 + 1;
    } while (iVar11 != iVar4 + 0xb8);
    if (iVar10 != 0) {
      piVar5 = (int *)0x0;
      local_44 = 0.0;
      local_40 = 0.0;
      local_28 = (int *)0x0;
      local_24 = (int *)0x0;
      local_20[0] = 0;
      local_48 = *(int *)(iVar4 + 0xac);
      local_4 = 0;
      if (local_48 != iVar4 + 0xb8) {
        do {
          iVar4 = *(int *)(local_48 + 8);
          iVar11 = FUN_004df220(iVar4);
          if (iVar11 != 0) {
            puVar18 = &local_34;
            pvVar6 = (void *)FUN_004df220(iVar4);
            pfVar7 = (float *)FUN_004cbc40(pvVar6,puVar18);
            local_40 = *pfVar7 + local_40;
          }
          pvVar6 = (void *)FUN_004df4a0(iVar4);
          local_38 = pvVar6;
          if (pvVar6 != (void *)0x0) {
            uVar12 = 0;
            if (local_28 != piVar5) {
              uVar12 = 0;
              piVar8 = local_28;
              do {
                if ((void *)*piVar8 == pvVar6) {
                  uVar12 = uVar12 + 1;
                }
                piVar8 = piVar8 + 1;
              } while (piVar8 != piVar5);
            }
            pfVar7 = (float *)FUN_004b57f0(pvVar6,&local_30);
            uVar9 = uVar12;
            if ((int)uVar12 < 0) {
              uVar9 = -uVar12;
            }
            fVar1 = 1.0;
            fVar2 = DAT_0104ac24;
            while( true ) {
              if ((uVar9 & 1) != 0) {
                fVar1 = fVar1 * fVar2;
              }
              uVar9 = uVar9 >> 1;
              if (uVar9 == 0) break;
              fVar2 = fVar2 * fVar2;
            }
            if ((int)uVar12 < 0) {
              fVar1 = 1.0 / fVar1;
            }
            local_44 = fVar1 * *pfVar7 + local_44;
            if ((local_28 == (int *)0x0) ||
               ((uint)((int)(local_20[0] - (int)local_28) >> 2) <=
                (uint)((int)piVar5 - (int)local_28 >> 2))) {
              FUN_004b8e60(&local_2c,piVar5,1,&local_38);
              piVar5 = local_24;
            }
            else {
              *piVar5 = (int)pvVar6;
              local_24 = piVar5 + 1;
              piVar5 = local_24;
            }
          }
          local_48 = *(int *)(local_48 + 4);
        } while (local_48 != *(int *)((int)this + 0xe8) + 0xb8);
      }
      iVar11 = 0;
      for (iVar4 = *(int *)(*(int *)((int)this + 0xe8) + 0xac);
          iVar4 != *(int *)((int)this + 0xe8) + 0xb8; iVar4 = *(int *)(iVar4 + 4)) {
        iVar11 = iVar11 + 1;
      }
      fVar1 = (float)iVar11;
      if (iVar11 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_44 = local_44 / fVar1;
      if (0.0 <= local_44) {
        if (1.0 < local_44) {
          local_44 = 1.0;
        }
      }
      else {
        local_44 = 0.0;
      }
      local_44 = local_44 * _DAT_0104ac0c;
      if (0.0 <= local_44) {
        if (1.0 < local_44) {
          local_44 = 1.0;
        }
      }
      else {
        local_44 = 0.0;
      }
      local_44 = local_44 + *(float *)((int)this + 0x128);
      if (0.0 <= local_44) {
        if (1.0 < local_44) {
          local_44 = 1.0;
        }
      }
      else {
        local_44 = 0.0;
      }
      *(float *)((int)this + 0x128) = local_44;
      local_30 = 0;
      for (iVar4 = *(int *)(*(int *)((int)this + 0xe8) + 0xac);
          iVar4 != *(int *)((int)this + 0xe8) + 0xb8; iVar4 = *(int *)(iVar4 + 4)) {
        local_30 = local_30 + 1;
      }
      fVar1 = (float)local_30;
      if (local_30 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_40 = local_40 / fVar1;
      if (0.0 <= local_40) {
        if (1.0 < local_40) {
          local_40 = 1.0;
        }
      }
      else {
        local_40 = 0.0;
      }
      local_40 = local_40 * _DAT_0104ac08;
      if (0.0 <= local_40) {
        if (1.0 < local_40) {
          local_40 = 1.0;
        }
      }
      else {
        local_40 = 0.0;
      }
      local_40 = local_40 + *(float *)((int)this + 0x128);
      if (0.0 <= local_40) {
        if (1.0 < local_40) {
          local_40 = 1.0;
        }
      }
      else {
        local_40 = 0.0;
      }
      *(float *)((int)this + 0x128) = local_40;
      local_4 = 0xffffffff;
      if (local_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
    }
  }
  local_30 = 0;
  for (iVar4 = *(int *)(*(int *)((int)this + 0xe8) + 0xac);
      iVar4 != *(int *)((int)this + 0xe8) + 0xb8; iVar4 = *(int *)(iVar4 + 4)) {
    local_30 = local_30 + 1;
  }
  fVar1 = (float)local_30;
  if (local_30 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar1 = fVar1 / _DAT_0104ac30;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * _DAT_0104ac04;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + *(float *)((int)this + 0x128);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x128) = fVar1;
  local_38 = (void *)FUN_005b78d0(*(int *)((int)this + 0xe8));
  fVar1 = (float)(int)local_38 / _DAT_0104ac2c;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * _DAT_0104ac00;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + *(float *)((int)this + 0x128);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x128) = fVar1;
  local_38 = (void *)FUN_005b7910(*(int *)((int)this + 0xe8));
  fVar1 = (float)(int)local_38 / _DAT_0104ac28;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 * _DAT_0104abfc;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + *(float *)((int)this + 0x128);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x128) = fVar1;
  iVar4 = *(int *)(*(int *)((int)this + 0xe8) + 0xac);
  iVar11 = *(int *)((int)this + 0xe8) + 0xb8;
  iVar10 = 0;
  if (iVar4 != iVar11) {
    do {
      iVar4 = *(int *)(iVar4 + 4);
      iVar10 = iVar10 + 1;
    } while (iVar4 != iVar11);
    if (iVar10 == 1) {
      fVar1 = _DAT_0104abf8 * *(float *)((int)this + 0x128);
      if (0.0 <= fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      *(float *)((int)this + 0x128) = fVar1;
    }
  }
  iVar4 = *(int *)(*(int *)((int)this + 0xe8) + 0xac);
  iVar11 = *(int *)((int)this + 0xe8) + 0xb8;
  iVar10 = 0;
  if (iVar4 != iVar11) {
    do {
      iVar4 = *(int *)(iVar4 + 4);
      iVar10 = iVar10 + 1;
    } while (iVar4 != iVar11);
    if (iVar10 == 2) {
      fVar1 = _DAT_0104abf4 * *(float *)((int)this + 0x128);
      if (0.0 <= fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      *(float *)((int)this + 0x128) = fVar1;
    }
  }
  iVar4 = *(int *)(*(int *)((int)this + 0xe8) + 0xac);
  iVar11 = *(int *)((int)this + 0xe8) + 0xb8;
  iVar10 = 0;
  if (iVar4 != iVar11) {
    do {
      iVar4 = *(int *)(iVar4 + 4);
      iVar10 = iVar10 + 1;
    } while (iVar4 != iVar11);
    if (iVar10 != 0) goto LAB_004c4526;
  }
  *(undefined4 *)((int)this + 0x128) = 0;
LAB_004c4526:
  if (param_1 != '\0') {
    local_2c = local_20;
    _param_1 = 0.2;
    local_20[0] = local_20[0] & 0xffffff00;
    local_28 = (int *)0x0;
    local_24 = (int *)0x20;
    local_2c = _malloc(0x20);
    _strncpy((char *)local_2c,"facility_script_4star",0x15);
    local_28 = (int *)0x15;
    *(char *)((int)local_2c + 0x15) = '\0';
    local_4 = 1;
    iVar4 = FUN_009623a0(&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if ((iVar4 == 0) || (cVar3 = FUN_00960f30(iVar4), cVar3 == '\0')) {
      local_2c = local_20;
      local_20[0] = local_20[0] & 0xffffff00;
      local_28 = (int *)0x0;
      local_24 = (int *)0x20;
      local_2c = _malloc(0x20);
      _strncpy((char *)local_2c,"facility_script_3star",0x15);
      local_28 = (int *)0x15;
      *(char *)((int)local_2c + 0x15) = '\0';
      local_4 = 2;
      iVar4 = FUN_009623a0(&local_2c);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if ((iVar4 == 0) || (cVar3 = FUN_00960f30(iVar4), cVar3 == '\0')) {
        local_2c = local_20;
        local_20[0] = local_20[0] & 0xffffff00;
        local_28 = (int *)0x0;
        local_24 = (int *)0x20;
        local_2c = _malloc(0x20);
        _strncpy((char *)local_2c,"facility_script_2star",0x15);
        local_28 = (int *)0x15;
        *(char *)((int)local_2c + 0x15) = '\0';
        local_4 = 3;
        iVar4 = FUN_009623a0(&local_2c);
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        if ((iVar4 != 0) && (cVar3 = FUN_00960f30(iVar4), cVar3 != '\0')) {
          _param_1 = 0.4;
        }
      }
      else {
        _param_1 = 0.6;
      }
    }
    else {
      _param_1 = 0.8;
    }
    if (_param_1 < *(float *)((int)this + 0x128)) {
      if (0.0 <= _param_1) {
        if (1.0 < _param_1) {
          _param_1 = 1.0;
        }
        *(float *)((int)this + 0x128) = _param_1;
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)((int)this + 0x128) = 0;
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004c4780 @ 004c4780 ////

void __fastcall FUN_004c4780(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1e57c;
  return;
}


//// FUNCTION FUN_004c47e0 @ 004c47e0 ////

void __fastcall FUN_004c47e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1e588;
  return;
}


//// FUNCTION FUN_004c4840 @ 004c4840 ////

void __fastcall FUN_004c4840(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1e594;
  return;
}


//// FUNCTION FUN_004c48a0 @ 004c48a0 ////

int __fastcall FUN_004c48a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004becb0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION ScriptDefinition_Constructor @ 004c48d0 ////

undefined4 * __fastcall ScriptDefinition_Constructor(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char *extraout_ECX;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8077;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d1e5c0;
  param_1[0x19] = &PTR_LAB_00d1e5a0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = param_1 + 0x27;
  param_1[0x27] = &PTR_FUN_00d1e55c;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_1 + 0x30;
  *(undefined2 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 10;
  param_1[0x38] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = param_1 + 0x35;
  param_1[0x35] = &PTR_FUN_00d18c3c;
  param_1[0x3a] = 0;
  param_1[0x3b] = param_1 + 0x3e;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x14;
  piVar1 = param_1 + 0x43;
  param_1[0x46] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1a49c;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x3f000000;
  param_1[0x4e] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = param_1 + 0x4b;
  param_1[0x4b] = &PTR_LAB_00d1e56c;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[99] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  puVar3 = param_1 + 0x65;
  param_1[0x67] = 0;
  *puVar3 = 0;
  param_1[0x66] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x60] = &PTR_LAB_00d1e588;
  param_1[0x62] = puVar3;
  *puVar3 = param_1 + 0x61;
  param_1[0x70] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  puVar3 = param_1 + 0x72;
  param_1[0x74] = 0;
  *puVar3 = 0;
  param_1[0x73] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x6d] = &PTR_LAB_00d1e594;
  param_1[0x6f] = puVar3;
  *puVar3 = param_1 + 0x6e;
  local_4 = CONCAT31(local_4._1_3_,0x11);
  param_1[0x7a] = 0;
  FUN_0043b510(param_1 + 0x7b);
  param_1[0x25] = param_1;
  FUN_00acdb9e(0xe517f0);
  local_14 = (int *)&stack0xffffffd0;
  iVar2 = FUN_0097dda0();
  param_1[0x26] = iVar2;
  if (s___AUScriptSliderSetting_CScript__00e517c8[0x25] != '\0') {
    iVar6 = 0x8c;
    local_14 = (int *)&stack0xffffffc8;
    pcVar5 = "ScriptLink";
    pcVar4 = extraout_ECX;
    iVar2 = FUN_00acdb9e(0xe517f0);
    *local_14 = iVar2;
    FUN_0097df60(pcVar4,pcVar5,iVar6);
    s___AUScriptSliderSetting_CScript__00e517c8[0x25] = '\0';
  }
  FUN_005202b0();
  local_14 = (int *)AudienceTaste_GetMostPopularGenre();
  (**(code **)(*piVar1 + 4))();
  param_1[0x48] = local_14;
  (**(code **)*piVar1)();
  puVar3 = (undefined4 *)FUN_0043b520(&local_14,0.0);
  param_1[0x7b] = *puVar3;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004c4b70 @ 004c4b70 ////

void __thiscall FUN_004c4b70(void *this,char param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  wchar_t *_Source;
  char *pcVar3;
  undefined4 *puVar4;
  bool bVar5;
  char cVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  void *pvVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  undefined4 *puStack_188;
  undefined4 *puStack_184;
  undefined4 *puStack_180;
  undefined1 *local_17c;
  void *pvStack_178;
  undefined4 *local_174;
  byte *pbStack_170;
  uint uStack_16c;
  uint uStack_168;
  byte abStack_164 [20];
  undefined1 auStack_150 [4];
  int *piStack_14c;
  undefined4 uStack_148;
  char *pcStack_144;
  uint uStack_140;
  uint uStack_13c;
  char acStack_138 [20];
  void *apvStack_124 [2];
  uint uStack_11c;
  void *apvStack_104 [2];
  uint uStack_fc;
  undefined4 auStack_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca80fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_17c = this;
  puVar7 = FUN_005c18b0();
  local_174 = puVar7;
  FUN_005b1020(puVar7,0);
  if (*(undefined4 **)((int)this + 0x90) != (undefined4 *)0x0) {
    **(undefined4 **)((int)this + 0x90) = *(undefined4 *)((int)this + 0x8c);
  }
  if (*(int *)((int)this + 0x8c) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x8c) + 4) = *(undefined4 *)((int)this + 0x90);
  }
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  (**(code **)(*(int *)((int)this + 0x9c) + 4))();
  *(undefined4 *)((int)this + 0xb0) = 0;
  (*(code *)**(undefined4 **)((int)this + 0x9c))();
  FUN_005b21c0(puVar7,this);
  FUN_004036d0(puVar7 + 0x97,*(wchar_t **)((int)this + 0xb4),*(uint *)((int)this + 0xb8));
  if (*(int *)((int)this + 0x120) != 0) {
    FUN_005b26e0(puVar7,*(int *)((int)this + 0x120));
  }
  (**(code **)(*(int *)((int)this + 0xd4) + 4))();
  *(undefined4 **)((int)this + 0xe8) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0xd4))();
  pvStack_178 = (void *)FUN_005b2220((int)puVar7);
  puVar19 = *(undefined1 **)((int)this + 0x1bc);
  if (puVar19 != (undefined1 *)((int)this + 0x1c8)) {
    do {
      puVar7 = FUN_005a90f0(pvStack_178,0,*(undefined4 *)(*(int *)(puVar19 + 8) + 0x88));
      bVar5 = FUN_00430950((undefined4 *)(*(int *)(puVar19 + 8) + 0x68),"");
      if (bVar5) {
        iVar8 = _strncmp(*(char **)(*(int *)(puVar19 + 8) + 0x68),"costume_",8);
        iVar17 = *(int *)(puVar19 + 8);
        if (iVar8 == 0) {
          FUN_004335f0((int *)&puStack_188,(undefined4 *)(iVar17 + 0x68),*(int *)(iVar17 + 0x60),3,0
                       ,0);
          uStack_4 = 0;
          if (puStack_188 != (undefined4 *)0x0) {
            puStack_188[0x29] = puStack_188[0x29] | 1;
            FUN_004319b0((int)puStack_188);
            FUN_005a63c0(puVar7,puStack_188);
          }
          uStack_4 = 0xffffffff;
          if ((puStack_188 != (undefined4 *)0x0) &&
             (iVar17 = puStack_188[0x12], puStack_188[0x12] = iVar17 + -1, iVar17 + -1 == 0)) {
            (**(code **)*puStack_188)();
          }
          puStack_188 = (undefined4 *)0x0;
        }
        else {
          iVar17 = FUN_00959a40((undefined4 *)(iVar17 + 0x68));
          if ((iVar17 == 0) || (cVar6 = FUN_00960f30(iVar17), cVar6 == '\0')) {
            pbStack_170 = abStack_164;
            abStack_164[0] = 0;
            uStack_16c = 0;
            uStack_168 = 0x14;
            _strncpy((char *)pbStack_170,"costumemetalink",0xf);
            uStack_16c = 0xf;
            pbStack_170[0xf] = 0;
            uStack_4 = 2;
            FUN_0055c540(auStack_e4,&pbStack_170);
            if (0x14 < uStack_168) {
                    /* WARNING: Subroutine does not return */
              _free(pbStack_170);
            }
            pcStack_144 = acStack_138;
            acStack_138[0] = '\0';
            uStack_140 = 0;
            uStack_13c = 0x14;
            _strncpy(pcStack_144,"metacostumelink",0xf);
            uStack_140 = 0xf;
            pcStack_144[0xf] = '\0';
            uStack_4._0_1_ = 5;
            FUN_00558a50(auStack_e4,&pcStack_144,(undefined4 *)0x1);
            uStack_4._0_1_ = 4;
            if (0x14 < uStack_13c) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_144);
            }
            puVar12 = FUN_005584e0(auStack_e4,apvStack_104,
                                   (undefined4 *)(*(int *)(puVar19 + 8) + 0x68));
            FUN_0040d6b0(apvStack_124,"costume_",puVar12);
            uStack_4._0_1_ = 6;
            if (0x14 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_104[0]);
            }
            bVar5 = FUN_00430950(apvStack_124,"costume_");
            if (bVar5) {
              FUN_004335f0((int *)&puStack_184,apvStack_124,*(int *)(*(int *)(puVar19 + 8) + 0x60),3
                           ,0,0);
              uStack_4._0_1_ = 7;
              if (puStack_184 != (undefined4 *)0x0) {
                puStack_184[0x29] = puStack_184[0x29] | 1;
                FUN_004319b0((int)puStack_184);
                FUN_005a63c0(puVar7,puStack_184);
              }
              uStack_4._0_1_ = 6;
              if ((puStack_184 != (undefined4 *)0x0) &&
                 (iVar17 = puStack_184[0x12], puStack_184[0x12] = iVar17 + -1, iVar17 + -1 == 0)) {
                (**(code **)*puStack_184)();
              }
              puStack_184 = (undefined4 *)0x0;
            }
            if (0x14 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_124[0]);
            }
            uStack_4 = 0xffffffff;
            FUN_00558920(auStack_e4);
          }
          else {
            FUN_004335f0((int *)&puStack_180,(undefined4 *)(*(int *)(puVar19 + 8) + 0x68),
                         *(int *)(*(int *)(puVar19 + 8) + 0x60),3,0,0);
            uStack_4 = 1;
            if (puStack_180 != (undefined4 *)0x0) {
              puStack_180[0x29] = puStack_180[0x29] | 1;
              FUN_004319b0((int)puStack_180);
              FUN_005a63c0(puVar7,puStack_180);
            }
            uStack_4 = 0xffffffff;
            if ((puStack_180 != (undefined4 *)0x0) &&
               (iVar17 = puStack_180[0x12], puStack_180[0x12] = iVar17 + -1, iVar17 + -1 == 0)) {
              (**(code **)*puStack_180)();
            }
            puStack_180 = (undefined4 *)0x0;
          }
        }
      }
      bVar5 = FUN_00431270((undefined4 *)(*(int *)(puVar19 + 8) + 0x8c),
                           (wchar_t *)&lpCaption_00d16918);
      if (bVar5) {
        *(undefined1 *)(puVar7 + 0x20) = 0;
        uVar2 = *(uint *)(*(int *)(puVar19 + 8) + 0x90);
        _Source = *(wchar_t **)(*(int *)(puVar19 + 8) + 0x8c);
        if ((uint)puVar7[0x1a] <= uVar2) {
          if (10 < (uint)puVar7[0x1a]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar7[0x18]);
          }
          uVar9 = uVar2 + 0x20 >> 5;
          puVar7[0x1a] = uVar9 << 5;
          pvVar10 = _malloc(uVar9 * 0x40);
          puVar7[0x18] = pvVar10;
        }
        _wcsncpy((wchar_t *)puVar7[0x18],_Source,uVar2);
        puVar7[0x19] = uVar2;
        *(undefined2 *)(puVar7[0x18] + uVar2 * 2) = 0;
        this = local_17c;
      }
      puVar7[0x23] = *(undefined4 *)(*(int *)(puVar19 + 8) + 100);
      puVar19 = *(undefined1 **)(puVar19 + 4);
    } while (puVar19 != (undefined1 *)((int)this + 0x1c8));
  }
  FUN_005a7610((int)pvStack_178);
  piStack_14c = (int *)FUN_004becb0();
  *(undefined1 *)((int)piStack_14c + 0x31) = 1;
  piStack_14c[1] = (int)piStack_14c;
  *piStack_14c = (int)piStack_14c;
  piStack_14c[2] = (int)piStack_14c;
  uStack_148 = 0;
  puStack_188 = *(undefined4 **)((int)this + 0x188);
  puStack_180 = (undefined4 *)((int)this + 0x194);
  uStack_4._1_3_ = 0;
  if (puStack_188 != puStack_180) {
    do {
      pbStack_170 = abStack_164;
      abStack_164[0] = 0;
      uStack_16c = 0;
      uStack_168 = 0x14;
      iVar17 = puStack_188[2];
      puVar7 = *(undefined4 **)(iVar17 + 100);
      uStack_4._0_1_ = 9;
      pvStack_178 = (void *)0x0;
      if (((puVar7 != (undefined4 *)0x0) && (*(int *)(iVar17 + 0x68) - (int)puVar7 >> 5 != 0)) &&
         (puStack_184 = puVar7, puVar7 != *(undefined4 **)(iVar17 + 0x68))) {
        do {
          uVar2 = puStack_184[1];
          pcVar3 = (char *)*puStack_184;
          if (uStack_168 <= uVar2) {
            if (0x14 < uStack_168) {
                    /* WARNING: Subroutine does not return */
              _free(pbStack_170);
            }
            uStack_168 = uVar2 + 0x20 & 0xffffffe0;
            pbStack_170 = _malloc(uStack_168);
          }
          _strncpy((char *)pbStack_170,pcVar3,uVar2);
          pbStack_170[uVar2] = 0;
          uStack_16c = uVar2;
          piVar11 = FUN_004c1840(auStack_150,&pbStack_170);
          piVar11 = (int *)*piVar11;
          if ((piVar11 != (int *)0x0) && (cVar6 = (**(code **)(*piVar11 + 0x1d4))(), cVar6 != '\0'))
          {
LAB_004c5221:
            if (piVar11 != (int *)0x0) goto LAB_004c533f;
            break;
          }
          puVar7 = DAT_0104ad14;
          if (DAT_0104ad14 != &DAT_0104ad20) {
            do {
              puVar12 = (undefined4 *)FUN_00528450(puVar7[2]);
              pbVar20 = (byte *)*puVar12;
              pbVar16 = pbStack_170;
              do {
                bVar1 = *pbVar16;
                bVar5 = bVar1 < *pbVar20;
                if (bVar1 != *pbVar20) {
LAB_004c51cb:
                  iVar17 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
                  goto LAB_004c51d0;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar16[1];
                bVar5 = bVar1 < pbVar20[1];
                if (bVar1 != pbVar20[1]) goto LAB_004c51cb;
                pbVar16 = pbVar16 + 2;
                pbVar20 = pbVar20 + 2;
              } while (bVar1 != 0);
              iVar17 = 0;
LAB_004c51d0:
              if ((iVar17 == 0) && ((param_2 != '\0' || (*(int *)(puVar7[2] + 0x2b8) == 5)))) {
                piVar11 = (int *)puVar7[2];
                goto LAB_004c5221;
              }
              puVar12 = puVar7 + 1;
              puVar7 = (undefined4 *)*puVar12;
            } while ((undefined4 *)*puVar12 != &DAT_0104ad20);
          }
          puStack_184 = puStack_184 + 8;
        } while (puStack_184 != *(undefined4 **)(puStack_188[2] + 0x68));
      }
      puVar12 = puStack_188;
      piVar11 = FUN_004d4120(puStack_188[2] + 0x70,param_2 == '\0',(int)local_174,0);
      puVar7 = *(undefined4 **)(puVar12[2] + 100);
      if ((puVar7 != *(undefined4 **)(puVar12[2] + 0x68)) &&
         (piVar13 = FUN_004c1840(auStack_150,puVar7), *piVar13 == 0)) {
        piVar13 = FUN_004c1840(auStack_150,puVar7);
        *piVar13 = (int)piVar11;
      }
      if (piVar11 == (int *)0x0) {
        puVar7 = *(undefined4 **)(puStack_188[2] + 100);
        if (puVar7 != *(undefined4 **)(puStack_188[2] + 0x68)) {
          do {
            uVar2 = puVar7[1];
            pcVar3 = (char *)*puVar7;
            if (uStack_168 <= uVar2) {
              if (0x14 < uStack_168) {
                    /* WARNING: Subroutine does not return */
                _free(pbStack_170);
              }
              uStack_168 = uVar2 + 0x20 & 0xffffffe0;
              pbStack_170 = _malloc(uStack_168);
            }
            _strncpy((char *)pbStack_170,pcVar3,uVar2);
            pbStack_170[uVar2] = 0;
            uStack_16c = uVar2;
            iVar17 = FUN_009623a0(&pbStack_170);
            if ((iVar17 != 0) &&
               (((cVar6 = FUN_00960f30(iVar17), cVar6 != '\0' || (param_1 != '\0')) &&
                (piVar11 = FUN_004d3660(&pbStack_170), piVar11 != (int *)0x0)))) goto LAB_004c533f;
            puVar7 = puVar7 + 8;
          } while (puVar7 != *(undefined4 **)(puStack_188[2] + 0x68));
        }
        if (piVar11 != (int *)0x0) goto LAB_004c533f;
      }
      else {
LAB_004c533f:
        pcStack_144 = acStack_138;
        acStack_138[0] = '\0';
        uStack_140 = 0;
        uStack_13c = 0x14;
        uStack_4 = CONCAT31(uStack_4._1_3_,10);
        cVar6 = (**(code **)(*piVar11 + 0x1d4))();
        uVar2 = uStack_140;
        pcVar3 = pcStack_144;
        pvVar10 = pvStack_178;
        if (cVar6 != '\0') {
          local_17c = &stack0xfffffe44;
          pbVar20 = &stack0xfffffe50;
          uVar9 = 0x14;
          puVar19 = &stack0xfffffe44;
          if (0x13 < uStack_140) {
            uVar9 = uStack_140 + 0x20 & 0xffffffe0;
            pbVar20 = _malloc(uVar9);
            puVar19 = local_17c;
          }
          local_17c = puVar19;
          _strncpy((char *)pbVar20,pcVar3,uVar2);
          pbVar20[uVar2] = 0;
          puVar7 = FUN_004bc270(pbVar20,uVar2,uVar9);
          pvVar10 = pvStack_178;
          if (puVar7 != (undefined4 *)0x0) {
            iVar17 = FUN_004b4a40((int)puVar7);
            pvVar10 = (void *)FUN_005c0510(local_174,puVar7,iVar17);
            iVar17 = puVar7[0x12];
            puVar7[0x12] = iVar17 + -1;
            pvStack_178 = pvVar10;
            if (iVar17 + -1 == 0) {
              (**(code **)*puVar7)();
            }
          }
        }
        uStack_4._0_1_ = 9;
        if (0x14 < uStack_13c) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_144);
        }
        if (pvVar10 != (void *)0x0) {
          iVar17 = FUN_004de100((int)pvVar10);
          if (iVar17 != 0) {
            piVar11 = *(int **)(puStack_188[2] + 0x94);
            puVar19 = *(undefined1 **)(iVar17 + 8);
            if (piVar11 != *(int **)(puStack_188[2] + 0x98)) {
              local_17c = (undefined1 *)(iVar17 + 0x14);
              do {
                if (puVar19 == local_17c) break;
                iVar17 = *piVar11;
                puStack_184 = *(undefined4 **)(puVar19 + 8);
                if (iVar17 == -1) {
                  iVar14 = local_174[0x55];
LAB_004c5484:
                  FUN_0048dfe0(puStack_184,iVar14);
                }
                else {
                  iVar8 = FUN_005b2220((int)local_174);
                  if (((iVar8 != 0) && (puStack_184 != (undefined4 *)0x0)) && (iVar17 != 0)) {
                    for (iVar18 = *(int *)(iVar8 + 100); iVar18 != *(int *)(iVar8 + 0x68);
                        iVar18 = iVar18 + 0x18) {
                      iVar14 = *(int *)(iVar18 + 0x14);
                      if (*(int *)(iVar14 + 0x8c) == iVar17) goto LAB_004c5484;
                    }
                  }
                }
                puVar19 = *(undefined1 **)(puVar19 + 4);
                piVar11 = piVar11 + 1;
              } while (piVar11 != *(int **)(puStack_188[2] + 0x98));
            }
          }
          puVar12 = puStack_188;
          puVar7 = *(undefined4 **)(puStack_188[2] + 0xa4);
          if (puVar7 != *(undefined4 **)(puStack_188[2] + 0xa8)) {
            do {
              FUN_004e9fa0(pvVar10,puVar7,(float)puVar7[8]);
              puVar7 = puVar7 + 9;
            } while (puVar7 != *(undefined4 **)(puVar12[2] + 0xa8));
          }
          puVar7 = puStack_188;
          bVar5 = FUN_00430950((undefined4 *)(puStack_188[2] + 0xb0),"");
          if (bVar5) {
            uVar2 = *(uint *)(puVar7[2] + 0xb4);
            pcVar3 = *(char **)(puVar7[2] + 0xb0);
            if (*(uint *)((int)pvVar10 + 0x108) <= uVar2) {
              if (0x14 < *(uint *)((int)pvVar10 + 0x108)) {
                    /* WARNING: Subroutine does not return */
                _free(*(void **)((int)pvVar10 + 0x100));
              }
              uVar9 = uVar2 + 0x20 & 0xffffffe0;
              *(uint *)((int)pvVar10 + 0x108) = uVar9;
              pvVar15 = _malloc(uVar9);
              *(void **)((int)pvVar10 + 0x100) = pvVar15;
            }
            _strncpy(*(char **)((int)pvVar10 + 0x100),pcVar3,uVar2);
            *(uint *)((int)pvVar10 + 0x104) = uVar2;
            *(undefined1 *)(uVar2 + *(int *)((int)pvVar10 + 0x100)) = 0;
          }
          bVar5 = FUN_00430950((undefined4 *)(puVar7[2] + 0xe0),"");
          if (bVar5) {
            uVar2 = *(uint *)(puVar7[2] + 0xe4);
            pcVar3 = *(char **)(puVar7[2] + 0xe0);
            if (*(uint *)((int)pvVar10 + 300) <= uVar2) {
              if (0x14 < *(uint *)((int)pvVar10 + 300)) {
                    /* WARNING: Subroutine does not return */
                _free(*(void **)((int)pvVar10 + 0x124));
              }
              uVar9 = uVar2 + 0x20 & 0xffffffe0;
              *(uint *)((int)pvVar10 + 300) = uVar9;
              pvVar15 = _malloc(uVar9);
              *(void **)((int)pvVar10 + 0x124) = pvVar15;
            }
            _strncpy(*(char **)((int)pvVar10 + 0x124),pcVar3,uVar2);
            *(uint *)((int)pvVar10 + 0x128) = uVar2;
            *(undefined1 *)(uVar2 + *(int *)((int)pvVar10 + 0x124)) = 0;
          }
          puVar4 = puStack_188;
          puVar12 = *(undefined4 **)(puVar7[2] + 0xd4);
          iVar17 = 0;
          if (puVar12 != *(undefined4 **)(puVar7[2] + 0xd8)) {
            do {
              FUN_004e2a80(pvVar10,iVar17,puVar12);
              puVar12 = puVar12 + 8;
              iVar17 = iVar17 + 1;
            } while (puVar12 != *(undefined4 **)(puVar4[2] + 0xd8));
          }
        }
      }
      uStack_4._0_1_ = 8;
      if (0x14 < uStack_168) {
                    /* WARNING: Subroutine does not return */
        _free(pbStack_170);
      }
      puStack_188 = (undefined4 *)puStack_188[1];
    } while (puStack_188 != puStack_180);
  }
  puVar7 = local_174;
  uStack_4._0_1_ = 8;
  FUN_005c06a0(local_174,-NAN);
  FUN_005b2710((int)puVar7);
  uStack_4 = 0xffffffff;
  FUN_004c0d20(auStack_150,&local_17c,(int *)*piStack_14c,piStack_14c);
                    /* WARNING: Subroutine does not return */
  _free(piStack_14c);
}


//// FUNCTION FUN_004c5700 @ 004c5700 ////

undefined4 * __fastcall FUN_004c5700(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca818d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1e790;
  param_1[0xe] = &PTR_LAB_00d1e770;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = param_1 + 0x1f;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x14;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = param_1 + 0x2f;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x14;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = param_1 + 0x3b;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x14;
  param_1[0x42] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  param_1[0x42] = param_1;
  FUN_00acdb9e(0xe5180c);
  iVar1 = FUN_0097dda0();
  param_1[0x43] = iVar1;
  if (s__PAVCScript_TM___00e517f8[0x11] != '\0') {
    iVar1 = 0x100;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe5180c);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s__PAVCScript_TM___00e517f8[0x11] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004c5870 @ 004c5870 ////

undefined4 * __thiscall FUN_004c5870(void *this,byte param_1)

{
  FUN_004c0e00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004c5890 @ 004c5890 ////

undefined4 * __fastcall FUN_004c5890(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca81da;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1e7b8;
  param_1[0xe] = &PTR_LAB_00d1e798;
  param_1[0x1a] = param_1 + 0x1d;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x14;
  param_1[0x23] = param_1 + 0x26;
  *(undefined2 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 10;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x2d] = param_1;
  FUN_00acdb9e(0xe51830);
  iVar1 = FUN_0097dda0();
  param_1[0x2e] = iVar1;
  if (s__PAVShotDesc_CScript_TM___00e51814[0x1a] != '\0') {
    iVar1 = 0xac;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe51830);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s__PAVShotDesc_CScript_TM___00e51814[0x1a] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004c59b0 @ 004c59b0 ////

undefined4 * __thiscall FUN_004c59b0(void *this,byte param_1)

{
  FUN_004c59d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004c59d0 @ 004c59d0 ////

void __fastcall FUN_004c59d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca81f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((undefined4 *)param_1[0x2c] != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)param_1[0x2c] = param_1[0x2b];
  }
  if (param_1[0x2b] != 0) {
    *(undefined4 *)(param_1[0x2b] + 4) = param_1[0x2c];
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if (10 < (uint)param_1[0x25]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x23]);
  }
  if (0x14 < (uint)param_1[0x1c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 0xe;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScriptDefinition_LoadFromIni @ 004c5a90 ////

void ScriptDefinition_LoadFromIni(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  float10 fVar15;
  byte **ppbVar16;
  char **ppcVar17;
  uint local_354;
  undefined4 *local_350;
  int local_34c;
  char *pcStack_348;
  undefined4 uStack_344;
  uint uStack_340;
  char acStack_33c [20];
  byte *local_328;
  uint local_324;
  uint local_320;
  byte local_31c [20];
  byte *local_308;
  undefined4 local_304;
  uint local_300;
  byte local_2fc [20];
  char *local_2e8;
  undefined4 local_2e4;
  uint local_2e0;
  char local_2dc [20];
  char *local_2c8;
  undefined4 local_2c4;
  uint local_2c0;
  char local_2bc [20];
  byte *local_2a8 [2];
  uint local_2a0;
  byte *local_288;
  undefined4 uStack_284;
  uint uStack_280;
  byte abStack_27c [20];
  char *pcStack_268;
  undefined4 uStack_264;
  uint uStack_260;
  char acStack_25c [20];
  char *pcStack_248;
  undefined4 uStack_244;
  uint uStack_240;
  char acStack_23c [20];
  char *pcStack_228;
  undefined4 uStack_224;
  uint uStack_220;
  char acStack_21c [20];
  char *pcStack_208;
  uint uStack_204;
  uint uStack_200;
  char acStack_1fc [20];
  float fStack_1e8;
  void *apvStack_1e4 [2];
  uint uStack_1dc;
  undefined1 *local_1c4;
  int local_1c0;
  uint local_1bc;
  undefined1 local_1b8 [20];
  byte *apbStack_1a4 [2];
  uint uStack_19c;
  undefined4 local_184 [54];
  char *pcStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  void *apvStack_8c [2];
  uint uStack_84;
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
  puStack_8 = &LAB_00ca83d3;
  pvStack_c = ExceptionList;
  local_354 = 0;
  ExceptionList = &pvStack_c;
  FUN_00559fb0(local_184);
  local_4 = 0;
  puVar6 = FUN_0040d6b0(local_2a8,"scripts/",param_1);
  local_4._0_1_ = 1;
  FUN_0055be10(local_184,puVar6,'\x01');
  if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2a8[0]);
  }
  local_1c4 = local_1b8;
  local_1b8[0] = 0;
  local_1c0 = 0;
  local_1bc = 0x14;
  local_328 = local_31c;
  local_31c[0] = 0;
  local_324 = 0;
  local_320 = 0x14;
  _strncpy((char *)local_328,"script",6);
  local_324 = 6;
  local_328[6] = 0;
  local_4._0_1_ = 3;
  uVar7 = FUN_00558a50(local_184,&local_328,(undefined4 *)0x0);
  if (0x14 < local_320) {
                    /* WARNING: Subroutine does not return */
    _free(local_328);
  }
  if ((char)uVar7 == '\0') goto joined_r0x004c7559;
  local_328 = local_31c;
  local_31c[0] = 0;
  local_324 = 0;
  local_320 = 0x14;
  _strncpy((char *)local_328,"title",5);
  local_324 = 5;
  local_328[5] = 0;
  local_4._0_1_ = 4;
  puVar6 = FUN_005584e0(local_184,local_2a8,&local_328);
  FUN_004015d0(&local_1c4,(char *)*puVar6,puVar6[1]);
  if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2a8[0]);
  }
  if (0x14 < local_320) {
                    /* WARNING: Subroutine does not return */
    _free(local_328);
  }
  local_328 = local_31c;
  local_31c[0] = 0;
  local_324 = 0;
  local_320 = 0x14;
  _strncpy((char *)local_328,"genre",5);
  local_324 = 5;
  local_328[5] = 0;
  local_4._0_1_ = 5;
  FUN_005584e0(local_184,&local_288,&local_328);
  local_4 = CONCAT31(local_4._1_3_,7);
  if (0x14 < local_320) {
                    /* WARNING: Subroutine does not return */
    _free(local_328);
  }
  local_308 = local_2fc;
  local_2fc[0] = 0;
  local_304 = 0;
  local_300 = 0x14;
  _strncpy((char *)local_308,"",0);
  local_304 = 0;
  *local_308 = 0;
  local_354 = 1;
  pbVar12 = local_288;
  pbVar13 = local_308;
  do {
    bVar1 = *pbVar12;
    bVar14 = bVar1 < *pbVar13;
    if (bVar1 != *pbVar13) {
LAB_004c5d28:
      iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_004c5d2d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar12[1];
    bVar14 = bVar1 < pbVar13[1];
    if (bVar1 != pbVar13[1]) goto LAB_004c5d28;
    pbVar12 = pbVar12 + 2;
    pbVar13 = pbVar13 + 2;
  } while (bVar1 != 0);
  iVar8 = 0;
LAB_004c5d2d:
  if (iVar8 == 0) {
LAB_004c5e0b:
    bVar14 = true;
  }
  else {
    local_2c8 = local_2bc;
    local_2bc[0] = '\0';
    local_2c4 = 0;
    local_2c0 = 0x14;
    _strncpy(local_2c8,(char *)&PTR_LAB_00d1e868,3);
    ppcVar17 = &local_2c8;
    ppbVar16 = &local_288;
    local_2c4 = 3;
    local_2c8[3] = '\0';
    local_354 = 3;
    uVar7 = FUN_00401ec0(ppbVar16,ppcVar17);
    if ((char)uVar7 != '\0') goto LAB_004c5e0b;
    local_2e8 = local_2dc;
    local_2dc[0] = '\0';
    local_2e4 = 0;
    local_2e0 = 0x14;
    _strncpy(local_2e8,"genre_any",9);
    ppcVar17 = &local_2e8;
    ppbVar16 = &local_288;
    local_2e4 = 9;
    local_2e8[9] = '\0';
    local_354 = 7;
    uVar7 = FUN_00401ec0(ppbVar16,ppcVar17);
    bVar14 = false;
    if ((char)uVar7 != '\0') goto LAB_004c5e0b;
  }
  iVar8 = local_34c;
  if (((local_354 & 4) != 0) && (local_354 = local_354 & 0xfffffffb, 0x14 < local_2e0)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2e8);
  }
  if (((local_354 & 2) != 0) && (local_354 = local_354 & 0xfffffffd, 0x14 < local_2c0)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c8);
  }
  if (((local_354 & 1) != 0) && (local_354 = local_354 & 0xfffffffe, 0x14 < local_300)) {
                    /* WARNING: Subroutine does not return */
    _free(local_308);
  }
  if (bVar14) {
    puVar6 = (undefined4 *)(local_34c + 0x10c);
    (**(code **)(*(int *)(local_34c + 0x10c) + 4))();
    puVar6 = (undefined4 *)*puVar6;
    *(undefined4 *)(iVar8 + 0x120) = 0;
    (*(code *)*puVar6)();
  }
  else {
    local_350 = (undefined4 *)GenreKey_ToEnum(&local_288);
    iVar8 = local_34c;
    puVar6 = (undefined4 *)(local_34c + 0x10c);
    (**(code **)(*(int *)(local_34c + 0x10c) + 4))();
    puVar6 = (undefined4 *)*puVar6;
    *(undefined4 **)(iVar8 + 0x120) = local_350;
    (*(code *)*puVar6)();
  }
  local_308 = local_2fc;
  local_2fc[0] = 0;
  local_304 = 0;
  local_300 = 0x14;
  _strncpy((char *)local_308,"quality",7);
  local_304 = 7;
  local_308[7] = 0;
  local_4._0_1_ = 8;
  fVar15 = FUN_00558610(local_184,&local_308,0.5);
  if ((float10)0.0 <= fVar15) {
    if ((float10)1.0 < fVar15) {
      fVar15 = (float10)1.0;
    }
  }
  else {
    fVar15 = (float10)0.0;
  }
  local_350 = (undefined4 *)(float)fVar15;
  *(undefined4 **)(iVar8 + 0x124) = local_350;
  if (0x14 < local_300) {
                    /* WARNING: Subroutine does not return */
    _free(local_308);
  }
  if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
    _free(local_288);
  }
  local_308 = local_2fc;
  local_2fc[0] = 0;
  local_304 = 0;
  local_300 = 0x14;
  _strncpy((char *)local_308,"cast",4);
  local_304 = 4;
  local_308[4] = 0;
  local_4._0_1_ = 9;
  uVar7 = FUN_00558a50(local_184,&local_308,(undefined4 *)0x0);
  local_4._0_1_ = 2;
  if (0x14 < local_300) {
                    /* WARNING: Subroutine does not return */
    _free(local_308);
  }
  if (((char)uVar7 != '\0') && (cVar5 = FUN_00558bb0(local_184,6), cVar5 != '\0')) {
    cVar5 = FUN_00558bb0(local_184,0);
    while (cVar5 != '\0') {
      local_350 = operator_new(0xbc);
      local_4._0_1_ = 10;
      if (local_350 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_004c5890(local_350);
      }
      local_4._0_1_ = 2;
      local_350 = puVar6;
      puVar9 = FUN_005562f0(local_184,apvStack_8c,1);
      local_4._0_1_ = 0xb;
      uVar7 = FUN_00567d80(puVar9);
      puVar6[0x19] = uVar7;
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_8c[0]);
      }
      local_308 = local_2fc;
      local_2fc[0] = 0;
      local_304 = 0;
      local_300 = 0x14;
      _strncpy((char *)local_308,"gender",6);
      local_304 = 6;
      local_308[6] = 0;
      local_4._0_1_ = 0xc;
      FUN_005584e0(local_184,local_2a8,&local_308);
      if (0x14 < local_300) {
                    /* WARNING: Subroutine does not return */
        _free(local_308);
      }
      local_2c8 = local_2bc;
      local_2bc[0] = '\0';
      local_2c4 = 0;
      local_2c0 = 0x14;
      _strncpy(local_2c8,"costume",7);
      local_2c4 = 7;
      local_2c8[7] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0xf);
      FUN_005584e0(local_184,&pcStack_ac,&local_2c8);
      if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c8);
      }
      local_328 = local_31c;
      local_31c[0] = 0;
      local_324 = 0;
      local_320 = 0x14;
      _strncpy((char *)local_328,"gender_male",0xb);
      local_324 = 0xb;
      local_328[0xb] = 0;
      pbVar12 = local_2a8[0];
      pbVar13 = local_328;
      do {
        bVar1 = *pbVar12;
        bVar14 = bVar1 < *pbVar13;
        if (bVar1 != *pbVar13) {
LAB_004c6228:
          iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_004c622d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar14 = bVar1 < pbVar13[1];
        if (bVar1 != pbVar13[1]) goto LAB_004c6228;
        pbVar12 = pbVar12 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar1 != 0);
      iVar8 = 0;
LAB_004c622d:
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        local_2e8 = local_2dc;
        local_2dc[0] = '\0';
        local_2e4 = 0;
        local_2e0 = 0x14;
        _strncpy(local_2e8,"gender_female",0xd);
        local_2e4 = 0xd;
        local_2e8[0xd] = '\0';
        local_354 = local_354 | 8;
        uVar7 = FUN_00401ec0(local_2a8,&local_2e8);
        iVar8 = 2 - (uint)((char)uVar7 != '\0');
      }
      local_350[0x18] = iVar8;
      if (((local_354 & 8) != 0) && (local_354 = local_354 & 0xfffffff7, 0x14 < local_2e0)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e8);
      }
      if (0x14 < local_320) {
                    /* WARNING: Subroutine does not return */
        _free(local_328);
      }
      FUN_004015d0(local_350 + 0x1a,pcStack_ac,uStack_a8);
      pcStack_228 = acStack_21c;
      acStack_21c[0] = '\0';
      uStack_224 = 0;
      uStack_220 = 0x14;
      _strncpy(pcStack_228,"roletype",8);
      uStack_224 = 8;
      pcStack_228[8] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_005584e0(local_184,apbStack_1a4,&pcStack_228);
      if (0x14 < uStack_220) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_228);
      }
      local_288 = abStack_27c;
      abStack_27c[0] = 0;
      uStack_284 = 0;
      uStack_280 = 0x14;
      _strncpy((char *)local_288,"hero",4);
      uStack_284 = 4;
      local_288[4] = 0;
      pbVar12 = apbStack_1a4[0];
      pbVar13 = local_288;
      do {
        bVar1 = *pbVar12;
        bVar14 = bVar1 < *pbVar13;
        if (bVar1 != *pbVar13) {
LAB_004c6414:
          iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_004c6419;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar14 = bVar1 < pbVar13[1];
        if (bVar1 != pbVar13[1]) goto LAB_004c6414;
        pbVar12 = pbVar12 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar1 != 0);
      iVar8 = 0;
LAB_004c6419:
      if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
        _free(local_288);
      }
      if (iVar8 == 0) {
        local_350[0x22] = 1;
      }
      else {
        pcStack_248 = acStack_23c;
        acStack_23c[0] = '\0';
        uStack_244 = 0;
        uStack_240 = 0x14;
        _strncpy(pcStack_248,"villain",7);
        ppcVar17 = &pcStack_248;
        ppbVar16 = apbStack_1a4;
        uStack_244 = 7;
        pcStack_248[7] = '\0';
        uVar7 = FUN_00401ec0(ppbVar16,ppcVar17);
        if (0x14 < uStack_240) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_248);
        }
        if ((char)uVar7 == '\0') {
          pcStack_268 = acStack_25c;
          acStack_25c[0] = '\0';
          uStack_264 = 0;
          uStack_260 = 0x14;
          _strncpy(pcStack_268,"interest",8);
          ppcVar17 = &pcStack_268;
          ppbVar16 = apbStack_1a4;
          uStack_264 = 8;
          pcStack_268[8] = '\0';
          uVar7 = FUN_00401ec0(ppbVar16,ppcVar17);
          if (0x14 < uStack_260) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_268);
          }
          local_350[0x22] = -(uint)((char)uVar7 != '\0') & 3;
        }
        else {
          local_350[0x22] = 2;
        }
      }
      puVar6 = local_350;
      pcStack_348 = acStack_33c;
      acStack_33c[0] = '\0';
      uStack_344 = 0;
      uStack_340 = 0x14;
      _strncpy(pcStack_348,"rolename",8);
      uStack_344 = 8;
      pcStack_348[8] = '\0';
      local_4._0_1_ = 0x15;
      puVar9 = FUN_005584e0(local_184,apvStack_6c,&pcStack_348);
      local_4._0_1_ = 0x16;
      puVar9 = FUN_00568790(apvStack_4c,puVar9);
      FUN_004036d0(puVar6 + 0x23,(wchar_t *)*puVar9,puVar9[1]);
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_4c[0]);
      }
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_6c[0]);
      }
      if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_348);
      }
      piVar10 = puVar6 + 0x2b;
      piVar11 = (int *)(local_34c + 0x1c8);
      puVar6[0x2c] = piVar11;
      *piVar10 = *piVar11;
      *(int **)(*piVar11 + 4) = piVar10;
      *piVar11 = (int)piVar10;
      if (0x14 < uStack_19c) {
                    /* WARNING: Subroutine does not return */
        _free(apbStack_1a4[0]);
      }
      if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_ac);
      }
      local_4._0_1_ = 2;
      if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
        _free(local_2a8[0]);
      }
      cVar5 = FUN_00558bb0(local_184,2);
    }
  }
  pcStack_348 = acStack_33c;
  acStack_33c[0] = '\0';
  uStack_344 = 0;
  uStack_340 = 0x14;
  _strncpy(pcStack_348,"requires",8);
  uStack_344 = 8;
  pcStack_348[8] = '\0';
  local_4._0_1_ = 0x17;
  uVar7 = FUN_00558a50(local_184,&pcStack_348,(undefined4 *)0x0);
  if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_348);
  }
  if ((char)uVar7 != '\0') {
    pcStack_348 = acStack_33c;
    acStack_33c[0] = '\0';
    uStack_344 = 0;
    uStack_340 = 0x14;
    _strncpy(pcStack_348,"tech",4);
    uStack_344 = 4;
    pcStack_348[4] = '\0';
    local_4._0_1_ = 0x18;
    bVar14 = FUN_00558a90(local_184,&pcStack_348,(undefined4 *)0x1);
    local_4._0_1_ = 2;
    if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_348);
    }
    if (bVar14) {
      uVar7 = FUN_00558120(local_184,0);
      cVar5 = (char)uVar7;
      while (cVar5 != '\0') {
        FUN_00558de0(local_184,local_2a8);
        iVar8 = 1;
        bVar14 = true;
        pbVar12 = local_2a8[0];
        pbVar13 = &lpClass_00d16914;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar14 = *pbVar12 == *pbVar13;
          pbVar12 = pbVar12 + 1;
          pbVar13 = pbVar13 + 1;
        } while (bVar14);
        local_4._0_1_ = 0x19;
        if (!bVar14) {
          FUN_0043a2d0((void *)(local_34c + 0x154),local_2a8);
        }
        local_4._0_1_ = 2;
        if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
          _free(local_2a8[0]);
        }
        uVar7 = FUN_00558120(local_184,2);
        cVar5 = (char)uVar7;
      }
    }
    FUN_00558bb0(local_184,5);
    pcStack_348 = acStack_33c;
    acStack_33c[0] = '\0';
    uStack_344 = 0;
    uStack_340 = 0x14;
    _strncpy(pcStack_348,"sets",4);
    uStack_344 = 4;
    pcStack_348[4] = '\0';
    local_4._0_1_ = 0x1a;
    bVar14 = FUN_00558a90(local_184,&pcStack_348,(undefined4 *)0x1);
    local_4._0_1_ = 2;
    if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_348);
    }
    if (bVar14) {
      uVar7 = FUN_00558120(local_184,0);
      cVar5 = (char)uVar7;
      while (cVar5 != '\0') {
        FUN_00558de0(local_184,local_2a8);
        iVar8 = 1;
        bVar14 = true;
        pbVar12 = local_2a8[0];
        pbVar13 = &lpClass_00d16914;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar14 = *pbVar12 == *pbVar13;
          pbVar12 = pbVar12 + 1;
          pbVar13 = pbVar13 + 1;
        } while (bVar14);
        local_4._0_1_ = 0x1b;
        if (!bVar14) {
          FUN_0043a2d0((void *)(local_34c + 0x164),local_2a8);
        }
        local_4._0_1_ = 2;
        if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
          _free(local_2a8[0]);
        }
        uVar7 = FUN_00558120(local_184,2);
        cVar5 = (char)uVar7;
      }
    }
    FUN_00558bb0(local_184,5);
    pcStack_348 = acStack_33c;
    acStack_33c[0] = '\0';
    uStack_344 = 0;
    uStack_340 = 0x14;
    _strncpy(pcStack_348,"costumes",8);
    uStack_344 = 8;
    pcStack_348[8] = '\0';
    local_4._0_1_ = 0x1c;
    bVar14 = FUN_00558a90(local_184,&pcStack_348,(undefined4 *)0x1);
    local_4._0_1_ = 2;
    if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_348);
    }
    if (bVar14) {
      uVar7 = FUN_00558120(local_184,0);
      cVar5 = (char)uVar7;
      while (cVar5 != '\0') {
        FUN_00558de0(local_184,local_2a8);
        iVar8 = 1;
        bVar14 = true;
        pbVar12 = local_2a8[0];
        pbVar13 = &lpClass_00d16914;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar14 = *pbVar12 == *pbVar13;
          pbVar12 = pbVar12 + 1;
          pbVar13 = pbVar13 + 1;
        } while (bVar14);
        local_4._0_1_ = 0x1d;
        if (!bVar14) {
          FUN_0043a2d0((void *)(local_34c + 0x144),local_2a8);
        }
        local_4._0_1_ = 2;
        if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
          _free(local_2a8[0]);
        }
        uVar7 = FUN_00558120(local_184,2);
        cVar5 = (char)uVar7;
      }
    }
  }
  pcStack_348 = acStack_33c;
  acStack_33c[0] = '\0';
  uStack_344 = 0;
  uStack_340 = 0x14;
  _strncpy(pcStack_348,"shot",4);
  uStack_344 = 4;
  pcStack_348[4] = '\0';
  local_4._0_1_ = 0x1e;
  uVar7 = FUN_00558a50(local_184,&pcStack_348,(undefined4 *)0x0);
  local_4._0_1_ = 2;
  if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_348);
  }
  if (((char)uVar7 != '\0') && (cVar5 = FUN_00558bb0(local_184,6), cVar5 != '\0')) {
    cVar5 = FUN_00558bb0(local_184,0);
    while (cVar5 != '\0') {
      local_350 = operator_new(0x110);
      local_4._0_1_ = 0x1f;
      if (local_350 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_004c5700(local_350);
      }
      pcStack_348 = acStack_33c;
      acStack_33c[0] = '\0';
      uStack_344 = 0;
      uStack_340 = 0x14;
      local_350 = puVar6;
      _strncpy(pcStack_348,"set",3);
      uStack_344 = 3;
      pcStack_348[3] = '\0';
      local_4._0_1_ = 0x20;
      bVar14 = FUN_00558a90(local_184,&pcStack_348,(undefined4 *)0x1);
      if (0x14 < uStack_340) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_348);
      }
      if (bVar14) {
        pcStack_268 = acStack_25c;
        local_354 = 1;
        acStack_25c[0] = '\0';
        uStack_264 = 0;
        uStack_260 = 0x14;
        _strncpy(pcStack_268,"0",1);
        uStack_264 = 1;
        pcStack_268[1] = '\0';
        local_4._0_1_ = 0x21;
        FUN_005584e0(local_184,&local_328,&pcStack_268);
        local_4._0_1_ = 0x23;
        if (0x14 < uStack_260) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_268);
        }
        while (local_4._0_1_ = 0x23, local_324 != 0) {
          local_4._0_1_ = 0x23;
          bVar14 = FUN_00430950(&local_328,"");
          if (!bVar14) break;
          iVar8 = puVar6[0x19];
          if ((iVar8 == 0) ||
             ((uint)(puVar6[0x1b] - iVar8 >> 5) <= (uint)(puVar6[0x1a] - iVar8 >> 5))) {
            FUN_00439fd0(puVar6 + 0x18,(int *)puVar6[0x1a],1,&local_328);
          }
          else {
            piVar10 = (int *)puVar6[0x1a];
            FUN_00439ea0(piVar10,1,&local_328);
            puVar6[0x1a] = piVar10 + 8;
          }
          puVar6 = FUN_00569d60(apvStack_4c,local_354);
          local_4 = CONCAT31(local_4._1_3_,0x24);
          puVar6 = FUN_005584e0(local_184,apvStack_6c,puVar6);
          uVar2 = puVar6[1];
          pcVar3 = (char *)*puVar6;
          if (local_320 <= uVar2) {
            if (0x14 < local_320) {
                    /* WARNING: Subroutine does not return */
              _free(local_328);
            }
            local_320 = uVar2 + 0x20 & 0xffffffe0;
            local_328 = _malloc(local_320);
          }
          _strncpy((char *)local_328,pcVar3,uVar2);
          local_328[uVar2] = 0;
          local_324 = uVar2;
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_6c[0]);
          }
          local_4._0_1_ = 0x23;
          if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          local_354 = local_354 + 1;
          puVar6 = local_350;
        }
        FUN_00558bb0(local_184,5);
        if (0x14 < local_320) {
                    /* WARNING: Subroutine does not return */
          _free(local_328);
        }
      }
      pcStack_248 = acStack_23c;
      acStack_23c[0] = '\0';
      uStack_244 = 0;
      uStack_240 = 0x14;
      _strncpy(pcStack_248,"scene",5);
      uStack_244 = 5;
      pcStack_248[5] = '\0';
      local_4._0_1_ = 0x25;
      puVar9 = FUN_005584e0(local_184,apvStack_8c,&pcStack_248);
      FUN_004015d0(puVar6 + 0x1c,(char *)*puVar9,puVar9[1]);
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_8c[0]);
      }
      if (0x14 < uStack_240) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_248);
      }
      pcStack_228 = acStack_21c;
      acStack_21c[0] = '\0';
      uStack_224 = 0;
      uStack_220 = 0x14;
      _strncpy(pcStack_228,"backdrop",8);
      uStack_224 = 8;
      pcStack_228[8] = '\0';
      local_4._0_1_ = 0x26;
      puVar9 = FUN_005584e0(local_184,&pcStack_ac,&pcStack_228);
      FUN_004015d0(puVar6 + 0x2c,(char *)*puVar9,puVar9[1]);
      if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_ac);
      }
      if (0x14 < uStack_220) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_228);
      }
      local_308 = local_2fc;
      local_2fc[0] = 0;
      local_304 = 0;
      local_300 = 0x14;
      _strncpy((char *)local_308,"overlay",7);
      local_304 = 7;
      local_308[7] = 0;
      local_4._0_1_ = 0x27;
      puVar9 = FUN_005584e0(local_184,apbStack_1a4,&local_308);
      FUN_004015d0(puVar6 + 0x38,(char *)*puVar9,puVar9[1]);
      if (0x14 < uStack_19c) {
                    /* WARNING: Subroutine does not return */
        _free(apbStack_1a4[0]);
      }
      if (0x14 < local_300) {
                    /* WARNING: Subroutine does not return */
        _free(local_308);
      }
      local_2c8 = local_2bc;
      local_2bc[0] = '\0';
      local_2c4 = 0;
      local_2c0 = 0x14;
      _strncpy(local_2c8,"part",4);
      local_2c4 = 4;
      local_2c8[4] = '\0';
      local_4._0_1_ = 0x28;
      bVar14 = FUN_00558a90(local_184,&local_2c8,(undefined4 *)0x1);
      local_4._0_1_ = 2;
      if (0x14 < local_2c0) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c8);
      }
      if (bVar14) {
        uVar7 = FUN_00558120(local_184,0);
        cVar5 = (char)uVar7;
        while (cVar5 != '\0') {
          FUN_00558590(local_184,local_2a8,4);
          iVar8 = 1;
          bVar14 = true;
          pbVar12 = local_2a8[0];
          pbVar13 = &lpClass_00d16914;
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar14 = *pbVar12 == *pbVar13;
            pbVar12 = pbVar12 + 1;
            pbVar13 = pbVar13 + 1;
          } while (bVar14);
          local_4._0_1_ = 0x29;
          if (!bVar14) {
            local_354 = FUN_00567d80(local_2a8);
            iVar8 = local_350[0x25];
            if ((iVar8 == 0) ||
               ((uint)(local_350[0x27] - iVar8 >> 2) <= (uint)(local_350[0x26] - iVar8 >> 2))) {
              FUN_004c0700(local_350 + 0x24,(undefined4 *)local_350[0x26],1,&local_354);
            }
            else {
              puVar4 = (uint *)local_350[0x26];
              *puVar4 = local_354;
              local_350[0x26] = puVar4 + 1;
            }
          }
          local_4._0_1_ = 2;
          if (0x14 < local_2a0) {
                    /* WARNING: Subroutine does not return */
            _free(local_2a8[0]);
          }
          uVar7 = FUN_00558120(local_184,2);
          cVar5 = (char)uVar7;
        }
        FUN_00558bb0(local_184,5);
        puVar6 = local_350;
      }
      local_2e8 = local_2dc;
      local_2dc[0] = '\0';
      local_2e4 = 0;
      local_2e0 = 0x14;
      _strncpy(local_2e8,"sliders",7);
      local_2e4 = 7;
      local_2e8[7] = '\0';
      local_4._0_1_ = 0x2a;
      bVar14 = FUN_00558a90(local_184,&local_2e8,(undefined4 *)0x1);
      local_4._0_1_ = 2;
      if (0x14 < local_2e0) {
                    /* WARNING: Subroutine does not return */
        _free(local_2e8);
      }
      if (bVar14) {
        uVar7 = FUN_00558120(local_184,0);
        cVar5 = (char)uVar7;
        while (cVar5 != '\0') {
          pcStack_208 = acStack_1fc;
          acStack_1fc[0] = '\0';
          uStack_204 = 0;
          uStack_200 = 0x14;
          local_4 = CONCAT31(local_4._1_3_,0x2b);
          puVar6 = FUN_00558de0(local_184,apvStack_2c);
          uVar2 = puVar6[1];
          pcVar3 = (char *)*puVar6;
          if (uStack_200 <= uVar2) {
            if (0x14 < uStack_200) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_208);
            }
            uStack_200 = uVar2 + 0x20 & 0xffffffe0;
            pcStack_208 = _malloc(uStack_200);
          }
          _strncpy(pcStack_208,pcVar3,uVar2);
          pcStack_208[uVar2] = '\0';
          uStack_204 = uVar2;
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          fVar15 = FUN_005586b0(local_184,4,0.0);
          fStack_1e8 = (float)fVar15;
          FUN_004c1760(local_350 + 0x28,&pcStack_208);
          local_4._0_1_ = 2;
          if (0x14 < uStack_200) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_208);
          }
          uVar7 = FUN_00558120(local_184,2);
          cVar5 = (char)uVar7;
        }
        FUN_00558bb0(local_184,5);
        puVar6 = local_350;
      }
      local_288 = abStack_27c;
      abStack_27c[0] = 0;
      uStack_284 = 0;
      uStack_280 = 0x14;
      _strncpy((char *)local_288,"props",5);
      uStack_284 = 5;
      local_288[5] = 0;
      local_4._0_1_ = 0x2c;
      bVar14 = FUN_00558a90(local_184,&local_288,(undefined4 *)0x1);
      local_4._0_1_ = 2;
      if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
        _free(local_288);
      }
      if (bVar14) {
        uVar7 = FUN_00558120(local_184,0);
        if ((char)uVar7 != '\0') {
          do {
            puVar9 = FUN_00558590(local_184,apvStack_1e4,4);
            local_4._0_1_ = 0x2d;
            FUN_0043a2d0(puVar6 + 0x34,puVar9);
            local_4._0_1_ = 2;
            if (0x14 < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_1e4[0]);
            }
            uVar7 = FUN_00558120(local_184,2);
          } while ((char)uVar7 != '\0');
        }
        FUN_00558bb0(local_184,5);
      }
      piVar11 = (int *)(local_34c + 0x194);
      piVar10 = puVar6 + 0x40;
      puVar6[0x41] = piVar11;
      *piVar10 = *piVar11;
      *(int **)(*piVar11 + 4) = piVar10;
      *piVar11 = (int)piVar10;
      cVar5 = FUN_00558bb0(local_184,2);
    }
  }
  if (local_1c0 == 0) {
    if (*(int *)(local_34c + 0x120) == 0) {
      FUN_005202b0();
      iVar8 = AudienceTaste_GetMostPopularGenre();
      piVar10 = FUN_005be730((int *)apvStack_1e4,iVar8);
      goto LAB_004c750f;
    }
    piVar10 = FUN_005be730((int *)apvStack_1e4,*(int *)(local_34c + 0x120));
    FUN_004036d0((void *)(local_34c + 0xb4),(wchar_t *)*piVar10,piVar10[1]);
  }
  else {
    piVar10 = FUN_009b5030(apvStack_1e4,&local_1c4);
LAB_004c750f:
    FUN_004036d0((void *)(local_34c + 0xb4),(wchar_t *)*piVar10,piVar10[1]);
  }
  if (10 < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_1e4[0]);
  }
joined_r0x004c7559:
  if (local_1bc < 0x15) {
    local_4 = 0xffffffff;
    FUN_00558920(local_184);
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1c4);
}


//// FUNCTION FUN_004c75a0 @ 004c75a0 ////

void __fastcall FUN_004c75a0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  void **ppvVar12;
  undefined4 *puStack_64;
  undefined4 *puStack_54;
  void *local_50 [2];
  uint local_48;
  char *pcStack_30;
  uint uStack_2c;
  uint uStack_28;
  char acStack_24 [20];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca83fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = FUN_0045f620(*(void **)(param_1 + 0xe8),local_50);
  FUN_004036d0((void *)(param_1 + 0xb4),(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[0]);
  }
  iVar2 = FUN_005b6b90(*(int *)(param_1 + 0xe8));
  (**(code **)(*(int *)(param_1 + 0x10c) + 4))();
  *(int *)(param_1 + 0x120) = iVar2;
  (*(code *)**(undefined4 **)(param_1 + 0x10c))();
  FUN_004bf100(param_1);
  FUN_004bf090(param_1);
  iVar2 = FUN_005b2220(*(int *)(param_1 + 0xe8));
  iVar2 = *(int *)(iVar2 + 100);
  iVar3 = FUN_005b2220(*(int *)(param_1 + 0xe8));
  if (iVar2 != *(int *)(iVar3 + 0x68)) {
    do {
      iVar3 = *(int *)(iVar2 + 0x14);
      if (iVar3 != 0) {
        for (iVar4 = *(int *)(param_1 + 0x1bc); iVar4 != param_1 + 0x1c8;
            iVar4 = *(int *)(iVar4 + 4)) {
          if (*(int *)(*(int *)(iVar4 + 8) + 100) == *(int *)(iVar3 + 0x8c)) goto LAB_004c7740;
        }
        puStack_54 = operator_new(0xbc);
        puVar1 = (undefined4 *)0x0;
        uStack_4 = 0;
        if (puStack_54 != (undefined4 *)0x0) {
          puVar1 = FUN_004c5890(puStack_54);
        }
        puVar1[0x19] = *(undefined4 *)(iVar3 + 0x8c);
        uStack_4 = 0xffffffff;
        iVar4 = FUN_005a6470(iVar3);
        if (iVar4 == 0) {
          uVar5 = 2;
        }
        else {
          iVar4 = FUN_005a6470(iVar3);
          uVar5 = *(undefined4 *)(iVar4 + 0x4a0);
        }
        puVar1[0x18] = uVar5;
        puVar1[0x22] = *(undefined4 *)(iVar3 + 0x88);
        FUN_004036d0(puVar1 + 0x23,*(wchar_t **)(iVar3 + 0x60),*(uint *)(iVar3 + 100));
        iVar4 = FUN_005a6430(iVar3);
        if (iVar4 == 0) {
          uVar11 = 0;
          pcVar10 = "";
        }
        else {
          iVar3 = FUN_005a6430(iVar3);
          uVar11 = *(uint *)(iVar3 + 0x7c);
          pcVar10 = *(char **)(iVar3 + 0x78);
        }
        FUN_004015d0(puVar1 + 0x1a,pcVar10,uVar11);
        piVar8 = puVar1 + 0x2b;
        piVar9 = (int *)(param_1 + 0x1c8);
        puVar1[0x2c] = piVar9;
        *piVar8 = *piVar9;
        *(int **)(*piVar9 + 4) = piVar8;
        *piVar9 = (int)piVar8;
      }
LAB_004c7740:
      iVar2 = iVar2 + 0x18;
      iVar3 = FUN_005b2220(*(int *)(param_1 + 0xe8));
    } while (iVar2 != *(int *)(iVar3 + 0x68));
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xe8) + 0xac);
  if (iVar2 != *(int *)(param_1 + 0xe8) + 0xb8) {
    do {
      this = *(void **)(iVar2 + 8);
      if ((this != (void *)0x0) && (iVar3 = FUN_004df4a0((int)this), iVar3 != 0)) {
        puStack_54 = operator_new(0x110);
        uStack_4 = 1;
        if (puStack_54 == (undefined4 *)0x0) {
          puStack_64 = (undefined4 *)0x0;
        }
        else {
          puStack_64 = FUN_004c5700(puStack_54);
        }
        uStack_4 = 0xffffffff;
        iVar3 = FUN_004df220((int)this);
        puVar1 = (undefined4 *)FUN_00528450(iVar3);
        iVar3 = puStack_64[0x19];
        if ((iVar3 == 0) ||
           ((uint)(puStack_64[0x1b] - iVar3 >> 5) <= (uint)(puStack_64[0x1a] - iVar3 >> 5))) {
          FUN_00439fd0(puStack_64 + 0x18,(int *)puStack_64[0x1a],1,puVar1);
        }
        else {
          piVar8 = (int *)puStack_64[0x1a];
          FUN_00439ea0(piVar8,1,puVar1);
          puStack_64[0x1a] = piVar8 + 8;
        }
        ppvVar12 = local_50;
        pvVar6 = (void *)FUN_004df4a0((int)this);
        puVar1 = FUN_004b63b0(pvVar6,ppvVar12);
        uVar11 = puVar1[1];
        pcVar10 = (char *)*puVar1;
        if ((uint)puStack_64[0x1e] <= uVar11) {
          if (0x14 < (uint)puStack_64[0x1e]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puStack_64[0x1c]);
          }
          uVar7 = uVar11 + 0x20 & 0xffffffe0;
          puStack_64[0x1e] = uVar7;
          pvVar6 = _malloc(uVar7);
          puStack_64[0x1c] = pvVar6;
        }
        _strncpy((char *)puStack_64[0x1c],pcVar10,uVar11);
        puStack_64[0x1d] = uVar11;
        *(undefined1 *)(uVar11 + puStack_64[0x1c]) = 0;
        if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_50[0]);
        }
        iVar3 = FUN_004de100((int)this);
        iVar3 = *(int *)(iVar3 + 8);
        iVar4 = FUN_004de100((int)this);
        if (iVar3 != iVar4 + 0x14) {
          do {
            puStack_54 = (undefined4 *)FUN_0048c980(*(int *)(iVar3 + 8));
            iVar4 = puStack_64[0x25];
            if ((iVar4 == 0) ||
               ((uint)(puStack_64[0x27] - iVar4 >> 2) <= (uint)(puStack_64[0x26] - iVar4 >> 2))) {
              FUN_004c0700(puStack_64 + 0x24,(undefined4 *)puStack_64[0x26],1,&puStack_54);
            }
            else {
              puVar1 = (undefined4 *)puStack_64[0x26];
              *puVar1 = puStack_54;
              puStack_64[0x26] = puVar1 + 1;
            }
            iVar3 = *(int *)(iVar3 + 4);
            iVar4 = FUN_004de100((int)this);
          } while (iVar3 != iVar4 + 0x14);
        }
        puVar1 = *(undefined4 **)((int)this + 0xbc);
        if (puVar1 != *(undefined4 **)((int)this + 0xc0)) {
          do {
            pcStack_30 = acStack_24;
            acStack_24[0] = '\0';
            uStack_2c = 0;
            uStack_28 = 0x14;
            uVar11 = puVar1[1];
            pcVar10 = (char *)*puVar1;
            uStack_4 = 2;
            if (0x13 < uVar11) {
              uStack_28 = uVar11 + 0x20 & 0xffffffe0;
              pcStack_30 = _malloc(uStack_28);
            }
            _strncpy(pcStack_30,pcVar10,uVar11);
            pcStack_30[uVar11] = '\0';
            uStack_10 = puVar1[8];
            uStack_2c = uVar11;
            FUN_004c1760(puStack_64 + 0x28,&pcStack_30);
            uStack_4 = 0xffffffff;
            if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_30);
            }
            puVar1 = puVar1 + 9;
          } while (puVar1 != *(undefined4 **)((int)this + 0xc0));
        }
        uVar11 = *(uint *)((int)this + 0x104);
        pcVar10 = *(char **)((int)this + 0x100);
        if ((uint)puStack_64[0x2e] <= uVar11) {
          if (0x14 < (uint)puStack_64[0x2e]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puStack_64[0x2c]);
          }
          uVar7 = uVar11 + 0x20 & 0xffffffe0;
          puStack_64[0x2e] = uVar7;
          pvVar6 = _malloc(uVar7);
          puStack_64[0x2c] = pvVar6;
        }
        _strncpy((char *)puStack_64[0x2c],pcVar10,uVar11);
        puStack_64[0x2d] = uVar11;
        *(undefined1 *)(uVar11 + puStack_64[0x2c]) = 0;
        iVar4 = 0;
        iVar3 = FUN_004de170((int)this);
        if (0 < iVar3) {
          do {
            puVar1 = (undefined4 *)FUN_004e2a60(this,iVar4);
            iVar3 = puStack_64[0x35];
            if ((iVar3 == 0) ||
               ((uint)(puStack_64[0x37] - iVar3 >> 5) <= (uint)(puStack_64[0x36] - iVar3 >> 5))) {
              FUN_00439fd0(puStack_64 + 0x34,(int *)puStack_64[0x36],1,puVar1);
            }
            else {
              piVar8 = (int *)puStack_64[0x36];
              FUN_00439ea0(piVar8,1,puVar1);
              puStack_64[0x36] = piVar8 + 8;
            }
            iVar4 = iVar4 + 1;
            iVar3 = FUN_004de170((int)this);
          } while (iVar4 < iVar3);
        }
        piVar8 = puStack_64 + 0x40;
        piVar9 = (int *)(param_1 + 0x194);
        puStack_64[0x41] = piVar9;
        *piVar8 = *piVar9;
        *(int **)(*piVar9 + 4) = piVar8;
        *piVar9 = (int)piVar8;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != *(int *)(param_1 + 0xe8) + 0xb8);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004c7b40 @ 004c7b40 ////

undefined4 * __thiscall FUN_004c7b40(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8463;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043dd00(this);
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x38;
  }
  *(undefined ***)((int)this + 0x38) = &PTR_FUN_00d1c4e4;
  *(undefined1 *)((int)this + 0x3c) = *(undefined1 *)(iVar1 + 4);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined ***)this = &PTR_FUN_00d1e790;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d1e770;
  FUN_004c0f60((void *)((int)this + 0x60),param_1 + 0x60);
  *(undefined4 *)((int)this + 0x70) = (undefined1 *)((int)this + 0x7c);
  *(undefined1 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x70),*(char **)(param_1 + 0x70),*(uint *)(param_1 + 0x74)
              );
  local_4._0_1_ = 3;
  FUN_004c1040((void *)((int)this + 0x90),param_1 + 0x90);
  local_4._0_1_ = 4;
  FUN_004c1110((void *)((int)this + 0xa0),param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xb0) = (undefined1 *)((int)this + 0xbc);
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xb0),*(char **)(param_1 + 0xb0),*(uint *)(param_1 + 0xb4)
              );
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004c0f60((void *)((int)this + 0xd0),param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xe0) = (undefined1 *)((int)this + 0xec);
  *(undefined1 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xe0),*(char **)(param_1 + 0xe0),*(uint *)(param_1 + 0xe4)
              );
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScriptDefinition_CreateAndLoad @ 004c7cb0 ////

undefined4 * __cdecl ScriptDefinition_CreateAndLoad(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca847b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x1f0);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = ScriptDefinition_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_004015d0(puVar1 + 0x3b,(char *)*param_1,param_1[1]);
  if (param_1[1] != 0) {
    ScriptDefinition_LoadFromIni(param_1);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_004c7d80 @ 004c7d80 ////

/* WARNING: Removing unreachable block (ram,0x004c7ff0) */

undefined2 __fastcall FUN_004c7d80(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  void *this;
  undefined4 *this_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  char *_Source;
  uint _Count;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  int local_2a8;
  byte *local_29c;
  uint local_294;
  byte local_290 [20];
  char *local_27c;
  undefined4 local_278;
  uint local_274;
  char local_270 [20];
  char *local_25c;
  uint local_258;
  uint local_254;
  void *local_23c [2];
  uint local_234;
  undefined4 local_21c [28];
  byte *local_1ac;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca84ec;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xe8) != 0) {
    ExceptionList = &local_c;
    uVar4 = FUN_005b60b0(*(int *)(param_1 + 0xe8));
    ExceptionList = local_c;
    return uVar4;
  }
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    local_27c = local_270;
    local_270[0] = '\0';
    local_278 = 0;
    local_274 = 0x20;
    local_27c = _malloc(0x20);
    _strncpy(local_27c,"scene/stuntscenecategories",0x1a);
    local_278 = 0x1a;
    local_27c[0x1a] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    this_00 = FUN_0055c6d0(this,&local_27c,1);
  }
  local_4 = 0xffffffff;
  if ((this != (void *)0x0) && (0x14 < local_274)) {
                    /* WARNING: Subroutine does not return */
    _free(local_27c);
  }
  iVar2 = *(int *)(param_1 + 0x188);
  do {
    if (iVar2 == param_1 + 0x194) {
      uVar5 = (ushort)iVar2;
      if (this_00 != (undefined4 *)0x0) {
        uVar5 = (**(code **)*this_00)(1);
      }
      ExceptionList = local_c;
      return uVar5 & 0xff00;
    }
    FUN_004c7b40(local_21c,*(int *)(iVar2 + 8));
    local_4 = 3;
    local_2a8 = 0;
    do {
      puVar6 = FUN_004b6940(local_23c,local_2a8);
      local_4._0_1_ = 4;
      uVar7 = FUN_00558a50(this_00,puVar6,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
        _free(local_23c[0]);
      }
      if ((char)uVar7 != '\0') {
        uVar7 = FUN_00558120(this_00,0);
        cVar3 = (char)uVar7;
        while (cVar3 != '\0') {
          FUN_00558590(this_00,&local_25c,4);
          local_29c = local_290;
          local_290[0] = 0;
          local_294 = 0x14;
          local_4 = CONCAT31(local_4._1_3_,6);
          if (local_258 < 0x100) {
            pcVar8 = local_25c;
            do {
              cVar3 = *pcVar8;
              pcVar8[(int)(local_10c + -(int)local_25c)] = cVar3;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
            _Source = _strtok(local_10c,",");
            pcVar8 = _Source;
            do {
              cVar3 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
            _Count = (int)pcVar8 - (int)(_Source + 1);
            if (0x13 < _Count) {
              local_294 = _Count + 0x20 & 0xffffffe0;
              local_29c = _malloc(local_294);
            }
            _strncpy((char *)local_29c,_Source,_Count);
            local_29c[_Count] = 0;
            pbVar9 = local_29c;
            pbVar11 = local_1ac;
            do {
              bVar1 = *pbVar9;
              bVar12 = bVar1 < *pbVar11;
              if (bVar1 != *pbVar11) {
LAB_004c8064:
                iVar10 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_004c8069;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar9[1];
              bVar12 = bVar1 < pbVar11[1];
              if (bVar1 != pbVar11[1]) goto LAB_004c8064;
              pbVar9 = pbVar9 + 2;
              pbVar11 = pbVar11 + 2;
            } while (bVar1 != 0);
            iVar10 = 0;
LAB_004c8069:
            if (iVar10 == 0) {
              if (this_00 != (undefined4 *)0x0) {
                (**(code **)*this_00)(1);
              }
              if (local_294 < 0x15) {
                if (local_254 < 0x15) {
                  local_4 = 0xffffffff;
                  uVar7 = FUN_004c0e00(local_21c);
                  ExceptionList = local_c;
                  return (short)CONCAT31((int3)((uint)uVar7 >> 8),1);
                }
                    /* WARNING: Subroutine does not return */
                _free(local_25c);
              }
                    /* WARNING: Subroutine does not return */
              _free(local_29c);
            }
            if (0x14 < local_294) {
                    /* WARNING: Subroutine does not return */
              _free(local_29c);
            }
            local_4 = CONCAT31(local_4._1_3_,3);
            if (0x14 < local_254) {
                    /* WARNING: Subroutine does not return */
              _free(local_25c);
            }
          }
          else {
            local_4 = CONCAT31(local_4._1_3_,3);
            if (0x14 < local_254) {
                    /* WARNING: Subroutine does not return */
              _free(local_25c);
            }
          }
          uVar7 = FUN_00558120(this_00,2);
          cVar3 = (char)uVar7;
        }
      }
      local_2a8 = local_2a8 + 1;
    } while (local_2a8 < 10);
    local_4 = 0xffffffff;
    FUN_004c0e00(local_21c);
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


//// FUNCTION FUN_004c8150 @ 004c8150 ////

void __thiscall FUN_004c8150(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  float fVar10;
  undefined4 *local_2d8;
  char *local_2d4;
  undefined4 local_2d0;
  uint local_2cc;
  char local_2c8 [20];
  int local_2b4;
  void *local_2b0;
  char *local_2ac;
  undefined4 local_2a8;
  uint local_2a4;
  char local_2a0 [20];
  char *local_28c;
  uint local_288;
  uint local_284;
  char local_280 [20];
  char *local_26c;
  undefined4 local_268;
  uint local_264;
  char local_260 [20];
  char *local_24c;
  undefined4 local_248;
  uint local_244;
  char local_240 [20];
  char *local_22c;
  undefined4 local_228;
  uint local_224;
  char local_220 [20];
  char *local_20c;
  undefined4 local_208;
  uint local_204;
  char local_200 [20];
  char *local_1ec;
  undefined4 local_1e8;
  uint local_1e4;
  char local_1e0 [20];
  char *local_1cc;
  undefined4 local_1c8;
  uint local_1c4;
  char local_1c0 [20];
  char *local_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  char local_1a0 [20];
  char *local_18c;
  int local_188;
  char *local_184;
  undefined4 local_180;
  uint local_17c;
  char local_178 [20];
  char *local_164;
  undefined4 local_160;
  uint local_15c;
  char local_158 [20];
  char *local_144;
  undefined4 local_140;
  uint local_13c;
  char local_138 [20];
  void *local_124 [2];
  uint local_11c;
  undefined4 local_104 [54];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca86bd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_2b0 = this;
  FUN_00559fb0(local_104);
  local_4 = 0;
  if (*(int *)((int)this + 0xe8) != 0) {
    FUN_004c75a0((int)this);
  }
  local_28c = local_280;
  local_280[0] = '\0';
  local_288 = 0;
  local_284 = 0x14;
  _strncpy(local_28c,"script",6);
  local_288 = 6;
  local_28c[6] = '\0';
  local_4._0_1_ = 1;
  FUN_00558a50(local_104,&local_28c,(undefined4 *)0x1);
  if (0x14 < local_284) {
                    /* WARNING: Subroutine does not return */
    _free(local_28c);
  }
  local_2ac = local_2a0;
  local_2a0[0] = '\0';
  local_2a8 = 0;
  local_2a4 = 0x14;
  _strncpy(local_2ac,"",0);
  local_2a8 = 0;
  *local_2ac = '\0';
  local_28c = local_280;
  local_280[0] = '\0';
  local_288 = 0;
  local_284 = 0x14;
  _strncpy(local_28c,"title",5);
  local_288 = 5;
  local_28c[5] = '\0';
  local_4._0_1_ = 3;
  FUN_00557fa0(local_104,&local_28c,&local_2ac);
  if (0x14 < local_284) {
                    /* WARNING: Subroutine does not return */
    _free(local_28c);
  }
  if (0x14 < local_2a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_2ac);
  }
  local_2ac = local_2a0;
  local_2a0[0] = '\0';
  local_2a8 = 0;
  local_2a4 = 0x14;
  _strncpy(local_2ac,"genre",5);
  local_2a8 = 5;
  local_2ac[5] = '\0';
  local_4._0_1_ = 4;
  puVar4 = (undefined4 *)FUN_00449b40(*(int *)((int)this + 0x120));
  FUN_00557fa0(local_104,&local_2ac,puVar4);
  if (0x14 < local_2a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_2ac);
  }
  local_2ac = local_2a0;
  local_2a0[0] = '\0';
  local_2a8 = 0;
  local_2a4 = 0x14;
  _strncpy(local_2ac,"quality",7);
  local_2a8 = 7;
  local_2ac[7] = '\0';
  local_4._0_1_ = 5;
  FUN_00557fe0(local_104,&local_2ac,*(float *)((int)this + 0x128));
  if (0x14 < local_2a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_2ac);
  }
  local_2ac = local_2a0;
  local_2a0[0] = '\0';
  local_2a8 = 0;
  local_2a4 = 0x14;
  _strncpy(local_2ac,"cast",4);
  local_2a8 = 4;
  local_2ac[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00558a50(local_104,&local_2ac,(undefined4 *)0x1);
  if (0x14 < local_2a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_2ac);
  }
  local_2b4 = *(int *)((int)this + 0x1bc);
  if (local_2b4 != (int)this + 0x1c8) {
    do {
      local_2ac = local_2a0;
      local_2a0[0] = '\0';
      local_2a8 = 0;
      local_2a4 = 0x14;
      _strncpy(local_2ac,"cast",4);
      local_2a8 = 4;
      local_2ac[4] = '\0';
      local_4._0_1_ = 7;
      FUN_00558a50(local_104,&local_2ac,(undefined4 *)0x1);
      iVar8 = local_2b4;
      local_4._0_1_ = 0;
      if (0x14 < local_2a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_2ac);
      }
      puVar4 = FUN_00569d60(local_2c,*(undefined4 *)(*(int *)(local_2b4 + 8) + 100));
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_00558a90(local_104,puVar4,(undefined4 *)0x1);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (*(int *)(*(int *)(iVar8 + 8) + 0x60) == 0) {
        pcVar9 = "gender_male";
      }
      else {
        pcVar9 = "gender_female";
        if (*(int *)(*(int *)(iVar8 + 8) + 0x60) != 1) {
          pcVar9 = "";
        }
      }
      local_28c = local_280;
      local_280[0] = '\0';
      local_288 = 0;
      local_284 = 0x14;
      pcVar6 = pcVar9;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar7 = (int)pcVar6 - (int)(pcVar9 + 1);
      if (0x13 < uVar7) {
        local_284 = uVar7 + 0x20 & 0xffffffe0;
        local_28c = _malloc(local_284);
      }
      _strncpy(local_28c,pcVar9,uVar7);
      local_28c[uVar7] = '\0';
      local_144 = local_138;
      local_138[0] = '\0';
      local_140 = 0;
      local_13c = 0x14;
      local_288 = uVar7;
      _strncpy(local_144,"gender",6);
      local_140 = 6;
      local_144[6] = '\0';
      local_4._0_1_ = 10;
      FUN_00557fa0(local_104,&local_144,&local_28c);
      if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
        _free(local_144);
      }
      if (0x14 < local_284) {
                    /* WARNING: Subroutine does not return */
        _free(local_28c);
      }
      local_184 = local_178;
      local_178[0] = '\0';
      local_180 = 0;
      local_17c = 0x14;
      _strncpy(local_184,"costume",7);
      local_180 = 7;
      local_184[7] = '\0';
      iVar8 = local_2b4;
      local_4._0_1_ = 0xb;
      FUN_00557fa0(local_104,&local_184,(undefined4 *)(*(int *)(local_2b4 + 8) + 0x68));
      if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
        _free(local_184);
      }
      iVar2 = *(int *)(*(int *)(iVar8 + 8) + 0x88);
      if (iVar2 == 1) {
        local_1cc = local_1c0;
        local_1c0[0] = '\0';
        local_1c8 = 0;
        local_1c4 = 0x14;
        _strncpy(local_1cc,"hero",4);
        local_1c8 = 4;
        local_1cc[4] = '\0';
        local_1ac = local_1a0;
        local_1a0[0] = '\0';
        local_1a8 = 0;
        local_1a4 = 0x14;
        _strncpy(local_1ac,"roletype",8);
        local_1a8 = 8;
        local_1ac[8] = '\0';
        local_4 = CONCAT31(local_4._1_3_,0xd);
        FUN_00557fa0(local_104,&local_1ac,&local_1cc);
        pcVar9 = local_1cc;
        uVar7 = local_1c4;
        if (0x14 < local_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ac);
        }
      }
      else if (iVar2 == 2) {
        local_22c = local_220;
        local_220[0] = '\0';
        local_228 = 0;
        local_224 = 0x14;
        _strncpy(local_22c,"villain",7);
        local_228 = 7;
        local_22c[7] = '\0';
        local_24c = local_240;
        local_240[0] = '\0';
        local_248 = 0;
        local_244 = 0x14;
        _strncpy(local_24c,"roletype",8);
        local_248 = 8;
        local_24c[8] = '\0';
        local_4 = CONCAT31(local_4._1_3_,0xf);
        FUN_00557fa0(local_104,&local_24c,&local_22c);
        pcVar9 = local_22c;
        uVar7 = local_224;
        if (0x14 < local_244) {
                    /* WARNING: Subroutine does not return */
          _free(local_24c);
        }
      }
      else if (iVar2 == 3) {
        local_1ec = local_1e0;
        local_1e0[0] = '\0';
        local_1e8 = 0;
        local_1e4 = 0x14;
        _strncpy(local_1ec,"interest",8);
        local_1e8 = 8;
        local_1ec[8] = '\0';
        local_20c = local_200;
        local_200[0] = '\0';
        local_208 = 0;
        local_204 = 0x14;
        _strncpy(local_20c,"roletype",8);
        local_208 = 8;
        local_20c[8] = '\0';
        local_4 = CONCAT31(local_4._1_3_,0x11);
        FUN_00557fa0(local_104,&local_20c,&local_1ec);
        pcVar9 = local_1ec;
        uVar7 = local_1e4;
        if (0x14 < local_204) {
                    /* WARNING: Subroutine does not return */
          _free(local_20c);
        }
      }
      else {
        local_26c = local_260;
        local_260[0] = '\0';
        local_268 = 0;
        local_264 = 0x14;
        _strncpy(local_26c,"nonlead",7);
        local_268 = 7;
        local_26c[7] = '\0';
        local_164 = local_158;
        local_158[0] = '\0';
        local_160 = 0;
        local_15c = 0x14;
        _strncpy(local_164,"roletype",8);
        local_160 = 8;
        local_164[8] = '\0';
        local_4 = CONCAT31(local_4._1_3_,0x13);
        FUN_00557fa0(local_104,&local_164,&local_26c);
        pcVar9 = local_26c;
        uVar7 = local_264;
        if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
          _free(local_164);
        }
      }
      if (0x14 < uVar7) {
                    /* WARNING: Subroutine does not return */
        _free(pcVar9);
      }
      local_2d4 = local_2c8;
      local_2c8[0] = '\0';
      local_2d0 = 0;
      local_2cc = 0x14;
      _strncpy(local_2d4,"rolename",8);
      local_2d0 = 8;
      local_2d4[8] = '\0';
      local_4._0_1_ = 0x14;
      puVar4 = FUN_00568870(local_124,(undefined4 *)(*(int *)(iVar8 + 8) + 0x8c));
      local_4 = CONCAT31(local_4._1_3_,0x15);
      FUN_00557fa0(local_104,&local_2d4,puVar4);
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124[0]);
      }
      if (0x14 < local_2cc) {
                    /* WARNING: Subroutine does not return */
        _free(local_2d4);
      }
      local_2b4 = *(int *)(iVar8 + 4);
    } while (local_2b4 != (int)local_2b0 + 0x1c8);
  }
  local_2d4 = local_2c8;
  local_2c8[0] = '\0';
  local_2d0 = 0;
  local_2cc = 0x14;
  _strncpy(local_2d4,"requires",8);
  local_2d0 = 8;
  local_2d4[8] = '\0';
  local_4._0_1_ = 0x16;
  FUN_00558a50(local_104,&local_2d4,(undefined4 *)0x1);
  if (0x14 < local_2cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_2d4);
  }
  local_2d4 = local_2c8;
  local_2c8[0] = '\0';
  local_2d0 = 0;
  local_2cc = 0x14;
  _strncpy(local_2d4,"tech",4);
  local_2d0 = 4;
  local_2d4[4] = '\0';
  local_4._0_1_ = 0x17;
  FUN_00558a90(local_104,&local_2d4,(undefined4 *)0x1);
  pvVar3 = local_2b0;
  local_4._0_1_ = 0;
  if (0x14 < local_2cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_2d4);
  }
  fVar10 = 1.0;
  puVar4 = (undefined4 *)FUN_00449b40(*(int *)((int)local_2b0 + 0x120));
  FUN_00557fe0(local_104,puVar4,fVar10);
  FUN_00558bb0(local_104,5);
  local_2d4 = local_2c8;
  local_2c8[0] = '\0';
  local_2d0 = 0;
  local_2cc = 0x14;
  _strncpy(local_2d4,"costumes",8);
  local_2d0 = 8;
  local_2d4[8] = '\0';
  local_4._0_1_ = 0x18;
  FUN_00558a90(local_104,&local_2d4,(undefined4 *)0x1);
  local_4._0_1_ = 0;
  if (0x14 < local_2cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_2d4);
  }
  FUN_00558bb0(local_104,5);
  local_2d4 = local_2c8;
  local_2c8[0] = '\0';
  local_2d0 = 0;
  local_2cc = 0x14;
  _strncpy(local_2d4,"sets",4);
  local_2d0 = 4;
  local_2d4[4] = '\0';
  local_4._0_1_ = 0x19;
  FUN_00558a90(local_104,&local_2d4,(undefined4 *)0x1);
  if (0x14 < local_2cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_2d4);
  }
  local_2d4 = local_2c8;
  local_2b0 = (void *)0x0;
  local_2c8[0] = '\0';
  local_2d0 = 0;
  local_2cc = 0x14;
  _strncpy(local_2d4,"shot",4);
  local_2d0 = 4;
  local_2d4[4] = '\0';
  local_4._0_1_ = 0x1a;
  FUN_00558a50(local_104,&local_2d4,(undefined4 *)0x1);
  if (0x14 < local_2cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_2d4);
  }
  iVar8 = *(int *)((int)pvVar3 + 0x188);
  local_188 = (int)pvVar3 + 0x194;
  if (iVar8 != local_188) {
    do {
      local_2d4 = local_2c8;
      local_2c8[0] = '\0';
      local_2d0 = 0;
      local_2cc = 0x14;
      _strncpy(local_2d4,"shot",4);
      local_2d0 = 4;
      local_2d4[4] = '\0';
      local_4._0_1_ = 0x1b;
      FUN_00558a50(local_104,&local_2d4,(undefined4 *)0x1);
      local_4._0_1_ = 0;
      if (0x14 < local_2cc) {
                    /* WARNING: Subroutine does not return */
        _free(local_2d4);
      }
      puVar4 = FUN_00569d60(local_124,local_2b0);
      local_4._0_1_ = 0x1c;
      FUN_00558a90(local_104,puVar4,(undefined4 *)0x1);
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124[0]);
      }
      local_1cc = local_1c0;
      local_1c0[0] = '\0';
      local_1c8 = 0;
      local_1c4 = 0x14;
      _strncpy(local_1cc,"set",3);
      local_1c8 = 3;
      local_1cc[3] = '\0';
      local_4._0_1_ = 0x1d;
      FUN_00558a90(local_104,&local_1cc,(undefined4 *)0x1);
      local_4._0_1_ = 0;
      if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1cc);
      }
      local_2d8 = *(undefined4 **)(*(int *)(iVar8 + 8) + 100);
      local_2b4 = 0;
      if (local_2d8 != *(undefined4 **)(*(int *)(iVar8 + 8) + 0x68)) {
        do {
          local_4._0_1_ = 0;
          uVar7 = local_2d8[1];
          local_18c = (char *)*local_2d8;
          local_28c = local_280;
          local_280[0] = '\0';
          local_288 = 0;
          local_284 = 0x14;
          if (0x13 < uVar7) {
            local_284 = uVar7 + 0x20 & 0xffffffe0;
            local_28c = _malloc(local_284);
          }
          _strncpy(local_28c,local_18c,uVar7);
          local_28c[uVar7] = '\0';
          local_4._0_1_ = 0x1e;
          local_288 = uVar7;
          puVar4 = FUN_00569d60(local_2c,local_2b4);
          local_4._0_1_ = 0x1f;
          FUN_00557fa0(local_104,puVar4,&local_28c);
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          local_2b4 = local_2b4 + 1;
          local_4._0_1_ = 0;
          if (0x14 < local_284) {
                    /* WARNING: Subroutine does not return */
            _free(local_28c);
          }
          local_2d8 = local_2d8 + 8;
        } while (local_2d8 != *(undefined4 **)(*(int *)(iVar8 + 8) + 0x68));
      }
      local_4._0_1_ = 0;
      FUN_00558bb0(local_104,5);
      local_1ac = local_1a0;
      local_1a0[0] = '\0';
      local_1a8 = 0;
      local_1a4 = 0x14;
      _strncpy(local_1ac,"scene",5);
      local_1a8 = 5;
      local_1ac[5] = '\0';
      local_4._0_1_ = 0x20;
      FUN_00557fa0(local_104,&local_1ac,(undefined4 *)(*(int *)(iVar8 + 8) + 0x70));
      if (0x14 < local_1a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ac);
      }
      local_22c = local_220;
      local_220[0] = '\0';
      local_228 = 0;
      local_224 = 0x14;
      _strncpy(local_22c,"backdrop",8);
      local_228 = 8;
      local_22c[8] = '\0';
      local_4._0_1_ = 0x21;
      FUN_00557fa0(local_104,&local_22c,(undefined4 *)(*(int *)(iVar8 + 8) + 0xb0));
      if (0x14 < local_224) {
                    /* WARNING: Subroutine does not return */
        _free(local_22c);
      }
      local_24c = local_240;
      local_240[0] = '\0';
      local_248 = 0;
      local_244 = 0x14;
      _strncpy(local_24c,"overlay",7);
      local_248 = 7;
      local_24c[7] = '\0';
      local_4._0_1_ = 0x22;
      FUN_00557fa0(local_104,&local_24c,(undefined4 *)(*(int *)(iVar8 + 8) + 0xe0));
      if (0x14 < local_244) {
                    /* WARNING: Subroutine does not return */
        _free(local_24c);
      }
      local_1ec = local_1e0;
      local_1e0[0] = '\0';
      local_1e8 = 0;
      local_1e4 = 0x14;
      _strncpy(local_1ec,"part",4);
      local_1e8 = 4;
      local_1ec[4] = '\0';
      local_4._0_1_ = 0x23;
      FUN_00558a90(local_104,&local_1ec,(undefined4 *)0x1);
      local_4._0_1_ = 0;
      if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      puVar4 = *(undefined4 **)(*(int *)(iVar8 + 8) + 0x94);
      local_2d8 = (undefined4 *)0x0;
      if (puVar4 != *(undefined4 **)(*(int *)(iVar8 + 8) + 0x98)) {
        do {
          local_4._0_1_ = 0;
          puVar5 = FUN_00569d60(&local_164,local_2d8);
          local_4._0_1_ = 0x24;
          FUN_00558080(local_104,puVar5,*puVar4);
          local_4._0_1_ = 0;
          if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
            _free(local_164);
          }
          puVar4 = puVar4 + 1;
          local_2d8 = (undefined4 *)((int)local_2d8 + 1);
        } while (puVar4 != *(undefined4 **)(*(int *)(iVar8 + 8) + 0x98));
      }
      local_4._0_1_ = 0;
      FUN_00558bb0(local_104,5);
      local_20c = local_200;
      local_200[0] = '\0';
      local_208 = 0;
      local_204 = 0x14;
      _strncpy(local_20c,"sliders",7);
      local_208 = 7;
      local_20c[7] = '\0';
      local_4._0_1_ = 0x25;
      FUN_00558a90(local_104,&local_20c,(undefined4 *)0x1);
      local_4._0_1_ = 0;
      if (0x14 < local_204) {
                    /* WARNING: Subroutine does not return */
        _free(local_20c);
      }
      puVar4 = *(undefined4 **)(*(int *)(iVar8 + 8) + 0xa4);
      if (puVar4 != *(undefined4 **)(*(int *)(iVar8 + 8) + 0xa8)) {
        do {
          FUN_00557fe0(local_104,puVar4,(float)puVar4[8]);
          puVar4 = puVar4 + 9;
        } while (puVar4 != *(undefined4 **)(*(int *)(iVar8 + 8) + 0xa8));
      }
      FUN_00558bb0(local_104,5);
      local_26c = local_260;
      local_260[0] = '\0';
      local_268 = 0;
      local_264 = 0x14;
      _strncpy(local_26c,"props",5);
      local_268 = 5;
      local_26c[5] = '\0';
      local_4._0_1_ = 0x26;
      FUN_00558a90(local_104,&local_26c,(undefined4 *)0x1);
      local_4._0_1_ = 0;
      if (0x14 < local_264) {
                    /* WARNING: Subroutine does not return */
        _free(local_26c);
      }
      puVar4 = *(undefined4 **)(*(int *)(iVar8 + 8) + 0xd4);
      local_2d8 = (undefined4 *)0x0;
      if (puVar4 != *(undefined4 **)(*(int *)(iVar8 + 8) + 0xd8)) {
        do {
          local_4._0_1_ = 0;
          puVar5 = FUN_00569d60(&local_184,local_2d8);
          local_4._0_1_ = 0x27;
          FUN_00557fa0(local_104,puVar5,puVar4);
          local_4._0_1_ = 0;
          if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
            _free(local_184);
          }
          local_2d8 = (undefined4 *)((int)local_2d8 + 1);
          puVar4 = puVar4 + 8;
        } while (puVar4 != *(undefined4 **)(*(int *)(iVar8 + 8) + 0xd8));
      }
      local_4._0_1_ = 0;
      FUN_00558bb0(local_104,5);
      iVar8 = *(int *)(iVar8 + 4);
      local_2b0 = (void *)((int)local_2b0 + 1);
    } while (iVar8 != local_188);
  }
  puVar4 = FUN_0040d6b0(local_124,"scripts/",param_1);
  local_4 = CONCAT31(local_4._1_3_,0x28);
  FUN_0055ab40(local_104,puVar4);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124[0]);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_104);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004c9460 @ 004c9460 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004c9460(void *this,void *param_1,char param_2,char param_3)

{
  char *pcVar1;
  float10 fVar2;
  char cVar3;
  float *pfVar4;
  undefined2 extraout_var;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  void *this_00;
  uint uVar8;
  undefined4 *puVar9;
  float10 fVar10;
  char local_149;
  char *local_148;
  uint local_144;
  uint local_140;
  char local_13c [20];
  undefined4 *puStack_128;
  undefined4 *local_124;
  float fStack_120;
  undefined4 auStack_11c [25];
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  undefined1 auStack_ac [160];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca86fc;
  local_c = ExceptionList;
  local_149 = '\x01';
  ExceptionList = &local_c;
  if (param_2 != '\0') {
    ExceptionList = &local_c;
    pfVar4 = (float *)FUN_0043b620(&DAT_00e4fa4c,(float *)&local_124,(float *)((int)this + 0x1ec));
    fVar10 = FUN_0043b710(pfVar4);
    fVar2 = (float10)_DAT_0104abf0;
    if (fVar10 < fVar2) {
      ExceptionList = local_c;
      return CONCAT22(extraout_var,
                      (ushort)(fVar10 < fVar2) << 8 | (ushort)(NAN(fVar10) || NAN(fVar2)) << 10 |
                      (ushort)(fVar10 == fVar2) << 0xe);
    }
  }
  puVar9 = *(undefined4 **)((int)this + 0x158);
  if (puVar9 != *(undefined4 **)((int)this + 0x15c)) {
    do {
      iVar5 = FUN_009601d0(puVar9);
      if ((iVar5 != 0) && (cVar3 = FUN_00960f30(iVar5), cVar3 == '\0')) {
        if (param_1 != (void *)0x0) {
          FUN_0043a2d0(param_1,puVar9);
        }
        local_149 = '\0';
      }
      puVar9 = puVar9 + 8;
    } while (puVar9 != *(undefined4 **)((int)this + 0x15c));
    if (local_149 == '\0') {
      ExceptionList = local_c;
      return (uint)*(undefined4 **)((int)this + 0x15c) & 0xffffff00;
    }
  }
  puStack_128 = *(undefined4 **)((int)this + 0x16c);
  puVar9 = *(undefined4 **)((int)this + 0x168);
  if (puVar9 != puStack_128) {
    do {
      uVar8 = puVar9[1];
      pcVar1 = (char *)*puVar9;
      local_148 = local_13c;
      local_13c[0] = '\0';
      local_144 = 0;
      local_140 = 0x14;
      if (0x13 < uVar8) {
        local_140 = uVar8 + 0x20 & 0xffffffe0;
        local_148 = _malloc(local_140);
      }
      _strncpy(local_148,pcVar1,uVar8);
      local_148[uVar8] = '\0';
      local_4 = 0;
      local_144 = uVar8;
      piVar6 = (int *)GetPlayerStudio();
      iVar5 = (**(code **)(*piVar6 + 0x40))(&local_148);
      if (iVar5 == 0) {
        if (param_1 != (void *)0x0) {
          FUN_0043a2d0(param_1,&local_148);
        }
        local_149 = '\0';
      }
      local_4 = 0xffffffff;
      if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
        _free(local_148);
      }
      puStack_128 = *(undefined4 **)((int)this + 0x16c);
      puVar9 = puVar9 + 8;
    } while (puVar9 != puStack_128);
  }
  if (local_149 != '\0') {
    puVar9 = *(undefined4 **)((int)this + 0x148);
    if (puVar9 != *(undefined4 **)((int)this + 0x14c)) {
      do {
        iVar5 = FUN_00959a40(puVar9);
        if ((iVar5 != 0) && (cVar3 = FUN_00960f30(iVar5), cVar3 == '\0')) {
          if (param_1 != (void *)0x0) {
            iVar5 = *(int *)((int)param_1 + 4);
            if ((iVar5 == 0) ||
               ((uint)(*(int *)((int)param_1 + 0xc) - iVar5 >> 5) <=
                (uint)(*(int *)((int)param_1 + 8) - iVar5 >> 5))) {
              FUN_00439fd0(param_1,*(int **)((int)param_1 + 8),1,puVar9);
            }
            else {
              piVar6 = *(int **)((int)param_1 + 8);
              FUN_00439ea0(piVar6,1,puVar9);
              *(int **)((int)param_1 + 8) = piVar6 + 8;
            }
          }
          local_149 = '\0';
        }
        puStack_128 = *(undefined4 **)((int)this + 0x14c);
        puVar9 = puVar9 + 8;
      } while (puVar9 != puStack_128);
    }
    if (local_149 != '\0') {
      puStack_128 = *(undefined4 **)((int)this + 0x188);
      local_124 = (undefined4 *)((int)this + 0x194);
      if (puStack_128 != local_124) {
LAB_004c96e1:
        FUN_004c7b40(auStack_11c,puStack_128[2]);
        local_4 = 1;
        if (param_3 == '\0') {
          puVar9 = puStack_b8;
          if (puStack_b8 != puStack_b4) {
            do {
              uVar8 = puVar9[1];
              pcVar1 = (char *)*puVar9;
              local_148 = local_13c;
              local_13c[0] = '\0';
              local_144 = 0;
              local_140 = 0x14;
              if (0x13 < uVar8) {
                local_140 = uVar8 + 0x20 & 0xffffffe0;
                local_148 = _malloc(local_140);
              }
              _strncpy(local_148,pcVar1,uVar8);
              local_148[uVar8] = '\0';
              local_4 = CONCAT31(local_4._1_3_,2);
              local_144 = uVar8;
              iVar5 = FUN_009623a0(&local_148);
              if ((iVar5 != 0) && (cVar3 = FUN_00960f30(iVar5), cVar3 != '\0')) {
                piVar6 = (int *)GetPlayerStudio();
                this_00 = (void *)(**(code **)(*piVar6 + 0x40))(&local_148);
                if ((this_00 != (void *)0x0) &&
                   ((param_2 == '\0' ||
                    (pfVar4 = FUN_004d3720(this_00,&fStack_120),
                    *pfVar4 < _DAT_0104abec != (*pfVar4 == _DAT_0104abec)))))
                goto joined_r0x004c98b2;
              }
              if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
                _free(local_148);
              }
              puVar9 = puVar9 + 8;
              if (puVar9 == puStack_b4) break;
            } while( true );
          }
LAB_004c972b:
          if (param_1 != (void *)0x0) {
            local_148 = local_13c;
            local_13c[0] = '\0';
            local_144 = 0;
            local_140 = 0x14;
            _strncpy(local_148,"sceneinvalid_",0xd);
            local_144 = 0xd;
            local_148[0xd] = '\0';
            local_4 = CONCAT31(local_4._1_3_,3);
            FUN_004073f0(&local_148,*(char **)(puStack_128[2] + 0x70),
                         *(size_t *)(puStack_128[2] + 0x74));
            iVar5 = *(int *)((int)param_1 + 4);
            if ((iVar5 == 0) ||
               ((uint)(*(int *)((int)param_1 + 0xc) - iVar5 >> 5) <=
                (uint)(*(int *)((int)param_1 + 8) - iVar5 >> 5))) {
              FUN_00439fd0(param_1,*(int **)((int)param_1 + 8),1,&local_148);
            }
            else {
              piVar6 = *(int **)((int)param_1 + 8);
              FUN_00439ea0(piVar6,1,&local_148);
              *(int **)((int)param_1 + 8) = piVar6 + 8;
            }
            if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
              _free(local_148);
            }
          }
          local_4 = 0xffffffff;
          uVar8 = FUN_004c0e00(auStack_11c);
          ExceptionList = local_c;
          return uVar8 & 0xffffff00;
        }
        uVar7 = FUN_004cda20((int)auStack_ac,'\x01');
        if ((char)uVar7 == '\0') goto LAB_004c972b;
        goto LAB_004c98c1;
      }
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)puStack_128 >> 8),local_149);
joined_r0x004c98b2:
  if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
    _free(local_148);
  }
LAB_004c98c1:
  local_4 = 0xffffffff;
  FUN_004c0e00(auStack_11c);
  puStack_128 = (undefined4 *)puStack_128[1];
  if (puStack_128 == local_124) {
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)puStack_128 >> 8),local_149);
  }
  goto LAB_004c96e1;
}


//// FUNCTION FUN_004c99a0 @ 004c99a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c99a0(void)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  char *local_23c;
  undefined4 local_238;
  uint local_234;
  char local_230 [20];
  char *local_21c;
  undefined4 local_218;
  uint local_214;
  char local_210 [20];
  void *local_1fc;
  int local_1f8;
  uint local_1f4;
  undefined4 local_1dc [54];
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8870;
  pvStack_c = ExceptionList;
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_21c,"scriptquality",0xd);
  local_218 = 0xd;
  local_21c[0xd] = '\0';
  local_4 = 0;
  FUN_0055c540(local_1dc,&local_21c);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"quality",7);
  local_238 = 7;
  local_23c[7] = '\0';
  local_4._0_1_ = 3;
  FUN_00558a50(local_1dc,&local_23c,(undefined4 *)0x1);
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"max_costume_changes",0x13);
  local_238 = 0x13;
  local_23c[0x13] = '\0';
  local_4._0_1_ = 4;
  fVar5 = FUN_00558610(local_1dc,&local_23c,10.0);
  _DAT_0104ac44 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"max_extras",10);
  local_238 = 10;
  local_23c[10] = '\0';
  local_4._0_1_ = 5;
  fVar5 = FUN_00558610(local_1dc,&local_23c,5.0);
  _DAT_0104ac40 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"max_set_changes",0xf);
  local_238 = 0xf;
  local_23c[0xf] = '\0';
  local_4._0_1_ = 6;
  fVar5 = FUN_00558610(local_1dc,&local_23c,6.0);
  _DAT_0104ac38 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"max_length",10);
  local_238 = 10;
  local_23c[10] = '\0';
  local_4._0_1_ = 7;
  fVar5 = FUN_00558610(local_1dc,&local_23c,300.0);
  _DAT_0104ac3c = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"min_required_roles",0x12);
  local_238 = 0x12;
  local_23c[0x12] = '\0';
  local_4._0_1_ = 8;
  fVar5 = FUN_00558610(local_1dc,&local_23c,5.0);
  _DAT_0104ac34 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"num_scenes",10);
  local_238 = 10;
  local_23c[10] = '\0';
  local_4._0_1_ = 9;
  fVar5 = FUN_00558610(local_1dc,&local_23c,7.0);
  _DAT_0104ac30 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"max_lead_roles",0xe);
  local_238 = 0xe;
  local_23c[0xe] = '\0';
  local_4._0_1_ = 10;
  fVar5 = FUN_00558610(local_1dc,&local_23c,3.0);
  _DAT_0104ac2c = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"max_nonlead_roles",0x11);
  local_238 = 0x11;
  local_23c[0x11] = '\0';
  local_4._0_1_ = 0xb;
  fVar5 = FUN_00558610(local_1dc,&local_23c,2.0);
  _DAT_0104ac28 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"scene_repeat_factor",0x13);
  local_238 = 0x13;
  local_23c[0x13] = '\0';
  local_4._0_1_ = 0xc;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.5);
  DAT_0104ac24 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"max_costume_changes_weight",0x1a);
  local_238 = 0x1a;
  local_23c[0x1a] = '\0';
  local_4._0_1_ = 0xd;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.2);
  _DAT_0104ac20 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"max_extras_weight",0x11);
  local_238 = 0x11;
  local_23c[0x11] = '\0';
  local_4._0_1_ = 0xe;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.1);
  _DAT_0104ac1c = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"max_set_changes_weight",0x16);
  local_238 = 0x16;
  local_23c[0x16] = '\0';
  local_4._0_1_ = 0xf;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.2);
  _DAT_0104ac14 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"max_length_weight",0x11);
  local_238 = 0x11;
  local_23c[0x11] = '\0';
  local_4._0_1_ = 0x10;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.4);
  _DAT_0104ac18 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"min_required_roles_weight",0x19);
  local_238 = 0x19;
  local_23c[0x19] = '\0';
  local_4._0_1_ = 0x11;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.2);
  _DAT_0104ac10 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"scene_quality_weight",0x14);
  local_238 = 0x14;
  local_23c[0x14] = '\0';
  local_4._0_1_ = 0x12;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.15);
  _DAT_0104ac0c = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"set_quality_weight",0x12);
  local_238 = 0x12;
  local_23c[0x12] = '\0';
  local_4._0_1_ = 0x13;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.15);
  _DAT_0104ac08 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"num_scenes_weight",0x11);
  local_238 = 0x11;
  local_23c[0x11] = '\0';
  local_4._0_1_ = 0x14;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.0);
  _DAT_0104ac04 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"max_lead_roles_weight",0x15);
  local_238 = 0x15;
  local_23c[0x15] = '\0';
  local_4._0_1_ = 0x15;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.0);
  _DAT_0104ac00 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"max_nonlead_roles_weight",0x18);
  local_238 = 0x18;
  local_23c[0x18] = '\0';
  local_4._0_1_ = 0x16;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.0);
  _DAT_0104abfc = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"one_shot_factor",0xf);
  local_238 = 0xf;
  local_23c[0xf] = '\0';
  local_4._0_1_ = 0x17;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.5);
  _DAT_0104abf8 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"two_shot_factor",0xf);
  local_238 = 0xf;
  local_23c[0xf] = '\0';
  local_4._0_1_ = 0x18;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.75);
  _DAT_0104abf4 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"criteria",8);
  local_238 = 8;
  local_23c[8] = '\0';
  local_4._0_1_ = 0x19;
  FUN_00558a50(local_1dc,&local_23c,(undefined4 *)0x1);
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"min_years_before_reuse",0x16);
  local_238 = 0x16;
  local_23c[0x16] = '\0';
  local_4._0_1_ = 0x1a;
  fVar5 = FUN_00558610(local_1dc,&local_23c,5.0);
  _DAT_0104abf0 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"max_allowable_set_boredom",0x19);
  local_238 = 0x19;
  local_23c[0x19] = '\0';
  local_4._0_1_ = 0x1b;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.75);
  _DAT_0104abec = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x20;
  local_23c = _malloc(0x20);
  _strncpy(local_23c,"set_adjusted_boredom_factor",0x1b);
  local_238 = 0x1b;
  local_23c[0x1b] = '\0';
  local_4._0_1_ = 0x1c;
  fVar5 = FUN_00558610(local_1dc,&local_23c,0.75);
  _DAT_0104abe8 = (float)fVar5;
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  local_23c = local_230;
  local_230[0] = '\0';
  local_238 = 0;
  local_234 = 0x14;
  _strncpy(local_23c,"scripts/QMM",0xb);
  local_238 = 0xb;
  local_23c[0xb] = '\0';
  local_4._0_1_ = 0x1d;
  FUN_0055c6d0(local_e4,&local_23c,0);
  local_4 = CONCAT31(local_4._1_3_,0x1f);
  if (0x14 < local_234) {
                    /* WARNING: Subroutine does not return */
    _free(local_23c);
  }
  cVar2 = FUN_00558bb0(local_e4,0);
  while( true ) {
    if (cVar2 == '\0') {
      local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00558920(local_e4);
      local_4 = 0xffffffff;
      FUN_00558920(local_1dc);
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005562f0(local_e4,&local_1fc,1);
    if (local_1f8 != 0) {
      puVar4 = FUN_0040d6b0(local_104,"QMM/",&local_1fc);
      local_4._0_1_ = 0x21;
      puVar4 = ScriptDefinition_CreateAndLoad(puVar4);
      local_4 = CONCAT31(local_4._1_3_,0x20);
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      uVar3 = FUN_004c7d80((int)puVar4);
      if ((char)uVar3 == '\0') {
        piVar1 = puVar4 + 0x23;
        puVar4[0x24] = &DAT_0104ac90;
        *piVar1 = (int)DAT_0104ac90;
        *(int **)((int)DAT_0104ac90 + 4) = piVar1;
        DAT_0104ac90 = piVar1;
      }
      else if (puVar4 != (undefined4 *)0x0) {
        piVar1 = puVar4 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
    }
    local_4 = CONCAT31(local_4._1_3_,0x1f);
    if (0x14 < local_1f4) break;
    cVar2 = FUN_00558bb0(local_e4,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1fc);
}


//// FUNCTION FUN_004ca690 @ 004ca690 ////

undefined4 * __cdecl FUN_004ca690(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *local_144;
  undefined4 local_140;
  uint local_13c;
  char local_138 [20];
  undefined1 *local_124;
  int local_120;
  uint local_11c;
  undefined1 local_118 [20];
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca88a1;
  local_c = ExceptionList;
  local_124 = local_118;
  local_118[0] = 0;
  local_120 = 0;
  local_11c = 0x14;
  local_144 = local_138;
  local_4 = 0;
  local_138[0] = '\0';
  local_140 = 0;
  local_13c = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_144,"scripts",7);
  local_140 = 7;
  local_144[7] = '\0';
  local_4._0_1_ = 1;
  iVar4 = 1;
  switch(param_1) {
  case 1:
    pcVar5 = "/BMovie";
    break;
  case 2:
    pcVar5 = "/BlockBuster";
    break;
  case 3:
    pcVar5 = "/Family";
    break;
  case 4:
    pcVar5 = "/Boundary";
    break;
  case 5:
    pcVar5 = "/connoisuer";
    break;
  default:
    goto switchD_004ca71f_default;
  }
  FUN_00407630(&local_144,pcVar5);
switchD_004ca71f_default:
  FUN_0055c540(local_e4,&local_144);
  local_4 = CONCAT31(local_4._1_3_,2);
  cVar1 = FUN_00558bb0(local_e4,0);
  do {
    if (cVar1 == '\0') {
LAB_004ca7c3:
      if (local_120 == 0) {
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00558920(local_e4);
        if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
          _free(local_144);
        }
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124);
        }
        ExceptionList = local_c;
        return (undefined4 *)0x0;
      }
      puVar3 = ScriptDefinition_CreateAndLoad(&local_124);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00558920(local_e4);
      if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
        _free(local_144);
      }
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124);
      }
      ExceptionList = local_c;
      return puVar3;
    }
    iVar2 = FUN_00990d30(0,iVar4);
    if (iVar2 == 0) {
      puVar3 = FUN_005562f0(local_e4,local_104,1);
      FUN_004015d0(&local_124,(char *)*puVar3,puVar3[1]);
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      goto LAB_004ca7c3;
    }
    iVar4 = iVar4 + 1;
    cVar1 = FUN_00558bb0(local_e4,2);
  } while( true );
}


//// FUNCTION FUN_004ca8d0 @ 004ca8d0 ////

void __fastcall FUN_004ca8d0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004ca900 @ 004ca900 ////

int __fastcall FUN_004ca900(int param_1)

{
  return param_1 + 0x58c;
}


//// FUNCTION FUN_004ca910 @ 004ca910 ////

int __fastcall FUN_004ca910(int param_1)

{
  return param_1 + 0x560;
}


