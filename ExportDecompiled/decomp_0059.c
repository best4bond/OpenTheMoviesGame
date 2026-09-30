//// FUNCTION FUN_00bb00e8 @ 00bb00e8 ////

undefined4 __thiscall FUN_00bb00e8(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_8;
  
  uVar3 = *(uint *)((int)this + 0x114);
  local_8 = uVar3;
  if (uVar3 == 0) {
    local_8 = 0x400;
  }
  if (local_8 < (uint)(*(int *)((int)this + 0x110) + param_1)) {
    do {
      local_8 = local_8 * 2;
    } while (local_8 < (uint)(param_1 + *(int *)((int)this + 0x110)));
  }
  if (local_8 == uVar3) {
    uVar2 = 0;
  }
  else {
    puVar1 = operator_new(local_8 << 2);
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)((int)this + 0x10c);
      for (uVar3 = *(uint *)((int)this + 0x110) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar1 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x10c));
    }
    uVar2 = 0x8007000e;
  }
  return uVar2;
}


//// FUNCTION FUN_00bb0190 @ 00bb0190 ////

int __thiscall
FUN_00bb0190(void *this,int param_1,uint *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)((int)this + 0x88) == iVar2) {
    local_8 = *(uint *)(param_1 + 0xc);
    local_c = 0;
    if (*(uint *)((int)this + 0x2c) <= local_8) {
      pcVar3 = "maximum temp register index exceeded";
      iVar2 = 0x1199;
LAB_00bb0270:
      FUN_00b7112e((int)this,*(int *)(*(int *)((int)this + 0x100) + 0x3c),iVar2,pcVar3);
      return -0x7789f4a7;
    }
    uVar1 = *(uint *)((int)this + 0x50);
    if ((uVar1 != 0) && (uVar1 <= local_8)) {
      local_8 = local_8 - uVar1;
      local_c = 3;
    }
  }
  else if (*(int *)((int)this + 0x8c) == iVar2) {
    local_8 = *(uint *)(param_1 + 0xc);
    local_c = 3;
    if (local_8 != 0) {
      pcVar3 = "maximum address register index exceeded";
      iVar2 = 0x119c;
      goto LAB_00bb0270;
    }
  }
  else if (*(int *)((int)this + 0x84) == iVar2) {
    iVar2 = (**(code **)(*(int *)this + 0x84))(param_1,&local_8,&local_c,param_4);
    if (iVar2 < 0) {
      return -0x7fffbffb;
    }
  }
  else {
    if (*(int *)((int)this + 0x90) != iVar2) {
      FUN_00b7112e((int)this,0,0,"internal error: unexpected output register type");
      return -0x7fffbffb;
    }
    local_8 = *(uint *)(param_1 + 0xc);
    local_c = 0x13;
    if (*(uint *)((int)this + 0x34) <= local_8) {
      pcVar3 = "maximum predicate register index exceeded";
      iVar2 = 0x11c5;
      goto LAB_00bb0270;
    }
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = ((local_c | 0xfffffff8) << 0x14 | local_c & 0x18) << 8 | local_8 & 0x7ff;
  }
  iVar2 = (**(code **)(*(int *)this + 0x7c))(param_1,param_3);
  if (-1 < iVar2) {
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00bb02e5 @ 00bb02e5 ////

undefined4 __thiscall FUN_00bb02e5(void *this,int *param_1,uint param_2,uint *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  uVar3 = *(uint *)(*(int *)(*(int *)((int)this + 0x14) + *param_1 * 4) + 0x3c);
  local_c = 0;
  local_8 = 0;
  if ((uVar3 & 0x400) == 0) {
    if ((uVar3 & 0x800) == 0) {
      if ((uVar3 & 0x1000) == 0) {
        if ((uVar3 & 0x2000) == 0) {
          if ((uVar3 & 0x4000) == 0) {
            if ((char)(uVar3 >> 8) < '\0') {
              local_8 = 0xd000000;
            }
          }
          else {
            local_8 = 0xe000000;
          }
        }
        else {
          local_8 = 0xf000000;
        }
      }
      else {
        local_8 = 0x3000000;
      }
    }
    else {
      local_8 = 0x2000000;
    }
  }
  else {
    local_8 = 0x1000000;
  }
  if ((uVar3 & 0x200) != 0) {
    local_8 = CONCAT13(local_8._3_1_,0x100000);
  }
  if (param_4 == 0) {
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x14) + param_1[uVar3] * 4) + 0x10);
        uVar4 = 0;
        if (iVar2 == 0) {
          uVar4 = 0x10000;
        }
        else if (iVar2 == 1) {
          uVar4 = 0x20000;
        }
        else if (iVar2 == 2) {
          uVar4 = 0x40000;
        }
        else if (iVar2 == 3) {
          uVar4 = 0x80000;
        }
        if ((local_c & uVar4) != 0) {
          FUN_00b7112e((int)this,*(int *)(*(int *)((int)this + 0x100) + 0x3c),0x12d5,
                       "internal error: overlapping output writes");
        }
        local_c = local_c | uVar4;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
  }
  else {
    local_c = 0xf0000;
  }
  uVar3 = 0;
  if ((*(byte *)((int)this + 0x6e) & 0x80) != 0) {
    if ((local_c & 0x80000) == 0) {
      local_c = 0x70000;
    }
    else if ((local_c & 0x70000) != 0) {
      local_c = 0xf0000;
    }
  }
  if ((((*(byte *)((int)this + 0xcc) & 1) != 0) && (*(int *)((int)this + 0x124) != 0)) &&
     (param_2 != 0)) {
    do {
      piVar1 = param_1 + uVar3;
      iVar2 = uVar3 + *(int *)((int)this + 0x128) * 6;
      uVar3 = uVar3 + 1;
      *(int *)(*(int *)((int)this + 0x124) + -0x10 + iVar2 * 4) = *piVar1;
    } while (uVar3 < param_2);
  }
  *param_3 = local_8 | local_c;
  return 0;
}


//// FUNCTION FUN_00bb0447 @ 00bb0447 ////

undefined4 __thiscall FUN_00bb0447(void *this,int param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  *param_3 = 1;
  uVar1 = *(uint *)(param_1 + 0xc);
  *param_2 = uVar1;
  if (uVar1 < *(uint *)((int)this + 0x28)) {
    uVar2 = 0;
  }
  else {
    FUN_00b7112e((int)this,*(int *)(*(int *)((int)this + 0x100) + 0x3c),0x119a,
                 "maximum input register index exceeded");
    uVar2 = 0x80004005;
  }
  return uVar2;
}


//// FUNCTION FUN_00bb048e @ 00bb048e ////

int __thiscall FUN_00bb048e(void *this,uint param_1,uint *param_2,undefined4 *param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *local_c;
  undefined *local_8;
  
  uVar2 = param_1;
  local_8 = this;
  if (*(int *)((int)this + 0x88) == *(int *)(param_1 + 4)) {
    local_c = *(void **)(param_1 + 0xc);
    param_1 = 0;
    if (local_c < *(void **)((int)this + 0x2c)) {
      pvVar1 = *(void **)((int)this + 0x50);
      if ((pvVar1 != (void *)0x0) && (pvVar1 <= local_c)) {
        local_c = (void *)((int)local_c - (int)pvVar1);
        param_1 = 3;
      }
      goto LAB_00bb0532;
    }
    pcVar6 = "maximum temp register index exceeded";
LAB_00bb04c7:
    iVar4 = 0x1199;
LAB_00bb065c:
    FUN_00b7112e((int)this,*(int *)(*(int *)((int)this + 0x100) + 0x3c),iVar4,pcVar6);
    return -0x7789f4a7;
  }
  uVar3 = *(uint *)(*(int *)(*(int *)((int)this + 0x10) + *(int *)(param_1 + 4) * 4) + 4);
  if (((uVar3 & 0x10) == 0) || ((uVar3 & 4) == 0)) {
    local_c = this;
    if (((uVar3 & 0x10) != 0) && ((uVar3 & 0x200) == 0)) {
      iVar4 = (**(code **)(*(int *)this + 0x88))(param_1,&local_c,&param_1);
      if (iVar4 < 0) {
        return iVar4;
      }
      goto LAB_00bb0532;
    }
    if (((uVar3 & 0x200) != 0) && ((uVar3 & 0x42080) == 0)) {
      local_c = *(void **)(param_1 + 0xc);
      if (*(void **)((int)this + 0x38) <= local_c) {
        pcVar6 = 
        "maximum constant register index exceeded - Try reducing number of constants referenced";
        iVar4 = 0x119b;
        goto LAB_00bb065c;
      }
      if (local_c < (void *)0x800) {
        param_1 = 2;
      }
      else if (local_c < (void *)0x1000) {
        param_1 = 0xb;
      }
      else {
        param_1 = 0xd - (local_c < (void *)0x1800);
      }
      local_c = (void *)((uint)local_c & 0x7ff);
      goto LAB_00bb0532;
    }
    if ((uVar3 & 0x200) != 0) {
      if (-1 < (char)uVar3) {
        if ((uVar3 & 0x2000) != 0) {
          local_c = *(void **)(param_1 + 0xc);
          param_1 = 0xe;
          if (*(void **)((int)this + 0x60) <= local_c) {
            pcVar6 = "maximum bool register index exceeded";
            iVar4 = 0x1194;
            goto LAB_00bb065c;
          }
          goto LAB_00bb0532;
        }
        goto LAB_00bb05e5;
      }
LAB_00bb05e9:
      local_c = *(void **)(param_1 + 0xc);
      param_1 = 10;
      if (*(void **)((int)this + 0x4c) <= local_c) {
        pcVar6 = "maximum sampler register index exceeded";
        goto LAB_00bb04c7;
      }
      goto LAB_00bb0532;
    }
LAB_00bb05e5:
    if ((char)uVar3 < '\0') goto LAB_00bb05e9;
    if ((uVar3 & 0x40000) != 0) {
      local_c = *(void **)(param_1 + 0xc);
      param_1 = 7;
      if (*(void **)((int)this + 0x40) <= local_c) {
        pcVar6 = "maximum loop register index exceeded";
        goto LAB_00bb04c7;
      }
      goto LAB_00bb0532;
    }
    if (*(int *)((int)this + 0x90) == *(int *)(param_1 + 4)) {
      local_c = *(void **)(param_1 + 0xc);
      param_1 = 0x13;
      if (*(void **)((int)this + 0x34) <= local_c) {
        pcVar6 = "maximum predicate register index exceeded";
        iVar4 = 0x11c5;
        goto LAB_00bb065c;
      }
      goto LAB_00bb0532;
    }
    pcVar6 = "internal error: unexpected input register type";
    iVar5 = 0;
    iVar4 = 0;
LAB_00bb0772:
    FUN_00b7112e((int)this,iVar4,iVar5,pcVar6);
    iVar4 = -0x7fffbffb;
  }
  else {
    param_1 = 0xf;
    local_c = (void *)0x0;
LAB_00bb0532:
    local_8 = (undefined *)0x0;
    uVar3 = *(uint *)(uVar2 + 0x3c) & 0x1f0000;
    if (uVar3 == 0x100000) {
      local_8 = (undefined *)0xb000000;
    }
    else if (uVar3 == 0x180000) {
      local_8 = (undefined *)0xc000000;
    }
    else if (uVar3 == 0x80000) {
      local_8 = &DAT_01000000;
    }
    else if (uVar3 == 0x20000) {
      local_8 = (undefined *)0x2000000;
    }
    else if (uVar3 == 0xa0000) {
      local_8 = (undefined *)0x3000000;
    }
    else if (uVar3 == 0x60000) {
      local_8 = (undefined *)0x4000000;
    }
    else if (uVar3 == 0xe0000) {
      local_8 = (undefined *)0x5000000;
    }
    else if (uVar3 == 0x10000) {
      local_8 = (undefined *)0x6000000;
    }
    else if (uVar3 == 0x40000) {
      local_8 = (undefined *)0x7000000;
    }
    else if (uVar3 == 0xc0000) {
      local_8 = (undefined *)0x8000000;
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = ((param_1 | 0xfffffff8) << 0x14 | param_1 & 0x18) << 8 | (uint)local_c & 0x7ff |
                 (uint)local_8;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(uVar2 + 8);
    }
    if (*(int *)(uVar2 + 8) != -1) {
      if (*(int *)((int)this + 0x154) == 0) {
        pcVar6 = "target does not support relative addressing";
        iVar5 = 0x119f;
        iVar4 = *(int *)(*(int *)((int)this + 0x100) + 0x3c);
        goto LAB_00bb0772;
      }
      *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) | 0x20;
    }
    iVar4 = 0;
  }
  return iVar4;
}


//// FUNCTION FUN_00bb08e8 @ 00bb08e8 ////

undefined4 __thiscall FUN_00bb08e8(void *this,int *param_1,uint param_2,uint param_3,uint *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_28 [4];
  int local_18 [4];
  int local_8;
  
  iVar3 = *param_1;
  iVar4 = *(int *)((int)this + 0x14);
  local_8 = *(int *)(iVar4 + iVar3 * 4);
  if ((*(byte *)(*(int *)(*(int *)((int)this + 0x10) + *(int *)(local_8 + 4) * 4) + 4) & 0x80) != 0)
  {
    *param_4 = 0xe40000;
    return 0;
  }
  bVar9 = (param_3 & 0x10000) != 0;
  if (bVar9) {
    local_18[0] = 0;
  }
  uVar7 = (uint)bVar9;
  if ((param_3 & 0x20000) != 0) {
    local_18[uVar7] = 1;
    uVar7 = uVar7 + 1;
  }
  if ((param_3 & 0x40000) != 0) {
    local_18[uVar7] = 2;
    uVar7 = uVar7 + 1;
  }
  if ((param_3 & 0x80000) != 0) {
    local_18[uVar7] = 3;
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < param_2) {
    param_2 = uVar7;
  }
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      if (*(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar3 * 4) + 0x10) !=
          *(int *)(*(int *)(*(int *)((int)this + 0x14) + param_1[uVar7] * 4) + 0x10)) break;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
    if (uVar7 < param_2) {
      uVar7 = 0;
      do {
        local_28[uVar7] = uVar7;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 4);
      goto LAB_00bb09b0;
    }
  }
  local_28[0] = *(uint *)(local_8 + 0x10);
  local_28[1] = local_28[0];
  local_28[2] = local_28[0];
  local_28[3] = local_28[0];
LAB_00bb09b0:
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      piVar2 = local_18 + uVar7;
      piVar1 = param_1 + uVar7;
      uVar7 = uVar7 + 1;
      local_28[*piVar2] = *(uint *)(*(int *)(iVar4 + *piVar1 * 4) + 0x10);
    } while (uVar7 < param_2);
  }
  uVar8 = 0;
  uVar7 = 0x10;
  puVar6 = local_28;
  do {
    uVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    uVar8 = uVar8 | uVar5 << ((byte)uVar7 & 0x1f);
    uVar7 = uVar7 + 2;
  } while (uVar7 < 0x18);
  *param_4 = uVar8;
  return 0;
}


//// FUNCTION FUN_00bb09fe @ 00bb09fe ////

undefined4 __thiscall FUN_00bb09fe(void *this,int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != -1) {
    iVar1 = *(int *)(*(int *)((int)this + 0x14) + *(int *)(param_1 + 0x14) * 4);
    if ((*(byte *)(*(int *)(*(int *)((int)this + 0x10) + *(int *)(iVar1 + 4) * 4) + 4) & 8) != 0) {
      iVar2 = *(int *)(iVar1 + 0x10);
      uVar4 = *(uint *)(iVar1 + 0xc) & 0x7ff;
      uVar3 = uVar4 | 0xb0001000;
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          uVar3 = uVar4 | 0xb0551000;
        }
        else if (iVar2 == 2) {
          uVar3 = uVar4 | 0xb0aa1000;
        }
        else if (iVar2 == 3) {
          uVar3 = uVar4 | 0xb0ff1000;
        }
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar3 = uVar3 | 0xd000000;
      }
    }
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3;
  }
  return 0;
}


//// FUNCTION FUN_00bb0a74 @ 00bb0a74 ////

void __thiscall
FUN_00bb0a74(void *this,uint param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  piVar4 = (int *)0x0;
  bVar3 = false;
  if (param_5 != (int *)0x0) {
    do {
      if (*(int *)((int)this + 0x150) == *(int *)(param_4 + (int)piVar4 * 4)) {
        bVar3 = true;
      }
      piVar4 = (int *)((int)piVar4 + 1);
    } while (piVar4 < param_5);
  }
  if ((*(uint *)((int)this + 0x14c) <= param_1) || (bVar3)) {
    *(undefined4 *)((int)this + 0x13c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x140) = 0xffffffff;
    *(undefined4 *)((int)this + 0x144) = 0xffffffff;
    *(undefined4 *)((int)this + 0x148) = 0xffffffff;
    local_8 = operator_new(*(int *)((int)this + 0x2c) << 2);
    if (local_8 == (undefined4 *)0x0) goto LAB_00bb0c94;
    puVar8 = local_8;
    for (uVar6 = *(uint *)((int)this + 0x2c) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    uVar6 = 0;
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    if (*(int *)((int)this + 8) != 0) {
      do {
        iVar7 = *(int *)(*(int *)((int)this + 0x14) + uVar6 * 4);
        if (((*(int *)((int)this + 0x88) == *(int *)(iVar7 + 4)) && (*(int *)(iVar7 + 8) == -1)) &&
           (*(uint *)(iVar7 + 0xc) < *(uint *)((int)this + 0x2c))) {
          if ((*(uint *)(iVar7 + 0x48) < param_1) && (param_1 <= *(uint *)(iVar7 + 0x58))) {
            local_8[*(uint *)(iVar7 + 0xc)] = 0;
          }
          uVar1 = *(uint *)(iVar7 + 0x48);
          if ((param_1 <= uVar1) && (uVar1 < (uint)local_8[*(int *)(iVar7 + 0xc)])) {
            local_8[*(int *)(iVar7 + 0xc)] = uVar1;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((int)this + 8));
    }
    uVar6 = 0;
    *(undefined4 *)((int)this + 0x150) = 0;
    *(undefined4 *)((int)this + 0x14c) = 0;
    if (*(int *)((int)this + 0x2c) != 0) {
      do {
        piVar4 = (int *)0x0;
        if (param_5 == (int *)0x0) {
LAB_00bb0b76:
          if (*(uint *)((int)this + 0x14c) < (uint)local_8[uVar6]) {
            *(uint *)((int)this + 0x150) = uVar6;
            *(undefined4 *)((int)this + 0x14c) = local_8[uVar6];
          }
        }
        else {
          do {
            if (uVar6 == *(uint *)(param_4 + (int)piVar4 * 4)) break;
            piVar4 = (int *)((int)piVar4 + 1);
          } while (piVar4 < param_5);
          if (param_5 <= piVar4) goto LAB_00bb0b76;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((int)this + 0x2c));
    }
    if (*(uint *)((int)this + 0x14c) <= param_1) {
      *(undefined4 *)((int)this + 0x14c) = 0xffffffff;
      *(int *)((int)this + 0x150) = *(int *)((int)this + 0x2c);
    }
  }
  param_4 = 0;
  iVar7 = (-(uint)(param_3 != 1) & 0xfffffffd) + 3;
  if (param_3 != 0) {
    param_5 = (int *)((int)this + iVar7 * 4 + 0x13c);
    do {
      if (*param_5 != -1) {
        *(uint *)(*(int *)(*(int *)((int)this + 0x14) + *param_5 * 4) + 0x50) = param_1;
      }
      iVar5 = FUN_00b6c1b2(this,*(undefined4 *)((int)this + 0x88),*(undefined4 *)((int)this + 0x150)
                           ,iVar7,0);
      *param_5 = iVar5;
      if (iVar5 == -1) break;
      iVar5 = *(int *)(*(int *)((int)this + 0x14) + iVar5 * 4);
      *(undefined4 *)(iVar5 + 0x3c) = 0;
      *(undefined4 *)(iVar5 + 0x30) = 0;
      *(uint *)(iVar5 + 0x48) = param_1;
      *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)((int)this + 0x14c);
      *(uint *)(iVar5 + 0x54) = param_1;
      *(uint *)(iVar5 + 0x58) = param_1;
      *(undefined4 *)(iVar5 + 0x5c) = 1;
      iVar2 = *(int *)(*(int *)((int)this + 0x18) + param_1 * 4);
      if (*(int *)(iVar2 + 0xc) != 0) {
        *(undefined4 *)(iVar5 + 0x18) =
             *(undefined4 *)
              (*(int *)(*(int *)((int)this + 0x14) + **(int **)(iVar2 + 0x10) * 4) + 0x18);
        *(undefined4 *)(iVar5 + 0x14) =
             *(undefined4 *)
              (*(int *)(*(int *)((int)this + 0x14) +
                       **(int **)(*(int *)(*(int *)((int)this + 0x18) + param_1 * 4) + 0x10) * 4) +
              0x14);
      }
      if (param_2 != 0) {
        *(int *)(param_2 + param_4 * 4) = *param_5;
      }
      param_5 = param_5 + 1;
      iVar7 = iVar7 + 1;
      param_4 = param_4 + 1;
    } while (param_4 < param_3);
  }
LAB_00bb0c94:
                    /* WARNING: Subroutine does not return */
  _free(local_8);
}


//// FUNCTION FUN_00bb0cad @ 00bb0cad ////

undefined4 __fastcall FUN_00bb0cad(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(param_1 + 0x1b0);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x11c);
    if ((uVar2 < *(uint *)(param_1 + 0x110)) && (*(int *)(param_1 + 0xd4) == 0)) {
      local_c = 0;
      local_8 = 0;
      if ((*(int *)(param_1 + 0x100) != 0) &&
         ((iVar3 = *(int *)(*(int *)(param_1 + 0x100) + 0x3c), iVar3 != 0 &&
          (*(int *)(iVar3 + 4) == 0xd)))) {
        local_c = *(undefined4 *)(iVar3 + 0x40);
        local_8 = *(undefined4 *)(iVar3 + 0x44);
      }
      uVar4 = (**(code **)(*piVar1 + 0x10))
                        (piVar1,local_c,local_8,*(int *)(param_1 + 0x10c) + uVar2 * 4,
                         *(uint *)(param_1 + 0x110) - uVar2);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x110);
      return uVar4;
    }
  }
  return 0;
}


//// FUNCTION FUN_00bb0d36 @ 00bb0d36 ////

undefined4
FUN_00bb0d36(undefined4 param_1,int param_2,short param_3,int param_4,undefined4 param_5,int param_6
            )

{
  int iVar1;
  undefined1 local_24 [16];
  undefined4 local_14;
  int local_10;
  
  if (param_2 == -1) {
    if (((*(int *)(param_6 + 0x100) != 0) &&
        (iVar1 = *(int *)(*(int *)(param_6 + 0x100) + 0x3c), iVar1 != 0)) &&
       (*(int *)(iVar1 + 4) == 0xd)) {
      param_1 = *(undefined4 *)(iVar1 + 0x40);
      param_2 = *(int *)(iVar1 + 0x44);
      if (param_2 != -1) goto LAB_00bb0d73;
    }
    param_2 = 0;
  }
LAB_00bb0d73:
  local_14 = param_1;
  if ((param_3 == 2) || (param_3 == 6)) {
    local_10 = param_2;
    FUN_00b33674(*(void **)(param_6 + 0xc4),(int)local_24,param_4 + 5000,"%s");
    *(undefined4 *)(param_6 + 0xd4) = 1;
  }
  return 0;
}


//// FUNCTION FUN_00bb0de0 @ 00bb0de0 ////

undefined4 __thiscall FUN_00bb0de0(void *this,void *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  void *_Base;
  undefined4 *puVar3;
  uint uVar4;
  char local_3c [32];
  char local_1c [16];
  void *local_c;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  local_c = (void *)0x0;
  if (*(int *)((int)this + 0x158) == 0) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x1d0) + *(int *)((int)this + 0x1f0) + *(int *)((int)this + 500);
  if (iVar2 != 0) {
    local_c = operator_new(iVar2 * 4);
    if (local_c == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    else {
      if (*(int *)((int)this + 0x2c) != 0) {
        do {
          _sprintf(local_3c,"r_$Int%d",uVar4);
          local_8 = FUN_00b361aa((void *)((int)this + 0x1b4),local_3c,uVar4,1);
          if (local_8 < 0) goto LAB_00bb0f88;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((int)this + 0x2c));
      }
      _Base = local_c;
      FUN_00b3462f((void *)((int)this + 0x1b4),(int)local_c);
      iVar2 = *(int *)((int)this + 0x1d0) + *(int *)((int)this + 500);
      FUN_00b3462f((void *)((int)this + 0x1d4),(int)((int)_Base + iVar2 * 4));
      uVar4 = iVar2 + *(int *)((int)this + 0x1f0);
      _qsort(_Base,uVar4,4,FUN_00b35aba);
      local_1c[0] = '\x01';
      local_1c[1] = '\0';
      local_1c[2] = '\x03';
      local_1c[3] = '\0';
      local_1c[4] = '\x01';
      local_1c[5] = '\0';
      local_1c[6] = '\x04';
      local_1c[7] = '\0';
      local_1c[8] = '\x01';
      local_1c[9] = '\0';
      local_1c[10] = '\0';
      local_1c[0xb] = '\0';
      local_1c[0xc] = '\0';
      local_1c[0xd] = '\0';
      local_1c[0xe] = '\0';
      local_1c[0xf] = '\0';
      puVar3 = (undefined4 *)(param_2 + param_3 * 0x14);
      param_3 = 0;
      if (uVar4 != 0) {
        do {
          piVar1 = (int *)((int)_Base + param_3 * 4);
          local_8 = FUN_00b6a154(param_1,*(char **)*piVar1,(char *)0xffffffff,7,puVar3);
          if ((local_8 < 0) ||
             (local_8 = FUN_00b6a154(param_1,local_1c,&DAT_00000010,6,puVar3 + 3), local_8 < 0))
          goto LAB_00bb0f88;
          if (*(int *)(*piVar1 + 0xc) != 0) {
            *(byte *)((int)puVar3 + 10) = *(byte *)((int)puVar3 + 10) | 1;
            local_8 = FUN_00b6a154(param_1,(char *)(*piVar1 + 0x10),&DAT_00000010,7,puVar3 + 4);
            if (local_8 < 0) goto LAB_00bb0f88;
          }
          param_3 = param_3 + 1;
          *(undefined2 *)(puVar3 + 1) = 2;
          *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)(*piVar1 + 4);
          *(undefined2 *)(puVar3 + 2) = 1;
          puVar3 = puVar3 + 5;
          _Base = local_c;
        } while (param_3 < uVar4);
      }
      local_8 = 0;
    }
  }
LAB_00bb0f88:
                    /* WARNING: Subroutine does not return */
  _free(local_c);
}


//// FUNCTION FUN_00bb0f9a @ 00bb0f9a ////

undefined4 __thiscall FUN_00bb0f9a(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  char *local_c;
  char *local_8;
  
  local_8 = (char *)0x0;
  local_c = (char *)0x0;
  if (*(int *)((int)this + 0x158) == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  pcVar7 = (char *)0x0;
  local_10 = this;
  if (iVar2 != 0) {
    do {
      iVar1 = *(int *)(iVar2 + 8);
      pcVar6 = pcVar7;
      if (*(int *)(iVar1 + 4) == 0x11) {
        pbVar4 = (byte *)0x0;
        if (*(int *)(iVar1 + 0x10) != 0) {
          pbVar4 = *(byte **)(*(int *)(iVar1 + 0x10) + 0x18);
        }
        if (*(int *)(iVar1 + 0x14) == 0) {
          pcVar5 = (char *)0x0;
        }
        else {
          pcVar5 = *(char **)(*(int *)(iVar1 + 0x14) + 0x18);
        }
        if (pbVar4 == (byte *)0x0) {
          if ((pcVar5 != (char *)0x0) && (iVar1 = _tolower((int)*pcVar5), iVar1 == 99)) {
            local_c = pcVar5;
          }
        }
        else if (((((pcVar5 != (char *)0x0) &&
                   (iVar1 = FUN_00b27a0c(pbVar4,0,&local_1c), -1 < iVar1)) &&
                  (iVar1 = _tolower((int)*pcVar5), iVar1 == 99)) &&
                 ((pcVar6 = pcVar5, *(uint *)((int)local_10 + 200) != local_18 &&
                  (pcVar6 = pcVar7, ((*(uint *)((int)local_10 + 200) ^ local_18) & 0xffff0000) == 0)
                  ))) && ((short)local_18 == 0)) {
          local_8 = pcVar5;
        }
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      pcVar7 = pcVar6;
    } while (iVar2 != 0);
    if (pcVar6 != (char *)0x0) goto LAB_00bb1071;
  }
  pcVar6 = local_8;
  if ((local_8 == (char *)0x0) && (pcVar6 = local_c, local_c == (char *)0x0)) {
    return 0;
  }
LAB_00bb1071:
  iVar2 = _tolower((int)*pcVar6);
  if (iVar2 == 99) {
    iVar2 = _isdigit((int)pcVar6[1]);
    if (iVar2 != 0) {
      pcVar7 = pcVar6 + 2;
      while (iVar2 = _isdigit((int)*pcVar7), iVar2 != 0) {
        pcVar7 = pcVar7 + 1;
      }
      if (*pcVar7 == '\0') {
        uVar3 = _atol(pcVar6 + 1);
        if (0x1fff < uVar3) {
          FUN_00b7112e((int)local_10,0,0,
                       "Constant variable \'%s\' bound to register greater than 8191 (%d requested)"
                      );
          return 0x80004005;
        }
        *(ushort *)(param_2 + 10) = *(ushort *)(param_2 + 10) | (ushort)(uVar3 << 2) | 2;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00bb10f1 @ 00bb10f1 ////

void FUN_00bb10f1(int param_1,int param_2)

{
  for (; (*(int *)(param_1 + 0x10) != -1 && (*(int *)(param_1 + 0x10) != param_2));
      param_1 = param_1 + 0x24) {
  }
  return;
}


//// FUNCTION FUN_00bb110f @ 00bb110f ////

undefined4 * __fastcall FUN_00bb110f(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00b6cab0(param_1);
  *param_1 = &PTR_FUN_00d9d4a0;
  puVar2 = param_1 + 0x6d;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x75;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x58] = 0xffffffff;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x59] = 0xffffffff;
  param_1[0x5a] = 0xffffffff;
  param_1[0x5b] = 0xffffffff;
  param_1[0x62] = 0xffffffff;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x42] = 0;
  param_1[0x6c] = 0;
  param_1[0x56] = 0;
  param_1[0x7c] = 0;
  param_1[0x74] = 0;
  param_1[0x7d] = 0;
  param_1[0x3a] = 0xffff0000;
  param_1[0x3b] = 0x10;
  param_1[0x39] = 0xffff;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[99] = 0;
  return param_1;
}


//// FUNCTION FUN_00bb11f5 @ 00bb11f5 ////

void __fastcall FUN_00bb11f5(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9d4a0;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x43]);
}


//// FUNCTION FUN_00bb124d @ 00bb124d ////

uint __thiscall FUN_00bb124d(void *this,uint *param_1,int param_2)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  short *psVar6;
  undefined4 *puVar7;
  int3 extraout_var;
  int3 extraout_var_00;
  int3 extraout_var_01;
  int iVar8;
  ushort uVar9;
  char *pcVar10;
  char local_20c [512];
  int local_c;
  uint local_8;
  
  uVar5 = param_1[0x1a];
  local_8 = 0;
  if (uVar5 == 0) {
    *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) | 0x40;
    uVar5 = (**(code **)(*(int *)this + 0x50))(0,0);
    param_1[0x1b] = uVar5;
    return 0;
  }
  local_c = *(int *)(*(int *)((int)this + 0x10) + param_1[1] * 4);
  psVar1 = *(short **)(uVar5 + 0x18);
  if (*(int *)((int)this + 0x158) != 0) {
    psVar6 = psVar1;
    do {
      sVar3 = *psVar6;
      psVar6 = (short *)((int)psVar6 + 1);
    } while ((char)sVar3 != '\0');
    if ((2 < (uint)((int)psVar6 - ((int)psVar1 + 1))) && (*psVar1 == 0x5f72)) {
      uVar2 = param_1[0x1c];
      if (4 < uVar2) {
        FUN_00b7112e((int)this,uVar5,0x11bf,
                     "multi-register semantics are not allowed in fragments \'%s\'");
      }
      local_8 = (uint)(4 < uVar2);
      puVar7 = FUN_00b345f9((void *)((int)this + 0x1b4),(char *)psVar1);
      if (puVar7 == (undefined4 *)0x0) {
        uVar5 = FUN_00b361aa((void *)((int)this + 0x1b4),(char *)psVar1,
                             *(undefined4 *)((int)this + 0x1d0),1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        iVar8 = *(int *)((int)this + 0x1d0);
        *(int *)((int)this + 0x1d0) = iVar8 + 1;
      }
      else {
        iVar8 = puVar7[1];
      }
      uVar5 = (**(code **)(*(int *)this + 0x50))(0xffff,iVar8);
      param_1[0x1b] = uVar5;
      goto LAB_00bb1339;
    }
  }
  if (((param_1[0x1b] == 0xffffffff) || ((*param_1 & 0x40000000) == 0)) || (param_2 != 0)) {
    uVar5 = *(uint *)(local_c + 4);
    if ((*(byte *)((int)this + 0x70) & 0x40) == 0) {
      if (((uVar5 & 0x10) != 0) && ((uVar5 & 0x200) == 0)) {
        bVar4 = FUN_00ba6881(param_1,*(undefined4 **)((int)this + 0xf4),1,(int *)&local_8);
        if (extraout_var_01 < 0) {
          return CONCAT31(extraout_var_01,bVar4);
        }
        if ((*(int *)((int)this + 0x28) == 2) &&
           (iVar8 = (**(code **)(*(int *)this + 0x54))(param_1[0x1b]), iVar8 == 0xb)) {
          *(ushort *)param_1 = (ushort)*param_1 | 0x114;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0x3ff00000;
        }
        goto LAB_00bb1339;
      }
      if ((uVar5 & 0x20) == 0) goto LAB_00bb1339;
      uVar9 = 1;
      puVar7 = *(undefined4 **)((int)this + 0xf8);
    }
    else {
      if (((uVar5 & 0x10) != 0) && ((uVar5 & 0x200) == 0)) {
        bVar4 = FUN_00ba6881(param_1,*(undefined4 **)((int)this + 0xf0),2,(int *)&local_8);
        if (extraout_var < 0) {
          return CONCAT31(extraout_var,bVar4);
        }
        if ((param_1[0x1b] != 10) || (param_1[4] != 0)) goto LAB_00bb1339;
        FUN_00b6c35a(this,(int)param_1);
        pcVar10 = "Invalid %s semantics - POSITIONT0";
        goto LAB_00bb1381;
      }
      if ((uVar5 & 0x20) == 0) goto LAB_00bb1339;
      uVar9 = 2;
      puVar7 = *(undefined4 **)((int)this + 0xf4);
    }
    bVar4 = FUN_00ba6881(param_1,puVar7,uVar9,(int *)&local_8);
    if (extraout_var_00 < 0) {
      return CONCAT31(extraout_var_00,bVar4);
    }
  }
  else {
    FUN_00b6c4eb(this,(int)param_1,local_20c,0x200);
    pcVar10 = "invalid %s";
LAB_00bb1381:
    FUN_00b7112e((int)this,param_1[0x1a],0x1196,pcVar10);
    local_8 = 1;
  }
LAB_00bb1339:
  return -(uint)(local_8 != 0) & 0x80004005;
}


//// FUNCTION FUN_00bb1481 @ 00bb1481 ////

int __fastcall FUN_00bb1481(int *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint local_68 [8];
  uint local_48;
  uint *local_44;
  int local_40;
  int local_3c;
  uint *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar5 = FUN_00ba682c(param_1);
  if (-1 < iVar5) {
    iVar5 = param_1[2];
    local_10 = 0;
    if (iVar5 != 0) {
      piVar8 = (int *)param_1[5];
      do {
        if ((param_1[0x22] == *(int *)(*piVar8 + 4)) &&
           (uVar10 = *(uint *)(*piVar8 + 0xc), local_10 <= uVar10)) {
          local_10 = uVar10 + 1;
        }
        piVar8 = piVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_48 = param_1[3];
    local_20 = 0;
    if (local_48 != 0) {
      do {
        puVar9 = *(uint **)(param_1[6] + local_20 * 4);
        if ((*puVar9 & 0xfff00000) != 0) {
          local_c = *puVar9 & 0xfffff;
          local_2c = puVar9[1] / local_c;
          iVar5 = *(int *)(param_1[5] + *(int *)puVar9[4] * 4);
          local_24 = *(int *)(iVar5 + 0x14);
          local_28 = *(int *)(iVar5 + 0x18);
          local_44 = puVar9;
          while ((iVar5 = (**(code **)(*param_1 + 0x20))(puVar9), iVar5 != 0 &&
                 ((*puVar9 & 0xfff00000) != 0x74100000))) {
            local_34 = *(int *)(param_1[4] +
                               *(int *)(*(int *)(param_1[5] +
                                                *(int *)(puVar9[2] + local_1c * local_c * 4) * 4) +
                                       4) * 4);
            if ((*(byte *)(local_34 + 4) & 2) != 0) {
              pcVar4 = "internal error: result violated port constraints";
LAB_00bb1901:
              FUN_00b7112e((int)param_1,puVar9[0xf],0,pcVar4);
              return -0x7fffbffb;
            }
            local_18 = 0;
            local_8 = 0;
            if (local_2c != 0) {
              local_14 = (int *)0x0;
              do {
                iVar5 = *(int *)(param_1[4] +
                                *(int *)(*(int *)(param_1[5] +
                                                 *(int *)((int)local_14 + puVar9[2]) * 4) + 4) * 4);
                iVar6 = (**(code **)(*param_1 + 0x9c))(puVar9);
                if ((((iVar6 != 1) && (uVar10 = *(uint *)(iVar5 + 4), (uVar10 & 0x40) != 0)) &&
                    (((*(uint *)(local_34 + 4) ^ uVar10) & 0x12bf) == 0)) && (local_c != 0)) {
                  piVar8 = local_14;
                  uVar10 = local_c;
                  do {
                    uVar1 = *(uint *)(*(int *)(param_1[5] + *(int *)((int)piVar8 + puVar9[2]) * 4) +
                                     0x5c);
                    if (local_18 < uVar1) {
                      local_1c = local_8;
                      local_18 = uVar1;
                    }
                    piVar8 = (int *)((int)piVar8 + 4);
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                local_8 = local_8 + 1;
                local_14 = (int *)((int)local_14 + local_c * 4);
              } while (local_8 < local_2c);
            }
            iVar5 = *(int *)(param_1[5] + *(int *)(puVar9[2] + local_1c * local_c * 4) * 4);
            iVar6 = *(int *)(iVar5 + 4);
            local_34 = *(int *)(iVar5 + 8);
            local_3c = iVar6;
            local_30 = *(int *)(iVar5 + 0xc);
            if ((*(byte *)(*(int *)(param_1[4] + iVar6 * 4) + 4) & 0x40) == 0) {
              pcVar4 = "internal error: non-vectorized pool violated port constraints";
              goto LAB_00bb1901;
            }
            local_68[0] = 0xffffffff;
            local_68[1] = 0xffffffff;
            local_18 = 0;
            local_68[2] = 0xffffffff;
            uVar10 = 0;
            local_68[3] = 0xffffffff;
            if (param_1[2] != 0) {
              local_14 = (int *)param_1[5];
              do {
                uVar1 = local_18;
                iVar5 = *local_14;
                if ((((*(int *)(iVar5 + 4) == iVar6) && (*(int *)(iVar5 + 0xc) == local_30)) &&
                    ((*(int *)(iVar5 + 8) == local_34 &&
                     ((*(int *)(iVar5 + 0x38) == -1 &&
                      (uVar2 = *(uint *)(iVar5 + 0x58), local_20 <= uVar2)))))) &&
                   (local_68[*(int *)(iVar5 + 0x10)] = uVar10, uVar1 <= uVar2)) {
                  local_18 = uVar2 + 1;
                }
                local_14 = local_14 + 1;
                uVar10 = uVar10 + 1;
              } while (uVar10 < (uint)param_1[2]);
            }
            uVar10 = 0;
            local_14 = (int *)0x0;
            local_8 = 0;
            do {
              uVar1 = local_8;
              local_38 = (uint *)local_68[local_8];
              if ((uint *)local_68[local_8] != (uint *)0xffffffff) {
                uVar10 = FUN_00b6c1b2(param_1,param_1[0x22],local_10,local_8,0);
                local_68[uVar1 + 4] = uVar10;
                if (uVar10 == 0xffffffff) {
                  return -0x7ff8fff2;
                }
                pvVar3 = *(void **)(param_1[5] + uVar10 * 4);
                iVar5 = FUN_00b6bd9a(pvVar3,*(int *)(param_1[5] + (int)local_38 * 4));
                if (iVar5 < 0) {
                  return iVar5;
                }
                *(undefined4 *)((int)pvVar3 + 0x68) = 0;
                *(undefined4 *)((int)pvVar3 + 0x6c) = 0xffffffff;
                *(undefined4 *)((int)pvVar3 + 0x70) = 0;
                uVar10 = (int)local_14 + 1;
                local_14 = (int *)uVar10;
                *(int *)((int)pvVar3 + 0x14) = local_24;
                *(int *)((int)pvVar3 + 0x18) = local_28;
              }
              local_8 = local_8 + 1;
            } while (local_8 < 4);
            iVar5 = FUN_00b6c212(param_1,uVar10 & 0xfffff | 0x10000000,uVar10,uVar10);
            if (iVar5 == -1) {
              return -0x7ff8fff2;
            }
            pvVar3 = *(void **)(param_1[6] + iVar5 * 4);
            iVar5 = FUN_00b6b429(pvVar3,(int)puVar9);
            if (iVar5 < 0) {
              return iVar5;
            }
            iVar5 = 0;
            local_8 = 0;
            do {
              if (*(int *)((int)local_68 + local_8) != -1) {
                *(int *)(iVar5 + *(int *)((int)pvVar3 + 8)) = *(int *)((int)local_68 + local_8);
                *(undefined4 *)(iVar5 + *(int *)((int)pvVar3 + 0x10)) =
                     *(undefined4 *)((int)local_68 + local_8 + 0x10);
                iVar5 = iVar5 + 4;
              }
              local_8 = local_8 + 4;
            } while (local_8 < 0x10);
            local_10 = local_10 + 1;
            for (local_8 = local_20; local_8 < local_18; local_8 = local_8 + 1) {
              iVar5 = *(int *)(param_1[6] + local_8 * 4);
              if ((*(ushort *)(iVar5 + 2) & 0xfff0) != 0) {
                iVar6 = *(int *)(param_1[5] + **(int **)(iVar5 + 0x10) * 4);
                iVar7 = *(int *)(iVar6 + 0x14);
                for (iVar6 = *(int *)(iVar6 + 0x18);
                    (iVar7 != -1 && ((iVar7 != local_24 || (iVar6 != local_28))));
                    iVar6 = *(int *)(iVar6 + 0x18)) {
                  iVar6 = *(int *)(param_1[5] + iVar7 * 4);
                  iVar7 = *(int *)(iVar6 + 0x14);
                }
                if ((((iVar7 == local_24) && (iVar6 == local_28)) &&
                    (iVar6 = (**(code **)(*param_1 + 0x20))(iVar5), iVar6 != 0)) &&
                   (local_14 = (int *)0x0, *(int *)(iVar5 + 4) != 0)) {
                  do {
                    iVar6 = (int)local_14 * 4;
                    local_38 = (uint *)(*(int *)(iVar5 + 8) + iVar6);
                    local_40 = *(int *)(param_1[5] + *local_38 * 4);
                    if (((*(int *)(local_40 + 4) == local_3c) &&
                        (*(int *)(local_40 + 0xc) == local_30)) &&
                       (*(int *)(local_40 + 8) == local_34)) {
                      if (*(int *)(local_40 + 0x38) == -1) {
                        *local_38 = local_68[*(int *)(local_40 + 0x10) + 4];
                      }
                      else {
                        local_38 = *(uint **)(param_1[5] +
                                             local_68[*(int *)(local_40 + 0x10) + 4] * 4);
                        iVar7 = FUN_00b6c1b2(param_1,param_1[0x22],local_38[3],local_38[4],0);
                        *(int *)(iVar6 + *(int *)(iVar5 + 8)) = iVar7;
                        if (*(int *)(iVar6 + *(int *)(iVar5 + 8)) == -1) {
                          return -0x7ff8fff2;
                        }
                        pvVar3 = *(void **)(param_1[5] + *(int *)(iVar6 + *(int *)(iVar5 + 8)) * 4);
                        iVar6 = FUN_00b6bd9a(pvVar3,(int)local_38);
                        if (iVar6 < 0) {
                          return iVar6;
                        }
                        *(uint *)((int)pvVar3 + 0x38) = local_68[*(int *)(local_40 + 0x10) + 4];
                        *(undefined4 *)((int)pvVar3 + 0x3c) = *(undefined4 *)(local_40 + 0x3c);
                      }
                    }
                    local_14 = (int *)((int)local_14 + 1);
                    puVar9 = local_44;
                  } while (local_14 < *(uint *)(iVar5 + 4));
                }
              }
            }
          }
          iVar5 = FUN_00b6c30b(param_1,puVar9);
          if (iVar5 < 0) {
            return iVar5;
          }
          *puVar9 = 0;
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_48);
    }
    iVar5 = 0;
  }
  return iVar5;
}


//// FUNCTION FUN_00bb191b @ 00bb191b ////

int __fastcall FUN_00bb191b(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 local_64 [4];
  char local_54 [16];
  int local_44 [5];
  uint local_30;
  uint local_2c;
  int local_28;
  void *local_24;
  uint local_20;
  char *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint *local_8;
  
  iVar2 = FUN_00ba682c(param_1);
  if (-1 < iVar2) {
    local_c = 0;
    uVar4 = param_1[3];
    local_2c = uVar4;
    if (uVar4 != 0) {
      do {
        puVar6 = *(uint **)(param_1[6] + local_c * 4);
        if ((*puVar6 & 0xfff00000) != 0) {
          local_10 = 0;
          local_18 = *puVar6 & 0xfffff;
          local_8 = puVar6;
          iVar2 = (**(code **)(*param_1 + 0x20))(puVar6,&local_28);
          while ((uVar5 = local_18, iVar2 != 0 && ((*puVar6 & 0xfff00000) != 0x74100000))) {
            if ((uint)param_1[0x53] <= local_c) {
              local_44[0] = -1;
              local_44[1] = 0xffffffff;
              local_44[2] = 0xffffffff;
              local_44[3] = 0xffffffff;
              local_54[0] = -1;
              local_54[1] = -1;
              local_54[2] = -1;
              local_54[3] = -1;
              local_54[4] = -1;
              local_54[5] = -1;
              local_54[6] = -1;
              local_54[7] = -1;
              local_54[8] = -1;
              local_54[9] = -1;
              local_54[10] = -1;
              local_54[0xb] = -1;
              local_54[0xc] = -1;
              local_54[0xd] = -1;
              local_54[0xe] = -1;
              local_54[0xf] = -1;
            }
            local_20 = (-(uint)(local_18 != 1) & 0xfffffffd) + 3;
            iVar2 = local_20 * 4;
            local_1c = (char *)(puVar6[2] + local_28 * local_18 * 4);
            iVar3 = local_18 << 2;
            bVar11 = true;
            pcVar8 = local_1c;
            pcVar10 = local_54 + iVar2;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar11 = *pcVar8 == *pcVar10;
              pcVar8 = pcVar8 + 1;
              pcVar10 = pcVar10 + 1;
            } while (bVar11);
            local_14 = iVar2;
            if ((!bVar11) ||
               ((puVar6 = local_8, local_8[3] != 0 &&
                (*(int *)(*(int *)(param_1[5] + *(int *)local_8[4] * 4) + 0x14) != -1)))) {
              iVar2 = FUN_00b6c212(param_1,local_18 & 0xfffff | 0x10000000,0xffffffff,0xffffffff);
              if (iVar2 == -1) {
                return -0x7ff8fff2;
              }
              local_24 = *(void **)(param_1[6] + iVar2 * 4);
              iVar2 = FUN_00b6b429(local_24,(int)local_8);
              if (iVar2 < 0) {
                return iVar2;
              }
              piVar7 = (int *)((int)local_44 + local_14);
              iVar2 = (**(code **)(*param_1 + 0x80))(local_c,piVar7,uVar5,local_64,local_10);
              pvVar1 = local_24;
              if (iVar2 < 0) {
                return iVar2;
              }
              local_44[4] = *(int *)(param_1[5] + *piVar7 * 4);
              local_30 = local_20 + uVar5;
              for (; local_20 < local_30; local_20 = local_20 + 1) {
                iVar2 = *(int *)(param_1[5] + local_44[local_20] * 4);
                if (local_8[3] != 0) {
                  *(undefined4 *)(iVar2 + 0x14) =
                       *(undefined4 *)(*(int *)(param_1[5] + *(int *)local_8[4] * 4) + 0x14);
                  *(undefined4 *)(iVar2 + 0x18) =
                       *(undefined4 *)(*(int *)(param_1[5] + *(int *)local_8[4] * 4) + 0x18);
                }
              }
              local_64[local_10] = *(undefined4 *)(local_44[4] + 0xc);
              puVar6 = local_8;
              piVar9 = *(int **)((int)pvVar1 + 0x10);
              for (uVar4 = uVar5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
                *piVar9 = *piVar7;
                piVar7 = piVar7 + 1;
                piVar9 = piVar9 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(char *)piVar9 = (char)*piVar7;
                piVar7 = (int *)((int)piVar7 + 1);
                piVar9 = (int *)((int)piVar9 + 1);
              }
              pcVar8 = local_1c;
              pcVar10 = *(char **)((int)local_24 + 8);
              for (uVar4 = uVar5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar10 = pcVar10 + 4;
              }
              local_10 = local_10 + 1;
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *pcVar10 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar10 = pcVar10 + 1;
              }
              pcVar8 = local_1c;
              pcVar10 = local_54 + local_14;
              for (uVar5 = uVar5 & 0x3fffffff; iVar2 = local_14, uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar10 = pcVar10 + 4;
              }
              for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
                *pcVar10 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar10 = pcVar10 + 1;
              }
            }
            pcVar8 = (char *)((int)local_44 + iVar2);
            pcVar10 = local_1c;
            for (uVar4 = local_18 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *pcVar10 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar10 = pcVar10 + 1;
            }
            iVar2 = (**(code **)(*param_1 + 0x20))(puVar6,&local_28);
            puVar6 = local_8;
            uVar4 = local_2c;
          }
          iVar2 = FUN_00b6c30b(param_1,puVar6);
          if (iVar2 == -1) {
            return -0x7ff8fff2;
          }
          FUN_00b37e4b(puVar6,1);
          *(undefined4 *)(param_1[6] + local_c * 4) = 0;
        }
        local_c = local_c + 1;
      } while (local_c < uVar4);
    }
    if (uVar4 < (uint)param_1[3]) {
      iVar2 = 0;
      uVar5 = uVar4;
      do {
        *(undefined4 *)(iVar2 + param_1[6]) = *(undefined4 *)(param_1[6] + uVar5 * 4);
        uVar5 = uVar5 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar5 < (uint)param_1[3]);
    }
    param_1[3] = param_1[3] - uVar4;
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00bb1bb5 @ 00bb1bb5 ////

undefined4 __thiscall
FUN_00bb1bb5(void *this,int *param_1,int *param_2,int *param_3,uint param_4,uint param_5,
            uint param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  undefined4 auStack_a8 [4];
  undefined4 auStack_98 [4];
  undefined4 auStack_88 [4];
  uint auStack_78 [4];
  undefined4 auStack_68 [4];
  int local_58 [4];
  int local_48 [4];
  int local_38 [4];
  int local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  if (param_5 == 0) {
    param_5 = *(uint *)((int)this + 0x100);
  }
  uVar6 = param_5;
  piVar8 = *(int **)(param_5 + 0x10);
  iVar7 = *(int *)((int)this + 0x14);
  if (*(int *)((int)this + 0x88) == *(int *)(*(int *)(iVar7 + *piVar8 * 4) + 4)) {
    uVar9 = **(uint **)((int)this + 0x100);
    uVar11 = (*(uint **)((int)this + 0x100))[3];
    local_10 = 0;
    if ((uVar9 & 0xfffff) == uVar11) {
      local_8 = (int *)0x0;
      if (uVar11 != 0) {
        local_14 = (int *)((int)param_3 - (int)piVar8);
        local_c = piVar8;
        do {
          iVar7 = *(int *)(iVar7 + *(int *)(((int)param_3 - (int)piVar8) + (int)local_c) * 4);
          local_24 = *(int *)(*(int *)((int)this + 0x10) + *(int *)(iVar7 + 4) * 4);
          if (((*(int *)((int)this + 0x6c) << 0xe < 0) && ((*(byte *)(iVar7 + 0x3d) & 2) != 0)) &&
             (param_1 == (int *)0x80000)) {
            local_10 = 1;
          }
          if (((*(uint *)(iVar7 + 0x3c) & 0x1f0000) != 0) &&
             ((~(uint)param_2 & *(uint *)(iVar7 + 0x3c) & 0x1f0000) != 0)) {
            if (param_1 != (int *)0x80000) {
              return 1;
            }
            local_10 = 1;
          }
          iVar7 = *(int *)((int)this + 0x14);
          if ((*(byte *)(*(int *)(iVar7 + *local_c * 4) + 0x3d) & 0xfe) != 0) {
            return 1;
          }
          if (((*(byte *)((int)this + 0x6c) & 0x10) != 0) && ((*(byte *)(local_24 + 5) & 2) != 0)) {
            if ((uVar9 & 0xfff00000) != 0x10100000) {
              return 1;
            }
            local_10 = 1;
          }
          local_8 = (int *)((int)local_8 + 1);
          local_c = local_c + 1;
        } while (local_8 < *(uint *)(*(int *)((int)this + 0x100) + 0xc));
      }
      param_1 = (int *)0x0;
      if (*(int *)(param_5 + 0xc) != 0) {
        local_18 = (int *)((int)param_3 - (int)local_38);
        do {
          bVar12 = local_10 == 0;
          iVar7 = *(int *)(*(int *)((int)this + 0x14) +
                          *(int *)((int)param_1 * 4 + *(int *)(param_5 + 0x10)) * 4);
          iVar2 = *(int *)(*(int *)((int)this + 0x14) +
                          *(int *)((int)(local_38 + (int)param_1) + (int)local_18) * 4);
          local_38[(int)param_1] = *(int *)(iVar7 + 8);
          uVar3 = *(undefined4 *)(iVar7 + 0x48);
          local_58[(int)param_1] = *(int *)(iVar7 + 0xc);
          local_48[(int)param_1] = *(int *)(iVar7 + 0x10);
          auStack_98[(int)param_1] = *(undefined4 *)(iVar7 + 0x14);
          auStack_68[(int)param_1] = *(undefined4 *)(iVar7 + 0x18);
          uVar9 = *(uint *)(iVar7 + 0x3c);
          auStack_88[(int)param_1] = uVar3;
          uVar3 = *(undefined4 *)(iVar7 + 0x68);
          auStack_78[(int)param_1] = uVar9;
          auStack_a8[(int)param_1] = uVar3;
          if (bVar12) {
            *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar2 + 4);
            *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar2 + 8);
            *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
            *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
            *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
            *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
            *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(iVar2 + 0x48);
            *(undefined4 *)(iVar7 + 0x68) = *(undefined4 *)(iVar2 + 0x68);
            uVar9 = *(uint *)(iVar2 + 0x3c) ^ param_4 | *(uint *)(iVar2 + 0x3c) & ~param_4 | uVar9;
          }
          else {
            uVar9 = uVar9 ^ param_4 | ~param_4 & uVar9;
          }
          param_1 = (int *)((int)param_1 + 1);
          *(uint *)(iVar7 + 0x3c) = uVar9;
        } while (param_1 < *(int **)(param_5 + 0xc));
      }
      piVar8 = *(int **)(param_5 + 0xc);
      param_2 = (int *)0x0;
      local_18 = piVar8;
      if (piVar8 != (int *)0x0) {
        param_1 = *(int **)(param_5 + 0x10);
        do {
          iVar7 = FUN_00bad961(this,*param_1);
          if (iVar7 == 1) goto LAB_00bb200c;
          param_2 = (int *)((int)param_2 + 1);
          param_1 = param_1 + 1;
        } while (param_2 < piVar8);
      }
      local_8 = (int *)0xffffffff;
      param_2 = (int *)0x0;
      param_1 = (int *)0xffffffff;
      if (piVar8 != (int *)0x0) {
        local_28 = (int)local_38 - (int)param_3;
        local_20 = (int)local_58 - (int)param_3;
        local_24 = *(int *)(param_5 + 0x10) - (int)param_3;
        local_1c = (int *)((int)local_48 - (int)param_3);
        local_14 = local_18;
        piVar8 = param_3;
        do {
          local_c = *(int **)(*(int *)((int)this + 0x14) + *(int *)(local_24 + (int)piVar8) * 4);
          iVar7 = *(int *)(*(int *)((int)this + 0x14) + *piVar8 * 4);
          if (*(int **)((int)local_c + 0x54) < local_8) {
            local_8 = *(int **)((int)local_c + 0x54);
          }
          if (param_2 < *(int **)((int)local_c + 0x58)) {
            param_2 = *(int **)((int)local_c + 0x58);
          }
          if ((((*(int *)((int)this + 0x88) == *(int *)(iVar7 + 4)) &&
               (*(int *)(((int)local_38 - (int)param_3) + (int)piVar8) == *(int *)(iVar7 + 8))) &&
              (*(int *)(((int)local_58 - (int)param_3) + (int)piVar8) == *(int *)(iVar7 + 0xc))) &&
             (*(int *)(((int)local_48 - (int)param_3) + (int)piVar8) == *(int *)(iVar7 + 0x10))) {
            iVar7 = (int)local_c;
          }
          if (*(int **)(iVar7 + 0x50) < param_1) {
            param_1 = *(int **)(iVar7 + 0x50);
          }
          piVar8 = piVar8 + 1;
          local_14 = (int *)((int)local_14 - 1);
        } while (local_14 != (int *)0x0);
      }
      if (((param_6 != 0) || (param_2 <= param_1)) ||
         ((*(uint *)((int)this + 0x6c) & 0x10000000) != 0)) {
        if (local_10 != 0) {
          **(uint **)((int)this + 0x100) = **(uint **)((int)this + 0x100) & 0xfffff | 0x10000000;
          return 0;
        }
        local_c = local_8;
        if (local_8 <= param_2) {
          local_8 = (int *)(*(int *)((int)this + 0x18) + (int)local_8 * 4);
          do {
            puVar4 = (uint *)*local_8;
            local_10 = *puVar4;
            if (local_10 != 0) {
              uVar9 = puVar4[2];
              local_14 = (int *)0x0;
              local_20 = uVar9 + puVar4[1] * 4;
              piVar8 = (int *)(local_10 & 0xfffff);
              if (uVar9 < local_20) {
                do {
                  param_1 = (int *)0x0;
                  param_5 = 0;
                  if (piVar8 != (int *)0x0) {
                    do {
                      param_6 = 0;
                      if (*(int *)(uVar6 + 0xc) != 0) {
                        piVar10 = *(int **)(uVar6 + 0x10);
                        do {
                          if (*piVar10 == *(int *)(uVar9 + param_5 * 4)) {
                            param_1 = (int *)((int)param_1 + 1);
                            break;
                          }
                          param_6 = param_6 + 1;
                          piVar10 = piVar10 + 1;
                          local_1c = piVar10;
                        } while (param_6 < *(uint *)(uVar6 + 0xc));
                      }
                      param_5 = param_5 + 1;
                    } while (param_5 < piVar8);
                    if (param_1 != (int *)0x0) {
                      if (((param_1 != piVar8) ||
                          (uVar11 = local_10 & 0xfff00000, uVar11 == 0x70500000)) ||
                         ((uVar11 == 0x70600000 || (uVar11 == 0x70700000)))) goto LAB_00bb200c;
                      local_14 = (int *)0x1;
                    }
                  }
                  uVar9 = uVar9 + (int)piVar8 * 4;
                } while (uVar9 < local_20);
                if (((local_14 != (int *)0x0) &&
                    (((((local_10 & 0xf0000000) == 0x60000000 ||
                       (uVar9 = local_10 & 0xfff00000, uVar9 == 0x10d00000)) ||
                      (uVar9 == 0x10e00000)) || (uVar9 == 0x11000000)))) &&
                   ((*(byte *)((int)this + 0x6e) & 0x80) == 0)) goto LAB_00bb200c;
              }
            }
            local_c = (int *)((int)local_c + 1);
            local_8 = local_8 + 1;
          } while (local_c <= param_2);
        }
        if (*(int *)((int)this + 0x15c) == 0) {
          param_5 = 0;
          if (*(int *)(uVar6 + 0xc) != 0) {
            do {
              puVar4 = *(uint **)(*(int *)((int)this + 0x14) +
                                 *(int *)(param_5 * 4 + *(int *)(uVar6 + 0x10)) * 4);
              puVar5 = *(uint **)(*(int *)((int)this + 0x14) + param_3[param_5] * 4);
              if (puVar5[0xe] == 0xffffffff) {
                puVar4[0xe] = param_3[param_5];
              }
              else {
                puVar4[0xe] = puVar5[0xe];
              }
              uVar9 = *puVar5;
              *puVar4 = uVar9;
              if (param_4 == 0x80000) {
                if ((uVar9 & 4) != 0) {
                  *puVar4 = uVar9 & 0xfffffffb | 8;
                  goto LAB_00bb20c9;
                }
              }
              else {
LAB_00bb20c9:
                if (param_4 == 0x100000) {
                  *puVar4 = *puVar4 | 4;
                }
              }
              FUN_00b6bd9a(puVar4,(int)puVar5);
              param_5 = param_5 + 1;
            } while (param_5 < *(uint *)(uVar6 + 0xc));
          }
          **(undefined4 **)((int)this + 0x100) = 0;
          return 0;
        }
        *(int *)((int)this + 0x15c) = 2;
      }
LAB_00bb200c:
      uVar9 = 0;
      if (*(int *)(uVar6 + 0xc) != 0) {
        do {
          iVar7 = *(int *)(*(int *)((int)this + 0x14) +
                          *(int *)(uVar9 * 4 + *(int *)(uVar6 + 0x10)) * 4);
          *(undefined4 *)(iVar7 + 4) = *(undefined4 *)((int)this + 0x88);
          *(int *)(iVar7 + 8) = local_38[uVar9];
          *(int *)(iVar7 + 0xc) = local_58[uVar9];
          *(int *)(iVar7 + 0x10) = local_48[uVar9];
          *(undefined4 *)(iVar7 + 0x14) = auStack_98[uVar9];
          *(undefined4 *)(iVar7 + 0x18) = auStack_68[uVar9];
          *(uint *)(iVar7 + 0x3c) = auStack_78[uVar9];
          puVar1 = auStack_88 + uVar9;
          uVar3 = auStack_a8[uVar9];
          uVar9 = uVar9 + 1;
          *(undefined4 *)(iVar7 + 0x48) = *puVar1;
          *(undefined4 *)(iVar7 + 0x68) = uVar3;
        } while (uVar9 < *(uint *)(uVar6 + 0xc));
      }
    }
  }
  return 1;
}


//// FUNCTION FUN_00bb210c @ 00bb210c ////

void __thiscall FUN_00bb210c(void *this,uint param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x15c) = 0;
  iVar1 = FUN_00bb1bb5(this,(int *)0x80000,(int *)0xe0000,*(int **)(*(int *)((int)this + 0x100) + 8)
                       ,0x80000,0,param_1);
  if (-1 < iVar1) {
    FUN_00baa120((int)this);
  }
  return;
}


//// FUNCTION FUN_00bb214c @ 00bb214c ////

int __fastcall FUN_00bb214c(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint local_8;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  local_8 = 0;
  if (*(int *)(iVar1 + 4) != 0) {
    piVar2 = *(int **)(iVar1 + 8);
    do {
      if ((*(byte *)(*(int *)(*(int *)((int)param_1 + 0x10) +
                             *(int *)(*(int *)(*(int *)((int)param_1 + 0x14) + *piVar2 * 4) + 4) * 4
                             ) + 5) & 2) != 0) {
        return 1;
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 1;
    } while (local_8 < *(uint *)(*(int *)((int)param_1 + 0x100) + 4));
  }
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  iVar1 = FUN_00bb1bb5(param_1,(int *)0x100000,(int *)0x0,*(int **)(iVar1 + 8),0x100000,0,0);
  if (-1 < iVar1) {
    iVar1 = FUN_00baa120((int)param_1);
  }
  return iVar1;
}


//// FUNCTION FUN_00bb21c6 @ 00bb21c6 ////

int __thiscall FUN_00bb21c6(void *this,int param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int local_2c8 [40];
  uint local_228 [40];
  int local_188 [40];
  uint local_e8 [16];
  uint local_a8 [16];
  uint local_68 [4];
  undefined4 *local_58;
  uint local_54 [5];
  int local_40;
  uint *local_3c;
  int local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  local_c = *(uint **)((int)this + 0x100);
  local_28 = (uint *)(*local_c & 0xfffff);
  local_58 = (undefined4 *)0x0;
  local_30 = (uint *)0x0;
  local_54[0] = 0;
  local_54[1] = 1;
  local_54[2] = 2;
  local_54[3] = 3;
  local_40 = 0;
  local_34 = (uint *)(*local_c & 0xfffff);
  if ((local_28 <= (uint *)(*local_c & 0xfffff)) && ((*local_c & 0xfff00000) == 0x20400000)) {
    local_38 = 0;
LAB_00bb2234:
    local_14 = 0;
    do {
      puVar9 = local_228;
      for (iVar6 = 0x28; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      }
      piVar4 = local_2c8;
      for (iVar6 = 0x28; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar4 = -1;
        piVar4 = piVar4 + 1;
      }
      local_20 = (uint *)0x0;
      local_8 = 0;
      local_18 = 0;
      local_1c = (uint *)0x0;
      do {
        uVar8 = local_18;
        if (local_14 != 0) {
          uVar8 = 1 - local_18;
        }
        uVar1 = local_c[2];
        uVar8 = *(uint *)(&DAT_00d9b42c + uVar8 * 4);
        piVar4 = (int *)(uVar1 + (int)local_1c * 4);
        if (uVar8 < 0x10) {
          iVar6 = *(int *)(*(int *)(*(int *)((int)this + 0x14) + *piVar4 * 4) + 0x48);
          if (iVar6 != -1) {
            local_2c = *(uint **)(*(int *)((int)this + 0x18) + iVar6 * 4);
            iVar6 = FUN_00ba57ad(this,local_2c,(int)piVar4,(uint)local_28,local_54,local_68,
                                 *(int *)(&DAT_00d9b438 + uVar8 * 0x20),0);
            if (iVar6 == 0) {
              local_8 = FUN_00ba5998(this,local_2c,(int *)(&DAT_00d9b420 + uVar8 * 0x20),
                                     (int *)local_a8,(uint *)&local_20,(int)local_2c8,local_68,
                                     (uint)local_34,0);
              goto LAB_00bb2335;
            }
          }
          local_8 = 1;
          break;
        }
        uVar10 = 0;
        puVar9 = local_228 + (uVar8 - 0x10) * 4;
        do {
          if ((uint *)local_54[uVar10] < local_28) {
            *puVar9 = *(uint *)(uVar1 + ((int)local_1c + (int)local_54[uVar10]) * 4);
          }
          else {
            *puVar9 = 0xffffffff;
          }
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar10 < 4);
LAB_00bb2335:
        if (local_8 == 1) break;
        local_18 = local_18 + 1;
        local_1c = (uint *)((int)local_1c + (int)local_28);
      } while (local_18 < 2);
      puVar9 = local_20;
      local_18 = 0;
      local_10 = (uint *)0x0;
      do {
        uVar8 = local_18;
        if (local_14 != 0) {
          uVar8 = 1 - local_18;
        }
        if ((0xf < *(uint *)(&DAT_00d9b42c + uVar8 * 4)) &&
           (local_24 = (uint *)0x0, local_20 != (uint *)0x0)) {
          do {
            puVar11 = (uint *)0x0;
            if (local_28 != (uint *)0x0) {
              uVar8 = local_a8[(int)local_24];
              puVar3 = *(uint **)(uVar8 + 0xc);
              do {
                local_1c = (uint *)0x0;
                if (puVar3 != (uint *)0x0) {
                  piVar4 = *(int **)(uVar8 + 0x10);
                  do {
                    if (*(int *)(local_c[2] + ((int)local_10 + (int)puVar11) * 4) == *piVar4) {
                      local_8 = 1;
                      goto LAB_00bb23d5;
                    }
                    local_1c = (uint *)((int)local_1c + 1);
                    puVar3 = *(uint **)(uVar8 + 0xc);
                    piVar4 = piVar4 + 1;
                  } while (local_1c < puVar3);
                }
                puVar11 = (uint *)((int)puVar11 + 1);
              } while (puVar11 < local_28);
            }
LAB_00bb23d5:
            local_24 = (uint *)((int)local_24 + 1);
          } while (local_24 < local_20);
        }
        local_18 = local_18 + 1;
        local_10 = (uint *)((int)local_10 + (int)local_28);
      } while (local_18 < 2);
      if (local_8 == 0) {
        if (local_38 != 0) goto LAB_00bb257e;
        local_24 = (uint *)0x0;
        if (local_20 != (uint *)0x0) {
          do {
            local_3c = *(uint **)(local_a8[(int)local_24] + 0xc);
            local_1c = (uint *)0x0;
            if (local_3c != (uint *)0x0) {
              do {
                if (*(int *)((int)this + 0xc) != 0) {
                  local_10 = *(uint **)((int)this + 0x18);
                  local_2c = *(uint **)((int)this + 0xc);
                  do {
                    puVar11 = (uint *)*local_10;
                    if ((puVar11 != (uint *)0x0) && (*puVar11 != 0)) {
                      local_18 = 0;
                      if (puVar11[1] != 0) {
                        iVar6 = *(int *)(*(int *)(local_a8[(int)local_24] + 0x10) +
                                        (int)local_1c * 4);
                        piVar4 = (int *)puVar11[2];
                        local_54[4] = puVar11[1];
                        do {
                          if ((*piVar4 == iVar6) ||
                             (*(int *)(*(int *)(*(int *)((int)this + 0x14) + *piVar4 * 4) + 0x38) ==
                              iVar6)) {
                            local_18 = 1;
                          }
                          piVar4 = piVar4 + 1;
                          local_54[4] = local_54[4] - 1;
                        } while (local_54[4] != 0);
                      }
                      if (puVar11 == local_c) {
                        local_18 = 0;
                      }
                      if (local_18 != 0) {
                        puVar3 = (uint *)0x0;
                        do {
                          if (puVar11 == (uint *)local_a8[(int)puVar3]) {
                            local_18 = 0;
                          }
                          puVar3 = (uint *)((int)puVar3 + 1);
                        } while (puVar3 < local_20);
                        if (local_18 != 0) {
                          local_8 = 1;
                        }
                      }
                    }
                    local_10 = local_10 + 1;
                    local_2c = (uint *)((int)local_2c - 1);
                  } while (local_2c != (uint *)0x0);
                }
                local_1c = (uint *)((int)local_1c + 1);
              } while (local_1c < local_3c);
            }
            local_24 = (uint *)((int)local_24 + 1);
          } while (local_24 < local_20);
        }
        local_1c = (uint *)0x0;
        do {
          uVar8 = local_228[(int)local_1c];
          if ((uVar8 != 0xffffffff) && (puVar11 = (uint *)0x0, local_20 != (uint *)0x0)) {
            local_3c = *(uint **)(*(int *)((int)this + 0x14) + uVar8 * 4);
            do {
              puVar3 = *(uint **)(local_a8[(int)puVar11] + 0xc);
              if (puVar3 != (uint *)0x0) {
                puVar7 = *(uint **)(local_a8[(int)puVar11] + 0x10);
                local_2c = puVar3;
                do {
                  if ((uVar8 == *puVar7) || (local_3c[0xe] == *puVar7)) {
                    local_8 = 1;
                  }
                  puVar7 = puVar7 + 1;
                  local_2c = (uint *)((int)local_2c - 1);
                } while (local_2c != (uint *)0x0);
              }
              puVar11 = (uint *)((int)puVar11 + 1);
            } while (puVar11 < local_20);
          }
          local_1c = (uint *)((int)local_1c + 1);
        } while (local_1c < (uint *)0x28);
        if (local_8 == 0) goto LAB_00bb257e;
      }
      local_14 = local_14 + 1;
    } while (local_14 < 2);
    if (local_8 != 0) goto code_r0x00bb256f;
LAB_00bb257e:
    puVar11 = local_a8;
    puVar3 = local_e8;
    for (uVar8 = (uint)local_20 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar3 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(char *)puVar3 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    local_e8[(int)puVar9] = (uint)local_c;
    local_30 = (uint *)((int)local_20 + 1);
    uVar8 = 0;
    do {
      iVar6 = *(int *)((int)local_228 + uVar8);
      if ((iVar6 != -1) || (iVar6 = *(int *)((int)local_2c8 + uVar8), iVar6 != -1)) {
        *(int *)((int)local_188 + uVar8) = iVar6;
      }
      uVar8 = uVar8 + 4;
    } while (uVar8 < 0xa0);
    local_8 = 0;
LAB_00bb25e0:
    if (local_8 != 0) goto LAB_00bb25f2;
    goto LAB_00bb2d3a;
  }
LAB_00bb25f2:
  local_1c = *(uint **)((int)this + 0x100);
  uVar8 = **(uint **)((int)this + 0x100);
  local_28 = (uint *)(uVar8 & 0xfffff);
  if ((local_28 <= local_34) && ((uVar8 & 0xfff00000) == 0x20400000)) {
    local_38 = 0;
LAB_00bb2622:
    local_18 = 0;
    do {
      puVar9 = local_30;
      puVar11 = local_e8;
      puVar3 = local_a8;
      for (uVar8 = (uint)local_30 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar3 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)puVar3 = (char)*puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        puVar3 = (uint *)((int)puVar3 + 1);
      }
      puVar11 = local_228;
      for (iVar6 = 0x28; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      piVar4 = local_2c8;
      for (iVar6 = 0x28; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar4 = -1;
        piVar4 = piVar4 + 1;
      }
      local_20 = puVar9;
      local_8 = 0;
      local_14 = 0;
      local_10 = (uint *)0x0;
      do {
        uVar8 = local_14;
        if (local_18 != 0) {
          uVar8 = 1 - local_14;
        }
        uVar1 = local_1c[2];
        uVar8 = *(uint *)(&DAT_00d9b48c + uVar8 * 4);
        piVar4 = (int *)(uVar1 + (int)local_10 * 4);
        if (uVar8 < 0x10) {
          iVar6 = *(int *)(*(int *)(*(int *)((int)this + 0x14) + *piVar4 * 4) + 0x48);
          if (iVar6 != -1) {
            local_3c = *(uint **)(*(int *)((int)this + 0x18) + iVar6 * 4);
            iVar6 = FUN_00ba57ad(this,local_3c,(int)piVar4,(uint)local_28,local_54,local_68,
                                 *(int *)(&DAT_00d9b498 + uVar8 * 0x20),0);
            if (iVar6 == 0) {
              local_8 = FUN_00ba5998(this,local_3c,(int *)(&DAT_00d9b480 + uVar8 * 0x20),
                                     (int *)local_a8,(uint *)&local_20,(int)local_2c8,local_68,
                                     (uint)local_34,0);
              goto LAB_00bb2737;
            }
          }
          local_8 = 1;
          break;
        }
        uVar10 = 0;
        puVar9 = local_228 + (uVar8 - 0x10) * 4;
        do {
          if ((uint *)local_54[uVar10] < local_28) {
            *puVar9 = *(uint *)(uVar1 + ((int)local_54[uVar10] + (int)local_10) * 4);
          }
          else {
            *puVar9 = 0xffffffff;
          }
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar10 < 4);
LAB_00bb2737:
        if (local_8 == 1) break;
        local_14 = local_14 + 1;
        local_10 = (uint *)((int)local_10 + (int)local_28);
      } while (local_14 < 2);
      puVar9 = local_20;
      local_14 = 0;
      local_24 = (uint *)0x0;
      do {
        uVar8 = local_14;
        if (local_18 != 0) {
          uVar8 = 1 - local_14;
        }
        if ((0xf < *(uint *)(&DAT_00d9b48c + uVar8 * 4)) &&
           (local_c = (uint *)0x0, local_20 != (uint *)0x0)) {
          do {
            puVar11 = (uint *)0x0;
            if (local_28 != (uint *)0x0) {
              uVar8 = local_a8[(int)local_c];
              puVar3 = *(uint **)(uVar8 + 0xc);
              do {
                local_10 = (uint *)0x0;
                if (puVar3 != (uint *)0x0) {
                  piVar4 = *(int **)(uVar8 + 0x10);
                  do {
                    if (*(int *)(local_1c[2] + ((int)local_24 + (int)puVar11) * 4) == *piVar4) {
                      local_8 = 1;
                      goto LAB_00bb27d2;
                    }
                    local_10 = (uint *)((int)local_10 + 1);
                    puVar3 = *(uint **)(uVar8 + 0xc);
                    piVar4 = piVar4 + 1;
                  } while (local_10 < puVar3);
                }
                puVar11 = (uint *)((int)puVar11 + 1);
              } while (puVar11 < local_28);
            }
LAB_00bb27d2:
            local_c = (uint *)((int)local_c + 1);
          } while (local_c < local_20);
        }
        local_14 = local_14 + 1;
        local_24 = (uint *)((int)local_24 + (int)local_28);
      } while (local_14 < 2);
      if (local_8 == 0) {
        if (local_38 != 0) goto LAB_00bb297d;
        local_24 = (uint *)0x0;
        if (local_20 != (uint *)0x0) {
          do {
            local_3c = *(uint **)(local_a8[(int)local_24] + 0xc);
            local_c = (uint *)0x0;
            if (local_3c != (uint *)0x0) {
              do {
                if (*(int *)((int)this + 0xc) != 0) {
                  local_10 = *(uint **)((int)this + 0x18);
                  local_54[4] = *(uint *)((int)this + 0xc);
                  do {
                    puVar11 = (uint *)*local_10;
                    if ((puVar11 != (uint *)0x0) && (*puVar11 != 0)) {
                      local_14 = 0;
                      if ((uint *)puVar11[1] != (uint *)0x0) {
                        iVar6 = *(int *)(*(int *)(local_a8[(int)local_24] + 0x10) + (int)local_c * 4
                                        );
                        piVar4 = (int *)puVar11[2];
                        local_2c = (uint *)puVar11[1];
                        do {
                          if ((*piVar4 == iVar6) ||
                             (*(int *)(*(int *)(*(int *)((int)this + 0x14) + *piVar4 * 4) + 0x38) ==
                              iVar6)) {
                            local_14 = 1;
                          }
                          piVar4 = piVar4 + 1;
                          local_2c = (uint *)((int)local_2c - 1);
                        } while (local_2c != (uint *)0x0);
                      }
                      if (puVar11 == local_1c) {
                        local_14 = 0;
                      }
                      if (local_14 != 0) {
                        puVar3 = (uint *)0x0;
                        do {
                          if (puVar11 == (uint *)local_a8[(int)puVar3]) {
                            local_14 = 0;
                          }
                          puVar3 = (uint *)((int)puVar3 + 1);
                        } while (puVar3 < local_20);
                        if (local_14 != 0) {
                          local_8 = 1;
                        }
                      }
                    }
                    local_10 = local_10 + 1;
                    local_54[4] = local_54[4] - 1;
                  } while (local_54[4] != 0);
                }
                local_c = (uint *)((int)local_c + 1);
              } while (local_c < local_3c);
            }
            local_24 = (uint *)((int)local_24 + 1);
          } while (local_24 < local_20);
        }
        local_c = (uint *)0x0;
        do {
          uVar8 = local_228[(int)local_c];
          if ((uVar8 != 0xffffffff) && (puVar11 = (uint *)0x0, local_20 != (uint *)0x0)) {
            local_3c = *(uint **)(*(int *)((int)this + 0x14) + uVar8 * 4);
            do {
              puVar3 = *(uint **)(local_a8[(int)puVar11] + 0xc);
              if (puVar3 != (uint *)0x0) {
                puVar7 = *(uint **)(local_a8[(int)puVar11] + 0x10);
                local_2c = puVar3;
                do {
                  if ((uVar8 == *puVar7) || (local_3c[0xe] == *puVar7)) {
                    local_8 = 1;
                  }
                  puVar7 = puVar7 + 1;
                  local_2c = (uint *)((int)local_2c - 1);
                } while (local_2c != (uint *)0x0);
              }
              puVar11 = (uint *)((int)puVar11 + 1);
            } while (puVar11 < local_20);
          }
          local_c = (uint *)((int)local_c + 1);
        } while (local_c < (uint *)0x28);
        if (local_8 == 0) goto LAB_00bb297d;
      }
      local_18 = local_18 + 1;
    } while (local_18 < 2);
    if (local_8 != 0) goto code_r0x00bb296e;
LAB_00bb297d:
    puVar11 = local_a8;
    puVar3 = local_e8;
    for (uVar8 = (uint)local_20 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar3 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(char *)puVar3 = (char)*puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    local_e8[(int)puVar9] = (uint)local_1c;
    local_30 = (uint *)((int)local_20 + 1);
    uVar8 = 0;
    do {
      iVar6 = *(int *)((int)local_228 + uVar8);
      if ((iVar6 != -1) || (iVar6 = *(int *)((int)local_2c8 + uVar8), iVar6 != -1)) {
        *(int *)((int)local_188 + uVar8) = iVar6;
      }
      uVar8 = uVar8 + 4;
    } while (uVar8 < 0xa0);
    local_8 = 0;
    iVar6 = local_8;
    goto LAB_00bb29e2;
  }
  iVar6 = 1;
LAB_00bb29e2:
  local_40 = 1;
  if (iVar6 == 0) {
LAB_00bb2d3a:
    puVar5 = (undefined4 *)FUN_00b6b88d(0x74);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00b6b3f2(puVar5);
    }
    puVar9 = local_34;
    if (puVar5 == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    if (local_40 == 0) {
      uVar8 = (uint)local_34 & 0xfffff | 0x70300000;
    }
    else {
      uVar8 = (uint)local_34 & 0xfffff | 0x70400000;
    }
    local_8 = FUN_00b6b8d8(puVar5,uVar8,(int)local_34 * 3,(uint)local_34,0);
    if (local_8 < 0) goto LAB_00bb2be4;
    local_8 = FUN_00b6b429(puVar5,*(int *)((int)this + 0x100));
    if (local_8 < 0) goto LAB_00bb2be4;
    local_2c = (uint *)0x0;
    if (puVar9 != (uint *)0x0) {
      local_c = (uint *)((int)puVar9 << 3);
      local_10 = (uint *)((int)puVar9 << 2);
      do {
        puVar11 = local_c;
        puVar9 = local_10;
        iVar6 = (int)local_2c * 4;
        *(undefined4 *)(iVar6 + puVar5[4]) =
             *(undefined4 *)(iVar6 + *(int *)(*(int *)((int)this + 0x100) + 0x10));
        *(int *)(iVar6 + puVar5[2]) = local_188[(int)local_2c];
        iVar6 = local_188[(int)(local_2c + 2)];
        local_10 = local_10 + 1;
        *(int *)((int)puVar9 + puVar5[2]) = local_188[(int)(local_2c + 1)];
        local_c = local_c + 1;
        *(int *)((int)puVar11 + puVar5[2]) = iVar6;
        local_2c = (uint *)((int)local_2c + 1);
      } while (local_2c < local_34);
    }
    if (param_1 == 0) {
      iVar6 = FUN_00bad08e(this,puVar5,(int)local_e8,(uint)local_30);
      return iVar6;
    }
    local_8 = FUN_00b6bb37(*(void **)((int)this + 0x100),puVar5);
    if (local_8 < 0) goto LAB_00bb2be4;
  }
  else {
    if (param_1 != 0) {
      local_40 = 0;
      iVar6 = FUN_00ba5998(this,*(uint **)((int)this + 0x100),(int *)&DAT_00d9b420,(int *)local_e8,
                           (uint *)&local_30,(int)local_188,local_54,(uint)local_34,param_1);
      if (iVar6 == 0) goto LAB_00bb2d3a;
      iVar6 = FUN_00ba5998(this,*(uint **)((int)this + 0x100),(int *)&DAT_00d9b480,(int *)local_e8,
                           (uint *)&local_30,(int)local_188,local_54,(uint)local_34,param_1);
    }
    puVar9 = local_34;
    local_40 = 1;
    if (iVar6 == 0) goto LAB_00bb2d3a;
    local_40 = 0;
    iVar6 = FUN_00ba5998(this,*(uint **)((int)this + 0x100),(int *)&DAT_00d9b4e0,(int *)local_e8,
                         (uint *)&local_30,(int)local_188,local_54,(uint)local_34,param_1);
    puVar11 = (uint *)0x0;
    if (puVar9 != (uint *)0x0) {
      do {
        if (local_188[(int)puVar11] != local_188[(int)(puVar11 + 1)]) {
          iVar6 = 1;
        }
        puVar11 = (uint *)((int)puVar11 + 1);
      } while (puVar11 < puVar9);
    }
    if (iVar6 == 0) {
LAB_00bb2bfe:
      bVar2 = true;
      puVar11 = (uint *)0x0;
      if (puVar9 != (uint *)0x0) {
        do {
          if (local_188[(int)puVar11] != local_188[(int)(puVar11 + 1)]) {
            return 1;
          }
          puVar11 = (uint *)((int)puVar11 + 1);
        } while (puVar11 < puVar9);
      }
      if (*(int *)((int)this + 0x160) == -1) {
        iVar6 = FUN_00b6c159(this,&DAT_00d909c4,0x311,1,4);
        *(int *)((int)this + 0x170) = iVar6;
        if (iVar6 == -1) {
          return -0x7ff8fff2;
        }
        iVar6 = FUN_00b6c1b2(this,iVar6,0,0,0x4000000000000000);
        *(int *)((int)this + 0x160) = iVar6;
        if (iVar6 == -1) {
          return -0x7ff8fff2;
        }
      }
      puVar11 = (uint *)0x0;
      if (puVar9 != (uint *)0x0) {
        iVar6 = *(int *)((int)this + 0x160);
        do {
          local_188[(int)puVar11] = iVar6;
          if (local_188[(int)(puVar11 + 2)] != local_188[8]) {
            bVar2 = false;
          }
          puVar11 = (uint *)((int)puVar11 + 1);
        } while (puVar11 < puVar9);
      }
      iVar6 = *(int *)(*(int *)((int)this + 0x14) + local_188[8] * 4);
      if (((*(byte *)(*(int *)(*(int *)((int)this + 0x10) + *(int *)(iVar6 + 4) * 4) + 5) & 1) != 0)
         && (bVar2)) {
        uVar8 = 0;
        piVar4 = (int *)((int)this + 0x164);
        do {
          if ((*piVar4 == -1) ||
             (*(double *)(*(int *)(*(int *)((int)this + 0x14) + *piVar4 * 4) + 0x20) ==
              *(double *)(iVar6 + 0x20))) break;
          uVar8 = uVar8 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar8 < 3);
        if (uVar8 != 3) {
          piVar4 = (int *)((int)this + uVar8 * 4 + 0x164);
          if (*piVar4 == -1) {
            iVar6 = FUN_00b6c1b2(this,*(undefined4 *)((int)this + 0x170),0,uVar8 + 1,
                                 *(undefined8 *)(iVar6 + 0x20));
            *piVar4 = iVar6;
            if (iVar6 == -1) {
              return -0x7ff8fff2;
            }
          }
          if (local_34 != (uint *)0x0) {
            iVar6 = *piVar4;
            piVar4 = local_188 + 8;
            for (puVar9 = local_34; puVar9 != (uint *)0x0; puVar9 = (uint *)((int)puVar9 - 1)) {
              *piVar4 = iVar6;
              piVar4 = piVar4 + 1;
            }
          }
        }
      }
      goto LAB_00bb2d3a;
    }
    local_30 = (uint *)0x0;
    local_8 = FUN_00ba5998(this,*(uint **)((int)this + 0x100),(int *)&DAT_00d9b540,(int *)local_e8,
                           (uint *)&local_30,(int)local_188,local_54,(uint)puVar9,param_1);
    puVar11 = (uint *)0x0;
    local_40 = 1;
    if (puVar9 != (uint *)0x0) {
      do {
        if (local_188[(int)puVar11] != local_188[(int)(puVar11 + 1)]) {
          local_8 = 1;
        }
        puVar11 = (uint *)((int)puVar11 + 1);
      } while (puVar11 < puVar9);
    }
    if (local_8 == 0) goto LAB_00bb2bfe;
    local_40 = 0;
    local_30 = (uint *)0x0;
    local_8 = FUN_00ba5998(this,*(uint **)((int)this + 0x100),(int *)&DAT_00d9b5a0,(int *)local_e8,
                           (uint *)&local_30,(int)local_188,local_54,(uint)puVar9,param_1);
    puVar11 = (uint *)0x0;
    if (puVar9 != (uint *)0x0) {
      do {
        if (local_188[(int)puVar11] != local_188[(int)(puVar11 + 1)]) {
          local_8 = 1;
        }
        puVar11 = (uint *)((int)puVar11 + 1);
      } while (puVar11 < puVar9);
    }
    if (local_8 == 0) goto LAB_00bb2bfe;
    local_30 = (uint *)0x0;
    local_8 = FUN_00ba5998(this,*(uint **)((int)this + 0x100),(int *)&DAT_00d9b600,(int *)local_e8,
                           (uint *)&local_30,(int)local_188,local_54,(uint)puVar9,param_1);
    puVar11 = (uint *)0x0;
    local_40 = 1;
    if (puVar9 != (uint *)0x0) {
      do {
        if (local_188[(int)puVar11] != local_188[(int)(puVar11 + 1)]) {
          local_8 = 1;
        }
        puVar11 = (uint *)((int)puVar11 + 1);
      } while (puVar11 < puVar9);
    }
    puVar5 = local_58;
    if (local_8 == 0) goto LAB_00bb2bfe;
  }
  local_8 = 0;
LAB_00bb2be4:
  if (puVar5 != (undefined4 *)0x0) {
    FUN_00b37e4b(puVar5,1);
  }
  return local_8;
code_r0x00bb256f:
  local_38 = local_38 + 1;
  if (local_38 != 0) goto LAB_00bb25e0;
  goto LAB_00bb2234;
code_r0x00bb296e:
  local_38 = local_38 + 1;
  iVar6 = local_8;
  if (local_38 != 0) goto LAB_00bb29e2;
  goto LAB_00bb2622;
}


//// FUNCTION FUN_00bb2e52 @ 00bb2e52 ////

int __fastcall FUN_00bb2e52(void *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint auStack_30 [4];
  int local_20 [4];
  int *local_10;
  uint local_c;
  int *local_8;
  
  uVar4 = **(uint **)((int)param_1 + 0x100);
  if ((uVar4 & 0xfff00000) != 0x20400000) {
    return 1;
  }
  uVar4 = uVar4 & 0xfffff;
  piVar9 = (int *)(*(uint **)((int)param_1 + 0x100))[2];
  local_8 = piVar9 + uVar4;
  iVar6 = *(int *)((int)param_1 + 0x14);
  if ((*(byte *)(*(int *)(*(int *)((int)param_1 + 0x10) +
                         *(int *)(*(int *)(iVar6 + *local_8 * 4) + 4) * 4) + 5) & 1) == 0) {
    if ((*(byte *)(*(int *)(*(int *)((int)param_1 + 0x10) +
                           *(int *)(*(int *)(iVar6 + *piVar9 * 4) + 4) * 4) + 5) & 1) == 0) {
      return 1;
    }
    local_20[3] = 1;
    piVar5 = piVar9;
  }
  else {
    local_20[3] = 0;
    piVar5 = local_8;
    local_8 = piVar9;
  }
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  local_10 = (int *)0x0;
  if (uVar4 != 0) {
    piVar9 = local_8;
    do {
      if (*(double *)
           (*(int *)(iVar6 + *(int *)(((int)piVar5 - (int)local_8) + (int)piVar9) * 4) + 0x20) !=
          -0.5) {
        return 1;
      }
      pbVar1 = *(byte **)(iVar6 + *piVar9 * 4);
      if ((((pbVar1[0x3d] & 2) == 0) && ((*pbVar1 & 4) == 0)) &&
         ((*(byte *)((int)param_1 + 0x6e) & 4) != 0)) {
        *(undefined4 *)((int)param_1 + 0x15c) = 1;
      }
      local_10 = (int *)((int)local_10 + 1);
      piVar9 = piVar9 + 1;
    } while (local_10 < uVar4);
  }
  iVar7 = *(int *)(*(int *)(iVar6 + *(int *)(*(uint **)((int)param_1 + 0x100))[4] * 4) + 4);
  local_c = uVar4;
  if (iVar7 == *(int *)((int)param_1 + 0x88)) {
    iVar6 = FUN_00bb1bb5(param_1,(int *)0x20000,(int *)0x0,local_8,0x20000,0,0);
    if (*(int *)((int)param_1 + 0x15c) == 2) {
      FUN_00b711b3((int)param_1,*(int *)(*(int *)((int)param_1 + 0x100) + 0x3c),0x125d,
                   "_bias opportunity missed because source was not clamped 0 to 1");
      return iVar6;
    }
    return iVar6;
  }
  if (iVar7 == *(int *)((int)param_1 + 0x84)) {
    iVar7 = FUN_00bafa3f(param_1,uVar4 | 0x20400000,*(uint **)((int)param_1 + 0x100),local_20,2);
    if (iVar7 != 0) {
      return iVar7;
    }
    local_10 = local_20 + local_20[3];
    if (*local_10 != 0) {
      local_8 = (int *)0x0;
      if (uVar4 != 0) {
        piVar9 = *(int **)(*local_10 + 8);
        do {
          pbVar1 = *(byte **)(iVar6 + *piVar9 * 4);
          if ((((pbVar1[0x3e] & 0x1f) != 0) ||
              (uVar4 = local_c,
              (*(uint *)(*(int *)(*(int *)((int)param_1 + 0x10) + *(int *)(pbVar1 + 4) * 4) + 4) &
              0x200) != 0)) || (((*(uint *)(pbVar1 + 0x3c) & 0x200) == 0 && ((*pbVar1 & 4) == 0))))
          break;
          local_20[3] = 0;
          local_8 = (int *)((int)local_8 + 1);
          piVar9 = piVar9 + 1;
        } while (local_8 < local_c);
      }
      uVar8 = local_20[3];
      if (local_8 != (int *)uVar4) {
        local_8 = (int *)0x0;
        uVar8 = uVar4;
        if (uVar4 != 0) {
          piVar9 = (int *)(*(int *)(*local_10 + 8) + uVar4 * 4);
          do {
            pbVar1 = *(byte **)(iVar6 + *piVar9 * 4);
            uVar8 = uVar4;
            if ((((pbVar1[0x3e] & 0x1f) != 0) ||
                (uVar8 = local_c,
                (*(uint *)(*(int *)(*(int *)((int)param_1 + 0x10) + *(int *)(pbVar1 + 4) * 4) + 4) &
                0x200) != 0)) || (((*(uint *)(pbVar1 + 0x3c) & 0x200) == 0 && ((*pbVar1 & 4) == 0)))
               ) break;
            local_8 = (int *)((int)local_8 + 1);
            piVar9 = piVar9 + 1;
            uVar4 = local_c;
          } while (local_8 < local_c);
        }
        uVar4 = uVar8;
        if (local_8 == (int *)uVar8) {
          return 1;
        }
      }
      local_8 = (int *)0x0;
      if (uVar4 != 0) {
        iVar6 = uVar8 << 2;
        do {
          iVar7 = *(int *)(*(int *)((int)param_1 + 0x14) +
                          *(int *)(iVar6 + *(int *)(*local_10 + 8)) * 4);
          uVar4 = FUN_00b6c1b2(param_1,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 0xc),
                               *(undefined4 *)(iVar7 + 0x10),*(undefined8 *)(iVar7 + 0x20));
          local_20[3] = uVar4;
          auStack_30[(int)local_8] = uVar4;
          if (uVar4 == 0xffffffff) {
            return -0x7ff8fff2;
          }
          iVar2 = *(int *)(*(int *)((int)param_1 + 0x14) + uVar4 * 4);
          iVar3 = *local_10;
          *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar6 + *(int *)(iVar3 + 8));
          *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar7 + 0x48);
          *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar7 + 0x50);
          *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
          *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar7 + 0x54);
          *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar7 + 0x3c) | 0x20000;
          *(int *)(iVar6 + *(int *)(iVar3 + 8)) = local_20[3];
          *(undefined4 *)(*(int *)(iVar3 + 0x10) + (int)local_8 * 4) =
               *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x100) + 0x10) + (int)local_8 * 4);
          local_8 = (int *)((int)local_8 + 1);
          iVar6 = iVar6 + 4;
        } while (local_8 < local_c);
      }
      **(undefined4 **)((int)param_1 + 0x100) = 0;
      return 0;
    }
  }
  return 1;
}


//// FUNCTION FUN_00bb314f @ 00bb314f ////

undefined4 __fastcall FUN_00bb314f(void *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint local_c;
  
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  puVar1 = *(uint **)((int)param_1 + 0x100);
  uVar3 = *puVar1;
  if ((uVar3 & 0xfff00000) == 0x20500000) {
    uVar3 = uVar3 & 0xfffff;
    piVar6 = (int *)puVar1[2];
    piVar7 = piVar6 + uVar3;
    iVar2 = *(int *)((int)param_1 + 0x14);
    piVar4 = piVar7;
    if (((*(uint *)(*(int *)(*(int *)((int)param_1 + 0x10) +
                            *(int *)(*(int *)(iVar2 + *piVar6 * 4) + 4) * 4) + 4) & 0x100) == 0) &&
       (piVar4 = piVar6, piVar6 = piVar7,
       (*(uint *)(*(int *)(*(int *)((int)param_1 + 0x10) +
                          *(int *)(*(int *)(iVar2 + *piVar7 * 4) + 4) * 4) + 4) & 0x100) == 0)) {
      return 1;
    }
    if (uVar3 != 0) {
      uVar8 = 0;
      piVar7 = piVar6;
      do {
        if (*(double *)
             (*(int *)(iVar2 + *(int *)(((int)piVar4 - (int)piVar6) + (int)piVar7) * 4) + 0x20) !=
            2.0) {
          return 1;
        }
        if (((*(uint *)(*(int *)(iVar2 + *piVar7 * 4) + 0x3c) & 0x1f0000) != 0x20000) &&
           ((*(byte *)((int)param_1 + 0x6e) & 8) != 0)) {
          return 1;
        }
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar8 < uVar3);
    }
  }
  else {
    if ((uVar3 & 0xfff00000) != 0x20400000) {
      return 1;
    }
    piVar6 = (int *)puVar1[2];
    uVar3 = uVar3 & 0xfffff;
    local_c = 0;
    piVar7 = piVar6;
    if (uVar3 != 0) {
      do {
        if (*piVar7 != piVar7[uVar3]) {
          return 1;
        }
        if (((*(uint *)(*(int *)(*(int *)((int)param_1 + 0x14) + *piVar7 * 4) + 0x3c) & 0x1f0000) !=
             0x20000) && ((*(byte *)((int)param_1 + 0x6e) & 8) != 0)) {
          return 1;
        }
        local_c = local_c + 1;
        piVar7 = piVar7 + 1;
      } while (local_c < uVar3);
    }
  }
  uVar5 = FUN_00bb1bb5(param_1,(int *)0x40000,(int *)0x20000,piVar6,0x40000,0,0);
  return uVar5;
}


//// FUNCTION FUN_00bb32b1 @ 00bb32b1 ////

undefined4 __thiscall FUN_00bb32b1(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  int *piVar9;
  int *local_14;
  uint local_10;
  
  uVar7 = 1;
  bVar8 = param_1 == (uint *)0x0;
  if (bVar8) {
    param_1 = *(uint **)((int)this + 0x100);
  }
  if ((*param_1 & 0xfff00000) == 0x20400000) {
    uVar5 = *param_1 & 0xfffff;
    local_14 = (int *)param_1[2];
    piVar9 = local_14 + uVar5;
    iVar2 = *(int *)((int)this + 0x14);
    piVar6 = piVar9;
    if (((*(byte *)(*(int *)(*(int *)((int)this + 0x10) +
                            *(int *)(*(int *)(iVar2 + *piVar9 * 4) + 4) * 4) + 5) & 1) == 0) &&
       (iVar1 = *local_14, piVar6 = local_14, local_14 = piVar9,
       (*(byte *)(*(int *)(*(int *)((int)this + 0x10) +
                          *(int *)(*(int *)(iVar2 + iVar1 * 4) + 4) * 4) + 5) & 1) == 0)) {
LAB_00bb342f:
      uVar7 = 1;
    }
    else {
      puVar3 = *(uint **)((int)this + 0x100);
      piVar9 = local_14;
      if (puVar3 != param_1) {
        piVar9 = (int *)puVar3[2];
      }
      *(undefined4 *)((int)this + 0x15c) = 0;
      local_10 = 0;
      if (uVar5 != 0) {
        iVar1 = (int)piVar6 - (int)piVar9;
        do {
          if ((*(double *)(*(int *)(iVar2 + *(int *)(iVar1 + (int)piVar9) * 4) + 0x20) != 1.0) ||
             ((bVar8 && ((*(uint *)(*(int *)(iVar2 + *piVar9 * 4) + 0x3c) & 0x1f0000) != 0x80000))))
          goto LAB_00bb342f;
          puVar4 = *(uint **)(iVar2 + *piVar9 * 4);
          if (((*(byte *)((int)puVar4 + 0x3d) & 2) == 0) &&
             ((*puVar4 & (uint)bVar8 * 4 + 0x14) == 0)) {
            *(undefined4 *)((int)this + 0x15c) = 1;
          }
          local_10 = local_10 + 1;
          piVar9 = piVar9 + 1;
        } while (local_10 < uVar5);
      }
      if (bVar8) {
        param_1 = (uint *)0x0;
        uVar5 = 0x90000;
        piVar9 = (int *)0x80000;
      }
      else {
        uVar5 = 0x10000;
        local_14 = (int *)puVar3[2];
        piVar9 = (int *)0x0;
      }
      uVar7 = FUN_00bb1bb5(this,(int *)0x10000,piVar9,local_14,uVar5,(uint)param_1,0);
      if (*(int *)((int)this + 0x15c) == 2) {
        FUN_00b711b3((int)this,*(int *)(*(int *)((int)this + 0x100) + 0x3c),0x125e,
                     "complement opportunity missed because input result WAS clamped from 0 to 1");
      }
    }
  }
  return uVar7;
}


//// FUNCTION FUN_00bb3439 @ 00bb3439 ////

int __fastcall FUN_00bb3439(void *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int local_8;
  
  iVar3 = 1;
  local_8 = 1;
  if (((((**(uint **)((int)param_1 + 0x100) & 0xfff00000) != 0x20500000) ||
       ((iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) +
                         *(int *)((*(uint **)((int)param_1 + 0x100))[2] +
                                 (**(uint **)((int)param_1 + 0x100) & 0xfffff) * 4) * 4),
        (*(byte *)(*(int *)(*(int *)((int)param_1 + 0x10) + *(int *)(iVar1 + 4) * 4) + 5) & 1) != 0
        && (*(double *)(iVar1 + 0x20) == -1.0)))) &&
      (puVar2 = FUN_00baf7e4(param_1,**(uint **)((int)param_1 + 0x100) & 0xfffff | 0x20400000,
                             (int)*(uint **)((int)param_1 + 0x100),(uint *)0x0,(int *)0x2,1),
      iVar3 = local_8, puVar2 != (uint *)0x0)) && (iVar3 = FUN_00bb32b1(param_1,puVar2), iVar3 == 0)
     ) {
    *puVar2 = 0;
  }
  return iVar3;
}


//// FUNCTION FUN_00bb34d9 @ 00bb34d9 ////

int __fastcall FUN_00bb34d9(void *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *local_14;
  int *local_10;
  uint local_c;
  
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  puVar4 = *(uint **)((int)param_1 + 0x100);
  if ((*puVar4 & 0xfff00000) != 0x20400000) {
    return 1;
  }
  uVar7 = *puVar4 & 0xfffff;
  bVar3 = true;
  if (uVar7 != 0) {
    piVar5 = (int *)puVar4[2];
    piVar8 = piVar5 + uVar7;
    local_c = uVar7;
    do {
      if (*piVar5 != *piVar8) {
        bVar3 = false;
      }
      piVar8 = piVar8 + 1;
      piVar5 = piVar5 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
    if (!bVar3) {
      fVar2 = -0.5;
      goto LAB_00bb356a;
    }
  }
  puVar4 = FUN_00baf7e4(param_1,uVar7 | 0x20400000,(int)puVar4,(uint *)0x0,(int *)0x2,1);
  fVar2 = -1.0;
  local_14 = puVar4;
  if (puVar4 == (uint *)0x0) {
    return 1;
  }
LAB_00bb356a:
  local_10 = (int *)puVar4[2];
  iVar6 = *(int *)((int)param_1 + 0x14);
  local_c = *puVar4 & 0xfffff;
  piVar8 = local_10 + local_c;
  piVar5 = piVar8;
  if (((*(byte *)(*(int *)(*(int *)((int)param_1 + 0x10) +
                          *(int *)(*(int *)(iVar6 + *piVar8 * 4) + 4) * 4) + 5) & 1) == 0) &&
     (iVar1 = *local_10, piVar5 = local_10, local_10 = piVar8,
     (*(byte *)(*(int *)(*(int *)((int)param_1 + 0x10) +
                        *(int *)(*(int *)(iVar6 + iVar1 * 4) + 4) * 4) + 5) & 1) == 0)) {
    return 1;
  }
  uVar7 = 0;
  if (local_c != 0) {
    do {
      if ((float)*(double *)(*(int *)(iVar6 + piVar5[uVar7] * 4) + 0x20) != fVar2) {
        return 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_c);
  }
  if (bVar3) {
    local_10 = *(int **)(*(int *)((int)param_1 + 0x100) + 8);
  }
  else {
    local_14 = FUN_00baf7e4(param_1,**(uint **)((int)param_1 + 0x100) & 0xfffff | 0x20400000,
                            (int)*(uint **)((int)param_1 + 0x100),(uint *)0x0,(int *)0x2,2);
    if (local_14 == (uint *)0x0) {
      return 1;
    }
    bVar3 = true;
    if (local_c != 0) {
      piVar5 = (int *)local_14[2];
      piVar8 = piVar5 + local_c;
      do {
        if (*piVar5 != *piVar8) {
          bVar3 = false;
        }
        piVar8 = piVar8 + 1;
        piVar5 = piVar5 + 1;
        local_c = local_c - 1;
      } while (local_c != 0);
      if (!bVar3) {
        return 1;
      }
    }
  }
  iVar6 = FUN_00bb1bb5(param_1,(int *)0x60000,(int *)0x0,local_10,0x60000,(uint)local_14,0);
  if (iVar6 == 0) {
    *local_14 = 0;
    return 0;
  }
  return iVar6;
}


//// FUNCTION FUN_00bb3676 @ 00bb3676 ////

int __fastcall FUN_00bb3676(void *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int local_1c [2];
  uint *local_14;
  uint local_10;
  void *local_c;
  int local_8;
  
  uVar7 = **(uint **)((int)param_1 + 0x100) & 0xfffff;
  if ((**(uint **)((int)param_1 + 0x100) & 0xfff00000) == 0x70300000) {
    local_8 = *(int *)((int)param_1 + 0xfc);
    puVar1 = *(uint **)((int)param_1 + 0x100);
    local_c = param_1;
    FUN_00bafa3f(param_1,uVar7 | 0x20500000,puVar1,local_1c,2);
    if (local_14 == (uint *)0x0) {
LAB_00bb37f7:
      iVar3 = 1;
    }
    else {
      local_10 = 0;
      if (uVar7 != 0) {
        piVar6 = (int *)local_14[4];
        piVar4 = (int *)(puVar1[2] + uVar7 * 8);
        do {
          if (*piVar4 != *piVar6) goto LAB_00bb37f7;
          local_10 = local_10 + 1;
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (local_10 < uVar7);
      }
      piVar6 = (int *)puVar1[2];
      piVar2 = (int *)local_14[2];
      piVar4 = piVar6 + uVar7;
      piVar5 = piVar2 + uVar7;
      iVar3 = FUN_00bad671(local_c,(int)piVar6,piVar4,piVar2,piVar5,local_14,(int)puVar1,local_8);
      if ((((iVar3 == 0) ||
           (iVar3 = FUN_00bad671(local_c,(int)piVar4,piVar6,piVar2,piVar5,local_14,(int)puVar1,
                                 local_8), iVar3 == 0)) ||
          (iVar3 = FUN_00bad671(local_c,(int)piVar6,piVar4,piVar5,piVar2,local_14,(int)puVar1,
                                local_8), iVar3 == 0)) ||
         (((iVar3 = FUN_00bad671(local_c,(int)piVar4,piVar6,piVar5,piVar2,local_14,(int)puVar1,
                                 local_8), iVar3 == 0 ||
           (iVar3 = FUN_00bad671(local_c,(int)piVar2,piVar5,piVar6,piVar4,local_14,(int)puVar1,
                                 local_8), iVar3 == 0)) ||
          ((iVar3 = FUN_00bad671(local_c,(int)piVar5,piVar2,piVar6,piVar4,local_14,(int)puVar1,
                                 local_8), iVar3 == 0 ||
           (iVar3 = FUN_00bad671(local_c,(int)piVar2,piVar5,piVar4,piVar6,local_14,(int)puVar1,
                                 local_8), iVar3 == 0)))))) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00bad671(local_c,(int)piVar5,piVar2,piVar4,piVar6,local_14,(int)puVar1,local_8);
      }
    }
  }
  else {
    iVar3 = 1;
  }
  return iVar3;
}


//// FUNCTION FUN_00bb37ff @ 00bb37ff ////

int * __fastcall FUN_00bb37ff(void *param_1)

{
  int iVar1;
  uint *puVar2;
  void *this;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int3 extraout_var;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined1 local_110 [128];
  int local_90 [32];
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  uVar9 = 0;
  uVar4 = 0;
  local_10 = (undefined4 *)0x0;
  if (*(int *)((int)param_1 + 8) != 0) {
    do {
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x14) + uVar4 * 4) + 0x30) = 0xffffffff;
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x14) + uVar4 * 4) + 0x34) = 0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)param_1 + 8));
  }
  local_c = *(uint *)((int)param_1 + 0xc);
  piVar5 = FUN_00baef5f(param_1,-1,1,(uint *)&local_10,0,0,(int *)0x0,local_c,(int *)0x1,0,0,0);
  if (*(int *)((int)param_1 + 8) != 0) {
    do {
      iVar7 = uVar9 * 4;
      piVar8 = (int *)(*(int *)((int)param_1 + 0x14) + iVar7);
      iVar1 = *piVar8;
      if ((*(int *)(iVar1 + 0x30) != -1) || (*(int *)(iVar1 + 0x34) != -1)) {
        iVar1 = *piVar8;
        *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0x30);
        iVar1 = *(int *)(iVar7 + *(int *)((int)param_1 + 0x14));
        *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x34);
      }
      *(undefined4 *)(*(int *)(iVar7 + *(int *)((int)param_1 + 0x14)) + 0x30) = 0xffffffff;
      *(undefined4 *)(*(int *)(iVar7 + *(int *)((int)param_1 + 0x14)) + 0x34) = 0xffffffff;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)((int)param_1 + 8));
  }
  uVar4 = 0;
  if (local_c != 0) {
    do {
      iVar1 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      **(undefined4 **)(*(int *)((int)param_1 + 0x18) + iVar1) = 0;
    } while (uVar4 < local_c);
  }
  if (-1 < (int)piVar5) {
    *(undefined4 *)((int)param_1 + 0xfc) = 0;
    FUN_00badddb(param_1,(int)local_110,local_90,0,0);
    local_c = 0;
    if (*(int *)((int)param_1 + 0xc) != 0) {
      do {
        puVar2 = *(uint **)(*(int *)((int)param_1 + 0x18) + local_c * 4);
        uVar4 = *puVar2 & 0xfff00000;
        if ((*puVar2 & 0xfffff) == 1) {
          local_10 = (undefined4 *)0xffffffff;
          local_8 = 0xffffffff;
          if ((((uVar4 == 0x73000000) || (uVar4 == 0x73200000)) || (uVar4 == 0x73100000)) ||
             (uVar4 == 0x73300000)) {
            iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + *(int *)puVar2[2] * 4);
            uVar4 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x10) + *(int *)(iVar1 + 4) * 4) + 4)
            ;
            if (((uVar4 & 0x200) != 0) && ((uVar4 & 0x2000) == 0)) {
              piVar5 = (int *)FUN_00badfe9(param_1,0xd90988,0x2000,iVar1,(int *)&local_10);
              if ((int)piVar5 < 0) {
                return piVar5;
              }
              *(undefined4 **)puVar2[2] = local_10;
            }
          }
          else if (uVar4 == 0x73b00000) {
            iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + *(int *)(puVar2[2] + 4) * 4);
            if ((((*(byte *)(*(int *)(*(int *)((int)param_1 + 0x10) + *(int *)(iVar1 + 4) * 4) + 5)
                  & 1) != 0) && (*(int *)(iVar1 + 8) == -1)) && (*(double *)(iVar1 + 0x20) == 0.0))
            {
              local_8 = FUN_00b6c1b2(param_1,0,0,0,0);
              if (local_8 == 0xffffffff) {
                return (int *)0x8007000e;
              }
              local_10 = *(undefined4 **)(*(int *)((int)param_1 + 0x14) + *(int *)puVar2[2] * 4);
              this = *(void **)(*(int *)((int)param_1 + 0x14) + local_8 * 4);
              piVar5 = (int *)FUN_00b6bcde(this,local_10);
              if ((int)piVar5 < 0) {
                return piVar5;
              }
              piVar5 = (int *)FUN_00b6bd9a(this,(int)local_10);
              if ((int)piVar5 < 0) {
                return piVar5;
              }
              *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) ^ 0x80000;
              *(undefined4 *)((int)this + 0x38) = *(undefined4 *)puVar2[2];
              *(uint *)(puVar2[2] + 4) = local_8;
            }
          }
          else if ((uVar4 == 0x74200000) || (uVar4 == 0x74100000)) {
            iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + *(int *)puVar2[2] * 4);
            uVar4 = *(uint *)(*(int *)(*(int *)((int)param_1 + 0x10) + *(int *)(iVar1 + 4) * 4) + 4)
            ;
            if (((uVar4 & 0x200) != 0) && ((uVar4 & 0x40000) == 0)) {
              piVar5 = (int *)FUN_00badfe9(param_1,0xd9099c,0x40000,iVar1,(int *)&local_8);
              if ((int)piVar5 < 0) {
                return piVar5;
              }
              *(uint *)puVar2[2] = local_8;
              iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + local_8 * 4);
              local_8 = 1;
              if (1 < puVar2[1]) {
                do {
                  iVar7 = *(int *)(puVar2[2] + local_8 * 4);
                  iVar6 = iVar1;
                  if (iVar7 != -1) {
                    iVar6 = *(int *)(*(int *)((int)param_1 + 0x14) + iVar7 * 4);
                  }
                  iVar7 = FUN_00b6c1b2(param_1,*(undefined4 *)(iVar1 + 4),
                                       *(undefined4 *)(iVar1 + 0xc),local_8,
                                       *(undefined8 *)(iVar6 + 0x20));
                  uVar4 = local_8 + 1;
                  *(int *)(puVar2[2] + local_8 * 4) = iVar7;
                  local_8 = uVar4;
                } while (uVar4 < puVar2[1]);
              }
            }
          }
        }
        local_c = local_c + 1;
      } while (local_c < *(uint *)((int)param_1 + 0xc));
    }
    bVar3 = FUN_00b7359e(param_1);
    piVar5 = (int *)CONCAT31(extraout_var,bVar3);
    if (-1 < extraout_var) {
      piVar5 = (int *)0x0;
    }
  }
  return piVar5;
}


//// FUNCTION FUN_00bb3b23 @ 00bb3b23 ////

int __thiscall FUN_00bb3b23(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00bb00e8(this,1);
  if (-1 < iVar2) {
    piVar1 = (int *)((int)this + 0x110);
    *(undefined4 *)(*(int *)((int)this + 0x10c) + *piVar1 * 4) = param_1;
    *piVar1 = *piVar1 + 1;
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00bb3b53 @ 00bb3b53 ////

int __fastcall FUN_00bb3b53(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_18 [16];
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_00b6a0ff(local_18,0x53455250);
  iVar1 = FUN_00b79c85((int)param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(**(int **)((int)param_1 + 0xe0) + 8))(&local_8);
    if (-1 < iVar1) {
      if (iVar1 == 0) {
        puVar7 = (undefined4 *)0x0;
        uVar6 = 1;
        piVar5 = local_8;
        uVar2 = (**(code **)(*local_8 + 0x10))();
        pcVar3 = (char *)(**(code **)(*local_8 + 0xc))(local_8,uVar2);
        iVar1 = FUN_00b6a154(local_18,pcVar3,(char *)piVar5,uVar6,puVar7);
        if (iVar1 < 0) goto LAB_00bb3c5c;
      }
      puVar4 = (uint *)FUN_00b6a28d((int)local_18);
      if (puVar4 < (uint *)0x8001) {
        iVar1 = FUN_00bb00e8(param_1,(int)puVar4);
        if (-1 < iVar1) {
          _memmove((void *)(*(int *)((int)param_1 + 0x10c) + 4 + (int)puVar4 * 4),
                   (void *)(*(int *)((int)param_1 + 0x10c) + 4),
                   *(int *)((int)param_1 + 0x110) * 4 - 4);
          iVar1 = FUN_00b6a299(local_18,(uint *)(*(int *)((int)param_1 + 0x10c) + 4),puVar4);
          if (-1 < iVar1) {
            *(int *)((int)param_1 + 0x110) = *(int *)((int)param_1 + 0x110) + (int)puVar4;
            *(int *)((int)param_1 + 0x120) = *(int *)((int)param_1 + 0x120) + (int)puVar4;
            *(undefined4 *)((int)param_1 + 0x11c) = *(undefined4 *)((int)param_1 + 0x110);
            iVar1 = 0;
          }
        }
      }
      else {
        FUN_00b7112e((int)param_1,0,0x11c4,"constant table info exceeds maximum comment size");
        iVar1 = -0x7fffbffb;
      }
    }
  }
LAB_00bb3c5c:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_00b6a11c((int)local_18);
  return iVar1;
}


//// FUNCTION FUN_00bb3c7b @ 00bb3c7b ////

void __fastcall FUN_00bb3c7b(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  bool bVar17;
  longlong lVar18;
  char local_180 [254];
  undefined1 local_82;
  char *local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  char local_74 [4];
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_54 [16];
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  int *local_34;
  char *local_30;
  int local_2c;
  byte *local_28;
  byte *local_24;
  uint local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  undefined4 *local_10;
  uint local_c;
  byte *local_8;
  
  local_34 = param_1;
  FUN_00b6a0ff(local_54,(-(uint)(param_1[0x56] != 0) & 0x40cf503) + 0x42415443);
  pcVar7 = local_74;
  for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  local_6c = param_1[0x32];
  local_60 = param_1[0x33];
  local_74[0] = '\x1c';
  local_74[1] = '\0';
  local_74[2] = '\0';
  local_74[3] = '\0';
  local_30 = (char *)0x0;
  local_10 = (undefined4 *)0x0;
  local_44 = (char *)0x0;
  local_3c = (char *)0x0;
  local_40 = (char *)0x0;
  local_28 = (byte *)0x0;
  iVar10 = FUN_00b6a154(local_54,local_74,(char *)0x1c,1,(undefined4 *)0x0);
  piVar3 = local_34;
  if (-1 < iVar10) {
    pbVar15 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
    local_18 = (byte *)0x0;
    local_8 = (byte *)0x0;
    if (local_34[2] != 0) {
      local_14 = (byte *)local_34[5];
      local_1c = (byte *)local_34[2];
      do {
        local_c = *(uint *)(*(int *)(local_34[4] + *(int *)(*(int *)local_14 + 4) * 4) + 4);
        if (((local_c & 0x200) != 0) && ((local_c & 0x100) == 0)) {
          pbVar13 = *(byte **)(*(int *)local_14 + 0xc);
          if ((local_c & 0x80) == 0) {
            if ((local_c & 0x2000) == 0) {
              if ((local_c & 0x40000) == 0) {
                if (pbVar11 <= pbVar13) {
                  pbVar11 = pbVar13 + 1;
                }
              }
              else if (local_8 <= pbVar13) {
                local_8 = pbVar13 + 1;
              }
            }
            else if (local_18 <= pbVar13) {
              local_18 = pbVar13 + 1;
            }
          }
          else if (pbVar15 <= pbVar13) {
            pbVar15 = pbVar13 + 1;
          }
        }
        local_14 = (byte *)((int)local_14 + 4);
        local_1c = local_1c + -1;
      } while (local_1c != (byte *)0x0);
    }
    local_24 = pbVar11 + (int)local_18;
    local_14 = pbVar15 + (int)pbVar11 + (int)local_18;
    pbVar15 = local_8 + (int)pbVar15 + (int)pbVar11 + (int)local_18;
    local_10 = operator_new((int)pbVar15 * 4);
    if ((local_10 != (undefined4 *)0x0) &&
       (local_28 = operator_new((int)pbVar15 * 4), local_28 != (byte *)0x0)) {
      local_c = 0;
      puVar16 = local_10;
      for (uVar12 = (uint)pbVar15 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined1 *)puVar16 = 0;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      if (piVar3[2] != 0) {
        do {
          iVar10 = *(int *)(piVar3[5] + local_c * 4);
          if ((((*(int *)(iVar10 + 0x60) != 0) && (*(int *)(iVar10 + 8) == -1)) &&
              (uVar12 = *(uint *)(*(int *)(piVar3[4] + *(int *)(iVar10 + 4) * 4) + 4),
              (uVar12 & 0x200) != 0)) && ((uVar12 & 0x100) == 0)) {
            pbVar11 = local_24;
            if (-1 < (char)uVar12) {
              if ((uVar12 & 0x2000) == 0) {
                pbVar11 = local_14;
                if ((uVar12 & 0x40000) == 0) {
                  pbVar11 = local_18;
                }
              }
              else {
                pbVar11 = (byte *)0x0;
              }
            }
            iVar14 = *(int *)(iVar10 + 0xc);
            uVar12 = *(uint *)(iVar10 + 0x70);
            pbVar13 = pbVar11 + iVar14 + 1;
            while (pbVar11 + (iVar14 - (uVar12 >> 2)) < pbVar13) {
              pbVar13 = pbVar13 + -1;
              if (local_10[(int)pbVar13] != 0) break;
              local_10[(int)pbVar13] = iVar10;
            }
          }
          local_c = local_c + 1;
        } while (local_c < (uint)piVar3[2]);
      }
      pbVar13 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      local_1c = (byte *)0x0;
      if (pbVar15 != (byte *)0x0) {
        do {
          if (local_10[(int)pbVar11] != 0) {
            local_10[(int)local_1c] = local_10[(int)pbVar11];
            local_1c = local_1c + 1;
          }
          pbVar11 = pbVar11 + 1;
        } while (pbVar11 < pbVar15);
      }
      iVar10 = 0;
      local_20 = 0;
      if (local_1c != (byte *)0x0) {
        do {
          if (((((iVar10 == 0) || (*(int *)(local_10[(int)pbVar13] + 4) != *(int *)(iVar10 + 4))) ||
               ((*(int *)(local_10[(int)pbVar13] + 0x60) != *(int *)(iVar10 + 0x60) ||
                (*(int *)(local_10[(int)pbVar13] + 0xc) -
                 (*(uint *)(local_10[(int)pbVar13] + 0x70) >> 2) !=
                 *(int *)(iVar10 + 0xc) - (*(uint *)(iVar10 + 0x70) >> 2))))) &&
              (((iVar10 = local_10[(int)pbVar13], iVar10 != 0 &&
                (iVar14 = *(int *)(iVar10 + 0x60), *(int *)(iVar14 + 4) == 6)) &&
               ((iVar2 = *(int *)(iVar14 + 0x14), iVar2 != 0 &&
                (((*(int *)(iVar2 + 4) == 3 && (*(int *)(iVar14 + 0x18) != 0)) &&
                 (*(int *)(*(int *)(iVar14 + 0x18) + 4) == 0xb)))))))) &&
             ((*(int *)(iVar2 + 0x10) == 9 && (*(int *)(iVar2 + 0x18) != 0)))) {
            *(byte **)(local_28 + local_20 * 4) = pbVar13;
            local_20 = local_20 + 1;
          }
          pbVar13 = pbVar13 + 1;
        } while (pbVar13 < local_1c);
      }
      local_c = 0;
      if (local_20 != 0) {
        do {
          local_8 = *(byte **)(local_28 + local_c * 4);
          local_14 = (byte *)local_10[(int)local_8];
          local_24 = *(byte **)(*(int *)(*(int *)(local_14 + 0x60) + 0x14) + 0x18);
          uVar12 = 0;
          if (local_c != 0) {
            do {
              pbVar15 = *(byte **)(*(int *)(*(int *)(local_10[*(int *)(local_28 + uVar12 * 4)] +
                                                    0x60) + 0x14) + 0x18);
              pbVar11 = local_24;
              do {
                bVar1 = *pbVar11;
                bVar17 = bVar1 < *pbVar15;
                if (bVar1 != *pbVar15) {
LAB_00bb3f75:
                  iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                  goto LAB_00bb3f7a;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar11[1];
                bVar17 = bVar1 < pbVar15[1];
                if (bVar1 != pbVar15[1]) goto LAB_00bb3f75;
                pbVar11 = pbVar11 + 2;
                pbVar15 = pbVar15 + 2;
              } while (bVar1 != 0);
              iVar10 = 0;
LAB_00bb3f7a:
            } while (((-1 < iVar10) &&
                     ((0 < iVar10 ||
                      (*(uint *)(local_10[*(int *)(local_28 + uVar12 * 4)] + 4) <=
                       *(uint *)(local_14 + 4))))) && (uVar12 = uVar12 + 1, uVar12 < local_c));
            uVar6 = local_c;
            if (uVar12 < local_c) {
              do {
                *(undefined4 *)(local_28 + uVar6 * 4) = *(undefined4 *)(local_28 + uVar6 * 4 + -4);
                uVar6 = uVar6 - 1;
              } while (uVar12 < uVar6);
              *(byte **)(local_28 + uVar12 * 4) = local_8;
            }
          }
          local_c = local_c + 1;
        } while (local_c < local_20);
      }
      iVar10 = (**(code **)(*local_34 + 0x8c))();
      iVar10 = iVar10 + local_20;
      if (iVar10 != 0) {
        local_30 = operator_new((uint)(iVar10 * 0x14));
        if (local_30 == (char *)0x0) goto LAB_00bb45a3;
        pcVar7 = local_30;
        for (uVar12 = iVar10 * 5 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
          *pcVar7 = '\0';
          pcVar7 = pcVar7 + 1;
        }
        iVar14 = FUN_00b6a154(local_54,local_30,(char *)(iVar10 * 0x14),1,&local_64);
        if (iVar14 < 0) goto LAB_00bb45a3;
        local_c = 0;
        local_68 = iVar10;
        if (local_20 != 0) {
          pbVar15 = (byte *)(local_30 + 4);
          pbVar11 = local_28;
          do {
            iVar10 = *(int *)(local_10[*(int *)pbVar11] + 0x60);
            local_2c = *(int *)(iVar10 + 0x18);
            pcVar7 = *(char **)(*(int *)(iVar10 + 0x14) + 0x18);
            local_38 = *(char **)(local_34[4] + *(int *)(local_10[*(int *)pbVar11] + 4) * 4);
            local_18 = pbVar15;
            local_14 = pbVar11;
            if (local_34[0x56] == 0) {
              uVar12 = 7;
            }
            else {
              uVar12 = *(uint *)(local_38 + 4);
              pcVar8 = "c_%s";
              if ((uVar12 & 0x2000) == 0) {
                if ((uVar12 & 0x40000) == 0) {
                  if ((char)uVar12 < '\0') {
                    pcVar8 = "s_%s";
                  }
                }
                else {
                  pcVar8 = "i_%s";
                }
              }
              else {
                pcVar8 = "b_%s";
              }
              __snprintf(local_180,0xff,pcVar8,pcVar7);
              uVar12 = 6;
              pcVar7 = local_180;
              local_82 = 0;
            }
            iVar10 = FUN_00b6a154(local_54,pcVar7,(char *)0xffffffff,uVar12,
                                  (undefined4 *)(pbVar15 + -4));
            if (iVar10 < 0) goto LAB_00bb45a3;
            pbVar13 = (byte *)(*(int *)pbVar11 + 1);
            iVar10 = 1;
            if (pbVar13 < local_1c) {
              local_58 = *(int *)(local_10[*(int *)pbVar11] + 4);
              local_24 = (byte *)(local_10 + *(int *)pbVar11 + 1);
              local_8 = pbVar13;
              do {
                if (((local_58 != *(int *)(*(int *)local_24 + 4)) ||
                    (*(int *)(local_10[*(int *)pbVar11] + 0x60) !=
                     *(int *)(local_10[*(int *)pbVar11 + iVar10] + 0x60))) ||
                   (*(int *)(local_10[*(int *)pbVar11] + 0xc) -
                    (*(uint *)(local_10[*(int *)pbVar11] + 0x70) >> 2) !=
                    *(int *)(local_10[*(int *)pbVar11 + iVar10] + 0xc) -
                    (*(uint *)(local_10[*(int *)pbVar11 + iVar10] + 0x70) >> 2))) break;
                local_24 = local_24 + 4;
                iVar10 = iVar10 + 1;
                local_8 = local_8 + 1;
              } while (local_8 < local_1c);
            }
            uVar12 = *(uint *)(local_38 + 4);
            if ((char)uVar12 < '\0') {
              sVar5 = 3;
            }
            else if ((uVar12 & 0x2000) == 0) {
              sVar5 = 2 - (ushort)((uVar12 & 0x40000) != 0);
            }
            else {
              sVar5 = 0;
            }
            *(short *)pbVar15 = sVar5;
            *(short *)(pbVar15 + 2) =
                 *(short *)(local_10[*(int *)pbVar11] + 0xc) -
                 (short)(*(uint *)(local_10[*(int *)pbVar11] + 0x70) >> 2);
            *(short *)(pbVar15 + 4) = (short)iVar10;
            if (((*(int *)(local_2c + 0x20) != 0) &&
                (iVar10 = FUN_00bafdef(local_54,*(int *)(local_2c + 0x20),1,
                                       *(uint *)(local_10[*(int *)pbVar11] + 0x3c) & 0xe00000,
                                       (undefined4 *)(pbVar15 + 8)), iVar10 < 0)) ||
               ((*(int *)(local_2c + 0x30) != 0 &&
                (iVar10 = (**(code **)(*local_34 + 0x94))(local_2c,pbVar15 + -4), iVar10 < 0))))
            goto LAB_00bb45a3;
            iVar10 = *(int *)(local_2c + 0x34);
            if (iVar10 != 0) {
              sVar5 = *(short *)pbVar15;
              if (sVar5 == 1) {
                local_24 = (byte *)((iVar10 + 3U & 0xfffffffc) << 2);
                pcVar7 = operator_new((uint)local_24);
                local_40 = pcVar7;
                if (pcVar7 == (char *)0x0) goto LAB_00bb45a3;
                pcVar8 = pcVar7;
                for (uVar12 = (uint)local_24 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  pcVar8[0] = '\0';
                  pcVar8[1] = '\0';
                  pcVar8[2] = '\0';
                  pcVar8[3] = '\0';
                  pcVar8 = pcVar8 + 4;
                }
                uVar6 = iVar10 + 3U >> 2;
                for (uVar12 = (uint)local_24 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar8 = '\0';
                  pcVar8 = pcVar8 + 1;
                }
                if (uVar6 != 0) {
                  pcVar8 = pcVar7 + 8;
                  do {
                    pcVar8[0] = '\x01';
                    pcVar8[1] = '\0';
                    pcVar8[2] = '\0';
                    pcVar8[3] = '\0';
                    pcVar8 = pcVar8 + 0x10;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
                local_8 = (byte *)0x0;
                iVar10 = local_2c;
                if (*(int *)(local_2c + 0x34) != 0) {
                  do {
                    iVar14 = (int)local_8 * 4;
                    piVar3 = *(int **)(iVar14 + *(int *)(iVar10 + 0x38));
                    if (piVar3 != (int *)0x0) {
                      iVar2 = *piVar3;
                      if (iVar2 == 0) {
                        *(uint *)(pcVar7 + iVar14) = (uint)(piVar3[2] != 0);
                      }
                      else if ((iVar2 == 1) || (iVar2 == 2)) {
                        *(int *)(pcVar7 + iVar14) = piVar3[2];
                      }
                      else if (iVar2 == 3) {
                        lVar18 = __ftol();
                        *(int *)(pcVar7 + iVar14) = (int)lVar18;
                        iVar10 = local_2c;
                      }
                    }
                    local_8 = local_8 + 1;
                  } while (local_8 < *(byte **)(iVar10 + 0x34));
                }
                iVar10 = FUN_00b6a154(local_54,pcVar7,(char *)local_24,0xb,
                                      (undefined4 *)(local_18 + 0xc));
                if (iVar10 < 0) goto LAB_00bb45a3;
                local_40 = (char *)0x0;
                pbVar15 = local_18;
                pbVar11 = local_14;
              }
              else if (sVar5 == 2) {
                local_38 = (char *)((iVar10 + 3U & 0xfffffffc) << 2);
                local_44 = operator_new((uint)local_38);
                if (local_44 == (char *)0x0) goto LAB_00bb45a3;
                pcVar7 = local_44;
                for (uVar12 = iVar10 + 3U & 0x3ffffffc; uVar12 != 0; uVar12 = uVar12 - 1) {
                  pcVar7[0] = '\0';
                  pcVar7[1] = '\0';
                  pcVar7[2] = '\0';
                  pcVar7[3] = '\0';
                  pcVar7 = pcVar7 + 4;
                }
                for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *pcVar7 = '\0';
                  pcVar7 = pcVar7 + 1;
                }
                uVar12 = 0;
                if (*(int *)(local_2c + 0x34) != 0) {
                  do {
                    piVar3 = *(int **)(uVar12 * 4 + *(int *)(local_2c + 0x38));
                    if (piVar3 != (int *)0x0) {
                      iVar10 = *piVar3;
                      if (iVar10 == 0) {
                        if (piVar3[2] == 0) {
                          fVar4 = 0.0;
                        }
                        else {
                          fVar4 = 1.0;
                        }
                      }
                      else if (iVar10 == 1) {
                        fVar4 = (float)piVar3[2];
                      }
                      else if (iVar10 == 2) {
                        local_58 = piVar3[2];
                        fVar4 = (float)local_58;
                        if (local_58 < 0) {
                          fVar4 = fVar4 + 4.2949673e+09;
                        }
                      }
                      else {
                        if (iVar10 != 3) goto LAB_00bb4378;
                        fVar4 = (float)*(double *)(piVar3 + 2);
                      }
                      *(float *)(local_44 + uVar12 * 4) = fVar4;
                    }
LAB_00bb4378:
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(uint *)(local_2c + 0x34));
                }
                iVar10 = FUN_00b6a154(local_54,local_44,local_38,0xb,(undefined4 *)(local_18 + 0xc))
                ;
                if (iVar10 < 0) goto LAB_00bb45a3;
                local_44 = (char *)0x0;
                pbVar15 = local_18;
                pbVar11 = local_14;
              }
              else if (sVar5 == 0) {
                uVar12 = *(uint *)(local_2c + 0x14);
                local_38 = (char *)(uVar12 << 2);
                local_3c = operator_new((uint)local_38);
                if (local_3c == (char *)0x0) goto LAB_00bb45a3;
                pcVar7 = local_3c;
                for (uVar12 = uVar12 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
                  pcVar7[0] = '\0';
                  pcVar7[1] = '\0';
                  pcVar7[2] = '\0';
                  pcVar7[3] = '\0';
                  pcVar7 = pcVar7 + 4;
                }
                for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *pcVar7 = '\0';
                  pcVar7 = pcVar7 + 1;
                }
                local_8 = (byte *)0x0;
                if (*(int *)(local_2c + 0x14) != 0) {
                  do {
                    iVar10 = (int)local_8 * 4;
                    piVar3 = *(int **)(iVar10 + *(int *)(local_2c + 0x3c));
                    if (piVar3 != (int *)0x0) {
                      iVar14 = *piVar3;
                      if (((iVar14 == 0) || (iVar14 == 1)) || (iVar14 == 2)) {
                        *(uint *)(local_3c + iVar10) = (uint)(piVar3[2] != 0);
                      }
                      else if (iVar14 == 3) {
                        *(uint *)(local_3c + iVar10) = (uint)(*(double *)(piVar3 + 2) != 0.0);
                      }
                    }
                    local_8 = local_8 + 1;
                  } while (local_8 < *(byte **)(local_2c + 0x14));
                }
                iVar10 = FUN_00b6a154(local_54,local_3c,local_38,0xb,(undefined4 *)(local_18 + 0xc))
                ;
                if (iVar10 < 0) goto LAB_00bb45a3;
                local_3c = (char *)0x0;
                pbVar15 = local_18;
                pbVar11 = local_14;
              }
            }
            local_c = local_c + 1;
            pbVar11 = pbVar11 + 4;
            pbVar15 = pbVar15 + 0x14;
            local_18 = pbVar15;
            local_14 = pbVar11;
          } while (local_c < local_20);
        }
      }
      iVar10 = (**(code **)(*local_34 + 0x90))(local_54,local_30,local_20);
      piVar3 = local_34;
      if (-1 < iVar10) {
        local_80 = (char *)0x0;
        uStack_7c = 0;
        uStack_78 = 0;
        iVar10 = FUN_00b27aaa(local_34[0x42],0,&local_80);
        if (((-1 < iVar10) &&
            (iVar10 = FUN_00b6a154(local_54,local_80,(char *)0xffffffff,5,&local_5c), -1 < iVar10))
           && (iVar10 = FUN_00b6a154(local_54,"Microsoft (R) D3DX9 Shader Compiler 5.04.00.2904",
                                     (char *)0xffffffff,5,&local_70), -1 < iVar10)) {
          puVar9 = (uint *)FUN_00b6a28d((int)local_54);
          if (puVar9 < (uint *)0x8001) {
            iVar10 = FUN_00bb00e8(piVar3,(int)puVar9);
            if (-1 < iVar10) {
              _memmove((void *)(piVar3[0x43] + 4 + (int)puVar9 * 4),(void *)(piVar3[0x43] + 4),
                       piVar3[0x44] * 4 - 4);
              iVar10 = FUN_00b6a299(local_54,(uint *)(piVar3[0x43] + 4),puVar9);
              if (-1 < iVar10) {
                piVar3[0x44] = piVar3[0x44] + (int)puVar9;
                piVar3[0x48] = piVar3[0x48] + (int)puVar9;
                piVar3[0x47] = piVar3[0x44];
              }
            }
          }
          else {
            FUN_00b7112e((int)piVar3,0,0x11c4,"constant table info exceeds maximum comment size");
          }
        }
      }
    }
  }
LAB_00bb45a3:
                    /* WARNING: Subroutine does not return */
  _free(local_30);
}


//// FUNCTION FUN_00bb45e5 @ 00bb45e5 ////

void __fastcall FUN_00bb45e5(void *param_1)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char local_70 [4];
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  char *local_38;
  char *local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  undefined4 *local_14;
  char *local_10;
  int *local_c;
  int *local_8;
  
  FUN_00b6a0ff(local_48,0x47554244);
  iVar7 = 0;
  pcVar9 = local_70;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  local_70[0] = '(';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  local_20 = (char *)0x0;
  local_18 = (char *)0x0;
  local_24 = (char *)0x0;
  local_1c = (char *)0x0;
  local_14 = (undefined4 *)0x0;
  local_8 = (int *)0x0;
  local_10 = (char *)FUN_00b6a154(local_48,local_70,(char *)0x28,1,(undefined4 *)0x0);
  if ((int)local_10 < 0) goto LAB_00bb4c2e;
  local_5c = *(int **)((int)param_1 + 0x128);
  if (local_5c == (int *)0x0) goto LAB_00bb4ae5;
  local_20 = operator_new((int)local_5c << 2);
  piVar2 = local_5c;
  pcVar9 = local_20;
  if (local_20 != (char *)0x0) {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)((int)piVar2 + -1)) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    local_18 = operator_new((int)local_5c << 3);
    if (local_18 != (char *)0x0) {
      local_34 = (char *)((int)local_5c << 3);
      pcVar9 = local_18;
      for (iVar5 = ((uint)local_5c & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + 4;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pcVar9 = '\0';
        pcVar9 = pcVar9 + 1;
      }
      local_14 = operator_new((int)local_5c << 4);
      if (local_14 != (undefined4 *)0x0) {
        puVar8 = local_14;
        for (iVar5 = ((uint)local_5c & 0xfffffff) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        local_c = (int *)0x0;
        if (local_5c != (int *)0x0) {
          pcVar9 = local_18 + 2;
          do {
            pcVar9[0] = -1;
            pcVar9[1] = -1;
            pcVar9[-0xffffffff00000002] = '\0';
            pcVar9[-0xffffffff00000001] = '\0';
            local_2c = iVar7 + 8;
            *(undefined4 *)(pcVar9 + 2) =
                 *(undefined4 *)(*(int *)((int)param_1 + 0x124) + 4 + iVar7);
            local_28 = (int *)0x4;
            do {
              iVar5 = *(int *)(local_2c + *(int *)((int)param_1 + 0x124));
              if ((iVar5 != -1) &&
                 (iVar5 = *(int *)(*(int *)((int)param_1 + 0x14) + iVar5 * 4),
                 *(int **)(iVar5 + 0x74) = local_c, *(int *)(iVar5 + 0x60) != 0)) {
                local_14[(int)local_8] = *(undefined4 *)(local_2c + *(int *)((int)param_1 + 0x124));
                local_8 = (int *)((int)local_8 + 1);
              }
              local_2c = local_2c + 4;
              local_28 = (int *)((int)local_28 + -1);
            } while (local_28 != (int *)0x0);
            iVar5 = *(int *)(iVar7 + *(int *)((int)param_1 + 0x124));
            if (iVar5 != 0) {
              *(undefined2 *)(pcVar9 + -2) = *(undefined2 *)(iVar5 + 0x14);
              pcVar1 = *(char **)(*(int *)(*(int *)((int)param_1 + 0x124) + iVar7) + 0x10);
              if (pcVar1 != (char *)0x0) {
                iVar5 = FUN_00b6a154(local_48,pcVar1,(char *)0xffffffff,7,&local_30);
                if (iVar5 < 0) goto LAB_00bb4c2e;
                local_2c = 0;
                if (local_64 != 0) {
                  do {
                    if (*(int *)(local_20 + local_2c * 4) == local_30) break;
                    local_2c = local_2c + 1;
                  } while (local_2c < local_64);
                }
                if (local_2c == local_64) {
                  *(int *)(local_20 + local_64 * 4) = local_30;
                  local_64 = local_64 + 1;
                }
                *(short *)pcVar9 = (short)local_2c;
              }
            }
            local_c = (int *)((int)local_c + 1);
            iVar7 = iVar7 + 0x18;
            pcVar9 = pcVar9 + 8;
          } while (local_c < local_5c);
        }
        if (((local_64 != 0) &&
            (local_10 = (char *)FUN_00b6a154(local_48,local_20,(char *)(local_64 << 2),1,&local_60),
            (int)local_10 < 0)) ||
           (local_10 = (char *)FUN_00b6a154(local_48,local_18,local_34,1,&local_58),
           puVar8 = local_14, (int)local_10 < 0)) goto LAB_00bb4c2e;
        if (local_8 != (int *)0x0) {
          FUN_00b6c999(FUN_00ba5683,local_14,(uint)local_8,param_1);
          piVar2 = (int *)0x1;
          local_54 = 1;
          if ((int *)0x1 < local_8) {
            do {
              if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x14) +
                                   puVar8[(int)((int)piVar2 + -1)] * 4) + 0x60) !=
                  *(int *)(*(int *)(*(int *)((int)param_1 + 0x14) + puVar8[(int)piVar2] * 4) + 0x60)
                 ) {
                local_54 = local_54 + 1;
              }
              piVar2 = (int *)((int)piVar2 + 1);
            } while (piVar2 < local_8);
          }
          local_24 = operator_new(local_54 * 0x14);
          if (local_24 == (char *)0x0) goto LAB_00bb4c0e;
          local_38 = (char *)(local_54 * 0x14);
          pcVar9 = local_24;
          for (uVar6 = local_54 * 5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
            pcVar9[0] = '\0';
            pcVar9[1] = '\0';
            pcVar9[2] = '\0';
            pcVar9[3] = '\0';
            pcVar9 = pcVar9 + 4;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pcVar9 = '\0';
            pcVar9 = pcVar9 + 1;
          }
          local_c = (int *)0x0;
          local_2c = 0;
          if (local_54 != 0) {
            piVar2 = (int *)(local_24 + 0xc);
            do {
              local_28 = local_14 + (int)local_c;
              iVar5 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x14) + *local_28 * 4) + 0x60);
              local_30 = iVar5;
              if ((((*(char **)(iVar5 + 0x20) != (char *)0x0) &&
                   (local_10 = (char *)FUN_00b6a154(local_48,*(char **)(iVar5 + 0x20),
                                                    (char *)0xffffffff,7,piVar2 + -3),
                   (int)local_10 < 0)) ||
                  ((pcVar9 = *(char **)(*(int *)(iVar5 + 0x14) + 0x18), pcVar9 != (char *)0x0 &&
                   (local_10 = (char *)FUN_00b6a154(local_48,pcVar9,(char *)0xffffffff,7,piVar2 + -2
                                                   ), (int)local_10 < 0)))) ||
                 (((*(int *)(iVar5 + 0x10) == 1 || (*(int *)(iVar5 + 0x10) == 2)) &&
                  (local_10 = (char *)FUN_00bafdef(local_48,*(int *)(*(int *)(iVar5 + 0x18) + 0x20),
                                                   1,*(uint *)(*(int *)(*(int *)((int)param_1 + 0x14
                                                                                ) + *local_28 * 4) +
                                                              0x3c) & 0xe00000,piVar2 + -1),
                  (int)local_10 < 0)))) goto LAB_00bb4c2e;
              local_28 = local_c;
              while (local_c < local_8) {
                iVar7 = *(int *)(*(int *)((int)param_1 + 0x14) + local_14[(int)local_c] * 4);
                if (iVar5 != *(int *)(iVar7 + 0x60)) break;
                local_34 = *(char **)(iVar7 + 0x74);
                while (((local_c < local_8 &&
                        (iVar7 = *(int *)(*(int *)((int)param_1 + 0x14) + local_14[(int)local_c] * 4
                                         ), iVar5 == *(int *)(iVar7 + 0x60))) &&
                       (local_34 == *(char **)(iVar7 + 0x74)))) {
                  local_c = (int *)((int)local_c + 1);
                }
                *piVar2 = *piVar2 + 1;
              }
              local_1c = operator_new(*piVar2 * 0xc);
              if (local_1c == (char *)0x0) goto LAB_00bb4c0e;
              local_10 = (char *)(*piVar2 * 0xc);
              pcVar9 = local_1c;
              for (uVar6 = *piVar2 * 3 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
                pcVar9[0] = '\0';
                pcVar9[1] = '\0';
                pcVar9[2] = '\0';
                pcVar9[3] = '\0';
                pcVar9 = pcVar9 + 4;
              }
              for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pcVar9 = '\0';
                pcVar9 = pcVar9 + 1;
              }
              *piVar2 = 0;
              local_c = local_28;
              while ((local_c < local_8 &&
                     (iVar5 = *(int *)(*(int *)((int)param_1 + 0x14) + local_14[(int)local_c] * 4),
                     local_30 == *(int *)(iVar5 + 0x60)))) {
                local_34 = *(char **)(iVar5 + 0x74);
                *(char **)(local_1c + *piVar2 * 0xc) = local_34;
                pcVar9 = local_1c + *piVar2 * 0xc + 4;
                pcVar9[0] = -1;
                pcVar9[1] = -1;
                pcVar9[2] = -1;
                pcVar9[3] = -1;
                pcVar9[4] = -1;
                pcVar9[5] = -1;
                pcVar9[6] = -1;
                pcVar9[7] = -1;
                for (; local_c < local_8; local_c = (int *)((int)local_c + 1)) {
                  local_28 = local_14 + (int)local_c;
                  iVar5 = *(int *)(*(int *)((int)param_1 + 0x14) + *local_28 * 4);
                  if ((local_30 != *(int *)(iVar5 + 0x60)) || (local_34 != *(char **)(iVar5 + 0x74))
                     ) break;
                  iVar5 = *(int *)(*(int *)((int)param_1 + 0x14) + *local_28 * 4);
                  *(undefined2 *)(local_1c + (*(int *)(iVar5 + 0x10) + *piVar2 * 6) * 2 + 4) =
                       *(undefined2 *)(iVar5 + 100);
                }
                *piVar2 = *piVar2 + 1;
              }
              local_10 = (char *)FUN_00b6a154(local_48,local_1c,local_10,0xb,piVar2 + 1);
              if ((int)local_10 < 0) goto LAB_00bb4c2e;
              local_1c = (char *)0x0;
              local_2c = local_2c + 1;
              piVar2 = piVar2 + 5;
            } while (local_2c < local_54);
          }
          local_10 = (char *)FUN_00b6a154(local_48,local_24,local_38,1,&local_50);
          if ((int)local_10 < 0) goto LAB_00bb4c2e;
        }
LAB_00bb4ae5:
        if ((((*(char **)((int)param_1 + 0xd0) != (char *)0x0) &&
             (local_10 = (char *)FUN_00b6a154(local_48,*(char **)((int)param_1 + 0xd0),
                                              (char *)0xffffffff,7,&local_4c), (int)local_10 < 0))
            || ((*(char **)((int)param_1 + 0x130) != (char *)0x0 &&
                ((iVar5 = FUN_00b6a154(local_48,*(char **)((int)param_1 + 0x130),
                                       *(char **)((int)param_1 + 0x134),5,&local_68), iVar5 < 0 ||
                 (iVar5 = FUN_00b6a154(local_48,"",(char *)0x1,5,(undefined4 *)0x0), iVar5 < 0))))))
           || (iVar5 = FUN_00b6a154(local_48,"Microsoft (R) D3DX9 Shader Compiler 5.04.00.2904",
                                    (char *)0xffffffff,5,&local_6c), iVar5 < 0)) goto LAB_00bb4c2e;
        puVar3 = (uint *)FUN_00b6a28d((int)local_48);
        if (puVar3 < (uint *)0x8001) {
          local_10 = (char *)FUN_00bb00e8(param_1,(int)puVar3);
          if ((int)local_10 < 0) goto LAB_00bb4c2e;
          _memmove((void *)(*(int *)((int)param_1 + 0x10c) + 4 + (int)puVar3 * 4),
                   (void *)(*(int *)((int)param_1 + 0x10c) + 4),
                   *(int *)((int)param_1 + 0x110) * 4 - 4);
          piVar2 = (int *)0x0;
          if (local_5c != (int *)0x0) {
            piVar4 = (int *)(local_18 + 4);
            do {
              *piVar4 = *piVar4 + (*(int *)((int)param_1 + 0x120) + (int)puVar3) * 4;
              piVar2 = (int *)((int)piVar2 + 1);
              piVar4 = piVar4 + 2;
            } while (piVar2 < local_5c);
          }
          local_10 = (char *)FUN_00b6a299(local_48,(uint *)(*(int *)((int)param_1 + 0x10c) + 4),
                                          puVar3);
          if ((int)local_10 < 0) goto LAB_00bb4c2e;
          *(int *)((int)param_1 + 0x110) = *(int *)((int)param_1 + 0x110) + (int)puVar3;
          *(int *)((int)param_1 + 0x120) = *(int *)((int)param_1 + 0x120) + (int)puVar3;
          *(undefined4 *)((int)param_1 + 0x11c) = *(undefined4 *)((int)param_1 + 0x110);
        }
        else {
          FUN_00b711b3((int)param_1,0,0x11c3,
                       "debug info exceeds maximum comment size; no debug info emitted");
        }
        local_10 = (char *)0x0;
        goto LAB_00bb4c2e;
      }
    }
  }
LAB_00bb4c0e:
  local_10 = (char *)0x8007000e;
LAB_00bb4c2e:
                    /* WARNING: Subroutine does not return */
  _free(local_20);
}


//// FUNCTION FUN_00bb4c69 @ 00bb4c69 ////

int __thiscall FUN_00bb4c69(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int local_10 [3];
  
  local_10[0] = *(int *)((int)this + 0xf4);
  local_10[1] = *(undefined4 *)((int)this + 0xf0);
  local_10[2] = *(undefined4 *)((int)this + 0xf8);
  uVar2 = 0;
  iVar1 = param_1;
  while ((local_10[uVar2] == 0 ||
         (iVar1 = FUN_00bb10f1(local_10[uVar2],param_1), *(int *)(iVar1 + 0x10) == -1))) {
    uVar2 = uVar2 + 1;
    if (2 < uVar2) {
      return iVar1;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb4cb8 @ 00bb4cb8 ////

undefined4 * __thiscall FUN_00bb4cb8(void *this,byte param_1)

{
  FUN_00bb11f5(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bb4cd9 @ 00bb4cd9 ////

void __thiscall FUN_00bb4cd9(void *this,uint *param_1)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  longlong lVar15;
  char *pcVar16;
  undefined4 local_4c [3];
  void *local_40;
  int *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  int *local_30;
  undefined4 *local_2c;
  uint local_28;
  undefined4 *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  undefined4 *local_c;
  uint local_8;
  
  *(undefined4 *)((int)this + 0x104) = 0;
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_3c = (int *)0x0;
  local_28 = 0;
  local_38 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_30 = (int *)0x0;
  local_40 = (void *)0x0;
  local_20 = (int *)0x0;
  local_2c = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  iVar1 = FUN_00b7f3d5(this,param_1);
  if (-1 < iVar1) {
    iVar1 = FUN_00b6c159(this,&DAT_00d9099c,0x40311,0xffffffff,4);
    *(int *)((int)this + 0x184) = iVar1;
    if ((iVar1 != -1) && (iVar1 = (**(code **)(*(int *)this + 0xa0))(), iVar1 == 0)) {
      *(undefined4 *)((int)this + 0x10c) = 0;
      *(undefined4 *)((int)this + 0x110) = 0;
      *(undefined4 *)((int)this + 0x114) = 0;
      *(undefined4 *)((int)this + 0x11c) = 0;
      *(undefined4 *)((int)this + 0x120) = 0;
      if (*(int **)((int)this + 0x1b0) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x1b0) + 8))();
        *(undefined4 *)((int)this + 0x1b0) = 0;
      }
      if (((*(byte *)((int)this + 0xcc) & 2) == 0) &&
         (((hModule = GetModuleHandleA("d3d9.dll"), hModule != (HMODULE)0x0 ||
           (hModule = LoadLibraryA("d3d9.dll"), hModule != (HMODULE)0x0)) &&
          (pFVar2 = GetProcAddress(hModule,"Direct3DShaderValidatorCreate9"), pFVar2 != (FARPROC)0x0
          )))) {
        piVar3 = (int *)(*pFVar2)();
        *(int **)((int)this + 0x1b0) = piVar3;
        if ((piVar3 != (int *)0x0) &&
           (iVar1 = (**(code **)(*piVar3 + 0xc))(piVar3,FUN_00bb0d36,this), iVar1 < 0))
        goto LAB_00bb57e9;
      }
      if ((*(byte *)((int)this + 0xcc) & 1) != 0) {
        pvVar4 = operator_new(*(int *)((int)this + 0xc) * 0x30);
        *(void **)((int)this + 0x124) = pvVar4;
        if (pvVar4 == (void *)0x0) goto LAB_00bb57e9;
        *(undefined4 *)((int)this + 0x128) = 0;
        *(int *)((int)this + 300) = *(int *)((int)this + 0xc) << 1;
      }
      *(undefined4 *)((int)this + 0x138) = 0xffffffff;
      uVar5 = 0;
      *(undefined4 *)((int)this + 0x14c) = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(*(int *)(*(int *)((int)this + 0x14) + iVar1) + 0x30) = 0;
        } while (uVar5 < *(uint *)((int)this + 8));
      }
      local_8 = 0;
      local_c = (undefined4 *)0x0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          iVar1 = *(int *)(*(int *)((int)this + 0x14) + (int)local_c * 4);
          iVar7 = *(int *)(*(int *)((int)this + 0x10) + *(int *)(iVar1 + 4) * 4);
          uVar5 = *(uint *)(iVar7 + 4);
          if ((((uVar5 & 0x10) != 0) && ((uVar5 & 0x200) == 0)) || ((uVar5 & 0x20) != 0)) {
            (**(code **)(*(int *)this + 4))(iVar1);
          }
          if ((*(byte *)(iVar7 + 4) & 0x80) != 0) {
            local_8 = local_8 + 1;
          }
          local_c = (undefined4 *)((int)local_c + 1);
        } while (local_c < *(undefined4 **)((int)this + 8));
      }
      if (*(uint *)((int)this + 0x4c) < local_8) {
        iVar1 = FUN_00b27aaa(*(uint *)((int)this + 200),0,local_4c);
        if (-1 < iVar1) {
          if (*(int *)((int)this + 0x4c) == 0) {
            FUN_00b7112e((int)this,0,0x11c1,"%s target does not support texture lookups");
          }
          else {
            FUN_00b7112e((int)this,0,0x119e,
                         "maximum number of samplers exceeded. %s target can have a maximum of %i samplers"
                        );
          }
        }
      }
      else if ((((*(uint *)((int)this + 200) & 0xffff0000) != 0xfffe0000) ||
               (iVar1 = FUN_00ba61a5(this,*(int *)((int)this + 0x80),*(char **)((int)this + 0x28),
                                     0x10,0x204,'v'), -1 < iVar1)) &&
              (((*(uint *)((int)this + 200) & 0xffff0000) != 0xffff0000 ||
               (iVar1 = FUN_00ba61a5(this,-1,*(char **)((int)this + 0x4c),0x80,0,'s'), -1 < iVar1)))
              ) {
        if (*(int *)((int)this + 8) != 0) {
          local_1c = *(int **)((int)this + 8);
          piVar3 = *(int **)((int)this + 0x14);
          do {
            iVar1 = *piVar3;
            iVar7 = *(int *)(iVar1 + 4);
            piVar11 = local_10;
            if (((*(int *)((int)this + 0x88) != iVar7) ||
                (piVar9 = (int *)(*(int *)(iVar1 + 0xc) + 1), piVar10 = local_14, piVar9 <= local_3c
                )) && (((piVar9 = local_3c, *(int *)((int)this + 0x80) != iVar7 ||
                        (piVar10 = (int *)(*(int *)(iVar1 + 0xc) + 1), piVar10 <= local_14)) &&
                       ((((*(int *)((int)this + 0x84) != iVar7 ||
                          (piVar11 = (int *)(*(int *)(iVar1 + 0xc) + 1), piVar10 = local_14,
                          piVar11 <= local_10)) &&
                         (piVar10 = local_14, piVar11 = local_10,
                         (*(byte *)(*(int *)(*(int *)((int)this + 0x10) + iVar7 * 4) + 4) & 0x80) !=
                         0)) && (uVar5 = *(int *)(iVar1 + 0xc) + 1, local_28 < uVar5)))))) {
              local_28 = uVar5;
            }
            local_10 = piVar11;
            local_14 = piVar10;
            local_3c = piVar9;
            piVar3 = piVar3 + 1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = (int)local_14 << 2;
        local_1c = operator_new(local_8);
        if (local_1c != (int *)0x0) {
          piVar3 = (int *)((int)local_10 << 2);
          local_3c = piVar3;
          local_18 = operator_new((uint)piVar3);
          if (local_18 != (int *)0x0) {
            local_c = (undefined4 *)(local_28 << 2);
            local_30 = operator_new((uint)local_c);
            if (((local_30 != (int *)0x0) &&
                (local_40 = operator_new(local_8), local_40 != (void *)0x0)) &&
               (local_20 = operator_new((uint)piVar3), local_20 != (int *)0x0)) {
              piVar3 = local_1c;
              for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *piVar3 = 0;
                piVar3 = piVar3 + 1;
              }
              for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)piVar3 = 0;
                piVar3 = (int *)((int)piVar3 + 1);
              }
              piVar3 = local_18;
              for (uVar5 = (uint)local_3c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *piVar3 = 0;
                piVar3 = piVar3 + 1;
              }
              for (uVar5 = (uint)local_3c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)piVar3 = 0;
                piVar3 = (int *)((int)piVar3 + 1);
              }
              piVar3 = local_30;
              for (uVar5 = (uint)local_c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *piVar3 = 0;
                piVar3 = piVar3 + 1;
              }
              for (uVar5 = (uint)local_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)piVar3 = 0;
                piVar3 = (int *)((int)piVar3 + 1);
              }
              uVar5 = 0;
              if (*(int *)((int)this + 8) != 0) {
                do {
                  iVar1 = *(int *)(*(int *)((int)this + 0x14) + uVar5 * 4);
                  iVar7 = *(int *)(iVar1 + 4);
                  if (*(int *)((int)this + 0x84) == iVar7) {
                    piVar3 = local_18;
                    if (*(int *)(iVar1 + 0x6c) == -1) {
                      pcVar16 = "internal error: output register missing semantic";
LAB_00bb52d7:
                      iVar7 = 0;
                      iVar1 = 0;
                      goto LAB_00bb588c;
                    }
LAB_00bb50d8:
                    piVar3[*(int *)(iVar1 + 0xc)] = iVar1;
                  }
                  else {
                    if (*(int *)((int)this + 0x80) == iVar7) {
                      piVar3 = local_1c;
                      if (*(int *)(iVar1 + 0x6c) == -1) {
                        pcVar16 = "internal error: input register missing semantic";
                        goto LAB_00bb52d7;
                      }
                      goto LAB_00bb50d8;
                    }
                    piVar3 = local_30;
                    if ((*(byte *)(*(int *)(*(int *)((int)this + 0x10) + iVar7 * 4) + 4) & 0x80) !=
                        0) goto LAB_00bb50d8;
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < *(uint *)((int)this + 8));
              }
              local_c = (undefined4 *)0x0;
              if (*(int *)((int)this + 8) != 0) {
                do {
                  iVar1 = *(int *)(*(int *)((int)this + 0x14) + (int)local_c * 4);
                  if ((*(int *)((int)this + 0x80) == *(int *)(iVar1 + 4)) &&
                     (piVar3 = (int *)0x0, local_14 != (int *)0x0)) {
                    do {
                      if ((local_1c[(int)piVar3] != 0) &&
                         (*(int *)(iVar1 + 0x6c) == *(int *)(local_1c[(int)piVar3] + 0x6c))) {
                        *(int **)(iVar1 + 0xc) = piVar3;
                      }
                      piVar3 = (int *)((int)piVar3 + 1);
                    } while (piVar3 < local_14);
                  }
                  local_c = (undefined4 *)((int)local_c + 1);
                } while (local_c < *(undefined4 **)((int)this + 8));
              }
              piVar3 = local_1c;
              for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *piVar3 = 0;
                piVar3 = piVar3 + 1;
              }
              uVar12 = 0;
              for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined1 *)piVar3 = 0;
                piVar3 = (int *)((int)piVar3 + 1);
              }
              if (*(int *)((int)this + 8) != 0) {
                do {
                  iVar1 = *(int *)(*(int *)((int)this + 0x14) + uVar12 * 4);
                  uVar5 = *(uint *)(*(int *)(*(int *)((int)this + 0x10) + *(int *)(iVar1 + 4) * 4) +
                                   4);
                  if (((uVar5 & 0x10) != 0) && ((uVar5 & 0x204) == 0)) {
                    local_1c[*(int *)(iVar1 + 0xc)] = iVar1;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < *(uint *)((int)this + 8));
              }
              piVar3 = (int *)0x0;
              local_3c = (int *)0x0;
              if (local_14 != (int *)0x0) {
                do {
                  if (local_1c[(int)piVar3] != 0) {
                    local_3c = (int *)((int)local_3c + 1);
                  }
                  piVar3 = (int *)((int)piVar3 + 1);
                } while (piVar3 < local_14);
              }
              iVar1 = FUN_00bb191b(this);
              if (((-1 < iVar1) && (iVar1 = (**(code **)(*(int *)this + 0x2c))(), -1 < iVar1)) &&
                 ((((*(byte *)((int)this + 0xcc) & 4) != 0 &&
                   ((*(byte *)((int)this + 0x6e) & 0x20) == 0)) ||
                  ((iVar1 = FUN_00ba682c(this), -1 < iVar1 &&
                   (iVar1 = (**(code **)(*(int *)this + 0x28))(), -1 < iVar1)))))) {
                if (*(int *)((int)this + 0x18c) != 0) {
                  local_c = (undefined4 *)FUN_00b6c159(this,&DAT_00d90970,0x351,0xffffffff,4);
                  if (local_c == (undefined4 *)0xffffffff) goto LAB_00bb57e9;
                  uVar5 = 0;
                  piVar3 = (int *)((int)this + 400);
                  do {
                    iVar1 = FUN_00b6c1b2(this,local_c,uVar5 >> 2,uVar5 & 3,(&DAT_00d9d7f0)[uVar5]);
                    *piVar3 = iVar1;
                    if (iVar1 == -1) goto LAB_00bb57e9;
                    uVar5 = uVar5 + 1;
                    piVar3 = piVar3 + 1;
                  } while (uVar5 < 8);
                }
                iVar1 = FUN_00ba61a5(this,*(int *)((int)this + 0x7c),*(char **)((int)this + 0x38),
                                     0x200,0x42080,'c');
                if (((-1 < iVar1) &&
                    (iVar1 = FUN_00ba61a5(this,*(int *)((int)this + 0x9c),
                                          *(char **)((int)this + 0x60),0x2200,0x80,'b'), -1 < iVar1)
                    ) && (iVar1 = FUN_00ba61a5(this,*(int *)((int)this + 0xb0),
                                               *(char **)((int)this + 0x40),0x40200,0x80,'i'),
                         -1 < iVar1)) {
                  uVar5 = 0;
                  *(undefined4 *)((int)this + 0x104) = 0;
                  if (*(int *)((int)this + 0xc) == 0) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = **(undefined4 **)((int)this + 0x18);
                  }
                  *(undefined4 *)((int)this + 0x100) = uVar6;
                  *(undefined4 *)((int)this + 0xfc) = 0;
                  iVar1 = (**(code **)(*(int *)this + 0x38))();
                  if (-1 < iVar1) {
                    local_8 = 0;
                    if (*(int *)((int)this + 8) != 0) {
                      local_2c = *(undefined4 **)((int)this + 8);
                      piVar3 = *(int **)((int)this + 0x14);
                      do {
                        uVar12 = *(uint *)(*(int *)(*(int *)((int)this + 0x10) +
                                                   *(int *)(*piVar3 + 4) * 4) + 4);
                        if ((((uVar12 & 0x100) != 0) && (*(int *)(*piVar3 + 8) == -1)) &&
                           (((uVar12 & 0x800) == 0 || (*(int *)((int)this + 0x158) != 0)))) {
                          uVar5 = uVar5 + 1;
                        }
                        piVar3 = piVar3 + 1;
                        local_2c = (undefined4 *)((int)local_2c + -1);
                      } while (local_2c != (undefined4 *)0x0);
                    }
                    local_2c = operator_new(uVar5 << 4);
                    if ((local_2c != (undefined4 *)0x0) &&
                       (local_38 = operator_new(uVar5 << 2), local_38 != (undefined4 *)0x0)) {
                      puVar13 = local_2c;
                      for (iVar1 = (uVar5 & 0xfffffff) << 2; iVar1 != 0; iVar1 = iVar1 + -1) {
                        *puVar13 = 0;
                        puVar13 = puVar13 + 1;
                      }
                      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                        *(undefined1 *)puVar13 = 0;
                        puVar13 = (undefined4 *)((int)puVar13 + 1);
                      }
                      puVar13 = local_38;
                      for (uVar5 = uVar5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *puVar13 = 0;
                        puVar13 = puVar13 + 1;
                      }
                      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                        *(undefined1 *)puVar13 = 0;
                        puVar13 = (undefined4 *)((int)puVar13 + 1);
                      }
                      uVar5 = 0;
                      if (*(int *)((int)this + 8) != 0) {
                        do {
                          iVar1 = *(int *)(*(int *)((int)this + 0x14) + uVar5 * 4);
                          uVar12 = *(uint *)(*(int *)(*(int *)((int)this + 0x10) +
                                                     *(int *)(iVar1 + 4) * 4) + 4);
                          if (((((uVar12 & 0x100) != 0) && (*(int *)(iVar1 + 8) == -1)) &&
                              (*(int *)(iVar1 + 0x38) == -1)) &&
                             (((uVar12 & 0x40000) == 0 &&
                              (((uVar12 & 0x800) == 0 || (*(int *)((int)this + 0x158) != 0)))))) {
                            uVar12 = 0;
                            if (local_8 != 0) {
                              do {
                                if (local_38[uVar12] == *(int *)(iVar1 + 0xc)) break;
                                uVar12 = uVar12 + 1;
                              } while (uVar12 < local_8);
                            }
                            if (uVar12 == local_8) {
                              local_8 = local_8 + 1;
                              local_38[uVar12] = *(undefined4 *)(iVar1 + 0xc);
                            }
                            local_2c[*(int *)(iVar1 + 0x10) + uVar12 * 4] =
                                 (float)*(double *)(iVar1 + 0x20);
                          }
                          uVar5 = uVar5 + 1;
                        } while (uVar5 < *(uint *)((int)this + 8));
                      }
                      uVar5 = 0;
                      if (local_8 != 0) {
                        local_c = local_2c;
                        do {
                          iVar1 = (**(code **)(*(int *)this + 0x3c))(local_38[uVar5]);
                          if (iVar1 < 0) goto LAB_00bb57e9;
                          local_c = local_c + 4;
                          uVar5 = uVar5 + 1;
                        } while (uVar5 < local_8);
                      }
                      local_34 = (undefined4 *)0x0;
                      local_8 = 0;
                      if (*(int *)((int)this + 8) != 0) {
                        piVar3 = *(int **)((int)this + 0x14);
                        iVar1 = *(int *)((int)this + 8);
                        do {
                          if (((*(byte *)(*(int *)(*(int *)((int)this + 0x10) +
                                                  *(int *)(*piVar3 + 4) * 4) + 5) & 1) != 0) &&
                             (*(int *)(*piVar3 + 8) == -1)) {
                            local_34 = (undefined4 *)((int)local_34 + 1);
                          }
                          piVar3 = piVar3 + 1;
                          iVar1 = iVar1 + -1;
                        } while (iVar1 != 0);
                      }
                      puVar13 = local_34;
                      local_34 = operator_new((int)local_34 << 4);
                      if ((local_34 != (undefined4 *)0x0) &&
                         (local_24 = operator_new((int)puVar13 << 2), local_24 != (undefined4 *)0x0)
                         ) {
                        local_c = (undefined4 *)0x0;
                        puVar8 = local_34;
                        for (iVar1 = ((uint)puVar13 & 0xfffffff) << 2; iVar1 != 0;
                            iVar1 = iVar1 + -1) {
                          *puVar8 = 0;
                          puVar8 = puVar8 + 1;
                        }
                        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                          *(undefined1 *)puVar8 = 0;
                          puVar8 = (undefined4 *)((int)puVar8 + 1);
                        }
                        uVar5 = (uint)puVar13 & 0x3fffffff;
                        puVar13 = local_24;
                        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
                          *puVar13 = 0;
                          puVar13 = puVar13 + 1;
                        }
                        for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                          *(undefined1 *)puVar13 = 0;
                          puVar13 = (undefined4 *)((int)puVar13 + 1);
                        }
                        if (*(int *)((int)this + 8) != 0) {
                          do {
                            iVar1 = *(int *)(*(int *)((int)this + 0x14) + (int)local_c * 4);
                            uVar5 = *(uint *)(*(int *)(*(int *)((int)this + 0x10) +
                                                      *(int *)(iVar1 + 4) * 4) + 4);
                            if (((((uVar5 & 0x100) != 0) && (*(int *)(iVar1 + 8) == -1)) &&
                                (*(int *)(iVar1 + 0x38) == -1)) && ((uVar5 & 0x40000) != 0)) {
                              uVar5 = 0;
                              bVar14 = local_8 == 0;
                              if (local_8 != 0) {
                                do {
                                  if (local_24[uVar5] == *(int *)(iVar1 + 0xc)) break;
                                  uVar5 = uVar5 + 1;
                                } while (uVar5 < local_8);
                                bVar14 = uVar5 == local_8;
                              }
                              if (bVar14) {
                                local_8 = local_8 + 1;
                                local_24[uVar5] = *(undefined4 *)(iVar1 + 0xc);
                              }
                              lVar15 = __ftol();
                              local_34[*(int *)(iVar1 + 0x10) + uVar5 * 4] = (int)lVar15;
                            }
                            local_c = (undefined4 *)((int)local_c + 1);
                          } while (local_c < *(undefined4 **)((int)this + 8));
                        }
                        uVar5 = 0;
                        if (local_8 != 0) {
                          local_c = local_34;
                          do {
                            iVar1 = (**(code **)(*(int *)this + 0x40))(local_24[uVar5]);
                            if (iVar1 < 0) goto LAB_00bb57e9;
                            local_c = local_c + 4;
                            uVar5 = uVar5 + 1;
                          } while (uVar5 < local_8);
                        }
                        if (*(int **)((int)this + 0x44) < local_3c) {
                          pcVar16 = "maximum number of inputs exceeded";
                          iVar7 = 0x119a;
                          iVar1 = 0;
LAB_00bb588c:
                          FUN_00b7112e((int)this,iVar1,iVar7,pcVar16);
                        }
                        else {
                          local_c = (undefined4 *)0x0;
                          if (local_14 != (int *)0x0) {
                            local_3c = local_14;
                            piVar3 = local_1c;
                            do {
                              if ((*piVar3 != 0) &&
                                 (iVar1 = (**(code **)(*(int *)this + 0x44))(*piVar3), iVar1 < 0)) {
                                local_c = (undefined4 *)0x1;
                              }
                              piVar3 = piVar3 + 1;
                              local_3c = (int *)((int)local_3c - 1);
                            } while (local_3c != (int *)0x0);
                          }
                          iVar1 = (**(code **)(*(int *)this + 0x4c))();
                          uVar5 = 0;
                          if (-1 < iVar1) {
                            if (local_28 != 0) {
                              do {
                                if ((local_30[uVar5] != 0) &&
                                   (iVar1 = (**(code **)(*(int *)this + 0x48))(), iVar1 < 0)) {
                                  local_c = (undefined4 *)0x1;
                                }
                                uVar5 = uVar5 + 1;
                              } while (uVar5 < local_28);
                            }
                            if ((*(byte *)((int)this + 0x70) & 0x80) == 0) {
                              if (local_10 != (int *)0x0) {
                                iVar1 = (int)local_20 - (int)local_18;
                                local_3c = local_10;
                                piVar3 = local_18;
                                do {
                                  if ((*piVar3 != 0) &&
                                     (iVar7 = (**(code **)(*(int *)this + 0x6c))
                                                        (*piVar3,(undefined1 *)((int)piVar3 + iVar1)
                                                         ,0), iVar7 < 0)) {
                                    local_c = (undefined4 *)0x1;
                                  }
                                  piVar3 = piVar3 + 1;
                                  local_3c = (int *)((int)local_3c - 1);
                                } while (local_3c != (int *)0x0);
                              }
                            }
                            else if (local_10 != (int *)0x0) {
                              local_3c = local_10;
                              piVar3 = local_18;
                              do {
                                if ((*piVar3 != 0) &&
                                   (iVar1 = (**(code **)(*(int *)this + 0x44))(*piVar3), iVar1 < 0))
                                {
                                  local_c = (undefined4 *)0x1;
                                }
                                piVar3 = piVar3 + 1;
                                local_3c = (int *)((int)local_3c - 1);
                              } while (local_3c != (int *)0x0);
                              local_3c = (int *)0x0;
                            }
                            iVar1 = 0;
                            if (local_c == (undefined4 *)0x0) {
                              piVar3 = (int *)0x0;
                              if (local_10 != (int *)0x0) {
                                do {
                                  if ((*(int *)(iVar1 + (int)local_18) != 0) &&
                                     (local_3c = (int *)0x0, iVar1 != 0)) {
                                    piVar11 = local_20;
                                    do {
                                      if ((*(int *)(((int)local_18 - (int)local_20) + (int)piVar11)
                                           != 0) && (*(int *)(iVar1 + (int)local_20) == *piVar11)) {
                                        iVar7 = 0x1198;
                                        pcVar16 = "overlapping output semantics";
                                        iVar1 = *(int *)(local_18[(int)piVar3] + 0x68);
                                        goto LAB_00bb588c;
                                      }
                                      local_3c = (int *)((int)local_3c + 1);
                                      piVar11 = piVar11 + 1;
                                    } while (local_3c < piVar3);
                                  }
                                  piVar3 = (int *)((int)piVar3 + 1);
                                  iVar1 = iVar1 + 4;
                                } while (piVar3 < local_10);
                              }
                              if (((((*(byte *)((int)this + 0x6e) & 0x40) != 0) ||
                                   (iVar1 = FUN_00ba682c(this), -1 < iVar1)) &&
                                  (iVar1 = (**(code **)(*(int *)this + 0x24))(), -1 < iVar1)) &&
                                 (((((*(int *)((int)this + 0xe0) == 0 ||
                                     (iVar1 = FUN_00bb3b53(this), -1 < iVar1)) &&
                                    ((iVar1 = FUN_00bb3c7b(this), -1 < iVar1 &&
                                     (((*(byte *)((int)this + 0xcc) & 1) == 0 ||
                                      (iVar1 = FUN_00bb45e5(this), -1 < iVar1)))))) &&
                                   (iVar1 = FUN_00bb3b23(this,0xffff), -1 < iVar1)) &&
                                  (((iVar1 = FUN_00bb0cad((int)this), -1 < iVar1 &&
                                    (((*(int **)((int)this + 0x1b0) == (int *)0x0 ||
                                      (*(int *)((int)this + 0xd4) != 0)) ||
                                     (iVar1 = (**(code **)(**(int **)((int)this + 0x1b0) + 0x14))(),
                                     -1 < iVar1)))) &&
                                   ((param_1 != (uint *)0x0 &&
                                    (iVar1 = FUN_00b1cace(*(int *)((int)this + 0x110) << 2,&local_3c
                                                         ), -1 < iVar1)))))))) {
                                puVar13 = *(undefined4 **)((int)this + 0x10c);
                                local_28 = *(int *)((int)this + 0x110) << 2;
                                puVar8 = (undefined4 *)(**(code **)(*local_3c + 0xc))();
                                for (uVar5 = local_28 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                                  *puVar8 = *puVar13;
                                  puVar13 = puVar13 + 1;
                                  puVar8 = puVar8 + 1;
                                }
                                for (uVar5 = local_28 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                                  *(undefined1 *)puVar8 = *(undefined1 *)puVar13;
                                  puVar13 = (undefined4 *)((int)puVar13 + 1);
                                  puVar8 = (undefined4 *)((int)puVar8 + 1);
                                }
                                *param_1 = (uint)local_3c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00bb57e9:
                    /* WARNING: Subroutine does not return */
  _free(local_1c);
}


//// FUNCTION FUN_00bb589a @ 00bb589a ////

undefined4 __thiscall FUN_00bb589a(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (((*(byte *)((int)this + 0xcc) & 1) != 0) && (*(int *)((int)this + 0x124) != 0)) {
    if (*(uint *)((int)this + 300) <= *(uint *)((int)this + 0x128)) {
      puVar1 = operator_new(*(uint *)((int)this + 300) * 0x30);
      if (puVar1 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      puVar4 = *(undefined4 **)((int)this + 0x124);
      for (iVar2 = (*(int *)((int)this + 0x128) * 3 & 0x1fffffffU) << 1; iVar2 != 0;
          iVar2 = iVar2 + -1) {
        *puVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar1 = puVar1 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x124));
    }
    *(undefined4 *)(*(int *)((int)this + 0x124) + *(int *)((int)this + 0x128) * 0x18) =
         *(undefined4 *)((int)this + 0x104);
    *(int *)(*(int *)((int)this + 0x124) + 4 + *(int *)((int)this + 0x128) * 0x18) =
         *(int *)((int)this + 0x110) << 2;
    uVar3 = 0;
    do {
      *(undefined4 *)
       (*(int *)((int)this + 0x124) + 8 + (uVar3 + *(int *)((int)this + 0x128) * 6) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    *(int *)((int)this + 0x128) = *(int *)((int)this + 0x128) + 1;
  }
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)((int)this + 0x110);
  FUN_00bb3b23(this,param_1);
  return 0;
}


//// FUNCTION FUN_00bb59a0 @ 00bb59a0 ////

int __thiscall FUN_00bb59a0(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bb3b23(this,param_1);
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00bb59b7 @ 00bb59b7 ////

int __thiscall FUN_00bb59b7(void *this,uint param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = FUN_00bb59a0(this,param_1 | param_2);
  if (-1 < iVar2) {
    if (param_3 != 0) {
      iVar2 = FUN_00bb59a0(this,param_3);
      if (iVar2 < 0) {
        return iVar2;
      }
      pbVar1 = (byte *)(*(int *)((int)this + 0x10c) + *(int *)((int)this + 0x118) * 4 + 3);
      *pbVar1 = *pbVar1 | 0x10;
    }
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00bb59fd @ 00bb59fd ////

int __thiscall FUN_00bb59fd(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_00bb59a0(this,param_1 | param_2);
  if (-1 < iVar2) {
    if (((param_1 | param_2) & 0x2000) != 0) {
      iVar2 = *(int *)(*(int *)((int)this + 0x14) + param_3 * 4);
      iVar1 = *(int *)(iVar2 + 0x10);
      uVar3 = *(uint *)(iVar2 + 0xc) & 0x7ff;
      uVar4 = uVar3 | 0xb0000000;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          uVar4 = uVar3 | 0xb0550000;
        }
        else if (iVar1 == 2) {
          uVar4 = uVar3 | 0xb0aa0000;
        }
        else if (iVar1 == 3) {
          uVar4 = uVar3 | 0xb0ff0000;
        }
      }
      FUN_00bb59a0(this,uVar4);
    }
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00bb5a68 @ 00bb5a68 ////

int __thiscall
FUN_00bb5a68(void *this,int param_1,int *param_2,undefined4 param_3,int *param_4,int *param_5,
            int *param_6,undefined4 param_7,uint param_8,uint param_9,uint param_10,int param_11)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar4 = param_1;
  uVar2 = (**(code **)(*(int *)this + 0x5c))(param_1);
  iVar3 = FUN_00bb589a(this,uVar2);
  piVar1 = param_2;
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = (**(code **)(*(int *)this + 0x6c))
                    (*(undefined4 *)(*(int *)((int)this + 0x14) + *param_2 * 4),&local_8,&local_18,
                     &local_14);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = (**(code **)(*(int *)this + 0x70))(piVar1,param_3,&param_1,local_14);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = (**(code **)(*(int *)this + 100))
                    (-(uint)(param_11 != 0) & 0x400000 | local_8,param_1,local_18);
  piVar1 = param_4;
  if (iVar3 < 0) {
    return iVar3;
  }
  if (iVar4 == 8) {
    param_1 = 0x70000;
    goto LAB_00bb5b3e;
  }
  if (iVar4 != 9) {
    if (iVar4 == 0x5a) {
      param_1 = 0x30000;
      goto LAB_00bb5b3e;
    }
    if ((((iVar4 == 6) || (iVar4 == 0xe)) || (iVar4 == 0xf)) || (iVar4 == 7)) {
      param_1 = 0x10000;
      goto LAB_00bb5b3e;
    }
    if (iVar4 != 0x25) goto LAB_00bb5b3e;
  }
  param_1 = 0xf0000;
LAB_00bb5b3e:
  if (((param_4 == (int *)0x0) ||
      (((iVar4 = (**(code **)(*(int *)this + 0x74))
                           (*(undefined4 *)(*(int *)((int)this + 0x14) + *param_4 * 4),&local_8,
                            &local_c), -1 < iVar4 &&
        (iVar4 = (**(code **)(*(int *)this + 0x78))(piVar1,param_7,param_1,&local_10), -1 < iVar4))
       && (iVar4 = (**(code **)(*(int *)this + 0x68))(local_8 ^ param_8,local_10,local_c),
          -1 < iVar4)))) &&
     (((piVar1 = param_5, param_5 == (int *)0x0 ||
       (((iVar4 = (**(code **)(*(int *)this + 0x74))
                            (*(undefined4 *)(*(int *)((int)this + 0x14) + *param_5 * 4),&local_8,
                             &local_c), -1 < iVar4 &&
         (iVar4 = (**(code **)(*(int *)this + 0x78))(piVar1,param_7,param_1,&local_10), -1 < iVar4))
        && (iVar4 = (**(code **)(*(int *)this + 0x68))(local_8 ^ param_9,local_10,local_c),
           -1 < iVar4)))) &&
      (((piVar1 = param_6, param_6 == (int *)0x0 ||
        (((iVar4 = (**(code **)(*(int *)this + 0x74))
                             (*(undefined4 *)(*(int *)((int)this + 0x14) + *param_6 * 4),&local_8,
                              &local_c), -1 < iVar4 &&
          (iVar4 = (**(code **)(*(int *)this + 0x78))(piVar1,param_7,param_1,&local_10), -1 < iVar4)
          ) && (iVar4 = (**(code **)(*(int *)this + 0x68))(local_8 ^ param_10,local_10,local_c),
               -1 < iVar4)))) &&
       ((iVar4 = (**(code **)(*(int *)this + 0x60))(), -1 < iVar4 &&
        (iVar4 = FUN_00bb0cad((int)this), -1 < iVar4)))))))) {
    iVar4 = 0;
  }
  return iVar4;
}


//// FUNCTION FUN_00bb5c61 @ 00bb5c61 ////

int __thiscall FUN_00bb5c61(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  char local_24 [32];
  
  if (*(int *)((int)this + 0x158) == 0) {
    if (param_1 < 0x800) {
      uVar1 = param_1 & 0x7ff | 0xa0000000;
    }
    else if (param_1 < 0x1000) {
      uVar1 = param_1 & 0x7ff | 0xb0000800;
    }
    else if (param_1 < 0x1800) {
      uVar1 = param_1 & 0x7ff | 0xc0000800;
    }
    else {
      uVar1 = param_1 & 0x7ff | 0xd0000800;
    }
    iVar2 = FUN_00bb589a(this,0x51);
    if (((((-1 < iVar2) && (iVar2 = (**(code **)(*(int *)this + 100))(uVar1,0xf0000,0), -1 < iVar2))
         && (iVar2 = FUN_00bb3b23(this,*param_2), -1 < iVar2)) &&
        ((iVar2 = FUN_00bb3b23(this,param_2[1]), -1 < iVar2 &&
         (iVar2 = FUN_00bb3b23(this,param_2[2]), -1 < iVar2)))) &&
       ((iVar2 = FUN_00bb3b23(this,param_2[3]), -1 < iVar2 &&
        ((iVar2 = (**(code **)(*(int *)this + 0x60))(), -1 < iVar2 &&
         (iVar2 = FUN_00bb0cad((int)this), -1 < iVar2)))))) {
      iVar2 = 0;
    }
  }
  else {
    _sprintf(local_24,"c_$zz%d",param_1);
    iVar2 = FUN_00b361aa((void *)((int)this + 0x1b4),local_24,param_1,1);
    if (-1 < iVar2) {
      puVar3 = FUN_00b345f9((void *)((int)this + 0x1b4),local_24);
      puVar3[3] = 1;
      puVar3[4] = *param_2;
      puVar3[5] = param_2[1];
      puVar3[6] = param_2[2];
      puVar3[7] = param_2[3];
      *(int *)((int)this + 500) = *(int *)((int)this + 500) + 1;
      iVar2 = 0;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00bb5d9e @ 00bb5d9e ////

int __thiscall FUN_00bb5d9e(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char local_24 [32];
  
  if (*(int *)((int)this + 0x158) == 0) {
    iVar1 = FUN_00bb589a(this,0x30);
    if (((((-1 < iVar1) &&
          (iVar1 = (**(code **)(*(int *)this + 100))(param_1 & 0x7ff | 0xf0000000,0xf0000,0),
          -1 < iVar1)) && (iVar1 = FUN_00bb3b23(this,*param_2), -1 < iVar1)) &&
        ((iVar1 = FUN_00bb3b23(this,param_2[1]), -1 < iVar1 &&
         (iVar1 = FUN_00bb3b23(this,param_2[2]), -1 < iVar1)))) &&
       ((iVar1 = FUN_00bb3b23(this,param_2[3]), -1 < iVar1 &&
        ((iVar1 = (**(code **)(*(int *)this + 0x60))(), -1 < iVar1 &&
         (iVar1 = FUN_00bb0cad((int)this), -1 < iVar1)))))) {
      iVar1 = 0;
    }
  }
  else {
    _sprintf(local_24,"i_$zz%d",param_1);
    iVar1 = FUN_00b361aa((void *)((int)this + 0x1b4),local_24,param_1,1);
    if (-1 < iVar1) {
      puVar2 = FUN_00b345f9((void *)((int)this + 0x1b4),local_24);
      puVar2[3] = 1;
      puVar2[4] = *param_2;
      puVar2[5] = param_2[1];
      puVar2[6] = param_2[2];
      puVar2[7] = param_2[3];
      *(int *)((int)this + 500) = *(int *)((int)this + 500) + 1;
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb5ea0 @ 00bb5ea0 ////

int __fastcall FUN_00bb5ea0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bb589a(param_1,0x27);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_00bb0cad((int)param_1);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb5eca @ 00bb5eca ////

int __fastcall FUN_00bb5eca(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bb589a(param_1,0x1d);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_00bb0cad((int)param_1);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb5ef4 @ 00bb5ef4 ////

int __fastcall FUN_00bb5ef4(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = *(uint *)param_1[0x40] & 0xfff00000;
  iVar2 = 0;
  uVar3 = *(uint *)param_1[0x40] & 0xfffff;
  if (uVar1 != 0x74300000) {
    if (uVar1 == 0x74400000) {
      iVar2 = 5;
      goto LAB_00bb5f4a;
    }
    if (uVar1 != 0x74500000) {
      if (uVar1 == 0x74600000) {
        iVar2 = 4;
      }
      else if (uVar1 == 0x74700000) {
        iVar2 = 3;
      }
      goto LAB_00bb5f4a;
    }
  }
  iVar2 = 2;
LAB_00bb5f4a:
  iVar2 = FUN_00bb589a(param_1,iVar2 << 0x10 | 0x2d);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x74))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),&local_10
                           ,&local_8), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x78))
                         (*(undefined4 *)(param_1[0x40] + 8),uVar3,0xf0000,&local_c), -1 < iVar2))
     && (iVar2 = (**(code **)(*param_1 + 0x68))(local_10,local_c,local_8), -1 < iVar2)) {
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)
                        (param_1[5] + *(int *)(uVar3 * 4 + *(int *)(param_1[0x40] + 8)) * 4),
                       &local_10,&local_8);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*param_1 + 0x78))
                           (*(int *)(param_1[0x40] + 8) + uVar3 * 4,uVar3,0xf0000,&local_c),
        -1 < iVar2)) &&
       ((iVar2 = (**(code **)(*param_1 + 0x68))(local_10,local_c,local_8), -1 < iVar2 &&
        ((iVar2 = (**(code **)(*param_1 + 0x60))(), -1 < iVar2 &&
         (iVar2 = FUN_00bb0cad((int)param_1), -1 < iVar2)))))) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00bb603a @ 00bb603a ////

void __fastcall FUN_00bb603a(void *param_1)

{
  uint *this;
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *local_c;
  int *local_8;
  
  this = *(uint **)((int)param_1 + 0x100);
  uVar1 = this[3];
  uVar2 = *this;
  piVar3 = (int *)this[4];
  FUN_00b6b448(this,0,(int *)&local_8);
  FUN_00b6b448(*(void **)((int)param_1 + 0x100),1,(int *)&local_c);
  FUN_00bb5a68(param_1,0x42,piVar3,uVar1,local_c,local_8,(int *)0x0,uVar2 & 0xfffff,0,0,0,0);
  return;
}


//// FUNCTION FUN_00bb609e @ 00bb609e ////

int __fastcall FUN_00bb609e(int *param_1)

{
  uint *this;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  this = (uint *)param_1[0x40];
  local_2c = this[3];
  uVar4 = *this & 0xfffff;
  FUN_00b6b448(this,0,(int *)&local_1c);
  FUN_00b6b448((void *)param_1[0x40],1,(int *)&local_18);
  FUN_00b6b448((void *)param_1[0x40],2,(int *)&local_20);
  FUN_00b6b448((void *)param_1[0x40],3,(int *)&local_24);
  piVar1 = *(int **)(param_1[0x40] + 0x10);
  uVar2 = (**(code **)(*param_1 + 0x5c))(0x5d);
  iVar3 = FUN_00bb589a(param_1,uVar2);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*param_1 + 0x6c))
                      (*(undefined4 *)(param_1[5] + *piVar1 * 4),&local_8,&local_30,&local_28);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*param_1 + 0x70))(piVar1,local_2c,&local_14,local_28);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*param_1 + 100))(local_8,local_14,local_30);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*param_1 + 0x74))
                            (*(undefined4 *)(param_1[5] + *local_18 * 4),&local_8,&local_c);
          if (-1 < iVar3) {
            iVar3 = (**(code **)(*param_1 + 0x78))(local_18,uVar4,local_14,&local_10);
            if (-1 < iVar3) {
              iVar3 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
              if (-1 < iVar3) {
                iVar3 = (**(code **)(*param_1 + 0x74))
                                  (*(undefined4 *)(param_1[5] + *local_1c * 4),&local_8,&local_c);
                if (-1 < iVar3) {
                  iVar3 = (**(code **)(*param_1 + 0x78))(local_1c,uVar4,local_14,&local_10);
                  if (-1 < iVar3) {
                    iVar3 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
                    if (-1 < iVar3) {
                      iVar3 = (**(code **)(*param_1 + 0x74))
                                        (*(undefined4 *)(param_1[5] + *local_20 * 4),&local_8,
                                         &local_c);
                      if (-1 < iVar3) {
                        iVar3 = (**(code **)(*param_1 + 0x78))(local_20,uVar4,local_14,&local_10);
                        if (-1 < iVar3) {
                          iVar3 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
                          if (-1 < iVar3) {
                            iVar3 = (**(code **)(*param_1 + 0x74))
                                              (*(undefined4 *)(param_1[5] + *local_24 * 4),&local_8,
                                               &local_c);
                            if (-1 < iVar3) {
                              iVar3 = (**(code **)(*param_1 + 0x78))
                                                (local_24,uVar4,local_14,&local_10);
                              if (-1 < iVar3) {
                                iVar3 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
                                if (-1 < iVar3) {
                                  iVar3 = (**(code **)(*param_1 + 0x60))();
                                  if (-1 < iVar3) {
                                    iVar3 = FUN_00bb0cad((int)param_1);
                                    if (-1 < iVar3) {
                                      iVar3 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}


//// FUNCTION FUN_00bb62cd @ 00bb62cd ////

void __fastcall FUN_00bb62cd(void *param_1)

{
  uint *this;
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *local_c;
  int *local_8;
  
  this = *(uint **)((int)param_1 + 0x100);
  uVar1 = this[3];
  uVar2 = *this;
  piVar3 = (int *)this[4];
  FUN_00b6b448(this,0,(int *)&local_8);
  FUN_00b6b448(*(void **)((int)param_1 + 0x100),1,(int *)&local_c);
  FUN_00bb5a68(param_1,0x10042,piVar3,uVar1,local_c,local_8,(int *)0x0,uVar2 & 0xfffff,0,0,0,0);
  return;
}


//// FUNCTION FUN_00bb6334 @ 00bb6334 ////

void __fastcall FUN_00bb6334(void *param_1)

{
  uint *this;
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *local_c;
  int *local_8;
  
  this = *(uint **)((int)param_1 + 0x100);
  uVar1 = this[3];
  uVar2 = *this;
  piVar3 = (int *)this[4];
  FUN_00b6b448(this,0,(int *)&local_8);
  FUN_00b6b448(*(void **)((int)param_1 + 0x100),1,(int *)&local_c);
  FUN_00bb5a68(param_1,0x20042,piVar3,uVar1,local_c,local_8,(int *)0x0,uVar2 & 0xfffff,0,0,0,0);
  return;
}


//// FUNCTION FUN_00bb639b @ 00bb639b ////

void __fastcall FUN_00bb639b(void *param_1)

{
  uint *this;
  uint uVar1;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  this = *(uint **)((int)param_1 + 0x100);
  local_8 = this[3];
  uVar1 = *this;
  local_c = (int *)this[4];
  FUN_00b6b448(this,0,(int *)&local_14);
  FUN_00b6b448(*(void **)((int)param_1 + 0x100),1,(int *)&local_10);
  FUN_00bb5a68(param_1,0x5f,local_c,local_8,local_10,local_14,(int *)0x0,uVar1 & 0xfffff,0,0,0,0);
  return;
}


//// FUNCTION FUN_00bb63ff @ 00bb63ff ////

void __fastcall FUN_00bb63ff(void *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  
  puVar1 = *(uint **)((int)param_1 + 0x100);
  piVar2 = (int *)puVar1[2];
  uVar3 = *puVar1 & 0xfffff;
  FUN_00bb5a68(param_1,0x5a,(int *)puVar1[4],puVar1[3],piVar2,piVar2 + uVar3,piVar2 + uVar3 * 2,
               uVar3,0,0,0,0);
  return;
}


//// FUNCTION FUN_00bb6435 @ 00bb6435 ////

int __fastcall FUN_00bb6435(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = param_1[0x40];
  if ((*(byte *)((int)param_1 + 0x6e) & 0x40) == 0) {
    if (*(int *)(iVar2 + 4) == 4) goto LAB_00bb649b;
    pcVar7 = "clip must be performed from a float4 vector for ps_2_0 models";
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      piVar4 = *(int **)(iVar2 + 8);
      do {
        if (*(uint *)(*(int *)(param_1[5] + *piVar4 * 4) + 0x10) != uVar5) {
          pcVar7 = "cannot clip from a swizzled vector";
          goto LAB_00bb656f;
        }
        uVar3 = *(uint *)(iVar2 + 4);
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < uVar3);
    }
    if (uVar3 == 3) {
LAB_00bb649b:
      iVar1 = *(int *)(param_1[5] + **(int **)(iVar2 + 8) * 4);
      if (*(int *)(iVar1 + 4) == param_1[0x20]) {
        iVar2 = (**(code **)(*param_1 + 0x88))(iVar1,&local_c,&local_8);
        if (-1 < iVar2) {
LAB_00bb64f8:
          uVar6 = local_8 | 0xfffffff8;
          uVar5 = local_8 & 0x18;
          uVar3 = local_c & 0x7ff;
          iVar2 = FUN_00bb589a(param_1,0x41);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*param_1 + 0x7c))
                            (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                             &local_10);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*param_1 + 100))
                            ((uVar6 << 0x14 | uVar5) << 8 | uVar3,0xf0000,local_10);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*param_1 + 0x60))();
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar2 = FUN_00bb0cad((int)param_1);
          if (iVar2 < 0) {
            return iVar2;
          }
          return 0;
        }
        pcVar7 = "internal error: unexpected input register type";
        iVar2 = 0;
        goto LAB_00bb6577;
      }
      if (*(int *)(iVar1 + 4) == param_1[0x22]) {
        local_8 = 0;
        local_c = *(uint *)(iVar1 + 0xc);
        goto LAB_00bb64f8;
      }
      pcVar7 = "clip cannot be performed from a constant or literal";
    }
    else {
      pcVar7 = "clip must be performed from a float3 vector for ps_1_x models";
    }
  }
LAB_00bb656f:
  iVar2 = *(int *)(iVar2 + 0x3c);
LAB_00bb6577:
  FUN_00b7112e((int)param_1,iVar2,0x1194,pcVar7);
  return -0x7fffbffb;
}


//// FUNCTION FUN_00bb658a @ 00bb658a ////

int __fastcall FUN_00bb658a(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14 [4];
  
  local_14[3] = 0;
  iVar5 = *(int *)((int)param_1 + 0x100);
  local_14[2] = 0;
  iVar2 = *(int *)((int)param_1 + 0x10);
  do {
    iVar3 = *(int *)(local_14[2] + *(int *)(iVar5 + 0x10));
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x14) + iVar3 * 4);
    if (((*(byte *)(*(int *)(iVar2 + *(int *)(iVar4 + 4) * 4) + 4) & 1) == 0) ||
       (*(int *)(iVar4 + 0x5c) != 0)) {
      piVar1 = local_14 + local_14[3];
      local_14[3] = local_14[3] + 1;
      *piVar1 = iVar3;
    }
    local_14[2] = local_14[2] + 4;
  } while ((uint)local_14[2] < 8);
  if (local_14[3] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00bb5a68(param_1,0x25,local_14,local_14[3],*(int **)(iVar5 + 8),
                         (int *)(-(uint)(*(int *)((int)param_1 + 0x18c) != 0) & (int)param_1 + 400U)
                         ,(int *)(-(uint)(*(int *)((int)param_1 + 0x18c) != 0) &
                                 (int)param_1 + 0x1a0U),4,0,0,0,0);
  }
  return iVar5;
}


//// FUNCTION FUN_00bb6628 @ 00bb6628 ////

int __fastcall FUN_00bb6628(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = 0;
  if (param_1[0xd] == 0) {
    return -0x7fffbfff;
  }
  uVar1 = *(uint *)param_1[0x40] & 0xfff00000;
  uVar3 = *(uint *)param_1[0x40] & 0xfffff;
  if (uVar1 != 0x10f00000) {
    if (uVar1 == 0x73500000) {
      iVar2 = 3;
      goto LAB_00bb668f;
    }
    if (uVar1 == 0x73600000) {
      iVar2 = 4;
      goto LAB_00bb668f;
    }
    if (uVar1 != 0x73700000) {
      if (uVar1 == 0x73800000) {
        iVar2 = 2;
      }
      goto LAB_00bb668f;
    }
  }
  iVar2 = 5;
LAB_00bb668f:
  iVar2 = FUN_00bb589a(param_1,iVar2 << 0x10 | 0x5e);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = (**(code **)(*param_1 + 0x6c))
                    (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),&local_8,0,
                     &local_18);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = (**(code **)(*param_1 + 0x70))
                    (*(undefined4 *)(param_1[0x40] + 0x10),*(undefined4 *)(param_1[0x40] + 0xc),
                     &local_14,local_18);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = (**(code **)(*param_1 + 100))(local_8,local_14,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  if ((*(uint *)param_1[0x40] & 0xfff00000) == 0x10f00000) {
    iVar2 = (**(code **)(*param_1 + 0x74))();
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x78))
                      (*(undefined4 *)(param_1[0x40] + 8),*(undefined4 *)(param_1[0x40] + 0xc),
                       local_14,&local_10);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
    if (iVar2 < 0) {
      return iVar2;
    }
    local_10 = local_10 ^ 0x1000000;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)(param_1[5] + *(int *)((uint *)param_1[0x40])[2] * 4),&local_8
                       ,&local_c);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x78))
                      (*(undefined4 *)(param_1[0x40] + 8),uVar3,local_14,&local_10);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)
                        (param_1[5] + *(int *)(uVar3 * 4 + *(int *)(param_1[0x40] + 8)) * 4),
                       &local_8,&local_c);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*param_1 + 0x78))
                      (*(int *)(param_1[0x40] + 8) + uVar3 * 4,uVar3,local_14,&local_10);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_10,local_c);
  if (((-1 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0x60))(), -1 < iVar2)) &&
     (iVar2 = FUN_00bb0cad((int)param_1), -1 < iVar2)) {
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00bb6831 @ 00bb6831 ////

int __fastcall FUN_00bb6831(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  if (param_1[0xd] == 0) {
    iVar2 = -0x7fffbfff;
  }
  else if (*(int *)(param_1[0x40] + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4);
    local_8 = 0;
    do {
      iVar4 = *(int *)(param_1[5] +
                      *(int *)(*(int *)(param_1[0x40] + 8) +
                              *(int *)(param_1[0x40] + 0xc) * local_8 * 4) * 4);
      if ((((*(int *)(iVar4 + 4) != *(int *)(iVar2 + 4)) ||
           (*(int *)(iVar4 + 8) != *(int *)(iVar2 + 8))) ||
          (*(int *)(iVar4 + 0xc) != *(int *)(iVar2 + 0xc))) ||
         (*(int *)(iVar4 + 0x10) != *(int *)(iVar2 + 0x10))) {
        iVar3 = FUN_00bb589a(param_1,1);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = *(int *)(param_1[5] + *(int *)(iVar4 + 0x14) * 4);
        iVar1 = *(int *)(iVar3 + 0x10);
        uVar5 = *(uint *)(iVar3 + 0xc) & 0x7ff;
        uVar6 = uVar5 | 0xb0001000;
        if (iVar1 != 0) {
          if (iVar1 == 1) {
            uVar6 = uVar5 | 0xb0551000;
          }
          else if (iVar1 == 2) {
            uVar6 = uVar5 | 0xb0aa1000;
          }
          else if (iVar1 == 3) {
            uVar6 = uVar5 | 0xb0ff1000;
          }
        }
        if (*(int *)(iVar4 + 0x18) == 0) {
          uVar6 = uVar6 | 0xd000000;
        }
        iVar4 = (**(code **)(*param_1 + 0x6c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                           &local_c,0,&local_14);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0x70))
                          (*(undefined4 *)(param_1[0x40] + 0x10),
                           *(undefined4 *)(param_1[0x40] + 0xc),&local_10,local_14);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 100))(local_c,local_10,uVar6);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0x74))
                          (*(undefined4 *)
                            (param_1[5] +
                            *(int *)(*(int *)(param_1[0x40] + 8) +
                                    *(int *)(param_1[0x40] + 0xc) * local_8 * 4) * 4),&local_c,
                           &local_18);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = *(int *)(param_1[0x40] + 0xc);
        iVar4 = (**(code **)(*param_1 + 0x78))
                          (*(int *)(param_1[0x40] + 8) + iVar4 * local_8 * 4,iVar4,local_10,
                           &local_1c);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0x68))(local_c,local_1c,local_18);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0x60))();
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = FUN_00bb0cad((int)param_1);
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < 2);
    iVar2 = 0;
  }
  return iVar2;
}


//// FUNCTION FUN_00bb6a00 @ 00bb6a00 ////

int __fastcall FUN_00bb6a00(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = *(uint *)param_1[0x40] & 0xfff00000;
  iVar2 = 0;
  uVar3 = *(uint *)param_1[0x40] & 0xfffff;
  if (uVar1 != 0x73000000) {
    if (uVar1 == 0x73900000) {
      iVar2 = 3;
      goto LAB_00bb6a56;
    }
    if (uVar1 == 0x73a00000) {
      iVar2 = 4;
      goto LAB_00bb6a56;
    }
    if (uVar1 == 0x73b00000) {
      iVar2 = 5;
      goto LAB_00bb6a56;
    }
    if (uVar1 != 0x73c00000) goto LAB_00bb6a56;
  }
  iVar2 = 2;
LAB_00bb6a56:
  iVar2 = FUN_00bb589a(param_1,iVar2 << 0x10 | 0x29);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x74))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),&local_10
                           ,&local_8), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x78))
                         (*(undefined4 *)(param_1[0x40] + 8),uVar3,0xf0000,&local_c), -1 < iVar2))
     && (iVar2 = (**(code **)(*param_1 + 0x68))(local_10,local_c,local_8), -1 < iVar2)) {
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)
                        (param_1[5] + *(int *)(uVar3 * 4 + *(int *)(param_1[0x40] + 8)) * 4),
                       &local_10,&local_8);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*param_1 + 0x78))
                           (*(int *)(param_1[0x40] + 8) + uVar3 * 4,uVar3,0xf0000,&local_c),
        -1 < iVar2)) &&
       ((iVar2 = (**(code **)(*param_1 + 0x68))(local_10,local_c,local_8), -1 < iVar2 &&
        ((iVar2 = (**(code **)(*param_1 + 0x60))(), -1 < iVar2 &&
         (iVar2 = FUN_00bb0cad((int)param_1), -1 < iVar2)))))) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00bb6b5b @ 00bb6b5b ////

int __thiscall FUN_00bb6b5b(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  iVar1 = FUN_00bb589a(this,0x28);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)this + 0x74))
                      (*(undefined4 *)
                        (*(int *)((int)this + 0x14) +
                        **(int **)(*(int *)((int)this + 0x100) + 8) * 4),&local_c,&local_8);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*(int *)this + 0x68))
                        (-(uint)(param_1 != 0) & 0xd000000 | (uint)local_c,0xe40000,local_8);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*(int *)this + 0x60))();
        if (-1 < iVar1) {
          iVar1 = FUN_00bb0cad((int)this);
          if (-1 < iVar1) {
            iVar1 = 0;
          }
        }
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb6bd5 @ 00bb6bd5 ////

int __fastcall FUN_00bb6bd5(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bb589a(param_1,0x2a);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_00bb0cad((int)param_1);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb6bff @ 00bb6bff ////

int __fastcall FUN_00bb6bff(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bb589a(param_1,0x2b);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x60))();
    if (-1 < iVar1) {
      iVar1 = FUN_00bb0cad((int)param_1);
      if (-1 < iVar1) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb6c29 @ 00bb6c29 ////

int __fastcall FUN_00bb6c29(int *param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar1 = FUN_00bb589a(param_1,1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x6c))
                      (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),&local_8,
                       &local_1c,&local_18);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x70))
                        (*(undefined4 *)(param_1[0x40] + 0x10),*(undefined4 *)(param_1[0x40] + 0xc),
                         &local_c,local_18);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 100))(local_8,local_c,local_1c);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*param_1 + 0x74))
                            (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),
                             &local_8,&local_10);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*param_1 + 0x78))
                              (*(undefined4 *)(param_1[0x40] + 8),
                               *(undefined4 *)(param_1[0x40] + 0xc),local_c,&local_14);
            if (-1 < iVar1) {
              if ((local_8 & 0xb000000) == 0) {
                local_14 = local_14 | 0x1000000;
              }
              else {
                local_14 = local_14 | 0xc000000;
                local_8 = local_8 & 0xf4ffffff;
              }
              iVar1 = (**(code **)(*param_1 + 0x68))(local_8,local_14,local_10);
              if (-1 < iVar1) {
                iVar1 = (**(code **)(*param_1 + 0x60))();
                if (-1 < iVar1) {
                  iVar1 = FUN_00bb0cad((int)param_1);
                  if (-1 < iVar1) {
                    iVar1 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb6d36 @ 00bb6d36 ////

int __fastcall FUN_00bb6d36(void *param_1)

{
  int iVar1;
  uint uVar2;
  int local_c;
  uint local_8;
  
  uVar2 = **(uint **)((int)param_1 + 0x100) & 0xfffff;
  local_8 = 0;
  if (uVar2 != 0) {
    local_c = uVar2 << 2;
    do {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x100) + 8);
      iVar1 = FUN_00bb5a68(param_1,0x20,
                           (int *)(*(int *)(*(int *)((int)param_1 + 0x100) + 0x10) + local_8 * 4),1,
                           (int *)(iVar1 + local_8 * 4),(int *)(local_c + iVar1),(int *)0x0,uVar2,0,
                           0,0,0);
      if (iVar1 < 0) {
        return iVar1;
      }
      local_8 = local_8 + 1;
      local_c = local_c + 4;
    } while (local_8 < uVar2);
  }
  return 0;
}


//// FUNCTION FUN_00bb6da8 @ 00bb6da8 ////

int __fastcall FUN_00bb6da8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  uVar3 = *(uint *)param_1[0x40] & 0xfffff;
  uVar1 = (**(code **)(*param_1 + 0x5c))(0x12);
  iVar2 = FUN_00bb589a(param_1,uVar1);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x6c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                           &local_8,&local_1c,&local_18), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x70))
                         (*(undefined4 *)(param_1[0x40] + 0x10),uVar3,&local_14,local_18),
      -1 < iVar2)) && (iVar2 = (**(code **)(*param_1 + 100))(local_8,local_14,local_1c), -1 < iVar2)
     ) {
    local_10 = 0;
    local_c = 0;
    do {
      piVar4 = (int *)(*(int *)(param_1[0x40] + 8) + local_c);
      iVar2 = (**(code **)(*param_1 + 0x74))
                        (*(undefined4 *)(param_1[5] + *piVar4 * 4),&local_8,&local_20);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*param_1 + 0x78))(piVar4,uVar3,local_14,&local_24);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_24,local_20);
      if (iVar2 < 0) {
        return iVar2;
      }
      local_10 = local_10 + 1;
      local_c = local_c + uVar3 * 4;
    } while (local_10 < 3);
    iVar2 = (**(code **)(*param_1 + 0x60))();
    if ((-1 < iVar2) && (iVar2 = FUN_00bb0cad((int)param_1), -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00bb6ec3 @ 00bb6ec3 ////

int __fastcall FUN_00bb6ec3(int *param_1)

{
  int iVar1;
  uint uVar2;
  int local_18 [4];
  int *local_8;
  
  local_8 = (int *)((uint *)param_1[0x40])[4];
  uVar2 = *(uint *)param_1[0x40] & 0xfffff;
  if (param_1[0x22] != *(int *)(*(int *)(param_1[5] + *local_8 * 4) + 4)) {
    iVar1 = (**(code **)(*param_1 + 0x80))(param_1[0x3f],local_18,uVar2,0,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    local_8 = local_18;
  }
  iVar1 = FUN_00bb5a68(param_1,0x24,local_8,uVar2,*(int **)(param_1[0x40] + 8),(int *)0x0,(int *)0x0
                       ,uVar2,0,0,0,0);
  if (-1 < iVar1) {
    if ((local_8 == local_18) &&
       (iVar1 = FUN_00bb5a68(param_1,1,*(int **)(param_1[0x40] + 0x10),uVar2,local_18,(int *)0x0,
                             (int *)0x0,uVar2,0,0,0,0), iVar1 < 0)) {
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00bb6f69 @ 00bb6f69 ////

int __fastcall FUN_00bb6f69(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  uVar4 = *(uint *)param_1[0x40] & 0xfffff;
  uVar2 = (**(code **)(*param_1 + 0x5c))(4);
  iVar3 = FUN_00bb589a(param_1,uVar2);
  if ((((-1 < iVar3) &&
       (iVar3 = (**(code **)(*param_1 + 0x6c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                           &local_c,&local_1c,&local_18), -1 < iVar3)) &&
      (iVar3 = (**(code **)(*param_1 + 0x70))
                         (*(undefined4 *)(param_1[0x40] + 0x10),uVar4,&local_10,local_18),
      -1 < iVar3)) && (iVar3 = (**(code **)(*param_1 + 100))(local_c,local_10,local_1c), -1 < iVar3)
     ) {
    local_8 = 0;
    do {
      piVar1 = (int *)(((uint *)param_1[0x40])[2] + local_8 * uVar4 * 4);
      if ((local_8 == 1) && ((*(uint *)param_1[0x40] & 0xfff00000) == 0x70400000)) {
        local_14 = 0x1000000;
      }
      else {
        local_14 = 0;
      }
      iVar3 = (**(code **)(*param_1 + 0x74))
                        (*(undefined4 *)(param_1[5] + *piVar1 * 4),&local_c,&local_20);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*param_1 + 0x78))(piVar1,uVar4,local_10,&local_24);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*param_1 + 0x68))(local_14 ^ local_c,local_24,local_20);
      if (iVar3 < 0) {
        return iVar3;
      }
      local_8 = local_8 + 1;
    } while (local_8 < 3);
    iVar3 = (**(code **)(*param_1 + 0x60))();
    if ((-1 < iVar3) && (iVar3 = FUN_00bb0cad((int)param_1), -1 < iVar3)) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


//// FUNCTION FUN_00bb70a7 @ 00bb70a7 ////

int __fastcall FUN_00bb70a7(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  uVar1 = *(uint *)param_1[0x40];
  uVar3 = uVar1 & 0xfffff;
  if (uVar1 == 0x70500003) {
    uVar4 = 0x18;
  }
  else if (uVar1 == 0x70600003) {
    uVar4 = 0x17;
  }
  else if (uVar1 == 0x70600004) {
    uVar4 = 0x15;
  }
  else if (uVar1 == 0x70700003) {
    uVar4 = 0x16;
  }
  else {
    uVar4 = local_1c;
    if (uVar1 == 0x70700004) {
      uVar4 = 0x14;
    }
  }
  iVar2 = FUN_00bb589a(param_1,uVar4);
  if ((((-1 < iVar2) &&
       (iVar2 = (**(code **)(*param_1 + 0x6c))
                          (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 0x10) * 4),
                           &local_8,&local_1c,&local_18), -1 < iVar2)) &&
      (iVar2 = (**(code **)(*param_1 + 0x70))
                         (*(undefined4 *)(param_1[0x40] + 0x10),*(undefined4 *)(param_1[0x40] + 0xc)
                          ,&local_c,local_18), -1 < iVar2)) &&
     (iVar2 = (**(code **)(*param_1 + 100))(local_8,local_c,local_1c), -1 < iVar2)) {
    local_c = ((uVar3 != 3) - 1 & 0xfff80000) + 0xf0000;
    iVar2 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),&local_8,
                       &local_10);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*param_1 + 0x78))
                           (*(undefined4 *)(param_1[0x40] + 8),uVar3,local_c,&local_14), -1 < iVar2)
        ) && (iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_14,local_10), -1 < iVar2)) {
      iVar2 = (**(code **)(*param_1 + 0x74))
                        (*(undefined4 *)
                          (param_1[5] + *(int *)(uVar3 * 4 + *(int *)(param_1[0x40] + 8)) * 4),
                         &local_8,&local_10);
      if (((-1 < iVar2) &&
          (iVar2 = (**(code **)(*param_1 + 0x78))
                             (*(int *)(param_1[0x40] + 8) + uVar3 * 4,uVar3,local_c,&local_14),
          -1 < iVar2)) &&
         ((iVar2 = (**(code **)(*param_1 + 0x68))(local_8,local_14,local_10), -1 < iVar2 &&
          ((iVar2 = (**(code **)(*param_1 + 0x60))(), -1 < iVar2 &&
           (iVar2 = FUN_00bb0cad((int)param_1), -1 < iVar2)))))) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00bb7259 @ 00bb7259 ////

void __thiscall FUN_00bb7259(void *this,int param_1,uint param_2)

{
  uint *this_00;
  int iVar1;
  uint uVar2;
  int *local_24 [4];
  uint local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  this_00 = *(uint **)((int)this + 0x100);
  local_14 = this_00[3];
  local_24[3] = (int *)this_00[4];
  uVar2 = *this_00 & 0xfffff;
  FUN_00b6b448(this_00,0,(int *)local_24);
  FUN_00b6b448(*(void **)((int)this + 0x100),1,(int *)(local_24 + 1));
  FUN_00b6b448(*(void **)((int)this + 0x100),2,(int *)(local_24 + 2));
  local_10 = 0;
  if (param_2 != 0) {
    param_2 = 0;
    do {
      if (local_10 != 0) break;
      if ((local_24[param_2] != (int *)0x0) && (local_c = 0, uVar2 != 0)) {
        iVar1 = 0;
        local_8 = local_24[param_2];
        do {
          if ((*(byte *)(iVar1 + 3 + *(int *)(*(int *)((int)this + 0x14) + *local_8 * 4)) & 1) != 0)
          {
            local_10 = 1;
            break;
          }
          local_c = local_c + 1;
          local_8 = local_8 + 1;
          iVar1 = iVar1 + 0x80;
        } while (local_c < uVar2);
      }
      param_2 = param_2 + 1;
    } while (param_2 < 3);
  }
  FUN_00bb5a68(this,param_1,local_24[3],local_14,local_24[0],local_24[1],local_24[2],uVar2,0,0,0,
               local_10);
  return;
}


//// FUNCTION FUN_00bb7332 @ 00bb7332 ////

int __thiscall
FUN_00bb7332(void *this,int param_1,int *param_2,int *param_3,uint param_4,uint param_5,uint param_6
            )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int local_34 [4];
  int local_24 [4];
  int *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if (((param_5 < param_4) && (param_5 == 1)) &&
     (**(int **)(*(int *)((int)this + 0x100) + 8) == *param_3)) {
    iVar2 = FUN_00bb7259(this,param_1,0);
  }
  else {
    iVar3 = *param_3 * 4;
    iVar2 = *param_2 * 4;
    if (((*(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar2) + 4) ==
          *(int *)(*(int *)(iVar3 + *(int *)((int)this + 0x14)) + 4)) &&
        (*(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar2) + 8) ==
         *(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar3) + 8))) &&
       (*(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar2) + 0xc) ==
        *(int *)(*(int *)(*(int *)((int)this + 0x14) + iVar3) + 0xc))) {
      uVar6 = 0;
      bVar7 = false;
      if (param_4 != 0) {
        do {
          param_5 = 0;
          if (uVar6 != 0) {
            do {
              if (*(int *)(*(int *)(*(int *)((int)this + 0x14) + param_3[uVar6] * 4) + 0x10) ==
                  *(int *)(*(int *)(*(int *)((int)this + 0x14) + param_2[param_5] * 4) + 0x10))
              break;
              param_5 = param_5 + 1;
            } while (param_5 < uVar6);
            if (param_5 < uVar6) break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_4);
        bVar7 = uVar6 < param_4;
      }
      local_c = (uint)bVar7;
      if (local_c != 0) {
        uVar4 = 0;
        uVar6 = 0;
        if (param_4 != 0) {
          do {
            uVar1 = *(uint *)(*(int *)(*(int *)((int)this + 0x14) + param_2[uVar4] * 4) + 0x10);
            if (uVar6 <= uVar1) {
              uVar6 = uVar1 + 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < param_4);
        }
        iVar2 = (**(code **)(*(int *)this + 0x80))
                          (*(undefined4 *)((int)this + 0xfc),local_34,uVar6,0,0);
        uVar6 = 0;
        if (iVar2 < 0) {
          return iVar2;
        }
        if (param_4 != 0) {
          iVar2 = *(int *)((int)this + 0x14);
          do {
            local_24[uVar6] = local_34[*(int *)(*(int *)(iVar2 + param_2[uVar6] * 4) + 0x10)];
            uVar6 = uVar6 + 1;
          } while (uVar6 < param_4);
        }
        local_14 = param_2;
        param_2 = local_24;
      }
    }
    else {
      local_c = 0;
    }
    uVar6 = 0;
    if (param_4 != 0) {
      do {
        param_5 = 1;
        if (uVar6 + 1 < param_4) {
          piVar5 = param_3 + uVar6;
          local_10 = *(int *)(*(int *)(*(int *)((int)this + 0x14) + *piVar5 * 4) + 0x10);
          local_8 = uVar6 + 1;
          do {
            piVar5 = piVar5 + 1;
            if (*(int *)(*(int *)(*(int *)((int)this + 0x14) + *piVar5 * 4) + 0x10) != local_10)
            break;
            param_5 = param_5 + 1;
            local_8 = local_8 + 1;
          } while (local_8 < param_4);
        }
        iVar2 = FUN_00bb5a68(this,param_1,param_2 + uVar6,param_5,param_3 + uVar6,(int *)0x0,
                             (int *)0x0,param_5,param_6,param_6,param_6,0);
        if (iVar2 < 0) {
          return iVar2;
        }
        uVar6 = uVar6 + param_5;
      } while (uVar6 < param_4);
    }
    if ((local_c == 0) ||
       (iVar2 = FUN_00bb5a68(this,1,local_14,param_4,param_2,(int *)0x0,(int *)0x0,param_4,0,0,0,0),
       -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00bb7531 @ 00bb7531 ////

int __fastcall FUN_00bb7531(int *param_1)

{
  int iVar1;
  int *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00bb589a(param_1,0x26);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x74))
                      (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),&local_c,
                       &local_8);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x68))(local_c,0xe40000,local_8);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*param_1 + 0x60))();
        if (-1 < iVar1) {
          iVar1 = FUN_00bb0cad((int)param_1);
          if (-1 < iVar1) {
            iVar1 = 0;
          }
        }
      }
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb759b @ 00bb759b ////

int __fastcall FUN_00bb759b(int *param_1)

{
  int iVar1;
  int *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00bb589a(param_1,0x1b);
  if (-1 < iVar1) {
    local_8 = (int *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x68))(0xf0000800,0xe40000,0);
    if ((((-1 < iVar1) &&
         (iVar1 = (**(code **)(*param_1 + 0x74))
                            (*(undefined4 *)(param_1[5] + **(int **)(param_1[0x40] + 8) * 4),
                             &local_8,&local_c), -1 < iVar1)) &&
        (iVar1 = (**(code **)(*param_1 + 0x68))(local_8,0xe40000,local_c), -1 < iVar1)) &&
       ((iVar1 = (**(code **)(*param_1 + 0x60))(), -1 < iVar1 &&
        (iVar1 = FUN_00bb0cad((int)param_1), -1 < iVar1)))) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00bb761f @ 00bb761f ////

int __fastcall FUN_00bb761f(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint local_8;
  
  if (*(int *)((int)param_1 + 0x8c) ==
      *(int *)(*(int *)(*(int *)((int)param_1 + 0x14) +
                       **(int **)(*(int *)((int)param_1 + 0x100) + 0x10) * 4) + 4)) {
    iVar5 = FUN_00bb7259(param_1,0x2e,0);
  }
  else {
    if ((*(byte *)((int)param_1 + 0x6e) & 0x10) == 0) {
      uVar1 = *(uint *)(*(int *)((int)param_1 + 0x100) + 0xc);
      local_8 = 0;
      if (uVar1 != 0) {
        piVar6 = *(int **)(*(int *)((int)param_1 + 0x100) + 0x10);
        iVar5 = *(int *)(*(int *)((int)param_1 + 0x100) + 8) - (int)piVar6;
        do {
          iVar2 = *(int *)(*(int *)((int)param_1 + 0x14) + *(int *)(iVar5 + (int)piVar6) * 4);
          iVar3 = *(int *)(*(int *)((int)param_1 + 0x14) + *piVar6 * 4);
          if ((((*(int *)(iVar3 + 4) != *(int *)(iVar2 + 4)) ||
               (*(int *)(iVar3 + 8) != *(int *)(iVar2 + 8))) ||
              (*(int *)(iVar3 + 0xc) != *(int *)(iVar2 + 0xc))) ||
             (((*(int *)(iVar3 + 0x10) != *(int *)(iVar2 + 0x10) ||
               (*(int *)(iVar3 + 0x3c) != *(int *)(iVar2 + 0x3c))) ||
              (((*(byte *)((int)param_1 + 0xcc) & 4) != 0 && (*(int *)(iVar3 + 0x60) != 0))))))
          break;
          local_8 = local_8 + 1;
          piVar6 = piVar6 + 1;
        } while (local_8 < uVar1);
      }
      if (local_8 == uVar1) {
        return 0;
      }
    }
    local_8 = 0;
    if (*(int *)(*(int *)((int)param_1 + 0x100) + 0xc) != 0) {
      do {
        puVar4 = *(uint **)(*(int *)((int)param_1 + 0x14) +
                           *(int *)(*(int *)(*(int *)((int)param_1 + 0x100) + 0x10) + local_8 * 4) *
                           4);
        if ((*puVar4 & 0xe000000) == 0) {
          *puVar4 = **(uint **)(*(int *)((int)param_1 + 0x14) +
                               *(int *)(*(int *)(*(int *)((int)param_1 + 0x100) + 8) + local_8 * 4)
                               * 4) & 0xe000000 | *puVar4;
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)(*(int *)((int)param_1 + 0x100) + 0xc));
    }
    iVar5 = *(int *)((int)param_1 + 0x100);
    iVar5 = FUN_00bb5a68(param_1,1,*(int **)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0xc),
                         *(int **)(iVar5 + 8),(int *)0x0,(int *)0x0,*(undefined4 *)(iVar5 + 0xc),0,0
                         ,0,0);
  }
  return iVar5;
}


//// FUNCTION FUN_00bb7758 @ 00bb7758 ////

void __fastcall FUN_00bb7758(void *param_1)

{
  FUN_00bb7259(param_1,0x5b,0);
  return;
}


//// FUNCTION FUN_00bb7762 @ 00bb7762 ////

void __fastcall FUN_00bb7762(void *param_1)

{
  FUN_00bb7259(param_1,0x5c,0);
  return;
}


//// FUNCTION FUN_00bb776c @ 00bb776c ////

void __fastcall FUN_00bb776c(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  FUN_00bb7332(param_1,6,*(int **)(iVar1 + 0x10),*(int **)(iVar1 + 8),*(uint *)(iVar1 + 0xc),
               *(uint *)(iVar1 + 4),0);
  return;
}


//// FUNCTION FUN_00bb778a @ 00bb778a ////

void __fastcall FUN_00bb778a(void *param_1)

{
  FUN_00bb7259(param_1,0x13,0);
  return;
}


//// FUNCTION FUN_00bb7794 @ 00bb7794 ////

void __fastcall FUN_00bb7794(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  FUN_00bb7332(param_1,0xe,*(int **)(iVar1 + 0x10),*(int **)(iVar1 + 8),*(uint *)(iVar1 + 0xc),
               *(uint *)(iVar1 + 4),0);
  return;
}


//// FUNCTION FUN_00bb77b2 @ 00bb77b2 ////

void __fastcall FUN_00bb77b2(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  FUN_00bb7332(param_1,0xf,*(int **)(iVar1 + 0x10),*(int **)(iVar1 + 8),*(uint *)(iVar1 + 0xc),
               *(uint *)(iVar1 + 4),0);
  return;
}


//// FUNCTION FUN_00bb77d0 @ 00bb77d0 ////

void __fastcall FUN_00bb77d0(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x100);
  FUN_00bb7332(param_1,7,*(int **)(iVar1 + 0x10),*(int **)(iVar1 + 8),*(uint *)(iVar1 + 0xc),
               *(uint *)(iVar1 + 4),0);
  return;
}


//// FUNCTION FUN_00bb77ee @ 00bb77ee ////

void __fastcall FUN_00bb77ee(void *param_1)

{
  FUN_00bb7259(param_1,10,0);
  return;
}


//// FUNCTION FUN_00bb77f8 @ 00bb77f8 ////

void __fastcall FUN_00bb77f8(void *param_1)

{
  FUN_00bb7259(param_1,0xb,0);
  return;
}


//// FUNCTION FUN_00bb7802 @ 00bb7802 ////

void __fastcall FUN_00bb7802(void *param_1)

{
  FUN_00bb7259(param_1,0xc,0);
  return;
}


//// FUNCTION FUN_00bb780c @ 00bb780c ////

void __fastcall FUN_00bb780c(void *param_1)

{
  FUN_00bb7259(param_1,0xd,0);
  return;
}


//// FUNCTION FUN_00bb7816 @ 00bb7816 ////

void __fastcall FUN_00bb7816(void *param_1)

{
  FUN_00bb7259(param_1,2,0);
  return;
}


//// FUNCTION FUN_00bb7820 @ 00bb7820 ////

void __fastcall FUN_00bb7820(void *param_1)

{
  FUN_00bb7259(param_1,5,0);
  return;
}


//// FUNCTION FUN_00bb782a @ 00bb782a ////

void __fastcall FUN_00bb782a(void *param_1)

{
  FUN_00bb7259(param_1,0x11,0);
  return;
}


//// FUNCTION FUN_00bb7834 @ 00bb7834 ////

int __fastcall FUN_00bb7834(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *local_c;
  int *local_8;
  
  uVar1 = *(uint *)param_1[0x40] & 0xfffff;
  local_c = param_1;
  local_8 = param_1;
  if (uVar1 == 1) {
    iVar2 = 5;
  }
  else if (uVar1 == 3) {
    iVar2 = 8;
  }
  else {
    if (uVar1 != 4) {
      iVar2 = (**(code **)(*param_1 + 0x80))(param_1[0x3f],&local_c,2,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = FUN_00bb5a68(param_1,5,(int *)&local_c,2,*(int **)(param_1[0x40] + 8),
                           *(int **)(param_1[0x40] + 8) + 2,(int *)0x0,2,0,0,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = FUN_00bb5a68(param_1,2,*(int **)(param_1[0x40] + 0x10),
                           *(undefined4 *)(param_1[0x40] + 0xc),(int *)&local_c,(int *)&local_8,
                           (int *)0x0,1,0,0,0,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      return 0;
    }
    iVar2 = 9;
  }
  iVar2 = FUN_00bb7259(param_1,iVar2,0);
  return iVar2;
}


//// FUNCTION FUN_00bb78e7 @ 00bb78e7 ////

void __fastcall FUN_00bb78e7(void *param_1)

{
  FUN_00bb7259(param_1,0x10,0);
  return;
}


//// FUNCTION FUN_00bb78f1 @ 00bb78f1 ////

void __fastcall FUN_00bb78f1(void *param_1)

{
  FUN_00bb7259(param_1,0x58,0);
  return;
}


//// FUNCTION FUN_00bb78fb @ 00bb78fb ////

void __fastcall FUN_00bb78fb(void *param_1)

{
  FUN_00bb7259(param_1,0x50,0);
  return;
}


//// FUNCTION FUN_00bb7905 @ 00bb7905 ////

void __fastcall FUN_00bb7905(void *param_1)

{
  FUN_00bb7259(param_1,0x23,0);
  return;
}


//// FUNCTION FUN_00bb790f @ 00bb790f ////

undefined4 __fastcall FUN_00bb790f(undefined4 param_1)

{
  return param_1;
}


//// FUNCTION FUN_00bb7912 @ 00bb7912 ////

void FUN_00bb7912(void)

{
  return;
}


//// FUNCTION FUN_00bb7913 @ 00bb7913 ////

void __thiscall
FUN_00bb7913(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (4 < param_4) {
    param_4 = 4;
  }
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  return;
}


//// FUNCTION FUN_00bb795b @ 00bb795b ////

undefined4 __thiscall FUN_00bb795b(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0x80004005;
  }
  else {
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
    uVar1 = 0;
  }
  return uVar1;
}


//// FUNCTION FUN_00bb79c0 @ 00bb79c0 ////

void __thiscall FUN_00bb79c0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  do {
    do {
      iVar3 = param_2;
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + iVar3 * 4);
      param_2 = *(int *)(iVar2 + 0x38);
    } while (*(int *)(iVar2 + 0x38) != -1);
    *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
    *(int *)(iVar2 + 0x74) = param_1;
    if ((*(byte *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x10) + *(int *)(iVar2 + 4) * 4) + 4)
        & 0x10) == 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        *(int *)(*(int *)((int)this + 0x10) +
                (*(int *)(*(int *)((int)this + 0xc) + param_1 * 4) +
                *(int *)(*(int *)((int)this + 8) + param_1 * 4)) * 4) = iVar3;
      }
      piVar1 = (int *)(*(int *)((int)this + 8) + param_1 * 4);
      *piVar1 = *piVar1 + 1;
    }
    param_2 = *(int *)(iVar2 + 8);
  } while (*(int *)(iVar2 + 8) != -1);
  return;
}


//// FUNCTION FUN_00bb7a35 @ 00bb7a35 ////

void __thiscall FUN_00bb7a35(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + param_2 * 4);
  if (((*(byte *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x10) + *(int *)(iVar2 + 4) * 4) + 4)
       & 0x20) == 0) && (*(int *)(iVar2 + 0x5c) != 0)) {
    if (*(int *)((int)this + 0x24) != 0) {
      *(int *)(*(int *)((int)this + 0x24) +
              (*(int *)(*(int *)((int)this + 0x20) + param_1 * 4) +
              *(int *)(*(int *)((int)this + 0x1c) + param_1 * 4)) * 4) = param_2;
    }
    piVar1 = (int *)(*(int *)((int)this + 0x1c) + param_1 * 4);
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)(iVar2 + 0x14) != -1) {
    FUN_00bb79c0(this,param_1,*(int *)(iVar2 + 0x14));
  }
  return;
}


//// FUNCTION FUN_00bb7a9e @ 00bb7a9e ////

void __thiscall FUN_00bb7a9e(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  do {
    iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + param_2 * 4);
    if (*(int *)(iVar2 + 0x74) == param_1) {
      piVar1 = (int *)(*(int *)((int)this + 0x28) + param_1 * 4);
      *piVar1 = *piVar1 + 1;
    }
    if (*(int *)(iVar2 + 0x54) != 0) {
      *(int *)(iVar2 + 0x74) = param_1;
      piVar1 = (int *)(*(int *)((int)this + 0x28) + param_1 * 4);
      *piVar1 = *piVar1 + -1;
    }
    param_2 = *(int *)(iVar2 + 8);
  } while (param_2 != -1);
  return;
}


//// FUNCTION FUN_00bb7ade @ 00bb7ade ////

void __thiscall FUN_00bb7ade(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + param_2 * 4) + 0x14);
  if (iVar1 != -1) {
    FUN_00bb7a9e(this,param_1,iVar1);
  }
  return;
}


//// FUNCTION FUN_00bb7b04 @ 00bb7b04 ////

void __thiscall FUN_00bb7b04(void *this,int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_2 - param_1 >> 1;
  if (uVar4 != 0) {
    iVar5 = param_1 << 2;
    iVar3 = param_2 * 4;
    param_2 = uVar4;
    do {
      iVar3 = iVar3 + -4;
      puVar1 = (undefined4 *)(iVar5 + *(int *)((int)this + 0x3c));
      uVar2 = *puVar1;
      *puVar1 = *(undefined4 *)(iVar3 + *(int *)((int)this + 0x3c));
      *(undefined4 *)(iVar3 + *(int *)((int)this + 0x3c)) = uVar2;
      iVar5 = iVar5 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00bb7b4e @ 00bb7b4e ////

uint FUN_00bb7b4e(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_3 + 0x3c) + param_1 * 4);
  uVar2 = *(uint *)(*(int *)(param_3 + 0x3c) + param_2 * 4);
  if (*(uint *)(*(int *)(param_3 + 0x2c) + uVar1 * 4) <=
      *(uint *)(*(int *)(param_3 + 0x2c) + uVar2 * 4)) {
    if (*(uint *)(*(int *)(param_3 + 0x2c) + uVar1 * 4) <
        *(uint *)(*(int *)(param_3 + 0x2c) + uVar2 * 4)) {
      return 1;
    }
    if (uVar2 <= uVar1) {
      return (uint)(uVar2 < uVar1);
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00bb7b95 @ 00bb7b95 ////

uint FUN_00bb7b95(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)(param_2 < param_1);
  }
  return uVar1;
}


//// FUNCTION FUN_00bb7baf @ 00bb7baf ////

void FUN_00bb7baf(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (1 < *param_2) {
    FUN_00b6c999(FUN_00bb7b95,param_1,*param_2,0);
    uVar1 = 1;
    uVar2 = 1;
    if (1 < *param_2) {
      do {
        if (param_1[uVar1] != param_1[uVar1 - 1]) {
          param_1[uVar2] = param_1[uVar1];
          uVar2 = uVar2 + 1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *param_2);
    }
    *param_2 = uVar2;
  }
  return;
}


//// FUNCTION FUN_00bb7bf5 @ 00bb7bf5 ////

void __thiscall FUN_00bb7bf5(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  local_1c = 0;
  local_10 = 0;
  local_14 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x3c) + local_c * 4);
      iVar5 = iVar1 * 4;
      iVar2 = *(int *)(iVar5 + *(int *)(*(int *)((int)this + 4) + 0x18));
      *(uint *)(iVar5 + *(int *)((int)this + 0x2c)) = uVar6;
      *(undefined4 *)(iVar5 + *(int *)((int)this + 0x28)) = 0;
      if ((*(ushort *)(iVar2 + 2) & 0xfff0) != 0) {
        iVar2 = *(int *)(iVar5 + *(int *)((int)this + 0xc));
        iVar3 = *(int *)((int)this + 0x10);
        local_8 = 0;
        uVar4 = *(uint *)(iVar5 + *(int *)((int)this + 8));
        if (uVar4 != 0) {
          do {
            if (iVar1 == *(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) +
                                          *(int *)(iVar3 + iVar2 * 4 + local_8 * 4) * 4) + 0x58)) {
              piVar7 = (int *)(*(int *)((int)this + 0x28) + iVar5);
              *piVar7 = *piVar7 + -1;
            }
            local_8 = local_8 + 1;
            uVar6 = local_1c;
          } while (local_8 < uVar4);
        }
        iVar1 = *(int *)(iVar5 + *(int *)((int)this + 0x20));
        iVar2 = *(int *)((int)this + 0x24);
        uVar4 = *(uint *)(iVar5 + *(int *)((int)this + 0x1c));
        local_18 = 0;
        if (uVar4 != 0) {
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) +
                                 *(int *)(iVar2 + iVar1 * 4 + local_18 * 4) * 4) + 0x5c) != 0) {
              piVar7 = (int *)(*(int *)((int)this + 0x28) + iVar5);
              *piVar7 = *piVar7 + 1;
            }
            local_18 = local_18 + 1;
          } while (local_18 < uVar4);
        }
        local_10 = local_10 + uVar6;
        if (local_14 < uVar6) {
          local_14 = uVar6;
        }
        uVar6 = uVar6 + *(int *)(*(int *)((int)this + 0x28) + iVar5);
        local_1c = uVar6;
      }
      local_c = local_c + 1;
    } while (local_c < *(uint *)((int)this + 0x38));
  }
  if (param_1 != (int *)0x0) {
    *param_1 = local_10;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = local_14;
  }
  return;
}


//// FUNCTION FUN_00bb7d12 @ 00bb7d12 ////

undefined4 __thiscall FUN_00bb7d12(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *this_00;
  void *this_01;
  void *this_02;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_44 = 0;
  local_10 = param_1 + 1;
  iVar6 = *(int *)(*(int *)((int)this + 0x3c) + param_1 * 4);
  local_14 = param_1;
  iVar2 = iVar6 * 4;
  if (*(int *)(iVar2 + *(int *)((int)this + 0x34)) != 0) {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) +
                  **(int **)(*(int *)(iVar2 + *(int *)(*(int *)((int)this + 4) + 0x18)) + 0x10) * 4)
  ;
  local_28 = *(int *)(iVar1 + 0x14);
  local_38 = *(int *)(iVar1 + 0x18);
  local_18 = *(uint *)(iVar2 + *(int *)((int)this + 8));
  puVar9 = (undefined4 *)
           (*(int *)((int)this + 0x10) + *(int *)(iVar2 + *(int *)((int)this + 0xc)) * 4);
  puVar11 = *(undefined4 **)((int)this + 0x14);
  for (uVar4 = local_18; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
LAB_00bb7d84:
  local_8 = 0;
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 1;
  for (uVar4 = local_14; uVar4 < local_10; uVar4 = uVar4 + 1) {
    iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                    *(int *)(*(int *)((int)this + 0x3c) + uVar4 * 4) * 4);
    uVar5 = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      do {
        iVar1 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                  *(int *)(*(int *)(iVar2 + 0x18) + iVar1) * 4) + 0x24) =
             *(undefined4 *)((int)this + 0x48);
      } while (uVar5 < *(uint *)(iVar2 + 0x14));
    }
    uVar5 = 0;
    if (*(int *)(iVar2 + 0x1c) != 0) {
      do {
        iVar1 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)
         (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                  *(int *)(*(int *)(iVar2 + 0x20) + iVar1) * 4) + 0x24) =
             *(undefined4 *)((int)this + 0x48);
      } while (uVar5 < *(uint *)(iVar2 + 0x1c));
    }
    local_8 = local_8 + *(int *)(*(int *)((int)this + 0x28) +
                                *(int *)(*(int *)((int)this + 0x3c) + uVar4 * 4) * 4);
  }
  uVar4 = 0;
  if (local_18 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + uVar4 * 4);
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)((int)this + 0x48);
      uVar4 = uVar4 + 1;
      *(uint *)(iVar2 + 0x54) = (uint)(iVar6 == *(int *)(iVar2 + 0x74));
    } while (uVar4 < local_18);
  }
  do {
    if (local_8 < 0) {
      local_2c = -1;
      local_c = local_14;
      local_3c = local_14;
    }
    else {
      if (local_8 < 1) goto LAB_00bb816f;
      local_3c = local_10 - 1;
      local_c = local_10;
      local_2c = 1;
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    param_1 = local_c;
    do {
      local_3c = local_3c + local_2c;
      if (*(uint *)((int)this + 0x38) <= local_3c) break;
      local_48 = *(int *)(*(int *)((int)this + 0x3c) + local_3c * 4);
      iVar2 = local_48 * 4;
      if (*(int *)(iVar2 + *(int *)((int)this + 0x34)) == 0) {
        iVar1 = *(int *)((int)this + 4);
        local_50 = *(int *)(*(int *)(iVar1 + 0x14) +
                           **(int **)(*(int *)(*(int *)(iVar1 + 0x18) + iVar2) + 0x10) * 4);
        iVar10 = *(int *)(local_50 + 0x18);
        for (iVar7 = *(int *)(local_50 + 0x14); iVar7 != -1; iVar7 = *(int *)(iVar7 + 0x14)) {
          if (local_28 == iVar7) goto LAB_00bb7eb6;
          iVar7 = *(int *)(*(int *)(iVar1 + 0x14) + iVar7 * 4);
          iVar10 = *(int *)(iVar7 + 0x18);
        }
        if (local_28 != -1) goto LAB_00bb816f;
LAB_00bb7eb6:
        if (local_38 != iVar10) goto LAB_00bb816f;
      }
      if (local_3c < local_c) {
        local_c = local_3c;
      }
      if (param_1 <= local_3c) {
        param_1 = local_3c + 1;
      }
      local_4c = (undefined4 *)
                 (*(int *)((int)this + 0x10) + *(int *)(iVar2 + *(int *)((int)this + 0xc)) * 4);
      local_34 = *(uint *)(iVar2 + *(int *)((int)this + 8));
      puVar9 = local_4c;
      puVar11 = (undefined4 *)(*(int *)((int)this + 0x18) + local_24 * 4);
      for (uVar4 = local_34; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      local_24 = local_24 + *(int *)(iVar2 + *(int *)((int)this + 8));
      local_20 = local_20 + *(int *)(*(int *)((int)this + 0x28) + iVar2);
      local_1c = local_1c |
                 *(int *)((int)this + 0x48) ==
                 *(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) + iVar2) + 0x24);
      local_30 = 0;
      if (local_34 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + local_4c[local_30] * 4);
          if ((*(int *)(iVar1 + 0x30) != *(int *)((int)this + 0x48)) ||
             (local_48 == *(int *)(iVar1 + 0x74))) {
            *(int *)(iVar1 + 0x30) = *(int *)((int)this + 0x48);
            *(uint *)(iVar1 + 0x54) = (local_48 != *(int *)(iVar1 + 0x74)) - 1;
          }
          local_30 = local_30 + 1;
        } while (local_30 < local_34);
      }
    } while (((*(int *)(iVar2 + *(int *)((int)this + 0x34)) != 0) ||
             (local_28 != *(int *)(local_50 + 0x14))) || (local_38 != *(int *)(local_50 + 0x18)));
    if (param_1 <= local_c) {
LAB_00bb816f:
      if (local_44 == 0) {
        return 1;
      }
      puVar9 = *(undefined4 **)((int)this + 0x40);
      puVar11 = *(undefined4 **)((int)this + 0x3c);
      for (uVar4 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_00bb7bf5(this,(int *)0x0,(uint *)0x0);
      return 1;
    }
    if (local_c + 1 < param_1) {
      FUN_00bb7baf(*(undefined4 **)((int)this + 0x18),&local_24);
    }
    if (local_1c == 0) {
      if (local_8 < 0) {
        local_2c = local_20;
        if (local_24 != 0) {
          piVar3 = *(int **)((int)this + 0x18);
          uVar4 = local_24;
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + *piVar3 * 4) + 0x54) ==
                1) {
              local_2c = local_2c + -1;
            }
            piVar3 = piVar3 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_2c < local_8) {
LAB_00bb8022:
          local_1c = 1;
        }
      }
      else {
        local_2c = local_8;
        if (local_18 != 0) {
          piVar3 = *(int **)((int)this + 0x14);
          uVar4 = local_18;
          do {
            if (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) + *piVar3 * 4) + 0x54) ==
                -1) {
              local_2c = local_2c + -1;
            }
            piVar3 = piVar3 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (local_2c < local_20) goto LAB_00bb8022;
      }
    }
    uVar4 = local_14;
    if (local_c <= local_14) {
      uVar4 = local_c;
    }
    uVar5 = local_10;
    if (local_10 <= param_1) {
      uVar5 = param_1;
    }
    if (local_1c == 0) break;
    uVar8 = 0;
    if (local_24 != 0) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x14) +
                        *(int *)(*(int *)((int)this + 0x18) + uVar8 * 4) * 4);
        uVar8 = uVar8 + 1;
        *(uint *)(iVar2 + 0x54) = (uint)(*(int *)(iVar2 + 0x54) != 0);
      } while (uVar8 < local_24);
    }
    local_8 = local_8 + local_20;
    puVar9 = *(undefined4 **)((int)this + 0x18);
    puVar11 = (undefined4 *)(*(int *)((int)this + 0x14) + local_18 * 4);
    for (uVar8 = local_24; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_18 = local_18 + local_24;
    local_14 = uVar4;
    local_10 = uVar5;
    FUN_00bb7baf(*(undefined4 **)((int)this + 0x14),&local_18);
    uVar4 = local_c;
    do {
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                      *(int *)(*(int *)((int)this + 0x3c) + uVar4 * 4) * 4);
      uVar5 = 0;
      if (*(int *)(iVar2 + 0x14) != 0) {
        do {
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                    *(int *)(*(int *)(iVar2 + 0x18) + iVar1) * 4) + 0x24) =
               *(undefined4 *)((int)this + 0x48);
        } while (uVar5 < *(uint *)(iVar2 + 0x14));
      }
      uVar5 = 0;
      if (*(int *)(iVar2 + 0x1c) != 0) {
        do {
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) +
                    *(int *)(*(int *)(iVar2 + 0x20) + iVar1) * 4) + 0x24) =
               *(undefined4 *)((int)this + 0x48);
        } while (uVar5 < *(uint *)(iVar2 + 0x1c));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_1);
  } while( true );
  FUN_00bb7b04(this,local_14,local_10);
  FUN_00bb7b04(this_00,local_c,param_1);
  FUN_00bb7b04(this_01,uVar4,uVar5);
  FUN_00bb7bf5(this_02,(int *)&local_40,&local_54);
  if (((local_40 < *(uint *)((int)this + 0x50)) && (local_54 <= *(uint *)((int)this + 0x4c))) ||
     ((local_40 <= *(uint *)((int)this + 0x50) && (local_54 < *(uint *)((int)this + 0x4c))))) {
    return 0;
  }
  if (local_8 < 0) {
    iVar2 = local_c - param_1;
  }
  else {
    iVar2 = param_1 - local_c;
  }
  local_14 = local_14 + iVar2;
  local_10 = local_10 + iVar2;
  local_44 = 1;
  goto LAB_00bb7d84;
}


//// FUNCTION FUN_00bb81a4 @ 00bb81a4 ////

int __fastcall FUN_00bb81a4(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00bb7bf5(param_1,(int *)((int)param_1 + 0x50),(uint *)((int)param_1 + 0x4c));
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x38) != 0) {
    do {
      *(uint *)(*(int *)((int)param_1 + 0x30) + uVar1 * 4) = uVar1;
      *(undefined4 *)(*(int *)((int)param_1 + 0x40) + uVar1 * 4) =
           *(undefined4 *)(*(int *)((int)param_1 + 0x3c) + uVar1 * 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_1 + 0x38));
  }
  FUN_00b6c999(FUN_00bb7b4e,*(undefined4 **)((int)param_1 + 0x30),*(uint *)((int)param_1 + 0x38),
               param_1);
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x38) != 0) {
    do {
      iVar2 = FUN_00bb7d12(param_1,*(uint *)(*(int *)((int)param_1 + 0x30) + uVar1 * 4));
      if (iVar2 < 0) {
        return iVar2;
      }
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_1 + 0x38));
  }
  return 1;
}


//// FUNCTION FUN_00bb8211 @ 00bb8211 ////

void __thiscall FUN_00bb8211(void *this,int param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint local_c;
  uint local_8;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)*(void **)((int)this + 4) + 0xc);
  FUN_00b709f2(*(void **)((int)this + 4));
  pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
  *(void **)((int)this + 8) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
    *(void **)((int)this + 0x1c) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      puVar9 = *(undefined4 **)((int)this + 8);
      for (uVar5 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar9 = *(undefined4 **)((int)this + 0x1c);
      for (uVar5 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      local_8 = 0;
      if (*(int *)((int)this + 0x38) != 0) {
        do {
          iVar6 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) + local_8 * 4);
          if ((*(ushort *)(iVar6 + 2) & 0xfff0) != 0) {
            local_c = 0;
            if (*(int *)(iVar6 + 0xc) != 0) {
              do {
                FUN_00bb7a35(this,local_8,*(int *)(*(int *)(iVar6 + 0x10) + local_c * 4));
                local_c = local_c + 1;
              } while (local_c < *(uint *)(iVar6 + 0xc));
            }
            local_c = 0;
            if (*(int *)(iVar6 + 4) != 0) {
              do {
                FUN_00bb79c0(this,local_8,*(int *)(*(int *)(iVar6 + 8) + local_c * 4));
                local_c = local_c + 1;
              } while (local_c < *(uint *)(iVar6 + 4));
            }
          }
          local_8 = local_8 + 1;
        } while (local_8 < *(uint *)((int)this + 0x38));
      }
      pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
      *(void **)((int)this + 0xc) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
        *(void **)((int)this + 0x20) = pvVar2;
        if (pvVar2 != (void *)0x0) {
          iVar6 = 0;
          iVar8 = 0;
          uVar5 = 0;
          if (*(int *)((int)this + 0x38) != 0) {
            do {
              iVar3 = uVar5 * 4;
              *(int *)(iVar3 + *(int *)((int)this + 0xc)) = iVar6;
              iVar6 = iVar6 + *(int *)(iVar3 + *(int *)((int)this + 8));
              *(int *)(iVar3 + *(int *)((int)this + 0x20)) = iVar8;
              iVar8 = iVar8 + *(int *)(iVar3 + *(int *)((int)this + 0x1c));
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)((int)this + 0x38));
          }
          uVar7 = 0;
          uVar5 = iVar6 << 2;
          pvVar2 = operator_new(uVar5);
          *(void **)((int)this + 0x10) = pvVar2;
          if (pvVar2 != (void *)0x0) {
            pvVar2 = operator_new(uVar5);
            *(void **)((int)this + 0x14) = pvVar2;
            if (pvVar2 != (void *)0x0) {
              pvVar2 = operator_new(uVar5);
              *(void **)((int)this + 0x18) = pvVar2;
              if (pvVar2 != (void *)0x0) {
                pvVar2 = operator_new(iVar8 << 2);
                *(void **)((int)this + 0x24) = pvVar2;
                if (pvVar2 != (void *)0x0) {
                  puVar9 = *(undefined4 **)((int)this + 8);
                  for (uVar5 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar5 != 0;
                      uVar5 = uVar5 - 1) {
                    *puVar9 = 0;
                    puVar9 = puVar9 + 1;
                  }
                  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *(undefined1 *)puVar9 = 0;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                  }
                  puVar9 = *(undefined4 **)((int)this + 0x1c);
                  for (uVar5 = *(uint *)((int)this + 0x38) & 0x3fffffff; uVar5 != 0;
                      uVar5 = uVar5 - 1) {
                    *puVar9 = 0;
                    puVar9 = puVar9 + 1;
                  }
                  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *(undefined1 *)puVar9 = 0;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                  }
                  local_8 = 0;
                  if (*(int *)((int)this + 0x38) != 0) {
                    do {
                      iVar6 = *(int *)(*(int *)(*(int *)((int)this + 4) + 0x18) + local_8 * 4);
                      if ((*(ushort *)(iVar6 + 2) & 0xfff0) != 0) {
                        local_c = 0;
                        if (*(int *)(iVar6 + 4) != 0) {
                          do {
                            FUN_00bb79c0(this,local_8,*(int *)(*(int *)(iVar6 + 8) + local_c * 4));
                            local_c = local_c + 1;
                          } while (local_c < *(uint *)(iVar6 + 4));
                        }
                        local_c = 0;
                        if (*(int *)(iVar6 + 0xc) != 0) {
                          do {
                            FUN_00bb7a35(this,local_8,*(int *)(*(int *)(iVar6 + 0x10) + local_c * 4)
                                        );
                            local_c = local_c + 1;
                          } while (local_c < *(uint *)(iVar6 + 0xc));
                        }
                      }
                      local_8 = local_8 + 1;
                    } while (local_8 < *(uint *)((int)this + 0x38));
                  }
                  local_c = 0;
                  if (*(int *)((int)this + 0x38) != 0) {
                    do {
                      iVar6 = local_c * 4;
                      FUN_00bb7baf((undefined4 *)
                                   (*(int *)((int)this + 0x10) +
                                   *(int *)(iVar6 + *(int *)((int)this + 0xc)) * 4),
                                   (uint *)(*(int *)((int)this + 8) + iVar6));
                      FUN_00bb7baf((undefined4 *)
                                   (*(int *)((int)this + 0x24) +
                                   *(int *)(iVar6 + *(int *)((int)this + 0x20)) * 4),
                                   (uint *)(*(int *)((int)this + 0x1c) + iVar6));
                      local_c = local_c + 1;
                    } while (local_c < *(uint *)((int)this + 0x38));
                  }
                  pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
                  *(void **)((int)this + 0x3c) = pvVar2;
                  if (pvVar2 != (void *)0x0) {
                    pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
                    *(void **)((int)this + 0x40) = pvVar2;
                    if (pvVar2 != (void *)0x0) {
                      pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
                      *(void **)((int)this + 0x44) = pvVar2;
                      if (pvVar2 != (void *)0x0) {
                        pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
                        *(void **)((int)this + 0x34) = pvVar2;
                        if (pvVar2 != (void *)0x0) {
                          if (*(int *)((int)this + 0x38) != 0) {
                            do {
                              iVar6 = uVar7 * 4;
                              puVar1 = *(uint **)(iVar6 + *(int *)(*(int *)((int)this + 4) + 0x18));
                              *(uint *)(iVar6 + *(int *)((int)this + 0x3c)) = uVar7;
                              *(uint **)(iVar6 + *(int *)((int)this + 0x44)) = puVar1;
                              puVar1[9] = 0xffffffff;
                              if ((*puVar1 & 0xfff00000) == 0) {
LAB_00bb8561:
                                uVar4 = 1;
                              }
                              else {
                                iVar8 = FUN_00b6b67d(puVar1);
                                uVar4 = 0;
                                if (iVar8 != 0) goto LAB_00bb8561;
                              }
                              uVar7 = uVar7 + 1;
                              *(undefined4 *)(iVar6 + *(int *)((int)this + 0x34)) = uVar4;
                            } while (uVar7 < *(uint *)((int)this + 0x38));
                          }
                          *(undefined4 *)((int)this + 0x48) = 0;
                          pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
                          *(void **)((int)this + 0x28) = pvVar2;
                          if (pvVar2 != (void *)0x0) {
                            pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
                            *(void **)((int)this + 0x2c) = pvVar2;
                            if (pvVar2 != (void *)0x0) {
                              pvVar2 = operator_new(*(int *)((int)this + 0x38) << 2);
                              *(void **)((int)this + 0x30) = pvVar2;
                              if ((pvVar2 != (void *)0x0) && (param_1 != 0)) {
                                do {
                                  iVar6 = FUN_00bb81a4(this);
                                  if (iVar6 < 0) {
                                    return;
                                  }
                                } while (iVar6 != 1);
                                uVar5 = 0;
                                if (*(int *)((int)this + 0x38) != 0) {
                                  do {
                                    *(undefined4 *)
                                     (*(int *)(*(int *)((int)this + 4) + 0x18) + uVar5 * 4) =
                                         *(undefined4 *)
                                          (*(int *)((int)this + 0x44) +
                                          *(int *)(*(int *)((int)this + 0x3c) + uVar5 * 4) * 4);
                                    uVar5 = uVar5 + 1;
                                  } while (uVar5 < *(uint *)((int)this + 0x38));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 8));
}


//// FUNCTION zlib_inflate_fast @ 00bb867a ////

undefined4 zlib_inflate_fast(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;
  
  piVar3 = param_6;
  local_10 = *(byte **)(param_5 + 0x34);
  uVar9 = *(uint *)(param_5 + 0x1c);
  local_c = (byte *)*param_6;
  local_8 = param_6[1];
  param_6 = *(int **)(param_5 + 0x20);
  if (local_10 < *(byte **)(param_5 + 0x30)) {
    local_14 = *(byte **)(param_5 + 0x30) + (-1 - (int)local_10);
  }
  else {
    local_14 = (byte *)(*(int *)(param_5 + 0x2c) - (int)local_10);
  }
  uVar8 = *(uint *)(&DAT_00ea4ee0 + param_1 * 4);
  uVar6 = *(uint *)(&DAT_00ea4ee0 + param_2 * 4);
  do {
    for (; uVar9 < 0x14; uVar9 = uVar9 + 8) {
      local_8 = local_8 - 1;
      param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar9 & 0x1f));
      local_c = local_c + 1;
    }
    pbVar12 = (byte *)(param_3 + (uVar8 & (uint)param_6) * 8);
    bVar1 = *pbVar12;
LAB_00bb8725:
    uVar7 = (uint)bVar1;
    if (uVar7 != 0) {
      param_6 = (int *)((uint)param_6 >> (pbVar12[1] & 0x1f));
      uVar9 = uVar9 - pbVar12[1];
      if ((bVar1 & 0x10) != 0) {
        uVar7 = uVar7 & 0xf;
        uVar10 = *(uint *)(&DAT_00ea4ee0 + uVar7 * 4) & (uint)param_6;
        param_6 = (int *)((uint)param_6 >> (sbyte)uVar7);
        uVar10 = uVar10 + *(int *)(pbVar12 + 4);
        for (uVar9 = uVar9 - uVar7; uVar9 < 0xf; uVar9 = uVar9 + 8) {
          local_8 = local_8 - 1;
          param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar9 & 0x1f));
          local_c = local_c + 1;
        }
        pbVar12 = (byte *)(param_4 + (uVar6 & (uint)param_6) * 8);
        param_6 = (int *)((uint)param_6 >> (pbVar12[1] & 0x1f));
        uVar9 = uVar9 - pbVar12[1];
        while( true ) {
          bVar1 = *pbVar12;
          if ((bVar1 & 0x10) != 0) {
            uVar7 = bVar1 & 0xf;
            for (; uVar9 < uVar7; uVar9 = uVar9 + 8) {
              local_8 = local_8 - 1;
              param_6 = (int *)((uint)param_6 | (uint)*local_c << ((byte)uVar9 & 0x1f));
              local_c = local_c + 1;
            }
            uVar11 = *(uint *)(&DAT_00ea4ee0 + uVar7 * 4) & (uint)param_6;
            param_6 = (int *)((uint)param_6 >> (sbyte)uVar7);
            local_14 = local_14 + -uVar10;
            uVar9 = uVar9 - uVar7;
            pbVar4 = local_10 + -(uVar11 + *(int *)(pbVar12 + 4));
            pbVar12 = *(byte **)(param_5 + 0x28);
            if (pbVar4 < pbVar12) {
              do {
                pbVar4 = pbVar4 + (*(int *)(param_5 + 0x2c) - (int)pbVar12);
              } while (pbVar4 < pbVar12);
              uVar7 = *(int *)(param_5 + 0x2c) - (int)pbVar4;
              if (uVar7 < uVar10) {
                param_1 = uVar10 - uVar7;
                do {
                  *local_10 = *pbVar4;
                  local_10 = local_10 + 1;
                  pbVar4 = pbVar4 + 1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
                pbVar12 = *(byte **)(param_5 + 0x28);
                do {
                  *local_10 = *pbVar12;
                  local_10 = local_10 + 1;
                  pbVar12 = pbVar12 + 1;
                  param_1 = param_1 + -1;
                } while (param_1 != 0);
              }
              else {
                *local_10 = *pbVar4;
                local_10[1] = pbVar4[1];
                local_10 = local_10 + 2;
                pbVar4 = pbVar4 + 2;
                param_1 = uVar10 - 2;
                do {
                  *local_10 = *pbVar4;
                  local_10 = local_10 + 1;
                  pbVar4 = pbVar4 + 1;
                  param_1 = param_1 + -1;
                } while (param_1 != 0);
              }
            }
            else {
              *local_10 = *pbVar4;
              local_10[1] = pbVar4[1];
              local_10 = local_10 + 2;
              pbVar4 = pbVar4 + 2;
              param_1 = uVar10 - 2;
              do {
                *local_10 = *pbVar4;
                local_10 = local_10 + 1;
                pbVar4 = pbVar4 + 1;
                param_1 = param_1 + -1;
              } while (param_1 != 0);
            }
            goto LAB_00bb8895;
          }
          if ((bVar1 & 0x40) != 0) break;
          pbVar12 = pbVar12 + ((*(uint *)(&DAT_00ea4ee0 + (uint)bVar1 * 4) & (uint)param_6) +
                              *(int *)(pbVar12 + 4)) * 8;
          param_6 = (int *)((uint)param_6 >> (pbVar12[1] & 0x1f));
          uVar9 = uVar9 - pbVar12[1];
        }
        piVar3[6] = (int)"invalid distance code";
        uVar8 = piVar3[1] - local_8;
        if (uVar9 >> 3 < piVar3[1] - local_8) {
          uVar8 = uVar9 >> 3;
        }
LAB_00bb8905:
        uVar5 = 0xfffffffd;
        goto LAB_00bb8908;
      }
      if ((bVar1 & 0x40) == 0) break;
      uVar6 = uVar9 >> 3;
      if ((bVar1 & 0x20) == 0) {
        uVar8 = piVar3[1] - local_8;
        piVar3[6] = (int)"invalid literal/length code";
        if (uVar6 < uVar8) {
          uVar8 = uVar6;
        }
        goto LAB_00bb8905;
      }
      uVar8 = piVar3[1] - local_8;
      if (uVar6 < uVar8) {
        uVar8 = uVar6;
      }
      uVar5 = 1;
      goto LAB_00bb8908;
    }
    param_6 = (int *)((uint)param_6 >> (pbVar12[1] & 0x1f));
    uVar9 = uVar9 - pbVar12[1];
    local_14 = local_14 + -1;
    *local_10 = pbVar12[4];
    local_10 = local_10 + 1;
LAB_00bb8895:
    if ((local_14 < (byte *)0x102) || (local_8 < 10)) {
      uVar8 = piVar3[1] - local_8;
      if (uVar9 >> 3 < piVar3[1] - local_8) {
        uVar8 = uVar9 >> 3;
      }
      uVar5 = 0;
LAB_00bb8908:
      *(int **)(param_5 + 0x20) = param_6;
      *(uint *)(param_5 + 0x1c) = uVar9 + uVar8 * -8;
      piVar3[1] = uVar8 + local_8;
      iVar2 = *piVar3;
      *piVar3 = (int)local_c - uVar8;
      piVar3[2] = piVar3[2] + (((int)local_c - uVar8) - iVar2);
      *(byte **)(param_5 + 0x34) = local_10;
      return uVar5;
    }
  } while( true );
  pbVar12 = pbVar12 + ((*(uint *)(&DAT_00ea4ee0 + uVar7 * 4) & (uint)param_6) +
                      *(int *)(pbVar12 + 4)) * 8;
  bVar1 = *pbVar12;
  goto LAB_00bb8725;
}


//// FUNCTION FUN_00bb8950 @ 00bb8950 ////

void __thiscall FUN_00bb8950(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_00d9d99c;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00bb89e0 @ 00bb89e0 ////

void __thiscall FUN_00bb89e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined ***)this = &PTR_FUN_00d9d99c;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  return;
}


//// FUNCTION FUN_00bb8a10 @ 00bb8a10 ////

void __fastcall FUN_00bb8a10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9d99c;
  return;
}


//// FUNCTION FUN_00bb8a20 @ 00bb8a20 ////

undefined4 * __thiscall FUN_00bb8a20(void *this,byte param_1)

{
  FUN_00bb8a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bb8a60 @ 00bb8a60 ////

undefined1 FUN_00bb8a60(void *param_1)

{
  FUN_00bbfaa0(param_1,"RND");
  return 1;
}


//// FUNCTION CSystem_MaybeGetBuildTag @ 00bb8a80 ////

undefined1 CSystem_MaybeGetBuildTag(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdcd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb8a60(local_18);
  local_4 = 0xffffffff;
  SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bb8af0 @ 00bb8af0 ////

undefined4 * __fastcall FUN_00bb8af0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_11;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdced;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x68);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = iVar1 + 1;
    puVar2 = Ctor_vt00d9e390_00bc0690(local_10,param_1,iVar1);
  }
  local_4 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    LH_Assert(&local_11,"customBank != NULL\n");
    DebugBreak();
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00bb8b80 @ 00bb8b80 ////

undefined4 * __thiscall FUN_00bb8b80(void *this,undefined4 param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd02;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0xb0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x98);
    *(int *)((int)this + 0x98) = iVar1 + 1;
    puVar2 = Ctor_vt00d9e430_00bc0d70(this_00,(int)this,iVar1,param_1);
  }
  local_4 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    LH_Assert(&param_1,"packedBank != NULL\n");
    DebugBreak();
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00bb8c10 @ 00bb8c10 ////

undefined4 * __thiscall FUN_00bb8c10(void *this,undefined4 param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd17;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0xac);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)((int)this + 0x98);
    *(int *)((int)this + 0x98) = iVar1 + 1;
    puVar2 = Ctor_vt00d9e4c4_00bc11b0(this_00,(int)this,iVar1,param_1);
  }
  local_4 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    LH_Assert(&param_1,"packedBank != NULL\n");
    DebugBreak();
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION CSystem_SetBuildInfo @ 00bb8ca0 ////

void CSystem_SetBuildInfo(undefined4 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc1600(param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb8d40 @ 00bb8d40 ////

void __fastcall FUN_00bb8d40(int param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc9b10(*(int *)(param_1 + 0x44));
  FUN_00bc6aa0(*(int **)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00bc1e80(*(int *)(param_1 + 0x78));
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x14))();
  if (cVar1 == '\0') {
    uVar2 = FUN_00acd42c();
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + (int)uVar2;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bb8de0 @ 00bb8de0 ////

void __fastcall FUN_00bb8de0(int param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd4d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 0x48))(1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bb8e50 @ 00bb8e50 ////

void __fastcall FUN_00bb8e50(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd5f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_00bb8d40(param_1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb8ec0 @ 00bb8ec0 ////

void __fastcall FUN_00bb8ec0(int param_1)

{
  DWORD DVar1;
  ulonglong uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_00bcad50(*(int *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return;
  }
  DVar1 = GetTickCount();
  if (*(uint *)(param_1 + 0x8c) < DVar1) {
    FUN_00bb8d40(param_1);
    uVar2 = FUN_00acd42c();
    *(DWORD *)(param_1 + 0x8c) = DVar1 - (int)uVar2;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb8f80 @ 00bb8f80 ////

void __thiscall FUN_00bb8f80(void *this,int *param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(void **)((int)this + 0x78) != (void *)0x0) {
    FUN_00bc1d00(*(void **)((int)this + 0x78),(int)param_1);
  }
  FUN_00bc3a00(*(void **)((int)this + 0x48),(int)param_1);
  FUN_00bcbf30((void *)((int)this + 0x4c),param_1);
  FUN_00bcbdd0((void *)((int)this + 0x4c),param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x10))(1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bb9020 @ 00bb9020 ////

void __fastcall FUN_00bb9020(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdd95;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_00bca6b0(*(int *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00bc2b10(*(int *)(param_1 + 0x48));
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb9090 @ 00bb9090 ////

void __fastcall FUN_00bb9090(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cfdda7;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  do {
    bVar1 = true;
    FUN_00bc1470(local_20,(LPCRITICAL_SECTION)&DAT_010ced2c);
    local_c = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      cVar2 = FUN_00bca710(*(int *)(param_1 + 0x74));
      if (cVar2 == '\0') {
        bVar1 = false;
      }
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      cVar2 = FUN_00bc3e80(*(int *)(param_1 + 0x48));
      if (cVar2 == '\0') {
        bVar1 = false;
      }
    }
    local_c = 0xffffffff;
    PKCProtectionInstance_Leave(local_20);
    Sleep(100);
  } while (!bVar1);
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00bb9130 @ 00bb9130 ////

void __fastcall FUN_00bb9130(int param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfddb9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00bc2b40(*(int *)(param_1 + 0x48));
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bb9190 @ 00bb9190 ////

void __fastcall FUN_00bb9190(int param_1)

{
  char cVar1;
  undefined4 local_20 [3];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cfddcb;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00bc1470(local_20,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_c = 0;
  cVar1 = FUN_00bc2b50(*(int *)(param_1 + 0x48));
  while (cVar1 == '\0') {
    local_c = 0xffffffff;
    PKCProtectionInstance_Leave(local_20);
    FUN_00bc1470(local_20,(LPCRITICAL_SECTION)&DAT_010ced2c);
    local_c = 0;
    cVar1 = FUN_00bc2b50(*(int *)(param_1 + 0x48));
  }
  local_c = 0xffffffff;
  PKCProtectionInstance_Leave(local_20);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00bb9240 @ 00bb9240 ////

void __fastcall FUN_00bb9240(int param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdde8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int *)(param_1 + 0x78) == 0) {
    this = operator_new(0x2c);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = Ctor_vt00d9e678_00bc1fc0(this,param_1);
    }
    *(undefined4 **)(param_1 + 0x78) = puVar1;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb92c0 @ 00bb92c0 ////

void __thiscall FUN_00bb92c0(void *this,undefined4 *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfde05;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int *)((int)this + 0x74) == 0) {
    this_00 = operator_new(0x6c);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (this_00 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = Ctor_vt00d9edb8_00bcb3b0(this_00,this,param_1);
    }
    *(undefined4 **)((int)this + 0x74) = puVar1;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb9350 @ 00bb9350 ////

uint FUN_00bb9350(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  char cVar1;
  undefined3 extraout_var;
  
  if (param_5 == 1) {
    cVar1 = FUN_00bce6b0(param_1,param_2,param_3,param_4);
    param_5 = CONCAT31(extraout_var,cVar1);
  }
  else {
    if (param_5 != 0) goto LAB_00bb9374;
    param_5 = FUN_00bce4b0(param_1,param_2,param_3,0x3f800000,param_4,0);
    cVar1 = (char)param_5;
  }
  if (cVar1 != '\0') {
    return CONCAT31((int3)((uint)param_5 >> 8),1);
  }
LAB_00bb9374:
  return param_5 & 0xffffff00;
}


//// FUNCTION FUN_00bb93b0 @ 00bb93b0 ////

void FUN_00bb93b0(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  FUN_00bce660(param_1,param_2,param_3,param_4,param_5);
  return;
}


//// FUNCTION LH_FormatVersionString @ 00bb93e0 ////

void * __fastcall LH_FormatVersionString(void *param_1,undefined4 *param_2)

{
  LH_PrintResourceID(param_1,*param_2);
  LH_LogErrorMessage(param_1,".");
  LH_PrintResourceID(param_1,param_2[1]);
  LH_LogErrorMessage(param_1,".");
  LH_PrintResourceID(param_1,param_2[2]);
  LH_LogErrorMessage(param_1,".");
  LH_PrintResourceID(param_1,param_2[3]);
  LH_LogErrorMessage(param_1,".");
  LH_PrintResourceID(param_1,param_2[4]);
  return param_1;
}


//// FUNCTION LH_FormatVersionString @ 00bb9450 ////

void * __fastcall LH_FormatVersionString(void *param_1,undefined4 *param_2)

{
  LH_PrintResourceID(param_1,*param_2);
  LH_LogErrorMessage(param_1,".");
  LH_PrintResourceID(param_1,param_2[1]);
  LH_LogErrorMessage(param_1,".");
  LH_PrintResourceID(param_1,param_2[2]);
  LH_LogErrorMessage(param_1,".");
  LH_PrintResourceID(param_1,param_2[3]);
  LH_LogErrorMessage(param_1,".");
  LH_PrintResourceID(param_1,param_2[4]);
  return param_1;
}


//// FUNCTION FUN_00bb94d0 @ 00bb94d0 ////

undefined4 __fastcall FUN_00bb94d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}


//// FUNCTION CSystem_UnimplementedHandler @ 00bb9510 ////

undefined4 CSystem_UnimplementedHandler(void)

{
  return 0;
}


//// FUNCTION FUN_00bb9530 @ 00bb9530 ////

void __fastcall FUN_00bb9530(undefined4 *param_1)

{
  param_1[1] = 4;
  param_1[4] = 4;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = 6;
  param_1[2] = 8;
  param_1[3] = 9;
  param_1[5] = 0x10;
  param_1[6] = 0x100;
  param_1[7] = 0x1000000;
  param_1[9] = 0x41200000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x41f00000;
  param_1[0xd] = 0x42c80000;
  param_1[0xe] = 0x42c80000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0x50;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 1;
  return;
}


//// FUNCTION FUN_00bb95b0 @ 00bb95b0 ////

undefined4 FUN_00bb95b0(void *param_1)

{
  void *pvVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00bbfaa0(param_1,"");
  local_14 = 6;
  local_10 = 6;
  local_c = 6;
  local_8 = 7;
  local_4 = 4;
  pvVar1 = LH_FormatVersionString(param_1,&local_14);
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_00bb9600 @ 00bb9600 ////

undefined4 FUN_00bb9600(void *param_1)

{
  void *pvVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00bbfaa0(param_1,"");
  local_14 = 6;
  local_10 = 4;
  local_c = 8;
  local_8 = 9;
  local_4 = 4;
  pvVar1 = LH_FormatVersionString(param_1,&local_14);
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION CSystem_GetEngineVersion @ 00bb9650 ////

uint CSystem_GetEngineVersion(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfde17;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb95b0(local_18);
  local_4 = 0xffffffff;
  uVar2 = SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}


//// FUNCTION CSystem_GetContentVersion @ 00bb96c0 ////

uint CSystem_GetContentVersion(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfde29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb9600(local_18);
  local_4 = 0xffffffff;
  uVar2 = SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar1);
}


//// FUNCTION FUN_00bb9730 @ 00bb9730 ////

uint FUN_00bb9730(int *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *unaff_EDI;
  int iVar5;
  undefined1 local_98 [8];
  undefined **local_90;
  undefined1 local_8c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfde49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std__String__Constructor(local_98,0xea4f34);
  local_4 = 0;
  FUN_00bbfaa0(param_1,"");
  local_90 = &PTR_LAB_00d9dcd4;
  local_8c = 0;
  local_d = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  LH_LogErrorMessage(&local_90,"<");
  FUN_00bbf750(&local_90,unaff_EDI);
  LH_LogErrorMessage(&local_90,">");
  iVar5 = 0;
  pcVar1 = (char *)FUN_00bbf3a0((int *)&local_90);
  uVar2 = FUN_00bbf610(local_98,pcVar1,iVar5);
  if (-1 < (int)uVar2) {
    iVar3 = PKString_GetLength((int *)&local_90);
    iVar3 = uVar2 + iVar3;
    FUN_00bbfaa0(&local_90,"");
    LH_LogErrorMessage(&local_90,"</");
    FUN_00bbf750(&local_90,unaff_EDI);
    LH_LogErrorMessage(&local_90,">");
    iVar5 = iVar3;
    pcVar1 = (char *)FUN_00bbf3a0((int *)&local_90);
    uVar2 = FUN_00bbf610(local_98,pcVar1,iVar5);
    if (-1 < (int)uVar2) {
      piVar4 = FUN_00bbfb80(local_98,iVar3,uVar2 - iVar3,param_1);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)piVar4 >> 8),1);
    }
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00bb9860 @ 00bb9860 ////

void FUN_00bb9860(int *param_1)

{
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfde5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std__String__Constructor(local_14,0xd9ddd8);
  local_4 = 0;
  FUN_00bb9730(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb98b0 @ 00bb98b0 ////

void FUN_00bb98b0(int *param_1)

{
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfde6d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std__String__Constructor(local_14,0xd9dde0);
  local_4 = 0;
  FUN_00bb9730(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb9900 @ 00bb9900 ////

void FUN_00bb9900(int *param_1)

{
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfde7f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std__String__Constructor(local_14,0xd9dde8);
  local_4 = 0;
  FUN_00bb9730(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb9950 @ 00bb9950 ////

void FUN_00bb9950(int *param_1)

{
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfde91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std__String__Constructor(local_14,0xd9ddf0);
  local_4 = 0;
  FUN_00bb9730(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb99a0 @ 00bb99a0 ////

void FUN_00bb99a0(int *param_1)

{
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdea3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std__String__Constructor(local_14,0xd9ddf8);
  local_4 = 0;
  FUN_00bb9730(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb99f0 @ 00bb99f0 ////

void FUN_00bb99f0(int *param_1)

{
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdeb5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std__String__Constructor(local_14,0xd9de04);
  local_4 = 0;
  FUN_00bb9730(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CSystem_GetBuildMachine @ 00bb9a40 ////

undefined1 CSystem_GetBuildMachine(int param_1,int param_2)

{
  undefined1 uVar1;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdec7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb9860(local_18);
  local_4 = 0xffffffff;
  SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION CSystem_GetBuildDate @ 00bb9ab0 ////

undefined1 CSystem_GetBuildDate(int param_1,int param_2)

{
  undefined1 uVar1;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfded9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb98b0(local_18);
  local_4 = 0xffffffff;
  SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION CSystem_GetBuildTime @ 00bb9b20 ////

undefined1 CSystem_GetBuildTime(int param_1,int param_2)

{
  undefined1 uVar1;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdeeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb9900(local_18);
  local_4 = 0xffffffff;
  SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION CSystem_GetBuildP4User @ 00bb9b90 ////

undefined1 CSystem_GetBuildP4User(int param_1,int param_2)

{
  undefined1 uVar1;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdefd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb9950(local_18);
  local_4 = 0xffffffff;
  SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION CSystem_GetBuildP4Server @ 00bb9c00 ////

undefined1 CSystem_GetBuildP4Server(int param_1,int param_2)

{
  undefined1 uVar1;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdf0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb99a0(local_18);
  local_4 = 0xffffffff;
  SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION CSystem_GetBuildP4Location @ 00bb9c70 ////

undefined1 CSystem_GetBuildP4Location(int param_1,int param_2)

{
  undefined1 uVar1;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdf21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9e214_00bc0130(local_18,param_1,param_2);
  local_4 = 0;
  uVar1 = FUN_00bb99f0(local_18);
  local_4 = 0xffffffff;
  SetVtable_00d9d9b4_00bc00d0(local_18);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bb9ce0 @ 00bb9ce0 ////

void __thiscall FUN_00bb9ce0(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_00d9de10;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  return;
}


//// FUNCTION FUN_00bb9d00 @ 00bb9d00 ////

void __fastcall FUN_00bb9d00(void *param_1)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdf33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)param_1 + 0x30));
  while (piVar1 != (int *)0x0) {
    FUN_00bb8f80(param_1,piVar1);
    piVar1 = (int *)RedBlackTree_GetMinObject((undefined4 *)((int)param_1 + 0x30));
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bb9d80 @ 00bb9d80 ////

void __fastcall FUN_00bb9d80(void *param_1)

{
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdf45;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (*(int **)((int)param_1 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x80) + 0x28))(1);
    *(undefined4 *)((int)param_1 + 0x80) = 0;
  }
  FUN_00bb9d00(param_1);
  FUN_00bb8de0((int)param_1);
  if (*(int **)((int)param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x74) + 0x44))(1);
    *(undefined4 *)((int)param_1 + 0x74) = 0;
  }
  if (*(int **)((int)param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x7c) + 0x2c))(1);
    *(undefined4 *)((int)param_1 + 0x7c) = 0;
  }
  if (*(int **)((int)param_1 + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x48) + 0xd4))(1);
    *(undefined4 *)((int)param_1 + 0x48) = 0;
  }
  if (*(int **)((int)param_1 + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x44) + 0x2c))(1);
    *(undefined4 *)((int)param_1 + 0x44) = 0;
  }
  if (*(int **)((int)param_1 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x70) + 8))(1);
    *(undefined4 *)((int)param_1 + 0x70) = 0;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bb9e50 @ 00bb9e50 ////

uint __thiscall FUN_00bb9e50(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined **local_28 [2];
  undefined4 local_20 [2];
  undefined **local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdf67;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_20,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bb9ce0(local_18,param_2);
  local_4._0_1_ = 1;
  piVar1 = (int *)std__String__Constructor(local_28,param_1);
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar2 = FUN_00bd2170(*(int **)((int)this + 0x70),piVar1);
  local_28[0] = &PTR_LAB_00d9d9b4;
  local_18[0] = &PTR_LAB_00d9d9ac;
  local_4 = 0xffffffff;
  uVar3 = PKCProtectionInstance_Leave(local_20);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar2);
}


//// FUNCTION CSystem_GetOrLoadResource @ 00bb9f00 ////

int __thiscall CSystem_GetOrLoadResource(void *this,int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  LPCSTR pCVar4;
  int iVar5;
  int *local_144;
  undefined1 local_13d;
  undefined4 local_13c [2];
  undefined **local_134 [2];
  undefined **local_12c;
  undefined1 local_128;
  undefined1 local_11f;
  int *local_11c;
  int local_118;
  undefined1 local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdfb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_13c,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = std__String__Constructor(local_134,param_1);
  local_4._0_1_ = 1;
  iVar2 = RedBlackTree_Find((void *)((int)this + 0x3c),(void *)((int)this + 0x38),uVar1,uVar1);
  local_4._0_1_ = 0;
  if (iVar2 == 0) {
    uVar1 = std__String__Constructor(local_134,param_1);
    local_4._0_1_ = 2;
    piVar3 = FUN_00bb8b80(this,uVar1);
    local_4._0_1_ = 4;
    local_134[0] = &PTR_LAB_00d9d9b4;
    local_144 = piVar3;
    if (piVar3 == (int *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4._0_1_ = 5;
      LH_LogErrorMessage(&local_110,".\\CSystem.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x144);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_13d,pCVar4);
      local_4._0_1_ = 4;
      local_110 = &PTR_LAB_00d9d9b4;
      DebugBreak();
    }
    local_118 = (int)this + 0x4c;
    local_11c = piVar3 + 3;
    local_114 = *param_2;
    FUN_00bbc6c0((int *)&local_144);
    uVar1 = LH_TryLoadBank(*(int **)((int)this + 0x70));
    if ((char)uVar1 == '\0') {
      local_4 = (uint)local_4._1_3_ << 8;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x10))(1);
      }
      local_4 = 0xffffffff;
      PKCProtectionInstance_Leave(local_13c);
      iVar2 = 0;
    }
    else {
      local_12c = &PTR_LAB_00d9dd5c;
      local_128 = 0;
      local_11f = 0;
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_00bbfb30(piVar3 + 0x20,4,(int *)&local_12c);
      iVar2 = FUN_00bbf6e0(&local_12c,".lug");
      if (iVar2 == 0) {
        iVar2 = *piVar3;
        iVar5 = FUN_00bbf3a0(piVar3 + 0x20);
        (**(code **)(iVar2 + 0xc))(iVar5);
      }
      iVar2 = FUN_00bbc790((int *)&local_144);
      local_12c = &PTR_LAB_00d9d9b4;
      local_4 = local_4 & 0xffffff00;
      if (local_144 != (int *)0x0) {
        (**(code **)(*local_144 + 0x10))(1);
      }
      local_4 = 0xffffffff;
      PKCProtectionInstance_Leave(local_13c);
    }
  }
  else {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_13c);
    iVar2 = 0;
  }
  ExceptionList = local_c;
  return iVar2;
}


//// FUNCTION FUN_00bba160 @ 00bba160 ////

undefined4 __fastcall FUN_00bba160(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x10));
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    cVar1 = (**(code **)(**(int **)(iVar2 + 0x14) + 8))();
    if (cVar1 != '\0') break;
    iVar2 = RedBlackTree_GetSuccessor((void *)(param_1 + 0x10),(int *)(param_1 + 0xc),iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x14);
}


//// FUNCTION FUN_00bba1a0 @ 00bba1a0 ////

undefined4 __thiscall FUN_00bba1a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdfc5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00bbf530(param_1,'.');
  if (-1 < iVar1) {
    iVar2 = FUN_00bbf3a0(param_1);
    std__String__Constructor(local_14,iVar2 + 1 + iVar1);
    local_4 = 0;
    for (iVar1 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x10)); iVar1 != 0;
        iVar1 = RedBlackTree_GetSuccessor((void *)((int)this + 0x10),(int *)((int)this + 0xc),iVar1)) {
      piVar3 = (int *)(**(code **)**(undefined4 **)(iVar1 + 0x14))();
      pcVar4 = (char *)FUN_00bbf3a0(piVar3);
      iVar2 = FUN_00bbf6e0(local_14,pcVar4);
      if (iVar2 == 0) {
        ExceptionList = local_c;
        return *(undefined4 *)(iVar1 + 0x14);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00bba260 @ 00bba260 ////

uint __thiscall FUN_00bba260(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdfd7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 8))();
    iVar2 = RedBlackTree_Find((void *)((int)this + 0x24),(void *)((int)this + 0x20),uVar1,uVar1);
    if (iVar2 == 0) {
      FUN_00bbd080((void *)((int)this + 0x18),param_1);
      local_4 = 0xffffffff;
      uVar1 = PKCProtectionInstance_Leave(local_14);
      ExceptionList = pvStack_c;
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00bba310 @ 00bba310 ////

int __thiscall FUN_00bba310(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_1c [2];
  undefined **local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfdff1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_1c,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar2 = std__String__Constructor(local_14,param_1);
  local_4._0_1_ = 1;
  piVar3 = (int *)RedBlackTree_Find((void *)((int)this + 0x24),(void *)((int)this + 0x20),uVar2,uVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  local_14[0] = &PTR_LAB_00d9d9b4;
  if (piVar3 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_1c);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = piVar3[5];
  FUN_00bbd5d0((void *)((int)this + 0x18),piVar3);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_1c);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bba3d0 @ 00bba3d0 ////

uint __thiscall FUN_00bba3d0(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe003;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 4))();
    iVar2 = RedBlackTree_Find((void *)((int)this + 0x10),(void *)((int)this + 0xc),uVar1,uVar1);
    if (iVar2 == 0) {
      FUN_00bbcfe0((void *)((int)this + 4),param_1);
      local_4 = 0xffffffff;
      uVar1 = PKCProtectionInstance_Leave(local_14);
      ExceptionList = pvStack_c;
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  local_4 = 0xffffffff;
  uVar3 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00bba480 @ 00bba480 ////

int __thiscall FUN_00bba480(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_1c [2];
  undefined **local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe01d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_1c,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar2 = std__String__Constructor(local_14,param_1);
  local_4._0_1_ = 1;
  piVar3 = (int *)RedBlackTree_Find((void *)((int)this + 0x10),(void *)((int)this + 0xc),uVar2,uVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  local_14[0] = &PTR_LAB_00d9d9b4;
  if (piVar3 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_1c);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = piVar3[5];
  FUN_00bbd510((void *)((int)this + 4),piVar3);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_1c);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bba540 @ 00bba540 ////

void __fastcall FUN_00bba540(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x10));
  if (_Memory != (int *)0x0) {
    FUN_00bcff70((void *)(param_1 + 0x10),(int *)(param_1 + 0xc),(int)_Memory);
    thunk_FUN_00bcf880(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bba5a0 @ 00bba5a0 ////

void __fastcall FUN_00bba5a0(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x24));
  if (_Memory != (int *)0x0) {
    FUN_00bcff70((void *)(param_1 + 0x24),(int *)(param_1 + 0x20),(int)_Memory);
    thunk_FUN_00bcf880(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bba600 @ 00bba600 ////

undefined4 __thiscall FUN_00bba600(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = RedBlackTree_Find((void *)((int)this + 0x24),(void *)((int)this + 0x20),param_1,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x14);
}


//// FUNCTION FUN_00bba620 @ 00bba620 ////

undefined4 __thiscall FUN_00bba620(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = RedBlackTree_Find((void *)((int)this + 0x10),(void *)((int)this + 0xc),param_1,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x14);
}


//// FUNCTION CCodecName_Ogg_Constructor @ 00bba640 ////

void __fastcall CCodecName_Ogg_Constructor(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe02f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_14,0xd9df40);
  local_4 = 0;
  FUN_00bba620(param_1,uVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CCodecName_WMA_Constructor @ 00bba690 ////

void __fastcall CCodecName_WMA_Constructor(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe041;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_14,0xd9df54);
  local_4 = 0;
  FUN_00bba620(param_1,uVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CCodecName_MPEG2LayerII_Constructor @ 00bba6e0 ////

void __fastcall CCodecName_MPEG2LayerII_Constructor(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe053;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_14,0xd9df60);
  local_4 = 0;
  FUN_00bba620(param_1,uVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CCodecName_XBoxADPCM_Constructor @ 00bba730 ////

void __fastcall CCodecName_XBoxADPCM_Constructor(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe065;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_14,0xd9df70);
  local_4 = 0;
  FUN_00bba620(param_1,uVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CCodecName_WindowsACM_Constructor @ 00bba780 ////

void __fastcall CCodecName_WindowsACM_Constructor(void *param_1)

{
  undefined4 uVar1;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe077;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = std__String__Constructor(local_14,0xd9df84);
  local_4 = 0;
  FUN_00bba620(param_1,uVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bba7d0 @ 00bba7d0 ////

void __fastcall FUN_00bba7d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfe0c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9df98;
  local_4 = 5;
  FUN_00bb9020((int)param_1);
  FUN_00bb9090((int)param_1);
  FUN_00bb9130((int)param_1);
  FUN_00bb9190((int)param_1);
  FUN_00bb9d80(param_1);
  DAT_010ced10 = 0;
  FUN_00bba540((int)param_1);
  FUN_00bba5a0((int)param_1);
  DAT_010ced44 = 0;
  local_4._0_1_ = 4;
  FUN_00bcbd60(param_1 + 0x13);
  local_4._0_1_ = 3;
  param_1[0xe] = &PTR_LAB_00d9dcac;
  RedBlackTree_Dtor(param_1 + 0xf);
  local_4._0_1_ = 2;
  param_1[0xb] = &PTR_LAB_00d9dc30;
  RedBlackTree_Dtor(param_1 + 0xc);
  param_1[6] = &PTR_FUN_00d9dec0;
  local_4._0_1_ = 1;
  param_1[8] = &PTR_LAB_00d9dbc0;
  RedBlackTree_Dtor(param_1 + 9);
  param_1[1] = &PTR_FUN_00d9debc;
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[3] = &PTR_LAB_00d9db98;
  RedBlackTree_Dtor(param_1 + 4);
  *param_1 = &PTR_LAB_00d9d9d0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION CodecFormat_DetectFromHeader @ 00bba8c0 ////

int __thiscall CodecFormat_DetectFromHeader(void *this,int *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int local_a4;
  undefined4 local_a0 [6];
  undefined4 local_88 [19];
  short local_3c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe0e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9f52c_00bd9d00(local_a0,param_1);
  local_4 = 0;
  LH_ReadFileData(local_a0,&local_a4,4);
  if (local_a4 != 0x46464952) {
    if (local_a4 == 0x5367674f) {
      iVar3 = CCodecName_Ogg_Constructor(this);
      local_4 = 0xffffffff;
      Dtor_00bd9e50(local_a0);
      ExceptionList = local_c;
      return iVar3;
    }
    if (local_a4 == 0x75b22630) {
      iVar3 = CCodecName_WMA_Constructor(this);
      goto LAB_00bbaa18;
    }
    goto LAB_00bba948;
  }
  FUN_00bd58a0(local_88);
  local_4._0_1_ = 1;
  uVar1 = FUN_00bd5db0(local_88,param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_00bd57f0(local_88,param_1);
    if ((char)uVar2 == '\0') {
      if (local_3c == 0x50) {
        iVar3 = CCodecName_MPEG2LayerII_Constructor(this);
LAB_00bba9b8:
        if (iVar3 == 0) goto LAB_00bba9be;
      }
      else {
        if (local_3c == 0x69) {
          iVar3 = CCodecName_XBoxADPCM_Constructor(this);
          goto LAB_00bba9b8;
        }
LAB_00bba9be:
        iVar3 = CCodecName_WindowsACM_Constructor(this);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00bd5a40(local_88);
LAB_00bbaa18:
      local_4 = 0xffffffff;
      Dtor_00bd9e50(local_a0);
      ExceptionList = local_c;
      return iVar3;
    }
    *param_2 = 1;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bd5a40(local_88);
LAB_00bba948:
  local_4 = 0xffffffff;
  Dtor_00bd9e50(local_a0);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION CSystem_LoadAudioSample_Wav_Ogg @ 00bbaa40 ////

bool __thiscall CSystem_LoadAudioSample_Wav_Ogg(void *this,undefined4 param_1,LPCSTR param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  LPCVOID pvVar8;
  int iVar9;
  undefined4 unaff_EBX;
  undefined4 uVar10;
  char *pcVar11;
  DWORD DVar12;
  void *pvStack_154;
  DWORD DStack_150;
  int *piStack_14c;
  undefined **ppuStack_148;
  undefined1 auStack_144 [4];
  void **ppvStack_140;
  uint uStack_13c;
  int iStack_138;
  int *piStack_134;
  undefined **ppuStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  uint auStack_124 [2];
  int aiStack_11c [3];
  undefined **local_110;
  uint uStack_10c;
  undefined1 uStack_104;
  undefined1 uStack_103;
  int aiStack_fc [4];
  undefined4 auStack_ec [18];
  uint uStack_a4;
  undefined4 auStack_9c [19];
  ushort uStack_4e;
  int iStack_4c;
  undefined1 uStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00cfe16e;
  pvStack_14 = ExceptionList;
  pvStack_154 = (void *)(uint)(uint3)pvStack_154;
  ExceptionList = &pvStack_14;
  local_110 = this;
  piVar4 = (int *)(**(code **)(**(int **)((int)this + 0x70) + 4))(param_1);
  if (piVar4 == (int *)0x0) {
    ExceptionList = pvStack_18;
    return false;
  }
  local_110 = &PTR_LAB_00d9dd5c;
  uStack_10c = uStack_10c & 0xffffff00;
  uStack_103 = 0;
  puStack_10._0_1_ = 1;
  puStack_10._1_3_ = 0;
  piStack_14c = piVar4;
  std__String__Constructor(&ppuStack_130,(int)param_2);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  FUN_00bbfb30(&ppuStack_130,4,(int *)&local_110);
  iVar5 = FUN_00bbf6e0(&local_110,".wav");
  if (iVar5 == 0) {
    iStack_138 = 1;
  }
  else {
    iVar5 = FUN_00bbf6e0(&local_110,".ogg");
    if (iVar5 != 0) {
      ppuStack_130 = &PTR_LAB_00d9d9b4;
      local_110 = &PTR_LAB_00d9d9b4;
      goto LAB_00bbafef;
    }
    iStack_138 = 0;
  }
  pvStack_154 = (void *)0x0;
  DStack_150 = 0;
  puStack_10._0_1_ = 3;
  iVar5 = FUN_00bbc3b0((int *)&piStack_14c);
  FUN_00bbd390(auStack_ec,iVar5);
  puStack_10._0_1_ = 4;
  if (uStack_a4 != 0) {
    FUN_00bbc1d0(&pvStack_154,uStack_a4);
    uVar10 = 0;
    iVar5 = FUN_00bbc590(&pvStack_154,0);
    uVar6 = FUN_00bbd430(auStack_ec,iVar5,uVar10,uStack_a4);
    if ((char)uVar6 != '\0') {
      FUN_00bce860(&ppuStack_148);
      ppvStack_140 = &pvStack_154;
      ppuStack_148 = &PTR_FUN_00d9da70;
      puStack_10._0_1_ = 5;
      piVar4 = (int *)CodecFormat_DetectFromHeader(this,(int *)&ppuStack_148,&stack0xfffffeab);
      cVar3 = (char)((uint)unaff_EBX >> 0x18);
      if ((piVar4 != (int *)0x0) || (cVar3 != '\0')) {
        Ctor_vt00d9f588_00bda270(&iStack_128,param_2);
        iVar5 = iStack_138;
        puStack_10._0_1_ = 6;
        uVar1 = puStack_10._0_1_;
        puStack_10._0_1_ = 6;
        if (cVar3 == '\0') {
          if (iStack_138 == 0) {
            pcVar11 = "Ogg Vorbis Codec";
            pvVar7 = (void *)(**(code **)(*piVar4 + 4))();
            bVar2 = FUN_00bbb510(pvVar7,(byte *)pcVar11);
            uVar1 = puStack_10._0_1_;
            if (bVar2) {
              DVar12 = DStack_150;
              pvVar8 = (LPCVOID)FUN_00bbc590(&pvStack_154,0);
              bVar2 = PKDataWriteCStreamer2File_Write(&iStack_128,pvVar8,DVar12);
              puStack_10._0_1_ = 5;
              Dtor_00bda240(&iStack_128);
              puStack_10._0_1_ = 4;
              ppuStack_148 = &PTR_FUN_00d9da70;
              PKDataReadCAccess_Dtor(&ppuStack_148);
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
              FUN_00bbbe80(auStack_ec);
              FUN_00bbb8b0(&pvStack_154);
              puStack_10 = (undefined1 *)0xffffffff;
              FUN_00bbc390((int *)&piStack_14c);
              ExceptionList = pvStack_18;
              return bVar2;
            }
          }
          puStack_10._0_1_ = uVar1;
          piVar4 = (int *)(**(code **)(*piVar4 + 0xc))(&ppuStack_148);
          puStack_10._0_1_ = 7;
          piStack_134 = piVar4;
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 4))(aiStack_11c);
            (**(code **)(*piVar4 + 0xc))(&uStack_104);
            (**(code **)*piVar4)(auStack_144);
            auStack_124[0] = (int)ppuStack_148 * uStack_10c * 2;
            FUN_00bbb670(&uStack_13c,auStack_124[0]);
            uStack_1c = 8;
            iVar5 = FUN_00bbc590(&uStack_13c,0);
            cVar3 = (**(code **)(*piVar4 + 0x10))(iVar5,auStack_124[0],auStack_124);
            if (cVar3 != '\0') {
              iVar5 = FUN_00bbc590(&ppuStack_130,0);
              Ctor_vt00d9f574_00bda1d0(&local_110,iVar5,uStack_12c);
              puStack_10._0_1_ = 9;
              uVar10 = FUN_00bb9350((int *)&local_110,uStack_13c,aiStack_11c[0],&iStack_128,
                                    iStack_138);
              puStack_10._0_1_ = 8;
              if ((char)uVar10 != '\0') {
                Dtor_00bda170(&local_110);
                FUN_00bbb8b0(&ppuStack_130);
                puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
                FUN_00bbc8e0((int *)&piStack_134);
                goto LAB_00bbaf75;
              }
              Dtor_00bda170(&local_110);
            }
            FUN_00bbb8b0(&ppuStack_130);
          }
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
          FUN_00bbc8e0((int *)&piStack_134);
        }
        else {
          puStack_10._0_1_ = uVar1;
          if (iStack_138 == 1) {
            DVar12 = DStack_150;
            pvVar8 = (LPCVOID)FUN_00bbc590(&pvStack_154,0);
            bVar2 = PKDataWriteCStreamer2File_Write(&iStack_128,pvVar8,DVar12);
            puStack_10._0_1_ = 5;
            Dtor_00bda240(&iStack_128);
            puStack_10._0_1_ = 4;
            ppuStack_148 = &PTR_FUN_00d9da70;
            PKDataReadCAccess_Dtor(&ppuStack_148);
            puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
            FUN_00bbbe80(auStack_ec);
            FUN_00bbb8b0(&pvStack_154);
            puStack_10 = (undefined1 *)0xffffffff;
            FUN_00bbc390((int *)&piStack_14c);
            ExceptionList = pvStack_18;
            return bVar2;
          }
          FUN_00bd58a0(auStack_9c);
          puStack_10._0_1_ = 10;
          uVar10 = FUN_00bd5db0(auStack_9c,(int *)&ppuStack_148);
          if ((char)uVar10 != '\0') {
            uStack_13c = (uint)uStack_4e;
            aiStack_11c[0] = iStack_4c;
            DVar12 = DStack_150;
            iVar9 = FUN_00bbc590(&pvStack_154,0);
            Ctor_vt00d9f574_00bda1d0(aiStack_fc,iVar9,DVar12);
            puStack_10._0_1_ = 0xb;
            uVar10 = FUN_00bb9350(aiStack_fc,uStack_13c,aiStack_11c[0],&iStack_128,iVar5);
            puStack_10._0_1_ = 10;
            if ((char)uVar10 != '\0') {
              Dtor_00bda170(aiStack_fc);
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
              FUN_00bd5a40(auStack_9c);
LAB_00bbaf75:
              puStack_10._0_1_ = 5;
              Dtor_00bda240(&iStack_128);
              puStack_10._0_1_ = 4;
              ppuStack_148 = &PTR_FUN_00d9da70;
              PKDataReadCAccess_Dtor(&ppuStack_148);
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
              FUN_00bbbe80(auStack_ec);
              FUN_00bbb8b0(&pvStack_154);
              puStack_10 = (undefined1 *)0xffffffff;
              FUN_00bbc390((int *)&piStack_14c);
              ExceptionList = pvStack_18;
              return true;
            }
            Dtor_00bda170(aiStack_fc);
          }
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
          FUN_00bd5a40(auStack_9c);
        }
        puStack_10._0_1_ = 5;
        Dtor_00bda240(&iStack_128);
      }
      puStack_10._0_1_ = 4;
      ppuStack_148 = &PTR_FUN_00d9da70;
      PKDataReadCAccess_Dtor(&ppuStack_148);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
      FUN_00bbbe80(auStack_ec);
      FUN_00bbb8b0(&pvStack_154);
      puStack_10 = (undefined1 *)0xffffffff;
      FUN_00bbc390((int *)&piStack_14c);
      ExceptionList = pvStack_18;
      return false;
    }
  }
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
  FUN_00bbbe80(auStack_ec);
  if (pvStack_154 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_154);
  }
LAB_00bbafef:
  puStack_10 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar4 + 0xc))();
  ExceptionList = pvStack_18;
  return false;
}


//// FUNCTION FUN_00bbb020 @ 00bbb020 ////

undefined4 * __thiscall FUN_00bbb020(void *this,int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe201;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9df98;
  *(undefined ***)((int)this + 4) = &PTR_FUN_00d9debc;
  local_4 = 0;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_00d9db98;
  RedBlackTree_Ctor((int *)((int)this + 0x10));
  *(undefined ***)((int)this + 4) = &PTR_FUN_00d9df38;
  *(undefined ***)((int)this + 0x18) = &PTR_FUN_00d9dec0;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00d9dbc0;
  RedBlackTree_Ctor((int *)((int)this + 0x24));
  *(undefined ***)((int)this + 0x18) = &PTR_FUN_00d9df3c;
  local_4._0_1_ = 2;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00d9dc30;
  RedBlackTree_Ctor((int *)((int)this + 0x30));
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_00d9ded4;
  local_4._0_1_ = 3;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d9dcac;
  RedBlackTree_Ctor((int *)((int)this + 0x3c));
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d9defc;
  local_4._0_1_ = 4;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  FUN_00bcbc00((undefined4 *)((int)this + 0x4c));
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  local_4._0_1_ = 5;
  FUN_00bc15f0(*(undefined4 *)(param_1 + 0x40));
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4._0_1_ = 6;
  DAT_010ced44 = &DAT_00bb9010;
  FUN_00bde1e0();
  FUN_00bde1e0();
  FUN_00bde1c0();
  DAT_010ced10 = 1;
  FUN_00bddd30(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar1 = operator_new(0x98);
    local_4 = CONCAT31(local_4._1_3_,8);
    if (pvVar1 != (void *)0x0) {
      puVar2 = Ctor_vt00d9f88c_00bdc8a0(pvVar1,1);
      goto LAB_00bbb1c3;
    }
  }
  else {
    pvVar1 = operator_new(0x34);
    local_4 = CONCAT31(local_4._1_3_,7);
    if (pvVar1 != (void *)0x0) {
      puVar2 = Ctor_vt00d9f8d0_00bdd650(pvVar1,*(undefined4 *)(param_1 + 0x28));
      goto LAB_00bbb1c3;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_00bbb1c3:
  local_4._0_1_ = 6;
  *(undefined4 **)((int)this + 0x70) = puVar2;
  pvVar1 = operator_new(0x7e8);
  local_4._0_1_ = 9;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = Ctor_vt00d9ecac_00bc9df0(pvVar1,this);
  }
  local_4._0_1_ = 6;
  *(undefined4 **)((int)this + 0x44) = puVar2;
  pvVar1 = operator_new(0x7ac);
  local_4._0_1_ = 10;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = Ctor_vt00d9eb88_00bc5ea0(pvVar1,(int)this,*(uint *)(param_1 + 0x18),*(int *)(param_1 + 0x14),
                          *(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x50),
                          *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),param_2);
  }
  local_4._0_1_ = 6;
  *(undefined4 **)((int)this + 0x48) = puVar2;
  pvVar1 = operator_new(8);
  local_4._0_1_ = 0xb;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00bdaf90(pvVar1,this);
  }
  local_4._0_1_ = 6;
  *(undefined4 *)((int)this + 0x7c) = uVar3;
  pvVar1 = operator_new(0xc);
  local_4._0_1_ = 0xc;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = Ctor_vt00d9f5f8_00bdaad0(pvVar1,(int)this);
  }
  *(undefined4 **)((int)this + 0x80) = puVar2;
  local_4 = CONCAT31(local_4._1_3_,5);
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bbb2c0 @ 00bbb2c0 ////

undefined4 * FUN_00bbb2c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  void *this;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int local_24 [5];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe21e;
  local_c = ExceptionList;
  local_24[1] = 4;
  local_24[4] = 4;
  iVar4 = 5;
  bVar6 = true;
  local_24[0] = 6;
  local_24[2] = 8;
  local_24[3] = 9;
  piVar2 = local_24;
  piVar5 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar6 = *piVar2 == *piVar5;
    piVar2 = piVar2 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    DAT_00ea510c = (char)param_1[0x13] == '\x01';
    local_24[2] = param_1[5];
    local_24[1] = 0;
    local_24[0] = param_1[0xf];
    local_24[4] = param_1[0x12];
    local_24[3] = 8;
    local_10 = (undefined1)param_1[0x11];
    ExceptionList = &local_c;
    piVar2 = LLACodaCSystem_ConfigureDirectSound(local_24);
    local_4 = 0;
    if (piVar2 != (int *)0x0) {
      param_1 = piVar2;
      this = operator_new(0x9c);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (this == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        iVar4 = FUN_00bbcd30((int *)&param_1);
        puVar3 = FUN_00bbb020(this,(int)piVar1,iVar4);
        piVar2 = param_1;
      }
      local_4 = 0xffffffff;
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)(1);
      }
      ExceptionList = local_c;
      return puVar3;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbb460 @ 00bbb460 ////

void * __thiscall FUN_00bbb460(void *this,int *param_1)

{
  FUN_00bbf750(this,param_1);
  return this;
}


//// FUNCTION FUN_00bbb4c0 @ 00bbb4c0 ////

void __fastcall FUN_00bbb4c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bbb510 @ 00bbb510 ////

bool FUN_00bbb510(void *param_1,byte *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00bbf680(param_1,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


//// FUNCTION FUN_00bbb5a0 @ 00bbb5a0 ////

void __fastcall FUN_00bbb5a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9d0;
  return;
}


//// FUNCTION FUN_00bbb630 @ 00bbb630 ////

void __fastcall FUN_00bbb630(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9ac;
  return;
}


//// FUNCTION FUN_00bbb670 @ 00bbb670 ////

undefined4 * __thiscall FUN_00bbb670(void *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  *(uint *)((int)this + 4) = param_1;
  *(void **)this = pvVar1;
  return this;
}


//// FUNCTION FUN_00bbb6b0 @ 00bbb6b0 ////

void __fastcall FUN_00bbb6b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bbb6d0 @ 00bbb6d0 ////

undefined4 * __thiscall FUN_00bbb6d0(void *this,undefined4 param_1)

{
  FUN_00bce860(this);
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_FUN_00d9da70;
  return this;
}


//// FUNCTION FUN_00bbb720 @ 00bbb720 ////

void __fastcall FUN_00bbb720(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9da70;
  PKDataReadCAccess_Dtor(param_1);
  return;
}


//// FUNCTION FUN_00bbb730 @ 00bbb730 ////

undefined4 * __thiscall FUN_00bbb730(void *this,byte param_1)

{
  FUN_00bbb720(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbb780 @ 00bbb780 ////

void __fastcall FUN_00bbb780(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9da8c;
  return;
}


//// FUNCTION FUN_00bbb790 @ 00bbb790 ////

void __fastcall FUN_00bbb790(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bbb7a0 @ 00bbb7a0 ////

void __fastcall FUN_00bbb7a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cfe243;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9da9c;
  local_4 = 1;
  Wrap_CloseHandle_00bceac0(param_1 + 7);
  local_4 = local_4 & 0xffffff00;
  Wrap_DeleteCriticalSection_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00d9da8c;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bbb800 @ 00bbb800 ////

uint __thiscall FUN_00bbb800(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      PKCSemaphore_Wait((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bbb850 @ 00bbb850 ////

int * __fastcall FUN_00bbb850(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bbb880 @ 00bbb880 ////

int * __fastcall FUN_00bbb880(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bbb8b0 @ 00bbb8b0 ////

void __fastcall FUN_00bbb8b0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00bbb8e0 @ 00bbb8e0 ////

int * __fastcall FUN_00bbb8e0(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bbb920 @ 00bbb920 ////

int * __fastcall FUN_00bbb920(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bbb9a0 @ 00bbb9a0 ////

undefined4 * __thiscall FUN_00bbb9a0(void *this,byte param_1)

{
  FUN_00bbb7a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbba10 @ 00bbba10 ////

void __fastcall FUN_00bbba10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bbba30 @ 00bbba30 ////

void __fastcall FUN_00bbba30(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0xc))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbba70 @ 00bbba70 ////

void __fastcall FUN_00bbba70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bbbac0 @ 00bbbac0 ////

void __fastcall FUN_00bbbac0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbbb20 @ 00bbbb20 ////

void __fastcall FUN_00bbbb20(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x10))(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbbb50 @ 00bbbb50 ////

void __fastcall FUN_00bbbb50(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x1c))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbbb70 @ 00bbbb70 ////

undefined4 * __fastcall FUN_00bbbb70(undefined4 *param_1)

{
  RedBlackTree_Node_Ctor(param_1);
  param_1[5] = 0;
  return param_1;
}


//// FUNCTION FUN_00bbbbe0 @ 00bbbbe0 ////

undefined4 * __fastcall FUN_00bbbbe0(undefined4 *param_1)

{
  RedBlackTree_Node_Ctor(param_1);
  param_1[5] = 0;
  return param_1;
}


//// FUNCTION FUN_00bbbc70 @ 00bbbc70 ////

void __fastcall FUN_00bbbc70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9da84;
  return;
}


//// FUNCTION FUN_00bbbc90 @ 00bbbc90 ////

void __fastcall FUN_00bbbc90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9ac;
  return;
}


//// FUNCTION FUN_00bbbca0 @ 00bbbca0 ////

void __fastcall FUN_00bbbca0(undefined4 *param_1)

{
  param_1[0xd] = &PTR_LAB_00d9da84;
  FUN_00bbb7a0(param_1);
  return;
}


//// FUNCTION FUN_00bbbcc0 @ 00bbbcc0 ////

undefined4 * __thiscall FUN_00bbbcc0(void *this,byte param_1)

{
  FUN_00bbb630(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbbe60 @ 00bbbe60 ////

void __fastcall FUN_00bbbe60(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbbe80 @ 00bbbe80 ////

void __fastcall FUN_00bbbe80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9db60;
  local_4 = 0;
  param_1[0xf] = &PTR_LAB_00d9da84;
  FUN_00bbb7a0(param_1 + 2);
  local_4 = 0xffffffff;
  PKDataReadCAccess_Dtor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bbbef0 @ 00bbbef0 ////

undefined4 * __thiscall FUN_00bbbef0(void *this,byte param_1)

{
  FUN_00bbbe80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbbf90 @ 00bbbf90 ////

undefined4 * __thiscall FUN_00bbbf90(void *this,byte param_1)

{
  FUN_00bbb790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbbfb0 @ 00bbbfb0 ////

undefined4 * __fastcall FUN_00bbbfb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe283;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9da9c;
  Wrap_InitializeCriticalSection_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  PKCSemaphore_Create(param_1 + 7,0,1);
  *(undefined1 *)(param_1 + 10) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bbc010 @ 00bbc010 ////

bool __fastcall FUN_00bbc010(int param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  cVar1 = *(char *)(param_1 + 0x28);
  PKCProtectionInstance_Leave(local_8);
  return cVar1 == '\0';
}


//// FUNCTION FUN_00bbc040 @ 00bbc040 ////

undefined4 __thiscall FUN_00bbc040(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  if (*(char *)((int)this + 0x28) == '\0') {
    *(undefined4 *)((int)this + 0x20) = *param_1;
    *(undefined4 *)((int)this + 0x24) = param_1[1];
    *(undefined1 *)((int)this + 0x28) = 1;
    Wrap_ReleaseSemaphore_00bcead0((undefined4 *)((int)this + 0x1c));
    local_4 = 0xffffffff;
    uVar1 = PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  local_4 = 0xffffffff;
  uVar2 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00bbc0e0 @ 00bbc0e0 ////

bool __thiscall FUN_00bbc0e0(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  bVar1 = *(char *)((int)this + 0x28) != '\0';
  if (bVar1) {
    *param_1 = *(undefined4 *)((int)this + 0x20);
    param_1[1] = *(undefined4 *)((int)this + 0x24);
    *(undefined1 *)((int)this + 0x28) = 0;
  }
  PKCProtectionInstance_Leave(local_8);
  return bVar1;
}


//// FUNCTION FUN_00bbc130 @ 00bbc130 ////

void __fastcall FUN_00bbc130(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9db98;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bbc180 @ 00bbc180 ////

void __fastcall FUN_00bbc180(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dbc0;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bbc1d0 @ 00bbc1d0 ////

void __thiscall FUN_00bbc1d0(void *this,uint param_1)

{
  void *pvVar1;
  LPCSTR pCVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe2bb;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      pvVar1 = operator_new(param_1);
      if (pvVar1 == (void *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 0;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar2);
        DebugBreak();
      }
      uVar4 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar4 = *(uint *)((int)this + 4);
      }
      if ((uVar4 != 0) && (uVar3 = 0, uVar4 != 0)) {
        do {
          *(undefined1 *)(uVar3 + (int)pvVar1) = *(undefined1 *)(uVar3 + *(int *)this);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(void **)this = pvVar1;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bbc320 @ 00bbc320 ////

void __fastcall FUN_00bbc320(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dc30;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bbc390 @ 00bbc390 ////

void __fastcall FUN_00bbc390(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0xc))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbc3b0 @ 00bbc3b0 ////

int __fastcall FUN_00bbc3b0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe2db;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteMe.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x24);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00bbc480 @ 00bbc480 ////

void __fastcall FUN_00bbc480(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dcac;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bbc4f0 @ 00bbc4f0 ////

undefined4 * __thiscall FUN_00bbc4f0(void *this,byte param_1)

{
  FUN_00bbbc70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbc570 @ 00bbc570 ////

undefined4 * __thiscall FUN_00bbc570(void *this,byte param_1)

{
  FUN_00bbba10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbc590 @ 00bbc590 ////

int __thiscall FUN_00bbc590(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe2fb;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *(int *)this + param_1;
}


//// FUNCTION FUN_00bbc6a0 @ 00bbc6a0 ////

void __fastcall FUN_00bbc6a0(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x10))(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbc6c0 @ 00bbc6c0 ////

int __fastcall FUN_00bbc6c0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe31b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00bbc790 @ 00bbc790 ////

int __fastcall FUN_00bbc790(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe33b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bbc8c0 @ 00bbc8c0 ////

undefined4 * __thiscall FUN_00bbc8c0(void *this,byte param_1)

{
  FUN_00bbba70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbc8e0 @ 00bbc8e0 ////

void __fastcall FUN_00bbc8e0(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x1c))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbc900 @ 00bbc900 ////

undefined4 * FUN_00bbc900(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe35b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x18);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    RedBlackTree_Node_Ctor(puVar1);
    puVar1[5] = 0;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbc9e0 @ 00bbc9e0 ////

undefined4 * FUN_00bbc9e0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe37b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x18);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    RedBlackTree_Node_Ctor(puVar1);
    puVar1[5] = 0;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbcac0 @ 00bbcac0 ////

int * __thiscall FUN_00bbcac0(void *this,byte param_1)

{
  thunk_FUN_00bcf880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbcae0 @ 00bbcae0 ////

int * __thiscall FUN_00bbcae0(void *this,byte param_1)

{
  thunk_FUN_00bcf880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbcc10 @ 00bbcc10 ////

undefined4 * __thiscall FUN_00bbcc10(void *this,byte param_1)

{
  FUN_00bbbc90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbcc30 @ 00bbcc30 ////

undefined4 * __fastcall FUN_00bbcc30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dc30;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00bbcc50 @ 00bbcc50 ////

undefined4 * __fastcall FUN_00bbcc50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dcac;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00bbcc70 @ 00bbcc70 ////

undefined4 * __fastcall FUN_00bbcc70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9db98;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00bbcc90 @ 00bbcc90 ////

undefined4 * __fastcall FUN_00bbcc90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dbc0;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00bbccb0 @ 00bbccb0 ////

undefined4 * __thiscall FUN_00bbccb0(void *this,byte param_1)

{
  FUN_00bbc320(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbccd0 @ 00bbccd0 ////

undefined4 * __thiscall FUN_00bbccd0(void *this,byte param_1)

{
  FUN_00bbc480(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbccf0 @ 00bbccf0 ////

undefined4 * __thiscall FUN_00bbccf0(void *this,byte param_1)

{
  FUN_00bbc130(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbcd10 @ 00bbcd10 ////

undefined4 * __thiscall FUN_00bbcd10(void *this,byte param_1)

{
  FUN_00bbc180(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbcd30 @ 00bbcd30 ////

int __fastcall FUN_00bbcd30(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe3bb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bbcef0 @ 00bbcef0 ////

void __fastcall FUN_00bbcef0(int *param_1)

{
  LPCSTR pCVar1;
  undefined4 uStack_11c;
  undefined **local_118;
  char cStack_114;
  char cStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cfe3fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cStack_114 = (**(code **)(*param_1 + 8))(&local_118);
  if (cStack_114 == '\0') {
    local_118 = &PTR_LAB_00d9db7c;
    pvStack_c = (void *)0x0;
    cStack_15 = cStack_114;
    LH_LogErrorMessage(&local_118,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKMultithreadCMailbox.h");
    LH_LogErrorMessage(&local_118,"(");
    FUN_00bbe970(0x1e);
    LH_LogErrorMessage(&local_118,") : ");
    LH_LogErrorMessage(&local_118,"Mailbox shortcut went wrong");
    LH_LogErrorMessage(&local_118,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_118);
    LH_Assert(&stack0xfffffedf,pCVar1);
    DebugBreak();
  }
  *puStack_4 = 0;
  puStack_4[1] = uStack_11c;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00bbcfe0 @ 00bbcfe0 ////

void __thiscall FUN_00bbcfe0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  puVar1 = FUN_00bbc900();
  if (puVar1 == (undefined4 *)0x0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"i != NULL\n");
    DebugBreak();
  }
  puVar1[5] = param_1;
  FUN_00bcfac0((void *)((int)this + 0xc),(int *)((int)this + 8),(int)puVar1);
  return;
}


//// FUNCTION FUN_00bbd060 @ 00bbd060 ////

void __fastcall FUN_00bbd060(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9debc;
  param_1[2] = &PTR_LAB_00d9db98;
  RedBlackTree_Dtor(param_1 + 3);
  return;
}


//// FUNCTION FUN_00bbd080 @ 00bbd080 ////

void __thiscall FUN_00bbd080(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  puVar1 = FUN_00bbc9e0();
  if (puVar1 == (undefined4 *)0x0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"i != NULL\n");
    DebugBreak();
  }
  puVar1[5] = param_1;
  FUN_00bcfac0((void *)((int)this + 0xc),(int *)((int)this + 8),(int)puVar1);
  return;
}


//// FUNCTION FUN_00bbd0e0 @ 00bbd0e0 ////

void __fastcall FUN_00bbd0e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9dec0;
  param_1[2] = &PTR_LAB_00d9dbc0;
  RedBlackTree_Dtor(param_1 + 3);
  return;
}


//// FUNCTION FUN_00bbd100 @ 00bbd100 ////

void __fastcall FUN_00bbd100(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dc30;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bbd120 @ 00bbd120 ////

void __fastcall FUN_00bbd120(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dcac;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION FUN_00bbd200 @ 00bbd200 ////

uint __thiscall FUN_00bbd200(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_8;
  
  uVar1 = FUN_00bc0060(*(void **)((int)this + 0x30),param_1,param_2,param_3,0,(int)this + 0x34);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar2 = FUN_00bbcef0(this);
  return CONCAT31((int3)((uint)uVar2 >> 8),local_8);
}


//// FUNCTION FUN_00bbd250 @ 00bbd250 ////

undefined4 * __thiscall FUN_00bbd250(void *this,undefined4 param_1)

{
  FUN_00bbbfb0(this);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x2c) = this;
  *(undefined ***)((int)this + 0x34) = &PTR_FUN_00d9db74;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 **)((int)this + 0x3c) = (undefined4 *)((int)this + 0x2c);
  *(undefined1 **)((int)this + 0x38) = &LAB_00bbcb40;
  return this;
}


//// FUNCTION FUN_00bbd290 @ 00bbd290 ////

undefined4 * __fastcall FUN_00bbd290(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dc30;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9ded4;
  return param_1;
}


//// FUNCTION FUN_00bbd2b0 @ 00bbd2b0 ////

undefined4 * __fastcall FUN_00bbd2b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9dcac;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9defc;
  return param_1;
}


//// FUNCTION FUN_00bbd2d0 @ 00bbd2d0 ////

undefined4 * __fastcall FUN_00bbd2d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9debc;
  param_1[2] = &PTR_LAB_00d9db98;
  RedBlackTree_Ctor(param_1 + 3);
  return param_1;
}


//// FUNCTION FUN_00bbd2f0 @ 00bbd2f0 ////

undefined4 * __fastcall FUN_00bbd2f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9dec0;
  param_1[2] = &PTR_LAB_00d9dbc0;
  RedBlackTree_Ctor(param_1 + 3);
  return param_1;
}


//// FUNCTION FUN_00bbd310 @ 00bbd310 ////

undefined4 * __thiscall FUN_00bbd310(void *this,byte param_1)

{
  FUN_00bbd100(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbd330 @ 00bbd330 ////

undefined4 * __thiscall FUN_00bbd330(void *this,byte param_1)

{
  FUN_00bbd120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbd350 @ 00bbd350 ////

undefined4 * __thiscall FUN_00bbd350(void *this,byte param_1)

{
  FUN_00bbd060(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbd370 @ 00bbd370 ////

undefined4 * __thiscall FUN_00bbd370(void *this,byte param_1)

{
  FUN_00bbd0e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbd390 @ 00bbd390 ////

undefined4 * __thiscall FUN_00bbd390(void *this,undefined4 param_1)

{
  char cVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe423;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bce860(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d9db60;
  FUN_00bbbfb0((undefined4 *)((int)this + 8));
  *(undefined4 *)((int)this + 0x34) = (undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined ***)((int)this + 0x3c) = &PTR_FUN_00d9db74;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 **)((int)this + 0x44) = (undefined4 *)((int)this + 0x34);
  *(undefined1 **)((int)this + 0x40) = &LAB_00bbcb40;
  local_4 = CONCAT31(local_4._1_3_,1);
  cVar1 = (**(code **)**(undefined4 **)((int)this + 0x38))((undefined4 *)((int)this + 0x48));
  if (cVar1 == '\0') {
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  ExceptionList = this;
  return this;
}


//// FUNCTION FUN_00bbd430 @ 00bbd430 ////

uint __thiscall FUN_00bbd430(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_8;
  
  uVar1 = FUN_00bc0060(*(void **)((int)this + 0x38),param_2,param_3,param_1,0,(int)this + 0x3c);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar2 = FUN_00bbcef0((int *)((int)this + 8));
  return CONCAT31((int3)((uint)uVar2 >> 8),local_8);
}


//// FUNCTION FUN_00bbd4d0 @ 00bbd4d0 ////

void __fastcall FUN_00bbd4d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9debc;
  param_1[2] = &PTR_LAB_00d9db98;
  RedBlackTree_Dtor(param_1 + 3);
  return;
}


//// FUNCTION FUN_00bbd510 @ 00bbd510 ////

void __thiscall FUN_00bbd510(void *this,int *param_1)

{
  int *_Memory;
  
  _Memory = param_1;
  if (param_1 == (int *)0x0) {
    LH_Assert(&param_1,"Iterator != NULL\n");
    DebugBreak();
  }
  FUN_00bcff70((void *)((int)this + 0xc),(int *)((int)this + 8),(int)_Memory);
  if (_Memory != (int *)0x0) {
    thunk_FUN_00bcf880(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bbd570 @ 00bbd570 ////

void __fastcall FUN_00bbd570(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bbd572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}


//// FUNCTION FUN_00bbd590 @ 00bbd590 ////

void __fastcall FUN_00bbd590(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9dec0;
  param_1[2] = &PTR_LAB_00d9dbc0;
  RedBlackTree_Dtor(param_1 + 3);
  return;
}


//// FUNCTION FUN_00bbd5d0 @ 00bbd5d0 ////

void __thiscall FUN_00bbd5d0(void *this,int *param_1)

{
  int *_Memory;
  
  _Memory = param_1;
  if (param_1 == (int *)0x0) {
    LH_Assert(&param_1,"Iterator != NULL\n");
    DebugBreak();
  }
  FUN_00bcff70((void *)((int)this + 0xc),(int *)((int)this + 8),(int)_Memory);
  if (_Memory != (int *)0x0) {
    thunk_FUN_00bcf880(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00bbd630 @ 00bbd630 ////

void __fastcall FUN_00bbd630(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bbd632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


//// FUNCTION FUN_00bbd650 @ 00bbd650 ////

undefined4 * __fastcall FUN_00bbd650(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9debc;
  param_1[2] = &PTR_LAB_00d9db98;
  RedBlackTree_Ctor(param_1 + 3);
  *param_1 = &PTR_FUN_00d9df38;
  return param_1;
}


//// FUNCTION FUN_00bbd680 @ 00bbd680 ////

undefined4 * __fastcall FUN_00bbd680(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9dec0;
  param_1[2] = &PTR_LAB_00d9dbc0;
  RedBlackTree_Ctor(param_1 + 3);
  *param_1 = &PTR_FUN_00d9df3c;
  return param_1;
}


//// FUNCTION FUN_00bbd6b0 @ 00bbd6b0 ////

undefined4 * __thiscall FUN_00bbd6b0(void *this,byte param_1)

{
  FUN_00bbd4d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbd6d0 @ 00bbd6d0 ////

undefined4 * __thiscall FUN_00bbd6d0(void *this,byte param_1)

{
  FUN_00bbd590(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbd6f0 @ 00bbd6f0 ////

undefined4 * __thiscall FUN_00bbd6f0(void *this,byte param_1)

{
  FUN_00bba7d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbd740 @ 00bbd740 ////

void __fastcall FUN_00bbd740(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e00c;
  return;
}


//// FUNCTION FilteredDelayEffect_Destructor @ 00bbd750 ////

undefined4 * __thiscall FilteredDelayEffect_Destructor(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_LAB_00d9e00c;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbd780 @ 00bbd780 ////

undefined4 * __thiscall
FUN_00bbd780(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe443;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_6;
  local_4 = 0;
  *(undefined ***)this = &PTR_FilteredDelayEffect_Constructor_00d9e01c;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  Ctor_vt00d9feb8_00be1e00((undefined4 *)((int)this + 0x18));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bbfaa0((undefined4 *)((int)this + 0x18),param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FilteredDelayEffect_Constructor @ 00bbd800 ////

undefined4 * __thiscall
FilteredDelayEffect_Constructor(void *this,undefined4 param_1,undefined4 param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe45b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x90);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar1 = FilteredDelayEffect_Init
                       (this_00,param_1,param_2,*(int *)((int)this + 4),
                        *(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0xc),
                        *(float *)((int)this + 0x10),*(float *)((int)this + 0x14));
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FilteredDelayEffect_GetFilterState @ 00bbd890 ////

int __fastcall FilteredDelayEffect_GetFilterState(int param_1)

{
  return param_1 + 0x18;
}


//// FUNCTION FilteredDelayEffect_Release @ 00bbd8a0 ////

void __fastcall FilteredDelayEffect_Release(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(1);
  }
  return;
}


//// FUNCTION FUN_00bbd8b0 @ 00bbd8b0 ////

undefined4 *
FUN_00bbd8b0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe47b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x20);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00bbd780(this,param_1,param_2,param_3,param_4,param_5,param_6);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbd930 @ 00bbd930 ////

undefined4 * FUN_00bbd930(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe490;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x18);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00bbd9a0(this,param_1,param_2,param_3,param_4);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbd9a0 @ 00bbd9a0 ////

undefined4 * __thiscall
FUN_00bbd9a0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe4b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 8) = param_3;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d9e02c;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_4;
  Ctor_vt00d9feb8_00be1e00((undefined4 *)((int)this + 0x10));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bbfaa0((undefined4 *)((int)this + 0x10),param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bbda20 @ 00bbda20 ////

undefined4 * __thiscall FUN_00bbda20(void *this,undefined4 param_1,undefined4 param_2)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe4cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x60);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar1 = ParametricEQEffect_Constructor
                       (this_00,param_1,param_2,*(float *)((int)this + 4),*(float *)((int)this + 8),
                        *(undefined4 *)((int)this + 0xc));
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbdac0 @ 00bbdac0 ////

undefined4 * __thiscall FUN_00bbdac0(void *this,byte param_1)

{
  FUN_00bbdae0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbdae0 @ 00bbdae0 ////

void __fastcall FUN_00bbdae0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe4e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  PKStringsCHeapString_Dtor(param_1 + 4);
  *param_1 = &PTR_LAB_00d9e00c;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bbdb30 @ 00bbdb30 ////

undefined4 * __thiscall FUN_00bbdb30(void *this,byte param_1)

{
  FUN_00bbdb50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbdb50 @ 00bbdb50 ////

void __fastcall FUN_00bbdb50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe508;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  PKStringsCHeapString_Dtor(param_1 + 6);
  *param_1 = &PTR_LAB_00d9e00c;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bbdba0 @ 00bbdba0 ////

void __fastcall FUN_00bbdba0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  param_1[2] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x41a00000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return;
}


//// FUNCTION FUN_00bbdc50 @ 00bbdc50 ////

void __thiscall FUN_00bbdc50(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  return;
}


//// FUNCTION FUN_00bbdc90 @ 00bbdc90 ////

void __thiscall FUN_00bbdc90(void *this,undefined4 param_1,undefined4 param_2)

{
  *(byte *)((int)this + 0x30) = *(byte *)((int)this + 0x30) | 1;
  *(undefined4 *)((int)this + 0x40) = param_1;
  *(undefined4 *)((int)this + 0x44) = param_2;
  return;
}


//// FUNCTION FUN_00bbdcd0 @ 00bbdcd0 ////

void __thiscall FUN_00bbdcd0(void *this,undefined4 param_1)

{
  *(byte *)((int)this + 0x30) = *(byte *)((int)this + 0x30) | 4;
  *(undefined4 *)((int)this + 0x50) = param_1;
  return;
}


//// FUNCTION FUN_00bbdce0 @ 00bbdce0 ////

void __thiscall FUN_00bbdce0(void *this,undefined4 param_1)

{
  *(byte *)((int)this + 0x30) = *(byte *)((int)this + 0x30) | 8;
  *(undefined4 *)((int)this + 0x54) = param_1;
  return;
}


//// FUNCTION FUN_00bbdd00 @ 00bbdd00 ////

void __thiscall FUN_00bbdd00(void *this,undefined4 param_1)

{
  *(byte *)((int)this + 0x30) = *(byte *)((int)this + 0x30) | 0x20;
  *(undefined4 *)((int)this + 100) = param_1;
  return;
}


//// FUNCTION FUN_00bbdd20 @ 00bbdd20 ////

void __thiscall FUN_00bbdd20(void *this,undefined1 param_1)

{
  *(byte *)((int)this + 0x30) = *(byte *)((int)this + 0x30) | 0x80;
  *(undefined1 *)((int)this + 0x74) = param_1;
  return;
}


//// FUNCTION FUN_00bbdd80 @ 00bbdd80 ////

void __thiscall FUN_00bbdd80(void *this,uint param_1,char param_2)

{
  FUN_00bc9ad0(param_1,param_2,(uint *)((int)this + 0x68),(uint *)((int)this + 0x34));
  return;
}


//// FUNCTION FUN_00bbde00 @ 00bbde00 ////

void __thiscall FUN_00bbde00(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(byte *)((int)this + 0x32) = *(byte *)((int)this + 0x32) | 4;
    return;
  }
  *(ushort *)((int)this + 0x32) = *(ushort *)((int)this + 0x32) | 0xfffb;
  return;
}


//// FUNCTION FUN_00bbde20 @ 00bbde20 ////

void __thiscall FUN_00bbde20(void *this,uint param_1,char param_2)

{
  FUN_00bc9ad0(param_1,param_2,this,(uint *)0x0);
  return;
}


//// FUNCTION FUN_00bbde60 @ 00bbde60 ////

void __fastcall FUN_00bbde60(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0x1000;
  param_1[4] = 2;
  param_1[5] = 1;
  param_1[6] = 0x1000;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}


//// FUNCTION FUN_00bbde90 @ 00bbde90 ////

undefined4 * FUN_00bbde90(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe52b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x30);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CCodecDescriptor_WindowsACM_Constructor(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbdef0 @ 00bbdef0 ////

undefined4 * FUN_00bbdef0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe54b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x30);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CCodecDescriptor_WMA_Constructor(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbdfb0 @ 00bbdfb0 ////

void __fastcall FUN_00bbdfb0(undefined4 *param_1)

{
  param_1[3] = &PTR_LAB_00d9d9b4;
  param_1[1] = &PTR_LAB_00d9d9b4;
  *param_1 = &PTR_LAB_00d9e03c;
  return;
}


//// FUNCTION MPEG2LayerII_CreateCodecInstance @ 00bbdfd0 ////

int __thiscall MPEG2LayerII_CreateCodecInstance(void *this,int *param_1)

{
  undefined4 uVar1;
  int *this_00;
  uint uVar2;
  int iVar3;
  int *local_c0;
  undefined1 local_b9;
  undefined4 local_b8 [6];
  int local_a0 [6];
  undefined4 local_88 [13];
  int local_54;
  int local_50;
  int local_44;
  int local_40;
  short local_3c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe5ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bd58a0(local_88);
  local_4 = 0;
  uVar1 = FUN_00bd5db0(local_88,param_1);
  if (((char)uVar1 != '\0') && (local_3c == 0x50)) {
    Ctor_vt00d9f52c_00bd9de0(local_b8,param_1,local_44,local_40);
    local_4._0_1_ = 1;
    local_c0 = operator_new(0x1d4);
    local_4._0_1_ = 2;
    if (local_c0 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = MPEG2LayerII_CodecInstance_Constructor(local_c0,this);
    }
    local_4._0_1_ = 3;
    local_c0 = this_00;
    if (this_00 == (int *)0x0) {
      LH_Assert(&local_b9,"instance.IsValid ()\n");
      DebugBreak();
    }
    uVar2 = LH_ReadFileData(local_b8,this_00 + 1,0x28);
    if ((char)uVar2 == '\0') {
      local_4._0_1_ = 1;
      if (this_00 != (int *)0x0) {
        (**(code **)(*this_00 + 0x1c))();
      }
    }
    else if ((((*(short *)((int)this_00 + 0x16) == 2) && (this_00[6] != 0)) &&
             ((short)this_00[4] != 1)) && (this_00[2] != 0)) {
      Ctor_vt00d9f52c_00bd9de0(local_a0,param_1,local_54,local_50);
      local_4._0_1_ = 4;
      FUN_00be4570(this_00,local_a0);
      if (this_00[0x27] != 0) {
        iVar3 = FUN_00bbe4e0((int *)&local_c0);
        local_4._0_1_ = 3;
        Dtor_00bd9e50(local_a0);
        local_4._0_1_ = 1;
        FUN_00bbe4c0((int *)&local_c0);
        local_4 = (uint)local_4._1_3_ << 8;
        Dtor_00bd9e50(local_b8);
        local_4 = 0xffffffff;
        FUN_00bd5a40(local_88);
        ExceptionList = local_c;
        return iVar3;
      }
      local_4._0_1_ = 3;
      Dtor_00bd9e50(local_a0);
      local_4._0_1_ = 1;
      FUN_00bbe4c0((int *)&local_c0);
    }
    else {
      local_4._0_1_ = 1;
      (**(code **)(*this_00 + 0x1c))();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    Dtor_00bd9e50(local_b8);
  }
  local_4 = 0xffffffff;
  FUN_00bd5a40(local_88);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION CCodecDescriptor_MPEG2LayerII_Constructor @ 00bbe1f0 ////

undefined4 * __fastcall CCodecDescriptor_MPEG2LayerII_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe5e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9e0ac;
  param_1[1] = &PTR_LAB_00d9e058;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = &PTR_LAB_00d9e074;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  local_4 = 2;
  FUN_00bbfaa0(param_1 + 1,"wav");
  FUN_00bbfaa0(param_1 + 3,"MPEG2LayerII");
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00bbe270 @ 00bbe270 ////

undefined4 * FUN_00bbe270(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe5f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x30);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CCodecDescriptor_MPEG2LayerII_Constructor(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bbe2d0 @ 00bbe2d0 ////

void __fastcall FUN_00bbe2d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e03c;
  return;
}


//// FUNCTION FUN_00bbe330 @ 00bbe330 ////

void __fastcall FUN_00bbe330(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bbe340 @ 00bbe340 ////

void __fastcall FUN_00bbe340(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bbe3a0 @ 00bbe3a0 ////

void __fastcall FUN_00bbe3a0(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x1c))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbe420 @ 00bbe420 ////

undefined4 * __thiscall FUN_00bbe420(void *this,byte param_1)

{
  FUN_00bbe330(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbe4a0 @ 00bbe4a0 ////

undefined4 * __thiscall FUN_00bbe4a0(void *this,byte param_1)

{
  FUN_00bbe340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbe4c0 @ 00bbe4c0 ////

void __fastcall FUN_00bbe4c0(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x1c))();
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00bbe4e0 @ 00bbe4e0 ////

int __fastcall FUN_00bbe4e0(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe56b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteMe.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2e);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bbe5b0 @ 00bbe5b0 ////

undefined4 * __thiscall FUN_00bbe5b0(void *this,byte param_1)

{
  FUN_00bbdfb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bbe5d0 @ 00bbe5d0 ////

undefined4 * FUN_00bbe5d0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe61b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x30);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = CCodecDescriptor_OggVorbis_Constructor(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION LH_Assert @ 00bbe660 ////

void * __thiscall LH_Assert(void *this,LPCSTR param_1)

{
  if (DAT_010ced44 != (code *)0x0) {
    (*DAT_010ced44)(param_1);
    return this;
  }
  OutputDebugStringA(param_1);
  return this;
}


//// FUNCTION FUN_00bbe6a0 @ 00bbe6a0 ////

int * __thiscall FUN_00bbe6a0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 8))(param_1);
  return this;
}


//// FUNCTION Jenkins_Hash_Lookup2 @ 00bbe6d0 ////

uint __fastcall Jenkins_Hash_Lookup2(byte *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = 0x9e3779b9;
  uVar3 = 0x9e3779b9;
  uVar4 = param_2;
  uVar2 = param_3;
  if (0xb < param_2) {
    param_3 = param_2 / 0xc;
    do {
      iVar1 = param_1[4] + uVar5 + (uint)*(uint3 *)(param_1 + 5) * 0x100;
      uVar2 = param_1[8] + uVar2 + (uint)*(uint3 *)(param_1 + 9) * 0x100;
      uVar3 = ((*(int *)param_1 - uVar2) - iVar1) + uVar3 ^ uVar2 >> 0xd;
      uVar6 = (iVar1 - uVar2) - uVar3 ^ uVar3 << 8;
      uVar5 = (uVar2 - uVar6) - uVar3 ^ uVar6 >> 0xd;
      uVar2 = (uVar3 - uVar5) - uVar6 ^ uVar5 >> 0xc;
      uVar7 = (uVar6 - uVar5) - uVar2 ^ uVar2 << 0x10;
      uVar6 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 5;
      uVar3 = (uVar2 - uVar6) - uVar7 ^ uVar6 >> 3;
      uVar5 = (uVar7 - uVar6) - uVar3 ^ uVar3 << 10;
      uVar2 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xf;
      param_1 = param_1 + 0xc;
      uVar4 = uVar4 - 0xc;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  uVar2 = uVar2 + param_2;
  switch(uVar4) {
  case 0xb:
    uVar2 = uVar2 + (uint)param_1[10] * 0x1000000;
  case 10:
    uVar2 = uVar2 + (uint)param_1[9] * 0x10000;
  case 9:
    uVar2 = uVar2 + (uint)param_1[8] * 0x100;
  case 8:
    uVar5 = uVar5 + (uint)param_1[7] * 0x1000000;
  case 7:
    uVar5 = uVar5 + (uint)param_1[6] * 0x10000;
  case 6:
    uVar5 = uVar5 + (uint)param_1[5] * 0x100;
  case 5:
    uVar5 = uVar5 + param_1[4];
  case 4:
    uVar3 = uVar3 + (uint)param_1[3] * 0x1000000;
  case 3:
    uVar3 = uVar3 + (uint)param_1[2] * 0x10000;
  case 2:
    uVar3 = uVar3 + (uint)param_1[1] * 0x100;
  case 1:
    uVar3 = uVar3 + *param_1;
  default:
    uVar4 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
    uVar3 = (uVar5 - uVar2) - uVar4 ^ uVar4 << 8;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 << 10;
    return (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  }
}


//// FUNCTION FUN_00bbe930 @ 00bbe930 ////

int __thiscall FUN_00bbe930(void *this,uint param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint3 uVar4;
  uint unaff_retaddr;
  
  cVar1 = param_2;
  uVar2 = param_1;
  if (param_2 != '\0') {
    uVar2 = param_1 + 1;
  }
  iVar3 = (**(code **)(*(int *)this + 0x10))(uVar2,&param_2);
  uVar4 = (uint3)((uint)iVar3 >> 8);
  if (unaff_retaddr <= param_1) {
    return (uint)uVar4 << 8;
  }
  *(char *)(iVar3 + param_1) = cVar1;
  return CONCAT31(uVar4,1);
}


//// FUNCTION FUN_00bbe970 @ 00bbe970 ////

void FUN_00bbe970(undefined4 param_1)

{
  void *in_ECX;
  char local_40 [64];
  
  _sprintf(local_40,(char *)&param_2_00d1b93c,param_1);
  LH_LogErrorMessage(in_ECX,local_40);
  return;
}


//// FUNCTION FUN_00bbe9c0 @ 00bbe9c0 ////

void FUN_00bbe9c0(void)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe63b;
  local_c = ExceptionList;
  local_110 = &PTR_LAB_00d9db7c;
  local_10c = 0;
  local_d = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  LH_LogErrorMessage(&local_110,".\\PKStringsCString.cpp");
  LH_LogErrorMessage(&local_110,"(");
  FUN_00bbe970(0x23);
  LH_LogErrorMessage(&local_110,") : ");
  LH_LogErrorMessage(&local_110,"Run out of room");
  LH_LogErrorMessage(&local_110,"\n");
  pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
  LH_Assert(&local_111,pCVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION PKString_GetLength @ 00bbea70 ////

int __fastcall PKString_GetLength(int *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  LPCSTR pCVar4;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  char *pcStack_4;
  
  pcStack_4 = (char *)0xffffffff;
  puStack_8 = &LAB_00cfe650;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar3 = (char *)(**(code **)(*param_1 + 0xc))();
  if (pcVar3 == (char *)0x0) {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    pcStack_4 = pcVar3;
    LH_LogErrorMessage(&ppuStack_110,".\\PKStringsCString.cpp");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x306);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"Null c");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_111,pCVar4);
    DebugBreak();
  }
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  ExceptionList = pvStack_c;
  return (int)pcVar3 - (int)pcVar1;
}


//// FUNCTION FUN_00bbeb50 @ 00bbeb50 ////

void __thiscall FUN_00bbeb50(void *this,undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  LPCSTR pCVar3;
  uint uVar4;
  uint unaff_EBX;
  undefined4 *puVar5;
  undefined **ppuStack_118;
  undefined1 local_114 [255];
  undefined1 uStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cfe670;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = PKString_GetLength(this);
  uVar4 = param_2 + 1 + uVar1;
  iVar2 = (**(code **)(*(int *)this + 0x10))(uVar4,local_114);
  if (unaff_EBX < uVar4) {
    FUN_00bbe9c0();
    if (unaff_EBX < uVar1) {
      ppuStack_118 = &PTR_LAB_00d9db7c;
      local_114[0] = 0;
      uStack_15 = 0;
      pvStack_c = (void *)0x0;
      LH_LogErrorMessage(&ppuStack_118,".\\PKStringsCString.cpp");
      LH_LogErrorMessage(&ppuStack_118,"(");
      FUN_00bbe970(0x49);
      LH_LogErrorMessage(&ppuStack_118,") : ");
      LH_LogErrorMessage(&ppuStack_118,"Not enough room to store what we currently have?");
      LH_LogErrorMessage(&ppuStack_118,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
      LH_Assert(&stack0xfffffee3,pCVar3);
      pvStack_c = (void *)0xffffffff;
      DebugBreak();
    }
    param_2 = unaff_EBX - uVar1;
  }
  if (iVar2 == 0) {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    local_114[0] = 0;
    uStack_15 = 0;
    pvStack_c = (void *)0x1;
    LH_LogErrorMessage(&ppuStack_118,".\\PKStringsCString.cpp");
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x4c);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Null c");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffee3,pCVar3);
    DebugBreak();
  }
  if (param_2 != 0) {
    puVar5 = (undefined4 *)(iVar2 + uVar1);
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = *puStack_4;
      puStack_4 = puStack_4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puStack_4;
      puStack_4 = (undefined4 *)((int)puStack_4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(undefined1 *)((int)(iVar2 + uVar1) + param_2) = 0;
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION LH_LogErrorMessage @ 00bbed20 ////

void __thiscall LH_LogErrorMessage(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00bbeb50(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
    return;
  }
  FUN_00bbeb50(this,0,0);
  return;
}


//// FUNCTION FUN_00bbed60 @ 00bbed60 ////

int __thiscall FUN_00bbed60(void *this,int *param_1)

{
  int iVar1;
  void *local_4;
  
  local_4 = this;
  iVar1 = PKString_GetLength(this);
  *param_1 = iVar1;
  iVar1 = (**(code **)(*(int *)this + 0x10))(iVar1);
  if (&stack0x00000000 == (undefined1 *)0x4) {
    return 0;
  }
  if (iVar1 == 0) {
    LH_Assert(&local_4,"c != NULL\n");
    DebugBreak();
  }
  return iVar1;
}


//// FUNCTION FUN_00bbee10 @ 00bbee10 ////

void __thiscall FUN_00bbee10(void *this,char param_1)

{
  char *pcVar1;
  char *_Dst;
  char *_Src;
  int iVar2;
  void *local_4;
  
  local_4 = this;
  _Dst = (char *)FUN_00bbed60(this,(int *)&local_4);
  if ((_Dst != (char *)0x0) && (_Src = _Dst, param_1 == *_Dst)) {
    do {
      pcVar1 = _Src + 1;
      _Src = _Src + 1;
    } while (param_1 == *pcVar1);
    if (_Src != _Dst) {
      iVar2 = (int)local_4 - (int)_Src;
      _memmove(_Dst,_Src,(size_t)(_Dst + iVar2));
      (_Dst + iVar2)[(int)_Dst] = '\0';
    }
  }
  return;
}


//// FUNCTION FUN_00bbf120 @ 00bbf120 ////

int * __thiscall FUN_00bbf120(void *this,undefined4 param_1,int param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  size_t _Size;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_ESI;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *unaff_retaddr;
  int *local_4;
  
  local_4 = this;
  piVar2 = (int *)PKString_GetLength(this);
  if ((param_2 != 0) && (param_3 != 0)) {
    piVar6 = (int *)((int)piVar2 + param_3);
    iVar3 = (**(code **)(*(int *)this + 0x10))(piVar6,&local_4);
    if (unaff_ESI < piVar6) {
      FUN_00bbe9c0();
    }
    if ((int)unaff_ESI < (int)piVar6) {
      piVar6 = unaff_ESI;
    }
    piVar7 = local_4;
    if ((int)local_4 < 0) {
      piVar7 = (int *)0x0;
    }
    if ((((int)piVar7 <= (int)piVar2) && (bVar1 = (int)piVar7 < (int)piVar2, piVar2 = piVar7, bVar1)
        ) && (_Size = (int)unaff_ESI + (-param_3 - (int)piVar7), 0 < (int)_Size)) {
      _memmove((void *)(iVar3 + (int)piVar7 + param_3),(void *)(iVar3 + (int)piVar7),_Size);
    }
    uVar5 = (int)unaff_ESI - (int)piVar2;
    if ((int)param_3 < (int)unaff_ESI - (int)piVar2) {
      uVar5 = param_3;
    }
    if (uVar5 != 0) {
      puVar8 = (undefined4 *)((int)piVar2 + iVar3);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *unaff_retaddr;
        unaff_retaddr = unaff_retaddr + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)unaff_retaddr;
        unaff_retaddr = (undefined4 *)((int)unaff_retaddr + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    *(undefined1 *)(iVar3 + (int)piVar6) = 0;
    return piVar6;
  }
  return piVar2;
}


//// FUNCTION FUN_00bbf1f0 @ 00bbf1f0 ////

int __thiscall FUN_00bbf1f0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  if (param_2 < 0) {
    iVar4 = 0;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  iVar1 = PKString_GetLength(this);
  if ((param_1 < iVar1) && (iVar4 != 0)) {
    iVar3 = iVar1 - param_1;
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
    iVar2 = FUN_00bbed60(this,&param_2);
    if (iVar2 == 0) {
      LH_Assert(&param_2,"buffer != NULL\n");
      DebugBreak();
    }
    if (0 < iVar3 - iVar4) {
      _memmove((void *)(param_1 + iVar2),(void *)(param_1 + iVar2 + iVar4),iVar3 - iVar4);
    }
    iVar1 = iVar1 - iVar4;
    *(undefined1 *)(iVar1 + iVar2) = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00bbf290 @ 00bbf290 ////

void __fastcall FUN_00bbf290(void *param_1)

{
  FUN_00bbeb50(param_1,&stack0x00000004,1);
  return;
}


//// FUNCTION LH_PrintResourceID @ 00bbf2a0 ////

void __thiscall LH_PrintResourceID(void *this,undefined4 param_1)

{
  char local_40 [64];
  
  _sprintf(local_40,"%u",param_1);
  LH_LogErrorMessage(this,local_40);
  return;
}


//// FUNCTION FUN_00bbf2d0 @ 00bbf2d0 ////

void __thiscall FUN_00bbf2d0(void *this,float param_1)

{
  char local_40 [64];
  
  _sprintf(local_40,"%.2f",(double)param_1);
  LH_LogErrorMessage(this,local_40);
  return;
}


//// FUNCTION FUN_00bbf310 @ 00bbf310 ////

void __thiscall FUN_00bbf310(void *this,undefined4 param_1)

{
  char local_40 [64];
  
  _sprintf(local_40,"%p",param_1);
  LH_LogErrorMessage(this,local_40);
  return;
}


//// FUNCTION FUN_00bbf340 @ 00bbf340 ////

void __thiscall FUN_00bbf340(void *this,char param_1)

{
  char *pcVar1;
  
  pcVar1 = "True";
  if (param_1 == '\0') {
    pcVar1 = "False";
  }
  LH_LogErrorMessage(this,pcVar1);
  return;
}


//// FUNCTION FUN_00bbf360 @ 00bbf360 ////

void __fastcall FUN_00bbf360(void *param_1)

{
  LPCSTR pCVar1;
  void *local_4;
  
  local_4 = param_1;
  pCVar1 = (LPCSTR)FUN_00bbed60(param_1,(int *)&local_4);
  if (pCVar1 != (LPCSTR)0x0) {
    FUN_00c9c3dc(pCVar1);
  }
  return;
}


//// FUNCTION FUN_00bbf3a0 @ 00bbf3a0 ////

int __fastcall FUN_00bbf3a0(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe685;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 == 0) {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    uStack_4 = 0;
    LH_LogErrorMessage(&ppuStack_110,".\\PKStringsCString.cpp");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x1d);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"Null c");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_111,pCVar2);
    DebugBreak();
  }
  ExceptionList = pvStack_c;
  return iVar1;
}


//// FUNCTION FUN_00bbf470 @ 00bbf470 ////

bool __fastcall FUN_00bbf470(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00bbf3a0(param_1);
  return *pcVar1 == '\0';
}


//// FUNCTION FUN_00bbf490 @ 00bbf490 ////

int __thiscall FUN_00bbf490(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar2 - (int)(param_1 + 1) != 0) {
    iVar4 = 0;
    puVar3 = (uint *)FUN_00bbf3a0(this);
    while (((puVar3 != (uint *)0x0 && ((char)*puVar3 != '\0')) &&
           (puVar3 = FUN_00ace080(puVar3,param_1), puVar3 != (uint *)0x0))) {
      iVar4 = iVar4 + 1;
      puVar3 = (uint *)((int)puVar3 + ((int)pcVar2 - (int)(param_1 + 1)));
    }
    return iVar4;
  }
  return 0;
}


//// FUNCTION FUN_00bbf4f0 @ 00bbf4f0 ////

void __thiscall FUN_00bbf4f0(void *this,undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  PKString_GetLength(this);
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00bbf120(this,param_1,(int)param_2,(int)pcVar2 - (int)(param_2 + 1));
  }
  return;
}


//// FUNCTION FUN_00bbf530 @ 00bbf530 ////

int __thiscall FUN_00bbf530(void *this,char param_1)

{
  char *_Str;
  char *pcVar1;
  
  _Str = (char *)FUN_00bbf3a0(this);
  pcVar1 = _strrchr(_Str,(int)param_1);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  return (int)pcVar1 - (int)_Str;
}


//// FUNCTION FUN_00bbf560 @ 00bbf560 ////

int __thiscall FUN_00bbf560(void *this,char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  iVar1 = PKString_GetLength(this);
  iVar2 = FUN_00bbf3a0(this);
  if (param_2 < iVar1) {
    puVar3 = FUN_00acecd0((uint *)(iVar2 + param_2),param_1);
    if (puVar3 != (uint *)0x0) {
      return (int)puVar3 - iVar2;
    }
  }
  return -1;
}


//// FUNCTION FUN_00bbf610 @ 00bbf610 ////

int __thiscall FUN_00bbf610(void *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_1 + 1) {
      iVar3 = PKString_GetLength(this);
      if (param_2 <= iVar3) {
        iVar3 = FUN_00bbf3a0(this);
        puVar4 = FUN_00ace080((uint *)(iVar3 + param_2),param_1);
        if (puVar4 != (uint *)0x0) {
          return (int)puVar4 - iVar3;
        }
      }
      return -1;
    }
  }
  return -1;
}


//// FUNCTION FUN_00bbf680 @ 00bbf680 ////

int __thiscall FUN_00bbf680(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = param_1;
  if (param_1 == (byte *)0x0) {
    LH_Assert(&param_1,"Value != NULL\n");
    DebugBreak();
  }
  pbVar2 = (byte *)FUN_00bbf3a0(this);
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}


//// FUNCTION FUN_00bbf6e0 @ 00bbf6e0 ////

void __thiscall FUN_00bbf6e0(void *this,char *param_1)

{
  char *_Str1;
  char *_Str2;
  
  _Str2 = param_1;
  if (param_1 == (char *)0x0) {
    LH_Assert(&param_1,"Value != NULL\n");
    DebugBreak();
  }
  _Str1 = (char *)FUN_00bbf3a0(this);
  __stricmp(_Str1,_Str2);
  return;
}


//// FUNCTION FUN_00bbf720 @ 00bbf720 ////

void __thiscall FUN_00bbf720(void *this,uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = PKString_GetLength(this);
  pbVar2 = (byte *)FUN_00bbf3a0(this);
  Jenkins_Hash_Lookup2(pbVar2,uVar1,param_1);
  return;
}


//// FUNCTION FUN_00bbf750 @ 00bbf750 ////

void __thiscall FUN_00bbf750(void *this,int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00bbf3a0(param_1);
  LH_LogErrorMessage(this,pcVar1);
  return;
}


//// FUNCTION FUN_00bbf990 @ 00bbf990 ////

void __thiscall FUN_00bbf990(void *this,undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  LPCSTR pCVar2;
  uint uVar3;
  uint unaff_EBX;
  undefined4 *puVar4;
  undefined **ppuStack_118;
  undefined1 local_114 [255];
  undefined1 uStack_15;
  void *pvStack_14;
  undefined4 *puStack_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cfe6c4;
  puStack_c = ExceptionList;
  ExceptionList = &puStack_c;
  puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0x10))(param_2,local_114);
  if (unaff_EBX < param_2) {
    FUN_00bbe9c0();
    param_2 = unaff_EBX;
  }
  if (puVar1 == (undefined4 *)0x0) {
    ppuStack_118 = &PTR_LAB_00d9db7c;
    local_114[0] = 0;
    uStack_15 = 0;
    puStack_c = puVar1;
    LH_LogErrorMessage(&ppuStack_118,".\\PKStringsCString.cpp");
    LH_LogErrorMessage(&ppuStack_118,"(");
    FUN_00bbe970(0x342);
    LH_LogErrorMessage(&ppuStack_118,") : ");
    LH_LogErrorMessage(&ppuStack_118,"Null c");
    LH_LogErrorMessage(&ppuStack_118,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
    LH_Assert(&stack0xfffffee3,pCVar2);
    DebugBreak();
  }
  if (param_2 != 0) {
    puVar4 = puVar1;
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *puStack_4;
      puStack_4 = puStack_4 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puStack_4;
      puStack_4 = (undefined4 *)((int)puStack_4 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(undefined1 *)((int)puVar1 + param_2) = 0;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00bbfaa0 @ 00bbfaa0 ////

void __thiscall FUN_00bbfaa0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00bbf990(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
    return;
  }
  FUN_00bbf990(this,0,0);
  return;
}


//// FUNCTION FUN_00bbfb30 @ 00bbfb30 ////

int * __thiscall FUN_00bbfb30(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  iVar1 = PKString_GetLength(this);
  if (iVar1 <= (int)param_1) {
    (**(code **)(*param_2 + 8))(this);
    return param_2;
  }
  uVar3 = param_1;
  iVar2 = FUN_00bbf3a0(this);
  FUN_00bbf990(param_2,iVar2 + (iVar1 - param_1),uVar3);
  return param_2;
}


//// FUNCTION FUN_00bbfb80 @ 00bbfb80 ////

int * __thiscall FUN_00bbfb80(void *this,int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1;
  if (param_1 < 0) {
    iVar5 = 0;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = 0;
  }
  uVar2 = PKString_GetLength(this);
  if ((int)uVar2 < (int)(iVar5 + uVar4)) {
    uVar4 = uVar2 - iVar5;
  }
  if ((int)uVar2 < iVar5) {
    uVar4 = 0;
  }
  if (iVar5 < 0) {
    LH_Assert(&param_1,"First >= 0\n");
    DebugBreak();
  }
  if ((int)uVar2 < (int)(iVar5 + uVar4)) {
    LH_Assert(&param_1,"First + Count <= length\n");
    DebugBreak();
  }
  piVar1 = param_3;
  if ((iVar5 == 0) && (uVar4 == uVar2)) {
    (**(code **)(*param_3 + 8))(this);
    return piVar1;
  }
  iVar3 = FUN_00bbf3a0(this);
  piVar1 = param_3;
  FUN_00bbf990(param_3,iVar3 + iVar5,uVar4);
  return piVar1;
}


//// FUNCTION FUN_00bbfc30 @ 00bbfc30 ////

int __thiscall FUN_00bbfc30(void *this,char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  void *_Src;
  void *_Dst;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int unaff_EBX;
  size_t _Size;
  uint *puVar10;
  uint *puVar11;
  uint *unaff_retaddr;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  int iStack_10;
  char *local_c;
  int local_8;
  char *pcStack_4;
  
  iVar4 = FUN_00bbf490(this,param_1);
  if (iVar4 == 0) {
    return 0;
  }
  pcVar5 = (char *)FUN_00bbf3a0(this);
  pcVar1 = pcVar5 + 1;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  local_c = param_1 + 1;
  do {
    cVar3 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar3 != '\0');
  local_c = (char *)((int)param_1 - (int)local_c);
  if (param_2 == (char *)0x0) {
    local_14 = 0;
  }
  else {
    pcVar2 = param_2 + 1;
    do {
      cVar3 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar3 != '\0');
    local_14 = (int)param_2 - (int)pcVar2;
  }
  local_8 = local_14 - (int)local_c;
  pcVar5 = pcVar5 + (local_8 * iVar4 - (int)pcVar1);
  if ((int)pcVar5 < 0) {
    LH_Assert((void *)((int)&uStack_1c + 3),"newLength >= 0\n");
    DebugBreak();
  }
  if (pcVar5 == (char *)0x0) {
    FUN_00bbf990(this,0,0);
    return iVar4;
  }
  puVar6 = (uint *)(**(code **)(*(int *)this + 0x10))(pcVar5,&local_18);
  if (unaff_EBX < (int)pcVar5) {
    FUN_00bbe9c0();
  }
  if (unaff_EBX == 0) {
    return 0;
  }
  if (puVar6 == (uint *)0x0) {
    LH_Assert(&stack0xffffffdf,"start != NULL\n");
    DebugBreak();
  }
  local_c = (char *)(unaff_EBX + (int)puVar6);
  puVar7 = puVar6;
  do {
    uVar8 = *puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
  } while ((char)uVar8 != '\0');
  puVar7 = (uint *)(((int)puVar7 - (int)((int)puVar6 + 1)) + (int)puVar6);
  local_18 = 0;
  cVar3 = (char)*puVar6;
  while (cVar3 != '\0') {
    puVar6 = FUN_00ace080(puVar6,pcStack_4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = puVar7;
      if ((char)*puVar7 != '\0') {
        LH_Assert(&stack0xffffffdf,"*c == 0\n");
        DebugBreak();
      }
    }
    else {
      _Src = (void *)((int)puVar6 + local_14);
      local_18 = local_18 + 1;
      if (iStack_10 != 0) {
        _Size = (int)puVar7 - (int)_Src;
        _Dst = (void *)((int)_Src + iStack_10);
        if (0 < (int)_Size) {
          _memmove(_Dst,_Src,_Size);
          puVar7 = (uint *)(_Size + (int)_Dst);
        }
        *(char *)puVar7 = '\0';
      }
      if (uStack_1c != 0) {
        uVar8 = (int)local_c - (int)puVar6;
        if ((int)uStack_1c <= (int)local_c - (int)puVar6) {
          uVar8 = uStack_1c;
        }
        puVar10 = unaff_retaddr;
        puVar11 = puVar6;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(char *)puVar11 = (char)*puVar10;
          puVar10 = (uint *)((int)puVar10 + 1);
          puVar11 = (uint *)((int)puVar11 + 1);
        }
        puVar6 = (uint *)((int)puVar6 + uVar8);
      }
    }
    cVar3 = (char)*puVar6;
  }
  return local_18;
}


//// FUNCTION FUN_00bbfe10 @ 00bbfe10 ////

void __thiscall FUN_00bbfe10(void *this,int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = PKString_GetLength(this);
  FUN_00bbfb80(this,param_1,iVar1 - param_1,param_2);
  return;
}


//// FUNCTION FUN_00bbfe40 @ 00bbfe40 ////

void __thiscall FUN_00bbfe40(void *this,int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_00bbf3a0(param_1);
  FUN_00bbfaa0(this,pcVar1);
  return;
}


//// FUNCTION LH_Archive_SerializeString @ 00bbfe60 ////

bool __fastcall LH_Archive_SerializeString(int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  char *_Memory;
  LPCSTR pCVar3;
  int iVar4;
  int unaff_EDI;
  int local_11c;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  void *pvStack_14;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  char *local_4;
  
  local_4 = (char *)0xffffffff;
  puStack_8 = &LAB_00cfe6d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    cVar2 = LH_Archive_TransferU32(param_1);
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return false;
    }
    if (local_11c != 0) {
      _Memory = operator_new(local_11c + 1);
      if (_Memory == (char *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = _Memory;
        LH_LogErrorMessage(&local_110,".\\PKStringsCString.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x31d);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar3);
        local_4 = (char *)0xffffffff;
        DebugBreak();
      }
      cVar2 = LH_Archive_Transfer(param_1);
      if (cVar2 != '\0') {
        _Memory[unaff_EDI] = '\0';
        FUN_00bbfaa0(param_2,_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    FUN_00bbfaa0(param_2,"");
  }
  else {
    iVar4 = PKString_GetLength(param_2);
    cVar2 = LH_Archive_TransferU32(param_1);
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return false;
    }
    if (iVar4 != 0) {
      FUN_00bbf3a0(param_2);
      cVar2 = LH_Archive_Transfer(param_1);
      ExceptionList = pvStack_14;
      return cVar2 != '\0';
    }
  }
  ExceptionList = local_c;
  return true;
}


//// FUNCTION FUN_00bc0060 @ 00bc0060 ////

uint __thiscall
FUN_00bc0060(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    return in_EAX & 0xffffff00;
  }
  iVar2 = (**(code **)(*(int *)this + 8))();
  if (iVar2 != 1) {
    LH_Assert(&param_2,"GetBlockSize () == 1\n");
    DebugBreak();
  }
  uVar3 = (**(code **)(*(int *)this + 4))(param_1,iVar1,iVar1,param_3,param_4,param_5);
  return uVar3;
}


//// FUNCTION SetVtable_00d9d9b4_00bc00d0 @ 00bc00d0 ////

void __fastcall SetVtable_00d9d9b4_00bc00d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00bc00f0 @ 00bc00f0 ////

int __thiscall FUN_00bc00f0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x18))();
  *param_2 = uVar1;
  return *(int *)((int)this + 4);
}


//// FUNCTION Ctor_vt00d9e214_00bc0130 @ 00bc0130 ////

undefined4 * __thiscall Ctor_vt00d9e214_00bc0130(void *this,int param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe6f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00d9e214;
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  if ((param_2 == 0) || (param_1 == 0)) {
    LH_Assert(&param_1,"( BufferSize > 0 ) && ( Buffer != NULL )\n");
    DebugBreak();
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION Ctor_vt00d9e214_00bc01a0 @ 00bc01a0 ////

undefined4 * __fastcall Ctor_vt00d9e214_00bc01a0(undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_115;
  undefined4 *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d9e214;
  local_110 = &PTR_LAB_00d9db7c;
  local_10c = 0;
  local_d = 0;
  local_4 = 1;
  local_114 = param_1;
  LH_LogErrorMessage(&local_110,".\\PKStringsCBufferString.cpp");
  LH_LogErrorMessage(&local_110,"(");
  FUN_00bbe970(0xd);
  LH_LogErrorMessage(&local_110,") : ");
  LH_LogErrorMessage(&local_110,"This should not be called!");
  LH_LogErrorMessage(&local_110,"\n");
  pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
  LH_Assert(&local_115,pCVar1);
  DebugBreak();
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bc0270 @ 00bc0270 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0270(void *this,byte param_1)

{
  SetVtable_00d9d9b4_00bc00d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc02a0 @ 00bc02a0 ////

void __thiscall FUN_00bc02a0(void *this,void *param_1)

{
  undefined4 *puVar1;
  
  FUN_00bbfaa0(param_1,"");
  LH_LogErrorMessage(param_1,"CUSTOM(");
  puVar1 = (undefined4 *)FUN_00bd0170((int)this);
  LH_PrintResourceID(param_1,*puVar1);
  LH_LogErrorMessage(param_1,")");
  return;
}


//// FUNCTION FUN_00bc02f0 @ 00bc02f0 ////

undefined4 * FUN_00bc02f0(int *param_1)

{
  undefined4 *this;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe73b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x44);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = Ctor_vt00da119c_00be66a0(local_10);
  }
  local_4 = 0xffffffff;
  if (this == (undefined4 *)0x0) {
    LH_Assert(&local_11,"resource != NULL\n");
    DebugBreak();
  }
  FUN_00be6700(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bc0370 @ 00bc0370 ////

undefined4 * __thiscall FUN_00bc0370(void *this,undefined4 param_1)

{
  undefined4 *this_00;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe750;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x3c);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = Ctor_vt00da11d8_00be67e0(local_10);
  }
  local_4 = 0xffffffff;
  if (this_00 == (undefined4 *)0x0) {
    LH_Assert(&local_11,"atmosGroup != NULL\n");
    DebugBreak();
  }
  FUN_00be68e0(this_00,this,param_1);
  ExceptionList = local_c;
  return this_00;
}


//// FUNCTION FUN_00bc0400 @ 00bc0400 ////

undefined4 * FUN_00bc0400(int *param_1)

{
  undefined4 *this;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe765;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x44);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = Ctor_vt00da11f4_00be69a0(local_10);
  }
  local_4 = 0xffffffff;
  if (this == (undefined4 *)0x0) {
    LH_Assert(&local_11,"resource != NULL\n");
    DebugBreak();
  }
  FUN_00be6a10(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bc0480 @ 00bc0480 ////

undefined4 * FUN_00bc0480(undefined4 *param_1)

{
  undefined4 *this;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe77a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x48);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = Ctor_vt00da1258_00be6d90(local_10);
  }
  local_4 = 0xffffffff;
  if (this == (undefined4 *)0x0) {
    LH_Assert(&local_11,"driver != NULL\n");
    DebugBreak();
  }
  FUN_00be6e70(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bc0510 @ 00bc0510 ////

int __fastcall FUN_00bc0510(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = RedBlackTree_GetMaxObject((undefined4 *)(param_1 + 0x48));
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00be7050(iVar1);
    return *piVar2 + 1;
  }
  return 0;
}


//// FUNCTION FUN_00bc0530 @ 00bc0530 ////

int __fastcall FUN_00bc0530(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = RedBlackTree_GetMaxObject((undefined4 *)(param_1 + 0x54));
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00be8740(iVar1);
    return *piVar2 + 1;
  }
  return 0;
}


//// FUNCTION Dtor_00bc0550 @ 00bc0550 ////

void __fastcall Dtor_00bc0550(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfe7ad;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d9e390;
  local_4 = 3;
  FUN_00bc3a00(*(void **)(param_1[1] + 0x48),(int)param_1);
  piVar1 = (int *)RedBlackTree_GetMinObject(param_1 + 0x18);
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
    piVar1 = (int *)RedBlackTree_GetMinObject(param_1 + 0x18);
  }
  piVar1 = (int *)RedBlackTree_GetMinObject(param_1 + 0x12);
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x90))(1);
    piVar1 = (int *)RedBlackTree_GetMinObject(param_1 + 0x12);
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  param_1[0x17] = &PTR_LAB_00d9e368;
  RedBlackTree_Dtor(param_1 + 0x18);
  local_4._0_1_ = 1;
  param_1[0x14] = &PTR_LAB_00d9e340;
  RedBlackTree_Dtor(param_1 + 0x15);
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x11] = &PTR_LAB_00d9e318;
  RedBlackTree_Dtor(param_1 + 0x12);
  local_4 = 0xffffffff;
  Dtor_00bd03b0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Ctor_vt00d9e390_00bc0690 @ 00bc0690 ////

undefined4 * __thiscall Ctor_vt00d9e390_00bc0690(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe7d5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9f0a4_00bd0220(this,param_1,param_2);
  *(undefined ***)this = &PTR_LAB_00d9e390;
  local_4 = 0;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_00d9e318;
  RedBlackTree_Ctor((int *)((int)this + 0x48));
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_00d9e3b8;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d9e340;
  RedBlackTree_Ctor((int *)((int)this + 0x54));
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d9e3e0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_00d9e368;
  RedBlackTree_Ctor((int *)((int)this + 0x60));
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_00d9e408;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bc0730 @ 00bc0730 ////

int * __fastcall FUN_00bc0730(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bc0750 @ 00bc0750 ////

int * __fastcall FUN_00bc0750(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bc0770 @ 00bc0770 ////

int * __fastcall FUN_00bc0770(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION Dtor_00bc0960 @ 00bc0960 ////

void __fastcall Dtor_00bc0960(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e318;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc09e0 @ 00bc09e0 ////

void __fastcall Dtor_00bc09e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e340;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc0a60 @ 00bc0a60 ////

void __fastcall Dtor_00bc0a60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e368;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Ctor_vt00d9e318_00bc0b30 @ 00bc0b30 ////

undefined4 * __fastcall Ctor_vt00d9e318_00bc0b30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e318;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00d9e340_00bc0b50 @ 00bc0b50 ////

undefined4 * __fastcall Ctor_vt00d9e340_00bc0b50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e340;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00d9e368_00bc0b70 @ 00bc0b70 ////

undefined4 * __fastcall Ctor_vt00d9e368_00bc0b70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e368;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bc0b90 @ 00bc0b90 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0b90(void *this,byte param_1)

{
  Dtor_00bc0960(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc0bb0 @ 00bc0bb0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0bb0(void *this,byte param_1)

{
  Dtor_00bc09e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc0bd0 @ 00bc0bd0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0bd0(void *this,byte param_1)

{
  Dtor_00bc0a60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bc0bf0 @ 00bc0bf0 ////

void __fastcall Dtor_00bc0bf0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e318;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc0c20 @ 00bc0c20 ////

void __fastcall Dtor_00bc0c20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e340;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc0c50 @ 00bc0c50 ////

void __fastcall Dtor_00bc0c50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e368;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bc0c80 @ 00bc0c80 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0c80(void *this,byte param_1)

{
  Dtor_00bc0550(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00d9e3b8_00bc0ca0 @ 00bc0ca0 ////

undefined4 * __fastcall Ctor_vt00d9e3b8_00bc0ca0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e318;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9e3b8;
  return param_1;
}


//// FUNCTION Ctor_vt00d9e3e0_00bc0cc0 @ 00bc0cc0 ////

undefined4 * __fastcall Ctor_vt00d9e3e0_00bc0cc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e340;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9e3e0;
  return param_1;
}


//// FUNCTION Ctor_vt00d9e408_00bc0ce0 @ 00bc0ce0 ////

undefined4 * __fastcall Ctor_vt00d9e408_00bc0ce0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e368;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9e408;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bc0d00 @ 00bc0d00 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0d00(void *this,byte param_1)

{
  Dtor_00bc0bf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc0d20 @ 00bc0d20 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0d20(void *this,byte param_1)

{
  Dtor_00bc0c20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc0d40 @ 00bc0d40 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0d40(void *this,byte param_1)

{
  Dtor_00bc0c50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00d9e430_00bc0d70 @ 00bc0d70 ////

undefined4 * __thiscall Ctor_vt00d9e430_00bc0d70(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9f0d8_00bd05c0(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00d9e430;
  Ctor_vt00da150c_00be9f30((undefined4 *)((int)this + 0x9c));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bc0de0 @ 00bc0de0 ////

bool __thiscall FUN_00bc0de0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined **local_1c [2];
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe802;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)std__String__Constructor(local_1c,param_1);
  local_4._0_1_ = 1;
  FUN_00bea010((int *)((int)this + 0x9c),*(int **)(*(int *)((int)this + 4) + 0x70),piVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  local_1c[0] = &PTR_LAB_00d9d9b4;
  iVar2 = (**(code **)(*(int *)((int)this + 0x9c) + 8))();
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return iVar2 != 0;
}


//// FUNCTION FUN_00bc0e80 @ 00bc0e80 ////

uint __thiscall FUN_00bc0e80(void *this,undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)LH_SortedArray_FindObject_00bc1130((void *)((int)this + 0x5c),&param_1);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 0x14))();
    if (uVar3 <= param_3) {
      iVar1 = *(int *)((int)this + 0x9c);
      uVar4 = (**(code **)(*piVar2 + 0x14))();
      uVar3 = (**(code **)(iVar1 + 4))(param_2,piVar2[6],uVar4);
      return uVar3;
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00bc0ee0 @ 00bc0ee0 ////

uint __thiscall
FUN_00bc0ee0(void *this,undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar2 = (int *)LH_SortedArray_FindObject_00bc1130((void *)((int)this + 0x5c),&param_1);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 0x14))();
    if (uVar3 <= param_3) {
      pvVar6 = (void *)((int)this + 0x9c);
      iVar4 = (**(code **)(*piVar2 + 0x14))();
      cVar1 = FUN_00be9f00(pvVar6,piVar2[6],iVar4);
      uVar3 = CONCAT31(extraout_var,cVar1);
      if (cVar1 != '\0') {
        iVar4 = GetField_8_00be9ef0((int)pvVar6);
        if (iVar4 == 0) {
          LH_Assert(&param_1,"File.GetFile () != NULL\n");
          DebugBreak();
        }
        uVar7 = param_2;
        uVar8 = param_4;
        uVar9 = param_5;
        iVar5 = (**(code **)(*piVar2 + 0x14))();
        iVar4 = piVar2[6];
        pvVar6 = (void *)GetField_8_00be9ef0((int)pvVar6);
        uVar3 = FUN_00bc0060(pvVar6,iVar4,iVar5,uVar7,uVar8,uVar9);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION LH_Array_GetAt_00bc0f80 @ 00bc0f80 ////

undefined4 __thiscall LH_Array_GetAt_00bc0f80(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    return *(undefined4 *)(*(int *)this + uVar1 * 4);
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}


//// FUNCTION ScalarDeletingDtor_00bc0fe0 @ 00bc0fe0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc0fe0(void *this,byte param_1)

{
  Dtor_00bc1000(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bc1000 @ 00bc1000 ////

void __fastcall Dtor_00bc1000(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe818;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Dtor_00bea140(param_1 + 0x27);
  local_4 = 0xffffffff;
  Dtor_00bd0670(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION LH_SortedArray_FindIndex_00bc1050 @ 00bc1050 ////

int __thiscall LH_SortedArray_FindIndex_00bc1050(void *this,uint *param_1,undefined1 *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 8) + -1;
  iVar4 = 0;
  local_4 = this;
  if (-1 < iVar3) {
    do {
      iVar5 = (iVar3 + iVar4) / 2;
      iVar1 = *(int *)(*local_4 + iVar5 * 4);
      if (iVar1 == 0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
      }
      puVar2 = (uint *)FUN_00be8740(iVar1);
      if (*param_1 < *puVar2) {
        iVar3 = iVar5 + -1;
      }
      else {
        if (*param_1 <= *puVar2) {
          *param_2 = 1;
          return iVar5;
        }
        iVar4 = iVar5 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  iVar4 = (iVar3 + iVar4) / 2;
  iVar3 = *(int *)(*local_4 + iVar4 * 4);
  if (iVar3 == 0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  puVar2 = (uint *)FUN_00be8740(iVar3);
  if (*puVar2 <= *param_1) {
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


//// FUNCTION LH_SortedArray_FindObject_00bc1130 @ 00bc1130 ////

int __thiscall LH_SortedArray_FindObject_00bc1130(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = LH_SortedArray_FindIndex_00bc1050(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = LH_Array_GetAt_00bc0f80(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION Ctor_vt00d9e4c4_00bc11b0 @ 00bc11b0 ////

undefined4 * __thiscall Ctor_vt00d9e4c4_00bc11b0(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Ctor_vt00d9f0d8_00bd05c0(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00d9e4c4;
  Ctor_vt00d9e4b0_00bc12f0((void *)((int)this + 0x9c),0);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00bc1220 @ 00bc1220 ////

bool __thiscall FUN_00bc1220(void *this,undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)LH_SortedArray_FindObject_00bc1130((void *)((int)this + 0x5c),&param_1);
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar3 + 0x14))();
    if (param_3 <= uVar4) {
      iVar1 = *(int *)((int)this + 0x9c);
      uVar5 = (**(code **)(*piVar3 + 0x14))();
      cVar2 = (**(code **)(iVar1 + 4))(param_2,piVar3[6],uVar5);
      return cVar2 != '\0';
    }
  }
  return false;
}


//// FUNCTION Dtor_00bc1280 @ 00bc1280 ////

void __fastcall Dtor_00bc1280(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d9e4b0;
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  PKDataReadCAccess_Dtor(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00bc12c0 @ 00bc12c0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc12c0(void *this,byte param_1)

{
  Dtor_00bc1280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Ctor_vt00d9e4b0_00bc12f0 @ 00bc12f0 ////

undefined4 * __thiscall Ctor_vt00d9e4b0_00bc12f0(void *this,uint param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe843;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bce860(this);
  *(undefined ***)this = &PTR_FUN_00d9e4b0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 1;
  FUN_00bbc1d0((undefined4 *)((int)this + 8),param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc1350 @ 00bc1350 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc1350(void *this,byte param_1)

{
  Dtor_00bc1370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bc1370 @ 00bc1370 ////

void __fastcall Dtor_00bc1370(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[0x27] = &PTR_FUN_00d9e4b0;
  local_4 = 0;
  if ((void *)param_1[0x29] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x29]);
  }
  PKDataReadCAccess_Dtor(param_1 + 0x27);
  local_4 = 0xffffffff;
  Dtor_00bd0670(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc1470 @ 00bc1470 ////

undefined4 * __thiscall FUN_00bc1470(void *this,LPCRITICAL_SECTION param_1)

{
  DWORD DVar1;
  
  *(LPCRITICAL_SECTION *)this = param_1;
  Wrap_EnterCriticalSection_00bcea90(param_1);
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 4) = DVar1;
  return this;
}


//// FUNCTION PKCProtectionInstance_Leave @ 00bc1490 ////

void __fastcall PKCProtectionInstance_Leave(undefined4 *param_1)

{
  int iVar1;
  DWORD DVar2;
  LPCSTR pCVar3;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe89b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DVar2 = GetTickCount();
  iVar1 = param_1[1];
  if (DAT_00ea50fc < DVar2 - iVar1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKCProtectionInstance.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x13);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Event time (");
    LH_PrintResourceID(&local_110,DVar2 - iVar1);
    LH_LogErrorMessage(&local_110," ms) over maximum (");
    LH_PrintResourceID(&local_110,DAT_00ea50fc);
    LH_LogErrorMessage(&local_110," ms)");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar3);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  Wrap_LeaveCriticalSection_00bceaa0((LPCRITICAL_SECTION)*param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc15f0 @ 00bc15f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00bc15f0(undefined4 param_1)

{
  _DAT_010ced48 = param_1;
  return;
}


//// FUNCTION FUN_00bc1600 @ 00bc1600 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00bc1600(undefined4 param_1)

{
  _DAT_010ced4c = param_1;
  return;
}


//// FUNCTION SetVtable_00d9e540_00bc1620 @ 00bc1620 ////

void __fastcall SetVtable_00d9e540_00bc1620(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e540;
  return;
}


//// FUNCTION FUN_00bc1690 @ 00bc1690 ////

void FUN_00bc1690(void)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc16e0 @ 00bc16e0 ////

void __thiscall FUN_00bc16e0(void *this,int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe8b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0xffffffff;
  if (param_1 != *(int *)(*(int *)((int)this + 8) + 0x38)) {
    *(undefined1 *)(*(int *)((int)this + 8) + 0x44) = 1;
    *(int *)(*(int *)((int)this + 8) + 0x38) = param_1;
  }
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc1750 @ 00bc1750 ////

void __thiscall FUN_00bc1750(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *param_1 = *(undefined4 *)(*(int *)((int)this + 8) + 0x3c);
  *param_2 = *(undefined4 *)(*(int *)((int)this + 8) + 0x40);
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc1820 @ 00bc1820 ////

void FUN_00bc1820(void)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc1840 @ 00bc1840 ////

void __thiscall FUN_00bc1840(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe8dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00beaa00(*(void **)((int)this + 8),param_1,param_2);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc18b0 @ 00bc18b0 ////

bool __fastcall FUN_00bc18b0(int param_1)

{
  bool bVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe8ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  bVar1 = FUN_00beaa30(*(int *)(param_1 + 8));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return bVar1;
}


//// FUNCTION FUN_00bc1920 @ 00bc1920 ////

void __fastcall FUN_00bc1920(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe900;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00beaa50(*(int *)(param_1 + 8));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc1990 @ 00bc1990 ////

void __thiscall FUN_00bc1990(void *this,int *param_1)

{
  FUN_00bea900(*(void **)((int)this + 8),(int)param_1);
  FUN_00bebdc0(*(void **)((int)this + 0xc),param_1);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return;
}


//// FUNCTION FUN_00bc19f0 @ 00bc19f0 ////

void FUN_00bc19f0(void)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc1a10 @ 00bc1a10 ////

void __thiscall FUN_00bc1a10(void *this,undefined1 param_1)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *(undefined1 *)(*(int *)((int)this + 8) + 0x34) = param_1;
  *(undefined1 *)(*(int *)((int)this + 8) + 0x44) = 1;
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc1a50 @ 00bc1a50 ////

void FUN_00bc1a50(void)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc1a80 @ 00bc1a80 ////

undefined4 * __fastcall FUN_00bc1a80(undefined4 param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe915;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x28);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = Ctor_vt00da1868_00becb30(this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00bc1ae0 @ 00bc1ae0 ////

void __thiscall FUN_00bc1ae0(void *this,undefined4 param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe927;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  (**(code **)(**(int **)(*(int *)((int)this + 8) + 0x28) + 4))(param_1);
  *(undefined1 *)(*(int *)((int)this + 8) + 0x44) = 1;
  puStack_8 = (undefined1 *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00bc1b50 @ 00bc1b50 ////

undefined4 * __thiscall FUN_00bc1b50(void *this,undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  undefined2 uVar5;
  void *this_00;
  undefined4 uVar6;
  undefined2 extraout_var;
  undefined4 *puVar7;
  int *piVar8;
  int unaff_ESI;
  uint unaff_retaddr;
  byte bVar9;
  void *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  void *pvStack_18;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  byte *local_4;
  
  local_4 = (byte *)0xffffffff;
  puStack_8 = &LAB_00cfe94c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_34 = this;
  FUN_00bc1470(&local_30,(LPCRITICAL_SECTION)&DAT_010ced2c);
  piVar8 = (int *)0x0;
  local_4 = (byte *)0x0;
  this_00 = operator_new(0x28);
  local_4._0_1_ = 1;
  if (this_00 != (void *)0x0) {
    piVar8 = Ctor_vt00da1868_00becb30(this_00,this);
  }
  iVar2 = *piVar8;
  local_4 = (byte *)((uint)local_4._1_3_ << 8);
  uVar6 = (**(code **)*param_1)(param_1[1],0x3f800000);
  (**(code **)(iVar2 + 4))(uVar6);
  pbVar3 = local_4;
  local_30 = *(undefined4 *)(local_4 + 0x4c);
  local_34 = *(void **)(local_4 + 0x48);
  uStack_2c = *(undefined4 *)(local_4 + 0x50);
  pbVar1 = local_4 + 0x58;
  local_4 = (byte *)(CONCAT31(local_4._1_3_,local_4[0x58] >> 2) & 0xffffff01);
  puStack_8 = (undefined1 *)(uint)(pbVar3[0x44] == 0);
  bVar9 = *pbVar1 & 1;
  if ((*pbVar3 & 0x40) != 0) {
    uVar5 = GetField_0x10_00bdde70((int)(pbVar3 + 0xc));
    unaff_retaddr = CONCAT22(extraout_var,uVar5);
  }
  FUN_00bed050(auStack_28);
  uStack_10 = CONCAT31(uStack_10._1_3_,2);
  if ((unaff_retaddr == 0) || (unaff_retaddr == 0x8000)) {
    uVar6 = FUN_00bc21a0(param_1);
    FUN_00becfd0(auStack_28,*(undefined4 *)(pbVar3 + 0x34),uVar6);
  }
  else if (unaff_retaddr < 0x8001) {
    uVar6 = (**(code **)*param_1)();
    uVar6 = FUN_00bc2190(uVar6);
    FUN_00bed010(auStack_28,*(undefined4 *)(pbVar3 + 0x34),uVar6,unaff_retaddr);
  }
  else {
    FUN_00becff0(auStack_28,*(undefined4 *)(pbVar3 + 0x34),unaff_retaddr);
  }
  if ((char)*pbVar3 < '\0') {
    bVar4 = FUN_00bdde80((int)(pbVar3 + 0xc));
    param_1 = (undefined4 *)(uint)bVar4;
  }
  puVar7 = FUN_00bebc20(*(void **)(unaff_ESI + 0xc),piVar8,auStack_28,(char)param_1,
                        *(undefined4 *)(pbVar3 + 0x3c),*(undefined4 *)(pbVar3 + 4),&local_34,bVar9,
                        (char)local_4,puStack_8,*(undefined4 *)(pbVar3 + 0x70),1);
  uStack_10 = uStack_10 & 0xffffff00;
  FUN_00becf90();
  uStack_10 = 0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffc4);
  ExceptionList = pvStack_18;
  return puVar7;
}


//// FUNCTION FUN_00bc1d00 @ 00bc1d00 ////

void __thiscall FUN_00bc1d00(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  void *local_4;
  
  iVar1 = param_1;
  local_4 = this;
  piVar2 = (int *)RedBlackTree_FindFirst((void *)((int)this + 0x20),(void *)((int)this + 0x1c),&param_1);
  if (piVar2 != (int *)0x0) {
    do {
      FUN_00bec660((void *)piVar2[0xb],piVar2);
      local_4 = (void *)iVar1;
      piVar2 = (int *)RedBlackTree_FindFirst((void *)((int)this + 0x20),(void *)((int)this + 0x1c),&local_4);
    } while (piVar2 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00bc1d50 @ 00bc1d50 ////

int __fastcall FUN_00bc1d50(int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe95e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = RedBlackTree_Count((undefined4 *)(param_1 + 0x14));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bc1db0 @ 00bc1db0 ////

int __thiscall FUN_00bc1db0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe970;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  uVar3 = 0;
  local_4 = 0;
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)((int)this + 0x14));
  iVar2 = iVar1;
  if (param_1 != 0) {
    do {
      iVar2 = 0;
      if (iVar1 == 0) break;
      uVar3 = uVar3 + 1;
      iVar1 = RedBlackTree_GetSuccessor((void *)((int)this + 0x14),(int *)((int)this + 0x10),iVar1);
      iVar2 = iVar1;
    } while (uVar3 < param_1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar2;
}


//// FUNCTION FUN_00bc1e40 @ 00bc1e40 ////

void __fastcall FUN_00bc1e40(int param_1)

{
  int iVar1;
  
  iVar1 = RedBlackTree_GetMinObject((undefined4 *)(param_1 + 0x14));
  if (iVar1 != 0) {
    do {
      FUN_00becad0(iVar1);
      iVar1 = RedBlackTree_GetSuccessor((void *)(param_1 + 0x14),(int *)(param_1 + 0x10),iVar1);
    } while (iVar1 != 0);
  }
  return;
}


//// FUNCTION FUN_00bc1e80 @ 00bc1e80 ////

void __fastcall FUN_00bc1e80(int param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfe982;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bc1e40(param_1);
  FUN_00beae80(*(int **)(param_1 + 8));
  FUN_00bebd80(*(int *)(param_1 + 0xc));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION Dtor_00bc1ef0 @ 00bc1ef0 ////

void __fastcall Dtor_00bc1ef0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfe9aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9e678;
  local_4 = 2;
  piVar2 = (int *)RedBlackTree_GetMinObject(param_1 + 5);
  while (piVar2 != (int *)0x0) {
    FUN_00bc1990(param_1,piVar2);
    piVar2 = (int *)RedBlackTree_GetMinObject(param_1 + 5);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    FUN_00bebe10((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[2];
  param_1[3] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00beaa80((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  param_1[2] = 0;
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  param_1[7] = &PTR_LAB_00d9e5fc;
  RedBlackTree_Dtor(param_1 + 8);
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[4] = &PTR_LAB_00d9e5d4;
  RedBlackTree_Dtor(param_1 + 5);
  *param_1 = &PTR_LAB_00d9e540;
  ExceptionList = local_c;
  return;
}


//// FUNCTION Ctor_vt00d9e678_00bc1fc0 @ 00bc1fc0 ////

undefined4 * __thiscall Ctor_vt00d9e678_00bc1fc0(void *this,undefined4 param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfe9e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d9e678;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_4 = 0;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d9e5d4;
  RedBlackTree_Ctor((int *)((int)this + 0x14));
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d9e624;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00d9e5fc;
  RedBlackTree_Ctor((int *)((int)this + 0x20));
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00d9e64c;
  local_4._0_1_ = 2;
  *(undefined4 *)((int)this + 0x28) = 0;
  pvVar1 = operator_new(0x48);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00beadc0(pvVar1,this);
  }
  local_4._0_1_ = 2;
  *(undefined4 **)((int)this + 8) = puVar2;
  pvVar1 = operator_new(0x1c);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (pvVar1 != (void *)0x0) {
    puVar2 = FUN_00bebe70(pvVar1,this);
    *(undefined4 **)((int)this + 0xc) = puVar2;
    ExceptionList = local_c;
    return this;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc20b0 @ 00bc20b0 ////

void * __thiscall ScalarDeletingDtor_00bc20b0(void *this,byte param_1)

{
  FUN_00bebe10((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc20d0 @ 00bc20d0 ////

void * __thiscall ScalarDeletingDtor_00bc20d0(void *this,byte param_1)

{
  FUN_00beaa80((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc2100 @ 00bc2100 ////

int * __fastcall FUN_00bc2100(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bc2120 @ 00bc2120 ////

int * __fastcall FUN_00bc2120(int *param_1)

{
  RedBlackTree_Ctor(param_1);
  return param_1;
}


//// FUNCTION FUN_00bc2190 @ 00bc2190 ////

undefined4 __fastcall FUN_00bc2190(undefined4 param_1)

{
  return param_1;
}


//// FUNCTION FUN_00bc21a0 @ 00bc21a0 ////

undefined4 __fastcall FUN_00bc21a0(undefined4 param_1)

{
  return param_1;
}


//// FUNCTION Dtor_00bc22b0 @ 00bc22b0 ////

void __fastcall Dtor_00bc22b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e5d4;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc2340 @ 00bc2340 ////

void __fastcall Dtor_00bc2340(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e5fc;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Ctor_vt00d9e5d4_00bc23b0 @ 00bc23b0 ////

undefined4 * __fastcall Ctor_vt00d9e5d4_00bc23b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e5d4;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION Ctor_vt00d9e5fc_00bc23d0 @ 00bc23d0 ////

undefined4 * __fastcall Ctor_vt00d9e5fc_00bc23d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e5fc;
  RedBlackTree_Ctor(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bc23f0 @ 00bc23f0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc23f0(void *this,byte param_1)

{
  Dtor_00bc22b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc2410 @ 00bc2410 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc2410(void *this,byte param_1)

{
  Dtor_00bc2340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Dtor_00bc2430 @ 00bc2430 ////

void __fastcall Dtor_00bc2430(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e5d4;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Dtor_00bc2440 @ 00bc2440 ////

void __fastcall Dtor_00bc2440(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e5fc;
  RedBlackTree_Dtor(param_1 + 1);
  return;
}


//// FUNCTION Ctor_vt00d9e624_00bc2450 @ 00bc2450 ////

undefined4 * __fastcall Ctor_vt00d9e624_00bc2450(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e5d4;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9e624;
  return param_1;
}


//// FUNCTION Ctor_vt00d9e64c_00bc2470 @ 00bc2470 ////

undefined4 * __fastcall Ctor_vt00d9e64c_00bc2470(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9e5fc;
  RedBlackTree_Ctor(param_1 + 1);
  *param_1 = &PTR_LAB_00d9e64c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00bc2490 @ 00bc2490 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc2490(void *this,byte param_1)

{
  Dtor_00bc2430(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc24b0 @ 00bc24b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc24b0(void *this,byte param_1)

{
  Dtor_00bc2440(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00bc24d0 @ 00bc24d0 ////

undefined4 * __thiscall ScalarDeletingDtor_00bc24d0(void *this,byte param_1)

{
  Dtor_00bc1ef0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00bc2580 @ 00bc2580 ////

undefined4 * __fastcall FUN_00bc2580(undefined4 *param_1)

{
  RedBlackTree_Node_Ctor(param_1);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}


//// FUNCTION FUN_00bc25b0 @ 00bc25b0 ////

int __fastcall FUN_00bc25b0(int param_1)

{
  return param_1 + 0x14;
}


//// FUNCTION FUN_00bc25c0 @ 00bc25c0 ////

void FUN_00bc25c0(void)

{
  int iVar1;
  float *unaff_ESI;
  
  iVar1 = __isnan((double)*unaff_ESI);
  if (iVar1 != 0) {
    *unaff_ESI = 0.0;
  }
  iVar1 = __isnan((double)unaff_ESI[1]);
  if (iVar1 != 0) {
    unaff_ESI[1] = 0.0;
  }
  iVar1 = __isnan((double)unaff_ESI[2]);
  if (iVar1 != 0) {
    unaff_ESI[2] = 0.0;
  }
  return;
}


//// FUNCTION FUN_00bc2680 @ 00bc2680 ////

void FUN_00bc2680(undefined1 *param_1)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  DAT_010d5da4 = *param_1;
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc26b0 @ 00bc26b0 ////

undefined4 * __fastcall FUN_00bc26b0(undefined4 *param_1)

{
  RedBlackTree_Node_Ctor(param_1);
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}


//// FUNCTION FUN_00bc26e0 @ 00bc26e0 ////

undefined1 FUN_00bc26e0(void)

{
  undefined1 uVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  uVar1 = DAT_010d5da4;
  PKCProtectionInstance_Leave(local_8);
  return uVar1;
}


//// FUNCTION FUN_00bc2710 @ 00bc2710 ////

undefined4 __fastcall FUN_00bc2710(int param_1)

{
  undefined4 uVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar1 = FUN_00bed520(*(int *)(param_1 + 0x5ec));
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar1;
}


//// FUNCTION FUN_00bc2780 @ 00bc2780 ////

int __thiscall FUN_00bc2780(void *this,int param_1)

{
  int iVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  iVar1 = FUN_00bed360(*(void **)((int)this + 0x5ec),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00bc2800 @ 00bc2800 ////

void __thiscall FUN_00bc2800(void *this,uint param_1)

{
  void *this_00;
  void *this_01;
  int iVar1;
  
  this_00 = (void *)((int)this + 0x5c);
  iVar1 = FUN_00bef5e0((int)this_00);
  if (iVar1 == 0) {
    iVar1 = FUN_00bef7e0(this_00,param_1);
    if (iVar1 == 0) {
      return;
    }
    this_01 = *(void **)(iVar1 + 4);
    *(int *)((int)this + 0x6c8) = *(int *)((int)this + 0x6c8) + 1;
    FUN_00bee8a0(this_01,(int)this);
    FUN_00bef5e0((int)this_00);
  }
  return;
}


//// FUNCTION FUN_00bc2850 @ 00bc2850 ////

undefined4 __thiscall FUN_00bc2850(void *this,undefined4 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bed4b0(*(void **)((int)this + 0x5ec),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00bc28d0 @ 00bc28d0 ////

void __thiscall FUN_00bc28d0(void *this,float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 local_38 [2];
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_38,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = param_1[2];
  local_4 = 0;
  FUN_00bc25c0();
  local_24 = *param_2;
  local_20 = param_2[1];
  local_1c = param_2[2];
  FUN_00bc25c0();
  local_18 = *param_3;
  local_14 = param_3[1];
  local_10 = param_3[2];
  FUN_00bc25c0();
  pfVar1 = (float *)((int)this + 0x38);
  uVar2 = FUN_00bf1ba0(pfVar1,&local_30);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_00bf1ba0((float *)((int)this + 0x44),&local_24);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_00bf1ba0((float *)((int)this + 0x50),&local_18);
      if ((char)uVar2 != '\0') {
        local_4 = 0xffffffff;
        PKCProtectionInstance_Leave(local_38);
        ExceptionList = local_c;
        return;
      }
    }
  }
  *pfVar1 = local_30;
  *(float *)((int)this + 0x3c) = local_2c;
  *(float *)((int)this + 0x40) = local_28;
  *(float *)((int)this + 0x44) = local_24;
  *(float *)((int)this + 0x48) = local_20;
  *(float *)((int)this + 0x4c) = local_1c;
  *(float *)((int)this + 0x50) = local_18;
  *(float *)((int)this + 0x54) = local_14;
  *(float *)((int)this + 0x58) = local_10;
  FUN_00bed3e0(*(void **)((int)this + 0x5ec),pfVar1,(float *)((int)this + 0x44));
  *(uint *)((int)this + 0x5f4) = *(uint *)((int)this + 0x5f4) | 4;
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_38);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc2a50 @ 00bc2a50 ////

void __thiscall FUN_00bc2a50(void *this,float *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 local_20 [2];
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_20,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  local_4 = 0;
  FUN_00bc25c0();
  pfVar1 = (float *)((int)this + 0x38);
  uVar2 = FUN_00bf1ba0(pfVar1,&local_18);
  if ((char)uVar2 == '\0') {
    *pfVar1 = local_18;
    *(float *)((int)this + 0x3c) = local_14;
    *(float *)((int)this + 0x40) = local_10;
    FUN_00bed3e0(*(void **)((int)this + 0x5ec),pfVar1,(int)this + 0x44);
    *(uint *)((int)this + 0x5f4) = *(uint *)((int)this + 0x5f4) | 4;
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_20);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc2b10 @ 00bc2b10 ////

void __fastcall FUN_00bc2b10(int param_1)

{
  undefined4 local_c [3];
  
  local_c[0] = 1;
  (**(code **)(*(int *)(param_1 + 0x768) + 4))(local_c);
  return;
}


//// FUNCTION FUN_00bc2b40 @ 00bc2b40 ////

void __fastcall FUN_00bc2b40(int param_1)

{
  thunk_FUN_00bf1d70(*(int *)(param_1 + 0x5f0));
  return;
}


//// FUNCTION FUN_00bc2b50 @ 00bc2b50 ////

void __fastcall FUN_00bc2b50(int param_1)

{
  FUN_00bf1d50(*(int *)(param_1 + 0x5f0));
  return;
}


//// FUNCTION FUN_00bc2b60 @ 00bc2b60 ////

void __thiscall FUN_00bc2b60(void *this,undefined1 param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_2;
  local_8 = param_1;
  local_c = 0;
  (**(code **)(*(int *)((int)this + 0x768) + 4))(&local_c);
  return;
}


//// FUNCTION FUN_00bc2b90 @ 00bc2b90 ////

undefined4 FUN_00bc2b90(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 2;
  case 2:
    return 1;
  case 3:
    return 0xf;
  }
}


//// FUNCTION FUN_00bc2bd0 @ 00bc2bd0 ////

void __fastcall FUN_00bc2bd0(int param_1)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *(uint *)(param_1 + 0x5f4) = *(uint *)(param_1 + 0x5f4) | 2;
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc2c10 @ 00bc2c10 ////

void __fastcall FUN_00bc2c10(int param_1)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *(uint *)(param_1 + 0x5f4) = *(uint *)(param_1 + 0x5f4) | 1;
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc2c50 @ 00bc2c50 ////

void __thiscall
FUN_00bc2c50(void *this,float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *(uint *)((int)this + 0x5f4) = *(uint *)((int)this + 0x5f4) | 4;
  local_4 = 0;
  FUN_00bf2040((void *)((int)this + 0x6d8),param_1,param_2,param_3,param_4);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc2ce0 @ 00bc2ce0 ////

void __thiscall
FUN_00bc2ce0(void *this,float *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf2070((void *)((int)this + 0x6d8),param_1,param_2,param_3,param_4);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc2d60 @ 00bc2d60 ////

undefined4 FUN_00bc2d60(float param_1)

{
  if ((0.0 < param_1) && (param_1 < 6.2831855)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00bc2d90 @ 00bc2d90 ////

undefined4 __thiscall FUN_00bc2d90(void *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float *local_20;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pfVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  uVar3 = FUN_00bc2d60(param_1[1]);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_00bc2d60(*param_1);
    if (((((char)uVar3 != '\0') && (param_1[2] <= param_1[3])) &&
        (param_1[3] < 0.0 == (param_1[3] == 0.0))) && (param_1[2] < 0.0 == (param_1[2] == 0.0))) {
      fVar5 = (float10)fptan((float10)param_1[1] * (float10)0.5);
      fVar6 = (float10)fptan((float10)*param_1 * (float10)0.5);
      pfVar1 = (float *)(param_1[2] * param_1[1] * 0.5);
      local_20 = (float *)(param_1[3] * param_1[1] * 0.5);
      param_1 = pfVar1;
      if (3.1415927 <= (float)pfVar1) {
        param_1 = (float *)0x4042a975;
      }
      if (3.1415927 <= (float)local_20) {
        local_20 = (float *)0x4042a975;
      }
      if ((float)local_20 < (float)param_1) {
        local_20 = param_1;
      }
      uVar3 = FUN_00bc2d60((float)param_1);
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_00bc2d60((float)local_20);
        if (((char)uVar3 != '\0') && ((float)param_1 <= (float)local_20)) {
          *(uint *)((int)this + 0x5f4) = *(uint *)((int)this + 0x5f4) | 4;
          FUN_00bf1fe0((void *)((int)this + 0x6d8),(float)param_1 + (float)param_1,
                       (float)local_20 - (float)param_1,(float)(fVar6 / fVar5),
                       1.0 / (float)(fVar6 / fVar5));
          FUN_00bf2040((void *)((int)this + 0x6d8),(float)param_1 + (float)param_1,
                       (float)local_20 - (float)param_1,0x3f800000,pfVar2[4]);
          local_4 = 0xffffffff;
          uVar3 = PKCProtectionInstance_Leave(local_14);
          ExceptionList = local_c;
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
      }
    }
  }
  local_4 = 0xffffffff;
  uVar4 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00bc2fa0 @ 00bc2fa0 ////

void __thiscall
FUN_00bc2fa0(void *this,float param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfea98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *(uint *)((int)this + 0x5f4) = *(uint *)((int)this + 0x5f4) | 4;
  local_4 = 0;
  FUN_00bf1fe0((void *)((int)this + 0x6d8),param_1,param_2,param_3,param_4);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc3030 @ 00bc3030 ////

void __thiscall
FUN_00bc3030(void *this,float *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeaaa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf2010((void *)((int)this + 0x6d8),param_1,param_2,param_3,param_4);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc30b0 @ 00bc30b0 ////

undefined4 __fastcall FUN_00bc30b0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x90);
}


//// FUNCTION FUN_00bc30c0 @ 00bc30c0 ////

void __thiscall FUN_00bc30c0(void *this,undefined1 param_1)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *(undefined1 *)((int)this + 0x6d4) = param_1;
  PKCProtectionInstance_Leave(local_8);
  return;
}


//// FUNCTION FUN_00bc30f0 @ 00bc30f0 ////

undefined4 * __thiscall FUN_00bc30f0(void *this,undefined4 *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeabc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  this_00 = *(void **)(*(int *)((int)this + 0x28) + 0x78);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar1 = FUN_00bc1b50(this_00,param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_00bc3190 @ 00bc3190 ////

int __fastcall FUN_00bc3190(int param_1)

{
  return param_1 + 0x14;
}


//// FUNCTION FUN_00bc31a0 @ 00bc31a0 ////

int __fastcall FUN_00bc31a0(int param_1)

{
  return param_1 + 0x14;
}


//// FUNCTION FUN_00bc31b0 @ 00bc31b0 ////

undefined4 * __fastcall FUN_00bc31b0(undefined4 *param_1)

{
  RedBlackTree_Node_Ctor(param_1);
  param_1[5] = 0;
  return param_1;
}


//// FUNCTION FUN_00bc31e0 @ 00bc31e0 ////

void __thiscall FUN_00bc31e0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeace;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0((int)this + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x60))(this,param_2);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc3260 @ 00bc3260 ////

void __thiscall FUN_00bc3260(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeae0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0((int)this + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))(this,param_2);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc32e0 @ 00bc32e0 ////

void __thiscall FUN_00bc32e0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeaf2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0((int)this + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(this,param_2);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc3360 @ 00bc3360 ////

void __thiscall FUN_00bc3360(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb04;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0((int)this + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(this,param_2);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc33e0 @ 00bc33e0 ////

undefined1 __thiscall
FUN_00bc33e0(void *this,undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
            void *param_5)

{
  undefined1 uVar1;
  int *piVar2;
  float local_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb16;
  local_c = ExceptionList;
  pvStack_20 = (void *)0xbc3409;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  pvStack_20 = (void *)0xbc341e;
  piVar2 = (int *)FUN_00befbf0((int)this + 0x5c);
  if (piVar2 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return 0;
  }
  local_28 = param_3 * 0.01;
  pvStack_20 = param_5;
  uStack_24 = param_4;
  uVar1 = (**(code **)(*piVar2 + 0x44))(this,param_2);
  PKCProtectionInstance_Leave(&local_28);
  ExceptionList = pvStack_20;
  return uVar1;
}


//// FUNCTION FUN_00bc34a0 @ 00bc34a0 ////

void __fastcall FUN_00bc34a0(int param_1)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(param_1);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc3510 @ 00bc3510 ////

void __thiscall FUN_00bc3510(void *this,undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_20 [2];
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb3a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_20,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0((int)this + 0x5c);
  if (piVar1 == (int *)0x0) {
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_20);
    ExceptionList = local_c;
    return;
  }
  local_10 = param_2[2];
  local_18 = *param_2;
  local_14 = (void *)param_2[1];
  FUN_00bc25c0();
  (**(code **)(*piVar1 + 0x28))(this,&local_18);
  local_c = (void *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffd8);
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00bc35d0 @ 00bc35d0 ////

void __thiscall FUN_00bc35d0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb4c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0((int)this + 0x5c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))(this,param_2);
  }
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00bc3650 @ 00bc3650 ////

float10 __thiscall FUN_00bc3650(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  float10 fVar2;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  piVar1 = (int *)FUN_00befbf0(param_1 + 0x5c);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
    local_4 = 0xffffffff;
    PKCProtectionInstance_Leave(local_14);
    ExceptionList = local_c;
    return (float10)1.0;
  }
  fVar2 = (float10)(**(code **)(*piVar1 + 0x34))(param_1);
  local_c = (void *)0xffffffff;
  PKCProtectionInstance_Leave((undefined4 *)&stack0xffffffe4);
  ExceptionList = local_14[0];
  return (float10)(float)fVar2;
}


//// FUNCTION FUN_00bc3700 @ 00bc3700 ////

void __fastcall FUN_00bc3700(int param_1)

{
  FUN_00bf2840(param_1 + 0x620);
  return;
}


//// FUNCTION FUN_00bc3710 @ 00bc3710 ////

void __thiscall FUN_00bc3710(void *this,undefined4 param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf27c0((void *)((int)this + 0x620),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc3780 @ 00bc3780 ////

void __thiscall FUN_00bc3780(void *this,float param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb82;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf2760((void *)((int)this + 0x620),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc37f0 @ 00bc37f0 ////

void __thiscall FUN_00bc37f0(void *this,float param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeb94;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf2790((void *)((int)this + 0x620),param_1);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc3860 @ 00bc3860 ////

undefined4 __thiscall FUN_00bc3860(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfeba6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  puVar3 = (undefined4 *)((int)this + 0x674);
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4 = 0;
  *(undefined1 *)((int)this + 0x670) = 1;
  FUN_00bf27e0((int)this + 0x620);
  local_4 = 0xffffffff;
  uVar1 = PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00bc38e0 @ 00bc38e0 ////

void __thiscall FUN_00bc38e0(void *this,float param_1,float param_2)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfebb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bf2930((void *)((int)this + 0x620),param_1,param_2);
  local_4 = 0xffffffff;
  PKCProtectionInstance_Leave(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00bc3950 @ 00bc3950 ////

void __thiscall FUN_00bc3950(void *this,undefined1 param_1)

{
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)&DAT_010ced2c);
  *(undefined1 *)((int)this + 0x7a8) = param_1;
  PKCProtectionInstance_Leave(local_8);
  return;
}


