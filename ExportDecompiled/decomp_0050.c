//// FUNCTION FUN_00a71e90 @ 00a71e90 ////

void __fastcall FUN_00a71e90(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0x2c) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_00985de0(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x2c));
}


//// FUNCTION FUN_00a71f10 @ 00a71f10 ////

void __fastcall FUN_00a71f10(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_009d9820();
  local_c = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_009d9820();
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + local_c * 4);
      local_10 = 0;
      if (0 < *(int *)(iVar1 + 0x20)) {
        do {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + local_10 * 4);
          FUN_009d9820();
          local_14 = 0;
          if (0 < *(int *)(iVar2 + 0x44)) {
            do {
              piVar3 = *(int **)(*(int *)(iVar2 + 0x48) + local_14 * 4);
              iVar4 = 0;
              if (0 < *piVar3) {
                do {
                  FUN_009d9820();
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *piVar3);
              }
              FUN_009d9820();
              local_14 = local_14 + 1;
            } while (local_14 < *(int *)(iVar2 + 0x44));
          }
          local_10 = local_10 + 1;
        } while (local_10 < *(int *)(iVar1 + 0x20));
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a720a4 @ 00a720a4 ////

undefined4 * FUN_00a720a4(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  undefined4 *in_stack_00000028;
  byte *in_stack_0000002c;
  
  if (in_stack_00000028 == (undefined4 *)0x0) {
    iVar9 = 0x14;
  }
  else {
    iVar9 = 0;
    if (0 < (int)in_stack_00000028[3]) {
      pbVar2 = (byte *)in_stack_00000028[4];
      pbVar12 = in_stack_0000002c;
      pbVar11 = pbVar2;
LAB_00a720c6:
      do {
        bVar1 = *pbVar2;
        bVar14 = bVar1 < *pbVar12;
        if (bVar1 == *pbVar12) {
          if (bVar1 != 0) {
            bVar1 = pbVar2[1];
            bVar14 = bVar1 < pbVar12[1];
            if (bVar1 != pbVar12[1]) goto LAB_00a720ea;
            pbVar2 = pbVar2 + 2;
            pbVar12 = pbVar12 + 2;
            if (bVar1 != 0) goto LAB_00a720c6;
          }
          iVar3 = 0;
        }
        else {
LAB_00a720ea:
          iVar3 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        }
        if (iVar3 == 0) {
          puVar4 = (undefined4 *)FUN_009a2210((undefined4 *)&stack0x00000000);
          puVar5 = (undefined4 *)(in_stack_00000028[4] + 0x20 + iVar9 * 0x44);
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          return (undefined4 *)0x0;
        }
        iVar9 = iVar9 + 1;
        pbVar2 = pbVar11 + 0x44;
        pbVar12 = in_stack_0000002c;
        pbVar11 = pbVar2;
      } while (iVar9 < (int)in_stack_00000028[3]);
    }
    iVar9 = in_stack_00000028[1];
  }
  uVar10 = iVar9 + 0x44;
  puVar5 = operator_new(uVar10);
  puVar4 = puVar5;
  for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar7 = uVar10 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if (in_stack_00000028 == (undefined4 *)0x0) {
    *puVar5 = 7;
  }
  else {
    uVar7 = in_stack_00000028[1];
    puVar4 = puVar5;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = *in_stack_00000028;
      in_stack_00000028 = in_stack_00000028 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)in_stack_00000028;
      in_stack_00000028 = (undefined4 *)((int)in_stack_00000028 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  iVar9 = puVar5[3];
  puVar4 = puVar5 + 5;
  puVar5[4] = puVar4;
  puVar5[1] = uVar10;
  puVar5[3] = iVar9 + 1;
  _sprintf((char *)(puVar4 + (iVar9 + 1) * 0x11 + -0x11),(char *)in_stack_0000002c);
  puVar6 = (undefined4 *)FUN_009a2210((undefined4 *)&stack0x00000000);
  pcVar13 = (char *)((int)(puVar4 + (iVar9 + 1) * 0x11 + -0x11) + 0x20);
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar13 = *puVar6;
    puVar6 = puVar6 + 1;
    pcVar13 = pcVar13 + 4;
  }
  return puVar5;
}


//// FUNCTION FUN_00a72240 @ 00a72240 ////

int __thiscall FUN_00a72240(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_4;
  
  puVar1 = param_1;
  puVar3 = this;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(int *)((int)this + 0x24) = (int)this + 0x10;
  iVar2 = 0;
  puVar1 = param_1 + 10;
  if (0 < *(int *)((int)this + 0x20)) {
    local_4 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)((int)this + 0x24) + local_4);
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + 1;
      local_4 = local_4 + 0x10;
    } while (iVar2 < *(int *)((int)this + 0x20));
  }
  return (int)puVar1 - (int)param_1;
}


//// FUNCTION FUN_00a723c0 @ 00a723c0 ////

void __thiscall FUN_00a723c0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  iVar3 = param_1[2];
  iVar4 = 0;
  puVar2 = param_1 + 4;
  *(int *)((int)this + 8) = iVar3;
  *(int *)((int)this + 0xc) = (int)this + 0x10;
  if (0 < iVar3) {
    param_1 = (undefined4 *)0x0;
    do {
      puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + (int)param_1);
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar5 = puVar2 + 3;
      puVar1 = puVar1 + 3;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar1 + 1;
      }
      puVar2 = puVar2 + 0xb;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 0xb;
    } while (iVar4 < *(int *)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_00a72440 @ 00a72440 ////

void __thiscall FUN_00a72440(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  iVar1 = param_1[2];
  *(int *)((int)this + 8) = iVar1;
  *(undefined4 **)((int)this + 0xc) = (undefined4 *)((int)this + 0x10);
  puVar2 = param_1 + 4;
  puVar3 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = (iVar1 * 9 & 0x1fffffffU) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


//// FUNCTION FUN_00a724c0 @ 00a724c0 ////

void __thiscall FUN_00a724c0(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_4;
  
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
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(int *)((int)this + 0x14) = (int)this + 0x4c;
  iVar3 = *(int *)((int)this + 0x14) + *(int *)((int)this + 0xc) * 6;
  *(int *)((int)this + 0x24) = iVar3;
  iVar3 = iVar3 + *(int *)((int)this + 0x1c) * 6;
  *(int *)((int)this + 0x34) = iVar3;
  puVar4 = param_1 + 0x13;
  *(int *)((int)this + 0x44) = iVar3 + *(int *)((int)this + 0x2c) * 6;
  piVar5 = (int *)((int)this + 0xc);
  local_4 = 4;
  do {
    iVar3 = *piVar5;
    puVar6 = puVar4;
    puVar7 = (undefined4 *)piVar5[2];
    for (uVar1 = (uint)(iVar3 * 6) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar1 = iVar3 * 6 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar4 = (undefined4 *)((int)puVar4 + *piVar5 * 6);
    piVar5 = piVar5 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  puVar6 = (undefined4 *)(((int)puVar4 - (int)param_1) + (int)this);
  uVar1 = *(uint *)((int)this + 4);
  *(undefined4 **)((int)this + 0x48) = puVar6;
  puVar7 = puVar4;
  for (uVar2 = (uVar1 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar3 = (uVar1 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_009ac020((uint)((int)puVar4 + *(int *)((int)this + 4) * 2));
  return;
}


//// FUNCTION FUN_00a72620 @ 00a72620 ////

void __thiscall FUN_00a72620(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  iVar1 = param_1[3];
  puVar3 = param_1 + iVar1 + 5;
  iVar2 = (int)this + 0x14;
  iVar5 = 0;
  *(int *)((int)this + 0xc) = iVar1;
  *(int *)((int)this + 0x10) = iVar2;
  iVar4 = (int)this + iVar1 * 4 + 0x14;
  if (0 < iVar1) {
    do {
      *(int *)(iVar2 + iVar5 * 4) = iVar4;
      FUN_00a724c0(*(void **)(*(int *)((int)this + 0x10) + iVar5 * 4),puVar3);
      iVar2 = *(int *)((int)this + 0x10);
      iVar1 = **(int **)(iVar2 + iVar5 * 4);
      puVar3 = (undefined4 *)((int)puVar3 + iVar1);
      iVar4 = iVar4 + iVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a72690 @ 00a72690 ////

void __thiscall FUN_00a72690(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 8) = (int)this + 0xc;
  puVar2 = param_1 + 3;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)((int)this + 8);
      *(undefined4 *)(iVar3 + iVar5) = *puVar2;
      iVar3 = iVar3 + iVar5;
      *(undefined4 *)(iVar3 + 4) = puVar2[1];
      *(undefined4 *)(iVar3 + 8) = puVar2[2];
      *(undefined4 *)(iVar3 + 0xc) = puVar2[3];
      *(undefined4 *)(iVar3 + 0x10) = puVar2[4];
      *(undefined4 *)(iVar3 + 0x14) = puVar2[5];
      *(undefined4 *)(iVar3 + 0x18) = puVar2[6];
      puVar1 = puVar2 + 7;
      puVar2 = puVar2 + 8;
      *(undefined4 *)(iVar3 + 0x1c) = *puVar1;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar4 < *(int *)((int)this + 4));
  }
  return;
}


//// FUNCTION FUN_00a72710 @ 00a72710 ////

int __thiscall FUN_00a72710(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(param_1 + 3);
  *(undefined1 *)((int)this + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
  *(undefined1 *)((int)this + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
  uVar3 = (uint)*(ushort *)((int)this + 0xc);
  puVar4 = param_1 + uVar3 + 5;
  iVar2 = (int)this + 0x14;
  iVar6 = 0;
  *(int *)((int)this + 0x10) = iVar2;
  iVar5 = (int)this + uVar3 * 4 + 0x14;
  if (uVar3 != 0) {
    do {
      *(int *)(iVar2 + iVar6 * 4) = iVar5;
      FUN_00a72690(*(void **)(*(int *)((int)this + 0x10) + iVar6 * 4),puVar4);
      iVar2 = *(int *)((int)this + 0x10);
      iVar1 = **(int **)(iVar2 + iVar6 * 4);
      puVar4 = (undefined4 *)((int)puVar4 + iVar1);
      iVar5 = iVar5 + iVar1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(ushort *)((int)this + 0xc));
  }
  return (int)puVar4 - (int)param_1;
}


//// FUNCTION FUN_00a727a0 @ 00a727a0 ////

void __thiscall FUN_00a727a0(void *this,undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  uVar2 = param_1[3];
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 0x14);
  *(uint *)((int)this + 0xc) = uVar2;
  puVar3 = param_1 + 5;
  puVar4 = (undefined4 *)((int)this + 0x14);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return;
}


//// FUNCTION FUN_00a727f0 @ 00a727f0 ////

void __thiscall FUN_00a727f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  iVar2 = param_1[3];
  *(int *)((int)this + 0x10) = (int)this + 0x14;
  iVar4 = 0;
  puVar1 = param_1 + 5;
  *(int *)((int)this + 0xc) = iVar2;
  if (0 < iVar2) {
    param_1 = (undefined4 *)0x0;
    do {
      puVar3 = (undefined4 *)(*(int *)((int)this + 0x10) + (int)param_1);
      puVar5 = puVar1;
      puVar6 = puVar3;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3[8] = puVar1[8];
      puVar3[9] = puVar1[9];
      puVar3[10] = puVar1[10];
      puVar3[0xb] = puVar1[0xb];
      puVar3[0xc] = puVar1[0xc];
      puVar3[0xd] = puVar1[0xd];
      puVar3[0xe] = puVar1[0xe];
      puVar3[0xf] = puVar1[0xf];
      puVar3[0x10] = puVar1[0x10];
      puVar1 = puVar1 + 0x11;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 0x11;
    } while (iVar4 < *(int *)((int)this + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a728e0 @ 00a728e0 ////

void __thiscall FUN_00a728e0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  puVar2 = param_1 + 3;
  puVar3 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  return;
}


//// FUNCTION FUN_00a72940 @ 00a72940 ////

void __thiscall FUN_00a72940(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  iVar3 = param_1[3];
  puVar4 = param_1 + 5;
  iVar2 = 0;
  *(int *)((int)this + 0xc) = iVar3;
  *(int *)((int)this + 0x10) = (int)this + 0x14;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00a72240((void *)(*(int *)((int)this + 0x10) + iVar3),puVar4);
      puVar4 = (undefined4 *)((int)puVar4 + iVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < *(int *)((int)this + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a729a0 @ 00a729a0 ////

void __thiscall FUN_00a729a0(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 **)((int)this + 0x24) = (undefined4 *)((int)this + 0x30);
  puVar3 = param_1 + 0xc;
  puVar4 = (undefined4 *)((int)this + 0x30);
  for (uVar1 = *(int *)((int)this + 0x10) * 3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar2 = *(int *)((int)this + 0x10);
  puVar4 = (undefined4 *)(*(int *)((int)this + 0x24) + iVar2 * 0xc);
  *(undefined4 **)((int)this + 0x28) = puVar4;
  puVar3 = param_1 + 0xc + iVar2 * 3;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}


//// FUNCTION FUN_00a72a60 @ 00a72a60 ////

void __cdecl FUN_00a72a60(byte *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  void *this;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  byte local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbede;
  local_c = ExceptionList;
  if (((param_1 != (byte *)0x0) && ((*(uint *)(param_1 + 0xe4) & 0x800) != 0)) &&
     (piVar2 = DAT_010c9ad4, *(int *)(param_1 + 0xac) == 0)) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      pbVar3 = (byte *)(piVar2 + 2);
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00a72ae8:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00a72aed;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00a72ae8;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a72aed:
      if (iVar4 == 0) {
        *(int **)(param_1 + 0xac) = piVar2;
        *piVar2 = *piVar2 + 1;
        return;
      }
    }
    ExceptionList = &local_c;
    _sprintf((char *)local_10c,"aa_%s_v00.anm",param_1);
    iVar4 = FUN_009ad870(&DAT_010581b0,local_10c);
    if (iVar4 != 0) {
      this = operator_new(0x30);
      local_4 = 0;
      if (this == (void *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = FUN_00a71de0(this,iVar4,(char *)param_1);
      }
      *(undefined4 **)(param_1 + 0xac) = puVar5;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a72b90 @ 00a72b90 ////

int __thiscall FUN_00a72b90(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_8;
  int local_4;
  
  puVar5 = param_1;
  puVar7 = this;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(int *)((int)this + 0x48) = (int)this + 0x4c;
  piVar2 = param_1 + *(int *)((int)this + 0x44) + 0x13;
  local_4 = 0;
  if (0 < *(int *)((int)this + 0x44)) {
    do {
      *(int *)(*(int *)((int)this + 0x48) + local_4 * 4) = ((int)piVar2 - (int)param_1) + (int)this;
      piVar1 = *(int **)(*(int *)((int)this + 0x48) + local_4 * 4);
      *piVar1 = *piVar2;
      piVar1[1] = (int)(piVar1 + 2);
      iVar3 = 0;
      piVar2 = piVar2 + 2;
      if (0 < *piVar1) {
        local_8 = 0;
        do {
          piVar6 = piVar2;
          piVar8 = (int *)(piVar1[1] + local_8);
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
          piVar2 = piVar2 + 8;
          iVar3 = iVar3 + 1;
          local_8 = local_8 + 0x20;
        } while (iVar3 < *piVar1);
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)((int)this + 0x44));
  }
  return (int)piVar2 - (int)param_1;
}


//// FUNCTION FUN_00a72c90 @ 00a72c90 ////

int __thiscall FUN_00a72c90(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  puVar3 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = param_1[8];
  iVar2 = 0;
  *(int *)((int)this + 0x20) = iVar1;
  *(int *)((int)this + 0x24) = (int)this + 0x28;
  puVar4 = param_1 + iVar1 + 10;
  if (0 < iVar1) {
    do {
      *(int *)(*(int *)((int)this + 0x24) + iVar2 * 4) = ((int)puVar4 - (int)param_1) + (int)this;
      iVar1 = FUN_00a72b90(*(void **)(*(int *)((int)this + 0x24) + iVar2 * 4),puVar4);
      puVar4 = (undefined4 *)((int)puVar4 + iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x20));
  }
  return (int)puVar4 - (int)param_1;
}


//// FUNCTION FUN_00a72cf0 @ 00a72cf0 ////

void __thiscall FUN_00a72cf0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  
  puVar1 = param_1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  iVar2 = param_1[3];
  *(int *)((int)this + 0xc) = iVar2;
  *(int *)((int)this + 0x10) = (int)this + 0x14;
  puVar3 = param_1 + iVar2 + 5;
  param_1 = (undefined4 *)0x0;
  if (0 < iVar2) {
    do {
      this_00 = (void *)(((int)puVar3 - (int)puVar1) + (int)this);
      iVar2 = FUN_00a72c90(this_00,puVar3);
      puVar3 = (undefined4 *)((int)puVar3 + iVar2);
      *(void **)(*(int *)((int)this + 0x10) + (int)param_1 * 4) = this_00;
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < *(int *)((int)this + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a72d60 @ 00a72d60 ////

void __cdecl FUN_00a72d60(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *_Memory;
  size_t sVar3;
  void *pvVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  uint _Count;
  int *piVar8;
  char *pcVar9;
  bool bVar10;
  uint *local_278;
  uint local_274;
  uint local_270;
  uint local_26c [5];
  void *local_258;
  int local_254;
  undefined1 auStack_250 [56];
  undefined4 uStack_218;
  char local_20c [256];
  char acStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbf11;
  local_c = ExceptionList;
  _Memory = param_2;
  ExceptionList = &local_c;
  if (param_2 == (int *)0x0) {
    ExceptionList = &local_c;
    _sprintf(local_20c,"Data\\Meshes\\ExtraInfo\\%s.inf",param_1);
    local_278 = local_26c;
    pcVar6 = local_20c;
    local_26c[0] = local_26c[0] & 0xffffff00;
    local_274 = 0;
    local_270 = 0x14;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar7 = (int)pcVar6 - (int)(local_20c + 1);
    if (0x13 < uVar7) {
      local_270 = uVar7 + 0x20 & 0xffffffe0;
      local_278 = _malloc(local_270);
    }
    _strncpy((char *)local_278,local_20c,uVar7);
    *(char *)((int)local_278 + uVar7) = '\0';
    local_4 = 0;
    local_274 = uVar7;
    uVar7 = FUN_009d3720(&local_278);
    local_4 = 0xffffffff;
    if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
      _free(local_278);
    }
    if (uVar7 == 0) {
      iVar2 = _strncmp(param_1,(char *)&PTR_LAB_00d7a0cc,3);
      if (iVar2 != 0) {
        iVar2 = 0x13;
        bVar10 = true;
        pcVar6 = param_1;
        pcVar9 = "generic_facialskin";
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar10 = *pcVar6 == *pcVar9;
          pcVar6 = pcVar6 + 1;
          pcVar9 = pcVar9 + 1;
        } while (bVar10);
        if (!bVar10) {
          iVar2 = 0x16;
          bVar10 = true;
          pcVar6 = param_1;
          pcVar9 = "generic_head_uv_photo";
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar10 = *pcVar6 == *pcVar9;
            pcVar6 = pcVar6 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar10);
          if (!bVar10) {
            ExceptionList = local_c;
            return;
          }
        }
      }
      _sprintf(local_20c,"Data\\Meshes\\ExtraInfo\\generic_head.inf");
      local_278 = local_26c;
      pcVar6 = local_20c;
      local_26c[0] = local_26c[0] & 0xffffff00;
      local_274 = 0;
      local_270 = 0x14;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar7 = (int)pcVar6 - (int)(local_20c + 1);
      if (0x13 < uVar7) {
        local_270 = uVar7 + 0x20 & 0xffffffe0;
        local_278 = _malloc(local_270);
      }
      _strncpy((char *)local_278,local_20c,uVar7);
      *(char *)((int)local_278 + uVar7) = '\0';
      local_4 = 1;
      local_274 = uVar7;
      uVar7 = FUN_009d3720(&local_278);
      local_4 = 0xffffffff;
      if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
        _free(local_278);
      }
      if (uVar7 == 0) {
        ExceptionList = local_c;
        return;
      }
    }
    local_4 = 0xffffffff;
    _Memory = operator_new(uVar7);
    local_278 = local_26c;
    pcVar6 = local_20c;
    local_270 = 0x14;
    local_26c[0] = local_26c[0] & 0xffffff00;
    local_274 = 0;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _Count = (int)pcVar6 - (int)(local_20c + 1);
    if (0x13 < _Count) {
      local_270 = _Count + 0x20 & 0xffffffe0;
      local_278 = _malloc(local_270);
    }
    _strncpy((char *)local_278,local_20c,_Count);
    *(char *)((int)local_278 + _Count) = '\0';
    local_4 = 2;
    local_274 = _Count;
    sVar3 = FUN_009d3ca0(&local_278,_Memory,uVar7,(undefined1 *)0x0);
    local_4 = 0xffffffff;
    if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
      _free(local_278);
    }
    if (sVar3 == 0) goto LAB_00a732b4;
  }
  local_4 = 0xffffffff;
  piVar8 = _Memory + 2;
  if (*_Memory == 1) {
    local_258 = (void *)0x0;
    iVar2 = _Memory[1];
    if (0 < _Memory[1]) {
      do {
        local_254 = iVar2;
        uVar7 = piVar8[1];
        switch((uint *)*piVar8) {
        case (uint *)0x1:
          pvVar4 = operator_new(uVar7);
          FUN_00a72440(pvVar4,piVar8);
          iVar2 = FUN_009d9bb0((int)param_1);
          if (*(int *)((int)pvVar4 + 8) != iVar2) {
            _sprintf(acStack_10c,"JC: %s CMorphBodyPart wrong data",param_1);
                    /* WARNING: Subroutine does not return */
            _free(pvVar4);
          }
          *(void **)(param_1 + 0x84) = pvVar4;
          break;
        case (uint *)0x2:
          pvVar4 = operator_new(uVar7);
          *(void **)(param_1 + 0x88) = pvVar4;
          FUN_00a723c0(pvVar4,piVar8);
          break;
        case (uint *)0x4:
          if ((((DAT_0105eb3a != '\0') ||
               (iVar2 = _strncmp(param_1,(char *)&PTR_LAB_00d7a0cc,3), iVar2 == 0)) &&
              (DAT_0105eb39 == '\0')) &&
             (((*(uint *)(param_1 + 0xe4) & 0x200000) == 0 && (1 < piVar8[2])))) {
            local_258 = operator_new(uVar7);
            FUN_00a72620(local_258,piVar8);
          }
          break;
        case (uint *)0x5:
          pvVar4 = operator_new(uVar7);
          FUN_00a72710(pvVar4,piVar8);
          FUN_009da390(param_1,(int)pvVar4);
          break;
        case (uint *)0x6:
          pvVar4 = operator_new(uVar7);
          FUN_00a72cf0(pvVar4,piVar8);
          FUN_009da4b0(param_1,(int)pvVar4);
          break;
        case (uint *)0x7:
          pvVar4 = operator_new(uVar7);
          FUN_00a727f0(pvVar4,piVar8);
          FUN_009da4e0(param_1,(int)pvVar4);
          break;
        case (uint *)0x8:
          pvVar4 = operator_new(uVar7);
          FUN_00a72940(pvVar4,piVar8);
          FUN_009da510(param_1,(int)pvVar4);
          break;
        case (uint *)0x9:
          piVar5 = operator_new(uVar7);
          *piVar5 = *piVar8;
          piVar5[1] = piVar8[1];
          piVar5[2] = piVar8[2];
          piVar5[3] = piVar8[3];
          FUN_009da540(param_1,(int)piVar5);
          break;
        case (uint *)0xa:
          pvVar4 = operator_new(uVar7);
          FUN_00a729a0(pvVar4,piVar8);
          FUN_009dc330(param_1,pvVar4);
          break;
        case (uint *)0xb:
          uStack_218 = 0;
          FUN_00a728e0(auStack_250,piVar8);
          FUN_009da800(param_1,(int)auStack_250);
          break;
        case (uint *)0xc:
          local_270 = piVar8[2];
          local_26c[0] = piVar8[3];
          local_278 = (uint *)*piVar8;
          local_274 = uVar7;
          FUN_009de400(param_1,(int)&local_278,(char *)(piVar8 + 4));
          break;
        case (uint *)0xd:
          pvVar4 = operator_new(uVar7);
          FUN_00a727a0(pvVar4,piVar8);
          FUN_009dc380((int)param_1);
        }
        pvVar4 = local_258;
        piVar8 = (int *)((int)piVar8 + uVar7);
        local_254 = local_254 + -1;
        iVar2 = local_254;
      } while (local_254 != 0);
      if (local_258 != (void *)0x0) {
        bVar10 = FUN_009daa10(param_1,"no lod");
        if (bVar10) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar4);
        }
        *(void **)(param_1 + 0x8c) = pvVar4;
        FUN_009dd550((int)param_1);
      }
    }
    if (param_2 != (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
  }
LAB_00a732b4:
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a73310 @ 00a73310 ////

uint __cdecl FUN_00a73310(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int *_Memory;
  size_t sVar4;
  int iVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbf30;
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
  if (uVar3 == 0) {
    ExceptionList = local_c;
    return local_24 & 0xffffff00;
  }
  _Memory = operator_new(uVar3);
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
  sVar4 = FUN_009d3ca0(&local_2c,_Memory,uVar3,(undefined1 *)0x0);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((sVar4 != 0) && (iVar5 = _Memory[1], *_Memory == 1)) {
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a73490 @ 00a73490 ////

void __fastcall FUN_00a73490(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a735f0 @ 00a735f0 ////

void __fastcall FUN_00a735f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 8) & 0xff) != 0) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x24 + *(int *)(param_1 + 0xc)) == -1) {
        FUN_009d9820();
      }
      else {
        FUN_009d9820();
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x88;
    } while (uVar2 < (*(uint *)(param_1 + 8) & 0xff));
  }
  return;
}


//// FUNCTION FUN_00a73660 @ 00a73660 ////

void __fastcall FUN_00a73660(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = *(void **)(param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x88,*(int *)((int)pvVar1 + -4),FUN_00a73490);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = DAT_010c9ad8;
  if (DAT_010c9ad8 != param_1) {
    do {
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar2 + 0x10);
    } while (iVar3 != param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar3 + 0x10);
      return;
    }
  }
  DAT_010c9ad8 = *(undefined4 *)(iVar3 + 0x10);
  return;
}


//// FUNCTION FUN_00a736c0 @ 00a736c0 ////

int * __fastcall FUN_00a736c0(int *param_1)

{
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  *param_1 = (int)(param_1 + 3);
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[9] = -1;
  FUN_004015d0(param_1,"",0);
  param_1[8] = 0;
  return param_1;
}


//// FUNCTION Skeleton_Constructor @ 00a73750 ////

undefined4 * __thiscall Skeleton_Constructor(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  uint *puVar2;
  uint _Size;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  int local_64;
  char local_60 [32];
  int local_40;
  float local_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbf4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d9820();
  *(undefined4 *)this = 1;
  *(void **)((int)this + 0x10) = DAT_010c9ad8;
  DAT_010c9ad8 = this;
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 1);
  uVar6 = *(uint *)((int)this + 8) & 0xff;
  puVar2 = operator_new(uVar6 * 0x88 + 4);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = puVar2 + 1;
    *puVar2 = uVar6;
    _eh_vector_constructor_iterator_(puVar9,0x88,uVar6,FUN_00a736c0,FUN_00a73490);
  }
  uVar6 = *(uint *)((int)this + 8);
  local_4 = 0xffffffff;
  *(uint **)((int)this + 0xc) = puVar9;
  *(uint *)((int)this + 8) = uVar6 & 0xfffff8ff;
  param_1 = (undefined4 *)0x0;
  if ((uVar6 & 0xff) != 0) {
    local_64 = 0;
    do {
      piVar5 = (int *)(*(int *)((int)this + 0xc) + local_64);
      local_3c[0xb] = 0.0;
      local_3c[10] = 0.0;
      local_3c[9] = 0.0;
      local_3c[7] = 0.0;
      local_3c[6] = 0.0;
      local_3c[5] = 0.0;
      local_3c[3] = 0.0;
      local_3c[2] = 0.0;
      local_3c[1] = 0.0;
      local_3c[8] = 1.0;
      local_3c[4] = 1.0;
      local_3c[0] = 1.0;
      Skeleton_ReadBoneRecord(local_60,param_2);
      param_2 = param_2 + 0x15;
      pcVar7 = local_60;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar6 = (int)pcVar7 - (int)(local_60 + 1);
      if ((uint)piVar5[2] <= uVar6) {
        if (0x14 < (uint)piVar5[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar5);
        }
        _Size = uVar6 + 0x20 & 0xffffffe0;
        piVar5[2] = _Size;
        pvVar3 = _malloc(_Size);
        *piVar5 = (int)pvVar3;
      }
      _strncpy((char *)*piVar5,local_60,uVar6);
      piVar5[1] = uVar6;
      *(undefined1 *)(uVar6 + *piVar5) = 0;
      piVar5[8] = (int)param_1;
      piVar5[9] = local_40;
      pfVar8 = local_3c;
      pfVar10 = (float *)(piVar5 + 10);
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar10 = pfVar10 + 1;
      }
      FUN_009aa500(piVar5 + 0x16,(float *)(piVar5 + 10));
      param_1 = (undefined4 *)((int)param_1 + 1);
      local_64 = local_64 + 0x88;
    } while (param_1 < (undefined4 *)(*(uint *)((int)this + 8) & 0xff));
  }
  if ((char)*(uint *)((int)this + 8) == '\x1e') {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 0x100;
  }
  if ((char)*(uint *)((int)this + 8) == '4') {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 0x200;
  }
  if ((char)*(uint *)((int)this + 8) == ';') {
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 0x400;
  }
  FUN_00a735f0((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Skeleton_GetOrCreateShared @ 00a739a0 ////

int * __cdecl Skeleton_GetOrCreateShared(int *param_1,undefined4 *param_2)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbf6b;
  local_c = ExceptionList;
  if (DAT_010c9ad8 != (int *)0x0) {
    piVar1 = DAT_010c9ad8;
    do {
      if (piVar1[1] == *param_1) {
        *piVar1 = *piVar1 + 1;
        return piVar1;
      }
      piVar1 = (int *)piVar1[4];
    } while (piVar1 != (int *)0x0);
  }
  ExceptionList = &local_c;
  this = operator_new(0x14);
  local_4 = 0;
  if (this != (void *)0x0) {
    piVar1 = Skeleton_Constructor(this,param_1,param_2);
    ExceptionList = local_c;
    return piVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_00a73ab0 @ 00a73ab0 ////

void __thiscall FUN_00a73ab0(void *this,float *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *local_8;
  float local_4;
  
  pfVar4 = param_1;
  local_8 = (float *)*param_1;
  fVar1 = param_1[1];
  local_4 = param_1[1];
  iVar5 = 1;
  pfVar2 = local_8;
  if (3 < param_2 + -1) {
    iVar6 = (param_2 - 5U >> 2) + 1;
    pfVar3 = param_1 + 6;
    iVar5 = iVar6 * 4 + 1;
    param_1 = local_8;
    do {
      if ((float)param_1 <= pfVar3[-3]) {
        if ((float)local_8 < pfVar3[-3]) {
          local_8 = (float *)pfVar3[-3];
        }
      }
      else {
        param_1 = (float *)pfVar3[-3];
      }
      if (local_4 <= pfVar3[-2]) {
        if (fVar1 < pfVar3[-2]) {
          fVar1 = pfVar3[-2];
        }
      }
      else {
        local_4 = pfVar3[-2];
      }
      if ((float)param_1 <= *pfVar3) {
        if ((float)local_8 < *pfVar3) {
          local_8 = (float *)*pfVar3;
        }
      }
      else {
        param_1 = (float *)*pfVar3;
      }
      if (local_4 <= pfVar3[1]) {
        if (fVar1 < pfVar3[1]) {
          fVar1 = pfVar3[1];
        }
      }
      else {
        local_4 = pfVar3[1];
      }
      if ((float)param_1 <= pfVar3[3]) {
        if ((float)local_8 < pfVar3[3]) {
          local_8 = (float *)pfVar3[3];
        }
      }
      else {
        param_1 = (float *)pfVar3[3];
      }
      if (local_4 <= pfVar3[4]) {
        if (fVar1 < pfVar3[4]) {
          fVar1 = pfVar3[4];
        }
      }
      else {
        local_4 = pfVar3[4];
      }
      if ((float)param_1 <= pfVar3[6]) {
        if ((float)local_8 < pfVar3[6]) {
          local_8 = (float *)pfVar3[6];
        }
      }
      else {
        param_1 = (float *)pfVar3[6];
      }
      if (local_4 <= pfVar3[7]) {
        if (fVar1 < pfVar3[7]) {
          fVar1 = pfVar3[7];
        }
      }
      else {
        local_4 = pfVar3[7];
      }
      pfVar3 = pfVar3 + 0xc;
      iVar6 = iVar6 + -1;
      pfVar2 = param_1;
    } while (iVar6 != 0);
  }
  param_1 = pfVar2;
  if (iVar5 < param_2) {
    pfVar4 = pfVar4 + iVar5 * 3;
    iVar5 = param_2 - iVar5;
    do {
      if ((float)param_1 <= *pfVar4) {
        if ((float)local_8 < *pfVar4) {
          local_8 = (float *)*pfVar4;
        }
      }
      else {
        param_1 = (float *)*pfVar4;
      }
      if (local_4 <= pfVar4[1]) {
        if (fVar1 < pfVar4[1]) {
          fVar1 = pfVar4[1];
        }
      }
      else {
        local_4 = pfVar4[1];
      }
      pfVar4 = pfVar4 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(float *)((int)this + 0xc) = fVar1;
  *(float **)this = param_1;
  *(float **)((int)this + 8) = local_8;
  *(float *)((int)this + 4) = local_4;
  return;
}


//// FUNCTION FUN_00a73d20 @ 00a73d20 ////

void __fastcall FUN_00a73d20(int param_1)

{
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  return;
}


//// FUNCTION LH_LoadCollisionHullPiece @ 00a73d40 ////

undefined1 * __thiscall LH_LoadCollisionHullPiece(void *this,ushort *param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  
  *(ushort *)this = *param_1;
  *(char *)((int)this + 2) = (char)param_1[1];
  *(undefined1 *)((int)this + 3) = *(undefined1 *)((int)param_1 + 3);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 **)((int)this + 0x14) = (undefined4 *)((int)this + 0x18);
  puVar2 = param_1 + 0xc;
  puVar3 = (undefined4 *)((int)this + 0x18);
  for (iVar1 = (uint)*(ushort *)this * 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)puVar2;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)puVar3 = (char)*puVar2;
    puVar2 = (ushort *)((int)puVar2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return (undefined1 *)(((uint)*(ushort *)this * 0xc - (int)param_1) + (int)(param_1 + 0xc));
}


//// FUNCTION FUN_00a73e80 @ 00a73e80 ////

void __thiscall FUN_00a73e80(void *this,int param_1,undefined4 *param_2,int param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != 0) {
    puVar1 = *(ushort **)(*(int *)((int)this + 8) + -4 + param_1 * 4);
    *(ushort **)(*(int *)((int)this + 8) + param_1 * 4) = puVar1 + (*puVar1 + 2) * 6;
  }
  puVar2 = *(undefined2 **)(*(int *)((int)this + 8) + param_1 * 4);
  *puVar2 = (short)param_3;
  *(undefined2 **)(*(int *)(*(int *)((int)this + 8) + param_1 * 4) + 0x14) = puVar2 + 0xc;
  puVar5 = *(undefined4 **)(*(int *)(*(int *)((int)this + 8) + param_1 * 4) + 0x14);
  for (uVar3 = param_3 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar4 = *(int *)(*(int *)((int)this + 8) + param_1 * 4);
  FUN_00a73ab0((void *)(iVar4 + 4),*(float **)(iVar4 + 0x14),param_3);
  return;
}


//// FUNCTION FUN_00a73f70 @ 00a73f70 ////

ushort __cdecl FUN_00a73f70(uint *param_1)

{
  float fVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  
  iVar4 = 0;
  uVar3 = 1;
  do {
    if ((uVar3 & DAT_010c9be0) != 0) {
      uVar2 = *param_1;
      if ((uVar3 & uVar2) == 0) {
        fVar1 = *(float *)(&DAT_010c9ae0 + (iVar4 + (uVar2 | uVar3) * 4) * 4);
        uVar5 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                (ushort)(fVar1 == 0.0) << 0xe;
        in_EAX = (uint)uVar5;
        if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
          return uVar5;
        }
      }
      else {
        fVar1 = *(float *)(&DAT_010c9ae0 + (iVar4 + uVar2 * 4) * 4);
        uVar5 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                (ushort)(fVar1 == 0.0) << 0xe;
        in_EAX = (uint)uVar5;
        if (fVar1 < 0.0 != (fVar1 == 0.0)) {
          return uVar5;
        }
      }
    }
    iVar4 = iVar4 + 1;
    uVar3 = uVar3 << 1;
  } while (iVar4 < 4);
  return (short)CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION FUN_00a74080 @ 00a74080 ////

void __thiscall FUN_00a74080(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)((int)this + 8);
  local_20 = *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 0xc);
  local_c = fVar1 * *param_1 + local_20 * param_1[3] + param_1[6] * 0.0 + param_1[9];
  local_8 = local_20 * param_1[4] + fVar1 * param_1[1] + param_1[10] + param_1[7] * 0.0;
  local_4 = local_20 * param_1[5] + fVar1 * param_1[2] + param_1[8] * 0.0 + param_1[0xb];
  local_18 = fVar2 * *param_1 + fVar3 * param_1[3] + param_1[6] * 0.0 + param_1[9];
  local_14 = fVar3 * param_1[4] + fVar2 * param_1[1] + param_1[10] + param_1[7] * 0.0;
  local_10 = fVar3 * param_1[5] + fVar2 * param_1[2] + param_1[8] * 0.0 + param_1[0xb];
  FUN_009840b0(&local_20,&local_c);
  *(float *)this = local_20;
  *(undefined4 *)((int)this + 4) = local_1c;
  FUN_009840b0(&local_20,&local_18);
  *(float *)((int)this + 8) = local_20;
  *(undefined4 *)((int)this + 0xc) = local_1c;
  return;
}


//// FUNCTION FUN_00a741b0 @ 00a741b0 ////

uint __thiscall FUN_00a741b0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
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
  uint uVar13;
  undefined2 uVar14;
  
  fVar1 = *(float *)this - *(float *)((int)this + 0xc);
  fVar3 = *(float *)((int)this + 4) - *(float *)((int)this + 0x10);
  fVar4 = *(float *)((int)this + 8) - *(float *)((int)this + 0x14);
  fVar5 = *(float *)((int)this + 0xc) + *(float *)this;
  fVar6 = *(float *)((int)this + 0x10) + *(float *)((int)this + 4);
  fVar7 = *(float *)((int)this + 0x14) + *(float *)((int)this + 8);
  fVar8 = *param_1 - param_1[3];
  fVar9 = param_1[1] - param_1[4];
  fVar10 = param_1[2] - param_1[5];
  fVar2 = param_1[3] + *param_1;
  fVar11 = param_1[4] + param_1[1];
  fVar12 = param_1[5] + param_1[2];
  uVar14 = (undefined2)((uint)param_1 >> 0x10);
  uVar13 = CONCAT22(uVar14,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                           (ushort)(fVar1 == fVar2) << 0xe);
  if (fVar1 < fVar2 || (fVar1 == fVar2) != 0) {
    uVar13 = CONCAT22(uVar14,(ushort)(fVar5 < fVar8) << 8 | (ushort)(NAN(fVar5) || NAN(fVar8)) << 10
                             | (ushort)(fVar5 == fVar8) << 0xe);
    if (fVar5 >= fVar8) {
      uVar13 = CONCAT22(uVar14,(ushort)(fVar3 < fVar11) << 8 |
                               (ushort)(NAN(fVar3) || NAN(fVar11)) << 10 |
                               (ushort)(fVar3 == fVar11) << 0xe);
      if (fVar3 < fVar11 || (fVar3 == fVar11) != 0) {
        uVar13 = CONCAT22(uVar14,(ushort)(fVar6 < fVar9) << 8 |
                                 (ushort)(NAN(fVar6) || NAN(fVar9)) << 10 |
                                 (ushort)(fVar6 == fVar9) << 0xe);
        if (fVar6 >= fVar9) {
          uVar13 = CONCAT22(uVar14,(ushort)(fVar4 < fVar12) << 8 |
                                   (ushort)(NAN(fVar4) || NAN(fVar12)) << 10 |
                                   (ushort)(fVar4 == fVar12) << 0xe);
          if (fVar4 < fVar12 || (fVar4 == fVar12) != 0) {
            uVar13 = CONCAT22(uVar14,(ushort)(fVar7 < fVar10) << 8 |
                                     (ushort)(NAN(fVar7) || NAN(fVar10)) << 10 |
                                     (ushort)(fVar7 == fVar10) << 0xe);
            if (fVar7 >= fVar10) {
              return CONCAT31((int3)(uVar13 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar13;
}


//// FUNCTION FUN_00a743d0 @ 00a743d0 ////

ushort * __thiscall FUN_00a743d0(void *this,undefined4 *param_1,ushort param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbfab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(byte *)((int)this + 2) = *(byte *)((int)this + 2) | 1;
  *(ushort *)this = param_2;
  if (param_2 != 0) {
    puVar1 = operator_new((uint)param_2 * 0xc);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(puVar1,0xc,(uint)param_2,&LAB_00403370);
    }
    *(undefined4 **)((int)this + 0x14) = puVar1;
    for (iVar2 = (uint)*(ushort *)this * 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    puVar1 = *(undefined4 **)((int)this + 0x14);
    for (iVar2 = (uint)*(ushort *)this * 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_1;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    FUN_00a73ab0((void *)((int)this + 4),*(float **)((int)this + 0x14),(uint)*(ushort *)this);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a744b0 @ 00a744b0 ////

ushort * __thiscall FUN_00a744b0(void *this,ushort param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfbfcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(byte *)((int)this + 2) = *(byte *)((int)this + 2) | 1;
  *(ushort *)this = param_1;
  if (param_1 != 0) {
    puVar1 = operator_new((uint)param_1 * 0xc);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(puVar1,0xc,(uint)param_1,&LAB_00403370);
    }
    *(undefined4 **)((int)this + 0x14) = puVar1;
    for (iVar2 = (uint)*(ushort *)this * 3; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a74560 @ 00a74560 ////

void __thiscall FUN_00a74560(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float local_8;
  float local_4;
  
  fVar1 = 0.0;
  uVar7 = (uint)*(ushort *)this;
  iVar5 = 0;
  local_8 = 0.0;
  local_4 = 0.0;
  if (3 < uVar7) {
    iVar6 = (uVar7 - 4 >> 2) + 1;
    iVar5 = iVar6 * 4;
    pfVar3 = (float *)(*(int *)((int)this + 0x14) + 8);
    pfVar4 = (float *)(*(int *)((int)this + 0x14) + 0x14);
    do {
      iVar6 = iVar6 + -1;
      fVar1 = fVar1 + pfVar3[-2] + pfVar3[1] + pfVar3[4] + pfVar3[7];
      local_8 = local_8 + pfVar3[-1] + pfVar4[-1] + pfVar4[2] + pfVar4[5];
      local_4 = local_4 + *pfVar3 + *pfVar4 + pfVar4[3] + pfVar4[6];
      pfVar3 = pfVar3 + 0xc;
      pfVar4 = pfVar4 + 0xc;
    } while (iVar6 != 0);
  }
  if (iVar5 < (int)uVar7) {
    iVar6 = uVar7 - iVar5;
    pfVar3 = (float *)(*(int *)((int)this + 0x14) + iVar5 * 0xc);
    do {
      fVar1 = fVar1 + *pfVar3;
      iVar6 = iVar6 + -1;
      local_8 = local_8 + pfVar3[1];
      local_4 = local_4 + pfVar3[2];
      pfVar3 = pfVar3 + 3;
    } while (iVar6 != 0);
  }
  fVar2 = 1.0 / (float)uVar7;
  *param_1 = fVar1 * fVar2;
  param_1[1] = local_8 * fVar2;
  param_1[2] = local_4 * fVar2;
  return;
}


//// FUNCTION FUN_00a74690 @ 00a74690 ////

uint __cdecl FUN_00a74690(ushort *param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar7;
  int iVar5;
  ushort *puVar6;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort *local_8;
  
  uVar10 = (uint)*param_1;
  local_8 = (ushort *)0x0;
  puVar6 = param_1;
  if (uVar10 != 0) {
    iVar5 = 0;
    iVar11 = (uVar10 * 3 + -3) * 4;
    do {
      iVar9 = iVar5;
      iVar12 = 0;
      iVar13 = 0;
      iVar5 = param_3;
      if (3 < param_3) {
        iVar1 = *(int *)(param_1 + 10);
        fVar2 = *(float *)(iVar11 + iVar1) - *(float *)(iVar9 + iVar1);
        pfVar8 = (float *)(param_2 + 0x1c);
        fVar3 = *(float *)(iVar11 + 4 + iVar1) - *(float *)(iVar9 + 4 + iVar1);
        do {
          fVar4 = (pfVar8[-6] - *(float *)(iVar9 + 4 + iVar1)) * fVar2 -
                  (pfVar8[-7] - *(float *)(iVar9 + iVar1)) * fVar3;
          uVar7 = (undefined2)((uint)iVar5 >> 0x10);
          iVar5 = CONCAT22(uVar7,(ushort)(fVar4 < 0.0) << 8 | (ushort)NAN(fVar4) << 10 |
                                 (ushort)(fVar4 == 0.0) << 0xe);
          if (fVar4 < 0.0 != (fVar4 == 0.0)) goto LAB_00a7480d;
          fVar4 = (pfVar8[-3] - *(float *)(iVar9 + 4 + iVar1)) * fVar2 -
                  (pfVar8[-4] - *(float *)(iVar9 + iVar1)) * fVar3;
          if (fVar4 < 0.0 != (fVar4 == 0.0)) {
            iVar12 = iVar12 + 1;
            iVar5 = CONCAT22(uVar7,(ushort)(fVar4 < 0.0) << 8 | (ushort)NAN(fVar4) << 10 |
                                   (ushort)(fVar4 == 0.0) << 0xe);
            goto LAB_00a7480d;
          }
          fVar4 = (*pfVar8 - *(float *)(iVar9 + 4 + iVar1)) * fVar2 -
                  (pfVar8[-1] - *(float *)(iVar9 + iVar1)) * fVar3;
          if (fVar4 < 0.0 != (fVar4 == 0.0)) {
            iVar12 = iVar12 + 2;
            iVar5 = CONCAT22(uVar7,(ushort)(fVar4 < 0.0) << 8 | (ushort)NAN(fVar4) << 10 |
                                   (ushort)(fVar4 == 0.0) << 0xe);
            goto LAB_00a7480d;
          }
          fVar4 = (pfVar8[3] - *(float *)(iVar9 + 4 + iVar1)) * fVar2 -
                  (pfVar8[2] - *(float *)(iVar9 + iVar1)) * fVar3;
          if (fVar4 < 0.0 != (fVar4 == 0.0)) {
            iVar12 = iVar12 + 3;
            iVar5 = CONCAT22(uVar7,(ushort)(fVar4 < 0.0) << 8 | (ushort)NAN(fVar4) << 10 |
                                   (ushort)(fVar4 == 0.0) << 0xe);
            goto LAB_00a7480d;
          }
          iVar13 = iVar13 + 4;
          iVar5 = param_3 + -3;
          iVar12 = iVar12 + 4;
          pfVar8 = pfVar8 + 0xc;
        } while (iVar13 < iVar5);
      }
      if (iVar13 < param_3) {
        iVar1 = *(int *)(param_1 + 10);
        pfVar8 = (float *)(param_2 + iVar13 * 0xc);
        iVar5 = iVar13 * 3;
        do {
          fVar2 = (pfVar8[1] - *(float *)(iVar9 + 4 + iVar1)) *
                  (*(float *)(iVar11 + iVar1) - *(float *)(iVar9 + iVar1)) -
                  (*pfVar8 - *(float *)(iVar9 + iVar1)) *
                  (*(float *)(iVar11 + 4 + iVar1) - *(float *)(iVar9 + 4 + iVar1));
          iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),
                           (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                           (ushort)(fVar2 == 0.0) << 0xe);
          if (fVar2 < 0.0 != (fVar2 == 0.0)) break;
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 1;
          pfVar8 = pfVar8 + 3;
          iVar5 = param_3;
        } while (iVar13 < param_3);
      }
LAB_00a7480d:
      if (iVar12 == param_3) {
        return CONCAT31((int3)((uint)iVar5 >> 8),1);
      }
      puVar6 = (ushort *)((int)local_8 + 1);
      iVar5 = iVar9 + 0xc;
      iVar11 = iVar9;
      local_8 = puVar6;
    } while ((int)puVar6 < (int)uVar10);
  }
  return (uint)puVar6 & 0xffffff00;
}


//// FUNCTION FUN_00a749e0 @ 00a749e0 ////

void __cdecl FUN_00a749e0(undefined4 *param_1,int param_2)

{
  float *pfVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar1 = *(float **)(param_2 + 0x14);
  local_18 = pfVar1[6] - pfVar1[3];
  local_14 = pfVar1[7] - pfVar1[4];
  local_10 = pfVar1[8] - pfVar1[5];
  local_24 = *pfVar1 - pfVar1[3];
  local_20 = pfVar1[1] - pfVar1[4];
  local_1c = pfVar1[2] - pfVar1[5];
  FUN_00412fd0(&local_c,&local_18,&local_24);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


//// FUNCTION CollisionHullSet_ComputeBoundingBox @ 00a74c70 ////

void __fastcall CollisionHullSet_ComputeBoundingBox(int param_1)

{
  float *pfVar1;
  float fVar2;
  ushort *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  pfVar1 = *(float **)(**(int **)(param_1 + 8) + 0x14);
  local_24 = *pfVar1;
  local_20 = pfVar1[1];
  fVar2 = pfVar1[2];
  local_30 = *pfVar1;
  local_2c = pfVar1[1];
  local_28 = pfVar1[2];
  iVar6 = 0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      puVar3 = (ushort *)(*(int **)(param_1 + 8))[iVar6];
      if (1 < *puVar3) {
        iVar5 = **(ushort **)(*(int *)(param_1 + 8) + iVar6 * 4) - 1;
        pfVar1 = *(float **)(puVar3 + 10);
        do {
          pfVar4 = pfVar1 + 3;
          if (local_24 <= *pfVar4) {
            if (local_30 < *pfVar4) {
              local_30 = *pfVar4;
            }
          }
          else {
            local_24 = *pfVar4;
          }
          if (local_20 <= pfVar1[4]) {
            if (local_2c < pfVar1[4]) {
              local_2c = pfVar1[4];
            }
          }
          else {
            local_20 = pfVar1[4];
          }
          if (fVar2 <= pfVar1[5]) {
            if (local_28 < pfVar1[5]) {
              local_28 = pfVar1[5];
            }
          }
          else {
            fVar2 = pfVar1[5];
          }
          iVar5 = iVar5 + -1;
          pfVar1 = pfVar4;
        } while (iVar5 != 0);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  *(float *)(param_1 + 0x10) = (local_30 + local_24) * 0.5;
  *(float *)(param_1 + 0x14) = (local_2c + local_20) * 0.5;
  *(float *)(param_1 + 0x18) = (local_28 + fVar2) * 0.5;
  *(float *)(param_1 + 0x1c) = (local_30 - local_24) * 0.5;
  *(float *)(param_1 + 0x20) = (local_2c - local_20) * 0.5;
  *(float *)(param_1 + 0x24) = (local_28 - fVar2) * 0.5;
  return;
}


//// FUNCTION FUN_00a74e20 @ 00a74e20 ////

void __thiscall FUN_00a74e20(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int *local_1c;
  int local_18;
  uint local_14;
  float local_c;
  float local_8;
  float local_4;
  
  local_14 = (uint)*(ushort *)((int)this + 4);
  fVar1 = -1e+10;
  if (local_14 != 0) {
    local_1c = *(int **)((int)this + 8);
    do {
      uVar3 = (uint)*(ushort *)*local_1c;
      local_18 = 0;
      if (3 < uVar3) {
        pfVar4 = (float *)(*(int *)((ushort *)*local_1c + 10) + 0xc);
        iVar5 = (uVar3 - 4 >> 2) + 1;
        local_18 = iVar5 * 4;
        do {
          fVar2 = pfVar4[-3] * *param_2 + param_2[1] * pfVar4[-2] + pfVar4[-1] * param_2[2];
          if (fVar1 < fVar2) {
            local_c = pfVar4[-3];
            local_8 = pfVar4[-2];
            local_4 = pfVar4[-1];
            fVar1 = fVar2;
          }
          fVar2 = *param_2 * *pfVar4 + pfVar4[1] * param_2[1] + pfVar4[2] * param_2[2];
          if (fVar1 < fVar2) {
            local_c = *pfVar4;
            local_8 = pfVar4[1];
            local_4 = pfVar4[2];
            fVar1 = fVar2;
          }
          fVar2 = pfVar4[3] * *param_2 + pfVar4[4] * param_2[1] + pfVar4[5] * param_2[2];
          if (fVar1 < fVar2) {
            local_c = pfVar4[3];
            local_8 = pfVar4[4];
            local_4 = pfVar4[5];
            fVar1 = fVar2;
          }
          fVar2 = *param_2 * pfVar4[6] + pfVar4[7] * param_2[1] + pfVar4[8] * param_2[2];
          if (fVar1 < fVar2) {
            local_c = pfVar4[6];
            local_8 = pfVar4[7];
            local_4 = pfVar4[8];
            fVar1 = fVar2;
          }
          pfVar4 = pfVar4 + 0xc;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (local_18 < (int)uVar3) {
        pfVar4 = (float *)(*(int *)(*local_1c + 0x14) + local_18 * 0xc);
        local_18 = uVar3 - local_18;
        do {
          fVar2 = *param_2 * *pfVar4 + pfVar4[2] * param_2[2] + pfVar4[1] * param_2[1];
          if (fVar1 < fVar2) {
            local_c = *pfVar4;
            local_8 = pfVar4[1];
            local_4 = pfVar4[2];
            fVar1 = fVar2;
          }
          pfVar4 = pfVar4 + 3;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_1c = local_1c + 1;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


//// FUNCTION FUN_00a75000 @ 00a75000 ////

ushort __cdecl FUN_00a75000(float *param_1)

{
  float fVar1;
  float fVar2;
  ushort in_AX;
  float *pfVar3;
  uint uVar4;
  
  uVar4 = 1;
  pfVar3 = (float *)&DAT_010c9c58;
  do {
    if ((uVar4 & DAT_010c9be0) != 0) {
      fVar1 = *param_1;
      fVar2 = pfVar3[-2];
      in_AX = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 == fVar1) {
        fVar1 = param_1[1];
        fVar2 = pfVar3[-1];
        in_AX = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                (ushort)(fVar2 == fVar1) << 0xe;
        if (fVar2 == fVar1) {
          fVar1 = param_1[2];
          fVar2 = *pfVar3;
          in_AX = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                  (ushort)(fVar2 == fVar1) << 0xe;
          if (fVar2 == fVar1) {
            return CONCAT11((char)(in_AX >> 8),1);
          }
        }
      }
    }
    pfVar3 = pfVar3 + 3;
    uVar4 = uVar4 << 1;
  } while ((int)pfVar3 < 0x10c9c88);
  return in_AX & 0xff00;
}


//// FUNCTION FUN_00a75060 @ 00a75060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a75060(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  float *local_34;
  int local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  uint local_10;
  
  uVar4 = DAT_010c9bec;
  iVar3 = DAT_010c9be8;
  if ((DAT_010c9bec & 1) != 0) {
    fVar2 = DAT_010c9c50 * (&DAT_010c9c50)[DAT_010c9be8 * 3] +
            DAT_010c9c58 * (&DAT_010c9c58)[DAT_010c9be8 * 3] +
            DAT_010c9c54 * (&DAT_010c9c54)[DAT_010c9be8 * 3];
    (&DAT_010c9c80)[DAT_010c9be8 * 4] = fVar2;
    (&DAT_010c9c80)[iVar3] = fVar2;
  }
  if ((uVar4 & 2) != 0) {
    fVar2 = DAT_010c9c5c * (&DAT_010c9c50)[iVar3 * 3] +
            DAT_010c9c64 * (&DAT_010c9c58)[iVar3 * 3] + DAT_010c9c60 * (&DAT_010c9c54)[iVar3 * 3];
    (&DAT_010c9c84)[iVar3 * 4] = fVar2;
    *(float *)(&DAT_010c9c90 + iVar3 * 4) = fVar2;
  }
  if ((uVar4 & 4) != 0) {
    fVar2 = _DAT_010c9c68 * (&DAT_010c9c50)[iVar3 * 3] +
            _DAT_010c9c70 * (&DAT_010c9c58)[iVar3 * 3] + _DAT_010c9c6c * (&DAT_010c9c54)[iVar3 * 3];
    *(float *)(&DAT_010c9c88 + iVar3 * 0x10) = fVar2;
    *(float *)(&DAT_010c9ca0 + iVar3 * 4) = fVar2;
  }
  if ((uVar4 & 8) != 0) {
    fVar2 = _DAT_010c9c74 * (&DAT_010c9c50)[iVar3 * 3] +
            _DAT_010c9c7c * (&DAT_010c9c58)[iVar3 * 3] + _DAT_010c9c78 * (&DAT_010c9c54)[iVar3 * 3];
    *(float *)(&DAT_010c9c8c + iVar3 * 0x10) = fVar2;
    *(float *)(&DAT_010c9cb0 + iVar3 * 4) = fVar2;
  }
  uVar5 = DAT_010c9be4;
  local_30 = 0;
  local_10 = 1;
  fVar2 = (&DAT_010c9c50)[iVar3 * 3] * (&DAT_010c9c50)[iVar3 * 3] +
          (&DAT_010c9c54)[iVar3 * 3] * (&DAT_010c9c54)[iVar3 * 3] +
          (&DAT_010c9c58)[iVar3 * 3] * (&DAT_010c9c58)[iVar3 * 3];
  (&DAT_010c9c80)[iVar3 * 5] = fVar2;
  *(undefined4 *)(&DAT_010c9ae0 + (iVar3 + uVar5 * 4) * 4) = 0x3f800000;
  local_2c = &DAT_010c9c80 + iVar3;
  local_14 = &DAT_010c9c80;
  local_18 = &DAT_010c9c80;
  local_1c = &DAT_010c9c80;
  do {
    if ((local_10 & uVar4) != 0) {
      uVar5 = DAT_010c9be4 | local_10;
      iVar1 = local_30 + uVar5 * 4;
      *(float *)(&DAT_010c9ae0 + iVar1 * 4) = fVar2 - (&DAT_010c9c80)[local_30 + iVar3 * 4];
      uVar9 = 1;
      *(float *)(&DAT_010c9ae0 + (iVar3 + uVar5 * 4) * 4) = *local_1c - *local_2c;
      iVar7 = 0;
      uVar4 = DAT_010c9bec;
      if (0x10c9c80 < (int)local_1c) {
        local_34 = local_18;
        local_20 = &DAT_010c9c80 + iVar3;
        pfVar8 = &DAT_010c9c80 + iVar3 * 4;
        local_28 = &DAT_010c9c80;
        local_24 = local_14;
        do {
          if ((DAT_010c9bec & uVar9) != 0) {
            uVar4 = uVar9 | uVar5;
            *(float *)(&DAT_010c9ae0 + (iVar7 + uVar4 * 4) * 4) =
                 ((&DAT_010c9c80)[local_30 + iVar3 * 4] - *pfVar8) *
                 *(float *)(&DAT_010c9ae0 + (iVar3 + uVar5 * 4) * 4) +
                 (*local_1c - *local_34) * *(float *)(&DAT_010c9ae0 + iVar1 * 4);
            iVar6 = (DAT_010c9be4 | uVar9) * 4;
            *(float *)(&DAT_010c9ae0 + (local_30 + uVar4 * 4) * 4) =
                 (*local_28 - *local_24) * *(float *)(&DAT_010c9ae0 + (iVar6 + iVar7) * 4) +
                 (*pfVar8 - (&DAT_010c9c80)[local_30 + iVar3 * 4]) *
                 *(float *)(&DAT_010c9ae0 + (iVar6 + iVar3) * 4);
            iVar6 = (uVar9 | local_10) * 4;
            *(float *)(&DAT_010c9ae0 + (iVar3 + uVar4 * 4) * 4) =
                 (*local_34 - *local_2c) * *(float *)(&DAT_010c9ae0 + (iVar6 + local_30) * 4) +
                 (*local_28 - *local_20) * *(float *)(&DAT_010c9ae0 + (iVar6 + iVar7) * 4);
          }
          local_28 = local_28 + 5;
          local_24 = local_24 + 4;
          local_20 = local_20 + 4;
          iVar7 = iVar7 + 1;
          pfVar8 = pfVar8 + 1;
          local_34 = local_34 + 1;
          uVar9 = uVar9 << 1;
          uVar4 = DAT_010c9bec;
        } while (iVar7 < local_30);
      }
    }
    local_18 = local_18 + 4;
    local_2c = local_2c + 4;
    local_1c = local_1c + 5;
    local_30 = local_30 + 1;
    local_14 = local_14 + 1;
    local_10 = local_10 << 1;
  } while ((int)local_1c < 0x10c9cd0);
  if (DAT_010c9be0 == 0xf) {
    _DAT_010c9bd0 =
         (DAT_010c9c94 - _DAT_010c9c90) * _DAT_010c9bc4 +
         (_DAT_010c9ca4 - _DAT_010c9ca0) * _DAT_010c9bc8 +
         (_DAT_010c9cb4 - _DAT_010c9cb0) * _DAT_010c9bcc;
    _DAT_010c9bd4 =
         (_DAT_010c9ca0 - _DAT_010c9ca4) * _DAT_010c9bb8 +
         (_DAT_010c9cb0 - _DAT_010c9cb4) * _DAT_010c9bbc +
         (DAT_010c9c80 - DAT_010c9c84) * _DAT_010c9bb0;
    _DAT_010c9bd8 =
         (_DAT_010c9c90 - _DAT_010c9c98) * _DAT_010c9b94 +
         (DAT_010c9c80 - _DAT_010c9c88) * _DAT_010c9b90 +
         (_DAT_010c9cb0 - _DAT_010c9cb8) * _DAT_010c9b9c;
    _DAT_010c9bdc =
         (DAT_010c9c80 - _DAT_010c9c8c) * _DAT_010c9b50 +
         (_DAT_010c9c90 - _DAT_010c9c9c) * _DAT_010c9b54 +
         (_DAT_010c9ca0 - _DAT_010c9cac) * _DAT_010c9b58;
  }
  return;
}


//// FUNCTION FUN_00a75510 @ 00a75510 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a75510(uint *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar1 = 0.0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  if ((*param_1 & 1) != 0) {
    iVar5 = *param_1 * 0x10;
    fVar1 = *(float *)(&DAT_010c9ae0 + iVar5);
    fVar2 = *(float *)(&DAT_010c9ae0 + iVar5);
    fVar3 = DAT_010c9c50 * fVar2;
    fVar4 = DAT_010c9c54 * fVar2;
    param_2[2] = DAT_010c9c58 * fVar2;
    *param_2 = fVar3;
    param_2[1] = fVar4;
  }
  if ((*param_1 & 2) != 0) {
    iVar5 = *param_1 * 0x10;
    fVar1 = fVar1 + *(float *)(&DAT_010c9ae4 + iVar5);
    fVar2 = *(float *)(&DAT_010c9ae4 + iVar5);
    fVar3 = DAT_010c9c60 * fVar2;
    fVar4 = DAT_010c9c64 * fVar2;
    *param_2 = DAT_010c9c5c * fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar4 + param_2[2];
  }
  if ((*param_1 & 4) != 0) {
    iVar5 = *param_1 * 0x10;
    fVar1 = fVar1 + *(float *)(&DAT_010c9ae8 + iVar5);
    fVar2 = *(float *)(&DAT_010c9ae8 + iVar5);
    fVar3 = _DAT_010c9c6c * fVar2;
    fVar4 = _DAT_010c9c70 * fVar2;
    *param_2 = _DAT_010c9c68 * fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar4 + param_2[2];
  }
  if ((*param_1 & 8) != 0) {
    iVar5 = *param_1 * 0x10;
    fVar1 = fVar1 + *(float *)(&DAT_010c9aec + iVar5);
    fVar2 = *(float *)(&DAT_010c9aec + iVar5);
    fVar3 = _DAT_010c9c78 * fVar2;
    fVar4 = _DAT_010c9c7c * fVar2;
    *param_2 = _DAT_010c9c74 * fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar4 + param_2[2];
  }
  fVar1 = 1.0 / fVar1;
  *param_2 = fVar1 * *param_2;
  param_2[1] = fVar1 * param_2[1];
  param_2[2] = fVar1 * param_2[2];
  return;
}


//// FUNCTION FUN_00a75690 @ 00a75690 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a75690(uint *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar1 = 0.0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  param_3[2] = 0.0;
  param_3[1] = 0.0;
  *param_3 = 0.0;
  if ((*param_1 & 1) != 0) {
    iVar5 = *param_1 * 0x10;
    fVar1 = *(float *)(&DAT_010c9ae0 + iVar5);
    fVar2 = *(float *)(&DAT_010c9ae0 + iVar5);
    fVar3 = DAT_010c9bf4 * fVar2;
    fVar4 = DAT_010c9bf8 * fVar2;
    *param_2 = DAT_010c9bf0 * fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar4 + param_2[2];
    fVar2 = *(float *)(&DAT_010c9ae0 + *param_1 * 0x10);
    fVar3 = DAT_010c9c24 * fVar2;
    fVar4 = DAT_010c9c28 * fVar2;
    *param_3 = DAT_010c9c20 * fVar2 + *param_3;
    param_3[1] = fVar3 + param_3[1];
    param_3[2] = fVar4 + param_3[2];
  }
  if ((*param_1 & 2) != 0) {
    iVar5 = *param_1 * 0x10;
    fVar1 = fVar1 + *(float *)(&DAT_010c9ae4 + iVar5);
    fVar2 = *(float *)(&DAT_010c9ae4 + iVar5);
    fVar3 = _DAT_010c9c00 * fVar2;
    fVar4 = _DAT_010c9c04 * fVar2;
    *param_2 = _DAT_010c9bfc * fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar4 + param_2[2];
    fVar2 = *(float *)(&DAT_010c9ae4 + *param_1 * 0x10);
    fVar3 = _DAT_010c9c30 * fVar2;
    fVar4 = _DAT_010c9c34 * fVar2;
    *param_3 = _DAT_010c9c2c * fVar2 + *param_3;
    param_3[1] = fVar3 + param_3[1];
    param_3[2] = fVar4 + param_3[2];
  }
  if ((*param_1 & 4) != 0) {
    iVar5 = *param_1 * 0x10;
    fVar1 = fVar1 + *(float *)(&DAT_010c9ae8 + iVar5);
    fVar2 = *(float *)(&DAT_010c9ae8 + iVar5);
    fVar3 = _DAT_010c9c0c * fVar2;
    fVar4 = _DAT_010c9c10 * fVar2;
    *param_2 = _DAT_010c9c08 * fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar4 + param_2[2];
    fVar2 = *(float *)(&DAT_010c9ae8 + *param_1 * 0x10);
    fVar3 = _DAT_010c9c3c * fVar2;
    fVar4 = _DAT_010c9c40 * fVar2;
    *param_3 = _DAT_010c9c38 * fVar2 + *param_3;
    param_3[1] = fVar3 + param_3[1];
    param_3[2] = fVar4 + param_3[2];
  }
  if ((*param_1 & 8) != 0) {
    iVar5 = *param_1 * 0x10;
    fVar1 = fVar1 + *(float *)(&DAT_010c9aec + iVar5);
    fVar2 = *(float *)(&DAT_010c9aec + iVar5);
    fVar3 = _DAT_010c9c18 * fVar2;
    fVar4 = _DAT_010c9c1c * fVar2;
    *param_2 = _DAT_010c9c14 * fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar4 + param_2[2];
    fVar2 = *(float *)(&DAT_010c9aec + *param_1 * 0x10);
    fVar3 = _DAT_010c9c48 * fVar2;
    fVar4 = _DAT_010c9c4c * fVar2;
    *param_3 = _DAT_010c9c44 * fVar2 + *param_3;
    param_3[1] = fVar3 + param_3[1];
    param_3[2] = fVar4 + param_3[2];
  }
  fVar1 = 1.0 / fVar1;
  *param_2 = fVar1 * *param_2;
  param_2[1] = fVar1 * param_2[1];
  param_2[2] = fVar1 * param_2[2];
  *param_3 = fVar1 * *param_3;
  param_3[1] = fVar1 * param_3[1];
  param_3[2] = fVar1 * param_3[2];
  return;
}


//// FUNCTION FUN_00a75960 @ 00a75960 ////

void __fastcall FUN_00a75960(float *param_1)

{
  float local_dc;
  float local_d8;
  float local_d4;
  void *local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_84 [2];
  byte local_82;
  void *local_70;
  undefined1 local_6c [2];
  byte local_6a;
  void *local_58;
  undefined1 local_54 [2];
  byte local_52;
  void *local_40;
  undefined1 local_3c [2];
  byte local_3a;
  void *local_28;
  undefined1 local_24 [2];
  byte local_22;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc00b;
  local_c = ExceptionList;
  local_ac = param_1[2] - param_1[5];
  local_d8 = param_1[1] - param_1[4];
  local_dc = *param_1 - param_1[3];
  local_bc = param_1[3] + *param_1;
  local_d4 = param_1[2] + param_1[5];
  ExceptionList = &local_c;
  local_c4 = local_d8;
  local_b8 = local_dc;
  local_b4 = local_dc;
  local_b0 = local_d8;
  local_a8 = local_bc;
  local_a4 = local_d8;
  local_a0 = local_ac;
  local_9c = local_bc;
  local_98 = local_d8;
  local_94 = local_d4;
  local_90 = local_dc;
  local_8c = local_d8;
  local_88 = local_d4;
  FUN_00a743d0(local_54,&local_b4,4);
  local_ac = param_1[2] - param_1[5];
  local_4 = 0;
  local_d8 = param_1[1] + param_1[4];
  local_dc = param_1[3] + *param_1;
  local_b8 = *param_1 - param_1[3];
  local_d4 = param_1[2] + param_1[5];
  local_c4 = local_d8;
  local_bc = local_dc;
  local_b4 = local_dc;
  local_b0 = local_d8;
  local_a8 = local_b8;
  local_a4 = local_d8;
  local_a0 = local_ac;
  local_9c = local_b8;
  local_98 = local_d8;
  local_94 = local_d4;
  local_90 = local_dc;
  local_8c = local_d8;
  local_88 = local_d4;
  FUN_00a743d0(local_6c,&local_b4,4);
  local_ac = param_1[2] - param_1[5];
  local_4._0_1_ = 1;
  local_d8 = param_1[1] + param_1[4];
  local_dc = *param_1 - param_1[3];
  local_a4 = param_1[1] - param_1[4];
  local_d4 = param_1[2] + param_1[5];
  local_c4 = local_d8;
  local_c0 = local_d4;
  local_bc = local_d4;
  local_b8 = local_dc;
  local_b4 = local_dc;
  local_b0 = local_d8;
  local_a8 = local_dc;
  local_a0 = local_ac;
  local_9c = local_dc;
  local_98 = local_a4;
  local_94 = local_d4;
  local_90 = local_dc;
  local_8c = local_d8;
  local_88 = local_d4;
  FUN_00a743d0(local_3c,&local_b4,4);
  local_ac = param_1[2] - param_1[5];
  local_4._0_1_ = 2;
  local_d8 = param_1[1] - param_1[4];
  local_dc = param_1[3] + *param_1;
  local_a4 = param_1[1] + param_1[4];
  local_d4 = param_1[2] + param_1[5];
  local_c4 = local_d8;
  local_c0 = local_d4;
  local_bc = local_dc;
  local_b8 = local_d4;
  local_b4 = local_dc;
  local_b0 = local_d8;
  local_a8 = local_dc;
  local_a0 = local_ac;
  local_9c = local_dc;
  local_98 = local_a4;
  local_94 = local_d4;
  local_90 = local_dc;
  local_8c = local_d8;
  local_88 = local_d4;
  FUN_00a743d0(local_24,&local_b4,4);
  local_d4 = param_1[2] + param_1[5];
  local_4._0_1_ = 3;
  local_b0 = param_1[1] - param_1[4];
  local_dc = *param_1 - param_1[3];
  local_a8 = param_1[3] + *param_1;
  local_d8 = param_1[1] + param_1[4];
  local_c4 = local_d8;
  local_c0 = local_d8;
  local_bc = local_d4;
  local_b8 = local_dc;
  local_b4 = local_dc;
  local_ac = local_d4;
  local_a4 = local_b0;
  local_a0 = local_d4;
  local_9c = local_a8;
  local_98 = local_d8;
  local_94 = local_d4;
  local_90 = local_dc;
  local_8c = local_d8;
  local_88 = local_d4;
  FUN_00a743d0(local_84,&local_b4,4);
  local_dc = *param_1 - param_1[3];
  local_4 = CONCAT31(local_4._1_3_,4);
  local_b0 = param_1[1] + param_1[4];
  local_d4 = param_1[2] - param_1[5];
  local_a8 = param_1[3] + *param_1;
  local_d8 = param_1[1] - param_1[4];
  local_c0 = local_d4;
  local_b4 = local_dc;
  local_ac = local_d4;
  local_a4 = local_b0;
  local_a0 = local_d4;
  local_9c = local_a8;
  local_98 = local_d8;
  local_94 = local_d4;
  local_90 = local_dc;
  local_8c = local_d8;
  local_88 = local_d4;
  FUN_00a743d0(&local_dc,&local_b4,4);
  if (((uint)local_dc & 0x10000) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_c8);
  }
  if ((local_82 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  if ((local_22 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_10);
  }
  if ((local_3a & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  if ((local_6a & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  if ((local_52 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a75f70 @ 00a75f70 ////

char __cdecl FUN_00a75f70(ushort *param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if ((((*(float *)(param_1 + 2) <= *(float *)(param_2 + 6)) &&
       (*(float *)(param_2 + 2) <= *(float *)(param_1 + 6))) &&
      (*(float *)(param_1 + 4) <= *(float *)(param_2 + 8))) &&
     (*(float *)(param_2 + 4) <= *(float *)(param_1 + 8))) {
    uVar1 = FUN_00a74690(param_1,*(int *)(param_2 + 10),(uint)*param_2);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00a74690(param_2,*(int *)(param_1 + 10),(uint)*param_1);
      return '\x01' - ((char)uVar1 != '\0');
    }
  }
  return '\0';
}


//// FUNCTION FUN_00a75ff0 @ 00a75ff0 ////

int __cdecl FUN_00a75ff0(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  uint3 uVar3;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00a749e0(&local_c,param_1);
  pfVar1 = *(float **)(param_1 + 0x14);
  fVar2 = (*param_2 - *pfVar1) * local_c +
          local_8 * (param_2[1] - pfVar1[1]) + local_4 * (param_2[2] - pfVar1[2]);
  uVar3 = (uint3)(CONCAT22((short)((uint)pfVar1 >> 0x10),
                           (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                           (ushort)(fVar2 == 0.0) << 0xe) >> 8);
  if (fVar2 >= 0.0 && (fVar2 == 0.0) == 0) {
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}


//// FUNCTION LH_LoadMeshCollisionHullSet @ 00a76060 ////

int __thiscall LH_LoadMeshCollisionHullSet(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  void *this_00;
  int iVar3;
  ushort *puVar4;
  
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)((int)param_1 + 6);
  *(undefined1 *)((int)this + 7) = *(undefined1 *)((int)param_1 + 7);
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  puVar1 = param_1 + 4;
  if ((*(byte *)((int)this + 6) & 1) != 0) {
    *(undefined4 *)((int)this + 0x10) = *puVar1;
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    *(undefined4 *)((int)this + 0x18) = param_1[6];
    *(undefined4 *)((int)this + 0x1c) = param_1[7];
    *(undefined4 *)((int)this + 0x20) = param_1[8];
    *(undefined4 *)((int)this + 0x24) = param_1[9];
    puVar1 = param_1 + 10;
  }
  iVar3 = 0;
  *(int *)((int)this + 8) = ((int)puVar1 - (int)param_1) + (int)this;
  puVar4 = (ushort *)(puVar1 + *(ushort *)((int)this + 4));
  if (*(ushort *)((int)this + 4) != 0) {
    do {
      *(int *)(*(int *)((int)this + 8) + iVar3 * 4) = ((int)puVar4 - (int)param_1) + (int)this;
      puVar2 = LH_LoadCollisionHullPiece(*(void **)(*(int *)((int)this + 8) + iVar3 * 4),puVar4);
      puVar4 = (ushort *)((int)puVar4 + (int)puVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)((int)this + 4));
  }
  this_00 = (void *)(((int)puVar4 - (int)param_1) + (int)this);
  *(void **)((int)this + 0xc) = this_00;
  puVar2 = LH_LoadCollisionHullPiece(this_00,puVar4);
  CollisionHullSet_ComputeBoundingBox((int)this);
  *(byte *)((int)this + 6) = *(byte *)((int)this + 6) | 1;
  return (int)((int)puVar4 + (int)puVar2) - (int)param_1;
}


//// FUNCTION FUN_00a761e0 @ 00a761e0 ////

undefined4 * __cdecl FUN_00a761e0(float *param_1,float *param_2)

{
  ushort *puVar1;
  undefined4 *this;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  this = operator_new(0x238);
  puVar4 = this;
  for (iVar3 = 0x8e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(byte *)((int)this + 6) = *(byte *)((int)this + 6) | 1;
  *this = 0x238;
  *(undefined2 *)(this + 1) = 6;
  this[2] = this + 10;
  this[10] = this + 0x10;
  local_30[0] = *param_1 - *param_2;
  local_30[1] = param_1[1] - param_2[1];
  local_30[2] = param_1[2] - param_2[2];
  local_30[3] = *param_1 + *param_2;
  local_10 = param_1[2] + param_2[2];
  local_20 = local_30[1];
  local_1c = local_30[2];
  local_18 = local_30[3];
  local_14 = local_30[1];
  local_c = local_30[0];
  local_8 = local_30[1];
  local_4 = local_10;
  FUN_00a73e80(this,0,local_30,4);
  local_30[0] = *param_1 + *param_2;
  local_30[1] = param_2[1] + param_1[1];
  local_30[2] = param_1[2] - param_2[2];
  local_30[3] = *param_1 - *param_2;
  local_10 = param_1[2] + param_2[2];
  local_20 = local_30[1];
  local_1c = local_30[2];
  local_18 = local_30[3];
  local_14 = local_30[1];
  local_c = local_30[0];
  local_8 = local_30[1];
  local_4 = local_10;
  FUN_00a73e80(this,1,local_30,4);
  local_30[0] = *param_1 - *param_2;
  local_30[1] = param_2[1] + param_1[1];
  local_30[2] = param_1[2] - param_2[2];
  local_20 = param_1[1] - param_2[1];
  local_10 = param_1[2] + param_2[2];
  local_30[3] = local_30[0];
  local_1c = local_30[2];
  local_18 = local_30[0];
  local_14 = local_20;
  local_c = local_30[0];
  local_8 = local_30[1];
  local_4 = local_10;
  FUN_00a73e80(this,2,local_30,4);
  local_30[0] = *param_1 + *param_2;
  local_30[1] = param_1[1] - param_2[1];
  local_30[2] = param_1[2] - param_2[2];
  local_20 = param_2[1] + param_1[1];
  local_10 = param_1[2] + param_2[2];
  local_30[3] = local_30[0];
  local_1c = local_30[2];
  local_18 = local_30[0];
  local_14 = local_20;
  local_c = local_30[0];
  local_8 = local_30[1];
  local_4 = local_10;
  FUN_00a73e80(this,3,local_30,4);
  local_30[0] = *param_1 - *param_2;
  local_30[1] = param_1[1] - param_2[1];
  local_30[2] = param_1[2] + param_2[2];
  local_30[3] = *param_1 + *param_2;
  local_14 = param_2[1] + param_1[1];
  local_20 = local_30[1];
  local_1c = local_30[2];
  local_18 = local_30[3];
  local_10 = local_30[2];
  local_c = local_30[0];
  local_8 = local_14;
  local_4 = local_30[2];
  FUN_00a73e80(this,4,local_30,4);
  local_30[0] = *param_1 - *param_2;
  local_30[1] = param_2[1] + param_1[1];
  local_30[2] = param_1[2] - param_2[2];
  local_30[3] = *param_1 + *param_2;
  local_14 = param_1[1] - param_2[1];
  local_20 = local_30[1];
  local_1c = local_30[2];
  local_18 = local_30[3];
  local_10 = local_30[2];
  local_c = local_30[0];
  local_8 = local_14;
  local_4 = local_30[2];
  FUN_00a73e80(this,5,local_30,4);
  pfVar2 = local_30 + 2;
  iVar3 = 4;
  do {
    *pfVar2 = 0.0;
    pfVar2 = pfVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = *(ushort **)(this[2] + -4 + (uint)*(ushort *)(this + 1) * 4);
  puVar1 = puVar1 + (*puVar1 + 2) * 6;
  this[3] = puVar1;
  *puVar1 = 4;
  *(ushort **)(this[3] + 0x14) = puVar1 + 0xc;
  pfVar2 = local_30;
  pfVar5 = *(float **)(this[3] + 0x14);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_00a73ab0((void *)(this[3] + 4),*(float **)(this[3] + 0x14),4);
  CollisionHullSet_ComputeBoundingBox((int)this);
  *(byte *)((int)this + 6) = *(byte *)((int)this + 6) | 1;
  return this;
}


//// FUNCTION FUN_00a76740 @ 00a76740 ////

undefined4 __cdecl FUN_00a76740(float *param_1)

{
  int iVar1;
  float fVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  undefined2 extraout_var_00;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float local_14;
  float *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00a75060();
  pfVar8 = DAT_010c9bec;
  uVar6 = DAT_010c9be4;
  for (pfVar7 = DAT_010c9bec; pfVar7 != (float *)0x0; pfVar7 = (float *)((int)pfVar7 - 1)) {
    if ((float *)((uint)pfVar8 & (uint)pfVar7) == pfVar7) {
      local_10 = (float *)(uVar6 | (uint)pfVar7);
      uVar3 = FUN_00a73f70((uint *)&local_10);
      if ((char)uVar3 != '\0') {
        DAT_010c9bec = (float *)(uVar6 | (uint)pfVar7);
        uVar4 = FUN_00a75510((uint *)&DAT_010c9bec,param_1);
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
  }
  uVar3 = FUN_00a73f70(&DAT_010c9be4);
  iVar5 = DAT_010c9be8;
  pfVar7 = (float *)CONCAT22(extraout_var,uVar3);
  if ((char)uVar3 != '\0') {
    DAT_010c9bec = (float *)uVar6;
    *param_1 = (float)(&DAT_010c9c50)[DAT_010c9be8 * 3];
    param_1[1] = (float)(&DAT_010c9c54)[iVar5 * 3];
    param_1[2] = (float)(&DAT_010c9c58)[iVar5 * 3];
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  local_14 = 1e+10;
  pfVar8 = DAT_010c9be0;
  do {
    if (pfVar8 == (float *)0x0) {
      return (uint)pfVar7 & 0xffffff00;
    }
    pfVar7 = (float *)((uint)DAT_010c9be0 & (uint)pfVar8);
    if ((float *)((uint)DAT_010c9be0 & (uint)pfVar8) == pfVar8) {
      iVar5 = 0;
      uVar6 = 1;
      do {
        if (((uint)pfVar8 & uVar6) != 0) {
          iVar1 = iVar5 + (int)pfVar8 * 4;
          fVar2 = *(float *)(&DAT_010c9ae0 + iVar1 * 4);
          pfVar7 = (float *)CONCAT22((short)((uint)iVar1 >> 0x10),
                                     (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                                     (ushort)(fVar2 == 0.0) << 0xe);
          if (fVar2 < 0.0 != (fVar2 == 0.0)) goto LAB_00a768a6;
        }
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 << 1;
      } while (iVar5 < 4);
      local_10 = pfVar8;
      FUN_00a75510((uint *)&local_10,&local_c);
      fVar2 = local_c * local_c + local_8 * local_8 + local_4 * local_4;
      pfVar7 = (float *)CONCAT22(extraout_var_00,
                                 (ushort)(fVar2 < local_14) << 8 |
                                 (ushort)(NAN(fVar2) || NAN(local_14)) << 10 |
                                 (ushort)(fVar2 == local_14) << 0xe);
      if (fVar2 < local_14) {
        DAT_010c9bec = pfVar8;
        *param_1 = local_c;
        param_1[1] = local_8;
        param_1[2] = local_4;
        pfVar7 = param_1;
        local_14 = fVar2;
      }
    }
LAB_00a768a6:
    pfVar8 = (float *)((int)pfVar8 - 1);
  } while( true );
}


//// FUNCTION FUN_00a768c0 @ 00a768c0 ////

float10 __thiscall FUN_00a768c0(void *param_1,void *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  float *pfVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  float local_54;
  float local_50;
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
  float local_18 [3];
  float local_c [3];
  
  local_48 = *(float *)((int)param_2 + 0x10) - *(float *)((int)param_1 + 0x10);
  local_50 = 0.0;
  local_44 = *(float *)((int)param_2 + 0x14) - *(float *)((int)param_1 + 0x14);
  local_40 = *(float *)((int)param_2 + 0x18) - *(float *)((int)param_1 + 0x18);
  DAT_010c9bec = 0;
  DAT_010c9be0 = 0;
  local_54 = SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40);
  while (1e-07 < local_54) {
    iVar9 = 0;
    uVar8 = 1;
    uVar1 = DAT_010c9bec & 1;
    while (uVar1 != 0) {
      uVar8 = uVar8 << 1;
      iVar9 = iVar9 + 1;
      uVar1 = DAT_010c9bec & uVar8;
    }
    DAT_010c9be4 = uVar8;
    DAT_010c9be8 = iVar9;
    pfVar6 = (float *)FUN_00a74e20(param_1,local_18,&local_48);
    local_24 = -local_48;
    local_20 = -local_44;
    (&DAT_010c9bf0)[iVar9 * 3] = *pfVar6;
    local_1c = -local_40;
    (&DAT_010c9bf4)[iVar9 * 3] = pfVar6[1];
    (&DAT_010c9bf8)[iVar9 * 3] = pfVar6[2];
    pfVar6 = (float *)FUN_00a74e20(param_2,local_c,&local_24);
    (&DAT_010c9c20)[iVar9 * 3] = *pfVar6;
    (&DAT_010c9c24)[iVar9 * 3] = pfVar6[1];
    (&DAT_010c9c28)[iVar9 * 3] = pfVar6[2];
    fVar2 = (float)(&DAT_010c9bf0)[iVar9 * 3] - (float)(&DAT_010c9c20)[iVar9 * 3];
    fVar3 = (float)(&DAT_010c9bf4)[iVar9 * 3] - (float)(&DAT_010c9c24)[iVar9 * 3];
    local_34 = (float)(&DAT_010c9bf8)[iVar9 * 3] - (float)(&DAT_010c9c28)[iVar9 * 3];
    fVar4 = (fVar2 * local_48 + fVar3 * local_44 + local_34 * local_40) / local_54;
    if (local_50 < fVar4) {
      local_50 = fVar4;
    }
    local_3c = fVar2;
    local_38 = fVar3;
    local_30 = fVar2;
    local_2c = fVar3;
    local_28 = local_34;
    if ((local_54 - local_50 <= local_54 * 0.0001) ||
       (uVar5 = FUN_00a75000(&local_3c), (char)uVar5 != '\0')) break;
    (&DAT_010c9c50)[iVar9 * 3] = fVar2;
    uVar1 = DAT_010c9bec;
    (&DAT_010c9c54)[iVar9 * 3] = fVar3;
    DAT_010c9be0 = uVar8 | uVar1;
    (&DAT_010c9c58)[iVar9 * 3] = local_28;
    uVar7 = FUN_00a76740(&local_48);
    if (((char)uVar7 == '\0') ||
       (local_54 = SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40),
       0xe < (int)DAT_010c9bec)) break;
  }
  FUN_00a75690(&DAT_010c9bec,param_3,param_4);
  return (float10)local_54;
}


//// FUNCTION FUN_00a76d00 @ 00a76d00 ////

undefined4 __thiscall FUN_00a76d00(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  return 0x14;
}


//// FUNCTION FUN_00a76d40 @ 00a76d40 ////

void __thiscall FUN_00a76d40(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return;
}


//// FUNCTION Skeleton_ReadBoneRecord @ 00a76d60 ////

void __thiscall Skeleton_ReadBoneRecord(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  puVar2 = param_1 + 9;
  puVar3 = (undefined4 *)((int)this + 0x24);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a76d90 @ 00a76d90 ////

int __thiscall FUN_00a76d90(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 8;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (int)(param_1 + 8) + (0x30 - (int)param_1);
}


//// FUNCTION FUN_00a76e60 @ 00a76e60 ////

void __fastcall FUN_00a76e60(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00a76eb0 @ 00a76eb0 ////

void __thiscall FUN_00a76eb0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x18)) {
    piVar1 = *(int **)((int)this + 0x1c);
    piVar3 = piVar1;
    do {
      if (((*piVar3 == param_1) || (piVar3[1] == param_1)) &&
         ((*piVar3 == param_2 || (piVar3[1] == param_2)))) {
        piVar1[iVar2 * 3 + 2] = piVar1[iVar2 * 3 + 2] + 1;
        return;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < *(int *)((int)this + 0x18));
  }
  *(int *)(iVar2 * 0xc + *(int *)((int)this + 0x1c)) = param_1;
  *(int *)(*(int *)((int)this + 0x1c) + 4 + iVar2 * 0xc) = param_2;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return;
}


//// FUNCTION FUN_00a76f30 @ 00a76f30 ////

void __thiscall FUN_00a76f30(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar2 = param_1;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    param_1 = 0;
    do {
      iVar1 = *(int *)(iVar2 + 0x20);
      puVar4 = (ushort *)(iVar1 + param_1);
      FUN_00a76eb0(this,*(int *)(*(int *)((int)this + 0xc) + (uint)*puVar4 * 4),
                   *(int *)(*(int *)((int)this + 0xc) + (uint)*(ushort *)(iVar1 + 2 + param_1) * 4))
      ;
      FUN_00a76eb0(this,*(int *)(*(int *)((int)this + 0xc) + (uint)puVar4[1] * 4),
                   *(int *)(*(int *)((int)this + 0xc) + (uint)puVar4[2] * 4));
      FUN_00a76eb0(this,*(int *)(*(int *)((int)this + 0xc) + (uint)*puVar4 * 4),
                   *(int *)(*(int *)((int)this + 0xc) + (uint)puVar4[2] * 4));
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 6;
    } while (iVar3 < *(int *)(iVar2 + 0x1c));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x18)) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)((int)this + 0x1c) + 8 + iVar3) == 0) {
        *(undefined1 *)(*(int *)(*(int *)((int)this + 0x1c) + iVar3) + *(int *)((int)this + 0x14)) =
             1;
        *(undefined1 *)
         (*(int *)(*(int *)((int)this + 0x1c) + 4 + iVar3) + *(int *)((int)this + 0x14)) = 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(int *)((int)this + 0x18));
  }
  iVar2 = 0;
  if (0 < *(int *)this) {
    do {
      *(undefined1 *)(iVar2 + *(int *)((int)this + 0x10)) =
           *(undefined1 *)
            (*(int *)(*(int *)((int)this + 0xc) + iVar2 * 4) + *(int *)((int)this + 0x14));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)this);
  }
  return;
}


//// FUNCTION FUN_00a77020 @ 00a77020 ////

void __thiscall FUN_00a77020(void *this,int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int local_4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    local_4 = 0;
    do {
      pfVar1 = (float *)(*(int *)(param_1 + 0x30) + local_4);
      iVar3 = 0;
      if (0 < *(int *)((int)this + 4)) {
        pfVar4 = *(float **)((int)this + 8);
        do {
          if (((*pfVar4 == *pfVar1) && (pfVar4[1] == pfVar1[1])) && (pfVar4[2] == pfVar1[2])) break;
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 3;
        } while (iVar3 < *(int *)((int)this + 4));
      }
      if (iVar3 == *(int *)((int)this + 4)) {
        pfVar4 = (float *)(*(int *)((int)this + 8) + iVar3 * 0xc);
        *pfVar4 = *pfVar1;
        pfVar4[1] = pfVar1[1];
        pfVar4[2] = pfVar1[2];
        *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      }
      *(int *)(*(int *)((int)this + 0xc) + iVar2 * 4) = iVar3;
      iVar2 = iVar2 + 1;
      local_4 = local_4 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  return;
}


//// FUNCTION FUN_00a770e0 @ 00a770e0 ////

uint * __thiscall FUN_00a770e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar7 = iVar1 * 3;
  iVar2 = *(int *)(param_1 + 0x2c);
  *(int *)this = iVar2;
  *(undefined4 *)((int)this + 4) = 0;
  pvVar3 = operator_new(iVar2 * 0xc);
  *(void **)((int)this + 8) = pvVar3;
  pvVar3 = operator_new(*(int *)this << 2);
  *(void **)((int)this + 0xc) = pvVar3;
  pvVar3 = operator_new(*(uint *)this);
  *(void **)((int)this + 0x10) = pvVar3;
  pvVar3 = operator_new(*(uint *)this);
  *(void **)((int)this + 0x14) = pvVar3;
  *(undefined4 *)((int)this + 0x18) = 0;
  pvVar3 = operator_new(iVar1 * 0x24);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else if (-1 < iVar7 + -1) {
    puVar4 = (undefined4 *)((int)pvVar3 + 8);
    do {
      puVar4[-2] = 0xffffffff;
      puVar4[-1] = 0xffffffff;
      *puVar4 = 0;
      puVar4 = puVar4 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar6 = *(uint *)this;
  *(void **)((int)this + 0x1c) = pvVar3;
  puVar4 = *(undefined4 **)((int)this + 0x10);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  uVar6 = *(uint *)this;
  puVar4 = *(undefined4 **)((int)this + 0x14);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  FUN_00a77020(this,param_1);
  FUN_00a76f30(this,param_1);
  return this;
}


//// FUNCTION FUN_00a77220 @ 00a77220 ////

byte FUN_00a77220(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1 * 0x22 + 0x23 + param_2;
  cVar2 = (&DAT_0105ef66)[iVar1];
  if ((*(char *)(iVar1 + 0x105ef88) == cVar2) &&
     (*(char *)(iVar1 + 0x105ef87) == (&DAT_0105ef65)[iVar1])) {
    return 0;
  }
  if (*(char *)(iVar1 + 0x105ef88) == '\0') {
    if (cVar2 != '\0') {
      return -((&DAT_0105ef65)[iVar1] != '\0') & 7;
    }
  }
  else if (cVar2 == '\0') {
    return ((&DAT_0105ef65)[iVar1] != '\0') - 1U & 7;
  }
  return 5;
}


//// FUNCTION FUN_00a772a0 @ 00a772a0 ////

byte FUN_00a772a0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1 * 0x22 + 0x23 + param_2;
  cVar2 = (&DAT_0105efaa)[iVar1];
  if ((*(char *)(iVar1 + 0x105ef88) == cVar2) &&
     (*(char *)(iVar1 + 0x105ef87) == (&DAT_0105efa9)[iVar1])) {
    return 0;
  }
  if (*(char *)(iVar1 + 0x105ef88) == '\0') {
    if (cVar2 != '\0') {
      return -((&DAT_0105efa9)[iVar1] != '\0') & 8;
    }
  }
  else if (cVar2 == '\0') {
    return ((&DAT_0105efa9)[iVar1] != '\0') - 1U & 8;
  }
  return 6;
}


//// FUNCTION FUN_00a77320 @ 00a77320 ////

bool FUN_00a77320(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1 * 0x22 + 0x23 + param_2;
  cVar2 = *(char *)(iVar1 + 0x105ef87);
  if ((*(char *)(iVar1 + 0x105ef88) == cVar2) && ((&DAT_0105ef66)[iVar1] == (&DAT_0105ef65)[iVar1]))
  {
    return false;
  }
  if (*(char *)(iVar1 + 0x105ef88) == '\0') {
    if ((&DAT_0105ef65)[iVar1] != '\0') {
      return true;
    }
    return cVar2 == '\0';
  }
  if (cVar2 != '\0') {
    return true;
  }
  return (bool)(((&DAT_0105ef65)[iVar1] != '\0') - 1U & 3);
}


//// FUNCTION FUN_00a773a0 @ 00a773a0 ////

byte FUN_00a773a0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1 * 0x22 + 0x23 + param_2;
  cVar2 = *(char *)(iVar1 + 0x105ef89);
  if ((*(char *)(iVar1 + 0x105ef88) == cVar2) && ((&DAT_0105ef66)[iVar1] == (&DAT_0105ef67)[iVar1]))
  {
    return 0;
  }
  if (*(char *)(iVar1 + 0x105ef88) == '\0') {
    if (cVar2 != '\0') {
      return -((&DAT_0105ef67)[iVar1] != '\0') & 4;
    }
  }
  else if (cVar2 == '\0') {
    return ((&DAT_0105ef67)[iVar1] != '\0') - 1U & 4;
  }
  return 2;
}


//// FUNCTION FUN_00a77420 @ 00a77420 ////

void __fastcall FUN_00a77420(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a7742b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(param_1 + 4))();
    return;
  }
  return;
}


//// FUNCTION FUN_00a77430 @ 00a77430 ////

void __fastcall FUN_00a77430(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a77438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)*param_1)();
    return;
  }
  return;
}


//// FUNCTION FUN_00a77450 @ 00a77450 ////

void __thiscall
FUN_00a77450(void *this,int param_1,float param_2,float param_3,int param_4,int param_5)

{
  float *pfVar1;
  short *psVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  float *pfVar12;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  fVar5 = param_3;
  fVar3 = param_2;
  if (((float)param_1 == param_2) &&
     (uVar6 = FUN_009f0710(param_1,(int)param_3), (char)uVar6 == '\0')) {
    return;
  }
  uVar6 = *(uint *)((int)this + 0xc);
  if ((uVar6 & 0x10000) != 0) goto LAB_00a77b75;
  if (*(int *)this == 0) {
    return;
  }
  if (*(int *)((int)this + 4) == 0) {
    return;
  }
  fVar4 = (float)(param_1 * 2);
  local_14 = (float)((int)fVar5 * 2);
  psVar2 = (short *)(*(int *)(*(int *)this + 0xc) + (uVar6 & 0xffff) * 0x24);
  sVar9 = (short)uVar6 * 8;
  *psVar2 = sVar9;
  psVar2[3] = sVar9;
  psVar2[1] = sVar9 + 4;
  sVar10 = sVar9 + 5;
  psVar2[2] = sVar10;
  psVar2[4] = sVar10;
  psVar2[0xd] = sVar10;
  sVar10 = sVar9 + 1;
  psVar2[5] = sVar10;
  psVar2[0xc] = sVar10;
  psVar2[0xf] = sVar10;
  psVar2[6] = sVar9 + 7;
  psVar2[9] = sVar9 + 7;
  psVar2[7] = sVar9 + 3;
  sVar10 = sVar9 + 2;
  psVar2[8] = sVar10;
  local_18 = (float)((int)fVar3 + 1) + (float)((int)fVar3 + 1);
  psVar2[10] = sVar10;
  psVar2[0x11] = sVar10;
  sVar9 = sVar9 + 6;
  psVar2[0xb] = sVar9;
  psVar2[0xe] = sVar9;
  psVar2[0x10] = sVar9;
  local_20 = local_14 - 0.05;
  psVar2 = (short *)(*(int *)(*(int *)((int)this + 4) + 0xc) +
                    (*(uint *)((int)this + 0xc) & 0xffff) * 0xc);
  sVar9 = (short)*(uint *)((int)this + 0xc) * 4;
  *psVar2 = sVar9;
  psVar2[3] = sVar9;
  psVar2[1] = sVar9 + 2;
  psVar2[2] = sVar9 + 1;
  psVar2[5] = sVar9 + 2;
  psVar2[4] = sVar9 + 3;
  pfVar12 = (float *)((*(uint *)((int)this + 0xc) & 0xffff) * 0xc0 + *(int *)(*(int *)this + 0x10));
  *pfVar12 = fVar4;
  local_1c = 0;
  pfVar12[1] = local_20;
  pfVar12[2] = 0.0;
  local_24 = fVar4;
  local_c = fVar4;
  local_8 = local_14;
  pfVar7 = (float *)FUN_00412ab0(&param_2,0xdc,0xdc,0xdc);
  local_20 = local_8 - 0.025;
  pfVar12[3] = *pfVar7;
  pfVar7 = pfVar12 + 6;
  *pfVar7 = fVar4;
  pfVar12[7] = local_20;
  local_1c = 0;
  pfVar12[8] = 0.0;
  local_24 = fVar4;
  pfVar8 = (float *)FUN_00412ab0(&param_2,0xff,0xff,0xff);
  param_2 = local_c;
  local_24 = local_c;
  pfVar1 = pfVar12 + 0xc;
  local_20 = local_8 + 0.025;
  pfVar12[9] = *pfVar8;
  *pfVar1 = local_c;
  pfVar12[0xd] = local_20;
  local_1c = 0;
  pfVar12[0xe] = 0.0;
  pfVar8 = (float *)FUN_00412ab0(&param_3,0xa0,0xa0,0xa0);
  local_20 = local_8 + 0.05;
  pfVar12[0xf] = *pfVar8;
  pfVar12[0x12] = param_2;
  local_24 = param_2;
  local_1c = 0;
  pfVar12[0x13] = local_20;
  pfVar12[0x14] = 0.0;
  pfVar8 = (float *)FUN_00412ab0(&param_3,0x97,0x97,0x97);
  fVar5 = local_18;
  local_24 = local_18;
  local_20 = local_14 - 0.05;
  pfVar12[0x15] = *pfVar8;
  pfVar12[0x18] = local_18;
  local_1c = 0;
  pfVar12[0x19] = local_20;
  pfVar12[0x1a] = 0.0;
  pfVar8 = (float *)FUN_00412ab0(&param_3,0xdc,0xdc,0xdc);
  fVar3 = *pfVar8;
  local_20 = local_14 - 0.025;
  local_24 = fVar5;
  pfVar12[0x1e] = fVar5;
  pfVar12[0x1b] = fVar3;
  local_1c = 0;
  pfVar12[0x1f] = local_20;
  pfVar12[0x20] = 0.0;
  pfVar8 = (float *)FUN_00412ab0(&param_3,0xff,0xff,0xff);
  fVar3 = *pfVar8;
  param_3 = local_18;
  local_24 = local_18;
  local_20 = local_14 + 0.025;
  pfVar12[0x24] = local_18;
  pfVar12[0x21] = fVar3;
  local_1c = 0;
  pfVar12[0x25] = local_20;
  pfVar12[0x26] = 0.0;
  pfVar8 = (float *)FUN_00412ab0(&local_24,0xa0,0xa0,0xa0);
  fVar3 = *pfVar8;
  local_20 = local_14 + 0.05;
  local_24 = param_3;
  pfVar12[0x2a] = param_3;
  pfVar12[0x27] = fVar3;
  local_1c = 0;
  pfVar12[0x2b] = local_20;
  pfVar12[0x2c] = 0.0;
  pfVar8 = (float *)FUN_00412ab0(&local_24,0x97,0x97,0x97);
  pfVar12[0x2d] = *pfVar8;
  pfVar8 = (float *)((*(uint *)((int)this + 0xc) & 0xffff) * 0x60 +
                    *(int *)(*(int *)((int)this + 4) + 0x10));
  *pfVar8 = fVar4;
  pfVar8[1] = local_8 - 0.23;
  pfVar8[2] = 0.0;
  pfVar8[6] = param_2;
  pfVar8[7] = local_8 + 0.23;
  pfVar8[8] = 0.0;
  if (param_4 != 0) {
    *pfVar8 = *pfVar8 - 0.115;
    pfVar8[6] = pfVar8[6] - 0.115;
  }
  pfVar8[0xc] = param_3;
  pfVar8[0xd] = local_14 + 0.23;
  pfVar8[0xe] = 0.0;
  pfVar8[0x12] = fVar5;
  pfVar8[0x13] = local_14 - 0.23;
  pfVar8[0x14] = 0.0;
  if (param_5 != 0) {
    pfVar8[0x12] = pfVar8[0x12] + 0.115;
    pfVar8[0xc] = pfVar8[0xc] + 0.115;
  }
  pfVar8[3] = -NAN;
  pfVar8[9] = -NAN;
  pfVar8[0xf] = -NAN;
  pfVar8[0x15] = -NAN;
  if (param_4 == 5) {
    *pfVar12 = *pfVar12 + 0.05;
    *pfVar7 = *pfVar7 + 0.025;
    *pfVar1 = *pfVar1 - 0.025;
    fVar3 = pfVar12[0x12] - 0.05;
LAB_00a779ca:
    pfVar12[0x12] = fVar3;
  }
  else if (param_4 == 7) {
    *pfVar12 = *pfVar12 - 0.05;
    *pfVar7 = *pfVar7 - 0.025;
    *pfVar1 = *pfVar1 + 0.025;
    fVar3 = pfVar12[0x12] + 0.05;
    goto LAB_00a779ca;
  }
  if (param_5 == 6) {
    pfVar12[0x18] = pfVar12[0x18] - 0.05;
    pfVar12[0x1e] = pfVar12[0x1e] - 0.025;
    pfVar12[0x24] = pfVar12[0x24] + 0.025;
    fVar3 = pfVar12[0x2a] + 0.05;
LAB_00a77a47:
    pfVar12[0x2a] = fVar3;
  }
  else if (param_5 == 8) {
    pfVar12[0x18] = pfVar12[0x18] + 0.05;
    pfVar12[0x1e] = pfVar12[0x1e] + 0.025;
    pfVar12[0x24] = pfVar12[0x24] - 0.025;
    fVar3 = pfVar12[0x2a] - 0.05;
    goto LAB_00a77a47;
  }
  iVar11 = 2;
  pfVar7 = pfVar12 + 0x10;
  do {
    pfVar7[-0xc] = 0.0;
    pfVar7[-0xb] = pfVar7[-0x10] * 0.25;
    pfVar7[-6] = 0.083333336;
    pfVar7[-5] = pfVar7[-10] * 0.25;
    *pfVar7 = 0.16666667;
    pfVar7[1] = pfVar7[-4] * 0.25;
    pfVar7[6] = 0.25;
    iVar11 = iVar11 + -1;
    pfVar7[7] = pfVar7[2] * 0.25;
    pfVar7 = pfVar7 + 0x18;
  } while (iVar11 != 0);
  pfVar8[4] = 0.0;
  pfVar8[5] = *pfVar8 * 2.173913;
  pfVar8[10] = 1.0;
  pfVar8[0xb] = pfVar8[6] * 2.173913;
  pfVar8[0x10] = 1.0;
  pfVar8[0x11] = pfVar8[0xc] * 2.173913;
  pfVar8[0x16] = 0.0;
  pfVar8[0x17] = pfVar8[0x12] * 2.173913;
LAB_00a77b75:
  *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
  return;
}


//// FUNCTION FUN_00a77b90 @ 00a77b90 ////

void __thiscall
FUN_00a77b90(void *this,float param_1,float param_2,float param_3,int param_4,int param_5)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  float *pfVar10;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  fVar4 = param_3;
  fVar3 = param_2;
  fVar2 = param_1;
  if ((param_2 == param_3) && (uVar5 = FUN_009f0770((int)param_2,(int)param_1), (char)uVar5 == '\0')
     ) {
    return;
  }
  uVar5 = *(uint *)((int)this + 0xc);
  if ((uVar5 & 0x10000) != 0) goto LAB_00a78270;
  local_18 = (float)((int)fVar2 * 2);
  param_3 = (float)((int)fVar3 * 2);
  psVar1 = (short *)(*(int *)(*(int *)this + 0xc) + (uVar5 & 0xffff) * 0x24);
  sVar7 = (short)uVar5 * 8;
  *psVar1 = sVar7;
  psVar1[3] = sVar7;
  psVar1[2] = sVar7 + 4;
  psVar1[8] = sVar7 + 3;
  sVar8 = sVar7 + 5;
  psVar1[1] = sVar8;
  psVar1[5] = sVar8;
  psVar1[0xe] = sVar8;
  sVar8 = sVar7 + 1;
  psVar1[4] = sVar8;
  psVar1[0xc] = sVar8;
  psVar1[0xf] = sVar8;
  param_2 = (float)((int)fVar4 + 1);
  psVar1[9] = sVar7 + 7;
  psVar1[6] = sVar7 + 7;
  sVar8 = sVar7 + 2;
  local_14 = (float)(int)param_2 + (float)(int)param_2;
  psVar1[7] = sVar8;
  psVar1[0xb] = sVar8;
  psVar1[0x10] = sVar8;
  sVar7 = sVar7 + 6;
  psVar1[10] = sVar7;
  local_24 = local_18 - 0.05;
  psVar1[0xd] = sVar7;
  psVar1[0x11] = sVar7;
  psVar1 = (short *)(*(int *)(*(int *)((int)this + 4) + 0xc) +
                    (*(uint *)((int)this + 0xc) & 0xffff) * 0xc);
  sVar7 = (short)*(uint *)((int)this + 0xc) * 4;
  *psVar1 = sVar7;
  psVar1[3] = sVar7;
  psVar1[2] = sVar7 + 1;
  psVar1[1] = sVar7 + 2;
  psVar1[4] = sVar7 + 3;
  psVar1[5] = sVar7 + 2;
  pfVar10 = (float *)((*(uint *)((int)this + 0xc) & 0xffff) * 0xc0 + *(int *)(*(int *)this + 0x10));
  *pfVar10 = local_24;
  local_1c = 0;
  pfVar10[1] = param_3;
  pfVar10[2] = 0.0;
  local_20 = param_3;
  local_c = local_18;
  local_8 = param_3;
  pfVar6 = (float *)FUN_00412ab0(&param_2,0x97,0x97,0x97);
  local_24 = local_c - 0.025;
  pfVar10[3] = *pfVar6;
  pfVar10[6] = local_24;
  pfVar10[7] = param_3;
  local_20 = param_3;
  local_1c = 0;
  pfVar10[8] = 0.0;
  pfVar6 = (float *)FUN_00412ab0(&param_2,0xa0,0xa0,0xa0);
  local_24 = local_c + 0.025;
  pfVar10[9] = *pfVar6;
  pfVar10[0xc] = local_24;
  param_2 = local_8;
  local_20 = local_8;
  pfVar10[0xd] = local_8;
  local_1c = 0;
  pfVar10[0xe] = 0.0;
  pfVar6 = (float *)FUN_00412ab0(&param_1,0xff,0xff,0xff);
  local_24 = local_c + 0.05;
  pfVar10[0xf] = *pfVar6;
  pfVar10[0x12] = local_24;
  local_1c = 0;
  pfVar10[0x13] = param_2;
  pfVar10[0x14] = 0.0;
  local_20 = param_2;
  pfVar6 = (float *)FUN_00412ab0(&param_1,0xdc,0xdc,0xdc);
  local_24 = local_18 - 0.05;
  pfVar10[0x15] = *pfVar6;
  pfVar10[0x18] = local_24;
  param_1 = local_14;
  local_1c = 0;
  local_20 = local_14;
  pfVar10[0x19] = local_14;
  pfVar10[0x1a] = 0.0;
  pfVar6 = (float *)FUN_00412ab0(&local_28,0x97,0x97,0x97);
  local_24 = local_18 - 0.025;
  pfVar10[0x1b] = *pfVar6;
  pfVar10[0x1e] = local_24;
  pfVar10[0x1f] = param_1;
  local_1c = 0;
  pfVar10[0x20] = 0.0;
  local_20 = param_1;
  pfVar6 = (float *)FUN_00412ab0(&local_28,0xa0,0xa0,0xa0);
  local_24 = local_18 + 0.025;
  pfVar10[0x21] = *pfVar6;
  pfVar10[0x24] = local_24;
  local_28 = local_14;
  local_20 = local_14;
  local_1c = 0;
  pfVar10[0x25] = local_14;
  pfVar10[0x26] = 0.0;
  pfVar6 = (float *)FUN_00412ab0(&local_24,0xff,0xff,0xff);
  local_24 = local_18 + 0.05;
  pfVar10[0x27] = *pfVar6;
  pfVar10[0x2a] = local_24;
  local_1c = 0;
  pfVar10[0x2b] = local_28;
  local_20 = local_28;
  pfVar10[0x2c] = 0.0;
  pfVar6 = (float *)FUN_00412ab0(&local_24,0xdc,0xdc,0xdc);
  pfVar10[0x2d] = *pfVar6;
  pfVar6 = (float *)((*(uint *)((int)this + 0xc) & 0xffff) * 0x60 +
                    *(int *)(*(int *)((int)this + 4) + 0x10));
  *pfVar6 = local_c + 0.23;
  pfVar6[1] = param_2;
  pfVar6[2] = 0.0;
  pfVar6[6] = local_c - 0.23;
  pfVar6[7] = param_3;
  pfVar6[8] = 0.0;
  pfVar6[0xc] = local_18 - 0.23;
  pfVar6[0xd] = param_1;
  pfVar6[0xe] = 0.0;
  pfVar6[0x12] = local_18 + 0.23;
  pfVar6[0x13] = local_28;
  pfVar6[0x14] = 0.0;
  if (param_4 == 1) {
    pfVar10[1] = pfVar10[1] + 0.05;
    pfVar10[7] = pfVar10[7] + 0.025;
    pfVar10[0xd] = pfVar10[0xd] - 0.025;
    fVar2 = pfVar10[0x13] - 0.05;
LAB_00a780a9:
    pfVar10[0x13] = fVar2;
  }
  else if (param_4 == 3) {
    pfVar10[1] = pfVar10[1] - 0.05;
    pfVar10[7] = pfVar10[7] - 0.025;
    pfVar10[0xd] = pfVar10[0xd] + 0.025;
    fVar2 = pfVar10[0x13] + 0.05;
    goto LAB_00a780a9;
  }
  if (param_5 == 2) {
    pfVar10[0x19] = pfVar10[0x19] - 0.05;
    pfVar10[0x1f] = pfVar10[0x1f] - 0.025;
    pfVar10[0x25] = pfVar10[0x25] + 0.025;
    fVar2 = pfVar10[0x2b] + 0.05;
LAB_00a78128:
    pfVar10[0x2b] = fVar2;
  }
  else if (param_5 == 4) {
    pfVar10[0x19] = pfVar10[0x19] + 0.05;
    pfVar10[0x1f] = pfVar10[0x1f] + 0.025;
    pfVar10[0x25] = pfVar10[0x25] - 0.025;
    fVar2 = pfVar10[0x2b] - 0.05;
    goto LAB_00a78128;
  }
  iVar9 = 2;
  pfVar10 = pfVar10 + 10;
  do {
    pfVar10[-6] = 0.0;
    pfVar10[-5] = pfVar10[-9] * 0.25;
    *pfVar10 = 0.083333336;
    pfVar10[1] = pfVar10[-3] * 0.25;
    pfVar10[6] = 0.16666667;
    pfVar10[7] = pfVar10[3] * 0.25;
    pfVar10[0xc] = 0.25;
    iVar9 = iVar9 + -1;
    pfVar10[0xd] = pfVar10[9] * 0.25;
    pfVar10 = pfVar10 + 0x18;
  } while (iVar9 != 0);
  pfVar6[4] = 0.0;
  pfVar6[5] = pfVar6[1] * 2.173913;
  pfVar6[10] = 1.0;
  pfVar6[0xb] = pfVar6[7] * 2.173913;
  pfVar6[0x10] = 1.0;
  pfVar6[0x11] = pfVar6[0xd] * 2.173913;
  pfVar6[0x16] = 0.0;
  pfVar6[0x17] = pfVar6[0x13] * 2.173913;
  pfVar6[3] = -NAN;
  pfVar6[9] = -NAN;
  pfVar6[0xf] = -NAN;
  pfVar6[0x15] = -NAN;
LAB_00a78270:
  *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
  return;
}


//// FUNCTION FUN_00a78280 @ 00a78280 ////

void __fastcall FUN_00a78280(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00a7b050(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00a7b050(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00a782d0 @ 00a782d0 ////

int * __fastcall FUN_00a782d0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  puVar1 = FUN_00452010();
  *param_1 = (int)puVar1;
  FUN_009e6720(puVar1,0x19,0x18);
  iVar2 = 0;
  do {
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0xc + iVar2) = 0xffffffff;
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0x24 + iVar2) = 0xffffffff;
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0x3c + iVar2) = 0xffffffff;
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0x54 + iVar2) = 0xffffffff;
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0x6c + iVar2) = 0xffffffff;
    iVar2 = iVar2 + 0x78;
  } while (iVar2 < 0x168);
  iVar2 = 0x168;
  do {
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0xc + iVar2) = 0x32000000;
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0x24 + iVar2) = 0x32000000;
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0x3c + iVar2) = 0x32000000;
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0x54 + iVar2) = 0x32000000;
    *(undefined4 *)(*(int *)(*param_1 + 0x28) + 0x6c + iVar2) = 0x32000000;
    iVar2 = iVar2 + 0x78;
  } while (iVar2 < 600);
  puVar1 = *(undefined4 **)(*param_1 + 0x2c);
  *puVar1 = 0x10000;
  *(undefined2 *)(puVar1 + 1) = 4;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 6) = 0x40000;
  *(undefined2 *)(iVar2 + 10) = 3;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0xc) = 0x20001;
  *(undefined2 *)(iVar2 + 0x10) = 5;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x12) = 0x50001;
  *(undefined2 *)(iVar2 + 0x16) = 4;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x18) = 0x30004;
  *(undefined2 *)(iVar2 + 0x1c) = 8;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x1e) = 0x80004;
  *(undefined2 *)(iVar2 + 0x22) = 7;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x24) = 0x40005;
  *(undefined2 *)(iVar2 + 0x28) = 7;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x2a) = 0x70005;
  *(undefined2 *)(iVar2 + 0x2e) = 6;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x30) = 0x80007;
  *(undefined2 *)(iVar2 + 0x34) = 0xb;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x36) = 0xb0007;
  *(undefined2 *)(iVar2 + 0x3a) = 10;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x3c) = 0x70006;
  *(undefined2 *)(iVar2 + 0x40) = 10;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x42) = 0xa0006;
  *(undefined2 *)(iVar2 + 0x46) = 9;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x48) = 0xb000a;
  *(undefined2 *)(iVar2 + 0x4c) = 0xc;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x4e) = 0xc000a;
  *(undefined2 *)(iVar2 + 0x52) = 0xd;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x54) = 0xd000a;
  *(undefined2 *)(iVar2 + 0x58) = 0xe;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x5a) = 0xe000a;
  *(undefined2 *)(iVar2 + 0x5e) = 9;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x60) = 0x10000f;
  *(undefined2 *)(iVar2 + 100) = 0x11;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x66) = 0x110010;
  *(undefined2 *)(iVar2 + 0x6a) = 0x12;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x6c) = 0x120011;
  *(undefined2 *)(iVar2 + 0x70) = 0x13;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x72) = 0x130012;
  *(undefined2 *)(iVar2 + 0x76) = 0x14;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x78) = 0x140013;
  *(undefined2 *)(iVar2 + 0x7c) = 0x15;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x7e) = 0x150014;
  *(undefined2 *)(iVar2 + 0x82) = 0x16;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x84) = 0x160015;
  *(undefined2 *)(iVar2 + 0x88) = 0x17;
  iVar2 = *(int *)(*param_1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x8a) = 0x170016;
  *(undefined2 *)(iVar2 + 0x8e) = 0x18;
  return param_1;
}


//// FUNCTION FUN_00a786b0 @ 00a786b0 ////

void __fastcall FUN_00a786b0(int *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00a78700 @ 00a78700 ////

void __thiscall FUN_00a78700(void *this,float *param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = param_2 + *param_1;
  fVar6 = -param_3 + param_1[1];
  fVar7 = param_1[2] - 0.15;
  fVar8 = param_3 + param_1[1];
  fVar9 = -param_2 + *param_1;
  fVar10 = -param_2 + *param_1;
  fVar4 = -param_3 + param_1[1];
  pfVar1 = *(float **)(*(int *)this + 0x28);
  *pfVar1 = fVar5 + 0.007;
  pfVar1[1] = fVar6 - 0.007;
  pfVar1[2] = fVar7;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x18) = fVar5;
  *(float *)(iVar2 + 0x1c) = fVar6;
  *(float *)(iVar2 + 0x20) = fVar7 + 0.15;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x30) = fVar5 - 0.007;
  *(float *)(iVar2 + 0x34) = fVar6 + 0.007;
  *(float *)(iVar2 + 0x38) = fVar7;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x48) = fVar5 + 0.007;
  *(float *)(iVar2 + 0x4c) = fVar8 + 0.007;
  *(float *)(iVar2 + 0x50) = fVar7;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x60) = fVar5;
  *(float *)(iVar2 + 100) = fVar8;
  *(float *)(iVar2 + 0x68) = fVar7 + 0.15;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x78) = fVar5 - 0.007;
  *(float *)(iVar2 + 0x7c) = fVar8 - 0.007;
  *(float *)(iVar2 + 0x80) = fVar7;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x90) = fVar9 + 0.007;
  *(float *)(iVar2 + 0x94) = fVar8 - 0.007;
  *(float *)(iVar2 + 0x98) = fVar7;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0xa8) = fVar9;
  *(float *)(iVar2 + 0xac) = fVar8;
  *(float *)(iVar2 + 0xb0) = fVar7 + 0.15;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0xc0) = fVar9 - 0.007;
  *(float *)(iVar2 + 0xc4) = fVar8 + 0.007;
  *(float *)(iVar2 + 200) = fVar7;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0xd8) = fVar10 + 0.007;
  *(float *)(iVar2 + 0xdc) = fVar4 + 0.007;
  *(float *)(iVar2 + 0xe0) = fVar7;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0xf0) = fVar10;
  *(float *)(iVar2 + 0xf4) = fVar4;
  *(float *)(iVar2 + 0xf8) = fVar7 + 0.15;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x108) = fVar10 - 0.007;
  *(float *)(iVar2 + 0x10c) = fVar4 - 0.007;
  *(float *)(iVar2 + 0x110) = fVar7;
  puVar3 = *(undefined4 **)(*(int *)this + 0x28);
  puVar3[0x48] = *puVar3;
  puVar3[0x49] = puVar3[1];
  puVar3[0x4a] = puVar3[2];
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x138) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(iVar2 + 0x13c) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar2 + 0x140) = *(undefined4 *)(iVar2 + 0x20);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x150) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(iVar2 + 0x154) = *(undefined4 *)(iVar2 + 0x34);
  *(undefined4 *)(iVar2 + 0x158) = *(undefined4 *)(iVar2 + 0x38);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0x3f800000;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  iVar2 = *(int *)(*(int *)this + 0x28);
  fVar7 = ABS(param_2) * 5.0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0x3f800000;
  iVar2 = *(int *)(*(int *)this + 0x28);
  fVar11 = ABS(param_3) * 5.0;
  *(float *)(iVar2 + 0x58) = fVar11 + *(float *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x14);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x70) = fVar11 + *(float *)(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar2 + 0x2c);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x88) = fVar11 + *(float *)(iVar2 + 0x40);
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(iVar2 + 0x44);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0xa0) = fVar7 + *(float *)(iVar2 + 0x58);
  *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar2 + 0x5c);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0xb8) = fVar7 + *(float *)(iVar2 + 0x70);
  *(undefined4 *)(iVar2 + 0xbc) = *(undefined4 *)(iVar2 + 0x74);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0xd0) = fVar7 + *(float *)(iVar2 + 0x88);
  *(undefined4 *)(iVar2 + 0xd4) = *(undefined4 *)(iVar2 + 0x8c);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0xe8) = fVar11 + *(float *)(iVar2 + 0xa0);
  *(undefined4 *)(iVar2 + 0xec) = *(undefined4 *)(iVar2 + 0xa4);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x100) = fVar11 + *(float *)(iVar2 + 0xb8);
  *(undefined4 *)(iVar2 + 0x104) = *(undefined4 *)(iVar2 + 0xbc);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x118) = fVar11 + *(float *)(iVar2 + 0xd0);
  *(undefined4 *)(iVar2 + 0x11c) = *(undefined4 *)(iVar2 + 0xd4);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x130) = fVar7 + *(float *)(iVar2 + 0xe8);
  *(undefined4 *)(iVar2 + 0x134) = *(undefined4 *)(iVar2 + 0xec);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x148) = fVar7 + *(float *)(iVar2 + 0x100);
  *(undefined4 *)(iVar2 + 0x14c) = *(undefined4 *)(iVar2 + 0x104);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x160) = fVar7 + *(float *)(iVar2 + 0x118);
  *(undefined4 *)(iVar2 + 0x164) = *(undefined4 *)(iVar2 + 0x11c);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x178) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0x17c) = *(undefined4 *)(iVar2 + 0x14);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 400) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 0x194) = *(undefined4 *)(iVar2 + 0x2c);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x1a8) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(iVar2 + 0x1ac) = *(undefined4 *)(iVar2 + 0x5c);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x1c0) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(iVar2 + 0x1c4) = *(undefined4 *)(iVar2 + 0x74);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x1d8) = *(undefined4 *)(iVar2 + 0xa0);
  *(undefined4 *)(iVar2 + 0x1dc) = *(undefined4 *)(iVar2 + 0xa4);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x1f0) = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(iVar2 + 500) = *(undefined4 *)(iVar2 + 0xbc);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x208) = *(undefined4 *)(iVar2 + 0xe8);
  *(undefined4 *)(iVar2 + 0x20c) = *(undefined4 *)(iVar2 + 0xec);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x220) = *(undefined4 *)(iVar2 + 0x100);
  *(undefined4 *)(iVar2 + 0x224) = *(undefined4 *)(iVar2 + 0x104);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x238) = *(undefined4 *)(iVar2 + 0x130);
  *(undefined4 *)(iVar2 + 0x23c) = *(undefined4 *)(iVar2 + 0x134);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x250) = *(undefined4 *)(iVar2 + 0x148);
  *(undefined4 *)(iVar2 + 0x254) = *(undefined4 *)(iVar2 + 0x14c);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x168) = fVar5;
  *(float *)(iVar2 + 0x16c) = fVar6;
  *(undefined4 *)(iVar2 + 0x170) = 0xbe19999a;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x180) = fVar5 - 0.15;
  *(float *)(iVar2 + 0x184) = fVar6 + 0.15;
  *(undefined4 *)(iVar2 + 0x188) = 0xbe19999a;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x198) = fVar5;
  *(float *)(iVar2 + 0x19c) = fVar8;
  *(undefined4 *)(iVar2 + 0x1a0) = 0xbe19999a;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x1b0) = fVar5 - 0.15;
  *(float *)(iVar2 + 0x1b4) = fVar8 + 0.15;
  *(undefined4 *)(iVar2 + 0x1b8) = 0xbe19999a;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x1c8) = fVar9;
  *(float *)(iVar2 + 0x1cc) = fVar8;
  *(undefined4 *)(iVar2 + 0x1d0) = 0xbe19999a;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x1e0) = fVar9 - 0.15;
  *(float *)(iVar2 + 0x1e4) = fVar8 + 0.15;
  *(undefined4 *)(iVar2 + 0x1e8) = 0xbe19999a;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x1f8) = fVar10;
  *(float *)(iVar2 + 0x1fc) = fVar4;
  *(undefined4 *)(iVar2 + 0x200) = 0xbe19999a;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(float *)(iVar2 + 0x210) = fVar10 - 0.15;
  *(float *)(iVar2 + 0x214) = fVar4 + 0.15;
  *(undefined4 *)(iVar2 + 0x218) = 0xbe19999a;
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x228) = *(undefined4 *)(iVar2 + 0x168);
  *(undefined4 *)(iVar2 + 0x22c) = *(undefined4 *)(iVar2 + 0x16c);
  *(undefined4 *)(iVar2 + 0x230) = *(undefined4 *)(iVar2 + 0x170);
  iVar2 = *(int *)(*(int *)this + 0x28);
  *(undefined4 *)(iVar2 + 0x240) = *(undefined4 *)(iVar2 + 0x180);
  *(undefined4 *)(iVar2 + 0x244) = *(undefined4 *)(iVar2 + 0x184);
  *(undefined4 *)(iVar2 + 0x248) = *(undefined4 *)(iVar2 + 0x188);
  return;
}


//// FUNCTION FUN_00a79030 @ 00a79030 ////

void __thiscall FUN_00a79030(void *this,int *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (iVar5 < 0x20) {
    iVar3 = (iVar5 + 2) * 0x22;
    do {
      if ((0x1e < iVar5) ||
         (*(char *)(iVar3 + 0x105ef89 + param_2) == *(char *)((int)&DAT_0105ef88 + param_2 + iVar3))
         ) break;
      iVar3 = iVar3 + 0x22;
      iVar5 = iVar5 + 1;
    } while (iVar3 < 0x484);
  }
  piVar1 = *(int **)((int)this + 8);
  iVar4 = (piVar1[1] + -4) * 0x20;
  bVar2 = FUN_00a772a0(iVar5,param_2);
  iVar3 = CONCAT31(extraout_var,bVar2);
  bVar2 = FUN_00a77220(*param_1,param_2);
  FUN_00a77450(this,*param_1 + iVar4,(float)(iVar4 + iVar5),(float)((*piVar1 + -4) * 0x20 + param_2)
               ,CONCAT31(extraout_var_00,bVar2),iVar3);
  *param_1 = iVar5;
  return;
}


//// FUNCTION FUN_00a790d0 @ 00a790d0 ////

void __thiscall FUN_00a790d0(void *this,int param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  if (iVar5 < 0x20) {
    iVar4 = iVar5 + 2;
    do {
      if ((0x1f < iVar4 + -1) ||
         (iVar3 = (param_1 + 1) * 0x22,
         *(char *)((int)&DAT_0105ef88 + iVar4 + iVar3) == (&DAT_0105ef66)[iVar4 + iVar3])) break;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x22);
  }
  iVar3 = (**(int **)((int)this + 8) + -4) * 0x20;
  bVar1 = FUN_00a773a0(param_1,iVar5);
  iVar4 = CONCAT31(extraout_var,bVar1);
  bVar2 = FUN_00a77320(param_1,*param_2);
  FUN_00a77b90(this,(float)((*(int *)(*(int *)((int)this + 8) + 4) + -4) * 0x20 + param_1),
               (float)(*param_2 + iVar3),(float)(iVar3 + iVar5),CONCAT31(extraout_var_00,bVar2),
               iVar4);
  *param_2 = iVar5;
  return;
}


//// FUNCTION FUN_00a79170 @ 00a79170 ////

void __fastcall FUN_00a79170(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc036;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_00a7b050(puVar2);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
  puVar2 = (undefined4 *)param_1[1];
  ExceptionList = &local_c;
  *param_1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00a7b050(puVar2);
                    /* WARNING: Subroutine does not return */
    _free(puVar2);
  }
  param_1[1] = 0;
  if ((param_1[3] & 0xffff) != 0) {
    pvVar1 = operator_new(0x58);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00a7b0f0(pvVar1,(short)param_1[3] * 6,(param_1[3] & 0xffff) * 8,&DAT_0105fff8);
    }
    local_4 = 0xffffffff;
    *param_1 = puVar2;
    pvVar1 = operator_new(0x58);
    local_4 = 1;
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00a7b0f0(pvVar1,(short)param_1[3] * 2,(param_1[3] & 0xffff) * 4,&DAT_01060040);
    }
    param_1[1] = puVar2;
  }
  *(undefined2 *)(param_1 + 3) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a79270 @ 00a79270 ////

int * __thiscall FUN_00a79270(void *this,byte param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = *(undefined4 **)this;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)this = 0;
  }
  if ((param_1 & 1) == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(this);
}


//// FUNCTION FUN_00a792d0 @ 00a792d0 ////

void __thiscall FUN_00a792d0(void *this,float *param_1,float param_2,float param_3)

{
  float local_30 [5];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1;
  local_30[4] = param_3;
  local_4 = param_1[2];
  local_30[0] = param_2;
  local_8 = param_1[1];
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_30[3] = 0.0;
  local_30[2] = 0.0;
  local_30[1] = 0.0;
  local_10 = 0x3f800000;
  FUN_009a1480(&DAT_0105c2e8,local_30,'\x01');
  FUN_00a78700(this,param_1,param_2,param_3);
  FUN_009e6680(*(int **)this);
  return;
}


//// FUNCTION FUN_00a79370 @ 00a79370 ////

void __fastcall FUN_00a79370(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  do {
    iVar2 = 0;
    iVar1 = 0x22;
    do {
      if (*(char *)(iVar1 + 0x105ef89 + iVar3) != *(char *)((int)&DAT_0105ef88 + iVar3 + iVar1))
      goto LAB_00a793af;
      iVar1 = iVar1 + 0x22;
      iVar2 = iVar2 + 1;
    } while (iVar1 < 0x462);
LAB_00a7941e:
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  iVar3 = 0;
  do {
    local_4 = 0;
    while (iVar1 = (iVar3 + 1) * 0x22,
          *(char *)(iVar1 + 0x105ef89 + local_4) == (&DAT_0105ef67)[local_4 + iVar1]) {
      local_4 = local_4 + 1;
      if (0x1f < local_4) goto LAB_00a794c9;
    }
    while ((local_4 < 0x20 &&
           (iVar1 = (iVar3 + 1) * 0x22,
           *(char *)(iVar1 + 0x105ef89 + local_4) != (&DAT_0105ef67)[iVar1 + local_4]))) {
      FUN_00a790d0(param_1,iVar3,&local_4);
      do {
        local_4 = local_4 + 1;
        if (0x1f < local_4) goto LAB_00a794c9;
        iVar1 = (iVar3 + 1) * 0x22;
      } while (*(char *)(iVar1 + 0x105ef89 + local_4) == (&DAT_0105ef67)[local_4 + iVar1]);
    }
LAB_00a794c9:
    iVar3 = iVar3 + 1;
    if (0x1f < iVar3) {
      *(uint *)((int)param_1 + 0xc) = *(uint *)((int)param_1 + 0xc) & 0xfffeffff;
      return;
    }
  } while( true );
LAB_00a793af:
  if ((0x1f < iVar2) ||
     (iVar1 = (iVar2 + 1) * 0x22,
     *(char *)(iVar1 + 0x105ef89 + iVar3) == *(char *)((int)&DAT_0105ef88 + iVar3 + iVar1)))
  goto LAB_00a7941e;
  local_4 = iVar2;
  FUN_00a79030(param_1,&local_4,iVar3);
  iVar2 = local_4 + 1;
  if (0x1f < iVar2) goto LAB_00a7941e;
  iVar1 = (local_4 + 2) * 0x22;
  if (0x461 < iVar1) goto LAB_00a7940f;
  while (*(char *)(iVar1 + 0x105ef89 + iVar3) == *(char *)((int)&DAT_0105ef88 + iVar3 + iVar1)) {
LAB_00a7940f:
    iVar1 = iVar1 + 0x22;
    iVar2 = iVar2 + 1;
    if (0x461 < iVar1) goto LAB_00a7941e;
  }
  goto LAB_00a793af;
}


//// FUNCTION FUN_00a79550 @ 00a79550 ////

undefined4 * __fastcall FUN_00a79550(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  uVar1 = FUN_00a449e0();
  param_1[5] = uVar1;
  return param_1;
}


//// FUNCTION FUN_00a79570 @ 00a79570 ////

void __fastcall FUN_00a79570(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_0099b400((void *)*param_1);
    *param_1 = 0;
  }
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    FUN_00a44a10((undefined4 *)param_1[5]);
    param_1[5] = 0;
  }
  return;
}


//// FUNCTION FUN_00a795a0 @ 00a795a0 ////

void __cdecl FUN_00a795a0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 == (undefined4 *)0x0) {
    FUN_009d9820();
    return;
  }
  uVar1 = FUN_009e2750();
  uVar3 = uVar1;
  if (0 < (int)uVar1) {
    do {
      puVar5 = puVar4;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = 0xbebebebe;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = 0xbe;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      puVar4 = (undefined4 *)((int)puVar4 + *param_1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


//// FUNCTION FUN_00a79600 @ 00a79600 ////

void FUN_00a79600(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_010c9cc8);
}


//// FUNCTION FUN_00a79680 @ 00a79680 ////

void __fastcall FUN_00a79680(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc048;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00a79730 @ 00a79730 ////

int __cdecl FUN_00a79730(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  iVar2 = param_1 + 1;
  local_4 = param_1;
  if (0x1f < iVar2) {
    return param_1;
  }
  iVar6 = param_3 + -1;
  iVar5 = iVar2 * 0x22;
  do {
    iVar3 = iVar2;
    bVar1 = true;
    if (iVar6 <= param_4) {
      pcVar4 = (char *)(iVar5 + iVar6 + param_2);
      iVar2 = (param_4 - iVar6) + 1;
      do {
        if (*pcVar4 != pcVar4[-0x22]) {
          bVar1 = false;
        }
        pcVar4 = pcVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (!bVar1) {
        return local_4;
      }
    }
    iVar5 = iVar5 + 0x22;
    iVar2 = iVar3 + 1;
    local_4 = iVar3;
    if (0x43f < iVar5) {
      return iVar3;
    }
  } while( true );
}


//// FUNCTION FUN_00a797d0 @ 00a797d0 ////

void __thiscall FUN_00a797d0(void *this,int param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  short *psVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_1c;
  int local_18;
  short local_4;
  
  iVar7 = param_1 + 0x4a7;
  *(undefined4 *)this = 0;
  local_18 = 0;
  psVar12 = DAT_010c9cc8;
  do {
    local_1c = 0;
    while (local_1c < 0x20) {
      while (*(char *)(local_1c + -0x484 + iVar7) == '\0') {
        local_1c = local_1c + 1;
        if (0x1f < local_1c) goto LAB_00a79821;
      }
      iVar13 = local_1c;
      if (0x1f < local_1c) break;
      do {
        if (*(char *)(iVar13 + -0x484 + iVar7) == '\0') break;
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x20);
      iVar8 = FUN_00a79730(local_18,param_1 + 0x23,local_1c,iVar13);
      iVar10 = local_18 + 1;
      if (iVar10 <= iVar8) {
        puVar11 = (undefined4 *)(iVar10 * 0x22 + local_1c + param_1 + 0x23);
        iVar10 = (iVar8 - iVar10) + 1;
        do {
          if (local_1c < iVar13) {
            puVar14 = puVar11;
            for (uVar9 = (uint)(iVar13 - local_1c) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar14 = 0;
              puVar14 = puVar14 + 1;
            }
            for (uVar9 = iVar13 - local_1c & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined1 *)puVar14 = 0;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
          }
          puVar11 = (undefined4 *)((int)puVar11 + 0x22);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      sVar5 = (short)iVar8;
      local_4 = (sVar5 + 1) * 0x21 + (short)local_1c;
      cVar2 = *(char *)(local_1c + -0x22 + iVar7);
      iVar6 = local_1c;
      iVar10 = local_1c;
      while( true ) {
        iVar10 = iVar10 + 1;
        if (iVar13 <= iVar10) break;
        cVar1 = *(char *)(iVar7 + -0x22 + iVar10);
        if (cVar1 != cVar2) {
          sVar3 = (short)local_18 * 0x21;
          *psVar12 = (short)iVar6 + sVar3;
          psVar12[1] = local_4;
          psVar12[2] = sVar3 + (short)iVar10;
          psVar12 = psVar12 + 3;
          *(int *)this = *(int *)this + 1;
          cVar2 = cVar1;
          iVar6 = iVar10;
        }
      }
      sVar3 = (short)local_18 * 0x21;
      *psVar12 = (short)iVar6 + sVar3;
      psVar12[1] = local_4;
      psVar12[2] = (short)iVar10 + sVar3;
      psVar12 = psVar12 + 3;
      *(int *)this = *(int *)this + 1;
      iVar10 = (iVar8 - local_18) * 0x22;
      iVar8 = local_1c + 1;
      cVar2 = *(char *)(local_1c + iVar10 + 0x22 + iVar7);
      if (iVar8 < iVar13) {
        do {
          cVar1 = *(char *)(iVar10 + 0x22 + iVar7 + iVar8);
          if (cVar1 != cVar2) {
            sVar4 = (sVar5 + 1) * 0x21;
            psVar12[1] = sVar4 + (short)iVar8;
            psVar12[2] = sVar3 + (short)iVar13;
            *psVar12 = (short)local_1c + sVar4;
            psVar12 = psVar12 + 3;
            *(int *)this = *(int *)this + 1;
            local_1c = iVar8;
            cVar2 = cVar1;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar13);
      }
      *psVar12 = sVar5 * 0x21 + 0x21 + (short)local_1c;
      psVar12[2] = sVar3 + (short)iVar13;
      psVar12[1] = sVar5 * 0x21 + 0x21 + (short)iVar8;
      psVar12 = psVar12 + 3;
      *(int *)this = *(int *)this + 1;
      local_1c = iVar13 + 1;
    }
LAB_00a79821:
    local_18 = local_18 + 1;
    iVar7 = iVar7 + 0x22;
    if (0x1f < local_18) {
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00a79a30 @ 00a79a30 ////

int * __thiscall FUN_00a79a30(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc06b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 8;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = 0;
  *(undefined4 *)this = 0;
  if (param_1 == 0) {
    *(undefined4 *)this = 2;
    *(undefined2 *)DAT_010c9cc8 = 0;
    *(undefined2 *)((int)DAT_010c9cc8 + 2) = 0x440;
    *(undefined2 *)(DAT_010c9cc8 + 1) = 0x20;
    *(undefined2 *)((int)DAT_010c9cc8 + 6) = 0;
    *(undefined2 *)(DAT_010c9cc8 + 2) = 0x420;
    *(undefined2 *)((int)DAT_010c9cc8 + 10) = 0x440;
  }
  else {
    FUN_00a797d0(this,param_2);
  }
  puVar2 = operator_new(*(int *)this * 6);
  iVar1 = *(int *)this;
  *(undefined4 **)((int)this + 4) = puVar2;
  puVar4 = DAT_010c9cc8;
  for (uVar3 = (uint)(iVar1 * 6) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar3 = iVar1 * 6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(int *)((int)this + 0x44) = *(int *)this * 3;
  *(undefined1 **)((int)this + 0x4c) = &LAB_009e51d0;
  *(void **)((int)this + 0x50) = this;
  *(undefined4 *)((int)this + 0x48) = 8;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a79c80 @ 00a79c80 ////

void * __thiscall FUN_00a79c80(void *this,byte param_1)

{
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a79cb0 @ 00a79cb0 ////

void __fastcall FUN_00a79cb0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc08b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  puVar1 = operator_new((uint)*(ushort *)(param_1 + 0x10) << 2);
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  for (uVar3 = (uint)*(ushort *)(param_1 + 0x10); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  iVar6 = 0;
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  if (*(short *)(param_1 + 0x10) != 0) {
    do {
      piVar2 = operator_new(8);
      local_4 = 0;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x138);
        *piVar2 = (int)**(short **)(*(int *)(param_1 + 0x14) + iVar6 * 4);
        puVar1 = operator_new(uVar3);
        piVar2[1] = (int)puVar1;
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar1 = 0xff;
          puVar1 = (undefined4 *)((int)puVar1 + 1);
        }
      }
      *(int **)(*(int *)(param_1 + 0x18) + iVar6 * 4) = piVar2;
      iVar6 = iVar6 + 1;
      local_4 = 0xffffffff;
    } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


//// FUNCTION FUN_00a79d80 @ 00a79d80 ////

undefined4 __thiscall FUN_00a79d80(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (*(ushort *)((int)this + 0x10) != 0) {
    puVar2 = *(undefined4 **)((int)this + 0x18);
    do {
      if (*(int *)*puVar2 == param_1) {
        return (*(undefined4 **)((int)this + 0x18))[iVar1];
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)((int)this + 0x10));
  }
  return 0;
}


//// FUNCTION FUN_00a79dc0 @ 00a79dc0 ////

undefined4 __thiscall FUN_00a79dc0(void *this,FILE *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *_DstBuf;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  undefined4 *puVar7;
  undefined2 extraout_var;
  undefined2 *puVar8;
  int local_1c;
  undefined4 local_10;
  short *local_c;
  int local_8;
  
  uVar4 = (uint)*(ushort *)((int)this + 0x10);
  iVar2 = 0;
  local_8 = 0;
  if (uVar4 != 0) {
    do {
      local_c = *(short **)(*(int *)((int)this + 0x14) + local_8 * 4);
      iVar2 = 0;
      if (uVar4 != 0) {
        puVar7 = *(undefined4 **)((int)this + 0x18);
        do {
          if (*(int *)*puVar7 == (int)*local_c) {
            local_1c = *(int *)(*(int *)((int)this + 0x18) + iVar2 * 4);
            goto LAB_00a79e1a;
          }
          iVar2 = iVar2 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar2 < (int)uVar4);
      }
      local_1c = 0;
LAB_00a79e1a:
      _ftell(param_1);
      if (local_1c != 0) {
        local_10._0_2_ = local_10._1_2_;
        _fread(&local_10,2,1,param_1);
        sVar6 = CONCAT11((char)(undefined2)local_10,(char)((ushort)(undefined2)local_10 >> 8));
        local_10 = CONCAT22(extraout_var,sVar6);
        if (sVar6 != 0) {
          iVar2 = *(int *)((int)this + 0x134);
          uVar4 = iVar2 * 2;
          puVar3 = operator_new(uVar4);
          local_c = operator_new(uVar4);
          _fread(local_c,uVar4,1,param_1);
          if (0 < iVar2) {
            puVar8 = puVar3;
            do {
              uVar1 = *(undefined2 *)((int)puVar8 + ((int)local_c - (int)puVar3));
              iVar2 = iVar2 + -1;
              *puVar8 = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
              puVar8 = puVar8 + 1;
            } while (iVar2 != 0);
          }
                    /* WARNING: Subroutine does not return */
          _free(local_c);
        }
        _DstBuf = operator_new(*(uint *)((int)this + 0x138));
        uVar4 = *(uint *)((int)this + 0x138);
        puVar7 = _DstBuf;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = 0xffffffff;
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar7 = 0xff;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        _fread(_DstBuf,*(int *)(local_c + 2) - 2,1,param_1);
        **(undefined4 **)(local_1c + 4) = *_DstBuf;
                    /* WARNING: Subroutine does not return */
        _free(_DstBuf);
      }
      _fseek(param_1,*(int *)(local_c + 2) + -1,1);
      uVar4 = (uint)*(ushort *)((int)this + 0x10);
      iVar2 = local_8 + 1;
      local_8 = iVar2;
    } while (iVar2 < (int)uVar4);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00a7a060 @ 00a7a060 ////

undefined4 __thiscall FUN_00a7a060(void *this,FILE *param_1)

{
  undefined2 *_DstBuf;
  undefined2 *_DstBuf_00;
  undefined2 uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  
  _fread(this,4,1,param_1);
  uVar4 = *(uint *)this;
  uVar2 = uVar4 << 0x10;
  uVar4 = (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 | (uVar4 & 0xff00 | uVar2) << 8;
  *(uint *)this = uVar4;
  if (uVar4 != 0) {
    _DstBuf = (undefined2 *)((int)this + 4);
    _fread(_DstBuf,2,1,param_1);
    _fread((void *)((int)this + 8),8,1,param_1);
    _DstBuf_00 = (undefined2 *)((int)this + 0x10);
    _fread(_DstBuf_00,2,1,param_1);
    _fread((void *)((int)this + 0x12),1,1,param_1);
    sVar3 = _fread((void *)((int)this + 0x13),1,1,param_1);
    uVar1 = *_DstBuf_00;
    uVar2 = CONCAT22((short)(sVar3 >> 0x10),uVar1);
    *_DstBuf = CONCAT11((char)*_DstBuf,(char)((ushort)*_DstBuf >> 8));
    *_DstBuf_00 = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00a7a190 @ 00a7a190 ////

undefined4 FUN_00a7a190(FILE *param_1)

{
  FILE *_File;
  int iVar1;
  
  _File = param_1;
  _fread(&param_1,4,1,param_1);
  param_1 = (FILE *)(((uint)param_1 & 0xff0000 | (uint)param_1 >> 0x10) >> 8 |
                    ((uint)param_1 & 0xff00 | (int)param_1 << 0x10) << 8);
  iVar1 = _fseek(_File,(long)param_1,1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_00a7a1f0 @ 00a7a1f0 ////

undefined4 FUN_00a7a1f0(FILE *param_1)

{
  FILE *_File;
  int iVar1;
  
  _File = param_1;
  _fread(&param_1,4,1,param_1);
  param_1 = (FILE *)(((uint)param_1 & 0xff0000 | (uint)param_1 >> 0x10) >> 8 |
                    ((uint)param_1 & 0xff00 | (int)param_1 << 0x10) << 8);
  iVar1 = _fseek(_File,(long)param_1,1);
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_00a7a250 @ 00a7a250 ////

bool __thiscall FUN_00a7a250(void *this,FILE *param_1)

{
  undefined2 *_DstBuf;
  short *_DstBuf_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  _fread(this,4,1,param_1);
  _DstBuf = (undefined2 *)((int)this + 4);
  _fread(_DstBuf,2,1,param_1);
  _fread((void *)((int)this + 6),6,1,param_1);
  _fread((void *)((int)this + 0xc),2,1,param_1);
  _fread((void *)((int)this + 0x10),4,1,param_1);
  _fread((void *)((int)this + 0x14),4,1,param_1);
  _DstBuf_00 = (short *)((int)this + 0x18);
  _fread(_DstBuf_00,2,1,param_1);
  _fread((void *)((int)this + 0x1a),2,1,param_1);
  uVar1 = *(uint *)((int)this + 0x10);
  *_DstBuf = CONCAT11((char)*_DstBuf,(char)((ushort)*_DstBuf >> 8));
  *(ushort *)((int)this + 0xc) =
       CONCAT11((char)*(undefined2 *)((int)this + 0xc),
                (char)((ushort)*(undefined2 *)((int)this + 0xc) >> 8));
  uVar2 = *(uint *)((int)this + 0x14);
  *(uint *)((int)this + 0x10) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 & 0xff00 | uVar1 << 0x10) << 8;
  *(uint *)((int)this + 0x14) =
       (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8;
  *_DstBuf_00 = CONCAT11((char)*_DstBuf_00,(char)((ushort)*_DstBuf_00 >> 8));
  *(ushort *)((int)this + 0x1a) =
       CONCAT11((char)*(undefined2 *)((int)this + 0x1a),
                (char)((ushort)*(undefined2 *)((int)this + 0x1a) >> 8));
  iVar3 = _strncmp(this,"8BPS",4);
  if (iVar3 != 0) {
    return false;
  }
  return *_DstBuf_00 == 8;
}


//// FUNCTION FUN_00a7a390 @ 00a7a390 ////

undefined4 __thiscall FUN_00a7a390(void *this,FILE *param_1)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined2 *)((int)this + 4) =
       CONCAT11((char)*(undefined2 *)((int)this + 4),
                (char)((ushort)*(undefined2 *)((int)this + 4) >> 8));
  *(undefined2 *)((int)this + 0xc) =
       CONCAT11((char)*(undefined2 *)((int)this + 0xc),
                (char)((ushort)*(undefined2 *)((int)this + 0xc) >> 8));
  uVar2 = *(uint *)((int)this + 0x14);
  *(uint *)((int)this + 0x10) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 & 0xff00 | uVar1 << 0x10) << 8;
  *(uint *)((int)this + 0x14) =
       (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8;
  *(undefined2 *)((int)this + 0x18) =
       CONCAT11((char)*(undefined2 *)((int)this + 0x18),
                (char)((ushort)*(undefined2 *)((int)this + 0x18) >> 8));
  *(undefined2 *)((int)this + 0x1a) =
       CONCAT11((char)*(undefined2 *)((int)this + 0x1a),
                (char)((ushort)*(undefined2 *)((int)this + 0x1a) >> 8));
  _fwrite(&DAT_00d7a140,4,1,param_1);
  _fwrite((undefined2 *)((int)this + 4),2,1,param_1);
  _fwrite((void *)((int)this + 6),6,1,param_1);
  _fwrite((undefined2 *)((int)this + 0xc),2,1,param_1);
  _fwrite((uint *)((int)this + 0x10),4,1,param_1);
  _fwrite((uint *)((int)this + 0x14),4,1,param_1);
  _fwrite((undefined2 *)((int)this + 0x18),2,1,param_1);
  sVar3 = _fwrite((undefined2 *)((int)this + 0x1a),2,1,param_1);
  return CONCAT31((int3)(sVar3 >> 8),1);
}


//// FUNCTION FUN_00a7a4d0 @ 00a7a4d0 ////

void __fastcall FUN_00a7a4d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x14] = 0;
  return;
}


//// FUNCTION FUN_00a7a530 @ 00a7a530 ////

undefined4 __thiscall FUN_00a7a530(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (iVar1 <= param_1) {
    param_1 = iVar1 + -1;
  }
  return *(undefined4 *)(*(int *)((int)this + 0x10) + param_1 * 4);
}


//// FUNCTION FUN_00a7a560 @ 00a7a560 ////

void __fastcall FUN_00a7a560(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 0x10) != 0) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0x18) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((int)pvVar1 + 4) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar1);
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)pvVar1 + 4));
      }
      pvVar1 = *(void **)(*(int *)(param_1 + 0x14) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00a7a5e0 @ 00a7a5e0 ////

undefined4 __thiscall FUN_00a7a5e0(void *this,FILE *param_1)

{
  ushort uVar1;
  ushort uVar2;
  FILE *_File;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  char *_DstBuf;
  uint uVar12;
  char *pcVar13;
  uint local_18;
  uint local_14;
  ushort local_10;
  undefined2 uStack_e;
  undefined2 *local_c;
  fpos_t local_8;
  
  _File = param_1;
  _fread(this,4,1,param_1);
  _fread((uint *)((int)this + 4),4,1,_File);
  _fread((void *)((int)this + 8),4,1,_File);
  _fread((void *)((int)this + 0xc),4,1,_File);
  _fread((void *)((int)this + 0x10),2,1,_File);
  uVar9 = *(uint *)this;
  uVar3 = *(uint *)((int)this + 4);
  uVar12 = (uVar9 & 0xff0000 | uVar9 >> 0x10) >> 8 | (uVar9 & 0xff00 | uVar9 << 0x10) << 8;
  uVar9 = *(uint *)((int)this + 8);
  uVar10 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
  uVar3 = (uVar9 & 0xff0000 | uVar9 >> 0x10) >> 8 | (uVar9 << 0x10 | uVar9 & 0xff00) << 8;
  uVar9 = *(uint *)((int)this + 0xc);
  *(uint *)this = uVar12;
  *(uint *)((int)this + 4) = uVar10;
  *(uint *)((int)this + 8) = uVar3;
  local_18 = (uVar9 & 0xff0000 | uVar9 >> 0x10) >> 8 | (uVar9 << 0x10 | uVar9 & 0xff00) << 8;
  *(uint *)((int)this + 0xc) = local_18;
  uVar1 = *(ushort *)((int)this + 0x10);
  uVar2 = uVar1 >> 8;
  _local_10 = CONCAT22((short)(uVar9 >> 0x10),uVar2);
  iVar4 = uVar3 - uVar12;
  *(int *)((int)this + 0x134) = iVar4;
  iVar8 = local_18 - uVar10;
  *(int *)((int)this + 0x130) = iVar8;
  *(ushort *)((int)this + 0x10) = uVar2 | uVar1 << 8;
  *(int *)((int)this + 0x138) = iVar8 * iVar4;
  puVar5 = operator_new(((uint)uVar2 | (uint)(byte)uVar1 << 8) << 2);
  *(undefined4 **)((int)this + 0x14) = puVar5;
  for (uVar9 = (uint)*(ushort *)((int)this + 0x10); uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  uVar9 = 0;
  if (*(short *)((int)this + 0x10) != 0) {
    do {
      puVar6 = operator_new(8);
      if (puVar6 == (undefined2 *)0x0) {
        puVar6 = (undefined2 *)0x0;
      }
      else {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 2) = 0;
      }
      *(undefined2 **)(*(int *)((int)this + 0x14) + uVar9 * 4) = puVar6;
      puVar6 = *(undefined2 **)(*(int *)((int)this + 0x14) + uVar9 * 4);
      local_c = puVar6;
      _fread(&local_18,2,1,_File);
      puVar11 = (uint *)(puVar6 + 2);
      _fread(puVar11,4,1,_File);
      uVar3 = *puVar11;
      *local_c = CONCAT11((char)local_18,(char)(local_18 >> 8));
      *puVar11 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ushort *)((int)this + 0x10));
  }
  _fread((void *)((int)this + 0x1c),4,1,_File);
  _fread((void *)((int)this + 0x20),4,1,_File);
  _fread((void *)((int)this + 0x24),1,1,_File);
  _fread((void *)((int)this + 0x25),1,1,_File);
  _fread((void *)((int)this + 0x26),1,1,_File);
  _fread((void *)((int)this + 0x27),1,1,_File);
  puVar11 = (uint *)((int)this + 0x28);
  _fread(puVar11,4,1,_File);
  uVar9 = *puVar11;
  *puVar11 = (uVar9 & 0xff0000 | uVar9 >> 0x10) >> 8 | (uVar9 << 0x10 | uVar9 & 0xff00) << 8;
  _ftell(_File);
  _fgetpos(_File,&local_8);
  _fread(&local_14,4,1,_File);
  local_14 = (local_14 & 0xff0000 | local_14 >> 0x10) >> 8 |
             (local_14 & 0xff00 | local_14 << 0x10) << 8;
  if (local_14 != 0) {
    _fseek(_File,local_14,1);
  }
  _fread(&local_14,4,1,_File);
  local_14 = (local_14 & 0xff0000 | local_14 >> 0x10) >> 8 |
             (local_14 & 0xff00 | local_14 << 0x10) << 8;
  _fseek(_File,local_14,1);
  _fread(&param_1,1,1,_File);
  uVar9 = (uint)param_1 & 0xff;
  _DstBuf = (char *)((int)this + 0x2c);
  pcVar13 = _DstBuf;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13 = pcVar13 + 4;
  }
  if (uVar9 < 0x104) {
    _fread(_DstBuf,uVar9,1,_File);
  }
  else {
    _fseek(_File,uVar9,1);
    builtin_strncpy(_DstBuf,"name",4);
    builtin_strncpy((char *)((int)this + 0x30)," too",4);
    builtin_strncpy((char *)((int)this + 0x34)," lon",4);
    *(undefined2 *)((int)this + 0x38) = 0x67;
  }
  _fsetpos(_File,&local_8);
  _fseek(_File,*puVar11,1);
  lVar7 = _ftell(_File);
  return CONCAT31((int3)((uint)lVar7 >> 8),1);
}


//// FUNCTION FUN_00a7a9c0 @ 00a7a9c0 ////

void * __thiscall FUN_00a7a9c0(void *this,byte param_1)

{
  FUN_00a7a560((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a7a9e0 @ 00a7a9e0 ////

undefined4 __fastcall FUN_00a7a9e0(uint *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  short sVar4;
  undefined2 extraout_var;
  uint uVar5;
  uint *local_4;
  
  local_4 = param_1;
  _fread(&local_4,2,1,(FILE *)param_1[0x14]);
  sVar4 = CONCAT11((char)local_4,(char)((uint)local_4 >> 8));
  local_4 = (uint *)CONCAT22(extraout_var,sVar4);
  uVar5 = (int)sVar4 >> 0x1f;
  uVar5 = ((int)sVar4 ^ uVar5) - uVar5;
  *param_1 = uVar5;
  puVar1 = operator_new(uVar5 * 4);
  param_1[4] = (uint)puVar1;
  for (uVar5 = *param_1 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  uVar5 = *param_1;
  iVar3 = 0;
  if (0 < (int)uVar5) {
    do {
      pvVar2 = operator_new(0x13c);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x14) = 0;
        *(undefined4 *)((int)pvVar2 + 0x18) = 0;
        *(undefined2 *)((int)pvVar2 + 0x10) = 0;
      }
      *(void **)(param_1[4] + iVar3 * 4) = pvVar2;
      FUN_00a7a5e0(*(void **)(param_1[4] + iVar3 * 4),(FILE *)param_1[0x14]);
      FUN_00a79cb0(*(int *)(param_1[4] + iVar3 * 4));
      uVar5 = *param_1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar5);
  }
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION FUN_00a7aa90 @ 00a7aa90 ////

void __fastcall FUN_00a7aa90(int *param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      _Memory = *(void **)(param_1[4] + iVar1 * 4);
      if (_Memory != (void *)0x0) {
        FUN_00a7a560((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[4]);
}


//// FUNCTION FUN_00a7aae0 @ 00a7aae0 ////

undefined4 __fastcall FUN_00a7aae0(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *local_4;
  
  local_4 = param_1;
  _fread(&local_4,4,1,(FILE *)param_1[0x14]);
  local_4 = (uint *)(((uint)local_4 & 0xff0000 | (uint)local_4 >> 0x10) >> 8 |
                    ((uint)local_4 & 0xff00 | (int)local_4 << 0x10) << 8);
  uVar1 = FUN_00a7a9e0(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = *param_1;
    iVar3 = 0;
    if (0 < (int)uVar2) {
      do {
        FUN_00a79dc0(*(void **)(param_1[4] + iVar3 * 4),(FILE *)param_1[0x14]);
        uVar2 = *param_1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar1;
}


//// FUNCTION FUN_00a7ab60 @ 00a7ab60 ////

bool __fastcall FUN_00a7ab60(uint *param_1)

{
  undefined4 uVar1;
  uint *local_4;
  
  local_4 = param_1;
  _fread(&local_4,4,1,(FILE *)param_1[0x14]);
  local_4 = (uint *)(((uint)local_4 & 0xff0000 | (uint)local_4 >> 0x10) >> 8 |
                    ((uint)local_4 & 0xff00 | (int)local_4 << 0x10) << 8);
  if (local_4 != (uint *)0x0) {
    uVar1 = FUN_00a7aae0(param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_00a7a060(param_1 + 0xf,(FILE *)param_1[0x14]);
      return (char)uVar1 != '\0';
    }
  }
  return false;
}


//// FUNCTION FUN_00a7abd0 @ 00a7abd0 ////

uint __thiscall FUN_00a7abd0(void *this,char *param_1)

{
  bool bVar1;
  FILE *pFVar2;
  uint uVar3;
  int iVar4;
  
  pFVar2 = _fopen(param_1,"rb");
  *(FILE **)((int)this + 0x50) = pFVar2;
  uVar3 = GetFileAttributesA(param_1);
  if (uVar3 != 0xffffffff) {
    bVar1 = FUN_00a7a250((void *)((int)this + 0x14),*(FILE **)((int)this + 0x50));
    if (bVar1) {
      FUN_00a7a1f0(*(FILE **)((int)this + 0x50));
      FUN_00a7a190(*(FILE **)((int)this + 0x50));
      *(int *)((int)this + 8) = *(int *)((int)this + 0x24);
      *(int *)((int)this + 4) = *(int *)((int)this + 0x28);
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0x24) * *(int *)((int)this + 0x28);
      bVar1 = FUN_00a7ab60(this);
      if (bVar1) {
        iVar4 = _fclose(*(FILE **)((int)this + 0x50));
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
    }
    uVar3 = _fclose(*(FILE **)((int)this + 0x50));
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a7b050 @ 00a7b050 ////

void __fastcall FUN_00a7b050(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc0a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d7a15c;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[3]);
}


//// FUNCTION FUN_00a7b0f0 @ 00a7b0f0 ////

undefined4 * __thiscall FUN_00a7b0f0(void *this,undefined2 param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc0cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00d7a15c;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 8;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 8) = param_1;
  local_4 = 0;
  puVar1 = operator_new((*(uint *)((int)this + 8) & 0xffff) * 6);
  uVar5 = (*(uint *)((int)this + 8) & 0xffff) * 3;
  *(undefined4 **)((int)this + 0xc) = puVar1;
  for (uVar2 = uVar5 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = (uVar5 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(undefined4 *)((int)this + 4) = param_3;
  *(uint *)((int)this + 8) = (param_2 | 0xffff8000) << 0x10 | *(uint *)((int)this + 8) & 0xffff;
  uVar5 = param_2 & 0x7fff;
  puVar1 = operator_new(uVar5 * 0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else if (-1 < (int)(uVar5 - 1)) {
    puVar4 = (undefined1 *)((int)puVar1 + 0xe);
    do {
      puVar4[-2] = 0xff;
      puVar4[-1] = 0xff;
      *puVar4 = 0xff;
      puVar4[1] = 0xff;
      *(undefined4 *)(puVar4 + -2) = 0xffffffff;
      *(undefined4 *)(puVar4 + -6) = 0;
      *(undefined4 *)(puVar4 + -10) = 0;
      *(undefined4 *)(puVar4 + -0xe) = 0;
      *(undefined4 *)(puVar4 + -2) = 0xffffffff;
      *(undefined4 *)(puVar4 + 6) = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4 = puVar4 + 0x18;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined4 **)((int)this + 0x10) = puVar1;
  for (iVar3 = (*(ushort *)((int)this + 10) & 0x7fff) * 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  *(uint *)((int)this + 0x44) = *(uint *)((int)this + 8) >> 0x10 & 0x7fff;
  *(undefined4 *)((int)this + 0x4c) = 4;
  *(uint *)((int)this + 0x48) = (*(uint *)((int)this + 8) & 0xffff) * 3;
  *(undefined1 **)((int)this + 0x50) = &LAB_00aac3f0;
  *(void **)((int)this + 0x54) = this;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a7b2a0 @ 00a7b2a0 ////

void * __thiscall FUN_00a7b2a0(void *this,byte param_1)

{
  FUN_00aaece0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a7b2c0 @ 00a7b2c0 ////

void __fastcall FUN_00a7b2c0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00a7b3c0 @ 00a7b3c0 ////

void __cdecl FUN_00a7b3c0(int param_1)

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


//// FUNCTION FUN_00a7b3e0 @ 00a7b3e0 ////

void __cdecl FUN_00a7b3e0(int *param_1)

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


//// FUNCTION FUN_00a7b420 @ 00a7b420 ////

void __thiscall FUN_00a7b420(void *this,int *param_1)

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


//// FUNCTION FUN_00a7b530 @ 00a7b530 ////

void __fastcall FUN_00a7b530(int *param_1)

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


//// FUNCTION FUN_00a7b660 @ 00a7b660 ////

void __fastcall FUN_00a7b660(int *param_1)

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


//// FUNCTION FUN_00a7b750 @ 00a7b750 ////

void __cdecl FUN_00a7b750(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a7b9b0 @ 00a7b9b0 ////

void __thiscall FUN_00a7b9b0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)this + 0x30) = 0;
  return;
}


//// FUNCTION FUN_00a7b9d0 @ 00a7b9d0 ////

void __fastcall FUN_00a7b9d0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_00a7ba30 @ 00a7ba30 ////

void __fastcall FUN_00a7ba30(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a7ba50 @ 00a7ba50 ////

void __thiscall FUN_00a7ba50(void *this,int param_1)

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


//// FUNCTION FUN_00a7bad0 @ 00a7bad0 ////

int * __fastcall FUN_00a7bad0(int *param_1)

{
  FUN_00a7b530(param_1);
  return param_1;
}


//// FUNCTION FUN_00a7bb10 @ 00a7bb10 ////

undefined4 * __thiscall FUN_00a7bb10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00a7bbe0 @ 00a7bbe0 ////

int * __fastcall FUN_00a7bbe0(int *param_1)

{
  FUN_00a7b660(param_1);
  return param_1;
}


//// FUNCTION FUN_00a7bc20 @ 00a7bc20 ////

undefined4 * __thiscall FUN_00a7bc20(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00a7bd40 @ 00a7bd40 ////

void __cdecl FUN_00a7bd40(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a7bd90 @ 00a7bd90 ////

void __fastcall FUN_00a7bd90(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a7be50 @ 00a7be50 ////

void __cdecl
FUN_00a7be50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [10];
  undefined4 local_8;
  undefined4 local_4;
  
  local_30[9] = param_2;
  local_8 = param_3;
  local_30[7] = 0;
  local_30[6] = 0;
  local_30[5] = 0;
  local_30[3] = 0;
  local_30[2] = 0;
  local_30[1] = 0;
  local_30[8] = 0x3f800000;
  local_30[4] = 0x3f800000;
  local_30[0] = 0x3f800000;
  local_4 = param_4;
  puVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00a7bed0 @ 00a7bed0 ////

undefined4 * __thiscall FUN_00a7bed0(void *this,undefined4 *param_1)

{
  FUN_00a7be50(this,*param_1,param_1[1],param_1[2]);
  *(undefined1 *)((int)this + 0x30) = 1;
  return this;
}


//// FUNCTION FUN_00a7bf20 @ 00a7bf20 ////

int * __fastcall FUN_00a7bf20(int *param_1)

{
  FUN_00a7b530(param_1);
  return param_1;
}


//// FUNCTION FUN_00a7bf70 @ 00a7bf70 ////

int * __fastcall FUN_00a7bf70(int *param_1)

{
  FUN_00a7b660(param_1);
  return param_1;
}


//// FUNCTION FUN_00a7bfd0 @ 00a7bfd0 ////

undefined4 * __thiscall
FUN_00a7bfd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00a7c090 @ 00a7c090 ////

void * FUN_00a7c090(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a7c0c0 @ 00a7c0c0 ////

void * __thiscall FUN_00a7c0c0(void *this,byte param_1)

{
  FUN_00a7bd90((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a7c100 @ 00a7c100 ////

undefined4 * __thiscall FUN_00a7c100(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  pvVar1 = operator_new(param_1 * 0x60);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else if (-1 < param_1 + -1) {
    puVar2 = (undefined4 *)((int)pvVar1 + 0x28);
    iVar3 = param_1;
    do {
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[-1] = 0;
      puVar2[-3] = 0;
      puVar2[-4] = 0;
      puVar2[-5] = 0;
      puVar2[-7] = 0;
      puVar2[-8] = 0;
      puVar2[-9] = 0;
      puVar2[-2] = 0x3f800000;
      puVar2[-6] = 0x3f800000;
      puVar2[-10] = 0x3f800000;
      puVar2 = puVar2 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(void **)this = pvVar1;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}


//// FUNCTION FUN_00a7c1d0 @ 00a7c1d0 ////

void __fastcall FUN_00a7c1d0(int param_1)

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


//// FUNCTION FUN_00a7c200 @ 00a7c200 ////

undefined4 * FUN_00a7c200(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a7c240 @ 00a7c240 ////

undefined4 * __thiscall FUN_00a7c240(void *this,undefined4 *param_1)

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
LAB_00a7c284:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00a7c289;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00a7c284;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00a7c289:
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


//// FUNCTION FUN_00a7c2b0 @ 00a7c2b0 ////

undefined4 * __thiscall FUN_00a7c2b0(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x31) == '\0') {
    puVar6 = (undefined4 *)puVar2[1];
    do {
      pbVar5 = (byte *)puVar6[3];
      pbVar3 = (byte *)*param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7c2f4:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00a7c2f9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7c2f4;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a7c2f9:
      if (iVar4 < 0) {
        puVar7 = (undefined4 *)*puVar6;
        puVar2 = puVar6;
      }
      else {
        puVar7 = (undefined4 *)puVar6[2];
      }
      puVar6 = puVar7;
    } while (*(char *)((int)puVar7 + 0x31) == '\0');
  }
  return puVar2;
}


//// FUNCTION FUN_00a7c320 @ 00a7c320 ////

void FUN_00a7c320(void)

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


//// FUNCTION FUN_00a7c360 @ 00a7c360 ////

void * FUN_00a7c360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00a7bfd0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00a7c3a0 @ 00a7c3a0 ////

bool __cdecl FUN_00a7c3a0(char *param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
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
  pbVar6 = (byte *)*param_2;
  pbVar4 = local_20;
  do {
    bVar2 = *pbVar4;
    bVar7 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_00a7c414:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00a7c419;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar7 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_00a7c414;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_00a7c419:
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return iVar5 != 0;
}


//// FUNCTION FUN_00a7c470 @ 00a7c470 ////

void __fastcall FUN_00a7c470(int *param_1)

{
  short sVar1;
  int *this;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *local_48;
  undefined4 local_2c;
  undefined4 local_26;
  
  if ((param_1[1] != 0) && (*param_1 != DAT_0105bec0)) {
    *param_1 = DAT_0105bec0;
    this = DAT_010600b8;
    DAT_010600b8[0x10] = (int)(param_1 + 2);
    uVar5 = 0;
    if (param_1[0xc] != 0) {
      uVar5 = (param_1[0xd] - param_1[0xc]) / 0xc;
    }
    FUN_009e6720(this,uVar5,uVar5 >> 1);
    local_48 = (undefined4 *)DAT_010600b8[0xb];
    puVar2 = (undefined4 *)DAT_010600b8[10];
    uVar4 = 0;
    if (uVar5 != 0) {
      puVar3 = puVar2 + 4;
      iVar6 = 0;
      do {
        sVar1 = (short)uVar4;
        local_2c = CONCAT22(sVar1 + 1,sVar1);
        *local_48 = local_2c;
        *(short *)(local_48 + 1) = sVar1 + 2;
        local_26 = CONCAT22(sVar1 + 3,sVar1 + 1);
        *(undefined4 *)((int)local_48 + 6) = local_26;
        *(short *)((int)local_48 + 10) = sVar1 + 2;
        puVar7 = (undefined4 *)(param_1[0xc] + iVar6);
        local_48 = local_48 + 3;
        *puVar2 = *puVar7;
        puVar2[1] = puVar7[1];
        puVar2[2] = puVar7[2];
        puVar2[3] = 0xffffffff;
        *puVar3 = 0;
        puVar3[1] = 0;
        iVar8 = param_1[0xc] + iVar6 + 0xc;
        puVar2[6] = *(undefined4 *)(param_1[0xc] + iVar6 + 0xc);
        puVar2[7] = *(undefined4 *)(iVar8 + 4);
        puVar2[8] = *(undefined4 *)(iVar8 + 8);
        puVar2[9] = 0xffffffff;
        puVar3[6] = 0x3f800000;
        puVar3[7] = 0;
        iVar8 = param_1[0xc] + iVar6 + 0x18;
        puVar2[0xc] = *(undefined4 *)(param_1[0xc] + iVar6 + 0x18);
        puVar2[0xd] = *(undefined4 *)(iVar8 + 4);
        puVar2[0xe] = *(undefined4 *)(iVar8 + 8);
        puVar2[0xf] = 0xffffffff;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0x3f800000;
        puVar7 = (undefined4 *)(param_1[0xc] + iVar6 + 0x24);
        puVar2[0x12] = *puVar7;
        puVar2[0x13] = puVar7[1];
        puVar2[0x14] = puVar7[2];
        puVar2[0x15] = 0xffffffff;
        puVar3[0x12] = 0x3f800000;
        puVar3[0x13] = 0x3f800000;
        uVar4 = uVar4 + 4;
        iVar6 = iVar6 + 0x30;
        puVar2 = puVar2 + 0x18;
        puVar3 = puVar3 + 0x18;
      } while (uVar4 != uVar5);
    }
    FUN_009e6680(DAT_010600b8);
  }
  return;
}


//// FUNCTION FUN_00a7c6b0 @ 00a7c6b0 ////

void FUN_00a7c6b0(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  int *piVar4;
  int *_Src;
  int *_Dst;
  
  if (DAT_010c9d70 != DAT_010c9d74) {
    _Src = DAT_010c9d70 + 1;
    piVar4 = DAT_010c9d74;
    _Dst = DAT_010c9d70;
    do {
      (**(code **)(*(int *)*_Dst + 0x10))();
      puVar1 = (undefined4 *)*_Dst;
      if ((*(byte *)(puVar1 + 7) & 1) == 0) {
        _Dst = _Dst + 1;
        _Src = _Src + 1;
      }
      else {
        LVar3 = InterlockedDecrement(puVar1 + 4);
        uVar2 = DAT_0105b588;
        if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_0105b588 = uVar2;
        _memmove(_Dst,_Src,((int)DAT_010c9d74 - (int)_Src >> 2) << 2);
        piVar4 = DAT_010c9d74 + -1;
        DAT_010c9d74 = piVar4;
      }
    } while (_Dst != piVar4);
  }
  return;
}


//// FUNCTION FUN_00a7c740 @ 00a7c740 ////

void __fastcall FUN_00a7c740(int param_1)

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


//// FUNCTION FUN_00a7c7d0 @ 00a7c7d0 ////

void __fastcall FUN_00a7c7d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a7c320();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a7c800 @ 00a7c800 ////

void FUN_00a7c800(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00a7c800(*(void **)((int)param_1 + 8));
    FUN_00a7bd90((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a7c8b0 @ 00a7c8b0 ////

undefined4 __thiscall FUN_00a7c8b0(void *this,float param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined4 in_EAX;
  uint uVar7;
  char cVar8;
  undefined4 *puVar9;
  float local_4;
  
  iVar6 = DAT_00e69adc;
  fVar2 = DAT_0105c3a8 - *(float *)((int)this + 0x10);
  fVar4 = DAT_0105c3ac - *(float *)((int)this + 0x14);
  fVar3 = DAT_0105c3b0 - *(float *)((int)this + 0x18);
  fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  if (fVar2 < 40000.0 == 0 && (fVar2 == 40000.0) == 0) {
    return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                    (ushort)(fVar2 < 40000.0) << 8 | (ushort)NAN(fVar2) << 10 |
                                    (ushort)(fVar2 == 40000.0) << 0xe) >> 8),1);
  }
  cVar8 = (char)param_2;
  if (cVar8 == '\0') {
    local_4 = param_1;
  }
  else {
    local_4 = param_1 - *(float *)((int)this + 0x20);
  }
  if (local_4 < 0.0) {
    local_4 = 0.0;
  }
  if (cVar8 == '\0') {
    param_1 = param_1 + *(float *)((int)this + 0x20);
  }
  *(float *)((int)this + 0x20) = param_1;
  bVar5 = false;
  if (iVar6 == -1) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar9 = *(undefined4 **)((int)this + 4);
    while (puVar9 != puVar1) {
      uVar7 = FUN_00aae6c0((void *)*puVar9,local_4,*(void **)((int)this + 0x24),param_2);
      if (((char)uVar7 != '\0') || (bVar5)) {
        bVar5 = true;
        puVar9 = puVar9 + 1;
      }
      else {
        puVar9 = puVar9 + 1;
      }
    }
  }
  else {
    FUN_00aae6c0(*(void **)(*(int *)((int)this + 4) + iVar6 * 4),local_4,
                 *(void **)((int)this + 0x24),(undefined4 *)0x1);
  }
  if ((cVar8 != '\0') && (*(int **)((int)this + 0x1c) != (int *)0x0)) {
    FUN_00a7c470(*(int **)((int)this + 0x1c));
  }
  if (bVar5) {
    if (*(int *)((int)this + 0x28) == 0) {
      *(undefined4 *)((int)this + 0x28) = 1;
    }
  }
  else if (*(int *)((int)this + 0x28) == 1) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00a7c9f0 @ 00a7c9f0 ////

void __thiscall FUN_00a7c9f0(void *this,float *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = *(undefined4 **)((int)this + 4); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_00aada90((void *)*puVar2,param_1);
  }
  *(float *)((int)this + 0x10) = param_1[9];
  *(float *)((int)this + 0x14) = param_1[10];
  *(float *)((int)this + 0x18) = param_1[0xb];
  return;
}


//// FUNCTION FUN_00a7ca30 @ 00a7ca30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a7ca30(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  LONG LVar4;
  int *piVar5;
  
  piVar3 = DAT_010c9d74;
  for (piVar5 = DAT_010c9d70; piVar5 != piVar3; piVar5 = piVar5 + 1) {
    puVar1 = (undefined4 *)*piVar5;
    LVar4 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
  }
  if (DAT_010c9d70 == (int *)0x0) {
    DAT_010c9d70 = (int *)0x0;
    DAT_010c9d74 = (int *)0x0;
    _DAT_010c9d78 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010c9d70);
}


//// FUNCTION FUN_00a7cac0 @ 00a7cac0 ////

void __fastcall FUN_00a7cac0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 *puVar3;
  
  FUN_00a04290(param_1);
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    puVar3 = (undefined4 *)0x1;
    fVar2 = FUN_00a04380(param_1);
    uVar1 = FUN_00a7c8b0((void *)(param_1 + 0x24),(float)fVar2,puVar3);
    if ((char)uVar1 != '\0') {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) ^ *(uint *)(param_1 + 0x1c) & 1;
      return;
    }
  }
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) ^ (*(uint *)(param_1 + 0x1c) ^ 1) & 1;
  return;
}


//// FUNCTION FUN_00a7cb10 @ 00a7cb10 ////

int __fastcall FUN_00a7cb10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a7c320();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a7cb40 @ 00a7cb40 ////

undefined4 * __thiscall FUN_00a7cb40(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_00a7c2b0(this,param_2);
  puVar2 = FUN_00a7c240(this,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return param_1;
}


//// FUNCTION FUN_00a7cb70 @ 00a7cb70 ////

void __fastcall FUN_00a7cb70(int param_1)

{
  FUN_00a7c800(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00a7cba0 @ 00a7cba0 ////

void __thiscall FUN_00a7cba0(void *this,float param_1)

{
  FUN_00a7c8b0(this,param_1,(undefined4 *)0x0);
  return;
}


//// FUNCTION FUN_00a7cbb0 @ 00a7cbb0 ////

undefined4 * __thiscall FUN_00a7cbb0(void *this,undefined4 param_1,undefined4 *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = (undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 4),(char *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x24) = 0;
  this_00 = *(void **)this;
  puVar1 = FUN_00a7c240(this_00,param_2);
  puVar2 = FUN_00a7c2b0(this_00,param_2);
  *(undefined4 **)((int)this + 0x24) = puVar1;
  *(bool *)((int)this + 0x28) = puVar1 != puVar2;
  return this;
}


//// FUNCTION FUN_00a7cc10 @ 00a7cc10 ////

void __fastcall FUN_00a7cc10(int param_1)

{
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_00990ec0(param_1 + 8);
  return;
}


//// FUNCTION FUN_00a7cc50 @ 00a7cc50 ////

void __thiscall FUN_00a7cc50(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cfc0e8;
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
  FUN_00a7b530((int *)&param_2);
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
      goto LAB_00a7cdc1;
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
      piVar2 = (int *)FUN_00a7b3e0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00a7b3c0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00a7cdc1:
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
            FUN_00a7ba50(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00a7b420(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00a7ba50(this,(int)piVar5);
              break;
            }
LAB_00a7ce84:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00a7b420(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00a7ce84;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00a7ba50(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00a7b420(this,piVar5);
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


//// FUNCTION FUN_00a7cf20 @ 00a7cf20 ////

void FUN_00a7cf20(void)

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
  puStack_8 = &LAB_00cfc108;
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


//// FUNCTION FUN_00a7cf90 @ 00a7cf90 ////

void __thiscall FUN_00a7cf90(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a7c800((void *)piVar6[1]);
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
    FUN_00a7cc50(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a7d050 @ 00a7d050 ////

void __thiscall
FUN_00a7d050(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cfc128;
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
  piVar3 = FUN_00a7c360(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00a7d14b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a7ba50(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00a7b420(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00a7d14b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a7b420(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00a7ba50(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00a7d200 @ 00a7d200 ////

void * __thiscall FUN_00a7d200(void *this,byte param_1)

{
  FUN_00a7cc10((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a7d2a0 @ 00a7d2a0 ////

void __thiscall FUN_00a7d2a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a7cf20();
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
      _Dst = FUN_00a7c200((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a7c090(param_1,iVar5,param_1 + param_2);
      FUN_00a7c200(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a7b750(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a7c090(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a7bd40(param_1,(int)pvVar3,iVar5);
    FUN_00a7b750(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a7d480 @ 00a7d480 ////

void __thiscall FUN_00a7d480(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00a7d4e4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00a7d4e9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00a7d4e4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a7d4e9:
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
      puVar5 = (undefined4 *)FUN_00a7d050(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00a7b660((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00a7d050(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00a7d5a0 @ 00a7d5a0 ////

void __fastcall FUN_00a7d5a0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc148;
  local_c = ExceptionList;
  puVar5 = *(undefined4 **)(param_1 + 4);
  local_4 = 0;
  for (; local_10 = param_1, puVar5 != *(undefined4 **)(param_1 + 8); puVar5 = puVar5 + 1) {
    pvVar2 = (void *)*puVar5;
    if (pvVar2 != (void *)0x0) {
      ExceptionList = &local_c;
      FUN_00aaece0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
  }
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)**(undefined4 **)(param_1 + 0x24));
  }
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 4);
    ExceptionList = &local_c;
    *piVar1 = *piVar1 + -1;
    piVar4 = DAT_010c9d64;
    if (*piVar1 == 0) {
      local_14 = (int *)*DAT_010c9d64;
      if (local_14 != DAT_010c9d64) {
        iVar3 = *(int *)(param_1 + 0x1c);
        do {
          if (local_14[0xb] == iVar3) {
            FUN_00a7cc50(&DAT_010c9d60,&local_14,local_14);
            break;
          }
          FUN_00a7b530((int *)&local_14);
        } while (local_14 != piVar4);
      }
      pvVar2 = *(void **)(param_1 + 0x1c);
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((int)pvVar2 + 0x30) == (void *)0x0) {
          *(undefined4 *)((int)pvVar2 + 0x30) = 0;
          *(undefined4 *)((int)pvVar2 + 0x34) = 0;
          *(undefined4 *)((int)pvVar2 + 0x38) = 0;
          FUN_00990ec0((int)pvVar2 + 8);
                    /* WARNING: Subroutine does not return */
          _free(pvVar2);
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)pvVar2 + 0x30));
      }
    }
  }
  **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + -1;
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00a7d6b0 @ 00a7d6b0 ////

void __fastcall FUN_00a7d6b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc168;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d7a174;
  local_4 = 0;
  FUN_00a7d5a0((int)(param_1 + 9));
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00d742f8;
  FUN_00999aa0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a7d750 @ 00a7d750 ////

void __fastcall FUN_00a7d750(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[0xb];
  for (piVar2 = (int *)param_1[10]; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    FUN_00aacb20(*piVar2);
  }
  FUN_00999900(param_1,4);
  return;
}


//// FUNCTION FUN_00a7d810 @ 00a7d810 ////

undefined4 * __thiscall FUN_00a7d810(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00a7d050(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00a7d050(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00a7d050(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a7b660((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00a7d050(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00a7d050(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a7b530((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00a7d992;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00a7d050(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00a7d050(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00a7d992:
  puVar4 = (undefined4 *)FUN_00a7d480(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00a7d9c0 @ 00a7d9c0 ////

undefined4 * __thiscall FUN_00a7d9c0(void *this,char *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc196;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009910f0((undefined4 *)((int)this + 8));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  local_4 = 1;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  pvVar1 = FUN_0099bb50(param_1,0,0,0,'\0');
  if (pvVar1 != (void *)0x0) {
    *(undefined1 *)((int)this + 0x14) = 6;
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfeffffff;
    if (*(void **)((int)this + 0x20) != pvVar1) {
      Engine_SetResourceReference((undefined4 *)((int)this + 8),(int)pvVar1);
    }
    FUN_0099b400(pvVar1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a7da60 @ 00a7da60 ////

void __fastcall FUN_00a7da60(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a7cf90(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a7da90 @ 00a7da90 ////

undefined4 * __thiscall FUN_00a7da90(void *this,byte param_1)

{
  FUN_00a7d6b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a7db00 @ 00a7db00 ////

int __fastcall FUN_00a7db00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a7c320();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a7db30 @ 00a7db30 ////

int __thiscall FUN_00a7db30(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc1a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x28) = 1;
  local_30 = local_24;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,*(char **)((int)this + 4),*(uint *)((int)this + 8));
  local_10 = *param_1;
  local_4 = 0;
  piVar2 = FUN_00a7d810(*(void **)this,&local_34,*(int **)((int)this + 0x24),(int *)&local_30);
  iVar1 = *piVar2;
  *(int *)((int)this + 0x24) = iVar1;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return iVar1 + 0x2c;
}


//// FUNCTION FUN_00a7dbe0 @ 00a7dbe0 ////

void __thiscall FUN_00a7dbe0(void *this,float *param_1,float param_2)

{
  void *this_00;
  float fVar1;
  float fVar2;
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
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_4;
  
  fVar1 = param_1[6];
  fVar2 = param_1[7];
  fVar3 = param_1[8];
  fVar4 = *param_1;
  fVar7 = param_1[9] - param_1[3] * 0.005;
  fVar5 = param_1[2];
  fVar6 = param_1[1];
  fVar8 = param_1[10] - param_1[4] * 0.005;
  this_00 = (void *)((int)this + 0x2c);
  fVar9 = param_1[0xb] - param_1[5] * 0.005;
  fVar10 = fVar4 + fVar1;
  fVar11 = fVar6 + fVar2;
  fVar12 = fVar5 + fVar3;
  local_c = fVar10 * param_2;
  local_18 = local_c + fVar7;
  local_14 = fVar11 * param_2 + fVar8;
  local_10 = fVar12 * param_2 + fVar9;
  SpawnPointList_Append(this_00,&local_18);
  fVar1 = fVar1 - fVar4;
  fVar2 = fVar2 - fVar6;
  fVar3 = fVar3 - fVar5;
  local_18 = fVar1 * param_2 + fVar7;
  local_14 = fVar2 * param_2 + fVar8;
  local_10 = fVar3 * param_2 + fVar9;
  local_4 = fVar3;
  SpawnPointList_Append(this_00,&local_18);
  local_18 = fVar7 - fVar1 * param_2;
  local_14 = fVar8 - fVar2 * param_2;
  local_10 = fVar9 - fVar3 * param_2;
  local_4 = fVar3;
  SpawnPointList_Append(this_00,&local_18);
  local_18 = fVar7 - fVar10 * param_2;
  local_14 = fVar8 - fVar11 * param_2;
  local_10 = fVar9 - fVar12 * param_2;
  local_4 = fVar12;
  SpawnPointList_Append(this_00,&local_18);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


//// FUNCTION FUN_00a7dde0 @ 00a7dde0 ////

void * __thiscall
FUN_00a7dde0(void *this,int *param_1,float *param_2,char param_3,float param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  bool bVar10;
  float *local_84;
  undefined4 *local_80;
  void *local_7c;
  void *local_78 [2];
  uint local_70;
  void *local_58 [2];
  uint local_50;
  undefined1 local_38 [4];
  void *local_34;
  uint local_2c;
  int local_14;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cfc232;
  local_c = ExceptionList;
  bVar3 = false;
  bVar10 = false;
  local_84 = (float *)0x0;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(float *)((int)this + 0x10) = param_2[9];
  *(float *)((int)this + 0x14) = param_2[10];
  *(float *)((int)this + 0x18) = param_2[0xb];
  local_4 = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_7c = this;
  bVar4 = FUN_00a7c3a0("",param_1);
  if (bVar4) {
    FUN_00a7cbb0(local_38,&DAT_010c9d60,param_1);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (local_10 == '\0') {
      puVar9 = operator_new(0x3c);
      bVar10 = puVar9 == (undefined4 *)0x0;
      if (bVar10) {
        local_80 = (undefined4 *)0x0;
      }
      else {
        local_80 = puVar9;
        puVar6 = FUN_0040d6b0(local_58,"FX\\",param_1);
        puVar6 = FUN_004312e0(local_78,puVar6,".dds");
        local_4 = 4;
        local_84 = (float *)0x3;
        local_80 = FUN_00a7d9c0(puVar9,(char *)*puVar6);
      }
      bVar3 = !bVar10;
      bVar10 = !bVar10;
      local_4 = 6;
      puVar9 = (undefined4 *)FUN_00a7db30(local_38,&local_80);
      uVar8 = *puVar9;
    }
    else {
      uVar8 = *(undefined4 *)(local_14 + 0x2c);
    }
    *(undefined4 *)((int)this + 0x1c) = uVar8;
    if ((bVar10) && (0x14 < local_70)) {
                    /* WARNING: Subroutine does not return */
      _free(local_78[0]);
    }
    local_4 = 1;
    if ((bVar3) && (0x14 < local_50)) {
                    /* WARNING: Subroutine does not return */
      _free(local_58[0]);
    }
    local_84 = (float *)0x3ca3d70a;
    uVar7 = FUN_00413450(param_1,"squib",0,5);
    if (uVar7 != 0xffffffff) {
      local_80 = (undefined4 *)_atol((char *)(*param_1 + 5 + uVar7));
      if ((float)(int)local_80 != 0.0) {
        local_84 = (float *)((float)(int)local_80 * 0.001);
      }
    }
    FUN_00a7dbe0(*(void **)((int)this + 0x1c),param_2,(float)local_84);
    local_4 = local_4 & 0xffffff00;
    if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_34);
    }
  }
  if ((*(int *)((int)this + 0x1c) == 0) && (param_3 == '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = 2;
  }
  *(undefined4 *)((int)this + 0x28) = uVar8;
  puVar9 = operator_new(0x14);
  local_4._0_1_ = 7;
  local_80 = puVar9;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    uVar5 = FUN_00a7e6c0((int)param_1);
    puVar9 = FUN_00a7c100(puVar9,CONCAT31(extraout_var,uVar5));
  }
  *(undefined4 **)((int)this + 0x24) = puVar9;
  piVar1 = param_1 + 9;
  *(int **)((int)this + 0x2c) = piVar1;
  *piVar1 = *piVar1 + 1;
  local_4._0_1_ = 0;
  uVar5 = FUN_00a7e6d0((int)param_1);
  puVar9 = (undefined4 *)FUN_00a7e6b0((int)param_1);
  local_80 = (undefined4 *)FUN_00a7e6e0((int)param_1);
  while (puVar9 != local_80) {
    local_84 = operator_new(0x130);
    local_4._0_1_ = 8;
    if (local_84 == (float *)0x0) {
      local_84 = (float *)0x0;
    }
    else {
      local_84 = FUN_00aaf2e0(local_84,(float)puVar9,param_2,*(char *)(param_2 + 0xc),param_4,
                              param_5,(float)CONCAT31(extraout_var_00,uVar5),
                              *(void **)((int)this + 0x24));
    }
    iVar2 = *(int *)((int)this + 4);
    local_4._0_1_ = 0;
    if ((iVar2 == 0) ||
       ((uint)(*(int *)((int)this + 0xc) - iVar2 >> 2) <=
        (uint)(*(int *)((int)this + 8) - iVar2 >> 2))) {
      FUN_00a7d2a0(this,*(undefined4 **)((int)this + 8),1,&local_84);
      puVar9 = puVar9 + 0x4e;
    }
    else {
      puVar6 = *(undefined4 **)((int)this + 8);
      *puVar6 = local_84;
      *(undefined4 **)((int)this + 8) = puVar6 + 1;
      puVar9 = puVar9 + 0x4e;
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a7e120 @ 00a7e120 ////

undefined4 * __thiscall
FUN_00a7e120(void *this,int *param_1,undefined4 *param_2,float *param_3,undefined4 param_4,
            float param_5,float param_6)

{
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc253;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a042c0(this,(int)param_2);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d7a174;
  FUN_00a7dde0((void *)((int)this + 0x24),param_1,param_3,(char)param_4,param_5,param_6);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x54) = 0;
  if (this_00 != (undefined4 *)0x0) {
    FUN_0097b600(this_00,(int)this);
    ExceptionList = local_c;
    return this;
  }
  param_2 = this;
  FUN_009fd680(&DAT_010c9d6c,&param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a7e1d0 @ 00a7e1d0 ////

undefined4 * __cdecl FUN_00a7e1d0(int *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  float10 fVar3;
  char in_stack_0000003c;
  float in_stack_00000040;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc26b;
  local_c = ExceptionList;
  local_10 = 0.0;
  ExceptionList = &local_c;
  if ((param_2 != (undefined4 *)0x0) &&
     (pvVar1 = (void *)param_2[0x52], ExceptionList = &local_c, pvVar1 != (void *)0x0)) {
    if (in_stack_0000003c == '\0') {
      ExceptionList = &local_c;
      FUN_009aa830(&stack0x0000000c,(float *)((int)pvVar1 + 0x18));
    }
    else {
      ExceptionList = &local_c;
      FUN_0040b490((float *)((int)pvVar1 + 0x18),(float *)&stack0x00000030);
    }
    fVar3 = FUN_0097f880(pvVar1,(float *)&stack0x00000030,(undefined4 *)0x0);
    local_10 = (float)fVar3;
  }
  pvVar1 = operator_new(0x58);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_00a7e120(pvVar1,param_1,param_2,(float *)&stack0x0000000c,0,in_stack_00000040,
                        local_10);
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00a7e290 @ 00a7e290 ////

void __cdecl FUN_00a7e290(char *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_40 [12];
  undefined1 local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  puVar3 = param_3;
  puVar4 = auStack_40;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_10 = *(undefined1 *)(param_3 + 0xc);
  piVar1 = (int *)FUN_00a8e7f0(param_1,(char *)0x0);
  FUN_00a7e1d0(piVar1,param_2);
  return;
}


//// FUNCTION FUN_00a7e4c0 @ 00a7e4c0 ////

uint __fastcall FUN_00a7e4c0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint in_EAX;
  
  puVar1 = (uint *)(param_1 + 4);
  uVar2 = *puVar1;
  while( true ) {
    if (uVar2 == 0) {
      return in_EAX & 0xffffff00;
    }
    LOCK();
    in_EAX = *puVar1;
    if (uVar2 == in_EAX) {
      *puVar1 = uVar2 + 1;
      in_EAX = uVar2;
    }
    UNLOCK();
    if (in_EAX == uVar2) break;
    uVar2 = *puVar1;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION FUN_00a7e600 @ 00a7e600 ////

exception * __fastcall FUN_00a7e600(exception *param_1)

{
  exception::exception(param_1);
  *(undefined ***)param_1 = &PTR_FUN_00d7a734;
  return param_1;
}


//// FUNCTION FUN_00a7e640 @ 00a7e640 ////

undefined4 * __thiscall FUN_00a7e640(void *this,byte param_1)

{
  thunk_FUN_00ace1d8(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a7e6b0 @ 00a7e6b0 ////

int __fastcall FUN_00a7e6b0(int param_1)

{
  return *(int *)(param_1 + 0x20) + 0x10;
}


//// FUNCTION FUN_00a7e6c0 @ 00a7e6c0 ////

undefined1 __fastcall FUN_00a7e6c0(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0x20) + 0xd);
}


//// FUNCTION FUN_00a7e6d0 @ 00a7e6d0 ////

undefined1 __fastcall FUN_00a7e6d0(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0x20) + 0xe);
}


//// FUNCTION FUN_00a7e6e0 @ 00a7e6e0 ////

int __fastcall FUN_00a7e6e0(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x20) + 4) * 0x138 + 0x10 + *(int *)(param_1 + 0x20);
}


//// FUNCTION FUN_00a7e710 @ 00a7e710 ////

undefined4 __fastcall FUN_00a7e710(undefined4 *param_1)

{
  return *param_1;
}


//// FUNCTION FUN_00a7e7b0 @ 00a7e7b0 ////

int __fastcall FUN_00a7e7b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x138;
}


//// FUNCTION FUN_00a7e860 @ 00a7e860 ////

void __cdecl FUN_00a7e860(int param_1)

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


//// FUNCTION FUN_00a7e880 @ 00a7e880 ////

void __cdecl FUN_00a7e880(int *param_1)

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


//// FUNCTION FUN_00a7e8c0 @ 00a7e8c0 ////

void __thiscall FUN_00a7e8c0(void *this,int *param_1)

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


//// FUNCTION FUN_00a7ea20 @ 00a7ea20 ////

void __fastcall FUN_00a7ea20(int *param_1)

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


//// FUNCTION FUN_00a7ebc0 @ 00a7ebc0 ////

void __fastcall FUN_00a7ebc0(int *param_1)

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


//// FUNCTION FUN_00a7ed30 @ 00a7ed30 ////

void __cdecl FUN_00a7ed30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x4e;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x4e; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a7ee00 @ 00a7ee00 ////

exception * __thiscall FUN_00a7ee00(void *this,exception *param_1)

{
  exception::exception(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d7a734;
  return this;
}


//// FUNCTION FUN_00a7ee50 @ 00a7ee50 ////

void __fastcall FUN_00a7ee50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a754;
  return;
}


//// FUNCTION FUN_00a7f1c0 @ 00a7f1c0 ////

void __fastcall FUN_00a7f1c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[2] + -1;
    piVar1[2] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a7f1d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 8))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a7f480 @ 00a7f480 ////

void __cdecl FUN_00a7f480(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a7f4c0 @ 00a7f4c0 ////

void __cdecl FUN_00a7f4c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a7f9a0 @ 00a7f9a0 ////

char * __thiscall FUN_00a7f9a0(void *this,byte param_1)

{
  FUN_00a7fc60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a7fc60 @ 00a7fc60 ////

void __fastcall FUN_00a7fc60(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 != (char *)0x0) {
    FUN_00a7fc60(pcVar1);
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  pcVar1 = *(char **)(param_1 + 0xc);
  if (pcVar1 != (char *)0x0) {
    FUN_00a7fc60(pcVar1);
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  if (*param_1 == '\0') {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  pcVar1 = *(char **)(param_1 + 8);
  if (pcVar1 != (char *)0x0) {
    FUN_00a7fc60(pcVar1);
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  return;
}


//// FUNCTION FUN_00a808b0 @ 00a808b0 ////

void __fastcall FUN_00a808b0(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a808b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}


//// FUNCTION FUN_00a808c0 @ 00a808c0 ////

void __fastcall FUN_00a808c0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x20));
}


//// FUNCTION FUN_00a80910 @ 00a80910 ////

void __fastcall FUN_00a80910(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  UNLOCK();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 4))();
    LOCK();
    iVar1 = param_1[2] + -1;
    param_1[2] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a80937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a80970 @ 00a80970 ////

int * __thiscall FUN_00a80970(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != *(int *)this) {
    if (iVar1 != 0) {
      LOCK();
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      UNLOCK();
    }
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar3 = piVar2[1] + -1;
      piVar2[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*piVar2 + 4))();
        LOCK();
        iVar3 = piVar2[2] + -1;
        piVar2[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          (**(code **)(*piVar2 + 8))();
        }
      }
    }
    *(int *)this = iVar1;
  }
  return this;
}


//// FUNCTION FUN_00a809e0 @ 00a809e0 ////

void __fastcall FUN_00a809e0(int param_1)

{
  *(undefined1 *)(param_1 + 0x100) = 0xff;
  *(undefined1 *)(param_1 + 0x101) = 0xff;
  *(undefined1 *)(param_1 + 0x102) = 0xff;
  *(undefined1 *)(param_1 + 0x103) = 0xff;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x104) = 0xff;
  *(undefined1 *)(param_1 + 0x105) = 0xff;
  *(undefined1 *)(param_1 + 0x106) = 0xff;
  *(undefined1 *)(param_1 + 0x107) = 0xff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x108) = 0xff;
  *(undefined1 *)(param_1 + 0x109) = 0xff;
  *(undefined1 *)(param_1 + 0x10a) = 0xff;
  *(undefined1 *)(param_1 + 0x10b) = 0xff;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00a80a50 @ 00a80a50 ////

void __fastcall FUN_00a80a50(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_00a80a70 @ 00a80a70 ////

void * __thiscall FUN_00a80a70(void *this,byte param_1)

{
  FUN_00a808c0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a80ac0 @ 00a80ac0 ////

void __fastcall FUN_00a80ac0(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00a80b00 @ 00a80b00 ////

void __fastcall FUN_00a80b00(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a80b10 @ 00a80b10 ////

void __thiscall FUN_00a80b10(void *this,int param_1)

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


//// FUNCTION FUN_00a80bc0 @ 00a80bc0 ////

int * __fastcall FUN_00a80bc0(int *param_1)

{
  FUN_00a7ea20(param_1);
  return param_1;
}


//// FUNCTION FUN_00a80bd0 @ 00a80bd0 ////

undefined4 * __thiscall FUN_00a80bd0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00a80c40 @ 00a80c40 ////

void __fastcall FUN_00a80c40(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
      LOCK();
      iVar2 = piVar1[2] + -1;
      piVar1[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a80c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 8))();
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a80d30 @ 00a80d30 ////

void __thiscall FUN_00a80d30(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)this + 0x12) = *(undefined1 *)((int)param_1 + 0x12);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)((int)param_1 + 0x13);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined1 *)((int)this + 0x5c) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)((int)this + 0x5d) = *(undefined1 *)((int)param_1 + 0x5d);
  *(undefined1 *)((int)this + 0x5e) = *(undefined1 *)((int)param_1 + 0x5e);
  *(undefined1 *)((int)this + 0x5f) = *(undefined1 *)((int)param_1 + 0x5f);
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x70) = param_1[0x1c];
  *(undefined4 *)((int)this + 0x74) = param_1[0x1d];
  *(undefined4 *)((int)this + 0x78) = param_1[0x1e];
  *(undefined4 *)((int)this + 0x7c) = param_1[0x1f];
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined4 *)((int)this + 0x8c) = param_1[0x23];
  *(undefined4 *)((int)this + 0x90) = param_1[0x24];
  *(undefined4 *)((int)this + 0x94) = param_1[0x25];
  *(undefined4 *)((int)this + 0x98) = param_1[0x26];
  *(undefined1 *)((int)this + 0x9c) = *(undefined1 *)(param_1 + 0x27);
  *(undefined4 *)((int)this + 0xa0) = param_1[0x28];
  *(undefined4 *)((int)this + 0xa4) = param_1[0x29];
  *(undefined4 *)((int)this + 0xa8) = param_1[0x2a];
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  *(undefined4 *)((int)this + 0xb8) = param_1[0x2e];
  *(undefined4 *)((int)this + 0xbc) = param_1[0x2f];
  *(undefined4 *)((int)this + 0xc0) = param_1[0x30];
  *(undefined4 *)((int)this + 0xc4) = param_1[0x31];
  *(undefined4 *)((int)this + 200) = param_1[0x32];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x33];
  *(undefined1 *)((int)this + 0xd0) = *(undefined1 *)(param_1 + 0x34);
  *(undefined1 *)((int)this + 0xd1) = *(undefined1 *)((int)param_1 + 0xd1);
  *(undefined4 *)((int)this + 0xd4) = param_1[0x35];
  *(undefined4 *)((int)this + 0xd8) = param_1[0x36];
  *(undefined4 *)((int)this + 0xdc) = param_1[0x37];
  *(undefined4 *)((int)this + 0xe0) = param_1[0x38];
  *(undefined4 *)((int)this + 0xe4) = param_1[0x39];
  *(undefined4 *)((int)this + 0xe8) = param_1[0x3a];
  *(undefined1 *)((int)this + 0xec) = *(undefined1 *)(param_1 + 0x3b);
  *(undefined1 *)((int)this + 0xed) = *(undefined1 *)((int)param_1 + 0xed);
  *(undefined4 *)((int)this + 0xf0) = param_1[0x3c];
  *(undefined4 *)((int)this + 0xf4) = param_1[0x3d];
  *(undefined4 *)((int)this + 0xf8) = param_1[0x3e];
  *(undefined4 *)((int)this + 0xfc) = param_1[0x3f];
  *(undefined4 *)((int)this + 0x100) = param_1[0x40];
  *(undefined4 *)((int)this + 0x104) = param_1[0x41];
  *(undefined4 *)((int)this + 0x108) = param_1[0x42];
  *(undefined1 *)((int)this + 0x10c) = *(undefined1 *)(param_1 + 0x43);
  *(undefined1 *)((int)this + 0x10d) = *(undefined1 *)((int)param_1 + 0x10d);
  *(undefined1 *)((int)this + 0x10e) = *(undefined1 *)((int)param_1 + 0x10e);
  *(undefined4 *)((int)this + 0x110) = param_1[0x44];
  *(undefined4 *)((int)this + 0x114) = param_1[0x45];
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x124) = param_1[0x49];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined4 *)((int)this + 0x130) = param_1[0x4c];
  *(undefined1 *)((int)this + 0x134) = *(undefined1 *)(param_1 + 0x4d);
  *(undefined1 *)((int)this + 0x135) = *(undefined1 *)((int)param_1 + 0x135);
  return;
}


//// FUNCTION FUN_00a810a0 @ 00a810a0 ////

int * __fastcall FUN_00a810a0(int *param_1)

{
  FUN_00a7ebc0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a81130 @ 00a81130 ////

undefined4 * __thiscall FUN_00a81130(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00a81170 @ 00a81170 ////

void FUN_00a81170(exception *param_1)

{
  undefined1 local_c [12];
  
  FUN_00a7ee00(local_c,param_1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_00e3cc24);
}


//// FUNCTION FUN_00a811a0 @ 00a811a0 ////

void __cdecl FUN_00a811a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -0x4e;
    param_3 = param_3 + -0x4e;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a81210 @ 00a81210 ////

void __fastcall FUN_00a81210(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a81370 @ 00a81370 ////

void FUN_00a81370(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
  if (pbVar1 != *(byte **)(param_1 + 8)) {
    do {
      iVar2 = _isspace((uint)*pbVar1);
      if (iVar2 == 0) {
        return;
      }
      **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
      pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
    } while (pbVar1 != *(byte **)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_00a81400 @ 00a81400 ////

undefined4 * __thiscall FUN_00a81400(void *this,byte param_1)

{
  FUN_00a81420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81420 @ 00a81420 ////

void __fastcall FUN_00a81420(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a720;
  return;
}


//// FUNCTION FUN_00a81470 @ 00a81470 ////

void __fastcall FUN_00a81470(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
      LOCK();
      iVar2 = piVar1[2] + -1;
      piVar1[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a8149c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 8))();
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a81610 @ 00a81610 ////

void __cdecl FUN_00a81610(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a81640 @ 00a81640 ////

void __cdecl FUN_00a81640(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a819f0 @ 00a819f0 ////

undefined4 * __thiscall FUN_00a819f0(void *this,byte param_1)

{
  FUN_00a81a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81a10 @ 00a81a10 ////

void __fastcall FUN_00a81a10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81a70 @ 00a81a70 ////

undefined4 * __thiscall FUN_00a81a70(void *this,byte param_1)

{
  FUN_00a81a90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81a90 @ 00a81a90 ////

void __fastcall FUN_00a81a90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81af0 @ 00a81af0 ////

undefined4 * __thiscall FUN_00a81af0(void *this,byte param_1)

{
  FUN_00a81b10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81b10 @ 00a81b10 ////

void __fastcall FUN_00a81b10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81b70 @ 00a81b70 ////

undefined4 * __thiscall FUN_00a81b70(void *this,byte param_1)

{
  FUN_00a81b90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81b90 @ 00a81b90 ////

void __fastcall FUN_00a81b90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81bf0 @ 00a81bf0 ////

undefined4 * __thiscall FUN_00a81bf0(void *this,byte param_1)

{
  FUN_00a81c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81c10 @ 00a81c10 ////

void __fastcall FUN_00a81c10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81c70 @ 00a81c70 ////

undefined4 * __thiscall FUN_00a81c70(void *this,byte param_1)

{
  FUN_00a81c90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81c90 @ 00a81c90 ////

void __fastcall FUN_00a81c90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81cf0 @ 00a81cf0 ////

undefined4 * __thiscall FUN_00a81cf0(void *this,byte param_1)

{
  FUN_00a81d10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81d10 @ 00a81d10 ////

void __fastcall FUN_00a81d10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81d70 @ 00a81d70 ////

undefined4 * __thiscall FUN_00a81d70(void *this,byte param_1)

{
  FUN_00a81d90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81d90 @ 00a81d90 ////

void __fastcall FUN_00a81d90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81df0 @ 00a81df0 ////

undefined4 * __thiscall FUN_00a81df0(void *this,byte param_1)

{
  FUN_00a81e10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81e10 @ 00a81e10 ////

void __fastcall FUN_00a81e10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81e80 @ 00a81e80 ////

undefined4 * __thiscall FUN_00a81e80(void *this,byte param_1)

{
  FUN_00a81ea0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81ea0 @ 00a81ea0 ////

void __fastcall FUN_00a81ea0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81f10 @ 00a81f10 ////

undefined4 * __thiscall FUN_00a81f10(void *this,byte param_1)

{
  FUN_00a81f30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81f30 @ 00a81f30 ////

void __fastcall FUN_00a81f30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a81fa0 @ 00a81fa0 ////

undefined4 * __thiscall FUN_00a81fa0(void *this,byte param_1)

{
  FUN_00a81fc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a81fc0 @ 00a81fc0 ////

void __fastcall FUN_00a81fc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a82040 @ 00a82040 ////

undefined4 * __thiscall FUN_00a82040(void *this,byte param_1)

{
  FUN_00a82060(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a82060 @ 00a82060 ////

void __fastcall FUN_00a82060(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a820b0 @ 00a820b0 ////

undefined4 * __thiscall FUN_00a820b0(void *this,byte param_1)

{
  FUN_00a820d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a820d0 @ 00a820d0 ////

void __fastcall FUN_00a820d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a82b00 @ 00a82b00 ////

undefined4 * __thiscall FUN_00a82b00(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00cfc280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  local_8 = 0;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00d7a784;
    puVar1[3] = param_1;
  }
  *(undefined4 **)this = puVar1;
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_00a82b90 @ 00a82b90 ////

undefined4 __thiscall FUN_00a82b90(void *this,char *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char cVar5;
  
  if (param_1 == (char *)*param_2) {
    return 0;
  }
  cVar5 = *param_1;
  pcVar4 = param_1;
  while( true ) {
    while( true ) {
      while( true ) {
        iVar1 = *(int *)this;
        if ((iVar1 == 0) || (cVar5 == '\0')) {
          pcVar2 = operator_new(0x10);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = (char *)0x0;
          }
          else {
            *pcVar2 = cVar5;
            pcVar2[4] = '\0';
            pcVar2[5] = '\0';
            pcVar2[6] = '\0';
            pcVar2[7] = '\0';
            pcVar2[0xc] = '\0';
            pcVar2[0xd] = '\0';
            pcVar2[0xe] = '\0';
            pcVar2[0xf] = '\0';
            pcVar2[8] = '\0';
            pcVar2[9] = '\0';
            pcVar2[10] = '\0';
            pcVar2[0xb] = '\0';
          }
          *(char **)this = pcVar2;
          pcVar4 = param_1;
          if (iVar1 != 0) {
            *(int *)(pcVar2 + 0xc) = iVar1;
          }
        }
        pcVar2 = *(char **)this;
        if (*pcVar2 <= cVar5) break;
        this = pcVar2 + 4;
      }
      if (cVar5 == *pcVar2) break;
      this = pcVar2 + 0xc;
    }
    if (cVar5 == '\0') break;
    pcVar4 = pcVar4 + 1;
    param_1 = pcVar4;
    if (pcVar4 == (char *)*param_2) {
      cVar5 = '\0';
      this = pcVar2 + 8;
    }
    else {
      cVar5 = *pcVar4;
      this = pcVar2 + 8;
    }
  }
  if (*(int *)(*(int *)this + 8) == 0) {
    puVar3 = operator_new(4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_3;
      *(undefined4 **)(*(int *)this + 8) = puVar3;
      return *(undefined4 *)(*(int *)this + 8);
    }
    *(undefined4 *)(*(int *)this + 8) = 0;
    return *(undefined4 *)(*(int *)this + 8);
  }
  return 0;
}


//// FUNCTION FUN_00a82d20 @ 00a82d20 ////

undefined4 * __thiscall FUN_00a82d20(void *this,byte param_1)

{
  FUN_00a82d40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a82d40 @ 00a82d40 ////

void __fastcall FUN_00a82d40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a720;
  return;
}


//// FUNCTION FUN_00a82d60 @ 00a82d60 ////

int * __thiscall FUN_00a82d60(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined **local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc298;
  local_c = ExceptionList;
  iVar1 = *param_1;
  ExceptionList = &local_c;
  *(int *)this = iVar1;
  if (iVar1 != 0) {
    uVar2 = FUN_00a7e4c0(iVar1);
    if ((char)uVar2 != '\0') {
      ExceptionList = local_c;
      return this;
    }
  }
  exception::exception((exception *)local_18);
  local_18[0] = &PTR_FUN_00d7a734;
  local_4 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00a81170((exception *)local_18);
}


//// FUNCTION FUN_00a82dd0 @ 00a82dd0 ////

undefined4 * __cdecl FUN_00a82dd0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint _Count;
  char *local_124;
  uint local_120;
  uint local_11c;
  char local_118 [20];
  undefined4 local_104;
  char local_100 [256];
  
  local_104 = 0;
  FUN_009d3340(param_2,local_100,(char *)0x0);
  local_124 = local_118;
  pcVar2 = local_100;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Count = (int)pcVar2 - (int)(local_100 + 1);
  if (0x13 < _Count) {
    local_11c = _Count + 0x20 & 0xffffffe0;
    local_124 = _malloc(local_11c);
  }
  _strncpy(local_124,local_100,_Count);
  local_124[_Count] = '\0';
  local_120 = _Count;
  FUN_0048ad50((int *)&local_124);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_124,local_120);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  return param_1;
}


//// FUNCTION FUN_00a82eb0 @ 00a82eb0 ////

void __fastcall FUN_00a82eb0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(param_1 + 0x20) + 0x10);
  piVar1 = piVar2 + *(int *)(*(int *)(param_1 + 0x20) + 4) * 0x4e;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 0x4e) {
    *piVar2 = *piVar2 + (int)piVar1;
    piVar2[0x18] = piVar2[0x18] + (int)piVar1;
    piVar2[0x36] = piVar2[0x36] + (int)piVar1;
    piVar2[0x37] = piVar2[0x37] + (int)piVar1;
    piVar2[0x38] = piVar2[0x38] + (int)piVar1;
    piVar2[0x47] = piVar2[0x47] + (int)piVar1;
    piVar2[0x4c] = piVar2[0x4c] + (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00a82f00 @ 00a82f00 ////

int * __thiscall FUN_00a82f00(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  size_t sVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc2c0;
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
  pvVar4 = operator_new(uVar3 + 1);
  *(void **)this = pvVar4;
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
  sVar5 = FUN_009d3ca0(&local_2c,*(undefined4 **)this,uVar3,(undefined1 *)0x0);
  *(undefined1 *)(sVar5 + *(int *)this) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a83060 @ 00a83060 ////

int * __fastcall FUN_00a83060(int *param_1)

{
  FUN_00a7ea20(param_1);
  return param_1;
}


//// FUNCTION FUN_00a830b0 @ 00a830b0 ////

void __fastcall FUN_00a830b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
      LOCK();
      iVar2 = piVar1[2] + -1;
      piVar1[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a830dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 8))();
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a830f0 @ 00a830f0 ////

int * __fastcall FUN_00a830f0(int *param_1)

{
  FUN_00a7ebc0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a83100 @ 00a83100 ////

void FUN_00a83100(void)

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


//// FUNCTION FUN_00a83180 @ 00a83180 ////

undefined4 * __thiscall
FUN_00a83180(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00a831e0 @ 00a831e0 ////

void __cdecl FUN_00a831e0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_3;
  iVar1 = param_2;
  while (param_1 != iVar1) {
    *piVar2 = *piVar2 + 1;
    FUN_00a7ea20(&param_1);
  }
  return;
}


//// FUNCTION FUN_00a83230 @ 00a83230 ////

void * __thiscall FUN_00a83230(void *this,byte param_1)

{
  FUN_00a81210((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a83310 @ 00a83310 ////

void * __cdecl FUN_00a83310(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00a80d30(param_3,param_1);
    }
    param_1 = param_1 + 0x4e;
    param_3 = (void *)((int)param_3 + 0x138);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00a83350 @ 00a83350 ////

bool __fastcall FUN_00a83350(int param_1)

{
  FUN_00a81370(param_1);
  return (bool)('\x01' - (**(int **)(param_1 + 4) != *(int *)(param_1 + 8)));
}


//// FUNCTION FUN_00a833f0 @ 00a833f0 ////

void __cdecl FUN_00a833f0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a83420 @ 00a83420 ////

void __cdecl FUN_00a83420(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a83450 @ 00a83450 ////

void __fastcall FUN_00a83450(int param_1)

{
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  return;
}


//// FUNCTION FUN_00a83470 @ 00a83470 ////

void __fastcall FUN_00a83470(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_00a834b0 @ 00a834b0 ////

void __fastcall FUN_00a834b0(undefined4 *param_1)

{
  char *_Memory;
  
  _Memory = (char *)*param_1;
  if (_Memory != (char *)0x0) {
    FUN_00a7fc60(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00a83a60 @ 00a83a60 ////

int __thiscall FUN_00a83a60(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00d7a838;
    puVar2[1] = *param_1;
    puVar2[2] = param_1[1];
    puVar2[3] = param_1[2];
    puVar2[4] = param_1[3];
    puVar2[5] = param_1[4];
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  *(undefined4 **)((int)this + 4) = puVar2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return (int)this;
}


//// FUNCTION FUN_00a83b70 @ 00a83b70 ////

int __thiscall FUN_00a83b70(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00d7a858;
    puVar2[1] = *param_1;
    puVar2[2] = param_1[1];
    puVar2[3] = param_1[2];
    puVar2[4] = param_1[3];
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  *(undefined4 **)((int)this + 4) = puVar2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return (int)this;
}


//// FUNCTION FUN_00a83bc0 @ 00a83bc0 ////

undefined4 * __thiscall FUN_00a83bc0(void *this,char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  FUN_00a82b90(*(void **)this,pcVar3,(int *)&param_1,param_2);
  return this;
}


//// FUNCTION FUN_00a83cb0 @ 00a83cb0 ////

void * FUN_00a83cb0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a83ce0 @ 00a83ce0 ////

void * FUN_00a83ce0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a84840 @ 00a84840 ////

void __fastcall FUN_00a84840(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a83100();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a84880 @ 00a84880 ////

void __fastcall FUN_00a84880(int param_1)

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


//// FUNCTION FUN_00a848b0 @ 00a848b0 ////

undefined4 * __thiscall FUN_00a848b0(void *this,undefined4 *param_1)

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
LAB_00a848f4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00a848f9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00a848f4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00a848f9:
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


//// FUNCTION FUN_00a84920 @ 00a84920 ////

undefined4 * __thiscall FUN_00a84920(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x31) == '\0') {
    puVar6 = (undefined4 *)puVar2[1];
    do {
      pbVar5 = (byte *)puVar6[3];
      pbVar3 = (byte *)*param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a84964:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00a84969;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a84964;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a84969:
      if (iVar4 < 0) {
        puVar7 = (undefined4 *)*puVar6;
        puVar2 = puVar6;
      }
      else {
        puVar7 = (undefined4 *)puVar6[2];
      }
      puVar6 = puVar7;
    } while (*(char *)((int)puVar7 + 0x31) == '\0');
  }
  return puVar2;
}


//// FUNCTION FUN_00a84990 @ 00a84990 ////

void * FUN_00a84990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00a83180(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00a84ab0 @ 00a84ab0 ////

void __cdecl FUN_00a84ab0(void *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_00a80d30(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x138);
  }
  return;
}


//// FUNCTION FUN_00a84b20 @ 00a84b20 ////

void __cdecl FUN_00a84b20(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a84bf0 @ 00a84bf0 ////

void __fastcall FUN_00a84bf0(int param_1)

{
  char *_Memory;
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc2e3;
  pvStack_c = ExceptionList;
  _Memory = *(char **)(param_1 + 0x10);
  local_4 = 1;
  if (_Memory != (char *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_00a7fc60(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = param_1;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
  }
  local_4 = 0xffffffff;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1,iVar1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a84c80 @ 00a84c80 ////

void __fastcall FUN_00a84c80(int param_1)

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


//// FUNCTION FUN_00a84cb0 @ 00a84cb0 ////

undefined4 * FUN_00a84cb0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a84d20 @ 00a84d20 ////

undefined4 * FUN_00a84d20(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a84d50 @ 00a84d50 ////

undefined4 * __thiscall FUN_00a84d50(void *this,undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00cfc2f0;
  local_10 = ExceptionList;
  if ((*(int *)((int)this + 4) != 0) && (*(int *)(*(int *)((int)this + 4) + 4) != 0)) {
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_00a82d60(param_1 + 1,(int *)((int)this + 4));
    *param_1 = *(undefined4 *)this;
    ExceptionList = local_10;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}


//// FUNCTION FUN_00a85900 @ 00a85900 ////

void __cdecl FUN_00a85900(undefined1 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[2] = (char)iVar1;
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[1] = (char)iVar1;
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *param_1 = (char)iVar1;
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    param_1[3] = 0;
    return;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[3] = (char)iVar1;
  return;
}


//// FUNCTION FUN_00a85990 @ 00a85990 ////

void __cdecl FUN_00a85990(undefined4 *param_1)

{
  *param_1 = *DAT_010c9f1c;
  param_1[1] = DAT_010c9f1c[1];
  param_1[2] = DAT_010c9f1c[2];
  return;
}


//// FUNCTION FUN_00a859c0 @ 00a859c0 ////

undefined4 * __cdecl FUN_00a859c0(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *_Memory;
  size_t sVar3;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004312e0(local_2c,param_1,".mfx");
  local_4 = 0;
  uVar1 = FUN_009d3660(local_2c,(uint *)0x0);
  if ((char)uVar1 == '\0') {
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  uVar2 = FUN_009d3720(local_2c);
  _Memory = operator_new(uVar2);
  sVar3 = FUN_009d3ca0(local_2c,_Memory,uVar2,(undefined1 *)0x0);
  if (uVar2 != sVar3) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return _Memory;
}


//// FUNCTION FUN_00a85ac0 @ 00a85ac0 ////

int __fastcall FUN_00a85ac0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a83100();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a85b00 @ 00a85b00 ////

void __fastcall FUN_00a85b00(int param_1)

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


//// FUNCTION FUN_00a85cb0 @ 00a85cb0 ////

void __fastcall FUN_00a85cb0(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00a85ce0 @ 00a85ce0 ////

void __fastcall FUN_00a85ce0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfc3ec;
  pvStack_c = ExceptionList;
  local_4 = 0x10;
  ExceptionList = &pvStack_c;
  FUN_00a84bf0(param_1 + 0x318);
  local_4._0_1_ = 0xf;
  FUN_00a84bf0(param_1 + 0x300);
  local_4._0_1_ = 0xe;
  FUN_00a84bf0(param_1 + 0x2e8);
  local_4._0_1_ = 0xd;
  FUN_00a84bf0(param_1 + 0x2d0);
  local_4._0_1_ = 0xc;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x68),8,0x4d,FUN_00a83450);
  local_4._0_1_ = 0xb;
  if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 100))(1);
  }
  local_4._0_1_ = 10;
  if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
  }
  local_4._0_1_ = 9;
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
  }
  local_4._0_1_ = 8;
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
  }
  local_4._0_1_ = 7;
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))(1);
  }
  local_4._0_1_ = 6;
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x3c))(1);
  }
  local_4._0_1_ = 5;
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34))(1);
  }
  local_4._0_1_ = 4;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
  }
  local_4._0_1_ = 3;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
  }
  local_4._0_1_ = 2;
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
  }
  local_4._0_1_ = 1;
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
  }
  local_4 = 0xffffffff;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a85e60 @ 00a85e60 ////

void __fastcall FUN_00a85e60(int param_1)

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


//// FUNCTION FUN_00a85e90 @ 00a85e90 ////

undefined4 * __cdecl FUN_00a85e90(undefined4 *param_1,void *param_2)

{
  FUN_00a84d50(param_2,param_1);
  return param_1;
}


//// FUNCTION FUN_00a86270 @ 00a86270 ////

void __cdecl FUN_00a86270(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_3;
  pcVar3 = param_3;
  while (cVar2 != '\0') {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)param_1 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_3;
  param_1[6] = pcVar3;
  return;
}


//// FUNCTION FUN_00a86600 @ 00a86600 ////

void __cdecl FUN_00a86600(undefined4 *param_1,undefined4 *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_3;
  pcVar3 = param_3;
  while (cVar2 != '\0') {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)param_1 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_3;
  param_1[6] = pcVar3;
  return;
}


//// FUNCTION FUN_00a86ad0 @ 00a86ad0 ////

void __fastcall FUN_00a86ad0(int param_1)

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


//// FUNCTION FUN_00a86b00 @ 00a86b00 ////

undefined4 * __thiscall FUN_00a86b00(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_00a84920(this,param_2);
  puVar2 = FUN_00a848b0(this,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return param_1;
}


//// FUNCTION FUN_00a86b30 @ 00a86b30 ////

undefined4 * __thiscall FUN_00a86b30(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_00a84920(this,param_2);
  puVar2 = FUN_00a848b0(this,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return param_1;
}


//// FUNCTION FUN_00a86b60 @ 00a86b60 ////

void FUN_00a86b60(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00a86b60(*(void **)((int)param_1 + 8));
    FUN_00a81210((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a86ba0 @ 00a86ba0 ////

void __fastcall FUN_00a86ba0(int param_1)

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


//// FUNCTION FUN_00a86bd0 @ 00a86bd0 ////

void * FUN_00a86bd0(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a84ab0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x138 + (int)param_1);
}


//// FUNCTION FUN_00a86c40 @ 00a86c40 ////

void * __thiscall FUN_00a86c40(void *this,byte param_1)

{
  FUN_00a85cb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a86c90 @ 00a86c90 ////

void * __thiscall FUN_00a86c90(void *this,byte param_1)

{
  FUN_00a85ce0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a86cb0 @ 00a86cb0 ////

void __fastcall FUN_00a86cb0(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00a85ce0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00a86cd0 @ 00a86cd0 ////

int __fastcall FUN_00a86cd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc41e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(param_1 + 0x10);
  local_4 = 2;
  if (param_1 == -0x14) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 0x10;
  }
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = iVar2;
    puVar3[2] = param_1 + 8;
    *puVar3 = &PTR_FUN_00d7a868;
    puVar3[3] = param_1 + 8;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  *(undefined4 **)(param_1 + 4) = puVar3;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a86d70 @ 00a86d70 ////

void __fastcall FUN_00a86d70(int param_1)

{
  FUN_00a86b60(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00a86da0 @ 00a86da0 ////

int __thiscall FUN_00a86da0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  puVar1 = FUN_00a848b0(this,param_1);
  puVar2 = FUN_00a84920(this,puVar2);
  param_1 = (undefined4 *)0x0;
  FUN_00a831e0((int)puVar1,(int)puVar2,(int *)&param_1);
  return (int)param_1;
}


//// FUNCTION FUN_00a86de0 @ 00a86de0 ////

void __fastcall FUN_00a86de0(int param_1)

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


//// FUNCTION FUN_00a86e10 @ 00a86e10 ////

void __fastcall FUN_00a86e10(int param_1)

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


//// FUNCTION FUN_00a86e40 @ 00a86e40 ////

undefined4 * __thiscall FUN_00a86e40(void *this,undefined4 param_1,undefined4 *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = (undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 4),(char *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x24) = 0;
  this_00 = *(void **)this;
  puVar1 = FUN_00a848b0(this_00,param_2);
  puVar2 = FUN_00a84920(this_00,param_2);
  *(undefined4 **)((int)this + 0x24) = puVar1;
  *(bool *)((int)this + 0x28) = puVar1 != puVar2;
  return this;
}


//// FUNCTION FUN_00a86ea0 @ 00a86ea0 ////

void __cdecl FUN_00a86ea0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00a85cb0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a86ec0 @ 00a86ec0 ////

void FUN_00a86ec0(void)

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
  puStack_8 = &LAB_00cfc438;
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


//// FUNCTION FUN_00a86f30 @ 00a86f30 ////

void __cdecl FUN_00a86f30(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc458;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  if (param_1 != param_2) {
    ExceptionList = &local_c;
    FUN_00405d50(local_28,param_1,(int)param_2 - (int)param_1);
  }
  local_4 = 0;
  FUN_00405c30(&DAT_00e69b2c,local_28,0,0xffffffff);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a86fc0 @ 00a86fc0 ////

bool __cdecl FUN_00a86fc0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [20];
  
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_20,param_1,(int)pcVar2 - (int)(param_1 + 1));
  FUN_0048ad50((int *)&local_20);
  puVar3 = FUN_00a848b0(&DAT_010c9f28,&local_20);
  puVar4 = FUN_00a84920(&DAT_010c9f28,&local_20);
  local_24 = 0;
  FUN_00a831e0((int)puVar3,(int)puVar4,&local_24);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return local_24 != 0;
}


//// FUNCTION FUN_00a870e0 @ 00a870e0 ////

void __thiscall FUN_00a870e0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cfc478;
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
  FUN_00a7ea20((int *)&param_2);
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
      goto LAB_00a87251;
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
      piVar2 = (int *)FUN_00a7e880(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00a7e860((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00a87251:
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
            FUN_00a80b10(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00a7e8c0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00a80b10(this,(int)piVar5);
              break;
            }
LAB_00a87314:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00a7e8c0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00a87314;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00a80b10(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00a7e8c0(this,piVar5);
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


//// FUNCTION FUN_00a873b0 @ 00a873b0 ////

void __thiscall FUN_00a873b0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a86b60((void *)piVar6[1]);
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
    FUN_00a870e0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a87470 @ 00a87470 ////

void __thiscall
FUN_00a87470(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cfc498;
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
  piVar3 = FUN_00a84990(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00a8756b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a80b10(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00a7e8c0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00a8756b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a7e8c0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00a80b10(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00a87620 @ 00a87620 ////

void FUN_00a87620(void)

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
  puStack_8 = &LAB_00cfc4b8;
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


//// FUNCTION FUN_00a87690 @ 00a87690 ////

void FUN_00a87690(void)

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
  puStack_8 = &LAB_00cfc4d8;
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


//// FUNCTION FUN_00a87700 @ 00a87700 ////

void __thiscall FUN_00a87700(void *this,undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  uint extraout_ECX;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfc4f0;
  local_10 = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  uVar5 = (int)param_3 - (int)param_2;
  if (iVar2 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(int *)((int)this + 0xc) - iVar2;
  }
  if (uVar5 != 0) {
    if (iVar2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar2;
    }
    uVar6 = uVar5;
    ExceptionList = &local_10;
    if (-iVar7 - 1U < uVar5) {
      ExceptionList = &local_10;
      iVar2 = FUN_0096ad80();
      uVar6 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar2;
    }
    if (local_18 < iVar7 + uVar6) {
      if (-(local_18 >> 1) - 1 < local_18) {
        local_18 = 0;
      }
      else {
        local_18 = local_18 + (local_18 >> 1);
      }
      if (iVar2 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar2;
      }
      if (local_18 < iVar7 + uVar6) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 8) - iVar2;
        }
        local_18 = iVar2 + uVar6;
      }
      pvVar3 = operator_new(local_18);
      sVar8 = (int)param_1 - (int)*(void **)((int)this + 4);
      local_8 = 0;
      pvVar4 = _memmove(pvVar3,*(void **)((int)this + 4),sVar8);
      pvVar4 = (void *)FUN_00a833f0(param_2,param_3,(undefined1 *)((int)pvVar4 + sVar8));
      _memmove(pvVar4,param_1,*(int *)((int)this + 8) - (int)param_1);
      pvVar4 = *(void **)((int)this + 4);
      if (pvVar4 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - (int)pvVar4;
      }
      if (pvVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar4);
      }
      *(uint *)((int)this + 0xc) = (int)pvVar3 + local_18;
      *(uint *)((int)this + 8) = (int)pvVar3 + uVar5 + iVar2;
      *(void **)((int)this + 4) = pvVar3;
      ExceptionList = local_10;
      return;
    }
    pvVar4 = *(void **)((int)this + 8);
    if ((uint)((int)pvVar4 - (int)param_1) < uVar6) {
      _memmove(param_1 + uVar6,param_1,(int)pvVar4 - (int)param_1);
      puVar1 = *(undefined1 **)((int)this + 8);
      local_8 = 2;
      FUN_00a833f0(param_2 + ((int)puVar1 - (int)param_1),param_3,puVar1);
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + uVar5;
      FUN_00a84b20(param_2,param_2 + ((int)puVar1 - (int)param_1),param_1);
      ExceptionList = local_10;
      return;
    }
    sVar8 = (int)pvVar4 - (int)((int)pvVar4 - uVar6);
    pvVar3 = _memmove(pvVar4,(void *)((int)pvVar4 - uVar6),sVar8);
    *(size_t *)((int)this + 8) = (int)pvVar3 + sVar8;
    sVar8 = (int)pvVar4 + (-(int)param_1 - uVar5);
    _memmove((void *)((int)pvVar4 - sVar8),param_1,sVar8);
    FUN_00a84b20(param_2,param_3,param_1);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a87930 @ 00a87930 ////

void __thiscall FUN_00a87930(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfc500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_004bfca0();
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
    FUN_00a83420(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
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


//// FUNCTION FUN_00a87a00 @ 00a87a00 ////

undefined4 * __thiscall FUN_00a87a00(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00cfc510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  local_8 = 0;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &PTR_FUN_00d7a760;
    puVar1[3] = param_1;
  }
  *(undefined4 **)this = puVar1;
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_00a87b00 @ 00a87b00 ////

void __thiscall FUN_00a87b00(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a86ec0();
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
      _Dst = FUN_00a84d20((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a83cb0(param_1,iVar5,param_1 + param_2);
      FUN_00a84d20(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a7f480(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a83cb0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a81610(param_1,(int)pvVar3,iVar5);
    FUN_00a7f480(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a87ce0 @ 00a87ce0 ////

void __thiscall FUN_00a87ce0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a87690();
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
      _Dst = FUN_00a84cb0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a83ce0(param_1,iVar5,param_1 + param_2);
      FUN_00a84cb0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a7f4c0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a83ce0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a81640(param_1,(int)pvVar3,iVar5);
    FUN_00a7f4c0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a87ec0 @ 00a87ec0 ////

void FUN_00a87ec0(void)

{
  void *_Memory;
  int *piVar1;
  undefined4 *puVar2;
  int *local_8;
  undefined1 local_4 [4];
  
  piVar1 = DAT_010c9f2c;
  local_8 = (int *)*DAT_010c9f2c;
  while( true ) {
    while( true ) {
      if (local_8 == piVar1) {
        return;
      }
      _Memory = (void *)local_8[0xb];
      if (*(int *)((int)_Memory + 0x24) == 0) break;
      FUN_00a7ea20((int *)&local_8);
    }
    if (_Memory != (void *)0x0) break;
    puVar2 = (undefined4 *)FUN_00a870e0(&DAT_010c9f28,local_4,local_8);
    local_8 = (int *)*puVar2;
  }
  FUN_00a808c0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a87fc0 @ 00a87fc0 ////

void __thiscall FUN_00a87fc0(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00a88024:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00a88029;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00a88024;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a88029:
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
      puVar5 = (undefined4 *)FUN_00a87470(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00a7ebc0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00a87470(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00a880e0 @ 00a880e0 ////

void __thiscall FUN_00a880e0(void *this,undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  char *pcVar5;
  char *extraout_ECX;
  undefined4 local_14c [78];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfc520;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffea8;
  ExceptionList = &local_10;
  FUN_00a80d30(local_14c,param_3);
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    pcVar5 = (char *)0x0;
  }
  else {
    pcVar5 = (char *)((*(int *)((int)this + 0xc) - iVar2) / 0x138);
  }
  if (param_2 != (char *)0x0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x138;
    }
    if ("data/rule/adverts.csv" + (4 - iVar2) < param_2) {
      FUN_00a87620();
      pcVar5 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x138;
    }
    if (pcVar5 < param_2 + iVar2) {
      if ("data/rule/adverts.csv" + (4 - ((uint)pcVar5 >> 1)) < pcVar5) {
        pcVar5 = (char *)0x0;
      }
      else {
        pcVar5 = pcVar5 + ((uint)pcVar5 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x138;
      }
      if (pcVar5 < param_2 + iVar2) {
        iVar2 = FUN_00a7e7b0((int)this);
        pcVar5 = param_2 + iVar2;
      }
      pvVar3 = operator_new((int)pcVar5 * 0x138);
      local_8 = 0;
      pvVar4 = FUN_00a83310(*(undefined4 **)((int)this + 4),param_1,pvVar3);
      FUN_00a84ab0(pvVar4,(int)param_2,local_14c);
      FUN_00a83310(param_1,*(undefined4 **)((int)this + 8),
                   (void *)((int)pvVar4 + (int)param_2 * 0x138));
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x138;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)((int)pcVar5 * 0x138 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((int)(param_2 + iVar2) * 0x138 + (int)pvVar3);
      *(void **)((int)this + 4) = pvVar3;
      ExceptionList = local_10;
      return;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    if ((char *)(((int)puVar1 - (int)param_1) / 0x138) < param_2) {
      FUN_00a83310(param_1,puVar1,param_1 + (int)param_2 * 0x4e);
      local_8 = 2;
      FUN_00a86bd0(*(void **)((int)this + 8),
                   (int)param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x138,local_14c);
      iVar2 = *(int *)((int)this + 8) + (int)param_2 * 0x138;
      *(int *)((int)this + 8) = iVar2;
      FUN_00a7ed30(param_1,(undefined4 *)(iVar2 + (int)param_2 * -0x138),local_14c);
      ExceptionList = local_10;
      return;
    }
    pvVar3 = FUN_00a83310(puVar1 + (int)param_2 * -0x4e,puVar1,puVar1);
    *(void **)((int)this + 8) = pvVar3;
    FUN_00a811a0(param_1,puVar1 + (int)param_2 * -0x4e,puVar1);
    FUN_00a7ed30(param_1,param_1 + (int)param_2 * 0x4e,local_14c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a88440 @ 00a88440 ////

uint __fastcall FUN_00a88440(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  if ((uVar1 == 0) || ((int)(param_1[3] - uVar1) >> 2 == 0)) {
    if (param_1[2] == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (int)(param_1[4] - param_1[2]) >> 2;
    }
    if (uVar1 <= *param_1) {
      FUN_00a87930(param_1 + 1,(*param_1 * 3 >> 1) + 1);
    }
    uVar2 = *param_1 + 1;
    *param_1 = uVar2;
  }
  else {
    uVar2 = *(uint *)(param_1[3] - 4);
    if (uVar1 != 0) {
      if ((int)(param_1[3] - uVar1) >> 2 != 0) {
        param_1[3] = param_1[3] - 4;
      }
      return uVar2;
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00a884e0 @ 00a884e0 ////

void __thiscall FUN_00a884e0(void *this,uint param_1)

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
    FUN_00a87b00(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
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


//// FUNCTION FUN_00a885e0 @ 00a885e0 ////

void __thiscall FUN_00a885e0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  FUN_00a81370(param_2);
  uVar1 = **(undefined4 **)(iVar2 + 4);
  FUN_00a88630(this,&param_2,iVar2);
  if (-1 < param_2) {
    (**(code **)((int)this + 0x10))(uVar1,**(undefined4 **)(iVar2 + 4));
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00a88630 @ 00a88630 ////

int * __thiscall FUN_00a88630(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a88690(&param_2,this,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 8),iVar2);
  return param_1;
}


//// FUNCTION FUN_00a88690 @ 00a88690 ////

void __cdecl FUN_00a88690(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined2 local_c [2];
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_3;
  FUN_00a81370(param_3);
  local_8 = *(undefined4 *)(iVar1 + 4);
  local_4 = *(undefined4 *)(iVar1 + 8);
  local_c[0] = (undefined2)param_3;
  FUN_00a886f0(&param_3,(char *)*param_2,(char *)param_2[1],(int)local_c);
  *param_1 = param_3;
  return;
}


//// FUNCTION FUN_00a886f0 @ 00a886f0 ////

void __cdecl FUN_00a886f0(int *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_2;
  while( true ) {
    if (param_2 == param_3) {
      *param_1 = iVar1;
      return;
    }
    if (((char *)**(undefined4 **)(param_4 + 4) == *(char **)(param_4 + 8)) ||
       (*param_2 != *(char *)**(undefined4 **)(param_4 + 4))) break;
    param_2 = param_2 + 1;
    **(int **)(param_4 + 4) = **(int **)(param_4 + 4) + 1;
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a88780 @ 00a88780 ////

undefined4 * __thiscall FUN_00a88780(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00a87470(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00a87470(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00a87470(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a7ebc0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00a87470(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00a87470(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a7ea20((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00a88902;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00a87470(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00a87470(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00a88902:
  puVar4 = (undefined4 *)FUN_00a87fc0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00a88930 @ 00a88930 ////

void __thiscall FUN_00a88930(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x138 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x138;
      goto LAB_00a88979;
    }
  }
  iVar1 = 0;
LAB_00a88979:
  FUN_00a880e0(this,param_2,(char *)0x1,param_3);
  *param_1 = iVar1 * 0x138 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00a889a0 @ 00a889a0 ////

void __thiscall FUN_00a889a0(void *this,int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (*(int *)((int)this + 8) == iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 - iVar1;
  }
  FUN_0096b710(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1;
  return;
}


//// FUNCTION FUN_00a88a00 @ 00a88a00 ////

int * __thiscall FUN_00a88a00(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_4;
  
  FUN_00a87a00(&local_4,param_1);
  *(int **)this = param_1;
  piVar3 = *(int **)((int)this + 4);
  *(undefined4 *)((int)this + 4) = local_4;
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    param_1 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      (**(code **)(*piVar3 + 4))();
      param_1 = piVar3 + 2;
      LOCK();
      iVar2 = *param_1;
      *param_1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        param_1 = (int *)(**(code **)(*piVar3 + 8))();
      }
    }
  }
  return param_1;
}


//// FUNCTION FUN_00a88a60 @ 00a88a60 ////

undefined4 * __thiscall FUN_00a88a60(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cfc54e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00d7a880;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 1;
  uStack_3 = 0;
  *(void **)((int)this + 0x18) = this;
  FUN_00a82b00((void *)((int)this + 0x1c),this);
  *param_1 = *(undefined4 *)((int)this + 0x18);
  iVar1 = *(int *)((int)this + 0x1c);
  _local_4 = CONCAT31(uStack_3,2);
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar3 = piVar2[2] + -1;
    piVar2[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      (**(code **)(*piVar2 + 8))();
    }
  }
  param_1[1] = iVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a88b70 @ 00a88b70 ////

void __fastcall FUN_00a88b70(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = 0;
  piVar1 = (int *)param_1[1];
  param_1[1] = 0;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
      LOCK();
      iVar2 = piVar1[2] + -1;
      piVar1[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a88ba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 8))();
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a88bb0 @ 00a88bb0 ////

undefined4 * __thiscall FUN_00a88bb0(void *this,byte param_1)

{
  FUN_00a88bd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a88bd0 @ 00a88bd0 ////

void __fastcall FUN_00a88bd0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc573;
  pvStack_c = ExceptionList;
  piVar1 = (int *)param_1[7];
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    ExceptionList = &pvStack_c;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
      LOCK();
      iVar2 = piVar1[2] + -1;
      piVar1[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_00d7a754;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a88ce0 @ 00a88ce0 ////

void __thiscall FUN_00a88ce0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a88da0(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a88d40((void *)((int)this + 8),&local_4,iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a88d40 @ 00a88d40 ////

void __thiscall FUN_00a88d40(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *unaff_EBP;
  
  iVar3 = param_2;
  FUN_00a81370(param_2);
  uVar1 = **(undefined4 **)(iVar3 + 4);
  if (*(int **)(*(int *)this + 4) != (int *)0x0) {
    piVar4 = (int *)(**(code **)(**(int **)(*(int *)this + 4) + 4))(&param_2,iVar3);
    iVar2 = *piVar4;
    if (-1 < iVar2) {
      (**(code **)((int)this + 4))(uVar1,**(undefined4 **)(iVar3 + 4));
    }
    *unaff_EBP = iVar2;
    return;
  }
  *param_1 = 0xffffffff;
  return;
}


//// FUNCTION FUN_00a88da0 @ 00a88da0 ////

void __thiscall FUN_00a88da0(void *this,undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  FUN_00a81370(param_2);
  FUN_0054d510(0x10c9f18);
  puVar1 = (uint *)FUN_00963de0(&DAT_00e69b2c,&param_2);
  piVar2 = (int *)FUN_00963dc0(&DAT_00e69b2c,&local_8);
  FUN_00963ea0(&DAT_00e69b2c,&local_4,*piVar2,*puVar1);
  DAT_010c9d80 = *(undefined4 *)((int)this + 4);
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a88e10 @ 00a88e10 ////

void __fastcall FUN_00a88e10(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a873b0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a88e40 @ 00a88e40 ////

int __fastcall FUN_00a88e40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a83100();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a88e70 @ 00a88e70 ////

void __thiscall FUN_00a88e70(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x138) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x138))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00a84ab0(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x138;
    return;
  }
  FUN_00a88930(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00a88f50 @ 00a88f50 ////

int __thiscall FUN_00a88f50(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x28) = 1;
  local_30 = local_24;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,*(char **)((int)this + 4),*(uint *)((int)this + 8));
  local_10 = *param_1;
  local_4 = 0;
  piVar2 = FUN_00a88780(*(void **)this,&local_34,*(int **)((int)this + 0x24),(int *)&local_30);
  iVar1 = *piVar2;
  *(int *)((int)this + 0x24) = iVar1;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return iVar1 + 0x2c;
}


//// FUNCTION FUN_00a89040 @ 00a89040 ////

void __thiscall FUN_00a89040(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_00a87ce0(this,*(undefined4 **)((int)this + 8),1,&param_1);
  return;
}


//// FUNCTION FUN_00a89140 @ 00a89140 ////

void __cdecl FUN_00a89140(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (DAT_010c9dd0 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)DAT_010c9dd4 - DAT_010c9dd0;
  }
  *param_1 = iVar1;
  puVar3 = DAT_00e69b30;
  if (DAT_00e69b44 < 0x10) {
    puVar3 = &DAT_00e69b30;
  }
  puVar2 = DAT_00e69b30;
  if (DAT_00e69b44 < 0x10) {
    puVar2 = &DAT_00e69b30;
  }
  FUN_00a87700(&DAT_010c9dcc,DAT_010c9dd4,(undefined1 *)puVar2,
               (undefined1 *)((int)puVar3 + DAT_00e69b40));
  param_1 = (int *)((uint)param_1 & 0xffffff00);
  if ((DAT_010c9dd0 != 0) &&
     ((uint)((int)DAT_010c9dd4 - DAT_010c9dd0) < (uint)(DAT_010c9dd8 - DAT_010c9dd0))) {
    *DAT_010c9dd4 = 0;
    DAT_010c9dd4 = DAT_010c9dd4 + 1;
    return;
  }
  FUN_0096b710(&DAT_010c9dcc,DAT_010c9dd4,1,(undefined1 *)&param_1);
  return;
}


//// FUNCTION FUN_00a898e0 @ 00a898e0 ////

void __fastcall FUN_00a898e0(int *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc5ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_010c9f40 & 1) == 0) {
    DAT_010c9f40 = DAT_010c9f40 | 1;
    DAT_010c9f38 = 0;
    DAT_010c9f3c = 0;
    ExceptionList = &local_c;
    _atexit(FUN_00d15100);
  }
  if (DAT_010c9f38 == 0) {
    piVar1 = operator_new(0x14);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
    }
    local_4 = 0xffffffff;
    FUN_00a88a00(&DAT_010c9f38,piVar1);
  }
  *param_1 = DAT_010c9f38;
  FUN_00a80970(param_1 + 1,&DAT_010c9f3c);
  FUN_00a88440((uint *)*param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a899d0 @ 00a899d0 ////

void __thiscall FUN_00a899d0(void *this,int param_1,char *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  char cVar2;
  uint local_18;
  uint local_10;
  char *local_c;
  int local_8;
  undefined1 *local_4;
  
  local_8 = (int)this + 0x38;
  local_18 = local_18 & 0xffffff00;
  local_4 = &LAB_00a891f0;
  local_10 = local_18;
  local_c = param_3;
  param_4 = (void *)FUN_00a83b70(param_4,&local_10);
  cVar2 = *param_2;
  param_3 = param_2;
  while (cVar2 != '\0') {
    pcVar1 = param_3 + 1;
    param_3 = param_3 + 1;
    cVar2 = *pcVar1;
  }
  FUN_00a82b90(*(void **)(param_1 + 0x14),param_2,(int *)&param_3,&param_4);
  return;
}


//// FUNCTION FUN_00a89a50 @ 00a89a50 ////

int * __fastcall FUN_00a89a50(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc5c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  local_4 = 0;
  iVar1 = FUN_00a898e0(param_1);
  param_1[2] = iVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a89aa0 @ 00a89aa0 ////

void __fastcall FUN_00a89aa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc5e8;
  local_c = ExceptionList;
  piVar1 = (int *)*param_1;
  local_14 = param_1[2];
  local_4 = 0;
  local_10 = param_1;
  if (*piVar1 == local_14) {
    ExceptionList = &local_c;
    *piVar1 = *piVar1 + -1;
  }
  else {
    ExceptionList = &local_c;
    FUN_004c16e0(piVar1 + 1,&local_14);
  }
  piVar1 = (int *)param_1[1];
  local_4 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
      LOCK();
      iVar2 = piVar1[2] + -1;
      piVar1[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION ParticleSystemEditor_RegisterPropertySchema @ 00a89b30 ////

void * __fastcall ParticleSystemEditor_RegisterPropertySchema(void *param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined **ppuVar11;
  char **ppcVar12;
  char **ppcVar13;
  uint local_2a0;
  undefined4 local_29c;
  char *apcStack_294 [4];
  char *pcStack_284;
  code *pcStack_280;
  int iStack_27c;
  undefined *puStack_270;
  undefined *puStack_26c;
  char *apcStack_268 [4];
  char *pcStack_258;
  char *pcStack_254;
  char *pcStack_250;
  undefined *puStack_24c;
  undefined *puStack_248;
  undefined1 *puStack_244;
  undefined *puStack_240;
  undefined *puStack_23c;
  char *local_238;
  char *local_234;
  undefined1 *puStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  char *local_224;
  char *pcStack_220;
  code *local_21c;
  int local_218;
  undefined4 uStack_214;
  char *pcStack_208;
  char *pcStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  undefined *apuStack_1ec [7];
  undefined *puStack_1d0;
  undefined *puStack_1cc;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1bc;
  undefined *puStack_1b0;
  undefined *puStack_1ac;
  char *pcStack_1a8;
  char *pcStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  char *pcStack_18c;
  char *pcStack_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  void *local_170;
  undefined4 auStack_16c [7];
  undefined4 auStack_150 [6];
  undefined *puStack_138;
  undefined *puStack_134;
  undefined1 uStack_128;
  undefined4 auStack_118 [14];
  undefined4 auStack_e0 [7];
  undefined4 auStack_c4 [14];
  undefined4 auStack_8c [14];
  undefined4 auStack_54 [14];
  int iStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
                    /* Registers ~70 named particle-system properties (ScaleX/Y/Z, ParticleLifeSecs,
                       EmitterSize/Type, ParticlesPerSecond, MinSpeed/MaxSpeed,
                       StartColour/MidColour/EndColour, BlendMode/BlendOp, TrailName/Width/Length,
                       etc.) plus component-type factories (Mesh Renderer, Sprite Renderer, Generic
                       Emitter, Generic Particle System, Attractor, Orbit --
                       CPSCOrbit/CPSCAttractor/CPSCUpdateNormal/CPSCEmitterGeneric/CPSCRenderMesh/CPSCRenderSprite).
                       BEGIN_DATABASE/END_DATABASE/BEGIN_EMITTER/etc. delimiter strings suggest this
                       is schema/reflection data for an internal particle-effects editor tool, not
                       player-facing gameplay. */
  puStack_10 = &LAB_00cfc710;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  local_c = 0xc;
  uStack_b = 0;
  local_170 = param_1;
  _eh_vector_constructor_iterator_((void *)((int)param_1 + 0x68),8,0x4d,FUN_00a83470,FUN_00a83450);
  local_c = 0xd;
  FUN_00a86cd0((int)param_1 + 0x2d0);
  iVar2 = (int)param_1 + 0x2e8;
  local_c = 0xe;
  FUN_00a86cd0(iVar2);
  local_c = 0xf;
  FUN_00a86cd0((int)param_1 + 0x300);
  local_c = 0x10;
  FUN_00a86cd0((int)param_1 + 0x318);
  local_2a0 = local_2a0 & 0xffffff00;
  _local_c = CONCAT31(uStack_b,0x11);
  local_224 = (char *)CONCAT31(local_224._1_3_,0x22);
  local_21c = FUN_00a86f30;
  local_218 = CONCAT31(local_218._1_3_,0x22);
  puVar4 = operator_new(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = local_224;
    puVar4[2] = local_2a0;
    puVar4[3] = local_21c;
    *puVar4 = &PTR_FUN_00d7a798;
    puVar4[4] = local_218;
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x34);
  *(undefined4 **)((int)param_1 + 0x34) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  local_29c = CONCAT31(local_29c._1_3_,0x3b);
  local_238 = (char *)((uint)local_238 & 0xffffff00);
  local_234 = (char *)((int)param_1 + 0x28);
  apcStack_268[1] = "HeaderFilename";
  do {
    pcVar1 = apcStack_268[1] + 1;
    apcStack_268[1] = apcStack_268[1] + 1;
  } while (*pcVar1 != '\0');
  cVar3 = *PTR_s_BEGIN_DATABASE_00e69b08;
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  pcStack_258 = PTR_s_BEGIN_DATABASE_00e69b08;
  while (cVar3 != '\0') {
    pcVar1 = pcStack_258 + 1;
    pcStack_258 = pcStack_258 + 1;
    cVar3 = *pcVar1;
  }
  apcStack_268[0] = "HeaderFilename";
  pcStack_254 = (char *)((int)param_1 + 8);
  pcStack_250 = (char *)((int)param_1 + 0x28);
  puStack_24c = (undefined *)local_29c;
  cVar3 = *PTR_s_END_DATABASE_00e69b0c;
  apcStack_268[2] = (char *)((int)param_1 + 0x30);
  apcStack_294[0] = (char *)((uint)apcStack_294[0] & 0xffffff00);
  apcStack_268[3] = PTR_s_BEGIN_DATABASE_00e69b08;
  puVar8 = PTR_s_END_DATABASE_00e69b0c;
  while (cVar3 != '\0') {
    pcVar1 = puVar8 + 1;
    puVar8 = puVar8 + 1;
    cVar3 = *pcVar1;
  }
  apuStack_1ec[0] = (undefined *)((uint)apuStack_1ec[0] & 0xffffff00);
  ppcVar12 = apcStack_268;
  ppuVar11 = apuStack_1ec;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = *ppcVar12;
    ppcVar12 = ppcVar12 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  puStack_1cc = PTR_s_END_DATABASE_00e69b0c;
  puStack_1c8 = puVar8;
  puVar4 = operator_new(0x2c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a7a8;
    ppuVar11 = apuStack_1ec;
    puVar9 = puVar4;
    for (iVar7 = 10; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *ppuVar11;
      ppuVar11 = ppuVar11 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 4);
  *(undefined4 **)((int)param_1 + 4) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  local_29c = CONCAT31(local_29c._1_3_,0x3b);
  apcStack_268[2] = "ReadZBuffer";
  do {
    pcVar1 = apcStack_268[2] + 1;
    apcStack_268[2] = apcStack_268[2] + 1;
  } while (*pcVar1 != '\0');
  apcStack_268[1] = "ReadZBuffer";
  pcStack_280 = (code *)&LAB_00a858c0;
  pcStack_254 = &LAB_00a858c0;
  pcStack_250 = (char *)((int)param_1 + 0x28);
  apcStack_268[3] = (char *)((int)param_1 + 0x50);
  cVar3 = *PTR_s_BEGIN_EMITTER_00e69b10;
  local_218 = CONCAT31(local_218._1_3_,0x3b);
  puStack_24c = (undefined *)local_29c;
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  apcStack_294[0] = (char *)((uint)apcStack_294[0] & 0xffffff00);
  apcStack_268[0] = (char *)((int)param_1 + 0x10U);
  pcStack_258 = (char *)local_218;
  apuStack_1ec[1] = PTR_s_BEGIN_EMITTER_00e69b10;
  while (cVar3 != '\0') {
    pcVar1 = apuStack_1ec[1] + 1;
    apuStack_1ec[1] = apuStack_1ec[1] + 1;
    cVar3 = *pcVar1;
  }
  apuStack_1ec[0] = PTR_s_BEGIN_EMITTER_00e69b10;
  ppcVar12 = apcStack_268;
  ppuVar11 = apuStack_1ec + 2;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = *ppcVar12;
    ppcVar12 = ppcVar12 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  cVar3 = *PTR_s_END_EMITTER_00e69b14;
  puVar8 = PTR_s_END_EMITTER_00e69b14;
  while (cVar3 != '\0') {
    pcVar1 = puVar8 + 1;
    puVar8 = puVar8 + 1;
    cVar3 = *pcVar1;
  }
  apcStack_268[0] = (char *)((int)param_1 + 0x10U & 0xffffff00);
  ppuVar11 = apuStack_1ec;
  ppcVar12 = apcStack_268;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppcVar12 = *ppuVar11;
    ppuVar11 = ppuVar11 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  puStack_240 = PTR_s_END_EMITTER_00e69b14;
  puStack_23c = puVar8;
  puVar4 = operator_new(0x34);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a7b8;
    ppcVar12 = apcStack_268;
    puVar9 = puVar4;
    for (iVar7 = 0xc; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *ppcVar12;
      ppcVar12 = ppcVar12 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0xc);
  *(undefined4 **)((int)param_1 + 0xc) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  cVar3 = *PTR_s_END_SYSTEM_00e69b1c;
  puVar8 = PTR_s_END_SYSTEM_00e69b1c;
  while (cVar3 != '\0') {
    pcVar1 = puVar8 + 1;
    puVar8 = puVar8 + 1;
    cVar3 = *pcVar1;
  }
  cVar3 = *PTR_s_BEGIN_SYSTEM_00e69b18;
  iStack_200 = (int)param_1 + 0x28;
  local_238 = (char *)((uint)local_238 & 0xffffff00);
  puStack_230 = (undefined1 *)CONCAT31(puStack_230._1_3_,0x3b);
  pcStack_208 = (char *)((uint)pcStack_208 & 0xffffff00);
  apcStack_294[1] = PTR_s_BEGIN_SYSTEM_00e69b18;
  while (cVar3 != '\0') {
    apcStack_294[1] = apcStack_294[1] + 1;
    cVar3 = *apcStack_294[1];
  }
  apcStack_294[0] = PTR_s_BEGIN_SYSTEM_00e69b18;
  apcStack_294[3] = (char *)((int)param_1 + 0x20);
  pcStack_280 = (code *)((int)param_1 + 0x28);
  apcStack_294[2] = &LAB_00a7e690;
  pcStack_284 = (char *)((int)param_1 + 0x2d0);
  iStack_27c = (int)puStack_230;
  apcStack_268[0] = (char *)((uint)apcStack_268[0] & 0xffffff00);
  ppcVar12 = apcStack_294;
  ppcVar13 = apcStack_268;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppcVar13 = *ppcVar12;
    ppcVar12 = ppcVar12 + 1;
    ppcVar13 = ppcVar13 + 1;
  }
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  puStack_24c = PTR_s_END_SYSTEM_00e69b1c;
  puStack_244 = &LAB_00a898d0;
  puStack_248 = puVar8;
  puVar4 = operator_new(0x2c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a7c8;
    ppcVar12 = apcStack_268;
    puVar9 = puVar4;
    for (iVar7 = 10; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *ppcVar12;
      ppcVar12 = ppcVar12 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x14);
  *(undefined4 **)((int)param_1 + 0x14) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  apcStack_294[1] = "\"CPSCOrbit\"";
  do {
    apcStack_294[1] = apcStack_294[1] + 1;
  } while (*apcStack_294[1] != '\0');
  apcStack_294[2] = (char *)((int)param_1 + 0x60);
  apcStack_294[0] = "\"CPSCOrbit\"";
  pcStack_284 = (char *)0x5;
  pcStack_188 = "\"CPSCAttractor\"";
  do {
    pcStack_188 = pcStack_188 + 1;
  } while (*pcStack_188 != '\0');
  iStack_184 = (int)param_1 + 0x60;
  pcStack_18c = "\"CPSCAttractor\"";
  uStack_17c = 1;
  pcStack_1a4 = "\"CPSCUpdateNormal\"";
  do {
    pcStack_1a4 = pcStack_1a4 + 1;
  } while (*pcStack_1a4 != '\0');
  iStack_1a0 = (int)param_1 + 0x60;
  pcStack_1a8 = "\"CPSCUpdateNormal\"";
  uStack_198 = 1;
  pcStack_204 = "\"CPSCEmitterGeneric\"";
  do {
    pcStack_204 = pcStack_204 + 1;
  } while (*pcStack_204 != '\0');
  iStack_200 = (int)param_1 + 0x60;
  iStack_1fc = (int)param_1 + 0x318;
  pcStack_208 = "\"CPSCEmitterGeneric\"";
  uStack_1f8 = 2;
  pcStack_220 = "\"CPSCRenderMesh\"";
  do {
    pcStack_220 = pcStack_220 + 1;
  } while (*pcStack_220 != '\0');
  local_21c = (code *)((int)param_1 + 0x60);
  local_218 = (int)param_1 + 0x300;
  local_224 = "\"CPSCRenderMesh\"";
  uStack_214 = 4;
  local_234 = "\"CPSCRenderSprite\"";
  do {
    local_234 = local_234 + 1;
  } while (*local_234 != '\0');
  puStack_230 = (undefined1 *)((int)param_1 + 0x60);
  iStack_22c = (int)param_1 + 0x300;
  uStack_228 = 3;
  local_238 = "\"CPSCRenderSprite\"";
  apcStack_294[3] = (char *)iVar2;
  iStack_19c = iVar2;
  iStack_180 = iVar2;
  puVar5 = (undefined4 *)FUN_00a86270(apuStack_1ec,&local_224,"\"Mesh Renderer\"");
  puVar4 = (undefined4 *)FUN_00a86270(&local_224,&local_238,"\"Sprite Renderer\"");
  auStack_16c[0]._0_1_ = 0;
  puVar9 = auStack_16c;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar4 = puVar5;
  puVar9 = auStack_150;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar4 = (undefined4 *)FUN_00a86270(apcStack_268,&pcStack_208,"\"Generic Emitter\"");
  auStack_c4[0]._0_1_ = 0;
  puVar9 = auStack_16c;
  puVar10 = auStack_c4;
  for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = auStack_8c;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar4 = (undefined4 *)FUN_00a86270(&pcStack_208,&pcStack_1a8,"\"Generic Particle System\"");
  auStack_16c[0]._0_1_ = 0;
  puVar9 = auStack_c4;
  puVar10 = auStack_16c;
  for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = auStack_118;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar4 = (undefined4 *)FUN_00a86270(&pcStack_1a8,&pcStack_18c,"\"Attractor\"");
  auStack_c4[0]._0_1_ = 0;
  puVar9 = auStack_16c;
  puVar10 = auStack_c4;
  for (iVar7 = 0x1c; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = auStack_54;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar4 = (undefined4 *)FUN_00a86270(&pcStack_18c,apcStack_294,"\"Orbit\"");
  auStack_16c[0]._0_1_ = 0;
  puVar9 = auStack_c4;
  puVar10 = auStack_16c;
  for (iVar7 = 0x23; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar9 = auStack_e0;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  auStack_c4[0]._0_1_ = 0;
  puVar4 = auStack_16c;
  puVar9 = auStack_c4;
  for (iVar7 = 0x2a; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  iStack_1c = (int)param_1 + 0x30;
  puVar4 = operator_new(0xb0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a7d8;
    puVar10 = auStack_c4;
    puVar9 = puVar4;
    for (iVar7 = 0x2b; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar10;
      puVar10 = puVar10 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x1c);
  *(undefined4 **)((int)param_1 + 0x1c) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  pcStack_208 = (char *)((int)param_1 + 0x60U);
  pcStack_204 = (char *)((int)param_1 + 0x28);
  iStack_200 = CONCAT31(iStack_200._1_3_,0x3b);
  pcStack_258 = "VISIBLE";
  do {
    pcVar1 = pcStack_258 + 1;
    pcStack_258 = pcStack_258 + 1;
  } while (*pcVar1 != '\0');
  cVar3 = *PTR_s_BEGIN_COMPONENT_00e69b20;
  apcStack_268[1] = PTR_s_BEGIN_COMPONENT_00e69b20;
  while (cVar3 != '\0') {
    pcVar1 = apcStack_268[1] + 1;
    apcStack_268[1] = apcStack_268[1] + 1;
    cVar3 = *pcVar1;
  }
  apcStack_268[0] = PTR_s_BEGIN_COMPONENT_00e69b20;
  puStack_24c = (undefined *)iStack_200;
  apcStack_268[2] = (char *)((int)param_1 + 0x18);
  pcStack_254 = (char *)((int)param_1 + 0x60U);
  cVar3 = *PTR_s_END_COMPONENT_00e69b24;
  pcStack_250 = (char *)((int)param_1 + 0x28);
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  apcStack_294[0] = (char *)((uint)apcStack_294[0] & 0xffffff00);
  apcStack_268[3] = "VISIBLE";
  puVar8 = PTR_s_END_COMPONENT_00e69b24;
  while (cVar3 != '\0') {
    pcVar1 = puVar8 + 1;
    puVar8 = puVar8 + 1;
    cVar3 = *pcVar1;
  }
  apuStack_1ec[0] = (undefined *)((uint)apuStack_1ec[0] & 0xffffff00);
  ppcVar12 = apcStack_268;
  ppuVar11 = apuStack_1ec;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = *ppcVar12;
    ppcVar12 = ppcVar12 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  puStack_1cc = PTR_s_END_COMPONENT_00e69b24;
  puStack_1c8 = puVar8;
  puVar4 = operator_new(0x2c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a7e8;
    ppuVar11 = apuStack_1ec;
    puVar9 = puVar4;
    for (iVar7 = 10; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *ppuVar11;
      ppuVar11 = ppuVar11 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x24);
  *(undefined4 **)((int)param_1 + 0x24) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  apcStack_294[0] = (char *)((int)param_1 + 0x40);
  pcStack_284 = (char *)((int)param_1 + 0x50);
  pcStack_280 = (code *)((int)param_1 + 0x58);
  local_2a0 = (uint)puVar5 & 0xffffff00;
  apcStack_294[1] = (char *)((int)param_1 + 0x48);
  iStack_27c = (int)param_1 + 0x30;
  pcStack_208 = (char *)((uint)pcStack_208 & 0xffffff00);
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  apcStack_294[2] = (char *)local_2a0;
  apcStack_294[3] = &LAB_00a89090;
  puVar4 = operator_new(0x20);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a7f8;
    ppcVar12 = apcStack_294;
    puVar9 = puVar4;
    for (iVar7 = 7; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *ppcVar12;
      ppcVar12 = ppcVar12 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x3c);
  *(undefined4 **)((int)param_1 + 0x3c) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  puVar8 = PTR_s_END_EMITTER_00e69b14;
  cVar3 = *PTR_s_BEGIN_DATABASE_00e69b08;
  apcStack_294[2] = PTR_s_BEGIN_DATABASE_00e69b08;
  while (cVar3 != '\0') {
    pcVar1 = apcStack_294[2] + 1;
    apcStack_294[2] = apcStack_294[2] + 1;
    cVar3 = *pcVar1;
  }
  cVar3 = *PTR_s_END_DATABASE_00e69b0c;
  local_238 = (char *)CONCAT31((int3)((uint)local_238 >> 8),0x3b);
  pcStack_284 = PTR_s_END_DATABASE_00e69b0c;
  while (cVar3 != '\0') {
    pcStack_284 = pcStack_284 + 1;
    cVar3 = *pcStack_284;
  }
  apcStack_294[3] = PTR_s_END_DATABASE_00e69b0c;
  apcStack_294[1] = PTR_s_BEGIN_DATABASE_00e69b08;
  apcStack_294[0] = local_238;
  puVar4 = (undefined4 *)FUN_00a86600(apcStack_268,apcStack_294,PTR_s_BEGIN_EMITTER_00e69b10);
  cVar3 = *puVar8;
  puStack_1cc = puVar8;
  while (cVar3 != '\0') {
    pcVar1 = puStack_1cc + 1;
    puStack_1cc = puStack_1cc + 1;
    cVar3 = *pcVar1;
  }
  apuStack_1ec[0] = (undefined *)((uint)apuStack_1ec[0] & 0xffffff00);
  ppuVar11 = apuStack_1ec;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = (undefined *)*puVar4;
    puVar4 = puVar4 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  puStack_1d0 = puVar8;
  cVar3 = *PTR_s_BEGIN_SYSTEM_00e69b18;
  puVar6 = PTR_s_BEGIN_SYSTEM_00e69b18;
  while (cVar3 != '\0') {
    pcVar1 = puVar6 + 1;
    puVar6 = puVar6 + 1;
    cVar3 = *pcVar1;
  }
  apcStack_294[0] = (char *)((uint)apcStack_294[0] & 0xffffff00);
  ppuVar11 = apuStack_1ec;
  ppcVar12 = apcStack_294;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppcVar12 = *ppuVar11;
    ppuVar11 = ppuVar11 + 1;
    ppcVar12 = ppcVar12 + 1;
  }
  puStack_270 = PTR_s_BEGIN_SYSTEM_00e69b18;
  cVar3 = *PTR_s_END_SYSTEM_00e69b1c;
  puStack_26c = puVar6;
  puVar6 = PTR_s_END_SYSTEM_00e69b1c;
  while (cVar3 != '\0') {
    pcVar1 = puVar6 + 1;
    puVar6 = puVar6 + 1;
    cVar3 = *pcVar1;
  }
  apuStack_1ec[0] = (undefined *)((uint)apuStack_1ec[0] & 0xffffff00);
  ppcVar12 = apcStack_294;
  ppuVar11 = apuStack_1ec;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = *ppcVar12;
    ppcVar12 = ppcVar12 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  puStack_1c0 = PTR_s_END_SYSTEM_00e69b1c;
  cVar3 = *PTR_s_BEGIN_COMPONENT_00e69b20;
  puStack_1bc = puVar6;
  puVar6 = PTR_s_BEGIN_COMPONENT_00e69b20;
  while (cVar3 != '\0') {
    pcVar1 = puVar6 + 1;
    puVar6 = puVar6 + 1;
    cVar3 = *pcVar1;
  }
  auStack_16c[0]._0_1_ = 0;
  ppuVar11 = apuStack_1ec;
  puVar4 = auStack_16c;
  for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *ppuVar11;
    ppuVar11 = ppuVar11 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_138 = PTR_s_BEGIN_COMPONENT_00e69b20;
  cVar3 = *PTR_s_END_COMPONENT_00e69b24;
  puStack_134 = puVar6;
  puVar6 = PTR_s_END_COMPONENT_00e69b24;
  while (cVar3 != '\0') {
    pcVar1 = puVar6 + 1;
    puVar6 = puVar6 + 1;
    cVar3 = *pcVar1;
  }
  apuStack_1ec[0] = (undefined *)((uint)apuStack_1ec[0] & 0xffffff00);
  puVar4 = auStack_16c;
  ppuVar11 = apuStack_1ec;
  for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = (undefined *)*puVar4;
    puVar4 = puVar4 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  puStack_1b0 = PTR_s_END_COMPONENT_00e69b24;
  puStack_1ac = puVar6;
  auStack_16c[0]._0_1_ = 0;
  ppuVar11 = apuStack_1ec;
  puVar4 = auStack_16c;
  for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *ppuVar11;
    ppuVar11 = ppuVar11 + 1;
    puVar4 = puVar4 + 1;
  }
  uStack_128 = 0x3b;
  puVar4 = operator_new(0x4c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a808;
    puVar5 = auStack_16c;
    puVar9 = puVar4;
    for (iVar7 = 0x12; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x2c);
  *(undefined4 **)((int)param_1 + 0x2c) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  puStack_230 = &LAB_00a890e0;
  pcStack_208 = (char *)((uint)pcStack_208 & 0xffffff00);
  local_238 = (char *)CONCAT31((int3)((uint)local_238 >> 8),0x2c);
  local_2a0 = ((uint)puVar8 >> 8) << 8;
  apcStack_268[1] = "CRGBColour";
  do {
    pcVar1 = apcStack_268[1] + 1;
    apcStack_268[1] = apcStack_268[1] + 1;
  } while (*pcVar1 != '\0');
  apcStack_268[0] = "CRGBColour";
  pcStack_254 = local_238;
  puStack_24c = &LAB_00a890e0;
  local_21c = (code *)CONCAT31(local_21c._1_3_,0x28);
  apcStack_268[3] = (char *)local_2a0;
  pcStack_258 = &LAB_00a890e0;
  apcStack_268[2] = (char *)local_21c;
  pcStack_250 = pcStack_208;
  apuStack_1ec[0] = (undefined *)((uint)apuStack_1ec[0] & 0xffffff00);
  ppcVar12 = apcStack_268;
  ppuVar11 = apuStack_1ec;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = *ppcVar12;
    ppcVar12 = ppcVar12 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  apcStack_294[0] = (char *)((uint)apcStack_294[0] & 0xffffff00);
  puStack_1cc = (undefined *)CONCAT31(puStack_1cc._1_3_,0x29);
  puVar4 = operator_new(0x28);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a818;
    ppuVar11 = apuStack_1ec;
    puVar9 = puVar4;
    for (iVar7 = 9; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *ppuVar11;
      ppuVar11 = ppuVar11 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x44);
  *(undefined4 **)((int)param_1 + 0x44) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  puStack_230 = &LAB_00a89090;
  local_2a0 = ((uint)puVar8 >> 8) << 8;
  local_238 = (char *)CONCAT31((int3)((uint)local_238 >> 8),0x2c);
  pcStack_208 = (char *)((uint)pcStack_208 & 0xffffff00);
  apcStack_268[1] = &DAT_00d7ada0;
  do {
    pcVar1 = apcStack_268[1] + 1;
    apcStack_268[1] = apcStack_268[1] + 1;
  } while (*pcVar1 != '\0');
  apcStack_268[0] = "C3DCoordF";
  pcStack_254 = local_238;
  puStack_24c = &LAB_00a89090;
  local_21c = (code *)CONCAT31(local_21c._1_3_,0x28);
  apcStack_268[3] = pcStack_208;
  pcStack_258 = &LAB_00a89090;
  apcStack_268[2] = (char *)local_21c;
  pcStack_250 = (char *)local_2a0;
  apuStack_1ec[0] = (undefined *)((uint)apuStack_1ec[0] & 0xffffff00);
  ppcVar12 = apcStack_268;
  ppuVar11 = apuStack_1ec;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppuVar11 = *ppcVar12;
    ppcVar12 = ppcVar12 + 1;
    ppuVar11 = ppuVar11 + 1;
  }
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  apcStack_294[0] = (char *)((uint)apcStack_294[0] & 0xffffff00);
  puStack_1cc = (undefined *)CONCAT31(puStack_1cc._1_3_,0x29);
  puVar4 = operator_new(0x28);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a828;
    ppuVar11 = apuStack_1ec;
    puVar9 = puVar4;
    for (iVar7 = 9; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *ppuVar11;
      ppuVar11 = ppuVar11 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x4c);
  *(undefined4 **)((int)param_1 + 0x4c) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  apcStack_294[1] = &DAT_00d7ad98;
  do {
    pcVar1 = apcStack_294[1] + 1;
    apcStack_294[1] = apcStack_294[1] + 1;
  } while (*pcVar1 != '\0');
  apcStack_294[3] = "FALSE";
  do {
    apcStack_294[3] = apcStack_294[3] + 1;
  } while (*apcStack_294[3] != '\0');
  apcStack_294[0] = "TRUE";
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  apcStack_294[2] = "FALSE";
  pcStack_284 = &LAB_00a89860;
  FUN_00a83a60((void *)((int)param_1 + 0x50),apcStack_294);
  local_2a0 = CONCAT31((int3)((uint)puVar8 >> 8),0x22);
  apcStack_294[1] = "\"SPRITE_";
  do {
    pcVar1 = apcStack_294[1] + 1;
    apcStack_294[1] = apcStack_294[1] + 1;
  } while (*pcVar1 != '\0');
  apcStack_294[3] = "\"MESH_";
  do {
    apcStack_294[3] = apcStack_294[3] + 1;
  } while (*apcStack_294[3] != '\0');
  local_224 = (char *)((uint)local_224 & 0xffffff00);
  apcStack_294[0] = "\"SPRITE_";
  apcStack_294[2] = "\"MESH_";
  pcStack_284 = (char *)local_2a0;
  pcStack_280 = FUN_00a86f30;
  iStack_27c = CONCAT31(iStack_27c._1_3_,0x22);
  puVar4 = operator_new(0x20);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_FUN_00d7a848;
    ppcVar12 = apcStack_294;
    puVar9 = puVar4;
    for (iVar7 = 7; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *ppcVar12;
      ppcVar12 = ppcVar12 + 1;
    }
  }
  puVar9 = *(undefined4 **)((int)param_1 + 0x5c);
  *(undefined4 **)((int)param_1 + 0x5c) = puVar4;
  if (puVar9 != (undefined4 *)0x0) {
    (**(code **)*puVar9)(1);
  }
  iVar7 = (int)param_1 + 0x2d0;
  FUN_00a899d0(param_1,iVar7,"SystemName",(char *)0x0,(void *)((int)param_1 + 0x68));
  FUN_00a899d0(param_1,iVar7,"ScaleX",(char *)0x1,(void *)((int)param_1 + 0x70));
  FUN_00a899d0(param_1,iVar7,"ScaleY",(char *)0x2,(void *)((int)param_1 + 0x78));
  FUN_00a899d0(param_1,iVar7,"ScaleZ",(char *)0x3,(void *)((int)param_1 + 0x80));
  FUN_00a899d0(param_1,iVar2,"UseParticleLifeSecs",(char *)0x4,(void *)((int)param_1 + 0x88));
  FUN_00a899d0(param_1,iVar2,"UseRandomInitialRotation",(char *)0x5,(void *)((int)param_1 + 0x90));
  FUN_00a899d0(param_1,iVar2,"StayWithEmitter",(char *)0x6,(void *)((int)param_1 + 0x98));
  FUN_00a899d0(param_1,iVar2,"ParticleCollideWithGround",(char *)0x7,(void *)((int)param_1 + 0xa0));
  FUN_00a899d0(param_1,iVar2,"ParticleLifeSecs",(char *)0x8,(void *)((int)param_1 + 0xa8));
  FUN_00a899d0(param_1,iVar2,"ParticleSystemOffset",&DAT_00000009,(void *)((int)param_1 + 0xb0));
  FUN_00a899d0(param_1,iVar2,"GravityFactor",&lpType_0000000a,(void *)((int)param_1 + 0xb8));
  FUN_00a899d0(param_1,iVar2,"AirResistance",(char *)0xb,(void *)((int)param_1 + 0xc0));
  FUN_00a899d0(param_1,iVar2,"ParticleAcceleration",(char *)0xc,(void *)((int)param_1 + 200));
  FUN_00a899d0(param_1,iVar2,"InitialRotationX",(char *)0xd,(void *)((int)param_1 + 0xd0));
  FUN_00a899d0(param_1,iVar2,"InitialRotationY",(char *)0xe,(void *)((int)param_1 + 0xd8));
  FUN_00a899d0(param_1,iVar2,"InitialRotationZ",(char *)0xf,(void *)((int)param_1 + 0xe0));
  FUN_00a899d0(param_1,iVar2,"RotationAxis",&DAT_00000010,(void *)((int)param_1 + 0xe8));
  FUN_00a899d0(param_1,iVar2,"RotationMinAngleSpeed",(char *)0x11,(void *)((int)param_1 + 0xf0));
  FUN_00a899d0(param_1,iVar2,"RotationMaxAngleSpeed",(char *)0x12,(void *)((int)param_1 + 0xf8));
  FUN_00a899d0(param_1,iVar2,"ParticleBounce",(char *)0x13,(void *)((int)param_1 + 0x100));
  FUN_00a899d0(param_1,iVar2,"Enabled0",&DAT_00000014,(void *)((int)param_1 + 0x108));
  FUN_00a899d0(param_1,iVar2,"Enabled1",(char *)0x15,(void *)((int)param_1 + 0x110));
  FUN_00a899d0(param_1,iVar2,"Enabled2",(char *)0x16,(void *)((int)param_1 + 0x118));
  FUN_00a899d0(param_1,iVar2,"AttractorEnabled",(char *)0x17,(void *)((int)param_1 + 0x120));
  FUN_00a899d0(param_1,iVar2,"CentreParam",(char *)0x18,(void *)((int)param_1 + 0x128));
  FUN_00a899d0(param_1,iVar2,"Radius0",(char *)0x19,(void *)((int)param_1 + 0x130));
  FUN_00a899d0(param_1,iVar2,"RotateSpeed0",(char *)0x1a,(void *)((int)param_1 + 0x138));
  FUN_00a899d0(param_1,iVar2,"Type0",(char *)0x1b,(void *)((int)param_1 + 0x140));
  FUN_00a899d0(param_1,iVar2,"Radius1",(char *)0x1c,(void *)((int)param_1 + 0x148));
  FUN_00a899d0(param_1,iVar2,"RotateSpeed1",(char *)0x1d,(void *)((int)param_1 + 0x150));
  FUN_00a899d0(param_1,iVar2,"Type1",(char *)0x1e,(void *)((int)param_1 + 0x158));
  FUN_00a899d0(param_1,iVar2,"Radius2",(char *)0x1f,(void *)((int)param_1 + 0x160));
  FUN_00a899d0(param_1,iVar2,"RotateSpeed2",(char *)0x20,(void *)((int)param_1 + 0x168));
  FUN_00a899d0(param_1,iVar2,"Type2",(char *)0x21,(void *)((int)param_1 + 0x170));
  FUN_00a899d0(param_1,iVar2,"AttractorInfluenceRadius",(char *)0x22,(void *)((int)param_1 + 0x178))
  ;
  FUN_00a899d0(param_1,iVar2,"AttractorInfluenceForce",(char *)0x23,(void *)((int)param_1 + 0x180));
  FUN_00a899d0(param_1,iVar2,"AttractorInfluenceFallOffType",(char *)0x24,
               (void *)((int)param_1 + 0x188));
  iVar2 = (int)param_1 + 0x318;
  FUN_00a899d0(param_1,iVar2,"EmitterSize",(char *)0x25,(void *)((int)param_1 + 400));
  FUN_00a899d0(param_1,iVar2,"EmitterType",(char *)0x26,(void *)((int)param_1 + 0x198));
  FUN_00a899d0(param_1,iVar2,"UseEmitterLifeSecs",(char *)0x27,(void *)((int)param_1 + 0x1a0));
  FUN_00a899d0(param_1,iVar2,"EmitterLifeSecs",(char *)0x28,(void *)((int)param_1 + 0x1a8));
  FUN_00a899d0(param_1,iVar2,"EmitterStartTime",(char *)0x29,(void *)((int)param_1 + 0x1b0));
  FUN_00a899d0(param_1,iVar2,"ParticlesPerSecond",(char *)0x2a,(void *)((int)param_1 + 0x1b8));
  FUN_00a899d0(param_1,iVar2,"MinSpeed",(char *)0x2b,(void *)((int)param_1 + 0x1c0));
  FUN_00a899d0(param_1,iVar2,"MaxSpeed",(char *)0x2c,(void *)((int)param_1 + 0x1c8));
  FUN_00a899d0(param_1,iVar2,"CustomDirection",(char *)0x2d,(void *)((int)param_1 + 0x1d0));
  FUN_00a899d0(param_1,iVar2,"NonUniformScaling",(char *)0x2e,(void *)((int)param_1 + 0x1d8));
  FUN_00a899d0(param_1,iVar2,"NoParticlesToStart",&DAT_0000002f,(void *)((int)param_1 + 0x1e0));
  FUN_00a899d0(param_1,iVar2,"UseRandom2DDirection",(char *)0x30,(void *)((int)param_1 + 0x1e8));
  FUN_00a899d0(param_1,iVar2,"UseRandom3DDirection",(char *)0x31,(void *)((int)param_1 + 0x1f0));
  FUN_00a899d0(param_1,iVar2,"AngularPerturbationInteger",(char *)0x32,
               (void *)((int)param_1 + 0x1f8));
  FUN_00a899d0(param_1,iVar2,"EmitterPosParam",(char *)0x33,(void *)((int)param_1 + 0x200));
  FUN_00a899d0(param_1,iVar2,"DirectionParamName",(char *)0x34,(void *)((int)param_1 + 0x208));
  iVar2 = (int)param_1 + 0x300;
  FUN_00a899d0(param_1,iVar2,"SpriteName",(char *)0x35,(void *)((int)param_1 + 0x210));
  FUN_00a899d0(param_1,iVar2,"FadeInEndInteger",(char *)0x36,(void *)((int)param_1 + 0x218));
  FUN_00a899d0(param_1,iVar2,"FadeOutBeginInteger",(char *)0x37,(void *)((int)param_1 + 0x220));
  FUN_00a899d0(param_1,iVar2,"AlphaFadeEnable",(char *)0x38,(void *)((int)param_1 + 0x228));
  FUN_00a899d0(param_1,iVar2,"SizeFadeEnable",(char *)0x39,(void *)((int)param_1 + 0x230));
  FUN_00a899d0(param_1,iVar2,"AlphaFadeMinimum",(char *)0x3a,(void *)((int)param_1 + 0x238));
  FUN_00a899d0(param_1,iVar2,"SizeFadeMinimum",(char *)0x3b,(void *)((int)param_1 + 0x240));
  FUN_00a899d0(param_1,iVar2,"StartRenderSize",(char *)0x3c,(void *)((int)param_1 + 0x248));
  FUN_00a899d0(param_1,iVar2,"EndRenderSize",(char *)0x3d,(void *)((int)param_1 + 0x250));
  FUN_00a899d0(param_1,iVar2,"StartColour",(char *)0x3e,(void *)((int)param_1 + 600));
  FUN_00a899d0(param_1,iVar2,"MidColour",(char *)0x3f,(void *)((int)param_1 + 0x260));
  FUN_00a899d0(param_1,iVar2,"EndColour",(char *)0x40,(void *)((int)param_1 + 0x268));
  FUN_00a899d0(param_1,iVar2,"UseStartColour",(char *)0x41,(void *)((int)param_1 + 0x270));
  FUN_00a899d0(param_1,iVar2,"UseMidColour",(char *)0x42,(void *)((int)param_1 + 0x278));
  FUN_00a899d0(param_1,iVar2,"UseEndColour",(char *)0x43,(void *)((int)param_1 + 0x280));
  FUN_00a899d0(param_1,iVar2,"BlendMode",(char *)0x44,(void *)((int)param_1 + 0x288));
  FUN_00a899d0(param_1,iVar2,"BlendOp",(char *)0x45,(void *)((int)param_1 + 0x290));
  FUN_00a899d0(param_1,iVar2,"SpriteFlags",(char *)0x46,(void *)((int)param_1 + 0x298));
  FUN_00a899d0(param_1,iVar2,"TrailName",&DAT_00000047,(void *)((int)param_1 + 0x2a0));
  FUN_00a899d0(param_1,iVar2,"TrailBlendMode",(char *)0x48,(void *)((int)param_1 + 0x2a8));
  FUN_00a899d0(param_1,iVar2,"TrailBlendOp",(char *)0x49,(void *)((int)param_1 + 0x2b0));
  FUN_00a899d0(param_1,iVar2,"TrailWidth",(char *)0x4a,(void *)((int)param_1 + 0x2b8));
  FUN_00a899d0(param_1,iVar2,"TrailLengthInteger",(char *)0x4b,(void *)((int)param_1 + 0x2c0));
  FUN_00a899d0(param_1,iVar2,"BankIndexName",(char *)0x4c,(void *)((int)param_1 + 0x2c8));
  ExceptionList = pvStack_14;
  return param_1;
}


//// FUNCTION FUN_00a8af70 @ 00a8af70 ////

void __thiscall FUN_00a8af70(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8afd0(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a88690((int *)&local_4,(undefined4 *)((int)this + 0x20),iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8afd0 @ 00a8afd0 ////

void __thiscall FUN_00a8afd0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8b030(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a8b130((void *)((int)this + 0x14),(int *)&local_4,iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b030 @ 00a8b030 ////

void __thiscall FUN_00a8b030(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8b090(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a8b0f0((void *)((int)this + 0xc),(int *)&local_4,iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b090 @ 00a8b090 ////

void __thiscall FUN_00a8b090(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_2;
  FUN_00a88690(&param_2,this,param_2);
  iVar2 = param_2;
  if ((-1 < param_2) && (piVar3 = *(int **)(*(int *)((int)this + 8) + 4), piVar3 != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(*piVar3 + 4))(&param_2,iVar1);
    if (-1 < *piVar3) {
      *param_1 = *piVar3 + iVar2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b0f0 @ 00a8b0f0 ////

void __thiscall FUN_00a8b0f0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a88690(&param_2,this,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a8b130 @ 00a8b130 ////

void __thiscall FUN_00a8b130(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  iVar3 = 0;
  FUN_00a8b190(this,&param_2,param_2);
  while (-1 < param_2) {
    uVar1 = **(undefined4 **)(iVar2 + 4);
    iVar3 = iVar3 + param_2;
    FUN_00a8b190(this,&param_2,iVar2);
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = iVar3;
  return;
}


//// FUNCTION FUN_00a8b190 @ 00a8b190 ////

void __thiscall FUN_00a8b190(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8 [2];
  
  iVar1 = param_2;
  FUN_00a8b1f0(this,&param_2,param_2);
  if (-1 < param_2) {
    piVar2 = FUN_00a8b260((void *)((int)this + 8),local_8,iVar1);
    if (-1 < *piVar2) {
      *param_1 = *piVar2 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b1f0 @ 00a8b1f0 ////

int * __thiscall FUN_00a8b1f0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  if (*(int **)(*(int *)this + 4) != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)this + 4) + 4))(&param_2,param_2);
    if (-1 < *piVar3) {
      *param_1 = *piVar3;
      return param_1;
    }
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  piVar3 = *(int **)(*(int *)((int)this + 4) + 4);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 4))(&param_2,iVar2);
    *unaff_EBX = *piVar3;
    return unaff_EBX;
  }
  *param_1 = -1;
  return param_1;
}


//// FUNCTION FUN_00a8b260 @ 00a8b260 ////

undefined4 * __thiscall FUN_00a8b260(void *this,undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_2;
  FUN_00a81370(param_2);
  if (((char *)**(undefined4 **)(iVar2 + 4) != *(char **)(iVar2 + 8)) &&
     (cVar1 = *(char *)**(undefined4 **)(iVar2 + 4), param_2 = CONCAT31(param_2._1_3_,cVar1),
     cVar1 == *(char *)this)) {
    **(int **)(iVar2 + 4) = **(int **)(iVar2 + 4) + 1;
    FUN_00a8b2e0(param_1,1,(undefined1 *)&param_2);
    return param_1;
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8b2e0 @ 00a8b2e0 ////

void FUN_00a8b2e0(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((undefined1 *)((int)param_1 + 5) != (undefined1 *)0x0) {
    *(undefined1 *)((int)param_1 + 5) = *param_3;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00a8b330 @ 00a8b330 ////

void __thiscall FUN_00a8b330(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8 [2];
  
  iVar1 = param_2;
  FUN_00a8b390(this,&param_2,param_2);
  if (-1 < param_2) {
    piVar2 = FUN_00a8b260((void *)((int)this + 0x18),local_8,iVar1);
    if (-1 < *piVar2) {
      *param_1 = *piVar2 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b390 @ 00a8b390 ////

void __thiscall FUN_00a8b390(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a88690(&param_2,this,param_2);
  if (param_2 < 0) {
    **(undefined4 **)(iVar2 + 4) = uVar1;
    FUN_00a88690(&param_2,(undefined4 *)((int)this + 8),iVar2);
  }
  iVar3 = param_2;
  if ((-1 < param_2) && (FUN_00a8b410((void *)((int)this + 0x10),&param_2,iVar2), -1 < param_2)) {
    *param_1 = param_2 + iVar3;
    return;
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b410 @ 00a8b410 ////

void __thiscall FUN_00a8b410(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  FUN_00a81370(param_2);
  uVar1 = **(undefined4 **)(iVar2 + 4);
  FUN_00a8b460(this,&param_2,iVar2);
  if (-1 < param_2) {
    (**(code **)((int)this + 4))(uVar1,**(undefined4 **)(iVar2 + 4));
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00a8b460 @ 00a8b460 ////

void __thiscall FUN_00a8b460(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  iVar3 = 0;
  FUN_00a8b4c0(this,&param_2,param_2);
  while (-1 < param_2) {
    uVar1 = **(undefined4 **)(iVar2 + 4);
    iVar3 = iVar3 + param_2;
    FUN_00a8b4c0(this,&param_2,iVar2);
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = iVar3;
  return;
}


//// FUNCTION FUN_00a8b4c0 @ 00a8b4c0 ////

void __thiscall FUN_00a8b4c0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_8 [2];
  
  uVar1 = **(undefined4 **)(param_2 + 4);
  piVar4 = FUN_00a8b530(local_8,param_2);
  iVar2 = *piVar4;
  if (-1 < iVar2) {
    uVar3 = **(undefined4 **)(param_2 + 4);
    **(undefined4 **)(param_2 + 4) = uVar1;
    piVar4 = FUN_00a8b260(this,local_8,param_2);
    if ((*piVar4 < 0) || (*piVar4 < iVar2)) {
      **(undefined4 **)(param_2 + 4) = uVar3;
      *param_1 = iVar2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b530 @ 00a8b530 ////

undefined4 * FUN_00a8b530(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  FUN_00a81370(param_2);
  if ((undefined1 *)**(undefined4 **)(iVar1 + 4) != *(undefined1 **)(iVar1 + 8)) {
    param_2 = CONCAT31(param_2._1_3_,*(undefined1 *)**(undefined4 **)(iVar1 + 4));
    **(int **)(iVar1 + 4) = **(int **)(iVar1 + 4) + 1;
    FUN_00a8b2e0(param_1,1,(undefined1 *)&param_2);
    return param_1;
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8b5a0 @ 00a8b5a0 ////

int __fastcall FUN_00a8b5a0(int param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc733;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  uVar1 = FUN_00a898e0((int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a8b600 @ 00a8b600 ////

void __fastcall FUN_00a8b600(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc772;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  local_4 = 1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  for (; iVar3 != iVar1; iVar3 = iVar3 + -4) {
    FUN_00a808b0(*(undefined4 **)(iVar3 + -4));
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 0xffffffff;
  if (param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_1 + 4);
  }
  FUN_00a89aa0(piVar2);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a8b6a0 @ 00a8b6a0 ////

void * __thiscall FUN_00a8b6a0(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc793;
  local_c = ExceptionList;
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((*(int *)((int)this + 8) == 0) ||
     (ExceptionList = &local_c,
     (uint)(*(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2) <= uVar1)) {
    ExceptionList = &local_c;
    FUN_00a884e0((void *)((int)this + 4),(uVar1 * 3 >> 1) + 1);
  }
  pvVar2 = *(void **)(uVar1 * 4 + *(int *)((int)this + 8));
  pvVar3 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    ExceptionList = local_c;
    return pvVar2;
  }
  pvVar2 = operator_new(0x330);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = ParticleSystemEditor_RegisterPropertySchema(pvVar2);
  }
  local_4 = 1;
  FUN_00a89040((void *)(param_1 + 0x10),this);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  *(void **)(uVar1 * 4 + *(int *)((int)this + 8)) = pvVar3;
  ExceptionList = local_c;
  return pvVar3;
}


//// FUNCTION FUN_00a8b7a0 @ 00a8b7a0 ////

void __thiscall FUN_00a8b7a0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8b800(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a88690((int *)&local_4,(undefined4 *)((int)this + 0x20),iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b800 @ 00a8b800 ////

void __thiscall FUN_00a8b800(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8b860(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a8b8c0((void *)((int)this + 0x14),(int *)&local_4,iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b860 @ 00a8b860 ////

void __thiscall FUN_00a8b860(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  FUN_00a8b090(this,&param_2,param_2);
  iVar2 = param_2;
  if (-1 < param_2) {
    FUN_00a88690(&param_2,(undefined4 *)((int)this + 0xc),iVar1);
    if (-1 < param_2) {
      *param_1 = param_2 + iVar2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b8c0 @ 00a8b8c0 ////

void __thiscall FUN_00a8b8c0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  iVar3 = 0;
  FUN_00a8b920(this,&param_2,param_2);
  while (-1 < param_2) {
    uVar1 = **(undefined4 **)(iVar2 + 4);
    iVar3 = iVar3 + param_2;
    FUN_00a8b920(this,&param_2,iVar2);
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = iVar3;
  return;
}


//// FUNCTION FUN_00a8b920 @ 00a8b920 ////

int * __thiscall FUN_00a8b920(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  if (*(int **)(*(int *)this + 4) != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)this + 4) + 4))(&param_2,param_2);
    if (-1 < *piVar3) {
      *param_1 = *piVar3;
      return param_1;
    }
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8b970((void *)((int)this + 4),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8b970 @ 00a8b970 ////

void __thiscall FUN_00a8b970(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 auStack_8 [2];
  
  iVar2 = param_2;
  if (*(int **)(*(int *)this + 4) != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)this + 4) + 4))(&param_2,param_2);
    iVar1 = *piVar3;
    if (-1 < iVar1) {
      piVar3 = FUN_00a8b260((void *)((int)this + 4),auStack_8,iVar2);
      if (-1 < *piVar3) {
        *param_1 = iVar1 + *piVar3;
        return;
      }
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8b9f0 @ 00a8b9f0 ////

void __thiscall FUN_00a8b9f0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8baa0(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a8ba50((void *)((int)this + 0x1c),(int *)&local_4,iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8ba50 @ 00a8ba50 ////

void __thiscall FUN_00a8ba50(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  FUN_00a81370(param_2);
  uVar1 = **(undefined4 **)(iVar2 + 4);
  FUN_00a88690(&param_2,this,iVar2);
  iVar3 = param_2;
  if (-1 < param_2) {
    (**(code **)((int)this + 8))(uVar1,**(undefined4 **)(iVar2 + 4));
  }
  *param_1 = iVar3;
  return;
}


//// FUNCTION FUN_00a8baa0 @ 00a8baa0 ////

void __thiscall FUN_00a8baa0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  FUN_00a81370(param_2);
  uVar1 = **(undefined4 **)(iVar2 + 4);
  FUN_00a88690(&param_2,this,iVar2);
  iVar3 = param_2;
  if (-1 < param_2) {
    (**(code **)((int)this + 8))(uVar1,**(undefined4 **)(iVar2 + 4));
    FUN_00a8bb20((void *)((int)this + 0xc),&param_2,iVar2);
    if (-1 < param_2) {
      *param_1 = iVar3 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8bb20 @ 00a8bb20 ////

void __thiscall FUN_00a8bb20(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  iVar3 = 0;
  FUN_00a8bb80(this,&param_2,param_2);
  while (-1 < param_2) {
    uVar1 = **(undefined4 **)(iVar2 + 4);
    iVar3 = iVar3 + param_2;
    FUN_00a8bb80(this,&param_2,iVar2);
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = iVar3;
  return;
}


//// FUNCTION FUN_00a8bb80 @ 00a8bb80 ////

int * __thiscall FUN_00a8bb80(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  if (*(int **)(*(int *)this + 4) != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)this + 4) + 4))(&param_2,param_2);
    if (-1 < *piVar3) {
      *param_1 = *piVar3;
      return param_1;
    }
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8b190((void *)((int)this + 4),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8bbf0 @ 00a8bbf0 ////

int * __thiscall FUN_00a8bbf0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8bc60(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  piVar3 = *(int **)(*(int *)((int)this + 0xa8) + 4);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 4))(&param_2,iVar2);
    *unaff_EBX = *piVar3;
    return unaff_EBX;
  }
  *param_1 = -1;
  return param_1;
}


//// FUNCTION FUN_00a8bc60 @ 00a8bc60 ////

int * __thiscall FUN_00a8bc60(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8be70(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8bcb0((void *)((int)this + 0x8c),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8bcb0 @ 00a8bcb0 ////

void __thiscall FUN_00a8bcb0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8bd10(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a88690((int *)&local_4,(undefined4 *)((int)this + 0x14),iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8bd10 @ 00a8bd10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a8bd10(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  FUN_00a81370(param_2);
  FUN_00a88690(&param_2,this,iVar1);
  iVar1 = param_2;
  if (-1 < param_2) {
    FUN_00a8bd90(*(void **)((int)this + 8),*(undefined4 *)((int)this + 0xc));
    if (*(int *)((int)this + 0x10) == 4) {
      DAT_010c9f14 = 1;
      _DAT_010c9d84 = *(undefined4 *)((int)this + 0x10);
      *param_1 = iVar1;
      return;
    }
    if (*(int *)((int)this + 0x10) == 5) {
      DAT_010c9f15 = 1;
    }
    _DAT_010c9d84 = *(undefined4 *)((int)this + 0x10);
  }
  *param_1 = iVar1;
  return;
}


//// FUNCTION FUN_00a8bd90 @ 00a8bd90 ////

int __thiscall FUN_00a8bd90(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00d7aeb8;
    puVar2[1] = param_1;
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  *(undefined4 **)((int)this + 4) = puVar2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return (int)this;
}


//// FUNCTION FUN_00a8be00 @ 00a8be00 ////

undefined4 * __thiscall FUN_00a8be00(void *this,byte param_1)

{
  FUN_00a8be20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a8be20 @ 00a8be20 ////

void __fastcall FUN_00a8be20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7a774;
  return;
}


//// FUNCTION FUN_00a8be70 @ 00a8be70 ////

int * __thiscall FUN_00a8be70(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8bec0(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8bcb0((void *)((int)this + 0x70),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8bec0 @ 00a8bec0 ////

int * __thiscall FUN_00a8bec0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8bf10(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8bcb0((void *)((int)this + 0x54),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8bf10 @ 00a8bf10 ////

int * __thiscall FUN_00a8bf10(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8bf60(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8bcb0((void *)((int)this + 0x38),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8bf60 @ 00a8bf60 ////

int * __thiscall FUN_00a8bf60(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8bcb0(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8bcb0((void *)((int)this + 0x1c),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8bfd0 @ 00a8bfd0 ////

void __thiscall FUN_00a8bfd0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_c [3];
  
  iVar2 = param_2;
  piVar3 = (int *)FUN_00a8c030(this,local_c,param_2);
  iVar1 = *piVar3;
  if ((-1 < iVar1) && (piVar3 = *(int **)(*(int *)((int)this + 8) + 4), piVar3 != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(*piVar3 + 4))(&param_2,iVar2);
    if (-1 < *piVar3) {
      *param_1 = *piVar3 + iVar1;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8c030 @ 00a8c030 ////

void __thiscall FUN_00a8c030(void *this,int *param_1,int param_2)

{
  int local_18;
  char local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a81370(param_2);
  FUN_00a8c0e0(*(void **)this,&local_18,param_2);
  local_4 = 0;
  if (-1 < local_18) {
    FUN_00a8bd90(*(void **)((int)this + 4),*local_10);
  }
  *param_1 = local_18;
  *(undefined1 *)(param_1 + 1) = 0;
  if (local_14 != '\0') {
    if (param_1 + 2 != (int *)0x0) {
      param_1[2] = (int)local_10;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a8c0d0 @ 00a8c0d0 ////

void __fastcall FUN_00a8c0d0(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a8c0e0 @ 00a8c0e0 ////

undefined4 * __thiscall FUN_00a8c0e0(void *this,undefined4 *param_1,int param_2)

{
  FUN_00a8c110(param_1,this,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8c110 @ 00a8c110 ////

void __cdecl FUN_00a8c110(undefined4 *param_1,void *param_2,int param_3)

{
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  undefined4 local_4;
  
  FUN_00a81370(param_3);
  local_14 = *(undefined4 *)(param_3 + 4);
  local_10 = *(undefined4 *)(param_3 + 8);
  local_18[0] = (undefined2)param_3;
  FUN_00a8c180(param_2,&local_c,(int)local_18);
  *param_1 = local_c;
  *(undefined1 *)(param_1 + 1) = 0;
  if (local_8 != '\0') {
    if (param_1 + 2 != (undefined4 *)0x0) {
      param_1[2] = local_4;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}


//// FUNCTION FUN_00a8c180 @ 00a8c180 ////

undefined4 * __thiscall FUN_00a8c180(void *this,undefined4 *param_1,int param_2)

{
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = 0;
  FUN_00a8c1f0(this,&local_8,param_2);
  if (local_8 != 0) {
    local_c = local_8;
    FUN_00a8c2e0(param_1,local_4,&local_c);
    return param_1;
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8c1f0 @ 00a8c1f0 ////

void __thiscall FUN_00a8c1f0(void *this,int *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  char *local_8;
  
  iVar3 = param_2;
  pcVar8 = (char *)**(undefined4 **)(param_2 + 4);
  iVar5 = 0;
  iVar7 = 0;
  if (pcVar8 == *(char **)(param_2 + 8)) {
LAB_00a8c2c5:
    param_1[1] = iVar7;
    *param_1 = iVar5;
    return;
  }
  pcVar4 = *(char **)this;
  pcVar2 = (char *)**(undefined4 **)(param_2 + 4);
  cVar6 = *pcVar2;
  param_2 = 0;
  local_8 = pcVar2;
  if (pcVar4 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      if (cVar6 < cVar1) {
        if ((cVar1 == '\0') && (iVar5 = *(int *)(pcVar4 + 8), iVar5 != 0)) {
          param_2 = iVar7;
          local_8 = pcVar8;
        }
        pcVar4 = *(char **)(pcVar4 + 4);
      }
      else if (cVar6 == cVar1) {
        if (cVar1 == '\0') {
          iVar5 = *(int *)(pcVar4 + 8);
          if (iVar5 == 0) goto LAB_00a8c2a5;
          local_8 = (char *)**(undefined4 **)(iVar3 + 4);
          param_2 = iVar7;
          break;
        }
        **(int **)(iVar3 + 4) = **(int **)(iVar3 + 4) + 1;
        pcVar8 = (char *)**(undefined4 **)(iVar3 + 4);
        if (pcVar8 == *(char **)(iVar3 + 8)) {
          pcVar4 = *(char **)(pcVar4 + 8);
          cVar6 = '\0';
          iVar7 = iVar7 + 1;
        }
        else {
          cVar6 = *pcVar8;
          pcVar4 = *(char **)(pcVar4 + 8);
          iVar7 = iVar7 + 1;
        }
      }
      else {
        if ((cVar1 == '\0') && (iVar5 = *(int *)(pcVar4 + 8), iVar5 != 0)) {
          param_2 = iVar7;
          local_8 = pcVar8;
        }
        pcVar4 = *(char **)(pcVar4 + 0xc);
      }
    } while (pcVar4 != (char *)0x0);
    if (iVar5 != 0) {
      **(undefined4 **)(iVar3 + 4) = local_8;
      iVar7 = param_2;
      goto LAB_00a8c2c5;
    }
  }
LAB_00a8c2a5:
  **(undefined4 **)(iVar3 + 4) = pcVar2;
  param_1[1] = iVar7;
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a8c2e0 @ 00a8c2e0 ////

void FUN_00a8c2e0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_1 + 2 != (undefined4 *)0x0) {
    param_1[2] = *param_3;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00a8c310 @ 00a8c310 ////

int __fastcall FUN_00a8c310(int param_1)

{
  FUN_00a8b5a0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a8c320 @ 00a8c320 ////

void __fastcall FUN_00a8c320(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00cfc772;
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  uStack_4 = 1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  for (; iVar3 != iVar1; iVar3 = iVar3 + -4) {
    FUN_00a808b0(*(undefined4 **)(iVar3 + -4));
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uStack_4 = 0xffffffff;
  if (param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_1 + 4);
  }
  FUN_00a89aa0(piVar2);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a8c330 @ 00a8c330 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl FUN_00a8c330(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *local_1c;
  int *local_18;
  undefined4 uStack_14;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc7d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_010c9f4c & 1) == 0) {
    DAT_010c9f4c = DAT_010c9f4c | 1;
    _DAT_010c9f44 = 0;
    DAT_010c9f48 = 0;
    ExceptionList = &pvStack_c;
    _atexit(FUN_00d15110);
  }
  piVar3 = FUN_00a85e90(&local_1c,&DAT_010c9f44);
  iVar1 = *piVar3;
  if (local_18 != (int *)0x0) {
    LOCK();
    iVar2 = local_18[1] + -1;
    local_18[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*local_18 + 4))();
      LOCK();
      iVar2 = local_18[2] + -1;
      local_18[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        (**(code **)(*local_18 + 8))();
      }
    }
  }
  if (iVar1 == 0) {
    local_1c = operator_new(0x20);
    uStack_4 = 0;
    if (local_1c != (void *)0x0) {
      FUN_00a88a60(local_1c,(undefined4 *)&DAT_010c9f44);
    }
    uStack_4 = 0xffffffff;
  }
  puVar4 = FUN_00a85e90(&uStack_14,&DAT_010c9f44);
  uStack_4 = 1;
  pvVar5 = FUN_00a8b6a0((void *)*puVar4,param_1);
  uStack_4 = 0xffffffff;
  if (piStack_10 != (int *)0x0) {
    LOCK();
    iVar1 = piStack_10[1] + -1;
    piStack_10[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      (**(code **)(*piStack_10 + 4))();
      LOCK();
      iVar1 = piStack_10[2] + -1;
      piStack_10[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        (**(code **)(*piStack_10 + 8))();
      }
    }
  }
  ExceptionList = pvStack_c;
  return pvVar5;
}


//// FUNCTION FUN_00a8c4d0 @ 00a8c4d0 ////

void __thiscall FUN_00a8c4d0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8c530(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a88690((int *)&local_4,(undefined4 *)((int)this + 0x28),iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8c530 @ 00a8c530 ////

void __thiscall FUN_00a8c530(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  FUN_00a88690(&param_2,this,param_2);
  iVar2 = param_2;
  if (-1 < param_2) {
    FUN_00a8c590((void *)((int)this + 8),&param_2,iVar1);
    if (-1 < param_2) {
      *param_1 = param_2 + iVar2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8c590 @ 00a8c590 ////

void __thiscall FUN_00a8c590(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  iVar3 = 0;
  FUN_00a8c5f0(this,&param_2,param_2);
  while (-1 < param_2) {
    uVar1 = **(undefined4 **)(iVar2 + 4);
    iVar3 = iVar3 + param_2;
    FUN_00a8c5f0(this,&param_2,iVar2);
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = iVar3;
  return;
}


//// FUNCTION FUN_00a8c5f0 @ 00a8c5f0 ////

int * __thiscall FUN_00a8c5f0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8c640(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8b970((void *)((int)this + 0x18),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8c640 @ 00a8c640 ////

int * __thiscall FUN_00a8c640(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  if (*(int **)(*(int *)this + 4) != (int *)0x0) {
    piVar3 = (int *)(**(code **)(**(int **)(*(int *)this + 4) + 4))(&param_2,param_2);
    if (-1 < *piVar3) {
      *param_1 = *piVar3;
      return param_1;
    }
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a8c690((void *)((int)this + 4),param_1,iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8c690 @ 00a8c690 ////

void __thiscall FUN_00a8c690(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  FUN_00a81370(param_2);
  uVar1 = **(undefined4 **)(iVar2 + 4);
  FUN_00a8c6e0(this,&param_2,iVar2);
  if (-1 < param_2) {
    (**(code **)((int)this + 0x10))(uVar1,**(undefined4 **)(iVar2 + 4));
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00a8c6e0 @ 00a8c6e0 ////

void __thiscall FUN_00a8c6e0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8 [2];
  
  iVar1 = param_2;
  FUN_00a8b090(this,&param_2,param_2);
  iVar2 = param_2;
  if (-1 < param_2) {
    piVar3 = FUN_00a8b260((void *)((int)this + 0xc),local_8,iVar1);
    if (-1 < *piVar3) {
      *param_1 = *piVar3 + iVar2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8c760 @ 00a8c760 ////

void __thiscall FUN_00a8c760(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8 [2];
  
  iVar1 = param_2;
  FUN_00a8c7c0(this,&param_2,param_2);
  if (-1 < param_2) {
    piVar2 = FUN_00a8b260((void *)((int)this + 0x20),local_8,iVar1);
    if (-1 < *piVar2) {
      *param_1 = *piVar2 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8c7c0 @ 00a8c7c0 ////

void __thiscall FUN_00a8c7c0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8c820(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a8cc90((void *)((int)this + 0x14),(int *)&local_4,iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8c820 @ 00a8c820 ////

void __thiscall FUN_00a8c820(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_c [3];
  
  iVar1 = param_2;
  FUN_00a8c880(this,&param_2,param_2);
  if (-1 < param_2) {
    piVar2 = (int *)FUN_00a8c8e0((void *)((int)this + 0xc),local_c,iVar1);
    if (-1 < *piVar2) {
      *param_1 = *piVar2 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8c880 @ 00a8c880 ////

void __thiscall FUN_00a8c880(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8 [2];
  
  iVar1 = param_2;
  FUN_00a88690(&param_2,this,param_2);
  iVar2 = param_2;
  if (-1 < param_2) {
    piVar3 = FUN_00a8b260((void *)((int)this + 8),local_8,iVar1);
    if (-1 < *piVar3) {
      *param_1 = *piVar3 + iVar2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8c8e0 @ 00a8c8e0 ////

void __thiscall FUN_00a8c8e0(void *this,int *param_1,int param_2)

{
  int local_18;
  char local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a81370(param_2);
  FUN_00a8c990(&local_18,param_2);
  local_4 = 0;
  if (-1 < local_18) {
    (**(code **)((int)this + 4))(local_10);
  }
  *param_1 = local_18;
  *(undefined1 *)(param_1 + 1) = 0;
  if (local_14 != '\0') {
    if (param_1 + 2 != (int *)0x0) {
      param_1[2] = local_10;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a8c980 @ 00a8c980 ////

void __fastcall FUN_00a8c980(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a8c990 @ 00a8c990 ////

undefined4 * FUN_00a8c990(undefined4 *param_1,int param_2)

{
  FUN_00a8c9c0(param_1,&param_2,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8c9c0 @ 00a8c9c0 ////

void __cdecl FUN_00a8c9c0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  undefined4 local_4;
  
  FUN_00a81370(param_3);
  local_14 = *(undefined4 *)(param_3 + 4);
  local_10 = *(undefined4 *)(param_3 + 8);
  local_18[0] = (undefined2)param_3;
  FUN_00a8ca30(&local_c,(int)local_18);
  *param_1 = local_c;
  *(undefined1 *)(param_1 + 1) = 0;
  if (local_8 != '\0') {
    if (param_1 + 2 != (undefined4 *)0x0) {
      param_1[2] = local_4;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}


//// FUNCTION FUN_00a8ca30 @ 00a8ca30 ////

undefined4 * FUN_00a8ca30(undefined4 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int local_8;
  int local_4;
  
  iVar1 = param_2;
  local_4 = **(int **)(param_2 + 4);
  if (local_4 != *(int *)(param_2 + 8)) {
    local_8 = 0;
    param_2 = 0;
    cVar2 = FUN_00a8cae0(iVar1,&param_2);
    if (cVar2 == '\0') {
      uVar3 = FUN_00a8cbc0(iVar1,&local_8,&param_2);
      cVar2 = (char)uVar3;
    }
    else {
      uVar3 = FUN_00a8cb10(iVar1,&local_8,&param_2);
      cVar2 = (char)uVar3;
    }
    if (cVar2 != '\0') {
      FUN_00a8cc60(param_1,param_2,&local_8);
      return param_1;
    }
    **(int **)(iVar1 + 4) = local_4;
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8cae0 @ 00a8cae0 ////

void __cdecl FUN_00a8cae0(int param_1,int *param_2)

{
  *param_2 = 0;
  if ((*(char *)**(undefined4 **)(param_1 + 4) != '-') &&
     (*(char *)**(undefined4 **)(param_1 + 4) != '+')) {
    return;
  }
  **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
  *param_2 = *param_2 + 1;
  return;
}


//// FUNCTION FUN_00a8cb10 @ 00a8cb10 ////

uint __cdecl FUN_00a8cb10(int param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
  iVar4 = 0;
  if (pbVar1 != *(byte **)(param_1 + 8)) {
    do {
      iVar2 = _isdigit((uint)*pbVar1);
      if (iVar2 == 0) break;
      uVar3 = FUN_00a8cb80(param_1,param_2);
      if ((char)uVar3 == '\0') {
        return uVar3 & 0xffffff00;
      }
      iVar4 = iVar4 + 1;
      **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
      *param_3 = *param_3 + 1;
      pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
    } while (pbVar1 != *(byte **)(param_1 + 8));
  }
  return (uint)(iVar4 != 0);
}


//// FUNCTION FUN_00a8cb80 @ 00a8cb80 ////

int __cdecl FUN_00a8cb80(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  
  iVar1 = *param_2;
  iVar2 = iVar1 * 10;
  *param_2 = iVar2;
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if (iVar1 * 9 != 0 && iVar1 <= iVar2) {
    return (uint)uVar3 << 8;
  }
  iVar1 = (iVar2 - *(char *)**(undefined4 **)(param_1 + 4)) + 0x30;
  *param_2 = iVar1;
  return CONCAT31(uVar3,iVar1 <= iVar2);
}


//// FUNCTION FUN_00a8cbc0 @ 00a8cbc0 ////

uint __cdecl FUN_00a8cbc0(int param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
  iVar4 = 0;
  if (pbVar1 != *(byte **)(param_1 + 8)) {
    do {
      iVar2 = _isdigit((uint)*pbVar1);
      if (iVar2 == 0) break;
      uVar3 = FUN_00a8cc30(param_1,param_2);
      if ((char)uVar3 == '\0') {
        return uVar3 & 0xffffff00;
      }
      iVar4 = iVar4 + 1;
      **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
      *param_3 = *param_3 + 1;
      pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
    } while (pbVar1 != *(byte **)(param_1 + 8));
  }
  return (uint)(iVar4 != 0);
}


//// FUNCTION FUN_00a8cc30 @ 00a8cc30 ////

int __cdecl FUN_00a8cc30(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  
  iVar1 = *param_2;
  iVar2 = iVar1 * 10;
  *param_2 = iVar2;
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if (iVar2 < iVar1) {
    return (uint)uVar3 << 8;
  }
  iVar1 = *(char *)**(undefined4 **)(param_1 + 4) + -0x30 + iVar2;
  *param_2 = iVar1;
  return CONCAT31(uVar3,iVar2 <= iVar1);
}


//// FUNCTION FUN_00a8cc60 @ 00a8cc60 ////

void FUN_00a8cc60(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_1 + 2 != (undefined4 *)0x0) {
    param_1[2] = *param_3;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00a8cc90 @ 00a8cc90 ////

void __thiscall FUN_00a8cc90(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  iVar3 = 0;
  FUN_00a8ccf0(this,&param_2,param_2);
  while (-1 < param_2) {
    uVar1 = **(undefined4 **)(iVar2 + 4);
    iVar3 = iVar3 + param_2;
    FUN_00a8ccf0(this,&param_2,iVar2);
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = iVar3;
  return;
}


//// FUNCTION FUN_00a8ccf0 @ 00a8ccf0 ////

void __thiscall FUN_00a8ccf0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_c [3];
  
  piVar2 = FUN_00a8b260(this,local_c,param_2);
  iVar1 = *piVar2;
  if (-1 < iVar1) {
    piVar2 = (int *)FUN_00a8c8e0((void *)((int)this + 4),local_c,param_2);
    if (-1 < *piVar2) {
      *param_1 = *piVar2 + iVar1;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8cdd0 @ 00a8cdd0 ////

void __cdecl FUN_00a8cdd0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 local_c [2];
  int **local_8;
  int local_4;
  
  piVar1 = param_3;
  param_2 = (int *)*param_2;
  local_4 = *param_3;
  local_c[0] = param_2._0_2_;
  local_8 = &param_2;
  FUN_00a81370((int)local_c);
  pvVar2 = FUN_00a8c330(param_4);
  if (*(int **)((int)pvVar2 + 4) == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    piVar3 = (int *)(**(code **)(**(int **)((int)pvVar2 + 4) + 4))(&param_3,local_c);
    iVar5 = *piVar3;
  }
  FUN_00a81370((int)local_c);
  if ((iVar5 < 0) || (param_2 != (int *)*piVar1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *param_1 = (int)param_2;
  param_1[2] = iVar5;
  *(bool *)(param_1 + 1) = -1 < iVar5;
  *(undefined1 *)((int)param_1 + 5) = uVar4;
  return;
}


//// FUNCTION FUN_00a8cec0 @ 00a8cec0 ////

void __thiscall FUN_00a8cec0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8cf00(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a8cf00 @ 00a8cf00 ////

void __thiscall FUN_00a8cf00(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8cf60(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a8b460((void *)((int)this + 0x44),(int *)&local_4,iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8cf60 @ 00a8cf60 ////

void __thiscall FUN_00a8cf60(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_8 [2];
  
  iVar4 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  piVar5 = FUN_00a8b530(local_8,param_2);
  iVar2 = *piVar5;
  if (-1 < iVar2) {
    uVar3 = **(undefined4 **)(iVar4 + 4);
    **(undefined4 **)(iVar4 + 4) = uVar1;
    FUN_00a8cfd0(this,&param_2,iVar4);
    if ((param_2 < 0) || (param_2 < iVar2)) {
      **(undefined4 **)(iVar4 + 4) = uVar3;
      *param_1 = iVar2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8cfd0 @ 00a8cfd0 ////

int * __thiscall FUN_00a8cfd0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8d020(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 0x3c),iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8d020 @ 00a8d020 ////

int * __thiscall FUN_00a8d020(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8d070(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 0x34),iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8d070 @ 00a8d070 ////

int * __thiscall FUN_00a8d070(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8d0c0(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 0x2c),iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8d0c0 @ 00a8d0c0 ////

int * __thiscall FUN_00a8d0c0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8d110(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 0x24),iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8d110 @ 00a8d110 ////

int * __thiscall FUN_00a8d110(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8d160(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 0x1c),iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8d160 @ 00a8d160 ////

int * __thiscall FUN_00a8d160(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8d1b0(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 0x14),iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8d1b0 @ 00a8d1b0 ////

int * __thiscall FUN_00a8d1b0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8d200(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 0xc),iVar2);
  return param_1;
}


//// FUNCTION FUN_00a8d200 @ 00a8d200 ////

int * __thiscall FUN_00a8d200(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_8 [2];
  
  uVar1 = **(undefined4 **)(param_2 + 4);
  piVar2 = FUN_00a8b260(this,local_8,param_2);
  if (-1 < *piVar2) {
    *param_1 = *piVar2;
    return param_1;
  }
  **(undefined4 **)(param_2 + 4) = uVar1;
  FUN_00a88690(param_1,(undefined4 *)((int)this + 4),param_2);
  return param_1;
}


//// FUNCTION FUN_00a8d280 @ 00a8d280 ////

void __thiscall FUN_00a8d280(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8 [2];
  
  iVar1 = param_2;
  FUN_00a8d2e0(this,&param_2,param_2);
  if (-1 < param_2) {
    piVar2 = FUN_00a8b260((void *)((int)this + 0x20),local_8,iVar1);
    if (-1 < *piVar2) {
      *param_1 = *piVar2 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8d2e0 @ 00a8d2e0 ////

void __thiscall FUN_00a8d2e0(void *this,int *param_1,int param_2)

{
  int iVar1;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = this;
  FUN_00a8d340(this,&param_2,param_2);
  if (-1 < param_2) {
    FUN_00a8e060((void *)((int)this + 0x14),(int *)&local_4,iVar1);
    if (-1 < (int)local_4) {
      *param_1 = (int)local_4 + param_2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8d340 @ 00a8d340 ////

void __thiscall FUN_00a8d340(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_c [3];
  
  iVar1 = param_2;
  FUN_00a8c880(this,&param_2,param_2);
  iVar2 = param_2;
  if (-1 < param_2) {
    piVar3 = (int *)FUN_00a8d3a0((void *)((int)this + 0xc),local_c,iVar1);
    if (-1 < *piVar3) {
      *param_1 = *piVar3 + iVar2;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8d3a0 @ 00a8d3a0 ////

void __thiscall FUN_00a8d3a0(void *this,int *param_1,int param_2)

{
  int local_18;
  char local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a81370(param_2);
  FUN_00a8d450(&local_18,param_2);
  local_4 = 0;
  if (-1 < local_18) {
    (**(code **)((int)this + 4))(local_10);
  }
  *param_1 = local_18;
  *(undefined1 *)(param_1 + 1) = 0;
  if (local_14 != '\0') {
    if (param_1 + 2 != (int *)0x0) {
      param_1[2] = local_10;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a8d440 @ 00a8d440 ////

void __fastcall FUN_00a8d440(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a8d450 @ 00a8d450 ////

undefined4 * FUN_00a8d450(undefined4 *param_1,int param_2)

{
  FUN_00a8d480(param_1,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8d480 @ 00a8d480 ////

undefined4 * __cdecl FUN_00a8d480(undefined4 *param_1,int param_2)

{
  FUN_00a8d4b0(param_1,&DAT_010c9f50,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8d4b0 @ 00a8d4b0 ////

void __cdecl FUN_00a8d4b0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  char local_8;
  undefined4 local_4;
  
  FUN_00a81370(param_3);
  local_14 = *(undefined4 *)(param_3 + 4);
  local_10 = *(undefined4 *)(param_3 + 8);
  local_18[0] = (undefined2)param_3;
  FUN_00a8d520(&local_c,(float)local_18);
  *param_1 = local_c;
  *(undefined1 *)(param_1 + 1) = 0;
  if (local_8 != '\0') {
    if (param_1 + 2 != (undefined4 *)0x0) {
      param_1[2] = local_4;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}


//// FUNCTION FUN_00a8d520 @ 00a8d520 ////

undefined4 * FUN_00a8d520(undefined4 *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  float10 fVar6;
  float local_4c;
  int local_48;
  char local_44 [4];
  float local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [4];
  uint local_30;
  char local_2c;
  byte local_2b;
  int local_24;
  char local_20;
  float local_1c;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  fVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc884;
  local_c = ExceptionList;
  local_3c = 0;
  if (**(int **)((int)param_2 + 4) == *(int *)((int)param_2 + 8)) {
    param_2 = -NAN;
    ExceptionList = &local_c;
    *param_1 = 0xffffffff;
    FUN_00a8d900((undefined1 *)(param_1 + 1));
    local_4 = 0;
    FUN_00a8d920();
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = &local_c;
  local_3c = **(int **)((int)param_2 + 4);
  FUN_00a8da10(&local_30,(int)param_2);
  local_4 = 1;
  bVar4 = (local_2c == '\0') - 1U & local_2b;
  FUN_00a8db00(&local_24,fVar2);
  local_4._0_1_ = 2;
  if (local_20 == '\0') {
    local_4c = 0.0;
  }
  else {
    local_4c = local_1c;
  }
  param_2 = (float)CONCAT31(param_2._1_3_,-1 < local_24);
  local_38 = 0xffffffff;
  FUN_00a8d8f0(local_34);
  iVar5 = (((int)local_30 < 0) - 1 & local_30) + local_24;
  local_4._0_1_ = 3;
  if (bVar4 != 0) {
    local_4c = -local_4c;
  }
  piVar3 = FUN_00a8d980(&local_48,(int)fVar2);
  iVar1 = *piVar3;
  FUN_00a8d8a0(local_44);
  if (iVar1 < 0) {
    if (param_2._0_1_ == '\0') {
      *param_1 = 0xffffffff;
      param_2 = -NAN;
      *(undefined1 *)(param_1 + 1) = 0;
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_00a8d920();
      ExceptionList = local_c;
      return param_1;
    }
    piVar3 = FUN_00a8dd10(&local_48,(int)fVar2);
    local_4._0_1_ = 9;
  }
  else {
    FUN_00a8dce0(&local_48,fVar2);
    local_4._0_1_ = 5;
    if (local_48 < 0) {
      if (param_2._0_1_ == '\0') {
        *param_1 = 0xffffffff;
        param_2 = -NAN;
        *(undefined1 *)(param_1 + 1) = 0;
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_00a8d920();
        ExceptionList = local_c;
        return param_1;
      }
    }
    else {
      param_2 = (float)-local_48;
      fVar6 = (float10)FUN_00ace9b0();
      param_2 = (float)(fVar6 * (float10)local_40);
      FUN_00a8d870(local_44,&param_2);
      if (bVar4 == 0) {
        local_4c = local_40 + local_4c;
        iVar5 = iVar5 + 1 + local_48;
      }
      else {
        local_4c = local_4c - local_40;
        iVar5 = iVar5 + 1 + local_48;
      }
    }
    local_4._0_1_ = 3;
    piVar3 = FUN_00a8dd10(&local_48,(int)fVar2);
    local_4._0_1_ = 7;
  }
  local_38 = *piVar3;
  FUN_00a8d8b0(local_34,(char *)(piVar3 + 1));
  local_4._0_1_ = 3;
  if (-1 < local_38) {
    FUN_00a8de40(local_18,(int)fVar2);
    if (local_18[0] < 0) {
      *param_1 = 0xffffffff;
      local_48 = -1;
      *(undefined1 *)(param_1 + 1) = 0;
      local_4 = CONCAT31(local_4._1_3_,0xc);
      FUN_00a8d920();
      ExceptionList = local_c;
      return param_1;
    }
    fVar6 = (float10)FUN_00ace9b0();
    iVar5 = iVar5 + local_18[0] + local_38;
    local_4c = (float)(fVar6 * (float10)local_4c);
  }
  local_4._0_1_ = 3;
  FUN_00a8d950(param_1,iVar5,&local_4c);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a8d870 @ 00a8d870 ////

void __thiscall FUN_00a8d870(void *this,undefined4 *param_1)

{
  if (*(char *)this != '\0') {
    *(undefined4 *)((int)this + 4) = *param_1;
    return;
  }
  if ((undefined4 *)((int)this + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 4) = *param_1;
  }
  *(undefined1 *)this = 1;
  return;
}


//// FUNCTION FUN_00a8d8a0 @ 00a8d8a0 ////

void __fastcall FUN_00a8d8a0(char *param_1)

{
  if (*param_1 != '\0') {
    *param_1 = '\0';
  }
  return;
}


//// FUNCTION FUN_00a8d8b0 @ 00a8d8b0 ////

void __thiscall FUN_00a8d8b0(void *this,char *param_1)

{
  if (*(char *)this == '\0') {
    if (*param_1 != '\0') {
      if ((char *)((int)this + 1) != (char *)0x0) {
        *(char *)((int)this + 1) = param_1[1];
      }
      *(undefined1 *)this = 1;
    }
    return;
  }
  if (*param_1 != '\0') {
    *(char *)((int)this + 1) = param_1[1];
    return;
  }
  *(undefined1 *)this = 0;
  return;
}


//// FUNCTION FUN_00a8d8f0 @ 00a8d8f0 ////

void __fastcall FUN_00a8d8f0(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a8d900 @ 00a8d900 ////

void __fastcall FUN_00a8d900(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a8d910 @ 00a8d910 ////

void __fastcall FUN_00a8d910(char *param_1)

{
  if (*param_1 != '\0') {
    *param_1 = '\0';
  }
  return;
}


//// FUNCTION FUN_00a8d920 @ 00a8d920 ////

void FUN_00a8d920(void)

{
  return;
}


//// FUNCTION FUN_00a8d930 @ 00a8d930 ////

void __fastcall FUN_00a8d930(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a8d940 @ 00a8d940 ////

void __fastcall FUN_00a8d940(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a8d950 @ 00a8d950 ////

void FUN_00a8d950(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_1 + 2 != (undefined4 *)0x0) {
    param_1[2] = *param_3;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00a8d980 @ 00a8d980 ////

undefined4 * __cdecl FUN_00a8d980(undefined4 *param_1,int param_2)

{
  undefined1 local_5;
  undefined4 local_4;
  
  local_4 = 0;
  local_5 = 0x2e;
  FUN_00a8d9b0(&local_5,param_1,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8d9b0 @ 00a8d9b0 ////

undefined4 * __thiscall FUN_00a8d9b0(void *this,undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (((char *)**(undefined4 **)(param_2 + 4) != *(char **)(param_2 + 8)) &&
     (cVar1 = *(char *)**(undefined4 **)(param_2 + 4), param_2 = CONCAT31(param_2._1_3_,cVar1),
     cVar1 == *(char *)this)) {
    **(int **)(iVar2 + 4) = **(int **)(iVar2 + 4) + 1;
    FUN_00a8b2e0(param_1,1,(undefined1 *)&param_2);
    return param_1;
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8da10 @ 00a8da10 ////

undefined4 * __cdecl FUN_00a8da10(undefined4 *param_1,int param_2)

{
  FUN_00a8da40(param_1,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8da40 @ 00a8da40 ////

undefined4 * FUN_00a8da40(undefined4 *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = *(int **)(param_2 + 4);
  if (*piVar2 != *(int *)(param_2 + 8)) {
    cVar1 = *(char *)*piVar2;
    bVar3 = false;
    if ((cVar1 == '-') || (*(char *)*piVar2 == '+')) {
      **(int **)(param_2 + 4) = **(int **)(param_2 + 4) + 1;
      bVar3 = true;
    }
    param_2 = CONCAT31(param_2._1_3_,cVar1 == '-');
    if (bVar3) {
      FUN_00a8dad0(param_1,1,(undefined1 *)&param_2);
      return param_1;
    }
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8dad0 @ 00a8dad0 ////

void FUN_00a8dad0(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((undefined1 *)((int)param_1 + 5) != (undefined1 *)0x0) {
    *(undefined1 *)((int)param_1 + 5) = *param_3;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00a8db00 @ 00a8db00 ////

undefined4 * __cdecl FUN_00a8db00(undefined4 *param_1,float param_2)

{
  FUN_00a8db30(param_1,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8db30 @ 00a8db30 ////

undefined4 * FUN_00a8db30(undefined4 *param_1,float param_2)

{
  FUN_00a8db60(param_1,&param_2,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8db60 @ 00a8db60 ////

undefined4 * __cdecl FUN_00a8db60(undefined4 *param_1,undefined4 param_2,float param_3)

{
  FUN_00a8db90(param_1,param_3);
  return param_1;
}


//// FUNCTION FUN_00a8db90 @ 00a8db90 ////

undefined4 * FUN_00a8db90(undefined4 *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int local_4;
  
  fVar1 = param_2;
  if (**(int **)((int)param_2 + 4) != *(int *)((int)param_2 + 8)) {
    param_2 = 0.0;
    local_4 = 0;
    uVar2 = FUN_00a8dc10((int)fVar1,&param_2,&local_4);
    if ((char)uVar2 != '\0') {
      FUN_00a8d950(param_1,local_4,&param_2);
      return param_1;
    }
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8dc10 @ 00a8dc10 ////

uint __cdecl FUN_00a8dc10(int param_1,float *param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
  iVar4 = 0;
  if (pbVar1 != *(byte **)(param_1 + 8)) {
    do {
      iVar2 = _isdigit((uint)*pbVar1);
      if (iVar2 == 0) break;
      uVar3 = FUN_00a8dc80(param_1,param_2);
      if ((char)uVar3 == '\0') {
        return uVar3 & 0xffffff00;
      }
      iVar4 = iVar4 + 1;
      **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
      *param_3 = *param_3 + 1;
      pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
    } while (pbVar1 != *(byte **)(param_1 + 8));
  }
  return (uint)(iVar4 != 0);
}


//// FUNCTION FUN_00a8dc80 @ 00a8dc80 ////

uint __cdecl FUN_00a8dc80(int param_1,float *param_2)

{
  float fVar1;
  char *pcVar2;
  float fVar3;
  undefined4 in_EAX;
  uint uVar4;
  
  fVar1 = *param_2;
  fVar3 = *param_2 * 10.0;
  *param_2 = fVar3;
  uVar4 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                   (ushort)(fVar3 == fVar1) << 0xe);
  if (fVar3 >= fVar1) {
    pcVar2 = (char *)**(undefined4 **)(param_1 + 4);
    fVar1 = (float)(*pcVar2 + -0x30) + fVar3;
    *param_2 = fVar1;
    uVar4 = CONCAT22((short)((uint)pcVar2 >> 0x10),
                     (ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                     (ushort)(fVar1 == fVar3) << 0xe);
    if (fVar1 >= fVar3) {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}


//// FUNCTION FUN_00a8dce0 @ 00a8dce0 ////

undefined4 * __cdecl FUN_00a8dce0(undefined4 *param_1,float param_2)

{
  FUN_00a8db30(param_1,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8dd10 @ 00a8dd10 ////

undefined4 * __cdecl FUN_00a8dd10(undefined4 *param_1,int param_2)

{
  undefined1 local_5;
  undefined4 local_4;
  
  local_4 = 0;
  local_5 = 0x65;
  FUN_00a8dd40(&local_5,param_1,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8dd40 @ 00a8dd40 ////

undefined4 * __thiscall FUN_00a8dd40(void *this,undefined4 *param_1,int param_2)

{
  FUN_00a8dd70(param_1,this,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8dd70 @ 00a8dd70 ////

undefined4 * __cdecl FUN_00a8dd70(undefined4 *param_1,void *param_2,int param_3)

{
  undefined2 local_c [2];
  undefined4 local_8;
  undefined4 local_4;
  
  local_c[0] = (undefined2)param_3;
  local_8 = *(undefined4 *)(param_3 + 4);
  local_4 = *(undefined4 *)(param_3 + 8);
  FUN_00a8ddc0(param_2,param_1,(int)local_c);
  return param_1;
}


//// FUNCTION FUN_00a8ddc0 @ 00a8ddc0 ////

undefined4 * __thiscall FUN_00a8ddc0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if ((byte *)**(undefined4 **)(param_2 + 4) != *(byte **)(param_2 + 8)) {
    iVar2 = _tolower((uint)*(byte *)**(undefined4 **)(param_2 + 4));
    param_2 = CONCAT31(param_2._1_3_,(char)iVar2);
    if ((char)iVar2 == *(char *)this) {
      **(int **)(iVar1 + 4) = **(int **)(iVar1 + 4) + 1;
      FUN_00a8b2e0(param_1,1,(undefined1 *)&param_2);
      return param_1;
    }
  }
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8de40 @ 00a8de40 ////

undefined4 * __cdecl FUN_00a8de40(undefined4 *param_1,int param_2)

{
  FUN_00a8de70(param_1,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8de70 @ 00a8de70 ////

undefined4 * FUN_00a8de70(undefined4 *param_1,int param_2)

{
  FUN_00a8dea0(param_1,&param_2,param_2);
  return param_1;
}


//// FUNCTION FUN_00a8dea0 @ 00a8dea0 ////

undefined4 * __cdecl FUN_00a8dea0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  FUN_00a8ded0(param_1,param_3);
  return param_1;
}


//// FUNCTION FUN_00a8ded0 @ 00a8ded0 ////

undefined4 * FUN_00a8ded0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  float local_4;
  uint uVar5;
  
  iVar3 = param_2;
  piVar1 = *(int **)(param_2 + 4);
  if (*piVar1 == *(int *)(param_2 + 8)) goto LAB_00a8df78;
  local_4 = 0.0;
  iVar2 = *piVar1;
  param_2 = 0;
  cVar4 = *(char *)*piVar1;
  if ((cVar4 == '-') || (*(char *)*piVar1 == '+')) {
    **(int **)(iVar3 + 4) = **(int **)(iVar3 + 4) + 1;
    param_2 = 1;
    if (cVar4 != '-') goto LAB_00a8df33;
    uVar5 = FUN_00a8df90(iVar3,&local_4,&param_2);
    cVar4 = (char)uVar5;
  }
  else {
LAB_00a8df33:
    uVar5 = FUN_00a8dc10(iVar3,&local_4,&param_2);
    cVar4 = (char)uVar5;
  }
  if (cVar4 != '\0') {
    FUN_00a8d950(param_1,param_2,&local_4);
    return param_1;
  }
  **(int **)(iVar3 + 4) = iVar2;
LAB_00a8df78:
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_00a8df90 @ 00a8df90 ////

uint __cdecl FUN_00a8df90(int param_1,float *param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
  iVar4 = 0;
  if (pbVar1 != *(byte **)(param_1 + 8)) {
    do {
      iVar2 = _isdigit((uint)*pbVar1);
      if (iVar2 == 0) break;
      uVar3 = FUN_00a8e000(param_1,param_2);
      if ((char)uVar3 == '\0') {
        return uVar3 & 0xffffff00;
      }
      iVar4 = iVar4 + 1;
      **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
      *param_3 = *param_3 + 1;
      pbVar1 = (byte *)**(undefined4 **)(param_1 + 4);
    } while (pbVar1 != *(byte **)(param_1 + 8));
  }
  return (uint)(iVar4 != 0);
}


//// FUNCTION FUN_00a8e000 @ 00a8e000 ////

uint __cdecl FUN_00a8e000(int param_1,float *param_2)

{
  float fVar1;
  char *pcVar2;
  float fVar3;
  undefined4 in_EAX;
  uint uVar4;
  
  fVar1 = *param_2;
  fVar3 = *param_2 * 10.0;
  *param_2 = fVar3;
  uVar4 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)(fVar3 < fVar1) << 8 | (ushort)(NAN(fVar3) || NAN(fVar1)) << 10 |
                   (ushort)(fVar3 == fVar1) << 0xe);
  if (fVar3 < fVar1 || (fVar3 == fVar1) != 0) {
    pcVar2 = (char *)**(undefined4 **)(param_1 + 4);
    fVar1 = fVar3 - (float)(*pcVar2 + -0x30);
    *param_2 = fVar1;
    uVar4 = CONCAT22((short)((uint)pcVar2 >> 0x10),
                     (ushort)(fVar1 < fVar3) << 8 | (ushort)(NAN(fVar1) || NAN(fVar3)) << 10 |
                     (ushort)(fVar1 == fVar3) << 0xe);
    if (fVar1 < fVar3 || (fVar1 == fVar3) != 0) {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  return uVar4;
}


//// FUNCTION FUN_00a8e060 @ 00a8e060 ////

void __thiscall FUN_00a8e060(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  iVar3 = 0;
  FUN_00a8e0c0(this,&param_2,param_2);
  while (-1 < param_2) {
    uVar1 = **(undefined4 **)(iVar2 + 4);
    iVar3 = iVar3 + param_2;
    FUN_00a8e0c0(this,&param_2,iVar2);
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  *param_1 = iVar3;
  return;
}


//// FUNCTION FUN_00a8e0c0 @ 00a8e0c0 ////

void __thiscall FUN_00a8e0c0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_c [3];
  
  piVar2 = FUN_00a8b260(this,local_c,param_2);
  iVar1 = *piVar2;
  if (-1 < iVar1) {
    piVar2 = (int *)FUN_00a8d3a0((void *)((int)this + 4),local_c,param_2);
    if (-1 < *piVar2) {
      *param_1 = *piVar2 + iVar1;
      return;
    }
  }
  *param_1 = -1;
  return;
}


//// FUNCTION FUN_00a8e120 @ 00a8e120 ////

int * __cdecl FUN_00a8e120(int *param_1,char *param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  char *local_4;
  
  cVar2 = *param_2;
  local_4 = param_2;
  while (cVar2 != '\0') {
    pcVar1 = local_4 + 1;
    local_4 = local_4 + 1;
    cVar2 = *pcVar1;
  }
  FUN_00a8cdd0(param_1,(int *)&param_2,(int *)&local_4,param_3);
  return param_1;
}


//// FUNCTION FUN_00a8e190 @ 00a8e190 ////

int * __thiscall FUN_00a8e190(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8e200(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  piVar3 = *(int **)(*(int *)((int)this + 0x18) + 4);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 4))(&param_2,iVar2);
    *unaff_EBX = *piVar3;
    return unaff_EBX;
  }
  *param_1 = -1;
  return param_1;
}


//// FUNCTION FUN_00a8e200 @ 00a8e200 ////

int * __thiscall FUN_00a8e200(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8e270(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  piVar3 = *(int **)(*(int *)((int)this + 0x14) + 4);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 4))(&param_2,iVar2);
    *unaff_EBX = *piVar3;
    return unaff_EBX;
  }
  *param_1 = -1;
  return param_1;
}


//// FUNCTION FUN_00a8e270 @ 00a8e270 ////

int * __thiscall FUN_00a8e270(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8e2e0(this,&param_2,param_2);
  if (-1 < param_2) {
    *param_1 = param_2;
    return param_1;
  }
  **(undefined4 **)(iVar2 + 4) = uVar1;
  piVar3 = *(int **)(*(int *)((int)this + 0x10) + 4);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 4))(&param_2,iVar2);
    *unaff_EBX = *piVar3;
    return unaff_EBX;
  }
  *param_1 = -1;
  return param_1;
}


//// FUNCTION FUN_00a8e2e0 @ 00a8e2e0 ////

void __thiscall FUN_00a8e2e0(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_c [3];
  
  iVar2 = param_2;
  uVar1 = **(undefined4 **)(param_2 + 4);
  FUN_00a8b1f0(this,&param_2,param_2);
  if (param_2 < 0) {
    **(undefined4 **)(iVar2 + 4) = uVar1;
    piVar3 = (int *)FUN_00a8d3a0((void *)((int)this + 8),local_c,iVar2);
    param_2 = *piVar3;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00a8e330 @ 00a8e330 ////

undefined4 __cdecl FUN_00a8e330(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_55;
  void *local_54 [2];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfc8a8;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_4c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  uVar3 = FUN_009d3660(&local_4c,(uint *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((char)uVar3 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  DAT_010c9d88 = 0;
  local_55 = 0;
  if ((DAT_010c9dd0 == 0) ||
     ((uint)(DAT_010c9dd8 - DAT_010c9dd0) <= (uint)((int)DAT_010c9dd4 - DAT_010c9dd0))) {
    FUN_0096b710(&DAT_010c9dcc,DAT_010c9dd4,1,&local_55);
  }
  else {
    *DAT_010c9dd4 = 0;
    DAT_010c9dd4 = DAT_010c9dd4 + 1;
  }
  FUN_00a8b5a0((int)local_2c);
  local_4 = 1;
  piVar4 = FUN_00a82f00(local_54,param_1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00a8e120((int *)&local_4c,(char *)*piVar4,(int)local_2c,&DAT_010c9d94);
                    /* WARNING: Subroutine does not return */
  _free(local_54[0]);
}


//// FUNCTION FUN_00a8e5c0 @ 00a8e5c0 ////

undefined4 * __thiscall FUN_00a8e5c0(void *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  char local_84 [20];
  void *local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfc8f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  local_90 = local_84;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_84[0] = '\0';
  local_8c = 0;
  local_88 = 0x14;
  local_70 = this;
  _strncpy(local_90,"Data\\FX\\final\\",0xe);
  local_8c = 0xe;
  local_90[0xe] = '\0';
  FUN_004312e0(local_6c,&local_90,param_1);
  puVar4 = FUN_004312e0(local_4c,local_6c,".par");
  local_4._0_1_ = 3;
  uVar5 = FUN_00a8e330((char *)*puVar4);
  *(undefined4 *)((int)this + 0x20) = uVar5;
  local_4._0_1_ = 2;
  uVar3 = (undefined1)local_4;
  local_4._0_1_ = 2;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (*(int *)((int)this + 0x20) == 0) {
    if (DAT_0105be08 == 0) {
      puVar4 = FUN_004312e0(local_2c,&local_90,"minspec\\");
      puVar4 = FUN_004312e0(local_4c,puVar4,param_1);
      local_4._0_1_ = 5;
      puVar4 = FUN_00a859c0(puVar4);
      *(undefined4 **)((int)this + 0x20) = puVar4;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      local_4._0_1_ = 2;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      uVar3 = (undefined1)local_4;
      if (*(int *)((int)this + 0x20) != 0) goto LAB_00a8e725;
    }
    local_4._0_1_ = 2;
    puVar4 = FUN_00a859c0(local_6c);
    *(undefined4 **)((int)this + 0x20) = puVar4;
    uVar3 = (undefined1)local_4;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = operator_new(0x10);
      *(undefined4 **)((int)this + 0x20) = puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      goto LAB_00a8e7be;
    }
  }
LAB_00a8e725:
  local_4._0_1_ = uVar3;
  iVar2 = *(int *)((int)this + 0x20);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    pcVar6 = param_2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(this,param_2,(int)pcVar6 - (int)(param_2 + 1));
  }
  if (*(char *)(iVar2 + 0xd) == '\0') {
    *(undefined1 *)(iVar2 + 0xd) = 0x80;
  }
  if (*(char *)(iVar2 + 0xe) == '\0') {
    *(undefined1 *)(iVar2 + 0xe) = 0x20;
  }
  FUN_00a82eb0((int)this);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
LAB_00a8e7be:
  if (local_88 < 0x15) {
    ExceptionList = local_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_90);
}


