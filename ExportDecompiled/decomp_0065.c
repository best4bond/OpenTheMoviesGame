//// FUNCTION FUN_00c17960 @ 00c17960 ////

undefined1 __thiscall FUN_00c17960(void *this,int param_1,char param_2)

{
  undefined1 uVar1;
  float10 fVar2;
  
  if ((*(byte *)((int)this + 0x28) & 0x20) == 0) {
    uVar1 = FUN_00c172b0(this,param_1,param_2);
    return uVar1;
  }
  if ((param_1 != 0) && (param_2 != '\0')) {
    fVar2 = FUN_00c17210(0x3f800000,*(float *)(param_1 + 0x14));
    *(float *)((int)this + 0x34) = (float)fVar2;
  }
  if (*(float *)((int)this + 0x30) < 3.0517578e-05) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xffffffdf | 0x40;
    return 1;
  }
  *(float *)((int)this + 0x30) = *(float *)((int)this + 0x34) * *(float *)((int)this + 0x30);
  return 1;
}


//// FUNCTION FUN_00c179e0 @ 00c179e0 ////

void __thiscall FUN_00c179e0(void *this,float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  if (*(int *)(param_2 + 0x1c) != 0) {
    param_1 = param_1 * *(float *)((int)this + 0x74);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    param_1 = param_1 * *(float *)((int)this + 0x3c);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    param_1 = param_1 * *(float *)((int)this + 0x88);
  }
  fVar2 = (float)*(int *)((int)this + 0x60);
  if (*(int *)((int)this + 0x60) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar1 = (float)DAT_00ea7a90;
  if (DAT_00ea7a90 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar1 = (fVar2 * param_1) / fVar1;
  if (fVar1 < 0.01) {
    fVar1 = 0.01;
  }
  uVar3 = (uint)ROUND((fVar1 * 4096.0 + 0.5) - 0.5);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  *(uint *)((int)this + 0x1e8) = uVar3;
  if (0xf000 < uVar3) {
    *(undefined4 *)((int)this + 0x1e8) = 0xf000;
  }
  return;
}


//// FUNCTION FUN_00c17be0 @ 00c17be0 ////

undefined4 __thiscall FUN_00c17be0(void *this,int param_1,char param_2)

{
  undefined4 in_EAX;
  int iVar1;
  undefined1 uVar2;
  uint uVar4;
  float10 fVar5;
  undefined1 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  if (param_1 == 0) {
    uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),param_2);
    if (param_2 != '\0') {
      *(undefined4 *)((int)this + 0x74) = 0x3f800000;
      *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
      return 0x3f800001;
    }
    goto LAB_00c17e9d;
  }
  uVar4 = *(uint *)((int)this + 0x28) & 0x7e20;
  uVar2 = uVar3;
  if (uVar4 < 0x401) {
    if (uVar4 == 0x400) {
      if (param_2 != '\0') {
LAB_00c17d63:
        fVar5 = (float10)FUN_00ace9b0();
        *(float *)((int)this + 0x74) = (float)fVar5;
        fVar5 = (float10)FUN_00ace9b0();
        *(float *)((int)this + 0x7c) = (float)fVar5;
        iVar1 = FUN_00c16f60(*(float *)(param_1 + 8));
        *(int *)((int)this + 0x84) = iVar1;
        uVar3 = 1;
      }
      iVar1 = *(int *)((int)this + 0x84);
      *(int *)((int)this + 0x84) = iVar1 + -1;
      uVar2 = uVar3;
      if (iVar1 < 1) {
        fVar5 = (float10)FUN_00c17270(*(undefined4 *)(param_1 + 0x18),0,*(float *)(param_1 + 0xc));
        *(float *)((int)this + 0x78) = (float)fVar5;
        fVar5 = (float10)FUN_00c17270(*(undefined4 *)(param_1 + 0x1c),0,*(float *)(param_1 + 0xc));
        *(float *)((int)this + 0x80) = (float)fVar5;
        iVar1 = FUN_00c16f60((1.0 - *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 0xc));
        *(int *)((int)this + 0x84) = iVar1;
        uVar4 = 0x800;
        goto LAB_00c17dfc;
      }
    }
    else if (uVar4 == 0) {
      iVar1 = *(int *)((int)this + 0x84);
      *(int *)((int)this + 0x84) = iVar1 + -1;
      if (iVar1 < 1) {
        fVar5 = (float10)FUN_00c17270(0,*(undefined4 *)(param_1 + 0x18),*(float *)(param_1 + 4));
        *(float *)((int)this + 0x78) = (float)fVar5;
        fVar5 = (float10)FUN_00c17270(0,*(undefined4 *)(param_1 + 0x1c),*(float *)(param_1 + 4));
        *(float *)((int)this + 0x80) = (float)fVar5;
        iVar1 = FUN_00c16f60(*(float *)(param_1 + 4));
        *(int *)((int)this + 0x84) = iVar1;
        uVar4 = 0x200;
LAB_00c17d00:
        iVar1 = *(int *)((int)this + 0x84);
        *(int *)((int)this + 0x84) = iVar1 + -1;
        if (iVar1 < 1) {
          uVar4 = 0x400;
          goto LAB_00c17d63;
        }
        if (*(float *)(param_1 + 0x18) != 0.0) {
          *(float *)((int)this + 0x74) = *(float *)((int)this + 0x78) * *(float *)((int)this + 0x74)
          ;
        }
        uVar2 = 1;
        if (*(float *)(param_1 + 0x1c) != 0.0) {
          fVar5 = (float10)*(float *)((int)this + 0x80) * (float10)*(float *)((int)this + 0x7c);
          goto LAB_00c17e8c;
        }
      }
    }
    else if (uVar4 == 0x20) {
      iVar1 = *(int *)((int)this + 0x84);
      *(int *)((int)this + 0x84) = iVar1 + -1;
      uVar2 = 1;
      if (iVar1 < 1) {
        *(undefined4 *)((int)this + 0x74) = 0x3f800000;
        *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
        uVar4 = 0x4000;
      }
      else {
        if (*(float *)(param_1 + 0x18) != 0.0) {
          *(float *)((int)this + 0x74) = *(float *)((int)this + 0x78) * *(float *)((int)this + 0x74)
          ;
        }
        if (*(float *)(param_1 + 0x1c) != 0.0) {
          fVar5 = (float10)*(float *)((int)this + 0x80) * (float10)*(float *)((int)this + 0x7c);
          goto LAB_00c17e8c;
        }
      }
    }
    else if (uVar4 == 0x200) goto LAB_00c17d00;
  }
  else {
    if (uVar4 == 0x800) {
LAB_00c17dfc:
      iVar1 = *(int *)((int)this + 0x84);
      *(int *)((int)this + 0x84) = iVar1 + -1;
      if (iVar1 < 1) {
        uVar4 = 0x1000;
        goto LAB_00c17e65;
      }
      if (*(float *)(param_1 + 0x18) != 0.0) {
        *(float *)((int)this + 0x74) = *(float *)((int)this + 0x78) * *(float *)((int)this + 0x74);
      }
      uVar2 = 1;
      if (*(float *)(param_1 + 0x1c) == 0.0) goto LAB_00c17e8f;
      fVar5 = (float10)*(float *)((int)this + 0x80) * (float10)*(float *)((int)this + 0x7c);
    }
    else {
      if ((uVar4 != 0x1000) || (param_2 == '\0')) goto LAB_00c17e8f;
LAB_00c17e65:
      fVar5 = (float10)FUN_00ace9b0();
      *(float *)((int)this + 0x74) = (float)fVar5;
      fVar5 = (float10)FUN_00ace9b0();
    }
LAB_00c17e8c:
    *(float *)((int)this + 0x7c) = (float)fVar5;
    uVar2 = 1;
  }
LAB_00c17e8f:
  uVar4 = *(uint *)((int)this + 0x28) & 0xffff81df | uVar4;
  *(uint *)((int)this + 0x28) = uVar4;
LAB_00c17e9d:
  return CONCAT31((int3)(uVar4 >> 8),uVar2);
}


//// FUNCTION FUN_00c17eb0 @ 00c17eb0 ////

void __thiscall FUN_00c17eb0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = *(uint *)((int)this + 0x28) & 0xfffe7fff;
  *(uint *)((int)this + 0x28) = uVar2;
  if (param_1 == 0) {
    *(uint *)((int)this + 0x28) = uVar2;
  }
  else {
    if (*(float *)(param_1 + 4) <= 0.0) {
      *(undefined4 *)((int)this + 0xb0) = 0;
    }
    else {
      iVar1 = FUN_00c16f60(0.5 / *(float *)(param_1 + 4));
      *(int *)((int)this + 0xb0) = iVar1;
    }
    if (*(int *)((int)this + 0xb0) == 0) {
      *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
      *(undefined4 *)((int)this + 0x90) = 0x3f800000;
      *(undefined4 *)((int)this + 0x98) = 0x3f800000;
      *(undefined4 *)((int)this + 0x9c) = 0x3f800000;
      *(undefined4 *)((int)this + 0xa4) = 0x3f800000;
      *(undefined4 *)((int)this + 0xa8) = 0x3f800000;
    }
    else {
      fVar3 = (float10)FUN_00ace9b0();
      *(float *)((int)this + 0x8c) = (float)fVar3;
      fVar3 = (float10)FUN_00ace9b0();
      *(float *)((int)this + 0x90) = (float)fVar3;
      fVar3 = (float10)FUN_00ace9b0();
      *(float *)((int)this + 0xa4) = (float)fVar3;
      fVar3 = (float10)FUN_00ace9b0();
      *(float *)((int)this + 0xa8) = (float)fVar3;
      fVar3 = (float10)FUN_00ace9b0();
      *(float *)((int)this + 0x98) = (float)fVar3;
      fVar3 = (float10)FUN_00ace9b0();
      *(float *)((int)this + 0x9c) = (float)fVar3;
    }
  }
  *(undefined4 *)((int)this + 0x88) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x3f800000;
  *(undefined4 *)((int)this + 0xa0) = 0x3f800000;
  *(undefined4 *)((int)this + 0xac) = 0;
  return;
}


//// FUNCTION FUN_00c18030 @ 00c18030 ////

void __thiscall FUN_00c18030(void *this,int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((int)this + 0x28);
  uVar4 = uVar2 & 0x18000;
  if (uVar4 == 0) {
    iVar3 = *(int *)((int)this + 0xac);
    *(int *)((int)this + 0xac) = iVar3 + -1;
    if (0 < iVar3) goto LAB_00c18146;
    uVar4 = 0x8000;
    *(int *)((int)this + 0xac) = *(int *)((int)this + 0xb0) / 2;
  }
  else if ((uVar4 != 0x8000) && (uVar4 != 0x10000)) {
    *(uint *)((int)this + 0x28) = uVar2;
    return;
  }
  iVar3 = *(int *)((int)this + 0xac);
  *(int *)((int)this + 0xac) = iVar3 + -1;
  if (iVar3 < 1) {
    uVar4 = uVar4 ^ 0x18000;
    *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0xb0);
  }
  if (*(float *)(param_1 + 8) != 0.0) {
    if (uVar4 == 0x8000) {
      fVar1 = *(float *)((int)this + 0x8c);
    }
    else {
      fVar1 = *(float *)((int)this + 0x90);
    }
    *(float *)((int)this + 0x88) = fVar1 * *(float *)((int)this + 0x88);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    if (uVar4 == 0x8000) {
      fVar1 = *(float *)((int)this + 0x98);
    }
    else {
      fVar1 = *(float *)((int)this + 0x9c);
    }
    *(float *)((int)this + 0x94) = fVar1 * *(float *)((int)this + 0x94);
  }
  if (*(float *)(param_1 + 0xc) != 0.0) {
    if (uVar4 == 0x8000) {
      fVar1 = *(float *)((int)this + 0xa4);
    }
    else {
      fVar1 = *(float *)((int)this + 0xa8);
    }
    *(float *)((int)this + 0xa0) = fVar1 * *(float *)((int)this + 0xa0);
  }
LAB_00c18146:
  *(uint *)((int)this + 0x28) = uVar2 & 0xfffe7fff | uVar4;
  return;
}


//// FUNCTION FUN_00c18190 @ 00c18190 ////

void __thiscall FUN_00c18190(void *this,int *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  if ((*(byte *)((int)this + 0x28) & 1) == 0) {
    uVar2 = param_1[5];
  }
  else {
    uVar2 = (**(code **)(*(int *)this + 0x58))(param_1,param_1 + 5);
  }
  if ((*(int *)((int)this + 0xb8) != 0) && ((uVar2 & 1) != 0)) {
    FUN_00c178a0(this,(byte)((uint)param_1[4] >> 8) & 1);
  }
  if ((((*(uint *)((int)this + 0x2c) >> 9 & 1) != 0) && (*(int *)((int)this + 0x24) <= param_3)) &&
     ((*(int *)((int)this + 0x24) < param_3 || (*(uint *)((int)this + 0x20) <= param_2)))) {
    uVar4 = *(uint *)((int)this + 0x28) & 0xffff8181;
    *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffdff;
    *(uint *)((int)this + 0x28) = uVar4;
    if ((param_1[0xb] != 0) || (param_1[0xc] != 0)) {
      *(uint *)((int)this + 0x28) = uVar4 | 0x20;
      if (param_1[0xb] != 0) {
        fVar5 = FUN_00c17210(0x3f800000,*(float *)(param_1[0xb] + 0x14));
        *(float *)((int)this + 0x34) = (float)fVar5;
      }
      if (param_1[0xc] != 0) {
        if (*(float *)(param_1[0xc] + 0x18) != 0.0) {
          fVar5 = (float10)FUN_00c17270(*(undefined4 *)(param_1[0xc] + 0x18),0,
                                        *(float *)(param_1[0xc] + 0x14));
          *(float *)((int)this + 0x78) = (float)fVar5;
          log2(fVar5);
          log2((float10)*(float *)((int)this + 0x74));
          uVar6 = FUN_00acd42c();
          *(int *)((int)this + 0x84) = (int)uVar6;
        }
        if (*(float *)(param_1[0xc] + 0x1c) != 0.0) {
          fVar5 = (float10)FUN_00c17270(*(undefined4 *)(param_1[0xc] + 0x1c),0,
                                        *(float *)(param_1[0xc] + 0x14));
          *(float *)((int)this + 0x80) = (float)fVar5;
          if (*(float *)(param_1[0xc] + 0x18) == 0.0) {
            log2(fVar5);
            log2((float10)*(float *)((int)this + 0x7c));
            uVar6 = FUN_00acd42c();
            *(int *)((int)this + 0x84) = (int)uVar6;
          }
        }
      }
    }
  }
  if (((*(uint *)((int)this + 0x28) >> 6 & 1) == 0) &&
     (cVar1 = FUN_00c17960(this,param_1[0xb],(byte)(uVar2 >> 3) & 1), cVar1 != '\0')) {
    uVar2 = uVar2 | 8;
  }
  if (((*(uint *)((int)this + 0x28) >> 0xe & 1) == 0) &&
     (uVar3 = FUN_00c17be0(this,param_1[0xc],(byte)(uVar2 >> 4) & 1), (char)uVar3 != '\0')) {
    uVar2 = uVar2 | 0x10;
  }
  if (((uVar2 & 0x20) != 0) && ((*(byte *)((int)this + 0x28) & 1) == 0)) {
    FUN_00c170f0(this,param_1[0xd]);
  }
  if (param_1[0xd] != 0) {
    FUN_00c16cf0(this,param_1[0xd]);
    uVar2 = uVar2 | 0x20;
  }
  if (((uVar2 & 0x40) != 0) && ((*(byte *)((int)this + 0x28) & 1) == 0)) {
    FUN_00c17eb0(this,param_1[0xe]);
  }
  if (param_1[0xe] != 0) {
    FUN_00c18030(this,param_1[0xe]);
    uVar2 = uVar2 | 0x40;
  }
  if ((uVar2 != 0) || (*(int *)(DAT_010d5dc4 + 0x54) != 0)) {
    cVar1 = (**(code **)(*(int *)this + 0x14))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 4))();
      FUN_00c11cc0(this,-(uint)(cVar1 != '\0') & (uint)param_1,uVar2);
      *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffffe;
      return;
    }
    cVar1 = (**(code **)(*param_1 + 4))();
    FUN_00c1a0f0(this,~-(uint)(cVar1 != '\0') & (uint)param_1,uVar2);
  }
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffffe;
  return;
}


//// FUNCTION FUN_00c18430 @ 00c18430 ////

void __thiscall FUN_00c18430(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)(DAT_010d6114 * DAT_010d6120 + DAT_010d610c);
  uVar3 = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    do {
      puVar4 = puVar2;
      for (uVar1 = (param_1 & 0x7fffffff) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_1 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar2 = (undefined4 *)((int)puVar2 + DAT_010d6110 * 2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x5c));
  }
  FUN_00c1a590(&DAT_010d6108,param_1);
  *(undefined4 *)((int)this + 0x1ec) = 0;
  return;
}


//// FUNCTION FUN_00c184a0 @ 00c184a0 ////

void __thiscall FUN_00c184a0(void *this,int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = *(uint *)((int)this + 0x28);
    uVar1 = uVar2 & 0x60000;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    uVar2 = *(uint *)((int)this + 0x28);
    uVar1 = uVar2 & 0x180000;
  }
  if (uVar1 != 0) {
    if ((uVar2 & 0xa0000) != 0) {
      FUN_00c3d410((void *)((int)this + param_3 * 0x24 + 0xdc),param_1,param_2);
      return;
    }
    FUN_00c3d300((void *)((int)this + param_3 * 0x24 + 0xdc),param_1,param_2);
  }
  return;
}


//// FUNCTION FUN_00c18510 @ 00c18510 ////

void __thiscall FUN_00c18510(void *this,int param_1,void *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  uVar5 = *(uint *)((int)this + 0x1ec);
  iVar9 = *(int *)((int)param_2 + 0x14) * *(int *)((int)param_2 + 0xc) + *(int *)((int)param_2 + 4);
  uVar7 = 0;
  if (param_3 != 0) {
    do {
      uVar8 = uVar5 >> 0xc;
      uVar6 = uVar5 & 0xfff;
      uVar5 = uVar5 + *(int *)((int)this + 0x1e8);
      *(short *)(iVar1 * iVar2 + iVar4 * param_4 * 2 + iVar3 + uVar7 * 2) =
           (short)((0x1000 - uVar6) * (int)*(short *)(iVar9 + uVar8 * 2) +
                   (int)*(short *)(iVar9 + 2 + uVar8 * 2) * uVar6 >> 0xc);
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
  }
  *(uint *)((int)this + 0x1ec) = uVar5 & 0xfff;
  FUN_00c1a5b0(param_2,uVar5 >> 0xc);
  return;
}


//// FUNCTION FUN_00c186a0 @ 00c186a0 ////

undefined4 * __fastcall FUN_00c186a0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03936;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c17030(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d9fcc8;
  FUN_00c1a730(param_1 + 0x2d);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = param_1 + 0x37;
  iVar1 = 2;
  do {
    FUN_00c3d2d0(puVar2);
    puVar2 = puVar2 + 9;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00c1a490(&DAT_010d6128,&DAT_010da8f0,0x80,2,1,0,0);
  FUN_00c1a490(&DAT_010d6108,&DAT_010da2f0,0x80,2,6,0,0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c18800 @ 00c18800 ////

void __thiscall FUN_00c18800(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((*(int *)((int)this + 0xb8) != 0) && (*(int *)((int)this + 0xb8) != 0)) &&
     (*(int *)((int)this + 0xd0) == 0)) {
    if (*(int *)(param_1 + 0x78) != 0) {
      if ((*(uint *)(param_1 + 0x10) >> 8 & 1) != 0) {
        (**(code **)(*(int *)this + 0x48))(*(int *)(param_1 + 0x78),1);
        return;
      }
      FUN_00c1a4d0((int)this + 0xb4);
      *(undefined4 *)((int)this + 0xc) = 0;
      return;
    }
    piVar1 = (int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x5c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*piVar1 + *(int *)(param_1 + 100) * 4);
    }
    if ((*(uint *)(param_1 + 0x10) >> 8 & 1) != 0) {
      iVar3 = FUN_00c193f0(iVar6);
      if (*(int *)(iVar3 + 0x14) != 0) {
        (**(code **)(*(int *)this + 0x48))(iVar6,*(uint *)(param_1 + 0x10) >> 8 & 0xffffff01);
        return;
      }
    }
    FUN_00c4ace0(piVar1);
    FUN_00c49cd0(param_1);
    if (((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(param_1 + 0x6c) != 0)) &&
       ((iVar6 = *(int *)(param_1 + 100), *(int *)(*piVar1 + iVar6 * 4) != 0 &&
        ((iVar6 != 0 || ((*(uint *)(param_1 + 0x10) >> 8 & 1) != 0)))))) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar2 = *(int *)this;
      *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar3 + iVar6 * 8);
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar3 + 4 + iVar6 * 8);
      uVar4 = *(uint *)(param_1 + 0x10) >> 8 & 0xffffff01;
      uVar5 = FUN_00c17010(piVar1);
      (**(code **)(iVar2 + 0x48))(uVar5,uVar4);
      return;
    }
    FUN_00c1a4d0((int)this + 0xb4);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


//// FUNCTION FUN_00c18980 @ 00c18980 ////

uint __thiscall FUN_00c18980(void *this,uint param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 *local_30;
  uint local_2c;
  uint local_24;
  uint local_1c [6];
  int local_4;
  
  uVar1 = *(uint *)((int)this + 0x1e8);
  if ((uVar1 != 0x1000) || (bVar6 = false, *(int *)((int)this + 0x1ec) != 0)) {
    bVar6 = true;
  }
  iVar2 = *(int *)((int)this + 0x1ec);
  uVar11 = param_3;
  if (param_2 == '\0') {
    uVar11 = *(uint *)((int)this + 0x1e4);
  }
  if (bVar6) {
    uVar11 = (*(int *)((int)this + 0x1e8) * uVar11 + *(int *)((int)this + 0x1ec) >> 0xc) + 2;
    if (DAT_010d6130 < uVar11) {
      uVar11 = DAT_010d6130;
    }
  }
  if ((param_2 != '\0') &&
     (uVar7 = *(int *)((int)this + 0x1e4) + *(int *)((int)this + 0xd0), uVar7 < uVar11)) {
    uVar11 = uVar7;
  }
  local_24 = 0;
  if (param_2 == '\0') {
    local_2c = 0;
  }
  else {
    pcVar3 = *(code **)(param_1 + 0xe4);
    iVar4 = *(int *)((int)this + 200);
    if (pcVar3 == (code *)0x0) {
      local_2c = iVar4 * *(int *)((int)this + 0xc0) + *(int *)((int)this + 0xb8);
    }
    else {
      iVar5 = *(int *)((int)this + 0xc0);
      puVar12 = (uint *)((int)this + 0x58);
      puVar14 = local_1c;
      for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      local_4 = iVar4 * iVar5 + *(int *)((int)this + 0xb8);
      uVar7 = *(uint *)(param_1 + 0xe8);
      local_1c[3] = local_1c[3] + (*(int *)((int)this + 0x70) - local_4);
      if (uVar7 < local_1c[3]) {
        uVar8 = uVar7 / *(uint *)((int)this + 0xc0) + *(int *)((int)this + 0x1e4);
        local_1c[3] = uVar7;
        if (uVar8 < uVar11) {
          uVar11 = uVar8;
        }
      }
      (*pcVar3)(param_1,*(undefined4 *)((int)this + 0xc),local_1c,&param_1);
      local_2c = param_1;
    }
  }
  param_1 = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    local_30 = (undefined4 *)((int)this + 0x124);
    do {
      uVar7 = *(uint *)((int)this + 0x1e4);
      if (uVar7 != 0) {
        puVar13 = local_30;
        puVar15 = DAT_010d612c;
        for (uVar8 = (uVar7 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        FUN_00c1a590(&DAT_010d6128,*(int *)((int)this + 0x1e4));
      }
      uVar8 = param_1;
      uVar7 = *(uint *)((int)this + 0x1e4);
      if (uVar7 < uVar11) {
        if (param_2 == '\0') {
          FUN_00c1a660(&DAT_010d6128,0,uVar11 - uVar7);
          FUN_00c1a590(&DAT_010d6128,uVar11 - *(int *)((int)this + 0x1e4));
        }
        else {
          (**(code **)(*(int *)this + 0x5c))((int)this + 0xb4,local_2c,uVar11 - uVar7,param_1);
        }
      }
      if (DAT_010d6144 < uVar11) {
        uVar11 = DAT_010d6144;
      }
      if (bVar6) {
        *(uint *)((int)this + 0x1e8) = uVar1;
        uVar7 = ((uVar11 - 1) * 0x1000 - iVar2) / uVar1;
        *(int *)((int)this + 0x1ec) = iVar2;
        if (uVar7 < param_3) {
          param_3 = uVar7;
        }
        FUN_00c18510(this,0x10d6108,&DAT_010d6128,param_3,uVar8);
      }
      else {
        if (uVar11 < param_3) {
          param_3 = uVar11;
        }
        uVar10 = DAT_010d6134 * param_3;
        puVar13 = (undefined4 *)(DAT_010d613c * DAT_010d6134 + (int)DAT_010d612c);
        puVar15 = (undefined4 *)
                  (DAT_010d6114 * DAT_010d6120 + DAT_010d610c + DAT_010d6110 * uVar8 * 2);
        for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        FUN_00c1a5b0(&DAT_010d6128,param_3);
        uVar8 = param_1;
      }
      uVar7 = DAT_010d6144;
      if ((DAT_010d612c == (undefined4 *)0x0) || (DAT_010d6144 != 0)) {
        if (param_2 != '\0') {
          uVar8 = DAT_010d6144 * 2;
          puVar13 = (undefined4 *)(DAT_010d613c * DAT_010d6134 + (int)DAT_010d612c);
          puVar15 = local_30;
          for (uVar10 = (DAT_010d6144 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          local_24 = uVar7;
          uVar8 = param_1;
        }
        FUN_00c1a530(0x10d6128);
      }
      param_1 = uVar8 + 1;
      local_30 = local_30 + 8;
    } while (param_1 < *(uint *)((int)this + 0x5c));
  }
  *(uint *)((int)this + 0x1e4) = local_24;
  FUN_00c1a590(&DAT_010d6108,param_3);
  return param_3;
}


//// FUNCTION FUN_00c19200 @ 00c19200 ////

uint __thiscall FUN_00c19200(void *this,int param_1,uint *param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  if ((uVar3 & 0xe02) == 0) {
    if ((*(uint *)(param_1 + 0xc) & 0x40000) == 0) {
      if ((*(uint *)(param_1 + 0xc) & 0x20000) == 0) {
        uVar3 = uVar3 | 2;
      }
      else {
        uVar3 = uVar3 | 0x400;
      }
    }
    else {
      uVar3 = uVar3 | 0x800;
    }
  }
  uVar4 = uVar3 | 4;
  FUN_00c170b0(this,(float *)param_2[6]);
  if (param_2[6] != 0) {
    uVar4 = uVar3 | 0xc;
  }
  pfVar1 = (float *)param_2[7];
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xffff81df;
  if (pfVar1 != (float *)0x0) {
    iVar2 = FUN_00c16f60(*pfVar1);
    *(int *)((int)this + 0x84) = iVar2;
  }
  *(undefined4 *)((int)this + 0x74) = 0x3f800000;
  *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
  if (param_2[7] != 0) {
    uVar4 = uVar4 | 0x10;
  }
  FUN_00c17450(this,(float *)param_2[8]);
  pfVar1 = (float *)param_2[9];
  FUN_00c17eb0(this,(int)pfVar1);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffe7fff;
  if (pfVar1 != (float *)0x0) {
    iVar2 = FUN_00c16f60(*pfVar1);
    *(int *)((int)this + 0xac) = iVar2;
  }
  return uVar4;
}


//// FUNCTION FUN_00c19300 @ 00c19300 ////

undefined4 * __fastcall FUN_00c19300(undefined4 *param_1)

{
  FUN_00c374d0(param_1);
  *param_1 = &PTR_FUN_00da325c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}


//// FUNCTION FUN_00c19330 @ 00c19330 ////

undefined4 __thiscall FUN_00c19330(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)this + 0x10);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_1;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  }
  if (*(int *)((int)this + 0x28) == 0) {
    iVar1 = FUN_00c0ef90(*(undefined4 *)((int)this + 0x1c));
    *(int *)((int)this + 0x28) = iVar1;
    if (iVar1 == 0) {
      return 0xfffffffb;
    }
    *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 2;
  }
  if (*(int *)((int)this + 0x10) == -0x80000000) {
    *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 0x80;
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 1;
  return 0;
}


//// FUNCTION FUN_00c193a0 @ 00c193a0 ////

void __fastcall FUN_00c193a0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (uVar1 != 0) {
    if (((uVar1 >> 2 & 1) != 0) && ((uVar1 >> 3 & 1) != 0)) {
      (**(code **)(*DAT_010da234 + 4))(param_1);
    }
    if (((*(byte *)(param_1 + 0x2c) & 2) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_00c0efa0(*(int *)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


//// FUNCTION FUN_00c193f0 @ 00c193f0 ////

int __fastcall FUN_00c193f0(int param_1)

{
  return param_1 + 0x10;
}


//// FUNCTION FUN_00c19430 @ 00c19430 ////

undefined4 __thiscall FUN_00c19430(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1[6];
  if (iVar2 == 0) {
    uVar1 = *(uint *)((int)this + 0x2c) & 2;
    if ((uVar1 == 0) || (param_1[3] != *(int *)((int)this + 0x1c))) {
      if (uVar1 != 0) {
        FUN_00c0efa0(*(undefined4 *)((int)this + 0x28));
      }
      iVar2 = FUN_00c0ef90(param_1[3]);
      if (iVar2 == 0) {
        return 0xfffffffb;
      }
    }
    else {
      iVar2 = *(int *)((int)this + 0x28);
    }
    uVar1 = *(uint *)((int)this + 0x2c) | 2;
  }
  else {
    if ((*(byte *)((int)this + 0x2c) & 2) != 0) {
      FUN_00c0efa0(*(undefined4 *)((int)this + 0x28));
    }
    uVar1 = *(uint *)((int)this + 0x2c) & 0xfffffffd;
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  if (*(int *)((int)this + 0x10) == -0x80000000) {
    uVar1 = *(uint *)((int)this + 0x2c) | 0x80;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x2c) & 0x7fffffff;
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  puVar4 = (undefined4 *)((int)this + 0x10);
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(int *)((int)this + 0x28) = iVar2;
  return 0;
}


//// FUNCTION FUN_00c19530 @ 00c19530 ////

void __cdecl FUN_00c19530(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined2 in_AX;
  ulonglong uVar3;
  
  uVar2 = CONCAT26(in_AX,CONCAT24(in_AX,CONCAT22(in_AX,in_AX)));
  do {
    uVar3 = pmulhw(*param_1,uVar2);
    uVar1 = (uint)(ushort)(uVar3 >> 0x20);
    *param_3 = CONCAT44((int)((longlong)((uVar3 >> 0x10) << 0x30) >> 0x2f) +
                        (int)((ulonglong)*param_3 >> 0x20),
                        ((int)((uint)(ushort)uVar3 << 0x10) >> 0xf) + (int)*param_3);
    param_3[1] = CONCAT44((int)((int6)CONCAT24((short)(uVar3 >> 0x30),uVar1) >> 0x1f) +
                          (int)((ulonglong)param_3[1] >> 0x20),
                          ((int)(uVar1 << 0x10) >> 0xf) + (int)param_3[1]);
    uVar3 = pmulhw(param_1[1],uVar2);
    uVar1 = (uint)(ushort)(uVar3 >> 0x20);
    param_3[2] = CONCAT44((int)((longlong)((uVar3 >> 0x10) << 0x30) >> 0x2f) +
                          (int)((ulonglong)param_3[2] >> 0x20),
                          ((int)((uint)(ushort)uVar3 << 0x10) >> 0xf) + (int)param_3[2]);
    param_1 = param_1 + 2;
    param_3[3] = CONCAT44((int)((int6)CONCAT24((short)(uVar3 >> 0x30),uVar1) >> 0x1f) +
                          (int)((ulonglong)param_3[3] >> 0x20),
                          ((int)(uVar1 << 0x10) >> 0xf) + (int)param_3[3]);
    param_3 = param_3 + 4;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


//// FUNCTION FUN_00c195e0 @ 00c195e0 ////

void __thiscall FUN_00c195e0(short param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  short in_AX;
  short sVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  sVar3 = in_AX << 2;
  uVar5 = CONCAT26(param_1 + in_AX * 3,
                   CONCAT24(param_1 + in_AX * 2,CONCAT22(param_1 + in_AX,param_1)));
  uVar2 = CONCAT26(sVar3,CONCAT24(sVar3,CONCAT22(sVar3,sVar3)));
  do {
    uVar4 = pmulhw(*param_2,uVar5);
    uVar5 = paddsw(uVar5,uVar2);
    uVar1 = (uint)(ushort)(uVar4 >> 0x20);
    *param_4 = CONCAT44((int)((longlong)((uVar4 >> 0x10) << 0x30) >> 0x2f) +
                        (int)((ulonglong)*param_4 >> 0x20),
                        ((int)((uint)(ushort)uVar4 << 0x10) >> 0xf) + (int)*param_4);
    param_4[1] = CONCAT44((int)((int6)CONCAT24((short)(uVar4 >> 0x30),uVar1) >> 0x1f) +
                          (int)((ulonglong)param_4[1] >> 0x20),
                          ((int)(uVar1 << 0x10) >> 0xf) + (int)param_4[1]);
    uVar4 = pmulhw(param_2[1],uVar5);
    uVar5 = paddsw(uVar5,uVar2);
    uVar1 = (uint)(ushort)(uVar4 >> 0x20);
    param_4[2] = CONCAT44((int)((longlong)((uVar4 >> 0x10) << 0x30) >> 0x2f) +
                          (int)((ulonglong)param_4[2] >> 0x20),
                          ((int)((uint)(ushort)uVar4 << 0x10) >> 0xf) + (int)param_4[2]);
    param_2 = param_2 + 2;
    param_4[3] = CONCAT44((int)((int6)CONCAT24((short)(uVar4 >> 0x30),uVar1) >> 0x1f) +
                          (int)((ulonglong)param_4[3] >> 0x20),
                          ((int)(uVar1 << 0x10) >> 0xf) + (int)param_4[3]);
    param_4 = param_4 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


//// FUNCTION FUN_00c19800 @ 00c19800 ////

float10 __cdecl FUN_00c19800(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if (param_1 < -9999) {
    return (float10)0.0;
  }
  fVar1 = ROUND((float10)3.321928 * (float10)((float)param_1 * 0.0005));
  fVar2 = (float10)fscale((float10)1,fVar1);
  fVar1 = (float10)f2xm1((float10)3.321928 * (float10)((float)param_1 * 0.0005) -
                         (float10)(float)fVar1);
  return (float10)(float)((fVar1 + (float10)1.0) * fVar2);
}


//// FUNCTION FUN_00c19960 @ 00c19960 ////

void __fastcall FUN_00c19960(int param_1)

{
  FUN_00c17780(param_1);
  FUN_00c1a490((void *)(param_1 + 0x1f0),&DAT_010d6150,0x80,2,*(undefined4 *)(param_1 + 0x5c),0,0);
  *(void **)(param_1 + 0xd8) = (void *)(param_1 + 0x1f0);
  return;
}


//// FUNCTION FUN_00c199a0 @ 00c199a0 ////

uint __thiscall FUN_00c199a0(void *this,int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  uVar2 = ~-(uint)(cVar1 != '\0') & (uint)param_1;
  uVar3 = FUN_00c19200(this,(int)param_1,param_2);
  if ((*(byte *)((int)param_1 + 0x12) & 1) != 0) {
    uVar3 = uVar3 | 0x1000;
  }
  if ((param_2[4] != 0) || (*(int *)(uVar2 + 0x110) != 0)) {
    uVar3 = uVar3 | 0x80;
  }
  if ((param_2[5] != 0) || (*(int *)(uVar2 + 0x114) != 0)) {
    uVar3 = uVar3 | 0x100;
  }
  FUN_00c3d050((undefined4 *)((int)this + 0xdc));
  FUN_00c3d050((undefined4 *)((int)this + 0x100));
  return uVar3;
}


//// FUNCTION FUN_00c19a30 @ 00c19a30 ////

void __fastcall FUN_00c19a30(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  short local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  undefined2 local_2;
  
  this = *(void **)(DAT_010d5dc4 + 0x58);
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x204) * *(int *)(param_1 + 0x1fc) + *(int *)(param_1 + 500);
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x228) == '\0') {
      FUN_00c15620(this,iVar2,param_1 + 0x22a);
      return;
    }
    *(undefined1 *)(param_1 + 0x228) = 0;
    iVar1 = (uint)*(ushort *)(param_1 + 0x236) - (uint)*(ushort *)(param_1 + 0x22a);
    local_c = (short)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x238) - (uint)*(ushort *)(param_1 + 0x22c);
    local_a = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23a) - (uint)*(ushort *)(param_1 + 0x22e);
    local_8 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23c) - (uint)*(ushort *)(param_1 + 0x230);
    local_6 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23e) - (uint)*(ushort *)(param_1 + 0x232);
    local_4 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x240) - (uint)*(ushort *)(param_1 + 0x234);
    local_2 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    FUN_00c15660(this,iVar2,(undefined2 *)(param_1 + 0x22a),(int)&local_c);
  }
  else if (iVar1 == 2) {
    if (*(char *)(param_1 + 0x228) == '\0') {
      FUN_00c157c0(this,iVar2,(ushort *)(param_1 + 0x22a));
      return;
    }
    *(undefined1 *)(param_1 + 0x228) = 0;
    iVar1 = (uint)*(ushort *)(param_1 + 0x236) - (uint)*(ushort *)(param_1 + 0x22a);
    local_c = (short)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x238) - (uint)*(ushort *)(param_1 + 0x22c);
    local_a = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23a) - (uint)*(ushort *)(param_1 + 0x22e);
    local_8 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23c) - (uint)*(ushort *)(param_1 + 0x230);
    local_6 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23e) - (uint)*(ushort *)(param_1 + 0x232);
    local_4 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x240) - (uint)*(ushort *)(param_1 + 0x234);
    local_2 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    FUN_00c15870(this,iVar2,(ushort *)(param_1 + 0x22a),&local_c);
  }
  else if (iVar1 == 4) {
    if (*(char *)(param_1 + 0x228) == '\0') {
      FUN_00c15b90(this,iVar2,(ushort *)(param_1 + 0x22a));
      return;
    }
    *(undefined1 *)(param_1 + 0x228) = 0;
    iVar1 = (uint)*(ushort *)(param_1 + 0x236) - (uint)*(ushort *)(param_1 + 0x22a);
    local_c = (short)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x238) - (uint)*(ushort *)(param_1 + 0x22c);
    local_a = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23a) - (uint)*(ushort *)(param_1 + 0x22e);
    local_8 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23c) - (uint)*(ushort *)(param_1 + 0x230);
    local_6 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23e) - (uint)*(ushort *)(param_1 + 0x232);
    local_4 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x240) - (uint)*(ushort *)(param_1 + 0x234);
    local_2 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    FUN_00c15cd0(this,iVar2,(ushort *)(param_1 + 0x22a),&local_c);
  }
  else {
    if (*(char *)(param_1 + 0x228) == '\0') {
      FUN_00c15f00(this,iVar2,(ushort *)(param_1 + 0x22a));
      return;
    }
    *(undefined1 *)(param_1 + 0x228) = 0;
    iVar1 = (uint)*(ushort *)(param_1 + 0x236) - (uint)*(ushort *)(param_1 + 0x22a);
    local_c = (short)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x238) - (uint)*(ushort *)(param_1 + 0x22c);
    local_a = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23a) - (uint)*(ushort *)(param_1 + 0x22e);
    local_8 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23c) - (uint)*(ushort *)(param_1 + 0x230);
    local_6 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x23e) - (uint)*(ushort *)(param_1 + 0x232);
    local_4 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    iVar1 = (uint)*(ushort *)(param_1 + 0x240) - (uint)*(ushort *)(param_1 + 0x234);
    local_2 = (undefined2)((int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7);
    FUN_00c16130(this,iVar2,(ushort *)(param_1 + 0x22a),&local_c);
  }
  *(undefined2 *)(param_1 + 0x22a) = *(undefined2 *)(param_1 + 0x236);
  *(undefined2 *)(param_1 + 0x22c) = *(undefined2 *)(param_1 + 0x238);
  *(undefined2 *)(param_1 + 0x22e) = *(undefined2 *)(param_1 + 0x23a);
  *(undefined2 *)(param_1 + 0x230) = *(undefined2 *)(param_1 + 0x23c);
  *(undefined2 *)(param_1 + 0x232) = *(undefined2 *)(param_1 + 0x23e);
  *(undefined2 *)(param_1 + 0x234) = *(undefined2 *)(param_1 + 0x240);
  return;
}


//// FUNCTION FUN_00c19e90 @ 00c19e90 ////

void __thiscall FUN_00c19e90(void *this,undefined8 *param_1)

{
  if (*(char *)((int)this + 0x248) != '\0') {
    *(undefined1 *)((int)this + 0x248) = 0;
    FUN_00c3c5b0(*(void **)(DAT_010d5dc4 + 0x17c),param_1,*(short *)((int)this + 0x24a));
    *(undefined2 *)((int)this + 0x24a) = *(undefined2 *)((int)this + 0x24c);
    return;
  }
  FUN_00c3c580(*(void **)(DAT_010d5dc4 + 0x17c),param_1,*(short *)((int)this + 0x24a));
  return;
}


//// FUNCTION FUN_00c19f10 @ 00c19f10 ////

void __thiscall FUN_00c19f10(void *this,undefined8 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0x248) != '\0') {
    *(undefined1 *)((int)this + 0x248) = 0;
    FUN_00c3c630(*(void **)(DAT_010d5dc4 + 0x17c),param_1,param_2,*(ushort *)((int)this + 0x24a));
    *(undefined2 *)((int)this + 0x24a) = *(undefined2 *)((int)this + 0x24c);
    return;
  }
  FUN_00c3c5e0(*(void **)(DAT_010d5dc4 + 0x17c),param_1,param_2,*(ushort *)((int)this + 0x24a));
  return;
}


//// FUNCTION FUN_00c1a010 @ 00c1a010 ////

undefined4 __cdecl FUN_00c1a010(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return 0;
  case 2:
    return 1;
  default:
    return 0xffffffff;
  case 4:
    return 4;
  case 8:
    return 5;
  case 0x10:
    return 2;
  case 0x20:
    return 3;
  }
}


//// FUNCTION FUN_00c1a0f0 @ 00c1a0f0 ////

void __thiscall FUN_00c1a0f0(void *this,int param_1,uint param_2)

{
  float *pfVar1;
  undefined4 *this_00;
  float fVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  short *psVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  float *pfVar9;
  float10 fVar10;
  
  if ((param_2 & 0x74) != 0) {
    FUN_00c179e0(this,*(float *)(param_1 + 0x20),param_1 + 0x14);
  }
  if ((*(uint *)((int)this + 0x28) >> 6 & 1) != 0) {
    FUN_00c1a4d0((int)this + 0xb4);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar6 = *(int **)(param_1 + 0x10c);
  if ((piVar6 != (int *)0x0) &&
     (((param_2 & 0x400) != 0 ||
      (((param_2 & 0x48) != 0 && ((*(uint *)((int)this + 0x2c) & 0x40000) != 0)))))) {
    iVar7 = 0;
    if (0 < *piVar6) {
      do {
        iVar7 = FUN_00c1a010(*(undefined4 *)(piVar6[1] + iVar7 * 8));
        fVar10 = FUN_00c19800(*(int *)(extraout_EDX + 4));
        *(float *)((int)this + iVar7 * 4 + 0x210) = (float)fVar10;
        piVar6 = *(int **)(param_1 + 0x10c);
        iVar7 = extraout_ECX + 1;
      } while (iVar7 < *piVar6);
    }
    *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffcffff | 0x40000;
  }
  piVar6 = *(int **)(param_1 + 0x108);
  if ((piVar6 != (int *)0x0) &&
     (((param_2 & 0x800) != 0 ||
      (((param_2 & 0x48) != 0 && ((*(uint *)((int)this + 0x2c) & 0x20000) != 0)))))) {
    iVar7 = 0;
    if (0 < *piVar6) {
      do {
        iVar7 = FUN_00c1a010(*(undefined4 *)(piVar6[1] + iVar7 * 8));
        *(undefined4 *)((int)this + iVar7 * 4 + 0x210) = *(undefined4 *)(extraout_EDX_00 + 4);
        piVar6 = *(int **)(param_1 + 0x108);
        iVar7 = extraout_ECX_00 + 1;
      } while (iVar7 < *piVar6);
    }
    *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffaffff | 0x20000;
  }
  if (((param_2 & 0x202) != 0) ||
     (((param_2 & 0x48) != 0 && ((*(uint *)((int)this + 0x2c) & 0x10000) != 0)))) {
    pfVar9 = (float *)((int)this + 0x214);
    pfVar1 = (float *)((int)this + 0x210);
    FUN_00c16dc0(*(float *)(param_1 + 0xfc),pfVar1,pfVar9);
    *pfVar1 = *pfVar1 * *(float *)(param_1 + 0x18);
    pfVar1 = (float *)((int)this + 0x218);
    *pfVar9 = *pfVar9 * *(float *)(param_1 + 0x18);
    pfVar9 = (float *)((int)this + 0x21c);
    FUN_00c16dc0(*(float *)(param_1 + 0xfc),pfVar1,pfVar9);
    *pfVar1 = *pfVar1 * *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x18);
    *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfff9ffff | 0x10000;
    *pfVar9 = *pfVar9 * fVar2;
  }
  if ((param_2 & 0xe4a) != 0) {
    fVar2 = *(float *)((int)this + 0x94);
    psVar8 = (short *)((int)this + 0x22a);
    fVar3 = *(float *)((int)this + 0x30);
    pfVar9 = (float *)((int)this + 0x210);
    iVar7 = 6;
    do {
      uVar5 = (uint)ROUND(fVar2 * fVar3 * *pfVar9 * 32767.0 - 0.5);
      if ((int)uVar5 < 0) {
        uVar5 = uVar5 + 1;
      }
      if (0x7fff < uVar5) {
        uVar5 = 0x7fff;
      }
      sVar4 = (short)uVar5;
      if ((*(byte *)((int)this + 0x28) & 1) == 0) {
        psVar8[6] = sVar4;
        if (sVar4 != *psVar8) {
          *(undefined1 *)((int)this + 0x228) = 1;
        }
      }
      else {
        *psVar8 = sVar4;
      }
      pfVar9 = pfVar9 + 1;
      psVar8 = psVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((param_2 & 0x11d0) != 0) {
    fVar2 = *(float *)((int)this + 0xa0) * *(float *)((int)this + 0x7c);
    *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xffe1ffff;
    piVar6 = *(int **)(param_1 + 0x24);
    this_00 = (undefined4 *)((int)this + 0xdc);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      if (piVar6 == (int *)0x0) {
        FUN_00c3d050(this_00);
        piVar6 = *(int **)(param_1 + 0x28);
      }
      else {
        FUN_00c3d5b0(this_00,piVar6,fVar2);
        *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 0x20000;
        piVar6 = *(int **)(param_1 + 0x28);
      }
    }
    else {
      if (piVar6 == (int *)0x0) {
        if (*(int **)(param_1 + 0x28) == (int *)0x0) {
          FUN_00c3d050(this_00);
        }
        else {
          FUN_00c3d630(this_00,*(int **)(param_1 + 0x28),fVar2);
          *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 0x40000;
        }
      }
      else {
        FUN_00c3d5b0(this_00,piVar6,fVar2);
        *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 0x20000;
      }
      if (*(int **)(param_1 + 0x110) != (int *)0x0) {
        FUN_00c3d5b0((void *)((int)this + 0x100),*(int **)(param_1 + 0x110),fVar2);
        *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 0x80000;
        goto LAB_00c1a3dc;
      }
      piVar6 = *(int **)(param_1 + 0x114);
    }
    if (piVar6 == (int *)0x0) {
      FUN_00c3d050((undefined4 *)((int)this + 0x100));
    }
    else {
      FUN_00c3d630((undefined4 *)((int)this + 0x100),piVar6,fVar2);
      *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 0x100000;
    }
  }
LAB_00c1a3dc:
  if (((param_2 & 0x4000) != 0) &&
     (iVar7 = *(int *)(param_1 + 0x104), iVar7 != *(int *)((int)this + 0x244))) {
    *(int *)((int)this + 0x244) = iVar7;
    fVar10 = FUN_00c19800(iVar7);
    param_2._0_2_ = (undefined2)(int)ROUND((float)(fVar10 * (float10)32767.0));
    if ((*(byte *)((int)this + 0x28) & 1) != 0) {
      *(undefined2 *)((int)this + 0x24a) = (undefined2)param_2;
      return;
    }
    *(undefined2 *)((int)this + 0x24c) = (undefined2)param_2;
    *(undefined1 *)((int)this + 0x248) = 1;
  }
  return;
}


//// FUNCTION FUN_00c1a490 @ 00c1a490 ////

uint __thiscall
FUN_00c1a490(void *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(int *)((int)this + 0x14) = param_5;
  *(int *)((int)this + 0x1c) = param_6;
  *(uint *)((int)this + 8) = param_2;
  *(uint *)((int)this + 0x18) = (uint)(param_5 + param_6) % param_2;
  return (uint)(param_5 + param_6) / param_2;
}


//// FUNCTION FUN_00c1a4d0 @ 00c1a4d0 ////

void __fastcall FUN_00c1a4d0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00c1a4f0 @ 00c1a4f0 ////

undefined4 __thiscall FUN_00c1a4f0(void *this,uint param_1,char param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = (ulonglong)param_1 / (ulonglong)*(uint *)((int)this + 0xc);
  uVar3 = CONCAT31((int3)(uVar2 >> 8),param_2);
  if (param_2 != '\0') {
    iVar4 = *(int *)((int)this + 0x1c) + ((int)uVar2 - *(int *)((int)this + 8));
    *(int *)((int)this + 0x1c) = iVar4;
    uVar1 = (ulonglong)(uint)(*(int *)((int)this + 0x14) + iVar4);
    uVar3 = (undefined4)(uVar1 / uVar2);
    *(int *)((int)this + 0x18) = (int)(uVar1 % uVar2);
  }
  *(int *)((int)this + 8) = (int)uVar2;
  return uVar3;
}


//// FUNCTION FUN_00c1a530 @ 00c1a530 ////

void __fastcall FUN_00c1a530(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00c1a540 @ 00c1a540 ////

void __fastcall FUN_00c1a540(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
  return;
}


//// FUNCTION FUN_00c1a590 @ 00c1a590 ////

void __thiscall FUN_00c1a590(void *this,int param_1)

{
  uint uVar1;
  
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + param_1;
  uVar1 = *(int *)((int)this + 0x18) + param_1;
  *(uint *)((int)this + 0x18) = uVar1;
  if (*(uint *)((int)this + 8) <= uVar1) {
    *(uint *)((int)this + 0x18) = uVar1 - *(uint *)((int)this + 8);
  }
  return;
}


//// FUNCTION FUN_00c1a5b0 @ 00c1a5b0 ////

void __thiscall FUN_00c1a5b0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)((int)this + 0x14) + param_1;
  iVar1 = *(int *)((int)this + 0x1c) - param_1;
  *(uint *)((int)this + 0x14) = uVar2;
  *(int *)((int)this + 0x1c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    return;
  }
  if (*(uint *)((int)this + 8) <= uVar2) {
    *(uint *)((int)this + 0x14) = uVar2 - *(uint *)((int)this + 8);
  }
  return;
}


//// FUNCTION FUN_00c1a620 @ 00c1a620 ////

void __thiscall FUN_00c1a620(void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = *(int *)((int)this + 0xc) * *(int *)((int)this + 8);
  puVar2 = (undefined4 *)(uVar3 * param_2 + *(int *)((int)this + 4));
  puVar4 = (undefined4 *)(uVar3 * param_1 + *(int *)((int)this + 4));
  for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return;
}


//// FUNCTION FUN_00c1a660 @ 00c1a660 ////

void __thiscall FUN_00c1a660(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(int *)((int)this + 0xc) * param_2;
  puVar3 = (undefined4 *)
           ((*(int *)((int)this + 8) * param_1 + *(int *)((int)this + 0x18)) *
            *(int *)((int)this + 0xc) + *(int *)((int)this + 4));
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


//// FUNCTION FUN_00c1a6a0 @ 00c1a6a0 ////

void __thiscall FUN_00c1a6a0(void *this,uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  uVar5 = param_1;
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)((int)this + 8);
  puVar8 = (undefined4 *)(*(int *)((int)this + 0x18) * iVar2 + *(int *)((int)this + 4));
  iVar4 = *(int *)(param_1 + 8);
  piVar1 = (int *)(param_1 + 0x10);
  puVar6 = (undefined4 *)
           (*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4));
  param_1 = 0;
  if (*piVar1 != 0) {
    do {
      puVar9 = puVar6;
      puVar10 = puVar8;
      for (uVar7 = (uint)(iVar2 * param_2) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = iVar2 * param_2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar6 = (undefined4 *)((int)puVar6 + iVar4 * iVar2);
      puVar8 = (undefined4 *)((int)puVar8 + iVar3 * iVar2);
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(uVar5 + 0x10));
  }
  return;
}


//// FUNCTION FUN_00c1a730 @ 00c1a730 ////

void __fastcall FUN_00c1a730(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da3bc4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_00c1a750 @ 00c1a750 ////

undefined4 * __thiscall FUN_00c1a750(void *this,byte param_1)

{
  FUN_00bdfc70(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c1a7e0 @ 00c1a7e0 ////

void __cdecl FUN_00c1a7e0(undefined1 (*param_1) [16],int param_2,int *param_3)

{
  int iVar1;
  undefined6 uVar2;
  unkbyte10 Var3;
  undefined1 auVar4 [16];
  undefined2 in_AX;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar9 [14];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar4._2_2_ = in_AX;
  auVar4._0_2_ = in_AX;
  auVar4._4_2_ = in_AX;
  auVar4._6_2_ = in_AX;
  auVar4._8_2_ = in_AX;
  auVar4._10_2_ = in_AX;
  auVar4._12_2_ = in_AX;
  auVar4._14_2_ = in_AX;
  do {
    auVar5 = pmulhw(*param_1,auVar4);
    auVar8._0_12_ = SUB1412(SUB1614((undefined1  [16])0x0,0),0);
    auVar8._12_2_ = 0;
    auVar8._14_2_ = auVar5._6_2_;
    auVar7._12_4_ = auVar8._12_4_;
    auVar7._0_10_ = SUB1410(SUB1614((undefined1  [16])0x0,0),0);
    auVar7._10_2_ = auVar5._4_2_;
    auVar6._10_6_ = auVar7._10_6_;
    auVar6._0_10_ = (unkuint10)0 << 0x40;
    auVar9 = SUB1614((undefined1  [16])0x0,2);
    iVar1 = CONCAT22(auVar9._8_2_,auVar5._8_2_);
    uVar2 = CONCAT24(auVar5._10_2_,iVar1);
    Var3 = CONCAT28(auVar5._12_2_,CONCAT26(auVar9._10_2_,uVar2));
    auVar9._10_2_ = auVar9._12_2_;
    auVar9._0_10_ = Var3;
    auVar9._12_2_ = auVar5._14_2_;
    *param_3 = ((int)((uint)auVar5._0_2_ << 0x10) >> 0xf) + *param_3;
    param_3[1] = (((int)CONCAT82(auVar6._8_8_,auVar5._2_2_) << 0x10) >> 0xf) + param_3[1];
    param_3[2] = (auVar6._8_4_ >> 0xf) + param_3[2];
    param_3[3] = (auVar7._12_4_ >> 0xf) + param_3[3];
    param_3[4] = ((iVar1 << 0x10) >> 0xf) + param_3[4];
    param_3[5] = (int)((int6)uVar2 >> 0x1f) + param_3[5];
    param_3[6] = (int)((unkint10)Var3 >> 0x3f) + param_3[6];
    param_3[7] = (auVar9._10_4_ >> 0xf) + param_3[7];
    param_1 = param_1 + 1;
    param_3 = param_3 + 8;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


//// FUNCTION FUN_00c1a870 @ 00c1a870 ////

void __thiscall FUN_00c1a870(short param_1,undefined1 (*param_2) [16],int param_3,int *param_4)

{
  int iVar1;
  undefined6 uVar2;
  unkbyte10 Var3;
  undefined1 auVar4 [16];
  short in_AX;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar10 [14];
  undefined1 auVar11 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  sVar5 = in_AX << 3;
  auVar11._2_2_ = param_1 + in_AX;
  auVar11._0_2_ = param_1;
  auVar11._4_2_ = param_1 + in_AX * 2;
  auVar11._6_2_ = param_1 + in_AX * 3;
  auVar11._8_2_ = param_1 + in_AX * 4;
  auVar11._10_2_ = param_1 + in_AX * 5;
  auVar11._12_2_ = param_1 + in_AX * 6;
  auVar11._14_2_ = in_AX * 7 + param_1;
  auVar4._2_2_ = sVar5;
  auVar4._0_2_ = sVar5;
  auVar4._4_2_ = sVar5;
  auVar4._6_2_ = sVar5;
  auVar4._8_2_ = sVar5;
  auVar4._10_2_ = sVar5;
  auVar4._12_2_ = sVar5;
  auVar4._14_2_ = sVar5;
  do {
    auVar6 = pmulhw(*param_2,auVar11);
    auVar11 = paddsw(auVar11,auVar4);
    auVar9._0_12_ = SUB1412(SUB1614((undefined1  [16])0x0,0),0);
    auVar9._12_2_ = 0;
    auVar9._14_2_ = auVar6._6_2_;
    auVar8._12_4_ = auVar9._12_4_;
    auVar8._0_10_ = SUB1410(SUB1614((undefined1  [16])0x0,0),0);
    auVar8._10_2_ = auVar6._4_2_;
    auVar7._10_6_ = auVar8._10_6_;
    auVar7._0_10_ = (unkuint10)0 << 0x40;
    auVar10 = SUB1614((undefined1  [16])0x0,2);
    iVar1 = CONCAT22(auVar10._8_2_,auVar6._8_2_);
    uVar2 = CONCAT24(auVar6._10_2_,iVar1);
    Var3 = CONCAT28(auVar6._12_2_,CONCAT26(auVar10._10_2_,uVar2));
    auVar10._10_2_ = auVar10._12_2_;
    auVar10._0_10_ = Var3;
    auVar10._12_2_ = auVar6._14_2_;
    *param_4 = ((int)((uint)auVar6._0_2_ << 0x10) >> 0xf) + *param_4;
    param_4[1] = (((int)CONCAT82(auVar7._8_8_,auVar6._2_2_) << 0x10) >> 0xf) + param_4[1];
    param_4[2] = (auVar7._8_4_ >> 0xf) + param_4[2];
    param_4[3] = (auVar8._12_4_ >> 0xf) + param_4[3];
    param_4[4] = ((iVar1 << 0x10) >> 0xf) + param_4[4];
    param_4[5] = (int)((int6)uVar2 >> 0x1f) + param_4[5];
    param_4[6] = (int)((unkint10)Var3 >> 0x3f) + param_4[6];
    param_4[7] = (auVar10._10_4_ >> 0xf) + param_4[7];
    param_2 = param_2 + 1;
    param_4 = param_4 + 8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}


//// FUNCTION FUN_00c1a950 @ 00c1a950 ////

void __cdecl FUN_00c1a950(float *param_1,int *param_2)

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
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  
  iVar16 = 8;
  do {
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    fVar4 = param_1[4];
    fVar5 = param_1[5];
    fVar6 = param_1[6];
    fVar7 = param_1[7];
    fVar8 = param_1[8];
    fVar9 = param_1[9];
    fVar10 = param_1[10];
    fVar11 = param_1[0xb];
    fVar12 = param_1[0xc];
    fVar13 = param_1[0xd];
    fVar14 = param_1[0xe];
    fVar15 = param_1[0xf];
    *param_2 = (int)*param_1 + *param_2;
    param_2[1] = (int)fVar1 + param_2[1];
    param_2[2] = (int)fVar2 + param_2[2];
    param_2[3] = (int)fVar3 + param_2[3];
    param_2[4] = (int)fVar4 + param_2[4];
    param_2[5] = (int)fVar5 + param_2[5];
    param_2[6] = (int)fVar6 + param_2[6];
    param_2[7] = (int)fVar7 + param_2[7];
    param_2[8] = (int)fVar8 + param_2[8];
    param_2[9] = (int)fVar9 + param_2[9];
    param_2[10] = (int)fVar10 + param_2[10];
    param_2[0xb] = (int)fVar11 + param_2[0xb];
    param_2[0xc] = (int)fVar12 + param_2[0xc];
    param_2[0xd] = (int)fVar13 + param_2[0xd];
    param_2[0xe] = (int)fVar14 + param_2[0xe];
    param_2[0xf] = (int)fVar15 + param_2[0xf];
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  return;
}


//// FUNCTION FUN_00c1a9e0 @ 00c1a9e0 ////

void __cdecl FUN_00c1a9e0(int *param_1,int *param_2)

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
  
  iVar16 = 8;
  do {
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar3 = param_1[3];
    iVar4 = param_1[4];
    iVar5 = param_1[5];
    iVar6 = param_1[6];
    iVar7 = param_1[7];
    iVar8 = param_1[8];
    iVar9 = param_1[9];
    iVar10 = param_1[10];
    iVar11 = param_1[0xb];
    iVar12 = param_1[0xc];
    iVar13 = param_1[0xd];
    iVar14 = param_1[0xe];
    iVar15 = param_1[0xf];
    *param_2 = *param_1 + *param_2;
    param_2[1] = iVar1 + param_2[1];
    param_2[2] = iVar2 + param_2[2];
    param_2[3] = iVar3 + param_2[3];
    param_2[4] = iVar4 + param_2[4];
    param_2[5] = iVar5 + param_2[5];
    param_2[6] = iVar6 + param_2[6];
    param_2[7] = iVar7 + param_2[7];
    param_2[8] = iVar8 + param_2[8];
    param_2[9] = iVar9 + param_2[9];
    param_2[10] = iVar10 + param_2[10];
    param_2[0xb] = iVar11 + param_2[0xb];
    param_2[0xc] = iVar12 + param_2[0xc];
    param_2[0xd] = iVar13 + param_2[0xd];
    param_2[0xe] = iVar14 + param_2[0xe];
    param_2[0xf] = iVar15 + param_2[0xf];
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  return;
}


//// FUNCTION FUN_00c1aa60 @ 00c1aa60 ////

void FUN_00c1aa60(int *param_1,int *param_2)

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
  
  iVar16 = 8;
  do {
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar3 = param_1[3];
    iVar4 = param_1[4];
    iVar5 = param_1[5];
    iVar6 = param_1[6];
    iVar7 = param_1[7];
    iVar8 = param_1[8];
    iVar9 = param_1[9];
    iVar10 = param_1[10];
    iVar11 = param_1[0xb];
    iVar12 = param_1[0xc];
    iVar13 = param_1[0xd];
    iVar14 = param_1[0xe];
    iVar15 = param_1[0xf];
    *param_2 = *param_1 + *param_2;
    param_2[1] = iVar1 + param_2[1];
    param_2[2] = iVar2 + param_2[2];
    param_2[3] = iVar3 + param_2[3];
    param_2[4] = iVar4 + param_2[4];
    param_2[5] = iVar5 + param_2[5];
    param_2[6] = iVar6 + param_2[6];
    param_2[7] = iVar7 + param_2[7];
    param_2[8] = iVar8 + param_2[8];
    param_2[9] = iVar9 + param_2[9];
    param_2[10] = iVar10 + param_2[10];
    param_2[0xb] = iVar11 + param_2[0xb];
    param_2[0xc] = iVar12 + param_2[0xc];
    param_2[0xd] = iVar13 + param_2[0xd];
    param_2[0xe] = iVar14 + param_2[0xe];
    param_2[0xf] = iVar15 + param_2[0xf];
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  return;
}


//// FUNCTION FUN_00c1ab20 @ 00c1ab20 ////

void FUN_00c1ab20(int *param_1,int *param_2)

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
  
  iVar16 = 8;
  do {
    iVar1 = param_1[1];
    iVar2 = param_1[2];
    iVar3 = param_1[3];
    iVar4 = param_1[4];
    iVar5 = param_1[5];
    iVar6 = param_1[6];
    iVar7 = param_1[7];
    iVar8 = param_1[8];
    iVar9 = param_1[9];
    iVar10 = param_1[10];
    iVar11 = param_1[0xb];
    iVar12 = param_1[0xc];
    iVar13 = param_1[0xd];
    iVar14 = param_1[0xe];
    iVar15 = param_1[0xf];
    *param_2 = *param_1 + *param_2;
    param_2[1] = iVar1 + param_2[1];
    param_2[2] = iVar2 + param_2[2];
    param_2[3] = iVar3 + param_2[3];
    param_2[4] = iVar4 + param_2[4];
    param_2[5] = iVar5 + param_2[5];
    param_2[6] = iVar6 + param_2[6];
    param_2[7] = iVar7 + param_2[7];
    param_2[8] = iVar8 + param_2[8];
    param_2[9] = iVar9 + param_2[9];
    param_2[10] = iVar10 + param_2[10];
    param_2[0xb] = iVar11 + param_2[0xb];
    param_2[0xc] = iVar12 + param_2[0xc];
    param_2[0xd] = iVar13 + param_2[0xd];
    param_2[0xe] = iVar14 + param_2[0xe];
    param_2[0xf] = iVar15 + param_2[0xf];
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  return;
}


//// FUNCTION FUN_00c1abc0 @ 00c1abc0 ////

int __cdecl FUN_00c1abc0(float param_1)

{
  int iVar1;
  
  iVar1 = (int)ROUND(param_1 - 0.5);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_00c1abe0 @ 00c1abe0 ////

undefined2 __cdecl FUN_00c1abe0(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  if ((63.0 <= param_2) || (param_2 < -63.0)) {
    iVar1 = (int)ROUND(((param_1 - -180.0) + 6.0) - 0.5);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = (iVar1 / 0xc) * 4;
  }
  else if ((33.0 <= param_2) || (param_2 < -33.0)) {
    iVar1 = (int)ROUND(((param_1 - -180.0) + 3.0) - 0.5);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = (iVar1 / 6) * 2;
  }
  else {
    iVar1 = FUN_00c1abc0((param_1 - -180.0) + 1.5);
    iVar1 = iVar1 / 3;
  }
  iVar2 = (int)ROUND(((param_2 - -90.0) + 3.0) - 0.5);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  return *(undefined2 *)(&DAT_00da3bc8 + (iVar2 / 6 + iVar1 * 0x1f) * 2);
}


//// FUNCTION FUN_00c1ad20 @ 00c1ad20 ////

void __cdecl FUN_00c1ad20(undefined4 param_1,float param_2,float param_3,int *param_4,int *param_5)

{
  float fVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  int iVar3;
  
  switch(param_1) {
  case 1:
    iVar3 = DAT_010d6760;
    goto LAB_00c1ad83;
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
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
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    goto switchD_00c1ad36_caseD_2;
  case 8:
  case 0x40:
    if (param_2 <= 90.0) {
      if (-90.0 <= param_2) goto switchD_00c1ad36_caseD_4;
      fVar1 = -180.0;
    }
    else {
      fVar1 = 180.0;
    }
    param_2 = fVar1 - param_2;
  case 4:
switchD_00c1ad36_caseD_4:
    iVar3 = DAT_010d675c;
LAB_00c1ad83:
    uVar2 = FUN_00c1abe0(param_2,param_3);
    iVar3 = CONCAT22(extraout_var,uVar2) * 0x34 + iVar3;
    if (0.0 <= param_2) {
      *param_4 = iVar3;
      *param_5 = iVar3 + 0x34;
      return;
    }
    *param_5 = iVar3;
    *param_4 = iVar3 + 0x34;
switchD_00c1ad36_caseD_2:
switchD_00c1ad36_default:
    return;
  default:
    goto switchD_00c1ad36_default;
  }
}


//// FUNCTION FUN_00c1ae40 @ 00c1ae40 ////

void __fastcall FUN_00c1ae40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5924;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}


//// FUNCTION FUN_00c1ae80 @ 00c1ae80 ////

undefined4 * __thiscall FUN_00c1ae80(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00da5924;
  DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1aed0 @ 00c1aed0 ////

void __fastcall FUN_00c1aed0(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  return;
}


//// FUNCTION FUN_00c1aef0 @ 00c1aef0 ////

void __fastcall FUN_00c1aef0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(HWAVEOUT *)(param_1 + 0x614) != (HWAVEOUT)0x0) {
    waveOutReset(*(HWAVEOUT *)(param_1 + 0x614));
    if (*(int *)(param_1 + 0x604) != 0) {
      iVar1 = 0;
      do {
        waveOutUnprepareHeader
                  (*(HWAVEOUT *)(param_1 + 0x614),(LPWAVEHDR)(*(int *)(param_1 + 0x610) + iVar1),
                   0x20);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x20;
      } while (uVar2 < *(uint *)(param_1 + 0x604));
    }
    waveOutClose(*(HWAVEOUT *)(param_1 + 0x614));
    *(undefined4 *)(param_1 + 0x614) = 0;
  }
  if (*(int *)(param_1 + 0x610) != 0) {
    FUN_00c0efa0(*(int *)(param_1 + 0x610));
    *(undefined4 *)(param_1 + 0x610) = 0;
  }
  if (*(int *)(param_1 + 0x618) != 0) {
    FUN_00c0efa0(*(int *)(param_1 + 0x618));
    *(undefined4 *)(param_1 + 0x618) = 0;
  }
  return;
}


//// FUNCTION FUN_00c1afd0 @ 00c1afd0 ////

void __fastcall FUN_00c1afd0(int param_1)

{
  int iVar1;
  
  waveOutWrite(*(HWAVEOUT *)(param_1 + 0x614),
               (LPWAVEHDR)(*(int *)(param_1 + 0x61c) * 0x20 + *(int *)(param_1 + 0x610)),0x20);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x624));
  *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x624));
  iVar1 = *(int *)(param_1 + 0x61c) + 1;
  *(int *)(param_1 + 0x61c) = iVar1;
  if (iVar1 == *(int *)(param_1 + 0x604)) {
    *(undefined4 *)(param_1 + 0x61c) = 0;
  }
  return;
}


//// FUNCTION FUN_00c1b040 @ 00c1b040 ////

void __fastcall FUN_00c1b040(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x624));
  if (*(int *)(param_1 + 0x608) != 0) {
    *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x624));
  return;
}


//// FUNCTION FUN_00c1b0b0 @ 00c1b0b0 ////

undefined4 * __fastcall FUN_00c1b0b0(undefined4 *param_1)

{
  param_1[0x181] = 0;
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  *param_1 = &PTR_FUN_00da5928;
  param_1[0x188] = &PTR_FUN_00da5924;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x189));
  param_1[0x185] = 0;
  param_1[0x184] = 0;
  param_1[0x186] = 0;
  return param_1;
}


//// FUNCTION FUN_00c1b110 @ 00c1b110 ////

void __fastcall FUN_00c1b110(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03956;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da5928;
  local_4 = 1;
  FUN_00c1aef0((int)param_1);
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  param_1[0x188] = &PTR_FUN_00da5924;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x189));
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1b180 @ 00c1b180 ////

uint __thiscall FUN_00c1b180(void *this,uint param_1)

{
  LPHWAVEOUT phwo;
  uint uVar1;
  undefined4 *puVar2;
  MMRESULT MVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  WAVEFORMATEX local_14;
  
  uVar1 = (int)((param_1 & 0xffff) * 0x10) >> 3;
  local_14.nBlockAlign = (WORD)uVar1;
  uVar1 = (uVar1 & 0xffff) * 0xac44;
  local_14.wFormatTag = 1;
  local_14.nChannels = (WORD)param_1;
  local_14.nSamplesPerSec = 0xac44;
  local_14.wBitsPerSample = 0x10;
  local_14.cbSize = 0;
  if (param_1 < 3) {
    local_14.nAvgBytesPerSec = uVar1;
    uVar1 = waveOutOpen((LPHWAVEOUT)0x0,0xffffffff,&local_14,0,0,9);
    if (uVar1 == 0) {
      phwo = (LPHWAVEOUT)((int)this + 0x614);
      uVar1 = waveOutOpen(phwo,0xffffffff,&local_14,0xc1b070,(DWORD_PTR)this,0x30000);
      if (uVar1 == 0) {
        iVar6 = param_1 * 0x100;
        *(undefined4 *)((int)this + 0x61c) = 0;
        puVar2 = (undefined4 *)FUN_00c0ef90(*(int *)((int)this + 0x604) * iVar6);
        *(undefined4 **)((int)this + 0x618) = puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          for (uVar1 = (uint)(*(int *)((int)this + 0x604) * iVar6) >> 2; uVar1 != 0;
              uVar1 = uVar1 - 1) {
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          }
          for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined1 *)puVar2 = 0;
            puVar2 = (undefined4 *)((int)puVar2 + 1);
          }
          iVar4 = FUN_00c0ef90(*(int *)((int)this + 0x604) << 5);
          *(int *)((int)this + 0x610) = iVar4;
          if (iVar4 == 0) {
            *phwo = (HWAVEOUT)0x0;
            uVar1 = FUN_00c0efa0(*(undefined4 *)((int)this + 0x618));
            *(undefined4 *)((int)this + 0x618) = 0;
            return uVar1 & 0xffffff00;
          }
          uVar5 = 0;
          uVar1 = 0;
          if (*(int *)((int)this + 0x604) != 0) {
            iVar4 = 0;
            param_1 = 0;
            do {
              *(uint *)(iVar4 + *(int *)((int)this + 0x610)) = *(int *)((int)this + 0x618) + param_1
              ;
              *(int *)(*(int *)((int)this + 0x610) + 4 + iVar4) = iVar6;
              *(undefined4 *)(*(int *)((int)this + 0x610) + 8 + iVar4) = 0;
              *(uint *)(*(int *)((int)this + 0x610) + 0xc + iVar4) = uVar5;
              *(undefined4 *)(*(int *)((int)this + 0x610) + 0x10 + iVar4) = 0;
              *(undefined4 *)(*(int *)((int)this + 0x610) + 0x14 + iVar4) = 0;
              *(undefined4 *)(*(int *)((int)this + 0x610) + 0x18 + iVar4) = 0;
              *(undefined4 *)(*(int *)((int)this + 0x610) + 0x1c + iVar4) = 0;
              MVar3 = waveOutPrepareHeader
                                (*(HWAVEOUT *)((int)this + 0x614),
                                 (LPWAVEHDR)(*(int *)((int)this + 0x610) + iVar4),0x20);
              if (MVar3 != 0) {
                *(undefined4 *)((int)this + 0x614) = 0;
                FUN_00c0efa0(*(undefined4 *)((int)this + 0x618));
                uVar7 = *(undefined4 *)((int)this + 0x610);
LAB_00c1b3aa:
                *(undefined4 *)((int)this + 0x618) = 0;
                uVar1 = FUN_00c0efa0(uVar7);
                *(undefined4 *)((int)this + 0x610) = 0;
                return uVar1 & 0xffffff00;
              }
              MVar3 = waveOutWrite(*(HWAVEOUT *)((int)this + 0x614),
                                   (LPWAVEHDR)(*(int *)((int)this + 0x610) + iVar4),0x20);
              if (MVar3 != 0) {
                *(undefined4 *)((int)this + 0x614) = 0;
                FUN_00c0efa0(*(undefined4 *)((int)this + 0x618));
                uVar7 = *(undefined4 *)((int)this + 0x610);
                goto LAB_00c1b3aa;
              }
              uVar1 = *(uint *)((int)this + 0x604);
              uVar5 = uVar5 + 1;
              param_1 = param_1 + iVar6;
              iVar4 = iVar4 + 0x20;
            } while (uVar5 < uVar1);
          }
          return CONCAT31((int3)(uVar1 >> 8),1);
        }
        *phwo = (HWAVEOUT)0x0;
        uVar1 = 0;
      }
      return uVar1 & 0xffffff00;
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00c1b3f0 @ 00c1b3f0 ////

undefined4 * __thiscall FUN_00c1b3f0(void *this,byte param_1)

{
  FUN_00c1b110(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c1b420 @ 00c1b420 ////

undefined4 FUN_00c1b420(void)

{
  if ((((DAT_010da9f2 == '\0') && (DAT_010da9f3 == '\0')) && (DAT_010da9f4 == '\0')) &&
     (DAT_010da9f5 == '\0')) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00c1b4e0 @ 00c1b4e0 ////

undefined4 __fastcall FUN_00c1b4e0(undefined4 param_1)

{
  return param_1;
}


//// FUNCTION FUN_00c1b4f0 @ 00c1b4f0 ////

void __fastcall FUN_00c1b4f0(undefined1 *param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int *unaff_ESI;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  hModule = LoadLibraryA("dsound.dll");
  if (hModule == (HMODULE)0x0) {
    *param_1 = 0;
  }
  pFVar1 = GetProcAddress(hModule,"DllGetClassObject");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(hModule);
    *param_1 = 0;
  }
  piVar5 = (int *)&DAT_00db2a7c;
  (*pFVar1)();
  iVar2 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI,0,&DAT_00d859dc,&stack0xffffffd0);
  if (iVar2 != 0) {
    (*pcRam11ab3ec8)(&DAT_00daca00);
    FreeLibrary(hModule);
    *param_1 = 0;
  }
  piVar4 = (int *)&stack0xffffffc8;
  piVar3 = (int *)0x0;
  (**(code **)(*piVar5 + 0xc))(piVar5,&DAT_00dac9f0,7,0,0,piVar4,8,&stack0xffffffc4);
  (**(code **)(*piVar4 + 8))(piVar4);
  (**(code **)(*piVar3 + 8))(piVar3);
  FreeLibrary(hModule);
  return;
}


//// FUNCTION FUN_00c1b600 @ 00c1b600 ////

undefined4 __thiscall FUN_00c1b600(void *this,char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined1 local_108 [4];
  char local_104 [260];
  
  pcVar6 = "SYSTEM\\CurrentControlSet\\Hardware Profiles\\Current\\System\\CurrentControlSet\\Enum";
  pcVar2 = local_104;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = *pcVar6;
  iVar4 = _strncmp("\\\\?\\",param_1,4);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  iVar5 = 0;
  iVar4 = 4;
  pcVar2 = (char *)0x4;
  pcVar6 = (char *)((int)this + 4);
  do {
    if (*pcVar6 == '\0') {
      return 0xffffffff;
    }
    if (*pcVar6 == '#') {
      puVar7 = (undefined2 *)(local_108 + 3);
      do {
        pcVar1 = (char *)((int)puVar7 + 1);
        puVar7 = (undefined2 *)((int)puVar7 + 1);
      } while (*pcVar1 != '\0');
      *puVar7 = 0x5c;
      _strncat(local_104,pcVar2 + (int)this,iVar4 - (int)pcVar2);
      pcVar2 = pcVar6 + (1 - (int)this);
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (iVar5 < 3);
  LVar3 = RegOpenKeyExA((HKEY)&fdwControls_80000002,local_104,0,0xf003f,(PHKEY)local_108);
  if (LVar3 != 0) {
    return 0xffffffff;
  }
  return (HKEY)local_108;
}


//// FUNCTION FUN_00c1b6f0 @ 00c1b6f0 ////

undefined4 __fastcall FUN_00c1b6f0(char *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  HKEY pHVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  int local_3c;
  int local_38;
  undefined1 local_34 [4];
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  undefined4 local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00d03978;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00c4b0c0(local_34);
  if ((((DAT_010da9f2 == '\0') && (DAT_010da9f3 == '\0')) && (DAT_010da9f4 == '\0')) &&
     (((DAT_010da9f5 == '\0' && (FUN_00c1b4f0(param_1), *param_1 != '\0')) &&
      ((DAT_010da9f2 == '\0' &&
       ((uVar2 = FUN_00c1b420(), (char)uVar2 == '\0' &&
        (pHVar3 = (HKEY)FUN_00c1b600(param_1,param_1), pHVar3 != (HKEY)0xffffffff)))))))) {
    FUN_00c4b0e0(local_28);
    local_c = 0;
    FUN_00c4b170(local_28,pHVar3);
    FUN_00c4b0e0(local_30);
    local_c._0_1_ = 1;
    bVar1 = FUN_00c4b120(local_30,pHVar3,"DirectSound\\Mixer Defaults",0xf003f);
    if ((CONCAT31(extraout_var,bVar1) != 0) &&
       ((bVar1 = FUN_00c4b180(local_30,"Acceleration",(LPBYTE)&local_38),
        CONCAT31(extraout_var_00,bVar1) != 0 && (local_38 != 0)))) {
      if (local_38 == 8) {
        local_c = (uint)local_c._1_3_ << 8;
        FUN_00c4b2f0(local_30);
        local_c = 0xffffffff;
        FUN_00c4b2f0(local_28);
        ExceptionList = local_14;
        return 2;
      }
      if (local_38 == 0xf) {
        FUN_00c4b0e0(local_20);
        local_c = CONCAT31(local_c._1_3_,2);
        bVar1 = FUN_00c4b120(local_20,pHVar3,"DirectSound\\Device Presence",0xf003f);
        if ((CONCAT31(extraout_var_01,bVar1) == 0) ||
           (((bVar1 = FUN_00c4b180(local_20,"VxD",(LPBYTE)&local_3c),
             CONCAT31(extraout_var_02,bVar1) == 0 || (local_3c == 0)) &&
            (bVar1 = FUN_00c4b180(local_20,"WDM",(LPBYTE)&local_3c),
            CONCAT31(extraout_var_03,bVar1) == 0)))) {
        }
        else {
          local_c._0_1_ = 1;
          if (local_3c == 1) {
            FUN_00c4b2f0(local_20);
            local_c = (uint)local_c._1_3_ << 8;
            FUN_00c4b2f0(local_30);
            local_c = 0xffffffff;
            FUN_00c4b2f0(local_28);
            ExceptionList = local_14;
            return 1;
          }
        }
        local_c._0_1_ = 1;
        FUN_00c4b2f0(local_20);
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00c4b2f0(local_30);
      local_c = 0xffffffff;
      FUN_00c4b2f0(local_28);
      ExceptionList = local_14;
      return 0;
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00c4b2f0(local_30);
    local_c = 0xffffffff;
    FUN_00c4b2f0(local_28);
  }
  ExceptionList = local_14;
  return 3;
}


//// FUNCTION FUN_00c1b9d0 @ 00c1b9d0 ////

bool __thiscall
FUN_00c1b9d0(void *this,undefined4 *param_1,undefined4 param_2,LPVOID param_3,DWORD param_4)

{
  WINBOOL WVar1;
  DWORD local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  local_c = param_1[3];
  local_8 = param_2;
  local_1c = 0;
  local_4 = 2;
  WVar1 = DeviceIoControl(*(HANDLE *)((int)this + 4),0x2f0003,&local_18,0x18,param_3,param_4,
                          &local_1c,(LPOVERLAPPED)0x0);
  return WVar1 != 0;
}


//// FUNCTION FUN_00c1ba40 @ 00c1ba40 ////

void __fastcall FUN_00c1ba40(void *param_1)

{
  FUN_00c1b9d0(param_1,(undefined4 *)&DAT_00da5a30,0,&stack0x00000004,4);
  return;
}


//// FUNCTION FUN_00c1bab0 @ 00c1bab0 ////

void __fastcall FUN_00c1bab0(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00c1bb00 @ 00c1bb00 ////

bool __thiscall
FUN_00c1bb00(void *this,LPTHREAD_START_ROUTINE param_1,LPVOID param_2,LPSECURITY_ATTRIBUTES param_3,
            DWORD param_4,SIZE_T param_5)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)param_3,param_5,(LPTHREAD_START_ROUTINE)param_1,
                        param_2,param_4,(LPDWORD)((int)this + 8));
  *(HANDLE *)((int)this + 4) = pvVar1;
  return pvVar1 != (HANDLE)0x0;
}


//// FUNCTION FUN_00c1bb40 @ 00c1bb40 ////

void __fastcall FUN_00c1bb40(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00c1bdb0 @ 00c1bdb0 ////

void __fastcall FUN_00c1bdb0(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_00c1bdd0 @ 00c1bdd0 ////

void __thiscall FUN_00c1bdd0(void *this,undefined4 param_1)

{
  if (*(HANDLE *)((int)this + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0xffffffff;
    *(undefined4 *)((int)this + 4) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00c1be00 @ 00c1be00 ////

void __fastcall FUN_00c1be00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5a40;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


//// FUNCTION FUN_00c1be20 @ 00c1be20 ////

undefined4 * __thiscall FUN_00c1be20(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00da5a40;
  if (*(HANDLE *)((int)this + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1be60 @ 00c1be60 ////

void __fastcall FUN_00c1be60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5a44;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


//// FUNCTION FUN_00c1be80 @ 00c1be80 ////

undefined4 * __thiscall FUN_00c1be80(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00da5a44;
  if (*(HANDLE *)((int)this + 4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1bff0 @ 00c1bff0 ////

void __fastcall FUN_00c1bff0(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  if ((HANDLE)param_1[0x185] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[0x185]);
    param_1[0x185] = -1;
  }
  return;
}


//// FUNCTION FUN_00c1c4d0 @ 00c1c4d0 ////

void __fastcall FUN_00c1c4d0(int param_1)

{
  uint uVar1;
  int local_4;
  
  local_4 = param_1;
  if (*(int *)(param_1 + 0x61c) != -1) {
    local_4 = 2;
    FUN_00c1b9d0((void *)(param_1 + 0x618),(undefined4 *)&DAT_00da5a30,0,&local_4,4);
    local_4 = 0;
    FUN_00c1b9d0((void *)(param_1 + 0x618),(undefined4 *)&DAT_00da5a30,0,&local_4,4);
    SetEvent(*(HANDLE *)(param_1 + 0x634));
    if (*(HANDLE *)(param_1 + 0x63c) != (HANDLE)0x0) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x63c),0xffffffff);
    }
    if (*(HANDLE *)(param_1 + 0x63c) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x63c));
      *(undefined4 *)(param_1 + 0x63c) = 0;
    }
    if (*(HANDLE *)(param_1 + 0x634) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x634));
      *(undefined4 *)(param_1 + 0x634) = 0;
    }
    if (*(HANDLE *)(param_1 + 0x61c) != (HANDLE)0xffffffff) {
      CloseHandle(*(HANDLE *)(param_1 + 0x61c));
      *(undefined4 *)(param_1 + 0x61c) = 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x624) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x604) != 0) {
      do {
        CloseHandle(*(HANDLE *)(*(int *)(param_1 + 0x624) + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x604));
    }
    FUN_00c0efa0(*(undefined4 *)(param_1 + 0x624));
    *(undefined4 *)(param_1 + 0x624) = 0;
  }
  if (*(int *)(param_1 + 0x620) != 0) {
    FUN_00c0efa0(*(int *)(param_1 + 0x620));
    *(undefined4 *)(param_1 + 0x620) = 0;
  }
  if (*(int *)(param_1 + 0x628) != 0) {
    FUN_00c0efa0(*(int *)(param_1 + 0x628));
    *(undefined4 *)(param_1 + 0x628) = 0;
  }
  return;
}


//// FUNCTION FUN_00c1c600 @ 00c1c600 ////

void __fastcall FUN_00c1c600(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5a2c;
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_00c1c630 @ 00c1c630 ////

undefined4 * __thiscall FUN_00c1c630(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_00da5a2c;
  if (*(HANDLE *)((int)this + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0xffffffff;
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1c680 @ 00c1c680 ////

void __fastcall FUN_00c1c680(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5a2c;
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_00c1c6b0 @ 00c1c6b0 ////

undefined4 * __thiscall FUN_00c1c6b0(void *this,byte param_1)

{
  FUN_00c1c680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1c6d0 @ 00c1c6d0 ////

void __fastcall FUN_00c1c6d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d039de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da5aa4;
  local_4 = 5;
  FUN_00c1c4d0((int)param_1);
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  if ((HANDLE)param_1[0x185] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[0x185]);
    param_1[0x185] = 0xffffffff;
  }
  param_1[0x191] = &PTR_FUN_00da5924;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x192));
  param_1[0x18e] = &PTR_FUN_00da5a44;
  if ((HANDLE)param_1[399] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[399]);
    param_1[399] = 0;
  }
  param_1[0x18c] = &PTR_FUN_00da5a40;
  if ((HANDLE)param_1[0x18d] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x18d]);
    param_1[0x18d] = 0;
  }
  param_1[0x186] = &PTR_FUN_00da5a2c;
  if ((HANDLE)param_1[0x187] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[0x187]);
    param_1[0x187] = 0xffffffff;
  }
  param_1[0x184] = &PTR_FUN_00da5a2c;
  if ((HANDLE)param_1[0x185] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[0x185]);
    param_1[0x185] = 0xffffffff;
  }
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1c7f0 @ 00c1c7f0 ////

undefined4 * __fastcall FUN_00c1c7f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5aa4;
  param_1[0x181] = 0;
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x184] = &PTR_FUN_00da5a2c;
  param_1[0x185] = 0xffffffff;
  param_1[0x187] = 0xffffffff;
  param_1[0x186] = &PTR_FUN_00da5aa0;
  param_1[0x18c] = &PTR_FUN_00da5a40;
  param_1[0x18d] = 0;
  param_1[0x18e] = &PTR_FUN_00da5a44;
  param_1[399] = 0;
  param_1[0x191] = &PTR_FUN_00da5924;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x192));
  param_1[0x18a] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  return param_1;
}


//// FUNCTION FUN_00c1c880 @ 00c1c880 ////

undefined4 * __thiscall FUN_00c1c880(void *this,byte param_1)

{
  FUN_00c1c6d0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c1c8b0 @ 00c1c8b0 ////

void __fastcall FUN_00c1c8b0(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  return;
}


//// FUNCTION FUN_00c1c8e0 @ 00c1c8e0 ////

void FUN_00c1c8e0(void)

{
  return;
}


//// FUNCTION FUN_00c1c950 @ 00c1c950 ////

void __fastcall FUN_00c1c950(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  *param_1 = &PTR_FUN_00da5acc;
  param_1[0x181] = 0;
  return;
}


//// FUNCTION FUN_00c1c980 @ 00c1c980 ////

void __fastcall FUN_00c1c980(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d039f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da5acc;
  local_4 = 0;
  FUN_00c1c8e0();
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1c9e0 @ 00c1c9e0 ////

undefined4 * __thiscall FUN_00c1c9e0(void *this,byte param_1)

{
  FUN_00c1c980(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c1ca00 @ 00c1ca00 ////

void __cdecl FUN_00c1ca00(undefined4 *param_1)

{
  *param_1 = DAT_00ea7a60;
  param_1[1] = DAT_00ea7a78;
  param_1[2] = DAT_00ea7a9c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00c1ca30 @ 00c1ca30 ////

char * FUN_00c1ca30(void)

{
  return "Win32";
}


//// FUNCTION FUN_00c1ca60 @ 00c1ca60 ////

uint __thiscall FUN_00c1ca60(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00be6590(param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar2 = 0;
  uVar1 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    do {
      uVar1 = FUN_00be6590(param_1);
      if ((char)uVar1 == '\0') {
        return uVar1 & 0xffffff00;
      }
      uVar1 = *(uint *)((int)this + 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_00c1caf0 @ 00c1caf0 ////

uint __thiscall FUN_00c1caf0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00be6590(param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar2 = 0;
  uVar1 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    do {
      uVar1 = FUN_00be65e0(param_1);
      if ((char)uVar1 == '\0') {
        return uVar1 & 0xffffff00;
      }
      uVar1 = *(uint *)((int)this + 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_00c1cb50 @ 00c1cb50 ////

void __fastcall FUN_00c1cb50(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c1cb70 @ 00c1cb70 ////

void __fastcall FUN_00c1cb70(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (piVar1[-1] != 0) {
    (**(code **)(*piVar1 + 4))(3);
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(piVar1 + -1);
}


//// FUNCTION FUN_00c1cbb0 @ 00c1cbb0 ////

void __fastcall FUN_00c1cbb0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c1cc90 @ 00c1cc90 ////

undefined4 __thiscall FUN_00c1cc90(void *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = FUN_00c1ca60(this,param_1);
  if ((char)uVar2 != '\0') {
    bVar1 = FUN_00bbfe60(param_1,(int *)((int)this + 8));
    if (bVar1) {
      uVar2 = FUN_00c1ca60((void *)((int)this + 0x10),param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_00c1caf0((void *)((int)this + 0x18),param_1);
        if ((char)uVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00c1cce0 @ 00c1cce0 ////

void __fastcall FUN_00c1cce0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_00c1cd00 @ 00c1cd00 ////

void __fastcall FUN_00c1cd00(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03a18;
  pvStack_c = ExceptionList;
  local_4 = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  piVar1 = (int *)param_1[2];
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    if (piVar1[-1] == 0) {
      ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
      _free(piVar1 + -1);
    }
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 4))(3);
    param_1[2] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c1cee0 @ 00c1cee0 ////

void __thiscall FUN_00c1cee0(void *this,int param_1)

{
  if (*(int *)((int)this + 4) != param_1) {
    if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    FUN_00c1d2d0(this,param_1);
  }
  return;
}


//// FUNCTION FUN_00c1cfb0 @ 00c1cfb0 ////

void __fastcall FUN_00c1cfb0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c1cfd0 @ 00c1cfd0 ////

void __fastcall FUN_00c1cfd0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (piVar1[-1] != 0) {
    (**(code **)(*piVar1 + 4))(3);
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(piVar1 + -1);
}


//// FUNCTION FUN_00c1d010 @ 00c1d010 ////

void __fastcall FUN_00c1d010(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c1d2d0 @ 00c1d2d0 ////

void __thiscall FUN_00c1d2d0(void *this,int param_1)

{
  LPCSTR pCVar1;
  void *pvVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03aa6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x45);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Expecting null buffer");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  *(int *)((int)this + 4) = param_1;
  if (param_1 != 0) {
    pvVar2 = operator_new(param_1 << 2);
    *(void **)this = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 1;
      LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCArray.h");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x4a);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_111,pCVar1);
      DebugBreak();
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1d460 @ 00c1d460 ////

void __thiscall FUN_00c1d460(void *this,int param_1)

{
  LPCSTR pCVar1;
  int *piVar2;
  undefined1 local_115;
  int *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03ad4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x45);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Expecting null buffer");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_115,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  *(int *)((int)this + 4) = param_1;
  if (param_1 != 0) {
    local_114 = operator_new(param_1 * 8 + 4);
    local_4 = 1;
    if (local_114 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = local_114 + 1;
      *local_114 = param_1;
      _eh_vector_constructor_iterator_(piVar2,8,param_1,FUN_00be1e00,FUN_00be1f10);
    }
    *(int **)this = piVar2;
    if (piVar2 == (int *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 2;
      LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCArray.h");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x4a);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_115,pCVar1);
      DebugBreak();
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1d630 @ 00c1d630 ////

void __thiscall FUN_00c1d630(void *this,int param_1)

{
  LPCSTR pCVar1;
  void *pvVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03af6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x45);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Expecting null buffer");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  *(int *)((int)this + 4) = param_1;
  if (param_1 != 0) {
    pvVar2 = operator_new(param_1 << 2);
    *(void **)this = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 1;
      LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCArray.h");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x4a);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_111,pCVar1);
      DebugBreak();
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1d7c0 @ 00c1d7c0 ////

void __thiscall FUN_00c1d7c0(void *this,int param_1)

{
  if (*(int *)((int)this + 4) != param_1) {
    if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    FUN_00c1d2d0(this,param_1);
  }
  return;
}


//// FUNCTION FUN_00c1d800 @ 00c1d800 ////

void __thiscall FUN_00c1d800(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 4) != param_1) {
    piVar1 = *(int **)this;
    if (piVar1 != (int *)0x0) {
      if (piVar1[-1] != 0) {
        (**(code **)(*piVar1 + 4))(3);
        *(undefined4 *)this = 0;
        FUN_00c1d460(this,param_1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(piVar1 + -1);
    }
    FUN_00c1d460(this,param_1);
  }
  return;
}


//// FUNCTION FUN_00c1d860 @ 00c1d860 ////

void __thiscall FUN_00c1d860(void *this,int param_1)

{
  if (*(int *)((int)this + 4) != param_1) {
    if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    FUN_00c1d630(this,param_1);
  }
  return;
}


//// FUNCTION FUN_00c1d8b0 @ 00c1d8b0 ////

void __thiscall FUN_00c1d8b0(void *this,float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  *(float *)((int)this + 0x3c) = param_1;
  if (*(int *)((int)this + 0x1c) == 1) {
    fVar1 = (float10)log2((float10)*(float *)((int)this + 0x20));
    fVar2 = (float10)log2((float10)*(float *)((int)this + 0x24));
    fVar2 = (float10)1.4426950408889634 *
            (((float10)0.6931471805599453 * fVar2 - (float10)0.6931471805599453 * fVar1) *
             (float10)param_1 + (float10)0.6931471805599453 * fVar1);
    fVar1 = ROUND(fVar2);
    fVar2 = (float10)f2xm1(fVar2 - fVar1);
    fVar1 = (float10)fscale((float10)1 + fVar2,fVar1);
    **(float **)((int)this + 0x38) = (float)fVar1;
    if (**(float **)((int)this + 0x38) < *(float *)((int)this + 0x20)) {
      **(float **)((int)this + 0x38) = *(float *)((int)this + 0x20);
    }
    if (*(float *)((int)this + 0x24) < **(float **)((int)this + 0x38)) {
      **(float **)((int)this + 0x38) = *(float *)((int)this + 0x24);
      *(undefined1 *)((int)this + 0x50) = 1;
      return;
    }
  }
  else {
    **(float **)((int)this + 0x38) =
         (*(float *)((int)this + 0x24) - *(float *)((int)this + 0x20)) * param_1 +
         *(float *)((int)this + 0x20);
  }
  *(undefined1 *)((int)this + 0x50) = 1;
  return;
}


//// FUNCTION FUN_00c1d950 @ 00c1d950 ////

void __thiscall FUN_00c1d950(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  return;
}


//// FUNCTION FUN_00c1d970 @ 00c1d970 ////

void __thiscall FUN_00c1d970(void *this,void *param_1)

{
  float *pfVar1;
  float fVar2;
  char *_Format;
  double dVar3;
  char local_208 [516];
  
  pfVar1 = *(float **)((int)this + 0x38);
  fVar2 = ABS(*pfVar1);
  if (1e+06 <= fVar2) {
    dVar3 = (double)*pfVar1;
    _Format = "%g";
  }
  else if (fVar2 < 1000.0) {
    if (100.0 <= fVar2) {
      dVar3 = (double)*pfVar1;
      _Format = "%.1f";
    }
    else {
      dVar3 = (double)*pfVar1;
      if (10.0 <= fVar2) {
        _Format = "%.2f";
      }
      else {
        _Format = "%.3f";
      }
    }
  }
  else {
    dVar3 = (double)*pfVar1;
    _Format = "%.0f";
  }
  _sprintf(local_208,_Format,dVar3);
  FUN_00bbfaa0(param_1,local_208);
  return;
}


//// FUNCTION FUN_00c1da30 @ 00c1da30 ////

void __thiscall
FUN_00c1da30(void *this,undefined4 param_1,undefined4 param_2,int param_3,float param_4,
            float param_5,float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  float10 fVar1;
  void *this_00;
  undefined4 *this_01;
  LPCSTR pCVar2;
  float10 fVar3;
  float10 fVar4;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  void *pvStack_14;
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03b59;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x54);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    this_01 = FUN_00c1dd40(this_00,param_1);
  }
  local_4 = 0xffffffff;
  if (this_01 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\CVSTParameters.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x55);
    LH_LogErrorMessage(&local_110,") : ");
    FUN_00bbe970(0);
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  this_01[6] = param_2;
  this_01[0xe] = param_9;
  this_01[7] = param_3;
  (**(code **)(this_01[0x10] + 8))(param_4);
  (**(code **)(this_01[0x12] + 8))(param_4);
  FUN_00c1d950(this_01,param_4,param_5);
  if (param_3 == 0) {
    fVar3 = (float10)param_6 - (float10)param_4;
    fVar4 = (float10)param_5 - (float10)param_4;
  }
  else {
    if (param_3 != 1) goto LAB_00c1dbea;
    fVar4 = (float10)log2((float10)param_4);
    fVar1 = (float10)log2((float10)param_6);
    fVar3 = (float10)0.6931471805599453 * fVar1 -
            (float10)(float)((float10)0.6931471805599453 * fVar4);
    fVar1 = (float10)log2((float10)param_5);
    fVar4 = (float10)0.6931471805599453 * fVar1 -
            (float10)(float)((float10)0.6931471805599453 * fVar4);
  }
  FUN_00c1d8b0(this_01,(float)(fVar3 / fVar4));
LAB_00c1dbea:
  FUN_00bcfac0((void *)((int)this + 4),this,(int)this_01);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00c1dc10 @ 00c1dc10 ////

void __fastcall FUN_00c1dc10(int *param_1)

{
  int *this;
  int *_Memory;
  
  this = param_1 + 1;
  _Memory = (int *)FUN_00bcecf0(this);
  while( true ) {
    if (_Memory == (int *)0x0) {
      return;
    }
    FUN_00bcff70(this,param_1,(int)_Memory);
    if (_Memory != (int *)0x0) break;
    _Memory = (int *)FUN_00bcecf0(this);
  }
  FUN_00c1dda0(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00c1dd40 @ 00c1dd40 ////

undefined4 * __thiscall FUN_00c1dd40(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03b13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bcf160(this);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x14) = param_1;
  FUN_00be1e00((undefined4 *)((int)this + 0x40));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00be1e00((undefined4 *)((int)this + 0x48));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c1dda0 @ 00c1dda0 ////

void __fastcall FUN_00c1dda0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d03b33;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00be1f10(param_1 + 0x12);
  local_4 = local_4 & 0xffffff00;
  FUN_00be1f10(param_1 + 0x10);
  local_4 = 0xffffffff;
  FUN_00bcf880(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1de40 @ 00c1de40 ////

int * __thiscall FUN_00c1de40(void *this,byte param_1)

{
  FUN_00c1dda0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1dfe0 @ 00c1dfe0 ////

void __fastcall FUN_00c1dfe0(undefined4 *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_115;
  undefined4 *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d03bbe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da5bd8;
  local_4 = 0;
  local_114 = param_1;
  if (param_1[7] != 0) {
    iVar1 = acmStreamClose(param_1[7],0);
    if (iVar1 != 0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = CONCAT31(local_4._1_3_,5);
      LH_LogErrorMessage(&local_110,".\\LHACodecsACMCCodecInstance.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x100);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"Could not close down the acm stream");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_115,pCVar2);
      DebugBreak();
    }
    param_1[7] = 0;
  }
  if ((void *)param_1[0x11] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00c4b930(param_1 + 2);
  *param_1 = &PTR_LAB_00da0f54;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1e120 @ 00c1e120 ////

bool __fastcall FUN_00c1e120(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  LPCSTR pCVar6;
  bool bVar7;
  undefined4 uStack_168;
  int iStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined **ppuStack_11c;
  undefined1 uStack_118;
  undefined1 uStack_19;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d03bde;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x1c) == 0) {
    ExceptionList = &pvStack_c;
    LH_Assert((void *)((int)&uStack_168 + 2),"AudioStreamHandle != NULL\n");
    DebugBreak();
  }
  piVar1 = (int *)(param_1 + 8);
  uVar3 = (**(code **)(*(int *)(param_1 + 8) + 8))();
  if (uVar3 <= *(uint *)(param_1 + 0x4c)) {
    ExceptionList = pvStack_c;
    return false;
  }
  iVar4 = (**(code **)(*piVar1 + 8))();
  uVar3 = iVar4 - *(int *)(param_1 + 0x4c);
  if (*(uint *)(param_1 + 0x40) < uVar3) {
    uVar3 = *(uint *)(param_1 + 0x40);
  }
  iVar4 = FUN_00bbc590((void *)(param_1 + 0x3c),0);
  cVar2 = (**(code **)(*piVar1 + 4))(iVar4,*(undefined4 *)(param_1 + 0x4c),uVar3);
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar3;
    uStack_168 = 0;
    iStack_164 = FUN_00bbc590((void *)(param_1 + 0x3c),0);
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_160 = uVar3;
    iStack_154 = FUN_00bbc590((void *)(param_1 + 0x44),0);
    uStack_150 = *(undefined4 *)(param_1 + 0x48);
    uStack_14c = 0;
    uStack_148 = 0;
    iVar4 = acmStreamPrepareHeader(*(undefined4 *)(param_1 + 0x1c),&stack0xfffffe90,0);
    if (iVar4 == 0) {
      iVar4 = acmStreamConvert(*(undefined4 *)(param_1 + 0x1c),&stack0xfffffe90,
                               (uVar3 != *(uint *)(param_1 + 0x40)) - 1U & 4);
      bVar7 = iVar4 == 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (bVar7) {
        if (uStack_160 != uStack_15c) {
          uVar5 = (**(code **)(*piVar1 + 8))();
          *(undefined4 *)(param_1 + 0x4c) = uVar5;
        }
        *(undefined4 *)(param_1 + 0x54) = uStack_14c;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0;
        ppuStack_11c = &PTR_LAB_00d9db7c;
        uStack_118 = 0;
        uStack_19 = 0;
        uStack_10 = 0;
        LH_LogErrorMessage(&ppuStack_11c,".\\LHACodecsACMCCodecInstance.cpp");
        LH_LogErrorMessage(&ppuStack_11c,"(");
        FUN_00bbe970(0x6d);
        LH_LogErrorMessage(&ppuStack_11c,") : ");
        LH_LogErrorMessage(&ppuStack_11c,"There may be trouble ahead.... ");
        LH_PrintResourceID(&ppuStack_11c,iVar4);
        LH_LogErrorMessage(&ppuStack_11c,"\n");
        pCVar6 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_11c);
        LH_Assert(&stack0xfffffe8f,pCVar6);
        uStack_10 = 0xffffffff;
      }
      iVar4 = acmStreamUnprepareHeader(*(undefined4 *)(param_1 + 0x1c),&stack0xfffffe90,0);
      if (iVar4 == 0) {
        ExceptionList = pvStack_18;
        return bVar7;
      }
      ppuStack_11c = &PTR_LAB_00d9db7c;
      uStack_118 = 0;
      uStack_19 = 0;
      uStack_10 = 1;
      LH_LogErrorMessage(&ppuStack_11c,".\\LHACodecsACMCCodecInstance.cpp");
      LH_LogErrorMessage(&ppuStack_11c,"(");
      FUN_00bbe970(0x71);
      LH_LogErrorMessage(&ppuStack_11c,") : ");
      LH_LogErrorMessage(&ppuStack_11c,"Error unpreparing header");
      LH_LogErrorMessage(&ppuStack_11c,"\n");
      pCVar6 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_11c);
      LH_Assert(&stack0xfffffe8f,pCVar6);
      DebugBreak();
      ExceptionList = pvStack_18;
      return bVar7;
    }
  }
  ExceptionList = pvStack_18;
  return false;
}


//// FUNCTION FUN_00c1e3d0 @ 00c1e3d0 ////

undefined4 __thiscall FUN_00c1e3d0(void *this,undefined4 *param_1,uint param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  uint3 extraout_var;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (*(int *)((int)this + 0x1c) == 0) {
    return 0;
  }
  *param_3 = 0;
  piVar2 = param_3;
  if (param_2 != 0) {
    do {
      if (*(int *)((int)this + 0x54) == 0) {
        piVar2 = (int *)(**(code **)(*(int *)((int)this + 8) + 8))();
        if (*(int **)((int)this + 0x4c) == piVar2) break;
        bVar1 = FUN_00c1e120((int)this);
        if (!bVar1) {
          return (uint)extraout_var << 8;
        }
      }
      piVar2 = *(int **)((int)this + 0x54);
      piVar5 = (int *)param_2;
      if (piVar2 < param_2) {
        piVar5 = piVar2;
      }
      if (piVar5 == (int *)0x0) break;
      puVar3 = (undefined4 *)FUN_00bbc590((void *)((int)this + 0x44),*(uint *)((int)this + 0x50));
      puVar6 = param_1;
      for (uVar4 = (uint)piVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = (uint)piVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + (int)piVar5);
      *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + (int)piVar5;
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) - (int)piVar5;
      param_2 = param_2 - (int)piVar5;
      *param_3 = *param_3 + (int)piVar5;
      if (param_2 == 0) {
        return 1;
      }
    } while( true );
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


//// FUNCTION WindowsACM_CodecInstance_Init @ 00c1e4b0 ////

undefined4 * __thiscall WindowsACM_CodecInstance_Init(void *this,undefined4 param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_70;
  uint local_6c;
  void *local_68;
  undefined4 local_64 [2];
  int local_5c;
  undefined4 local_58;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03c24;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00da5bd8;
  *(undefined4 *)((int)this + 4) = param_1;
  local_68 = this;
  FUN_00c4b7f0((undefined4 *)((int)this + 8));
  puVar10 = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *puVar10 = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4._0_1_ = 4;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  FUN_00c0be20(local_64);
  local_4 = CONCAT31(local_4._1_3_,5);
  uVar3 = FUN_00c0bec0(local_64,param_2,3);
  if ((char)uVar3 == '\0') goto LAB_00c1e69b;
  FUN_00c4b5a0((undefined4 *)((int)this + 8),param_2,local_5c,local_58);
  puVar4 = (undefined4 *)FUN_00c0b3a0(local_64);
  if (puVar4 == (undefined4 *)0x0) {
    LH_Assert(&param_2,"srcFormat != NULL\n");
    DebugBreak();
  }
  uVar9 = *(ushort *)(puVar4 + 4) + 0x12;
  pvVar5 = operator_new(uVar9);
  FUN_00c0c7e0(puVar10,(int)pvVar5,uVar9);
  puVar6 = (undefined4 *)FUN_00bbc590(puVar10,0);
  puVar10 = puVar4;
  for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar6 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar11 = (undefined2 *)((int)this + 0x28);
  *puVar11 = 1;
  *(undefined2 *)((int)this + 0x36) = 0x10;
  iVar7 = puVar4[1];
  *(int *)((int)this + 0x2c) = iVar7;
  sVar1 = *(short *)((int)puVar4 + 2);
  *(short *)((int)this + 0x2a) = sVar1;
  uVar2 = sVar1 * 2;
  *(ushort *)((int)this + 0x34) = uVar2;
  uVar14 = 4;
  uVar13 = 0;
  uVar12 = 0;
  uVar3 = 0;
  *(uint *)((int)this + 0x30) = (uint)uVar2 * iVar7;
  *(undefined2 *)((int)this + 0x38) = 0;
  iVar7 = FUN_00bbc590((void *)((int)this + 0x20),0);
  puVar10 = (undefined4 *)((int)this + 0x1c);
  iVar7 = acmStreamOpen(puVar10,0,iVar7,puVar11,uVar3,uVar12,uVar13,uVar14);
  if (iVar7 == 0) {
    iVar7 = acmStreamSize(*puVar10,local_58,&local_70,0);
    if (iVar7 != 0) {
      acmStreamClose(*puVar10,0);
      *puVar10 = 0;
      goto LAB_00c1e69b;
    }
    uVar8 = (uint)*(ushort *)((int)this + 0x34);
    *(undefined4 *)((int)this + 0x58) = local_70;
    uVar8 = ((uVar8 + 0x1fff) / uVar8) * uVar8;
    iVar7 = acmStreamSize(*puVar10,uVar8,&local_6c,1);
    if (iVar7 == 0) {
      FUN_00bbc1d0((void *)((int)this + 0x44),uVar8);
      FUN_00bbc1d0((void *)((int)this + 0x3c),local_6c);
      goto LAB_00c1e69b;
    }
    acmStreamClose(*puVar10,0);
  }
  *puVar10 = 0;
LAB_00c1e69b:
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00c0bd10(local_64);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c1e6c0 @ 00c1e6c0 ////

undefined4 * __thiscall FUN_00c1e6c0(void *this,byte param_1)

{
  FUN_00c1dfe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1e7d0 @ 00c1e7d0 ////

void __fastcall FUN_00c1e7d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d03c4e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da5c68;
  local_4 = 2;
  FUN_00c4bac0((int)(param_1 + 10));
  local_4._0_1_ = 1;
  FUN_00c4bbe0(param_1 + 10);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bd9e50(param_1 + 2);
  *param_1 = &PTR_LAB_00da0f54;
  ExceptionList = local_c;
  return;
}


//// FUNCTION WMA_CodecInstance_Init @ 00c1e840 ////

undefined4 * __thiscall WMA_CodecInstance_Init(void *this,undefined4 param_1,int *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03c76;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined ***)this = &PTR_LAB_00da5c68;
  FUN_00bd9d00((void *)((int)this + 8),param_2);
  *(undefined4 *)((int)this + 0x20) = param_1;
  local_4._0_1_ = 1;
  FUN_00c4bb90((undefined4 *)((int)this + 0x28));
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00c4bc70((undefined4 *)((int)this + 0x28),(void *)((int)this + 8));
  *(undefined1 *)((int)this + 4) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c1e8c0 @ 00c1e8c0 ////

undefined4 * __thiscall FUN_00c1e8c0(void *this,byte param_1)

{
  FUN_00c1e7d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1ea90 @ 00c1ea90 ////

void __fastcall FUN_00c1ea90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d03c96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da5c8c;
  local_4 = 1;
  if (*(char *)((int)param_1 + 5) != '\0') {
    FUN_00c4c0f0(param_1 + 2);
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00bd9e50(param_1 + 0xb2);
  *param_1 = &PTR_LAB_00da0f54;
  ExceptionList = local_c;
  return;
}


//// FUNCTION LHACodecsOggVorbisCCodecInstance_Open @ 00c1eb00 ////

undefined4 * __thiscall
LHACodecsOggVorbisCCodecInstance_Open(void *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  LPCSTR pCVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 local_119;
  int local_118;
  undefined **local_114;
  undefined1 local_110;
  undefined1 local_11;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03cf8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_00da5c8c;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  local_10 = this;
  FUN_00bd9d00((void *)((int)this + 0x2c8),param_2);
  *(undefined4 *)((int)this + 0x2e0) = param_1;
  iVar5 = (int)this + 8;
  local_4._0_1_ = 1;
  iVar2 = FUN_00c4f2d0((void *)((int)this + 0x2c8),0,0);
  if (iVar2 < 0) {
    local_114 = &PTR_LAB_00d9db7c;
    local_110 = 0;
    local_11 = 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    LH_LogErrorMessage(&local_114,".\\LHACodecsOggVorbisCCodecInstance.cpp");
    LH_LogErrorMessage(&local_114,"(");
    FUN_00bbe970(0xe);
    LH_LogErrorMessage(&local_114,") : ");
    pcVar8 = "Warning: could not open ogg vorbis file...";
  }
  else {
    *(undefined1 *)((int)this + 5) = 1;
    iVar2 = FUN_00c4c270(iVar5);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_00c4c5e0(iVar5,-1);
      piVar6 = (int *)*puVar4;
      local_118 = FUN_00c4c5b0(iVar5,-1);
      iVar2 = *piVar6;
      while (iVar2 != 0) {
        local_114 = &PTR_LAB_00d9db7c;
        local_110 = 0;
        local_11 = 0;
        local_4._0_1_ = 4;
        LH_LogErrorMessage(&local_114,".\\LHACodecsOggVorbisCCodecInstance.cpp");
        LH_LogErrorMessage(&local_114,"(");
        FUN_00bbe970(0x22);
        LH_LogErrorMessage(&local_114,") : ");
        LH_LogErrorMessage(&local_114,"Comment = ");
        LH_LogErrorMessage(&local_114,(char *)*piVar6);
        LH_LogErrorMessage(&local_114,"\n");
        pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_114);
        LH_Assert(&local_119,pCVar3);
        piVar1 = piVar6 + 1;
        piVar6 = piVar6 + 1;
        iVar2 = *piVar1;
      }
      local_114 = &PTR_LAB_00d9db7c;
      local_110 = 0;
      local_11 = 0;
      local_4._0_1_ = 5;
      LH_LogErrorMessage(&local_114,".\\LHACodecsOggVorbisCCodecInstance.cpp");
      LH_LogErrorMessage(&local_114,"(");
      FUN_00bbe970(0x25);
      LH_LogErrorMessage(&local_114,") : ");
      LH_LogErrorMessage(&local_114,"Bitstream is ");
      iVar2 = local_118;
      FUN_00bbe970(*(undefined4 *)(local_118 + 4));
      LH_LogErrorMessage(&local_114," channel, ");
      FUN_00bbe970(*(undefined4 *)(iVar2 + 8));
      LH_LogErrorMessage(&local_114,"Hz");
      LH_LogErrorMessage(&local_114,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_114);
      LH_Assert(&local_119,pCVar3);
      local_114 = &PTR_LAB_00d9db7c;
      local_110 = 0;
      local_11 = 0;
      local_4._0_1_ = 6;
      LH_LogErrorMessage(&local_114,".\\LHACodecsOggVorbisCCodecInstance.cpp");
      LH_LogErrorMessage(&local_114,"(");
      FUN_00bbe970(0x26);
      LH_LogErrorMessage(&local_114,") : ");
      LH_LogErrorMessage(&local_114,"Decoded length: ");
      lVar7 = FUN_00c4c3a0(iVar5,-1);
      FUN_00bbe970((int)lVar7);
      LH_LogErrorMessage(&local_114," samples");
      LH_LogErrorMessage(&local_114,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_114);
      LH_Assert(&local_119,pCVar3);
      local_114 = &PTR_LAB_00d9db7c;
      local_110 = 0;
      local_11 = 0;
      local_4 = CONCAT31(local_4._1_3_,7);
      LH_LogErrorMessage(&local_114,".\\LHACodecsOggVorbisCCodecInstance.cpp");
      LH_LogErrorMessage(&local_114,"(");
      FUN_00bbe970(0x27);
      LH_LogErrorMessage(&local_114,") : ");
      LH_LogErrorMessage(&local_114,"Encoded by: ");
      iVar5 = FUN_00c4c5e0(iVar5,-1);
      LH_LogErrorMessage(&local_114,*(char **)(iVar5 + 0xc));
      LH_LogErrorMessage(&local_114,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_114);
      LH_Assert(&local_119,pCVar3);
      *(undefined1 *)((int)this + 4) = 1;
      ExceptionList = local_c;
      return this;
    }
    local_114 = &PTR_LAB_00d9db7c;
    local_110 = 0;
    local_11 = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    LH_LogErrorMessage(&local_114,".\\LHACodecsOggVorbisCCodecInstance.cpp");
    LH_LogErrorMessage(&local_114,"(");
    FUN_00bbe970(0x18);
    LH_LogErrorMessage(&local_114,") : ");
    pcVar8 = "Warning: this ogg vorbis session is not seekable";
  }
  LH_LogErrorMessage(&local_114,pcVar8);
  LH_LogErrorMessage(&local_114,"\n");
  pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_114);
  LH_Assert(&local_119,pCVar3);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c1ef40 @ 00c1ef40 ////

undefined4 * __thiscall FUN_00c1ef40(void *this,byte param_1)

{
  FUN_00c1ea90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1efe0 @ 00c1efe0 ////

void __fastcall FUN_00c1efe0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5da8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00c1f000 @ 00c1f000 ////

void __fastcall FUN_00c1f000(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5da8;
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  *param_1 = &PTR_LAB_00da5d90;
  return;
}


//// FUNCTION FUN_00c1f060 @ 00c1f060 ////

undefined4 * __thiscall FUN_00c1f060(void *this,byte param_1)

{
  FUN_00c1f000(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1f080 @ 00c1f080 ////

undefined4 * __fastcall FUN_00c1f080(undefined4 *param_1)

{
  FUN_00bcf160(param_1);
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}


//// FUNCTION FUN_00c1f0a0 @ 00c1f0a0 ////

void FUN_00c1f0a0(void)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  int *in_ECX;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cff77b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_00bcef20(in_ECX);
  if ((char)uVar1 != '\0') {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    uStack_4 = 0;
    LH_LogErrorMessage(&ppuStack_110,".\\PKContainersCRedBlackTree.cpp");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x387);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"Node still initialised!");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_111,pCVar2);
    DebugBreak();
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c1f0b0 @ 00c1f0b0 ////

int * __fastcall FUN_00c1f0b0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c1f130 @ 00c1f130 ////

void __thiscall FUN_00c1f130(void *this,int param_1)

{
  undefined4 *this_00;
  void *_Memory;
  
  this_00 = (undefined4 *)((int)this + 4);
  _Memory = (void *)FUN_00bcecf0(this_00);
  if (_Memory == (void *)0x0) {
    return;
  }
  do {
    if (*(int *)((int)_Memory + 0x14) == param_1) {
      FUN_00bcff70(this_00,this,(int)_Memory);
      FUN_00c1f0a0();
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    _Memory = (void *)FUN_00bcf3f0(this_00,this,(int)_Memory);
  } while (_Memory != (void *)0x0);
  return;
}


//// FUNCTION FUN_00c1f1a0 @ 00c1f1a0 ////

void __fastcall FUN_00c1f1a0(int *param_1)

{
  int *this;
  void *_Memory;
  
  this = param_1 + 1;
  _Memory = (void *)FUN_00bcecf0(this);
  while( true ) {
    if (_Memory == (void *)0x0) {
      return;
    }
    FUN_00bcff70(this,param_1,(int)_Memory);
    if (_Memory != (void *)0x0) break;
    _Memory = (void *)FUN_00bcecf0(this);
  }
  FUN_00c1f0a0();
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00c1f1f0 @ 00c1f1f0 ////

uint __fastcall FUN_00c1f1f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  for (iVar1 = FUN_00bcecf0(param_1 + 1); iVar1 != 0;
      iVar1 = FUN_00bcf3f0(param_1 + 1,param_1,iVar1)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 0x98))();
    FUN_00bddd90(*(int *)(iVar1 + 0x14) + 8);
    FUN_00bdddb0(*(int *)(iVar1 + 0x14) + 8);
    uVar3 = FUN_00acd42c();
    if (uVar2 < (uint)uVar3) {
      uVar2 = (uint)uVar3;
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00c1f280 @ 00c1f280 ////

void __thiscall FUN_00c1f280(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03d1b;
  local_c = ExceptionList;
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\CSFXTimeline.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x6d);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Width must be greater than 0");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1f360 @ 00c1f360 ////

void __thiscall FUN_00c1f360(void *this,float param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  fVar2 = FUN_00bddeb0(*(int *)(param_2 + 0x14) + 8);
  iVar1 = _rand();
  log2((float10)1.0 - (float10)iVar1 * (float10)3.051851e-05);
  log2((float10)1.0 - (float10)(float)((fVar2 * (float10)10.0) / (float10)param_1));
  uVar3 = FUN_00acd42c();
  *(int *)(param_2 + 0x18) = (int)uVar3 + 1 + param_3;
  FUN_00bcfac0((void *)((int)this + 4),this,param_2);
  return;
}


//// FUNCTION FUN_00c1f3e0 @ 00c1f3e0 ////

void __fastcall FUN_00c1f3e0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03d2d;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00c1f1a0(param_1);
  local_4 = 0xffffffff;
  *param_1 = (int)&PTR_LAB_00da5de4;
  FUN_00bcffc0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1f430 @ 00c1f430 ////

void __thiscall FUN_00c1f430(void *this,float param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03d42;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x1c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00bcf160(puVar1);
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  puVar1[5] = param_2;
  local_4 = 0xffffffff;
  FUN_00c1f360(this,param_1,(int)puVar1,*(int *)((int)this + 0xc));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1f4c0 @ 00c1f4c0 ////

undefined4 __thiscall FUN_00c1f4c0(void *this,float param_1,int *param_2)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  this_00 = (undefined4 *)((int)this + 4);
  iVar3 = FUN_00bcecf0(this_00);
  if ((iVar3 != 0) && (uVar4 = *(uint *)(iVar3 + 0x18), uVar4 <= *(uint *)((int)this + 0xc))) {
    FUN_00bcff70(this_00,this,iVar3);
    FUN_00c1f360(this,param_1,iVar3,uVar4);
    uVar2 = *(uint *)(iVar3 + 0x18);
    if (*(uint *)(iVar3 + 0x18) <= *(uint *)((int)this + 0xc)) {
      do {
        uVar4 = uVar2;
        FUN_00bcff70(this_00,this,iVar3);
        FUN_00c1f360(this,param_1,iVar3,uVar4);
        uVar2 = *(uint *)(iVar3 + 0x18);
      } while (*(uint *)(iVar3 + 0x18) <= *(uint *)((int)this + 0xc));
    }
    iVar1 = *(int *)((int)this + 0xc);
    uVar5 = FUN_00acd42c();
    *param_2 = (uVar4 - iVar1) * (int)uVar5;
    return *(undefined4 *)(iVar3 + 0x14);
  }
  return 0;
}


//// FUNCTION FUN_00c1f560 @ 00c1f560 ////

undefined4 * __fastcall FUN_00c1f560(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5de4;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da5e40;
  param_1[3] = 0;
  return param_1;
}


//// FUNCTION FUN_00c1f5e0 @ 00c1f5e0 ////

void * __thiscall FUN_00c1f5e0(void *this,byte param_1)

{
  FUN_00c1f0a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1f680 @ 00c1f680 ////

void __fastcall FUN_00c1f680(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5de4;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c1f700 @ 00c1f700 ////

undefined4 * __fastcall FUN_00c1f700(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5de4;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c1f720 @ 00c1f720 ////

undefined4 * __thiscall FUN_00c1f720(void *this,byte param_1)

{
  FUN_00c1f680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1f740 @ 00c1f740 ////

void __fastcall FUN_00c1f740(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5de4;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c1f750 @ 00c1f750 ////

undefined4 * __fastcall FUN_00c1f750(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5de4;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da5e40;
  return param_1;
}


//// FUNCTION FUN_00c1f770 @ 00c1f770 ////

undefined4 * __thiscall FUN_00c1f770(void *this,byte param_1)

{
  FUN_00c1f740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1f790 @ 00c1f790 ////

void __thiscall FUN_00c1f790(void *this,undefined4 param_1)

{
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03d5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x38);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    FUN_00c26c10(this_00,this,param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1f800 @ 00c1f800 ////

void __thiscall FUN_00c1f800(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_00da5e8c;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00c1f820 @ 00c1f820 ////

int __fastcall FUN_00c1f820(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00bcecf0((undefined4 *)(param_1 + 0x18));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00c26960(iVar1);
    if (iVar2 != 0) break;
    iVar1 = FUN_00bcf3f0((void *)(param_1 + 0x18),(int *)(param_1 + 0x14),iVar1);
  }
  return iVar2;
}


//// FUNCTION FUN_00c1f8c0 @ 00c1f8c0 ////

void __fastcall FUN_00c1f8c0(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_00bcecf0((undefined4 *)(param_1 + 0x18));
  if (pvVar1 != (void *)0x0) {
    do {
      FUN_00c26a50(pvVar1);
      pvVar1 = (void *)FUN_00bcf3f0((void *)(param_1 + 0x18),(int *)(param_1 + 0x14),(int)pvVar1);
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c1f900 @ 00c1f900 ////

void __thiscall FUN_00c1f900(void *this,undefined4 param_1)

{
  void *this_00;
  
  this_00 = (void *)FUN_00bcecf0((undefined4 *)((int)this + 0x18));
  if (this_00 != (void *)0x0) {
    do {
      FUN_00c26c00(this_00,param_1);
      this_00 = (void *)FUN_00bcf3f0((void *)((int)this + 0x18),(int *)((int)this + 0x14),
                                     (int)this_00);
    } while (this_00 != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c1f940 @ 00c1f940 ////

void __thiscall FUN_00c1f940(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bcef50((void *)((int)this + 0x18),(void *)((int)this + 0x14),&param_1,&param_1);
  if (puVar1 != (undefined4 *)0x0) {
    param_1 = 1;
                    /* WARNING: Could not recover jumptable at 0x00c1f96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


//// FUNCTION FUN_00c1f980 @ 00c1f980 ////

void __fastcall FUN_00c1f980(undefined4 param_1)

{
  int extraout_EDX;
  undefined **local_1c;
  undefined1 *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03d75;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c1f800(local_14,param_1);
  local_18 = local_14;
  local_1c = &PTR_LAB_00da1838;
  local_4 = 1;
  FUN_00bcf140((void *)(*(int *)(extraout_EDX + 4) + 0xc),&local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1f9f0 @ 00c1f9f0 ////

void __fastcall FUN_00c1f9f0(int *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d03dab;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  iVar1 = FUN_00bbea70(param_1 + 0xd);
  if (iVar1 != 0) {
    FUN_00bcff70((void *)(*param_1 + 0x20),(int *)(*param_1 + 0x1c),(int)param_1);
  }
  iVar1 = FUN_00bcecf0(param_1 + 6);
  while (iVar1 != 0) {
    FUN_00c1f940(param_1,*(undefined4 *)(iVar1 + 0x1c));
    iVar1 = FUN_00bcecf0(param_1 + 6);
  }
  FUN_00bcff70((void *)(*param_1 + 0x14),(int *)(*param_1 + 0x10),(int)param_1);
  local_4._0_1_ = 2;
  FUN_00bcf880(param_1 + 0x14);
  local_4._0_1_ = 1;
  FUN_00bcf880(param_1 + 0xf);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00be1f10(param_1 + 0xd);
  local_4 = 0xffffffff;
  param_1[5] = (int)&PTR_LAB_00da5e94;
  FUN_00bcffc0(param_1 + 6);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c1fac0 @ 00c1fac0 ////

int * __thiscall
FUN_00c1fac0(void *this,int param_1,int param_2,int param_3,int *param_4,char *param_5)

{
  int *this_00;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03de1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 4) = param_2;
  *(int *)this = param_1;
  *(int *)((int)this + 8) = param_3;
  *(int *)((int)this + 0xc) = param_4[1];
  *(int *)((int)this + 0x10) = param_4[2];
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_00da5e94;
  FUN_00bcf170((int *)((int)this + 0x18));
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_00da5ebc;
  *(int *)((int)this + 0x20) = *param_4;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(int *)((int)this + 0x2c) = param_4[5];
  *(int *)((int)this + 0x30) = param_4[4];
  this_00 = (int *)((int)this + 0x34);
  local_4 = 0;
  FUN_00be1e00(this_00);
  local_4._0_1_ = 1;
  FUN_00bcf160((undefined4 *)((int)this + 0x3c));
  local_4._0_1_ = 2;
  FUN_00bcf160((undefined4 *)((int)this + 0x50));
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00bcfac0((void *)(*(int *)this + 0x14),(int *)(*(int *)this + 0x10),(int)this);
  *(uint *)((int)this + 0x28) = (uint)(param_4[3] != 0);
  FUN_00bbfaa0(this_00,param_5);
  iVar1 = FUN_00bbea70(this_00);
  if (iVar1 != 0) {
    FUN_00bcfac0((void *)(*(int *)this + 0x20),(int *)(*(int *)this + 0x1c),(int)this);
  }
  FUN_00c1f980(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c1fbc0 @ 00c1fbc0 ////

int * __fastcall FUN_00c1fbc0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c1fc90 @ 00c1fc90 ////

void __fastcall FUN_00c1fc90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da17dc;
  return;
}


//// FUNCTION FUN_00c1fca0 @ 00c1fca0 ////

undefined4 * __thiscall FUN_00c1fca0(void *this,byte param_1)

{
  FUN_00c1fc90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1fcc0 @ 00c1fcc0 ////

void __fastcall FUN_00c1fcc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5e94;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c1fdd0 @ 00c1fdd0 ////

undefined4 * __fastcall FUN_00c1fdd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5e94;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c1fdf0 @ 00c1fdf0 ////

undefined4 * __thiscall FUN_00c1fdf0(void *this,byte param_1)

{
  FUN_00c1fcc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1fe10 @ 00c1fe10 ////

void __fastcall FUN_00c1fe10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5e94;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c1fe40 @ 00c1fe40 ////

undefined4 * __fastcall FUN_00c1fe40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5e94;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da5ebc;
  return param_1;
}


//// FUNCTION FUN_00c1fe60 @ 00c1fe60 ////

undefined4 * __thiscall FUN_00c1fe60(void *this,byte param_1)

{
  FUN_00c1fe10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c1ff30 @ 00c1ff30 ////

void __fastcall FUN_00c1ff30(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_00c20050 @ 00c20050 ////

void __fastcall FUN_00c20050(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5ee4;
  return;
}


//// FUNCTION FUN_00c200b0 @ 00c200b0 ////

void __thiscall FUN_00c200b0(void *this,float param_1,float param_2)

{
  undefined2 unaff_SI;
  float10 fVar1;
  
  fVar1 = FUN_00acf400((double)(param_1 / param_2),unaff_SI);
  *(float *)this = (float)((float10)param_1 - fVar1 * (float10)param_2);
  return;
}


//// FUNCTION FUN_00c200e0 @ 00c200e0 ////

void __fastcall
FUN_00c200e0(undefined4 *param_1,undefined4 *param_2,float param_3,float param_4,float param_5,
            float *param_6,float *param_7)

{
  ulonglong uVar1;
  
  FUN_00c200b0(&param_4,param_4,param_3);
  FUN_00c200b0(&param_5,param_5,param_3);
  *param_6 = param_4 * (1.0 / param_3);
  *param_7 = param_5 * (1.0 / param_3);
  uVar1 = FUN_00acd42c();
  *param_1 = (int)uVar1;
  uVar1 = FUN_00acd42c();
  *param_2 = (int)uVar1;
  return;
}


//// FUNCTION FUN_00c20150 @ 00c20150 ////

void __fastcall FUN_00c20150(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x10) + 10.0;
  return;
}


//// FUNCTION FUN_00c20170 @ 00c20170 ////

uint __fastcall FUN_00c20170(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar1 = *(float *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar3 = (uint)(ushort)((ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 < 0.0 || (fVar1 == 0.0) != 0) {
      return uVar3;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x10);
    uVar3 = CONCAT22((short)((uint)*(int *)(param_1 + 0x14) >> 0x10),
                     (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                     (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 >= fVar2) {
      return uVar3;
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_00c201a0 @ 00c201a0 ////

void __fastcall FUN_00c201a0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c201a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1 + 0x20))();
  return;
}


//// FUNCTION FUN_00c201b0 @ 00c201b0 ////

void __fastcall FUN_00c201b0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (param_1[5] == 0) {
    if (((float)param_1[7] == 0.0) || ((float)param_1[6] == 0.0)) {
      param_1[7] = 0;
      (**(code **)(param_1[8] + 8))(param_1[7]);
      return;
    }
    fVar1 = (float)param_1[7];
    param_1[7] = (int)(fVar1 / (float)param_1[6]);
    if (1.0 < fVar1 / (float)param_1[6]) {
      param_1[7] = 0x3f800000;
      (**(code **)(param_1[8] + 8))(param_1[7]);
      return;
    }
  }
  else {
    fVar2 = FUN_00c2cc90(param_1,(float)param_1[7]);
    param_1[7] = (int)(float)fVar2;
  }
  (**(code **)(param_1[8] + 8))(param_1[7]);
  return;
}


//// FUNCTION FUN_00c20240 @ 00c20240 ////

void __thiscall FUN_00c20240(void *this,float param_1,float param_2)

{
  float10 fVar1;
  
  if (*(int *)((int)this + 0x14) == 0) {
    fVar1 = FUN_00c2cc90(this,param_1);
    *(float *)((int)this + 0x1c) =
         (float)(fVar1 * (float10)param_2 + (float10)*(float *)((int)this + 0x1c));
    return;
  }
  if ((0.0 < param_2) && (param_1 < *(float *)((int)this + 0x1c))) {
    *(float *)((int)this + 0x1c) = param_1;
  }
  return;
}


//// FUNCTION FUN_00c20290 @ 00c20290 ////

void __fastcall FUN_00c20290(undefined4 *param_1)

{
  int extraout_ECX;
  int iVar1;
  int *extraout_EDX;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = (int *)*param_1;
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      iVar1 = *piVar2;
      uVar3 = 0;
      if (piVar2[1] != 0) {
        do {
          FUN_00c20150(iVar1);
          iVar1 = extraout_ECX + 0x38;
          uVar3 = uVar3 + 1;
          piVar2 = extraout_EDX;
        } while (uVar3 < (uint)extraout_EDX[1]);
      }
      piVar2 = piVar2 + 4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00c202d0 @ 00c202d0 ////

void __fastcall FUN_00c202d0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)*param_1;
  if (param_1[1] != 0) {
    do {
      piVar4 = (int *)*puVar3;
      uVar1 = 0;
      if (puVar3[1] != 0) {
        do {
          FUN_00c201b0(piVar4);
          piVar4 = piVar4 + 0xe;
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)puVar3[1]);
      }
      puVar3 = puVar3 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00c20320 @ 00c20320 ////

void FUN_00c20320(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *unaff_retaddr;
  uint local_4;
  
  piVar1 = (int *)*param_1;
  local_4 = 0;
  if (param_1[1] != 0) {
    do {
      iVar2 = *piVar1;
      uVar3 = 0;
      if (piVar1[1] != 0) {
        do {
          FUN_00c201a0(iVar2);
          iVar2 = iVar2 + 0x38;
          uVar3 = uVar3 + 1;
          param_1 = unaff_retaddr;
        } while (uVar3 < (uint)piVar1[1]);
      }
      piVar1 = piVar1 + 4;
      local_4 = local_4 + 1;
    } while (local_4 < (uint)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00c20390 @ 00c20390 ////

uint __thiscall FUN_00c20390(void *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(uint *)((int)this + 0x1c);
  if (uVar2 == 0) {
    return 0;
  }
  iVar3 = uVar2 - 1;
  iVar4 = 0;
  if (-1 < iVar3) {
    do {
      uVar2 = (iVar4 + iVar3) / 2;
      uVar1 = *(uint *)(*(int *)(uVar2 * 0x10 + 8 + *(int *)((int)this + 0x14)) + 8);
      if (param_1 < uVar1) {
        iVar3 = uVar2 - 1;
      }
      else {
        if (param_1 <= uVar1) {
          *param_2 = uVar2;
          return CONCAT31((int3)(uVar2 >> 8),1);
        }
        iVar4 = uVar2 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c2039c @ 00c2039c ////

uint __thiscall FUN_00c2039c(void *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = in_EAX - 1;
  iVar3 = 0;
  if (-1 < iVar2) {
    do {
      in_EAX = (iVar3 + iVar2) / 2;
      uVar1 = *(uint *)(*(int *)(in_EAX * 0x10 + 8 + *(int *)((int)this + 0x14)) + 8);
      if (param_1 < uVar1) {
        iVar2 = in_EAX - 1;
      }
      else {
        if (param_1 <= uVar1) {
          *param_2 = in_EAX;
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
        iVar3 = in_EAX + 1;
      }
    } while (iVar3 <= iVar2);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00c20410 @ 00c20410 ////

uint __thiscall FUN_00c20410(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00c20390(this,param_1,&param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *param_2 = *(undefined4 *)(*(int *)((int)this + 0x18) + param_1 * 4);
  return CONCAT31((int3)(param_1 >> 8),1);
}


//// FUNCTION FUN_00c20450 @ 00c20450 ////

uint __thiscall FUN_00c20450(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00c20390(this,param_1,&param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *(undefined4 *)(*(int *)((int)this + 0x18) + param_1 * 4) = param_2;
  return CONCAT31((int3)(param_1 >> 8),1);
}


//// FUNCTION FUN_00c20480 @ 00c20480 ////

float10 __thiscall FUN_00c20480(void *param_1,float param_2)

{
  float fVar1;
  undefined2 unaff_SI;
  ulonglong uVar2;
  int local_24;
  int local_20;
  int local_1c [2];
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03e98;
  local_c = ExceptionList;
  if (((*(int *)((int)param_1 + 0x14) != 1) && (param_2 != 0.0)) &&
     (*(float *)((int)param_1 + 0x10) != 0.0)) {
    ExceptionList = &local_c;
    FUN_00ad1180((double)(*(float *)((int)param_1 + 0x10) / param_2),unaff_SI);
    uVar2 = FUN_00acd42c();
    FUN_00c4f430(local_1c,(int)uVar2);
    local_4 = 0;
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    while ((local_14 <= local_1c[0] && (local_10 <= local_1c[0]))) {
      FUN_00c23640(local_1c,&local_24);
      FUN_00c20240(param_1,SQRT((float)local_24 * param_2 * (float)local_24 * param_2 +
                                (float)local_20 * param_2 * (float)local_20 * param_2),1.0);
      local_14 = local_14 + 1;
      if (local_1c[0] < local_14) {
        local_10 = local_10 + 1;
        local_14 = -local_1c[0];
      }
      FUN_00c22820(local_1c);
    }
    fVar1 = *(float *)((int)param_1 + 0x1c);
    local_4 = 0xffffffff;
    FUN_00c4f420();
    ExceptionList = local_c;
    return (float10)fVar1;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00c205c0 @ 00c205c0 ////

undefined4 __thiscall FUN_00c205c0(void *this,uint param_1,float *param_2,float *param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00c22cc0((void *)((int)this + 0x28),&param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00c22c50((void *)(iVar1 + 4),param_2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        LH_Assert(&param_1,"internalModel != NULL\n");
        DebugBreak();
      }
      fVar2 = (float10)(**(code **)(*(int *)(iVar1 + 0x20) + 4))();
      *param_3 = (float)fVar2;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
  }
  return 0;
}


//// FUNCTION FUN_00c207f0 @ 00c207f0 ////

void __fastcall FUN_00c207f0(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)param_1 + 4) != 0) {
    do {
      puVar1 = (undefined4 *)FUN_00c24310(param_1,uVar2);
      FUN_00c20290(puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_00c20820 @ 00c20820 ////

void __fastcall FUN_00c20820(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar1 = FUN_00c24420((void *)(param_1 + 8),uVar2);
      *(undefined1 *)(*(int *)(iVar1 + 8) + 0x24) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00c20850 @ 00c20850 ////

void __thiscall FUN_00c20850(void *this,float *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int *piVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  undefined4 *puVar17;
  int *piVar18;
  float10 fVar19;
  int local_d4;
  uint uStack_d0;
  int iStack_cc;
  uint local_c8;
  uint local_c4;
  float local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  float *pfStack_ac;
  uint local_a8;
  int iStack_a4;
  float *pfStack_a0;
  int local_9c;
  float *pfStack_98;
  int local_94;
  int local_90;
  float *pfStack_8c;
  int local_88;
  int local_84;
  float fStack_80;
  int local_7c;
  float local_78;
  void *local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  int local_64;
  int local_60;
  float fStack_5c;
  int local_58;
  float fStack_54;
  int local_50;
  undefined **local_4c;
  undefined4 *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  float fStack_28;
  float fStack_20;
  float afStack_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03eaa;
  local_c = ExceptionList;
  local_4c = &PTR_LAB_00da5f20;
  local_48 = (undefined4 *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  local_74 = this;
  FUN_00c20820((int)this);
  local_a8 = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      piVar8 = (int *)FUN_00c24310(this,local_a8);
      FUN_00c20290(piVar8);
      local_44 = piVar8[2];
      iVar15 = piVar8[5];
      local_38 = *piVar8;
      local_30 = piVar8[1];
      local_90 = iVar15;
      pvVar9 = (void *)FUN_00c23e50((int *)((int)this + 0x34));
      FUN_00c23390(pvVar9,piVar8[1] + 1);
      FUN_00c200e0(&local_64,&local_88,(float)piVar8[4],*param_1,param_1[1],&local_c0,&local_78);
      local_2c = iVar15 * iVar15;
      iVar14 = -iVar15;
      local_b4 = iVar14 - 1;
      local_9c = 0;
      local_bc = 0;
      local_7c = iVar14;
      if (-(iVar15 + 1) == iVar15 || iVar14 < iVar15 + 1) {
        local_b0 = local_b4 + local_88;
        do {
          uVar10 = local_bc;
          local_c4 = local_bc;
          local_7c = iVar14;
          local_84 = FUN_00c23510(iVar14,iVar15,local_2c);
          iVar13 = -local_84;
          local_d4 = -local_9c;
          if (iVar13 <= -local_9c) {
            local_d4 = iVar13;
          }
          iVar11 = local_9c + 1;
          if (local_9c + 1 <= local_84 + 1) {
            iVar11 = local_84 + 1;
          }
          local_bc = *(uint *)((int)pvVar9 + 0x10);
          if (local_d4 < iVar13) {
            local_bc = local_bc + (iVar13 - local_d4);
          }
          local_c8 = 0;
          if (local_d4 <= iVar11) {
            local_58 = iVar14 + local_88;
            iVar15 = (local_b4 ^ (int)local_b4 >> 0x1f) - ((int)local_b4 >> 0x1f);
            local_b8 = uVar10 + 1;
            local_50 = -1 - local_64;
            local_94 = (iVar11 - local_d4) + 1;
            local_d4 = local_d4 + local_64;
            local_60 = iVar15;
            do {
              uVar10 = local_c8;
              local_48 = (undefined4 *)
                         (*(int *)((int)pvVar9 + 4) +
                         (*(uint *)((int)pvVar9 + 0x10) % *(uint *)((int)pvVar9 + 0xc)) *
                         *(int *)((int)pvVar9 + 8) * 4);
              local_34 = local_48 + 1;
              puVar17 = local_48;
              for (uVar12 = piVar8[1] * 4 + 4U >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar17 = 0;
                puVar17 = puVar17 + 1;
              }
              for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
                *(undefined1 *)puVar17 = 0;
                puVar17 = (undefined4 *)((int)puVar17 + 1);
              }
              local_40 = piVar8[3] * local_d4;
              local_3c = piVar8[3] * local_58;
              (**(code **)(*param_2 + 4))(&local_4c);
              if ((iVar15 <= local_90) &&
                 (uVar12 = local_50 + local_d4 >> 0x1f,
                 (int)((local_50 + local_d4 ^ uVar12) - uVar12) <= local_9c)) {
                uVar12 = *(uint *)((int)pvVar9 + 0xc);
                iVar15 = *(int *)((int)pvVar9 + 8);
                iVar14 = *(int *)((int)pvVar9 + 4);
                local_c8 = 0;
                pfVar1 = (float *)(iVar14 + (*(uint *)((int)pvVar9 + 0x10) % uVar12) * iVar15 * 4);
                pfVar2 = (float *)(iVar14 + (uVar10 % uVar12) * iVar15 * 4);
                pfVar3 = (float *)(iVar14 + (local_c4 % uVar12) * iVar15 * 4);
                pfStack_ac = pfVar2 + 1;
                pfStack_98 = pfVar1 + 1;
                pfVar4 = (float *)(iVar14 + (local_b8 % uVar12) * iVar15 * 4);
                pfStack_a0 = pfVar3 + 1;
                pfVar16 = pfVar4 + 1;
                fStack_28 = (*pfVar4 - *pfVar3) * local_c0 + *pfVar3;
                fStack_80 = (((*pfVar1 - *pfVar2) * local_c0 + *pfVar2) - fStack_28) * local_78 +
                            fStack_28;
                if (piVar8[1] != 0) {
                  iStack_a4 = 0;
                  do {
                    fVar5 = *pfStack_ac;
                    pfStack_ac = pfStack_ac + 1;
                    fVar6 = *pfStack_98;
                    fStack_20 = *pfStack_a0;
                    pfStack_98 = pfStack_98 + 1;
                    pfStack_a0 = pfStack_a0 + 1;
                    pfStack_8c = pfVar16 + 1;
                    fStack_20 = (*pfVar16 - fStack_20) * local_c0 + fStack_20;
                    fStack_54 = (((fVar6 - fVar5) * local_c0 + fVar5) - fStack_20) * local_78 +
                                fStack_20;
                    pfVar16 = pfStack_8c;
                    if (0.0 < fStack_54) {
                      piVar18 = (int *)(*piVar8 + iStack_a4);
                      fStack_70 = (float)(local_d4 + -1) * (float)piVar8[4];
                      fStack_6c = (float)local_b0 * (float)piVar8[4];
                      fVar6 = fStack_80 + *(float *)(piVar18[2] + 0xc);
                      fStack_68 = fStack_80 + *(float *)(piVar18[2] + 0x10);
                      fVar5 = param_1[2];
                      if ((fVar5 <= fStack_68) && (fStack_68 = fVar5, fVar5 < fVar6)) {
                        fStack_68 = fVar6;
                      }
                      FUN_00bf1c90(afStack_18,&fStack_70,param_1);
                      fVar19 = FUN_00bf1c20(afStack_18);
                      fStack_5c = (float)fVar19;
                      bVar7 = false;
                      uStack_d0 = 0;
                      if (piVar18[1] != 0) {
                        iStack_cc = 0;
                        do {
                          iVar15 = *piVar18;
                          FUN_00c20240((void *)(iVar15 + iStack_cc),fStack_5c,fStack_54);
                          uVar10 = FUN_00c20170(iVar15 + iStack_cc);
                          if ((char)uVar10 != '\0') {
                            bVar7 = true;
                          }
                          uStack_d0 = uStack_d0 + 1;
                          iStack_cc = iStack_cc + 0x38;
                        } while (uStack_d0 < (uint)piVar18[1]);
                        pfVar16 = pfStack_8c;
                        if (bVar7) {
                          *(undefined1 *)(piVar18[2] + 0x24) = 1;
                        }
                      }
                    }
                    local_c8 = local_c8 + 1;
                    iStack_a4 = iStack_a4 + 0x10;
                    pfVar2 = pfStack_ac;
                    pfVar3 = pfStack_a0;
                    pfVar1 = pfStack_98;
                  } while (local_c8 < (uint)piVar8[1]);
                }
                pfStack_98 = pfVar1;
                pfStack_a0 = pfVar3;
                pfStack_ac = pfVar2;
                local_c4 = local_c4 + 1;
                local_b8 = local_b8 + 1;
                iVar15 = local_60;
              }
              local_c8 = *(uint *)((int)pvVar9 + 0x10);
              *(uint *)((int)pvVar9 + 0x10) = local_c8 + 1;
              local_d4 = local_d4 + 1;
              local_94 = local_94 + -1;
            } while (local_94 != 0);
            local_94 = 0;
            iVar14 = local_7c;
            iVar15 = local_90;
          }
          local_9c = local_84;
          iVar14 = iVar14 + 1;
          local_b4 = local_b4 + 1;
          local_b0 = local_b0 + 1;
          local_7c = iVar14;
        } while (iVar14 <= iVar15 + 1);
      }
      FUN_00c202d0(piVar8);
      pvVar9 = local_74;
      FUN_00c20320(piVar8);
      local_a8 = local_a8 + 1;
      this = local_74;
    } while (local_a8 < *(uint *)((int)pvVar9 + 4));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c20e20 @ 00c20e20 ////

void __fastcall FUN_00c20e20(int param_1)

{
  int iVar1;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d03ec7;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00c258c0(local_1c,(undefined4 *)(param_1 + 4));
  local_4._0_1_ = 1;
  do {
    iVar1 = FUN_00c22d10((int)local_1c);
  } while (iVar1 != 0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00c248f0(local_1c);
  local_4 = 0xffffffff;
  thunk_FUN_00c21b60((undefined4 *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c20e90 @ 00c20e90 ////

undefined4 * __fastcall FUN_00c20e90(undefined4 *param_1)

{
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
  FUN_00c22ca0(param_1 + 10);
  param_1[0xd] = 0;
  return param_1;
}


//// FUNCTION FUN_00c20ed0 @ 00c20ed0 ////

void __fastcall FUN_00c20ed0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03f23;
  pvStack_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &pvStack_c;
  FUN_00c25920(local_1c,param_1 + 10);
  local_4._0_1_ = 7;
  do {
    iVar2 = FUN_00c22d60((int)local_1c);
  } while (iVar2 != 0);
  local_4._0_1_ = 6;
  FUN_00c24940(local_1c);
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((int)pvVar1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)pvVar1 + 4));
    }
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  local_4._0_1_ = 4;
  FUN_00c22cb0(param_1 + 10);
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  pvVar1 = (void *)param_1[6];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00c20e20);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  pvVar1 = (void *)param_1[4];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x38,*(int *)((int)pvVar1 + -4),FUN_00c21810);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c21010 @ 00c21010 ////

int * __fastcall FUN_00c21010(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  LPCSTR pCVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uStack_19c;
  int *piStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  int *piStack_18c;
  int *local_188;
  int *local_184;
  int *piStack_180;
  int iStack_17c;
  uint local_178;
  uint uStack_174;
  undefined1 uStack_16d;
  uint uStack_16c;
  uint uStack_168;
  void *pvStack_164;
  undefined4 auStack_160 [4];
  undefined4 auStack_150 [4];
  uint uStack_140;
  uint local_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  int iStack_12c;
  undefined1 auStack_128 [20];
  undefined **ppuStack_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 uStack_11;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03f72;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_178 = param_1;
  piVar1 = (int *)FUN_00c24090((int *)(param_1 + 0x28));
  local_184 = piVar1;
  puVar2 = operator_new(0x38);
  if (puVar2 == (undefined4 *)0x0) {
    local_188 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00c20e90(puVar2);
    local_188 = piVar3;
    if (piVar3 != (int *)0x0) goto LAB_00c21119;
  }
  piVar3 = local_188;
  local_110 = &PTR_LAB_00d9db7c;
  local_10c = 0;
  pvStack_10 = (void *)((uint)pvStack_10 & 0xffffff);
  local_4 = 0;
  LH_LogErrorMessage(&local_110,".\\CMapAccess.cpp");
  LH_LogErrorMessage(&local_110,"(");
  FUN_00bbe970(0x89);
  LH_LogErrorMessage(&local_110,") : ");
  LH_LogErrorMessage(&local_110,"EMEM");
  LH_LogErrorMessage(&local_110,"\n");
  pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
  LH_Assert((void *)((int)&uStack_19c + 3),pCVar4);
  local_4 = 0xffffffff;
  DebugBreak();
LAB_00c21119:
  (**(code **)(*piVar1 + 0x24))(&local_13c);
  FUN_00c23740(piVar3,uStack_140);
  FUN_00c25c90(piVar3 + 6,uStack_130);
  FUN_00c238e0(piVar3 + 2,local_13c);
  FUN_00c23aa0(piVar3 + 4,uStack_138);
  FUN_00c23c70(piVar3 + 8,uStack_134);
  FUN_00c25850(&iStack_12c);
  puStack_8 = (undefined1 *)0x1;
  uStack_168 = 0;
  local_184 = (int *)0x0;
  uStack_174 = 0;
  local_178 = 0;
  uStack_16c = 0;
  piVar5 = (int *)(**(code **)(*piVar1 + 0x18))();
  while (piVar5 != (int *)0x0) {
    uStack_19c = piVar5;
    piVar1 = (int *)FUN_00c24310(piVar3,local_178);
    local_178 = local_178 + 1;
    fVar10 = (float10)(**(code **)(*piVar5 + 8))();
    piVar1[2] = (int)(float)fVar10;
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    piVar1[3] = iVar6;
    fVar10 = (float10)(**(code **)(*piVar5 + 0x10))();
    piVar1[4] = (int)(float)fVar10;
    uVar7 = (**(code **)(*piVar5 + 0x14))();
    piVar1[5] = uVar7;
    if (uStack_168 < uVar7) {
      uStack_168 = uVar7;
    }
    piVar8 = (int *)(**(code **)*piVar5)();
    piStack_198 = piVar8;
    if (piVar8 != (int *)0x0) {
      pvStack_164 = (void *)(iStack_17c + 0x14);
      do {
        piStack_198 = piVar8;
        puVar2 = (undefined4 *)FUN_00c24420(piVar3 + 2,uStack_174);
        uStack_174 = uStack_174 + 1;
        if (piVar1[1] == 0) {
          *piVar1 = (int)puVar2;
        }
        piVar1[1] = piVar1[1] + 1;
        uStack_190 = (**(code **)(*piVar8 + 4))();
        iVar6 = FUN_00bcef50(pvStack_164,(void *)(iStack_17c + 0x10),&uStack_190,&uStack_190);
        puVar2[2] = iVar6;
        puVar2[3] = piVar1;
        if (iVar6 == 0) {
          ppuStack_114 = &PTR_LAB_00d9db7c;
          local_110 = (undefined **)((uint)local_110 & 0xffffff00);
          uStack_11 = 0;
          puStack_8._0_1_ = 2;
          LH_LogErrorMessage(&ppuStack_114,".\\CMapAccess.cpp");
          LH_LogErrorMessage(&ppuStack_114,"(");
          FUN_00bbe970(0xbf);
          LH_LogErrorMessage(&ppuStack_114,") : ");
          LH_LogErrorMessage(&ppuStack_114,"Null atmos in map");
          LH_LogErrorMessage(&ppuStack_114,"\n");
          pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_114);
          LH_Assert(&stack0xfffffe63,pCVar4);
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
          ppuStack_114 = &PTR_LAB_00d9d9b4;
          DebugBreak();
        }
        piVar5 = (int *)(**(code **)(*piVar8 + 8))();
        while (piStack_194 = piVar5, piVar5 != (int *)0x0) {
          piVar3 = (int *)FUN_00c24530(piVar3 + 4,uStack_16c);
          uStack_16c = uStack_16c + 1;
          if (puVar2[1] == 0) {
            *puVar2 = piVar3;
          }
          puVar2[1] = puVar2[1] + 1;
          piStack_180 = piVar3;
          FUN_00c24160(&iStack_12c,&piStack_194,&piStack_180);
          piVar8 = (int *)(**(code **)(*piVar5 + 8))();
          piVar3[5] = piVar8[2];
          FUN_00c2cbe0(piVar3,*piVar8,piVar8[1],piVar8[3],piVar8[4]);
          fVar10 = FUN_00c20480(piVar3,(float)piVar1[4]);
          piVar3[6] = (int)(float)fVar10;
          (**(code **)(piVar3[8] + 0xc))(0);
          (**(code **)(piVar3[8] + 0x10))
                    (*(undefined4 *)(puVar2[2] + 0x30),*(undefined4 *)(puVar2[2] + 0x2c));
          piVar5 = (int *)(**(code **)(*piVar5 + 0xc))();
          piVar3 = piStack_18c;
        }
        piVar8 = (int *)(**(code **)(*piStack_198 + 0x10))();
      } while (piVar8 != (int *)0x0);
      piStack_198 = (int *)0x0;
      piVar5 = uStack_19c;
    }
    if (local_184 < (uint)piVar1[1]) {
      local_184 = (int *)piVar1[1];
    }
    piVar5 = (int *)(**(code **)(*piVar5 + 0x18))();
    piVar1 = local_188;
  }
  uStack_19c = (int *)0x0;
  piStack_198 = (int *)0x0;
  FUN_00c22db0(auStack_150);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  FUN_00c22de0(auStack_150,piVar3[7]);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x1c))();
  if (piVar1 != (int *)0x0) {
    local_188 = (int *)(iStack_17c + 0x10);
    do {
      piVar8 = local_188;
      piVar5 = (int *)FUN_00c24640(piVar3 + 6,(uint)uStack_19c);
      uStack_19c = (int *)((int)uStack_19c + 1);
      piStack_180 = piVar5;
      piStack_194 = (int *)(**(code **)(*piVar1 + 8))();
      iVar6 = FUN_00bcef50(piVar8 + 1,piVar8,&piStack_194,&piStack_194);
      *piVar5 = iVar6;
      if (iVar6 == 0) {
        LH_Assert(&stack0xfffffe63,"atmosGroup->AtmosInMap != NULL\n");
        DebugBreak();
      }
      FUN_00c22df0(auStack_160);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
      uVar7 = (**(code **)*piVar1)();
      FUN_00c22e20(auStack_160,uVar7);
      piVar8 = (int *)(**(code **)(*piVar1 + 4))();
      while (piVar8 != (int *)0x0) {
        puVar2 = (undefined4 *)FUN_00c24750(piVar3 + 8,(uint)piStack_198);
        piStack_198 = (int *)((int)piStack_198 + 1);
        puVar9 = (undefined4 *)(**(code **)(*piVar8 + 0x10))();
        *puVar2 = *puVar9;
        puVar2[1] = puVar9[1];
        puVar2[2] = puVar9[2];
        puVar2[3] = puVar9[3];
        puVar2[4] = puVar9[4];
        uStack_190 = (**(code **)*piVar8)();
        iVar6 = FUN_00bcef50(auStack_128,&iStack_12c,&uStack_190,&uStack_190);
        if ((iVar6 == 0) || ((int *)(iVar6 + 4) == (int *)0x0)) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        puVar2[5] = iVar6;
        if (iVar6 == 0) {
          LH_Assert(&uStack_16d,"externalModel->Internal != NULL\n");
          DebugBreak();
        }
        FUN_00c24f40(auStack_160,(int)puVar2);
        piVar8 = (int *)(**(code **)(*piVar8 + 4))();
        piVar5 = piStack_180;
      }
      thunk_FUN_00c25f60(piVar5 + 1,auStack_160);
      FUN_00c24f10(auStack_150,(int)piVar5);
      piVar1 = (int *)(**(code **)(*piVar1 + 0xc))();
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
      FUN_00c22e10(auStack_160);
    } while (piVar1 != (int *)0x0);
  }
  thunk_FUN_00c25fa0(piVar3 + 10,auStack_150);
  puStack_8._0_1_ = 1;
  FUN_00c22dd0(auStack_150);
  uVar7 = uStack_168;
  piVar1 = local_184;
  if ((uStack_168 != 0) && (local_184 != (int *)0x0)) {
    local_188 = operator_new(0x14);
    puStack_8._0_1_ = 5;
    if (local_188 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = FUN_00c24c90(local_188,uVar7 * 2 + 4,(int)piVar1 + 1);
    }
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    FUN_00c23f20(piVar3 + 0xd,(int)piVar1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00c24e20(&iStack_12c);
  ExceptionList = pvStack_10;
  return piVar3;
}


//// FUNCTION FUN_00c216a0 @ 00c216a0 ////

void __fastcall FUN_00c216a0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c216e0 @ 00c216e0 ////

void __fastcall FUN_00c216e0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c21750 @ 00c21750 ////

void __fastcall FUN_00c21750(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c217d0 @ 00c217d0 ////

float10 __thiscall FUN_00c217d0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (param_1[3] - param_1[2]) * param_2 + param_1[2];
  return ((((float10)param_1[1] - (float10)*param_1) * (float10)param_2 + (float10)*param_1) -
         (float10)fVar1) * (float10)param_3 + (float10)fVar1;
}


//// FUNCTION FUN_00c21810 @ 00c21810 ////

void FUN_00c21810(void)

{
  return;
}


//// FUNCTION FUN_00c21870 @ 00c21870 ////

undefined4 * __thiscall FUN_00c21870(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03dfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  FUN_00bcf160((undefined4 *)((int)this + 8));
  local_4 = 0;
  FUN_00bcf160((undefined4 *)((int)this + 0x1c));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c218d0 @ 00c218d0 ////

int * __fastcall FUN_00c218d0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c218f0 @ 00c218f0 ////

int * __fastcall FUN_00c218f0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c21930 @ 00c21930 ////

void * __thiscall FUN_00c21930(void *this,byte param_1)

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


//// FUNCTION FUN_00c21960 @ 00c21960 ////

void __fastcall FUN_00c21960(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03e1b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bcf880((int *)(param_1 + 0x1c));
  local_4 = 0xffffffff;
  FUN_00bcf880((int *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c21a10 @ 00c21a10 ////

void __thiscall FUN_00c21a10(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION FUN_00c21ad0 @ 00c21ad0 ////

undefined4 __thiscall FUN_00c21ad0(void *this,uint param_1)

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


//// FUNCTION FUN_00c21b10 @ 00c21b10 ////

undefined4 __fastcall FUN_00c21b10(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00c21b20 @ 00c21b20 ////

void __thiscall FUN_00c21b20(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION FUN_00c21b50 @ 00c21b50 ////

void __fastcall FUN_00c21b50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c21b60 @ 00c21b60 ////

void __fastcall FUN_00c21b60(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c21bc0 @ 00c21bc0 ////

int __thiscall FUN_00c21bc0(void *this,float *param_1,undefined1 *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 8) + -1;
  iVar3 = 0;
  local_4 = this;
  if (-1 < iVar5) {
    do {
      iVar4 = (iVar5 + iVar3) / 2;
      pfVar1 = *(float **)(*local_4 + iVar4 * 4);
      if (pfVar1 == (float *)0x0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
      }
      iVar2 = FUN_00c4f3c0(param_1,pfVar1);
      if (iVar2 == 0) {
        *param_2 = 1;
        return iVar4;
      }
      if (iVar2 < 0) {
        iVar5 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= iVar5);
  }
  iVar5 = (iVar5 + iVar3) / 2;
  pfVar1 = *(float **)(*local_4 + iVar5 * 4);
  if (pfVar1 == (float *)0x0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  iVar3 = FUN_00c4f3c0(param_1,pfVar1);
  if (-1 < iVar3) {
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}


//// FUNCTION FUN_00c21c90 @ 00c21c90 ////

void __thiscall FUN_00c21c90(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION FUN_00c21d50 @ 00c21d50 ////

undefined4 __thiscall FUN_00c21d50(void *this,uint param_1)

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


//// FUNCTION FUN_00c21d90 @ 00c21d90 ////

undefined4 __fastcall FUN_00c21d90(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00c21da0 @ 00c21da0 ////

void __thiscall FUN_00c21da0(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION FUN_00c21dd0 @ 00c21dd0 ////

void __fastcall FUN_00c21dd0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c21de0 @ 00c21de0 ////

void __fastcall FUN_00c21de0(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c21e40 @ 00c21e40 ////

int __thiscall FUN_00c21e40(void *this,uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_5;
  int *local_4;
  
  *param_2 = 0;
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar5 = *(int *)((int)this + 8) + -1;
  iVar3 = 0;
  local_4 = this;
  if (-1 < iVar5) {
    do {
      iVar4 = (iVar5 + iVar3) / 2;
      puVar1 = *(uint **)(*(int *)this + iVar4 * 4);
      if (puVar1 == (uint *)0x0) {
        LH_Assert(&local_5,"o != NULL\n");
        DebugBreak();
        this = local_4;
      }
      uVar2 = *puVar1;
      if (*param_1 < uVar2) {
        iVar5 = iVar4 + -1;
      }
      else {
        if (*param_1 <= uVar2) {
          *param_2 = 1;
          return iVar4;
        }
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= iVar5);
  }
  iVar3 = (iVar5 + iVar3) / 2;
  puVar1 = *(uint **)(*(int *)this + iVar3 * 4);
  if (puVar1 == (uint *)0x0) {
    LH_Assert(&param_2,"o != NULL\n");
    DebugBreak();
  }
  if (*puVar1 <= *param_1) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


//// FUNCTION FUN_00c21f10 @ 00c21f10 ////

void __thiscall FUN_00c21f10(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION FUN_00c21f50 @ 00c21f50 ////

void __thiscall FUN_00c21f50(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION FUN_00c21f90 @ 00c21f90 ////

void __thiscall FUN_00c21f90(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_00c21a10(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00c21fd0 @ 00c21fd0 ////

uint __fastcall FUN_00c21fd0(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_4;
  
  uVar3 = param_1[2];
  uVar4 = 1;
  uStack_4 = param_1;
  if (1 < uVar3) {
    do {
      pfVar1 = *(float **)(*param_1 + -4 + uVar4 * 4);
      pfVar2 = *(float **)(*param_1 + uVar4 * 4);
      if ((pfVar1 == (float *)0x0) || (pfVar2 == (float *)0x0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
      }
      uVar3 = FUN_00c4f3c0(pfVar1,pfVar2);
      if (-1 < (int)uVar3) {
        return uVar3 & 0xffffff00;
      }
      uVar3 = param_1[2];
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_00c22040 @ 00c22040 ////

void __thiscall FUN_00c22040(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_00c21c90(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00c22080 @ 00c22080 ////

uint __fastcall FUN_00c22080(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint extraout_EAX;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_4;
  
  uVar4 = param_1[2];
  uVar5 = 1;
  uStack_4 = param_1;
  if (1 < uVar4) {
    do {
      iVar1 = *param_1;
      puVar2 = *(uint **)(iVar1 + -4 + uVar5 * 4);
      puVar3 = *(uint **)(iVar1 + uVar5 * 4);
      uVar4 = iVar1 + uVar5 * 4;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( object1 != NULL ) && ( object2 != NULL )\n");
        DebugBreak();
        uVar4 = extraout_EAX;
      }
      if (*puVar3 <= *puVar2) {
        return uVar4 & 0xffffff00;
      }
      uVar4 = param_1[2];
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}


//// FUNCTION FUN_00c220e0 @ 00c220e0 ////

void __thiscall FUN_00c220e0(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00c21f90(this,param_1[2]);
    puVar3 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4);
    for (uVar1 = param_1[2] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1[2];
  }
  return;
}


//// FUNCTION FUN_00c22130 @ 00c22130 ////

void __fastcall FUN_00c22130(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}


//// FUNCTION FUN_00c22160 @ 00c22160 ////

void __thiscall FUN_00c22160(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00c22040(this,param_1[2]);
    puVar3 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4);
    for (uVar1 = param_1[2] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1[2];
  }
  return;
}


//// FUNCTION FUN_00c221b0 @ 00c221b0 ////

void __fastcall FUN_00c221b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}


//// FUNCTION FUN_00c22330 @ 00c22330 ////

void __fastcall FUN_00c22330(int param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_2 <= param_3) {
    *(float **)(param_1 + param_2 * 4) = param_4;
    return;
  }
  while( true ) {
    iVar3 = (param_2 + -1) / 2;
    pfVar1 = *(float **)(param_1 + iVar3 * 4);
    if ((pfVar1 == (float *)0x0) || (param_4 == (float *)0x0)) {
      LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    iVar2 = FUN_00c4f3c0(pfVar1,param_4);
    if (-1 < iVar2) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(float **)(param_1 + iVar3 * 4) = param_4;
      return;
    }
  }
  *(float **)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00c223d0 @ 00c223d0 ////

void __fastcall FUN_00c223d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c22470 @ 00c22470 ////

void __fastcall FUN_00c22470(int param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 < param_2) {
    do {
      iVar2 = (param_2 + -1) / 2;
      puVar1 = *(uint **)(param_1 + iVar2 * 4);
      if ((puVar1 == (uint *)0x0) || (param_4 == (uint *)0x0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
    } while ((*puVar1 < *param_4) &&
            (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
            param_2 = iVar2, param_3 < iVar2));
    *(uint **)(param_1 + param_2 * 4) = param_4;
    return;
  }
  *(uint **)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00c22500 @ 00c22500 ////

void __fastcall FUN_00c22500(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c22710 @ 00c22710 ////

void * __fastcall FUN_00c22710(void *param_1)

{
  FUN_00c2cc40(param_1);
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined ***)((int)param_1 + 0x20) = &PTR_LAB_00da5f08;
  return param_1;
}


//// FUNCTION FUN_00c227d0 @ 00c227d0 ////

undefined4 * __thiscall FUN_00c227d0(void *this,byte param_1)

{
  FUN_00c20050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c22820 @ 00c22820 ////

void __fastcall FUN_00c22820(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar1 = *param_1;
  while( true ) {
    iVar2 = param_1[2];
    if (iVar1 < iVar2) {
      return;
    }
    iVar3 = param_1[3];
    if (iVar1 < iVar3) break;
    fVar4 = (float)iVar2 * (float)iVar2 + (float)iVar3 * (float)iVar3;
    if (fVar4 < (float)param_1[1] != (fVar4 == (float)param_1[1])) {
      return;
    }
    param_1[2] = iVar2 + 1;
    if (iVar1 < iVar2 + 1) {
      param_1[3] = iVar3 + 1;
      param_1[2] = -iVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00c22880 @ 00c22880 ////

void __fastcall FUN_00c22880(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5f44;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c22940 @ 00c22940 ////

void __fastcall FUN_00c22940(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5f6c;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c22a50 @ 00c22a50 ////

void __thiscall FUN_00c22a50(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return;
}


//// FUNCTION FUN_00c22ab0 @ 00c22ab0 ////

undefined4 * __thiscall FUN_00c22ab0(void *this,byte param_1)

{
  FUN_00c22880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c22ad0 @ 00c22ad0 ////

undefined4 * __thiscall FUN_00c22ad0(void *this,byte param_1)

{
  FUN_00c22940(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c22b10 @ 00c22b10 ////

void __fastcall FUN_00c22b10(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory == (void *)0x0) {
    return;
  }
  if (*(void **)((int)_Memory + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)_Memory + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00c22b90 @ 00c22b90 ////

void * __thiscall FUN_00c22b90(void *this,byte param_1)

{
  FUN_00c21960((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c22c20 @ 00c22c20 ////

undefined4 * __fastcall FUN_00c22c20(undefined4 *param_1)

{
  FUN_00c21b50(param_1);
  return param_1;
}


//// FUNCTION FUN_00c22c50 @ 00c22c50 ////

int __thiscall FUN_00c22c50(void *this,float *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00c21bc0(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = FUN_00c21ad0(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION FUN_00c22ca0 @ 00c22ca0 ////

undefined4 * __fastcall FUN_00c22ca0(undefined4 *param_1)

{
  FUN_00c21dd0(param_1);
  return param_1;
}


//// FUNCTION FUN_00c22cb0 @ 00c22cb0 ////

void __fastcall FUN_00c22cb0(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c22cc0 @ 00c22cc0 ////

int __thiscall FUN_00c22cc0(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00c21e40(this,param_1,(undefined1 *)&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  iVar2 = FUN_00c21d50(this,uVar1);
  if (iVar2 == 0) {
    LH_Assert(&param_1,"object != NULL\n");
    DebugBreak();
  }
  return iVar2;
}


//// FUNCTION FUN_00c22d10 @ 00c22d10 ////

int __fastcall FUN_00c22d10(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = FUN_00c21b10((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00c21b10((int)this);
    iVar2 = FUN_00c21ad0(this,iVar1 - 1U);
    FUN_00c21b20(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = FUN_00c21b10((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00c22d60 @ 00c22d60 ////

int __fastcall FUN_00c22d60(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = FUN_00c21d90((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00c21d90((int)this);
    iVar2 = FUN_00c21d50(this,iVar1 - 1U);
    FUN_00c21da0(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = FUN_00c21d90((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00c22db0 @ 00c22db0 ////

undefined4 * __fastcall FUN_00c22db0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5fdc;
  FUN_00c21dd0(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c22dd0 @ 00c22dd0 ////

void __fastcall FUN_00c22dd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5fdc;
  FUN_00c21de0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c22de0 @ 00c22de0 ////

void __thiscall FUN_00c22de0(void *this,uint param_1)

{
  FUN_00c21c90((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c22df0 @ 00c22df0 ////

undefined4 * __fastcall FUN_00c22df0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5fe0;
  FUN_00c21b50(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c22e10 @ 00c22e10 ////

void __fastcall FUN_00c22e10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da5fe0;
  FUN_00c21b60(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c22e20 @ 00c22e20 ////

void __thiscall FUN_00c22e20(void *this,uint param_1)

{
  FUN_00c21a10((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c22e30 @ 00c22e30 ////

undefined4 * __thiscall FUN_00c22e30(void *this,byte param_1)

{
  FUN_00c22dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c22e50 @ 00c22e50 ////

undefined4 * __thiscall FUN_00c22e50(void *this,byte param_1)

{
  FUN_00c22e10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c22ea0 @ 00c22ea0 ////

void __fastcall FUN_00c22ea0(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = FUN_00c21b10((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_00c21ad0(this,uVar4);
      if (iVar1 != 0) {
        FUN_00c21f10(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_00c21b10((int)this);
    } while (uVar4 < uVar2);
  }
  FUN_00c21b20(this,uVar3);
  return;
}


//// FUNCTION FUN_00c22ef0 @ 00c22ef0 ////

void __fastcall FUN_00c22ef0(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = FUN_00c21d90((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_00c21d50(this,uVar4);
      if (iVar1 != 0) {
        FUN_00c21f50(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_00c21d90((int)this);
    } while (uVar4 < uVar2);
  }
  FUN_00c21da0(this,uVar3);
  return;
}


//// FUNCTION FUN_00c22f40 @ 00c22f40 ////

void __thiscall FUN_00c22f40(void *this,undefined4 param_1)

{
  FUN_00c21f90(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c22f60 @ 00c22f60 ////

void __thiscall FUN_00c22f60(void *this,undefined4 param_1)

{
  FUN_00c22040(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c22f80 @ 00c22f80 ////

void __thiscall FUN_00c22f80(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00c22130(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      FUN_00c21a10(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00c220e0(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00c22fd0 @ 00c22fd0 ////

void __thiscall FUN_00c22fd0(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00c221b0(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      FUN_00c21c90(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00c22160(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00c23040 @ 00c23040 ////

void __fastcall FUN_00c23040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_4;
  
  pfVar1 = (float *)*param_2;
  pfVar2 = (float *)*param_1;
  uStack_4 = param_1;
  if ((pfVar1 == (float *)0x0) || (pfVar2 == (float *)0x0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  iVar4 = FUN_00c4f3c0(pfVar1,pfVar2);
  if (iVar4 < 0) {
    uVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar3;
  }
  pfVar1 = (float *)*param_3;
  pfVar2 = (float *)*param_2;
  if ((pfVar1 == (float *)0x0) || (pfVar2 == (float *)0x0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  iVar4 = FUN_00c4f3c0(pfVar1,pfVar2);
  if (iVar4 < 0) {
    uVar3 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar3;
  }
  pfVar1 = (float *)*param_2;
  pfVar2 = (float *)*param_1;
  if ((pfVar1 == (float *)0x0) || (pfVar2 == (float *)0x0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  iVar4 = FUN_00c4f3c0(pfVar1,pfVar2);
  if (iVar4 < 0) {
    uVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar3;
  }
  return;
}


//// FUNCTION FUN_00c23100 @ 00c23100 ////

void __fastcall FUN_00c23100(int param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined1 local_9;
  float *local_8;
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    iVar3 = param_2 * 2 + 2;
    if (param_3 <= iVar3) break;
    pfVar1 = *(float **)(param_1 + iVar3 * 4);
    local_8 = *(float **)(param_1 + -4 + iVar3 * 4);
    if ((pfVar1 == (float *)0x0) || (local_8 == (float *)0x0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    iVar2 = FUN_00c4f3c0(pfVar1,local_8);
    if (iVar2 < 0) {
      iVar3 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    param_2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  FUN_00c22330(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION FUN_00c231c0 @ 00c231c0 ////

void __fastcall FUN_00c231c0(int *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uStack_4;
  
  puVar1 = (uint *)*param_2;
  puVar2 = (uint *)*param_1;
  uStack_4 = param_1;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  puVar1 = (uint *)*param_3;
  puVar2 = (uint *)*param_2;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar3;
  }
  puVar1 = (uint *)*param_2;
  puVar2 = (uint *)*param_1;
  if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*puVar1 < *puVar2) {
    iVar3 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  return;
}


//// FUNCTION FUN_00c23270 @ 00c23270 ////

void __fastcall FUN_00c23270(int param_1,int param_2,int param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined1 local_9;
  uint *local_8;
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    iVar2 = param_2 * 2 + 2;
    if (param_3 <= iVar2) break;
    puVar1 = *(uint **)(param_1 + iVar2 * 4);
    local_8 = *(uint **)(param_1 + -4 + iVar2 * 4);
    if ((puVar1 == (uint *)0x0) || (local_8 == (uint *)0x0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*puVar1 < *local_8) {
      iVar2 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  FUN_00c22470(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION FUN_00c23390 @ 00c23390 ////

void __thiscall FUN_00c23390(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03e46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\audiolib\\CMapAccess.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x3e);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Must be at least 1!!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  *(uint *)((int)this + 8) = param_1;
  *(uint *)((int)this + 0xc) = *(uint *)this / param_1;
  if (*(uint *)this / param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\audiolib\\CMapAccess.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x41);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Must have at least 1 entry");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c23510 @ 00c23510 ////

int __fastcall FUN_00c23510(int param_1,int param_2,int param_3)

{
  void **ppvVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03e5b;
  local_c = ExceptionList;
  iVar5 = param_1 * param_1;
  iVar4 = -param_2;
  if (iVar5 - param_3 == 0 || iVar5 < param_3) {
    iVar2 = iVar4 * iVar4;
    ppvVar1 = &local_c;
    while (ExceptionList = ppvVar1, param_3 < iVar2 + iVar5) {
      iVar4 = iVar4 + 1;
      if (0 < iVar4) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 0;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\audiolib\\CMapAccess.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0xe8);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"Overflow or something");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar3);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      ppvVar1 = ExceptionList;
      iVar2 = iVar4 * iVar4;
    }
    iVar4 = -iVar4;
  }
  else {
    iVar4 = 0;
  }
  ExceptionList = local_c;
  return iVar4;
}


//// FUNCTION FUN_00c23640 @ 00c23640 ////

void __thiscall FUN_00c23640(void *this,int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03e7b;
  local_c = ExceptionList;
  if ((*(int *)this < *(int *)((int)this + 8)) || (*(int *)this < *(int *)((int)this + 0xc))) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\audiolib\\CCellRangeExaminer.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x10);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Overflow");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *param_1 = *(int *)((int)this + 8);
  param_1[1] = *(int *)((int)this + 0xc);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c23740 @ 00c23740 ////

void __thiscall FUN_00c23740(void *this,uint param_1)

{
  void *pvVar1;
  LPCSTR pCVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03f99;
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
      pvVar1 = operator_new(param_1 * 0x18);
      local_4 = 0;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        FUN_00401380(pvVar1,0x18,param_1,&LAB_00c1ffc0);
      }
      local_4 = 0xffffffff;
      if (pvVar1 == (void *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
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
      if (uVar4 != 0) {
        iVar3 = 0;
        do {
          puVar5 = (undefined4 *)(*(int *)this + iVar3);
          puVar6 = (undefined4 *)((int)pvVar1 + iVar3);
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
          puVar6[2] = puVar5[2];
          puVar6[3] = puVar5[3];
          puVar6[4] = puVar5[4];
          iVar3 = iVar3 + 0x18;
          uVar4 = uVar4 - 1;
          puVar6[5] = puVar5[5];
        } while (uVar4 != 0);
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


//// FUNCTION FUN_00c238e0 @ 00c238e0 ////

void __thiscall FUN_00c238e0(void *this,uint param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 local_115;
  void *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03fc9;
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
      pvVar2 = operator_new(param_1 << 4);
      local_4 = 0;
      local_114 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        FUN_00401380(pvVar2,0x10,param_1,&LAB_00c1ffb0);
      }
      local_4 = 0xffffffff;
      if (pvVar2 == (void *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_115,pCVar3);
        DebugBreak();
      }
      uVar5 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar5 = *(uint *)((int)this + 4);
      }
      if (uVar5 != 0) {
        iVar4 = 0;
        do {
          puVar6 = (undefined4 *)(*(int *)this + iVar4);
          puVar1 = (undefined4 *)(iVar4 + (int)pvVar2);
          *puVar1 = *puVar6;
          puVar1[1] = puVar6[1];
          puVar1[2] = puVar6[2];
          iVar4 = iVar4 + 0x10;
          uVar5 = uVar5 - 1;
          puVar1[3] = puVar6[3];
        } while (uVar5 != 0);
      }
      if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
      *(void **)this = pvVar2;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c23a70 @ 00c23a70 ////

void __fastcall FUN_00c23a70(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x38,*(int *)((int)pvVar1 + -4),FUN_00c21810);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  return;
}


//// FUNCTION FUN_00c23aa0 @ 00c23aa0 ////

void __thiscall FUN_00c23aa0(void *this,uint param_1)

{
  void *pvVar1;
  uint *puVar2;
  LPCSTR pCVar3;
  uint uVar4;
  int iVar5;
  uint *local_118;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03ff9;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        pvVar1 = *(void **)this;
        if (pvVar1 != (void *)0x0) {
          ExceptionList = &local_c;
          _eh_vector_destructor_iterator_(pvVar1,0x38,*(int *)((int)pvVar1 + -4),FUN_00c21810);
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar1 + -4));
        }
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      puVar2 = operator_new(param_1 * 0x38 + 4);
      local_4 = 0;
      if (puVar2 == (uint *)0x0) {
        local_118 = (uint *)0x0;
      }
      else {
        local_118 = puVar2 + 1;
        *puVar2 = param_1;
        _eh_vector_constructor_iterator_(local_118,0x38,param_1,FUN_00c22710,FUN_00c21810);
      }
      local_4 = 0xffffffff;
      if (local_118 == (uint *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar3);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      uVar4 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar4 = *(uint *)((int)this + 4);
      }
      if (uVar4 != 0) {
        iVar5 = 0;
        do {
          FUN_00c22a50((void *)((int)local_118 + iVar5),(undefined4 *)(*(int *)this + iVar5));
          iVar5 = iVar5 + 0x38;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      pvVar1 = *(void **)this;
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_(pvVar1,0x38,*(int *)((int)pvVar1 + -4),FUN_00c21810);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar1 + -4));
      }
      *(uint **)this = local_118;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c23c70 @ 00c23c70 ////

void __thiscall FUN_00c23c70(void *this,uint param_1)

{
  void *pvVar1;
  LPCSTR pCVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04029;
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
      pvVar1 = operator_new(param_1 * 0x18);
      local_4 = 0;
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else {
        FUN_00401380(pvVar1,0x18,param_1,&LAB_00c21820);
      }
      local_4 = 0xffffffff;
      if (pvVar1 == (void *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
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
      if (uVar4 != 0) {
        iVar3 = 0;
        do {
          puVar5 = (undefined4 *)(*(int *)this + iVar3);
          puVar6 = (undefined4 *)((int)pvVar1 + iVar3);
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
          puVar6[2] = puVar5[2];
          puVar6[3] = puVar5[3];
          puVar6[4] = puVar5[4];
          iVar3 = iVar3 + 0x18;
          uVar4 = uVar4 - 1;
          puVar6[5] = puVar5[5];
        } while (uVar4 != 0);
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


//// FUNCTION FUN_00c23e10 @ 00c23e10 ////

void __fastcall FUN_00c23e10(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory == (void *)0x0) {
    return;
  }
  if (*(void **)((int)_Memory + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)_Memory + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00c23e50 @ 00c23e50 ////

int __fastcall FUN_00c23e50(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0404b;
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


//// FUNCTION FUN_00c23f20 @ 00c23f20 ////

void __thiscall FUN_00c23f20(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04076;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c24090 @ 00c24090 ////

int __fastcall FUN_00c24090(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0408b;
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


//// FUNCTION FUN_00c24160 @ 00c24160 ////

void __thiscall FUN_00c24160(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  LPCSTR pCVar2;
  undefined1 local_115;
  void *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d040b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_114 = operator_new(0x30);
  local_4 = 0;
  if (local_114 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00c21870(local_114,param_1,param_2);
  }
  local_4 = 0xffffffff;
  if (puVar1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\audiolib\\CGlue.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"EMEM");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_115,pCVar2);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bcfac0((void *)((int)this + 4),this,(int)puVar1);
  FUN_00bcfac0((void *)((int)this + 0x10),(int *)((int)this + 0xc),(int)puVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c242a0 @ 00c242a0 ////

void __fastcall FUN_00c242a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5f44;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c242b0 @ 00c242b0 ////

void __fastcall FUN_00c242b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5f6c;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c242c0 @ 00c242c0 ////

int __fastcall FUN_00c242c0(int param_1)

{
  FUN_00c22c20((undefined4 *)(param_1 + 4));
  return param_1;
}


//// FUNCTION FUN_00c242d0 @ 00c242d0 ////

undefined4 * __fastcall FUN_00c242d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5f44;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c242f0 @ 00c242f0 ////

undefined4 * __fastcall FUN_00c242f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5f6c;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c24310 @ 00c24310 ////

int __thiscall FUN_00c24310(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d040db;
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
  return *(int *)this + param_1 * 0x18;
}


//// FUNCTION FUN_00c24420 @ 00c24420 ////

int __thiscall FUN_00c24420(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d040fb;
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
  return param_1 * 0x10 + *(int *)this;
}


//// FUNCTION FUN_00c24530 @ 00c24530 ////

int __thiscall FUN_00c24530(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0411b;
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
  return param_1 * 0x38 + *(int *)this;
}


//// FUNCTION FUN_00c24640 @ 00c24640 ////

int __thiscall FUN_00c24640(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0413b;
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
  return param_1 * 0x10 + *(int *)this;
}


//// FUNCTION FUN_00c24750 @ 00c24750 ////

int __thiscall FUN_00c24750(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0415b;
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
  return *(int *)this + param_1 * 0x18;
}


//// FUNCTION FUN_00c24860 @ 00c24860 ////

void __fastcall FUN_00c24860(int *param_1)

{
  int *this;
  void *_Memory;
  
  this = param_1 + 1;
  _Memory = (void *)FUN_00bcecf0(this);
  if (_Memory != (void *)0x0) {
    do {
      FUN_00bcff70(this,param_1,(int)_Memory);
      FUN_00bcff70(param_1 + 4,param_1 + 3,(int)_Memory);
      if (_Memory != (void *)0x0) {
        FUN_00c21960((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = (void *)FUN_00bcecf0(this);
    } while (_Memory != (void *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c248f0 @ 00c248f0 ////

void __fastcall FUN_00c248f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0417b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da60e8;
  local_4 = 0;
  FUN_00c22ea0((int)param_1);
  local_4 = 0xffffffff;
  FUN_00c21b60(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c24940 @ 00c24940 ////

void __fastcall FUN_00c24940(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0419b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da60ec;
  local_4 = 0;
  FUN_00c22ef0((int)param_1);
  local_4 = 0xffffffff;
  FUN_00c21de0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c24990 @ 00c24990 ////

undefined4 * __thiscall FUN_00c24990(void *this,byte param_1)

{
  FUN_00c248f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c249b0 @ 00c249b0 ////

undefined4 * __thiscall FUN_00c249b0(void *this,byte param_1)

{
  FUN_00c24940(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c249d0 @ 00c249d0 ////

void __thiscall FUN_00c249d0(void *this,undefined4 param_1)

{
  FUN_00c22f60((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c249e0 @ 00c249e0 ////

void __thiscall FUN_00c249e0(void *this,undefined4 param_1)

{
  FUN_00c22f40((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c24a00 @ 00c24a00 ////

void __thiscall FUN_00c24a00(void *this,undefined4 *param_1)

{
  FUN_00c22f80((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c24a20 @ 00c24a20 ////

void __thiscall FUN_00c24a20(void *this,undefined4 *param_1)

{
  FUN_00c22fd0((void *)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00c24a30 @ 00c24a30 ////

void __fastcall FUN_00c24a30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00c23040(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00c23040(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00c23040(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00c23040(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00c23040(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c24ad0 @ 00c24ad0 ////

void __fastcall FUN_00c24ad0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00c23100(param_1,iVar3,iVar2,*(float **)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00c24b30 @ 00c24b30 ////

void __fastcall FUN_00c24b30(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00c231c0(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_00c231c0(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_00c231c0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_00c231c0(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_00c231c0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c24bd0 @ 00c24bd0 ////

void __fastcall FUN_00c24bd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    FUN_00c23270(param_1,iVar3,iVar2,*(uint **)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00c24c90 @ 00c24c90 ////

int * __thiscall FUN_00c24c90(void *this,int param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  LPCSTR pCVar3;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d041bb;
  local_c = ExceptionList;
  iVar1 = param_1 * param_2;
  ExceptionList = &local_c;
  *(int *)this = iVar1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if (iVar1 != 0) {
    pvVar2 = operator_new(iVar1 * 4);
    *(void **)((int)this + 4) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 0;
      LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\audiolib\\CMapAccess.h");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x2f);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_111,pCVar3);
      local_4 = 0xffffffff;
      local_110 = &PTR_LAB_00d9d9b4;
      DebugBreak();
    }
  }
  FUN_00c23390(this,param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c24e20 @ 00c24e20 ////

void __fastcall FUN_00c24e20(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d041e3;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00c24860(param_1);
  local_4 = local_4 & 0xffffff00;
  param_1[3] = (int)&PTR_LAB_00da5f6c;
  FUN_00bcffc0(param_1 + 4);
  local_4 = 0xffffffff;
  *param_1 = (int)&PTR_LAB_00da5f44;
  FUN_00bcffc0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c24e90 @ 00c24e90 ////

undefined4 * __fastcall FUN_00c24e90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5f44;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da6118;
  return param_1;
}


//// FUNCTION FUN_00c24eb0 @ 00c24eb0 ////

undefined4 * __thiscall FUN_00c24eb0(void *this,byte param_1)

{
  FUN_00c242a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c24ed0 @ 00c24ed0 ////

undefined4 * __fastcall FUN_00c24ed0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da5f6c;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da6140;
  return param_1;
}


//// FUNCTION FUN_00c24ef0 @ 00c24ef0 ////

undefined4 * __thiscall FUN_00c24ef0(void *this,byte param_1)

{
  FUN_00c242b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c24f10 @ 00c24f10 ////

void __thiscall FUN_00c24f10(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00c249d0(this,iVar1);
  return;
}


//// FUNCTION FUN_00c24f40 @ 00c24f40 ////

void __thiscall FUN_00c24f40(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    LH_Assert(&param_1,"Object != NULL\n");
    DebugBreak();
  }
  FUN_00c249e0(this,iVar1);
  return;
}


//// FUNCTION FUN_00c24f70 @ 00c24f70 ////

void __thiscall FUN_00c24f70(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = FUN_00c21b10((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c22f80(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION FUN_00c24fb0 @ 00c24fb0 ////

void __thiscall FUN_00c24fb0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = FUN_00c21d90((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c22fd0(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION FUN_00c24ff0 @ 00c24ff0 ////

void __fastcall FUN_00c24ff0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  float *local_8;
  undefined4 *local_4;
  
  piVar8 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_c = param_2;
  local_4 = param_1;
  FUN_00c24a30(param_2,piVar8,param_3 + -1);
  piVar7 = piVar8 + 1;
  local_10 = piVar7;
  if (param_2 < piVar8) {
    while( true ) {
      pfVar2 = (float *)piVar8[-1];
      pfVar3 = (float *)*piVar8;
      if ((pfVar2 == (float *)0x0) || (pfVar3 == (float *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar5 = FUN_00c4f3c0(pfVar2,pfVar3);
      if (iVar5 < 0) break;
      pfVar2 = (float *)*piVar8;
      pfVar3 = (float *)piVar8[-1];
      if ((pfVar2 == (float *)0x0) || (pfVar3 == (float *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar5 = FUN_00c4f3c0(pfVar2,pfVar3);
      if ((iVar5 < 0) || (piVar8 = piVar8 + -1, piVar8 <= local_c)) break;
    }
  }
  piVar4 = piVar7;
  piVar1 = local_10;
  piVar6 = piVar8;
  if (piVar7 < param_3) {
    while( true ) {
      pfVar2 = (float *)*piVar7;
      pfVar3 = (float *)*piVar8;
      if ((pfVar2 == (float *)0x0) || (pfVar3 == (float *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar5 = FUN_00c4f3c0(pfVar2,pfVar3);
      piVar4 = piVar7;
      piVar1 = piVar7;
      if (iVar5 < 0) break;
      pfVar2 = (float *)*piVar8;
      pfVar3 = (float *)*piVar7;
      if ((pfVar2 == (float *)0x0) || (pfVar3 == (float *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar5 = FUN_00c4f3c0(pfVar2,pfVar3);
      if ((iVar5 < 0) || (piVar7 = piVar7 + 1, piVar4 = piVar7, piVar1 = piVar7, param_3 <= piVar7))
      break;
    }
  }
joined_r0x00c25114:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar4) {
LAB_00c251ae:
      bVar9 = piVar6 == local_c;
      if (local_c < piVar6) {
        do {
          pfVar2 = (float *)piVar6[-1];
          local_8 = (float *)*piVar8;
          if ((pfVar2 == (float *)0x0) || (local_8 == (float *)0x0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          iVar5 = FUN_00c4f3c0(pfVar2,local_8);
          if (-1 < iVar5) {
            pfVar2 = (float *)*piVar8;
            local_8 = (float *)piVar6[-1];
            if ((pfVar2 == (float *)0x0) || (local_8 == (float *)0x0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            iVar5 = FUN_00c4f3c0(pfVar2,local_8);
            if (iVar5 < 0) break;
            iVar5 = piVar8[-1];
            piVar8 = piVar8 + -1;
            *piVar8 = piVar6[-1];
            piVar6[-1] = iVar5;
          }
          piVar6 = piVar6 + -1;
        } while (local_c < piVar6);
        bVar9 = piVar6 == local_c;
        piVar7 = local_10;
      }
      if (bVar9) {
        if (piVar4 == param_3) {
          *local_4 = piVar8;
          local_4[1] = piVar7;
          return;
        }
        if (piVar7 != piVar4) {
          iVar5 = *piVar8;
          *piVar8 = *piVar7;
          *piVar7 = iVar5;
        }
        iVar5 = *piVar8;
        *piVar8 = *piVar4;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
        *piVar4 = iVar5;
        piVar4 = piVar4 + 1;
        piVar1 = piVar7;
      }
      else {
        piVar6 = piVar6 + -1;
        if (piVar4 == param_3) {
          piVar8 = piVar8 + -1;
          if (piVar6 != piVar8) {
            iVar5 = *piVar6;
            *piVar6 = *piVar8;
            *piVar8 = iVar5;
          }
          piVar1 = piVar7 + -1;
          iVar5 = *piVar8;
          piVar7 = piVar7 + -1;
          *piVar8 = *piVar1;
          *piVar7 = iVar5;
          piVar1 = piVar7;
        }
        else {
          iVar5 = *piVar4;
          *piVar4 = *piVar6;
          *piVar6 = iVar5;
          piVar4 = piVar4 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00c25114;
    }
    pfVar2 = (float *)*piVar8;
    local_8 = (float *)*piVar4;
    if ((pfVar2 == (float *)0x0) || (local_8 == (float *)0x0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    iVar5 = FUN_00c4f3c0(pfVar2,local_8);
    if (-1 < iVar5) {
      pfVar2 = (float *)*piVar4;
      local_8 = (float *)*piVar8;
      if ((pfVar2 == (float *)0x0) || (local_8 == (float *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar5 = FUN_00c4f3c0(pfVar2,local_8);
      piVar7 = local_10;
      if (iVar5 < 0) goto LAB_00c251ae;
      iVar5 = *local_10;
      *local_10 = *piVar4;
      *piVar4 = iVar5;
      local_10 = local_10 + 1;
    }
    piVar7 = local_10;
    piVar4 = piVar4 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION FUN_00c25300 @ 00c25300 ////

void __fastcall FUN_00c25300(undefined4 *param_1,undefined4 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_12;
  undefined1 local_11;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      pfVar1 = (float *)*puVar4;
      pfVar2 = (float *)*param_1;
      if ((pfVar1 == (float *)0x0) || (pfVar2 == (float *)0x0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      iVar3 = FUN_00c4f3c0(pfVar1,pfVar2);
      puVar5 = puVar4;
      if (iVar3 < 0) {
        if ((param_1 != puVar4) && (puVar4 != local_10)) {
          FUN_00c223d0(param_1,(int)puVar4,local_10);
        }
      }
      else {
        do {
          pfVar1 = (float *)*puVar4;
          pfVar2 = (float *)puVar5[-1];
          local_c = puVar5;
          if ((pfVar1 == (float *)0x0) || (pfVar2 == (float *)0x0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          iVar3 = FUN_00c4f3c0(pfVar1,pfVar2);
          puVar5 = puVar5 + -1;
        } while (iVar3 < 0);
        param_1 = local_8;
        if ((local_c != puVar4) && (puVar4 != local_10)) {
          FUN_00c223d0(local_c,(int)puVar4,local_10);
          param_1 = local_8;
        }
      }
      puVar4 = puVar4 + 1;
      local_10 = local_10 + 1;
    } while (puVar4 != local_4);
  }
  return;
}


//// FUNCTION FUN_00c25400 @ 00c25400 ////

void __fastcall FUN_00c25400(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar7 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00c24b30(param_2,piVar7,param_3 + -1);
  piVar6 = piVar7 + 1;
  local_10 = piVar6;
  if (param_2 < piVar7) {
    while( true ) {
      puVar2 = (uint *)piVar7[-1];
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if (*puVar2 < *puVar3) break;
      puVar2 = (uint *)*piVar7;
      puVar3 = (uint *)piVar7[-1];
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*puVar2 < *puVar3) || (piVar7 = piVar7 + -1, piVar7 <= local_8)) break;
    }
  }
  piVar5 = piVar6;
  piVar1 = local_10;
  local_c = piVar7;
  if (piVar6 < param_3) {
    while( true ) {
      puVar2 = (uint *)*piVar6;
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar5 = piVar6;
      piVar1 = piVar6;
      if (*puVar2 < *puVar3) break;
      puVar2 = (uint *)*piVar7;
      puVar3 = (uint *)*piVar6;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*puVar2 < *puVar3) ||
         (piVar6 = piVar6 + 1, piVar5 = piVar6, piVar1 = piVar6, param_3 <= piVar6)) break;
    }
  }
joined_r0x00c25509:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar5) {
LAB_00c25582:
      if (local_8 < local_c) {
        do {
          puVar2 = (uint *)local_c[-1];
          puVar3 = (uint *)*piVar7;
          if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          if (*puVar3 <= *puVar2) {
            puVar2 = (uint *)*piVar7;
            puVar3 = (uint *)local_c[-1];
            if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            piVar6 = local_10;
            if (*puVar2 < *puVar3) break;
            iVar4 = piVar7[-1];
            piVar7 = piVar7 + -1;
            *piVar7 = local_c[-1];
            local_c[-1] = iVar4;
          }
          local_c = local_c + -1;
          piVar6 = local_10;
        } while (local_8 < local_c);
      }
      if (local_c == local_8) {
        if (piVar5 == param_3) {
          *local_4 = piVar7;
          local_4[1] = piVar6;
          return;
        }
        if (piVar6 != piVar5) {
          iVar4 = *piVar7;
          *piVar7 = *piVar6;
          *piVar6 = iVar4;
        }
        iVar4 = *piVar7;
        piVar6 = piVar6 + 1;
        *piVar7 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = piVar5 + 1;
        piVar1 = piVar6;
        piVar7 = piVar7 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar5 == param_3) {
          piVar7 = piVar7 + -1;
          if (local_c != piVar7) {
            iVar4 = *local_c;
            *local_c = *piVar7;
            *piVar7 = iVar4;
          }
          piVar1 = piVar6 + -1;
          iVar4 = *piVar7;
          piVar6 = piVar6 + -1;
          *piVar7 = *piVar1;
          *piVar6 = iVar4;
          piVar1 = piVar6;
        }
        else {
          iVar4 = *piVar5;
          *piVar5 = *local_c;
          *local_c = iVar4;
          piVar5 = piVar5 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00c25509;
    }
    puVar2 = (uint *)*piVar7;
    puVar3 = (uint *)*piVar5;
    if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*puVar3 <= *puVar2) {
      puVar2 = (uint *)*piVar5;
      puVar3 = (uint *)*piVar7;
      if ((puVar2 == (uint *)0x0) || (puVar3 == (uint *)0x0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar6 = local_10;
      if (*puVar2 < *puVar3) goto LAB_00c25582;
      iVar4 = *local_10;
      *local_10 = *piVar5;
      *piVar5 = iVar4;
      local_10 = local_10 + 1;
    }
    piVar6 = local_10;
    piVar5 = piVar5 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION FUN_00c256d0 @ 00c256d0 ////

void __fastcall FUN_00c256d0(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      puVar1 = (uint *)*piVar3;
      puVar2 = (uint *)*param_1;
      if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar3;
      if (*puVar1 < *puVar2) {
        if ((param_1 != piVar3) && (piVar3 != local_10)) {
          FUN_00c22500(param_1,(int)piVar3,local_10);
        }
      }
      else {
        do {
          puVar1 = (uint *)*piVar3;
          puVar2 = (uint *)piVar4[-1];
          local_c = piVar4;
          if ((puVar1 == (uint *)0x0) || (puVar2 == (uint *)0x0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          piVar4 = piVar4 + -1;
        } while (*puVar1 < *puVar2);
        param_1 = local_8;
        if ((local_c != piVar3) && (piVar3 != local_10)) {
          FUN_00c22500(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION FUN_00c25850 @ 00c25850 ////

undefined4 * __fastcall FUN_00c25850(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d041f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da5f44;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da6118;
  local_4 = 0;
  param_1[3] = &PTR_LAB_00da5f6c;
  FUN_00bcf170(param_1 + 4);
  param_1[3] = &PTR_LAB_00da6140;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c258c0 @ 00c258c0 ////

undefined4 * __thiscall FUN_00c258c0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0421b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da60e8;
  FUN_00c21b50((undefined4 *)((int)this + 4));
  local_4 = 0;
  FUN_00c24f70(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c25920 @ 00c25920 ////

undefined4 * __thiscall FUN_00c25920(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0423b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da60ec;
  FUN_00c21dd0((undefined4 *)((int)this + 4));
  local_4 = 0;
  FUN_00c24fb0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c25980 @ 00c25980 ////

void __fastcall FUN_00c25980(undefined4 *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    pfVar1 = *(float **)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00c23100((int)param_1,0,iVar2 + -4 >> 2,pfVar1);
  }
  return;
}


//// FUNCTION FUN_00c259d0 @ 00c259d0 ////

void __fastcall FUN_00c259d0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    puVar1 = *(uint **)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00c23270((int)param_1,0,iVar2 + -4 >> 2,puVar1);
  }
  return;
}


//// FUNCTION FUN_00c25a80 @ 00c25a80 ////

void __fastcall FUN_00c25a80(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00c25b13:
      if (1 < iVar2) {
        FUN_00c25300(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00c24ad0((int)param_1,(int)param_2);
        }
        FUN_00c25980(param_1,(int)param_2);
        return;
      }
      goto LAB_00c25b13;
    }
    FUN_00c24ff0(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00c25a80(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00c25a80(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00c25b70 @ 00c25b70 ////

void __fastcall FUN_00c25b70(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00c25c03:
      if (1 < iVar2) {
        FUN_00c256d0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00c24bd0((int)param_1,(int)param_2);
        }
        FUN_00c259d0(param_1,(int)param_2);
        return;
      }
      goto LAB_00c25c03;
    }
    FUN_00c25400(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00c25b70(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00c25b70(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00c25c60 @ 00c25c60 ////

void __fastcall FUN_00c25c60(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00c20e20);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  return;
}


//// FUNCTION FUN_00c25c90 @ 00c25c90 ////

void __thiscall FUN_00c25c90(void *this,uint param_1)

{
  void *pvVar1;
  uint *puVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04269;
  local_c = ExceptionList;
  if (param_1 != *(uint *)((int)this + 4)) {
    if (param_1 == 0) {
      if (*(uint *)((int)this + 4) != 0) {
        pvVar1 = *(void **)this;
        if (pvVar1 != (void *)0x0) {
          ExceptionList = &local_c;
          _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00c20e20);
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar1 + -4));
        }
        *(undefined4 *)this = 0;
      }
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      ExceptionList = &local_c;
      puVar2 = operator_new(param_1 * 0x10 + 4);
      local_4 = 0;
      if (puVar2 == (uint *)0x0) {
        puVar7 = (uint *)0x0;
      }
      else {
        puVar7 = puVar2 + 1;
        *puVar2 = param_1;
        _eh_vector_constructor_iterator_(puVar7,0x10,param_1,FUN_00c242c0,FUN_00c20e20);
      }
      local_4 = 0xffffffff;
      if (puVar7 == (uint *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x46);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_111,pCVar3);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      uVar5 = param_1;
      if (*(uint *)((int)this + 4) < param_1) {
        uVar5 = *(uint *)((int)this + 4);
      }
      if (uVar5 != 0) {
        iVar4 = 0;
        do {
          puVar6 = (undefined4 *)(*(int *)this + iVar4);
          puVar8 = (undefined4 *)((int)puVar7 + iVar4);
          *puVar8 = *puVar6;
          puVar8[1] = puVar6[1];
          puVar8[2] = puVar6[2];
          iVar4 = iVar4 + 0x10;
          uVar5 = uVar5 - 1;
          puVar8[3] = puVar6[3];
        } while (uVar5 != 0);
      }
      pvVar1 = *(void **)this;
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00c20e20);
                    /* WARNING: Subroutine does not return */
        _free((void *)((int)pvVar1 + -4));
      }
      *(uint **)this = puVar7;
      *(uint *)((int)this + 4) = param_1;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c25ea0 @ 00c25ea0 ////

void __fastcall FUN_00c25ea0(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00c25a80(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00c25ed0 @ 00c25ed0 ////

void __fastcall FUN_00c25ed0(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00c25b70(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00c25f00 @ 00c25f00 ////

void __fastcall FUN_00c25f00(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00c25ea0(param_1);
  uVar1 = FUN_00c21fd0(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c25f30 @ 00c25f30 ////

void __fastcall FUN_00c25f30(int *param_1)

{
  uint uVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00c25ed0(param_1);
  uVar1 = FUN_00c22080(param_1);
  if ((char)uVar1 == '\0') {
    LH_Assert((void *)((int)&uStack_4 + 3),"unique\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c25f60 @ 00c25f60 ////

void __thiscall FUN_00c25f60(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = FUN_00c21b10((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c24a00(param_1,this);
  FUN_00c25f00(this);
  return;
}


//// FUNCTION FUN_00c25fa0 @ 00c25fa0 ////

void __thiscall FUN_00c25fa0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = FUN_00c21d90((int)this);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  FUN_00c24a20(param_1,this);
  FUN_00c25f30(this);
  return;
}


//// FUNCTION FUN_00c26000 @ 00c26000 ////

void __fastcall FUN_00c26000(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00c26010 @ 00c26010 ////

void __thiscall FUN_00c26010(void *this,float param_1)

{
  if (*(float *)((int)this + 0xc) < param_1) {
    *(float *)((int)this + 0xc) = param_1;
  }
  return;
}


//// FUNCTION FUN_00c26040 @ 00c26040 ////

undefined4 __fastcall FUN_00c26040(undefined4 *param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)*param_1 + 4) + 0x48);
}


//// FUNCTION FUN_00c26050 @ 00c26050 ////

void __fastcall FUN_00c26050(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  float10 fVar3;
  undefined4 *local_4;
  
  iVar1 = param_1[1];
  if (iVar1 != -1) {
    local_4 = param_1;
    piVar2 = (int *)FUN_00c26040(param_1);
    fVar3 = (float10)(**(code **)(*piVar2 + 0xb0))(iVar1,&local_4);
    if ((unaff_EDI == 0) && ((float10)1.0 <= fVar3)) {
      param_1[1] = 0xffffffff;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00c260a0 @ 00c260a0 ////

void __fastcall FUN_00c260a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  float local_80;
  undefined4 local_7c [13];
  int local_48;
  undefined4 local_40;
  undefined1 local_38;
  
  FUN_00c26050(param_1);
  iVar2 = param_1[1];
  if ((float)param_1[3] == 0.0) {
    if (iVar2 != -1) {
      piVar1 = (int *)FUN_00c26040(param_1);
      (**(code **)(*piVar1 + 0x88))(iVar2);
      param_1[1] = 0xffffffff;
      return;
    }
  }
  else {
    if (iVar2 == -1) {
      FUN_00bc7600(local_7c);
      local_38 = 0;
      local_48 = iVar2;
      FUN_00bf2c30(local_7c,0xffff);
      local_40 = param_1[3];
      iVar2 = _rand();
      local_80 = (float)iVar2 * 3.051851e-05;
      if ((local_80 < 0.0) || (1.0 <= local_80)) {
        local_80 = 0.0;
      }
      piVar1 = (int *)param_1[2];
      piVar6 = (int *)0x0;
      piVar5 = (int *)0x0;
      puVar4 = local_7c;
      pvVar3 = (void *)FUN_00c26040(param_1);
      pvVar3 = FUN_00bc66e0(pvVar3,piVar1,local_80,puVar4,piVar5,piVar6);
      if (pvVar3 != (void *)0x0) {
        param_1[1] = *(undefined4 *)((int)pvVar3 + 0x40);
        return;
      }
      param_1[1] = 0xffffffff;
      return;
    }
    piVar1 = (int *)FUN_00c26040(param_1);
    (**(code **)(*piVar1 + 0xa0))(iVar2,param_1[3]);
  }
  return;
}


//// FUNCTION FUN_00c261c0 @ 00c261c0 ////

int * __thiscall FUN_00c261c0(void *this,int param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0428b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 8) = param_2;
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_00bcf160((undefined4 *)((int)this + 0x14));
  local_4 = 0;
  FUN_00bcfac0((void *)(*(int *)this + 8),(int *)(*(int *)this + 4),(int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c26240 @ 00c26240 ////

void __fastcall FUN_00c26240(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d042a0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00c26050(param_1);
  iVar1 = param_1[1];
  if (iVar1 != -1) {
    piVar2 = (int *)FUN_00c26040(param_1);
    (**(code **)(*piVar2 + 0x88))(iVar1);
    param_1[1] = -1;
  }
  FUN_00bcff70((void *)(*param_1 + 8),(int *)(*param_1 + 4),(int)param_1);
  local_4 = 0xffffffff;
  FUN_00bcf880(param_1 + 5);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c26340 @ 00c26340 ////

float10 __fastcall FUN_00c26340(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_00c2a000(*(int *)(param_1 + 0x1c));
  return fVar1 * (float10)*(float *)(*(int *)(param_1 + 0x18) + 0x20);
}


//// FUNCTION FUN_00c26360 @ 00c26360 ////

void __thiscall FUN_00c26360(void *this,int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00c270f0(param_1);
  if ((float10)*(float *)((int)this + 4) < fVar1) {
    *(float *)((int)this + 4) = (float)fVar1;
    return;
  }
  return;
}


//// FUNCTION FUN_00c26390 @ 00c26390 ////

float10 FUN_00c26390(void)

{
  int iVar1;
  
  iVar1 = _rand();
  return (float10)iVar1 * (float10)3.051851e-05;
}


//// FUNCTION FUN_00c263b0 @ 00c263b0 ////

undefined4 __fastcall FUN_00c263b0(int param_1)

{
  return *(undefined4 *)**(undefined4 **)(param_1 + 0x18);
}


//// FUNCTION FUN_00c263c0 @ 00c263c0 ////

undefined4 __fastcall FUN_00c263c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c263b0(param_1);
  return *(undefined4 *)(*(int *)(iVar1 + 4) + 0x48);
}


//// FUNCTION FUN_00c263d0 @ 00c263d0 ////

void __fastcall FUN_00c263d0(int param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined4 local_7c [13];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00bf2b90(local_7c);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0;
  local_37 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x3f800000;
  local_8 = 0;
  local_4 = 0;
  FUN_00c29f50(*(void **)(param_1 + 0x1c),local_7c);
  uVar1 = FUN_00bf5a90(local_7c,0);
  fVar2 = FUN_00c26340(param_1);
  FUN_00bca020(*(int *)(*(int *)(*(int *)**(undefined4 **)(param_1 + 0x18) + 4) + 0x44),(float)fVar2
               ,uVar1);
  return;
}


//// FUNCTION FUN_00c26480 @ 00c26480 ////

void __fastcall FUN_00c26480(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da6200;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00c264f0 @ 00c264f0 ////

float * __thiscall FUN_00c264f0(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  
  do {
    fVar2 = FUN_00c26390();
    fVar1 = (float)(fVar2 * (float10)(param_1 + param_1) - (float10)param_1);
    fVar2 = FUN_00c26390();
    fVar2 = fVar2 * (float10)(param_1 + param_1) - (float10)param_1;
  } while ((float10)(param_1 * param_1) <= (float10)fVar1 * (float10)fVar1 + fVar2 * fVar2);
  *(float *)((int)this + 4) = (float)fVar2;
  *(float *)this = fVar1;
  return this;
}


//// FUNCTION FUN_00c26560 @ 00c26560 ////

float * __thiscall FUN_00c26560(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  do {
    fVar3 = FUN_00c26390();
    fVar1 = (float)(fVar3 * (float10)(param_1 + param_1) - (float10)param_1);
    fVar3 = FUN_00c26390();
    fVar3 = fVar3 * (float10)(param_1 + param_1) - (float10)param_1;
  } while ((float10)(param_1 * param_1) <= (float10)fVar1 * (float10)fVar1 + fVar3 * fVar3);
  fVar2 = (float)((float10)1.0 / ((float10)fVar1 * (float10)fVar1 + fVar3 * fVar3));
  *(float *)this = (float)(((float10)fVar1 * (float10)fVar1 - fVar3 * fVar3) * (float10)fVar2);
  *(float *)((int)this + 4) =
       (float)((fVar3 * (float10)fVar1 + fVar3 * (float10)fVar1) * (float10)fVar2);
  return this;
}


//// FUNCTION FUN_00c26600 @ 00c26600 ////

float10 __thiscall FUN_00c26600(int param_1,float *param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  float local_8;
  float local_4;
  
  fVar2 = FUN_00c26340(param_1);
  local_4 = (float)fVar2;
  if (fVar2 < (float10)0.0 == (fVar2 == (float10)0.0)) {
    uVar1 = FUN_00c205c0(*(void **)(**(int **)(param_1 + 0x18) + 0x2c),
                         (uint)*(int **)(param_1 + 0x18),param_2,&local_8);
    if ((char)uVar1 != '\0') {
      return (float10)local_8 * (float10)local_4;
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00c26660 @ 00c26660 ////

void __thiscall FUN_00c26660(void *this,int *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  void *this_00;
  float10 fVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c [13];
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_9c = 0.0;
  local_98 = 0.0;
  local_90 = 0;
  local_8c = 0;
  local_94 = *(undefined4 *)(*(int *)((int)this + 0x18) + 0x28);
  piVar4 = param_1 + 2;
  fVar2 = (float10)FUN_00bdde20((int)piVar4);
  local_98 = (float)fVar2;
  fVar2 = (float10)FUN_00bdde10((int)piVar4);
  local_9c = (float)fVar2;
  local_8c = FUN_00bde0a0((int)piVar4);
  uVar1 = FUN_00bde080((int)piVar4);
  local_90 = CONCAT22(extraout_var,uVar1);
  fVar2 = FUN_00c26600((int)this,&local_9c);
  local_88 = (float)fVar2;
  FUN_00c26560(&local_84,10.0);
  FUN_00bf2b90(local_7c);
  local_34 = local_84;
  local_44 = 0;
  local_3c = 0x3f800000;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x3f800000;
  local_8 = 0;
  local_4 = 0;
  local_40 = local_88;
  local_48 = 0x45;
  local_38 = 1;
  local_30 = local_80;
  local_2c = 0;
  local_37 = 1;
  local_20 = this;
  FUN_00bf2c10(local_7c);
  local_10 = local_90;
  FUN_00bf2cd0(local_7c,1);
  FUN_00c29f50(*(void **)((int)this + 0x1c),local_7c);
  piVar5 = (int *)0x0;
  piVar4 = (int *)0x0;
  puVar3 = local_7c;
  this_00 = (void *)FUN_00c263c0((int)this);
  FUN_00bc66e0(this_00,param_1,param_2,puVar3,piVar4,piVar5);
  return;
}


//// FUNCTION FUN_00c267e0 @ 00c267e0 ////

void __fastcall FUN_00c267e0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 extraout_var;
  int iVar3;
  undefined2 extraout_var_00;
  float10 fVar4;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
  for (iVar2 = FUN_00bcecf0((undefined4 *)(iVar3 + 0x18)); iVar2 != 0;
      iVar2 = FUN_00bcf3f0((void *)(iVar3 + 0x18),(int *)(iVar3 + 0x14),iVar2)) {
    local_14 = 0.0;
    local_10 = 0.0;
    local_8 = 0;
    local_4 = 0;
    local_c = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x28);
    fVar4 = (float10)FUN_00bdde20(*(int *)(iVar2 + 0x14) + 8);
    local_10 = (float)fVar4;
    fVar4 = (float10)FUN_00bdde10(*(int *)(iVar2 + 0x14) + 8);
    local_14 = (float)fVar4;
    local_4 = FUN_00bde0a0(*(int *)(iVar2 + 0x14) + 8);
    uVar1 = FUN_00bde080(*(int *)(iVar2 + 0x14) + 8);
    local_8 = CONCAT22(extraout_var,uVar1);
    (**(code **)(**(int **)(**(int **)(param_1 + 0x18) + 0x28) + 8))
              ((*(int **)(param_1 + 0x18))[2],&local_14);
  }
  iVar3 = FUN_00bcecf0((undefined4 *)(param_1 + 0x24));
  if (iVar3 != 0) {
    do {
      local_14 = 0.0;
      local_10 = 0.0;
      local_8 = 0;
      local_4 = 0;
      local_c = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x28);
      iVar2 = *(int *)(*(int *)(iVar3 + 4) + 8) + 8;
      fVar4 = (float10)FUN_00bdde20(iVar2);
      local_10 = (float)fVar4;
      fVar4 = (float10)FUN_00bdde10(iVar2);
      local_14 = (float)fVar4;
      local_4 = FUN_00bde0a0(iVar2);
      uVar1 = FUN_00bde080(iVar2);
      local_8 = CONCAT22(extraout_var_00,uVar1);
      (**(code **)(**(int **)(**(int **)(param_1 + 0x18) + 0x28) + 8))
                ((*(int **)(param_1 + 0x18))[2],&local_14);
      iVar3 = FUN_00bcf3f0((void *)(param_1 + 0x24),(int *)(param_1 + 0x20),iVar3);
    } while (iVar3 != 0);
  }
  return;
}


//// FUNCTION FUN_00c26960 @ 00c26960 ////

void __fastcall FUN_00c26960(int param_1)

{
  FUN_00bcecf0((undefined4 *)(param_1 + 0x24));
  return;
}


//// FUNCTION FUN_00c26970 @ 00c26970 ////

void __thiscall FUN_00c26970(void *this,void *param_1)

{
  uint *puVar1;
  float10 fVar2;
  float10 fVar3;
  float local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  fVar2 = FUN_00bf3030((int)param_1 + 0xac);
  local_8 = 0;
  local_4 = 0;
  local_14 = 0.0;
  local_10 = 0;
  local_c = *(undefined4 *)(*(int *)((int)this + 0x18) + 0x28);
  puVar1 = FUN_00bf3090((uint *)((int)param_1 + 0xac));
  local_10 = puVar1[4];
  local_14 = (float)puVar1[3];
  local_4 = puVar1[1];
  local_8 = *(undefined4 *)((int)param_1 + 0x19c);
  fVar3 = FUN_00c26600((int)this,&local_14);
  if ((float10)(float)fVar2 != fVar3) {
    FUN_00bedcd0(param_1,(float)fVar3);
  }
  return;
}


//// FUNCTION FUN_00c26a10 @ 00c26a10 ////

void __fastcall FUN_00c26a10(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 0x24));
  if (_Memory != (int *)0x0) {
    FUN_00c27200(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c26a50 @ 00c26a50 ////

void __fastcall FUN_00c26a50(void *param_1)

{
  float fVar1;
  int *piVar2;
  void *pvVar3;
  float local_4;
  
  fVar1 = *(float *)(*(int *)(*(int *)**(undefined4 **)((int)param_1 + 0x18) + 4) + 0x84);
  pvVar3 = (void *)(*(int *)(*(int *)((int)param_1 + 0x1c) + 0x30) + 0x14);
  local_4 = fVar1;
  FUN_00c4f580((void *)((int)param_1 + 0x2c),pvVar3,fVar1,
               *(char *)(*(undefined4 **)((int)param_1 + 0x18) + 9));
  piVar2 = FUN_00c4f5f0(pvVar3,fVar1,&local_4);
  while (piVar2 != (int *)0x0) {
    FUN_00c26660(param_1,piVar2,local_4);
    piVar2 = FUN_00c4f5f0(pvVar3,fVar1,&local_4);
  }
  return;
}


//// FUNCTION FUN_00c26ad0 @ 00c26ad0 ////

void __fastcall FUN_00c26ad0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d042f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da6260;
  local_4 = 3;
  FUN_00c26a10((int)param_1);
  *(undefined1 *)(*(int *)param_1[6] + 0x44) = 1;
  FUN_00bc4e00(*(void **)(*(int *)(**(int **)param_1[6] + 4) + 0x48),(int)param_1);
  FUN_00bcff70((void *)(param_1[6] + 0x18),(int *)(param_1[6] + 0x14),(int)param_1);
  local_4._0_1_ = 2;
  FUN_00c4f4b0();
  local_4._0_1_ = 1;
  param_1[8] = &PTR_LAB_00da6208;
  FUN_00bcffc0(param_1 + 9);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 1);
  *param_1 = &PTR_LAB_00d9e7a0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c26b70 @ 00c26b70 ////

void __fastcall FUN_00c26b70(int param_1)

{
  int iVar1;
  void *this;
  uint uVar2;
  void *this_00;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0430e;
  local_c = ExceptionList;
  this_00 = (void *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 8);
  uVar3 = 0;
  ExceptionList = &local_c;
  iVar1 = thunk_FUN_00bdbac0((int)this_00);
  if (iVar1 != 0) {
    do {
      this = operator_new(0x1c);
      local_4 = 0;
      if (this != (void *)0x0) {
        iVar1 = thunk_FUN_00be8f90(this_00,uVar3);
        FUN_00c27180(this,param_1,iVar1);
      }
      local_4 = 0xffffffff;
      uVar3 = uVar3 + 1;
      uVar2 = thunk_FUN_00bdbac0((int)this_00);
    } while (uVar3 < uVar2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c26c00 @ 00c26c00 ////

void __thiscall FUN_00c26c00(void *this,undefined4 param_1)

{
  FUN_00c27000((void *)((int)this + 0x24),param_1);
  return;
}


//// FUNCTION FUN_00c26c10 @ 00c26c10 ////

undefined4 * __thiscall FUN_00c26c10(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04341;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da6260;
  FUN_00bcf160((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_1;
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00da6208;
  FUN_00bcf170((int *)((int)this + 0x24));
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00da6238;
  local_4._0_1_ = 2;
  FUN_00c4f490((undefined4 *)((int)this + 0x2c));
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00bcfac0((void *)(*(int *)((int)this + 0x18) + 0x18),
               (int *)(*(int *)((int)this + 0x18) + 0x14),(int)this);
  FUN_00c26b70((int)this);
  *(undefined1 *)(**(int **)((int)this + 0x18) + 0x44) = 1;
  FUN_00c4f4c0((undefined4 *)((int)this + 0x2c),
               (int *)(*(int *)(*(int *)((int)this + 0x1c) + 0x30) + 0x14));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c26ce0 @ 00c26ce0 ////

float10 FUN_00c26ce0(void)

{
  int extraout_EDX;
  undefined **local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0435b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c26480(&local_14);
  local_18 = &local_14;
  local_1c = &PTR_LAB_00da6230;
  local_4 = 1;
  FUN_00bcf140((void *)(extraout_EDX + 0x24),&local_1c);
  ExceptionList = local_c;
  return (float10)local_10;
}


//// FUNCTION FUN_00c26d40 @ 00c26d40 ////

int * __thiscall FUN_00c26d40(void *this,byte param_1)

{
  FUN_00c27200(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c26d70 @ 00c26d70 ////

int * __fastcall FUN_00c26d70(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c26dd0 @ 00c26dd0 ////

void __fastcall FUN_00c26dd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f9dc;
  return;
}


//// FUNCTION FUN_00c26e40 @ 00c26e40 ////

void __fastcall FUN_00c26e40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da61d4;
  return;
}


//// FUNCTION FUN_00c26e50 @ 00c26e50 ////

undefined4 * __thiscall FUN_00c26e50(void *this,byte param_1)

{
  FUN_00c26e40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c26ea0 @ 00c26ea0 ////

void __fastcall FUN_00c26ea0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6208;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c26f90 @ 00c26f90 ////

undefined4 * __thiscall FUN_00c26f90(void *this,byte param_1)

{
  FUN_00c26dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c26fb0 @ 00c26fb0 ////

undefined4 * __fastcall FUN_00c26fb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6208;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c26fd0 @ 00c26fd0 ////

undefined4 * __thiscall FUN_00c26fd0(void *this,byte param_1)

{
  FUN_00c26ea0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c26ff0 @ 00c26ff0 ////

void __fastcall FUN_00c26ff0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6208;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c27000 @ 00c27000 ////

void __thiscall FUN_00c27000(void *this,undefined4 param_1)

{
  undefined **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d042b8;
  local_c = ExceptionList;
  local_14 = &PTR_LAB_00da6230;
  local_10 = param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bcf140(this,&local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c27050 @ 00c27050 ////

undefined4 * __fastcall FUN_00c27050(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6208;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da6238;
  return param_1;
}


//// FUNCTION FUN_00c27070 @ 00c27070 ////

undefined4 * __thiscall FUN_00c27070(void *this,byte param_1)

{
  FUN_00c26ff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c270a0 @ 00c270a0 ////

undefined4 * __thiscall FUN_00c270a0(void *this,byte param_1)

{
  FUN_00c26ad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c270f0 @ 00c270f0 ////

void __fastcall FUN_00c270f0(int param_1)

{
  FUN_00bdde20(*(int *)(*(int *)(param_1 + 4) + 8) + 8);
  return;
}


//// FUNCTION FUN_00c27100 @ 00c27100 ////

float * __thiscall FUN_00c27100(void *this,float *param_1)

{
  float fVar1;
  undefined2 uVar2;
  float fVar3;
  undefined2 extraout_var;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *(float *)(*(int *)(*(int *)this + 0x18) + 0x28);
  fVar4 = (float10)FUN_00bdde20(*(int *)(*(int *)((int)this + 4) + 8) + 8);
  fVar5 = (float10)FUN_00bdde10(*(int *)(*(int *)((int)this + 4) + 8) + 8);
  fVar3 = (float)FUN_00bde0a0(*(int *)(*(int *)((int)this + 4) + 8) + 8);
  uVar2 = FUN_00bde080(*(int *)(*(int *)((int)this + 4) + 8) + 8);
  *param_1 = (float)fVar5;
  param_1[1] = (float)fVar4;
  param_1[2] = fVar1;
  param_1[3] = (float)CONCAT22(extraout_var,uVar2);
  param_1[4] = fVar3;
  return param_1;
}


//// FUNCTION FUN_00c27180 @ 00c27180 ////

int * __thiscall FUN_00c27180(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0437b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00bcf160((undefined4 *)((int)this + 8));
  local_4 = 0;
  FUN_00bcfac0((void *)(*(int *)this + 0x24),(int *)(*(int *)this + 0x20),(int)this);
  uVar1 = FUN_00beac00((void *)**(undefined4 **)(*(int *)this + 0x18),param_2);
  *(undefined4 *)((int)this + 4) = uVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c27200 @ 00c27200 ////

void __fastcall FUN_00c27200(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d04390;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bea350((int *)param_1[1]);
  param_1[1] = 0;
  FUN_00bcff70((void *)(*param_1 + 0x24),(int *)(*param_1 + 0x20),(int)param_1);
  local_4 = 0xffffffff;
  FUN_00bcf880(param_1 + 2);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c272d0 @ 00c272d0 ////

void __fastcall FUN_00c272d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6268;
  return;
}


//// FUNCTION FUN_00c27300 @ 00c27300 ////

undefined4 * __thiscall FUN_00c27300(void *this,undefined4 param_1)

{
  FUN_00bcf160(this);
  *(undefined4 *)((int)this + 0x14) = param_1;
  return this;
}


//// FUNCTION FUN_00c27340 @ 00c27340 ////

int * __thiscall FUN_00c27340(void *this,byte param_1)

{
  FUN_00c4f780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c27360 @ 00c27360 ////

int * __thiscall FUN_00c27360(void *this,byte param_1)

{
  thunk_FUN_00bcf880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c273a0 @ 00c273a0 ////

void __thiscall FUN_00c273a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  iVar1 = FUN_00bcecf0((undefined4 *)((int)this + 0x2c));
  if (iVar1 != 0) {
    do {
      *param_1 = *param_1 + 1;
      iVar2 = FUN_00bcecf0((undefined4 *)(iVar1 + 0x34));
      if (iVar2 != 0) {
        do {
          param_1[1] = param_1[1] + 1;
          iVar3 = FUN_00bcecf0((undefined4 *)(iVar2 + 0x24));
          if (iVar3 != 0) {
            do {
              param_1[2] = param_1[2] + 1;
              iVar3 = FUN_00bcf3f0((void *)(iVar2 + 0x24),(int *)(iVar2 + 0x20),iVar3);
            } while (iVar3 != 0);
          }
          iVar2 = FUN_00bcf3f0((void *)(iVar1 + 0x34),(int *)(iVar1 + 0x30),iVar2);
        } while (iVar2 != 0);
      }
      iVar1 = FUN_00bcf3f0((void *)((int)this + 0x2c),(int *)((int)this + 0x28),iVar1);
    } while (iVar1 != 0);
  }
  iVar1 = FUN_00bcecf0((undefined4 *)((int)this + 0x14));
  if (iVar1 != 0) {
    do {
      param_1[4] = param_1[4] + 1;
      iVar2 = FUN_00bcecf0((undefined4 *)(iVar1 + 0x1c));
      if (iVar2 != 0) {
        do {
          param_1[3] = param_1[3] + 1;
          iVar2 = FUN_00bcf3f0((void *)(iVar1 + 0x1c),(int *)(iVar1 + 0x18),iVar2);
        } while (iVar2 != 0);
      }
      iVar1 = FUN_00bcf3f0((void *)((int)this + 0x14),(int *)((int)this + 0x10),iVar1);
    } while (iVar1 != 0);
  }
  return;
}


//// FUNCTION FUN_00c274e0 @ 00c274e0 ////

int __fastcall FUN_00c274e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBP;
  ulonglong uVar4;
  
  iVar3 = 0;
  iVar1 = FUN_00bcecf0((undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    do {
      iVar2 = FUN_00bced20((undefined4 *)(iVar1 + 0x28));
      if (iVar2 != 0) {
        FUN_00ad1180((double)(*(float *)(iVar2 + 0x28) / *(float *)(iVar1 + 0x20)),(short)unaff_EBP)
        ;
        uVar4 = FUN_00acd42c();
        iVar3 = iVar3 + (int)uVar4 * (int)uVar4;
      }
      iVar1 = FUN_00bcf3f0((void *)(param_1 + 0x2c),(int *)(param_1 + 0x28),iVar1);
    } while (iVar1 != 0);
  }
  return iVar3;
}


//// FUNCTION FUN_00c27550 @ 00c27550 ////

undefined4 __fastcall FUN_00c27550(int param_1)

{
  int *_Memory;
  int iVar1;
  void *this;
  
  _Memory = (int *)FUN_00bced20((undefined4 *)(param_1 + 0x20));
  if (_Memory == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_00bcf4e0((void *)(param_1 + 0x20),(int *)(param_1 + 0x1c),(int)_Memory);
  if (iVar1 != 0) {
    this = (void *)FUN_00bcecf0(_Memory + 0xc);
    while (this != (void *)0x0) {
      FUN_00c4fe90(this,iVar1);
      this = (void *)FUN_00bcecf0(_Memory + 0xc);
    }
    FUN_00bcff70((void *)(param_1 + 0x20),(int *)(param_1 + 0x1c),(int)_Memory);
    FUN_00c4f780(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return 0;
}


//// FUNCTION FUN_00c275d0 @ 00c275d0 ////

void __fastcall FUN_00c275d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 0x2c));
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)FUN_00bcf3f0((void *)(param_1 + 0x2c),(int *)(param_1 + 0x28),(int)piVar1);
      iVar3 = FUN_00bcecf0(piVar1 + 10);
      if ((iVar3 == 0) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x1c))(1);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c27620 @ 00c27620 ////

void __fastcall FUN_00c27620(int param_1)

{
  void *this;
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  LPCSTR pCVar3;
  int *piVar4;
  undefined1 local_236;
  undefined1 local_235;
  float local_234;
  float local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  void *local_220;
  void *local_21c;
  int *local_218;
  undefined **local_214;
  undefined1 local_210;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d043b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_00bcecf0((undefined4 *)(param_1 + 0x2c));
  if (this != (void *)0x0) {
    piVar4 = (int *)(param_1 + 0x28);
    local_218 = piVar4;
    do {
      iVar1 = FUN_00bcecf0((undefined4 *)((int)this + 0x28));
      if (iVar1 != 0) {
        local_21c = (void *)((int)this + 0x28);
        do {
          this_00 = (void *)FUN_00bcecf0((undefined4 *)(iVar1 + 0x30));
          if (this_00 != (void *)0x0) {
            local_220 = (void *)(iVar1 + 0x30);
            do {
              puVar2 = FUN_00c50b20(this,*(undefined4 *)((int)this_00 + 0x40));
              if (puVar2 == (undefined4 *)0x0) {
                local_214 = &PTR_LAB_00d9db7c;
                local_210 = 0;
                local_111 = 0;
                local_4 = 0;
                LH_LogErrorMessage(&local_214,".\\MapAnalysisImpCSolver.cpp");
                LH_LogErrorMessage(&local_214,"(");
                FUN_00bbe970(0xdf);
                LH_LogErrorMessage(&local_214,") : ");
                LH_LogErrorMessage(&local_214,"Null group");
                LH_LogErrorMessage(&local_214,"\n");
                pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_214);
                LH_Assert(&local_235,pCVar3);
                local_4 = 0xffffffff;
                local_214 = &PTR_LAB_00d9d9b4;
                DebugBreak();
              }
              local_234 = *(float *)((int)this_00 + 0x44);
              local_230 = *(float *)((int)this_00 + 0x48);
              local_22c = *(undefined4 *)((int)this_00 + 0x4c);
              local_228 = *(undefined4 *)((int)this_00 + 0x50);
              local_224 = *(undefined4 *)((int)this_00 + 0x54);
              if (local_230 != *(float *)(iVar1 + 0x28)) {
                local_234 = (local_234 / local_230) * *(float *)(iVar1 + 0x28);
                local_230 = *(float *)(iVar1 + 0x28);
              }
              puVar2 = FUN_00c502b0(puVar2,&local_234);
              if (puVar2 == (undefined4 *)0x0) {
                local_110 = &PTR_LAB_00d9db7c;
                local_10c = 0;
                local_d = 0;
                local_4 = 1;
                LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCSolver.cpp");
                LH_LogErrorMessage(&local_110,"(");
                FUN_00bbe970(0xea);
                LH_LogErrorMessage(&local_110,") : ");
                LH_LogErrorMessage(&local_110,"Null group model");
                LH_LogErrorMessage(&local_110,"\n");
                pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
                LH_Assert(&local_236,pCVar3);
                local_4 = 0xffffffff;
                local_110 = &PTR_LAB_00d9d9b4;
                DebugBreak();
              }
              FUN_00c4fec0(this_00,(int)puVar2);
              this_00 = (void *)FUN_00bcf3f0(local_220,(int *)(iVar1 + 0x2c),(int)this_00);
            } while (this_00 != (void *)0x0);
          }
          iVar1 = FUN_00bcf3f0(local_21c,(int *)((int)this + 0x24),iVar1);
          piVar4 = local_218;
        } while (iVar1 != 0);
      }
      this = (void *)FUN_00bcf3f0(piVar4 + 1,piVar4,(int)this);
    } while (this != (void *)0x0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c27920 @ 00c27920 ////

void __fastcall FUN_00c27920(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 0x14));
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(1);
    piVar1 = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 0x14));
  }
  return;
}


//// FUNCTION FUN_00c27950 @ 00c27950 ////

void __fastcall FUN_00c27950(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 8));
  if (_Memory != (int *)0x0) {
    do {
      FUN_00bcff70((void *)(param_1 + 8),(int *)(param_1 + 4),(int)_Memory);
      if (_Memory != (int *)0x0) {
        thunk_FUN_00bcf880(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 8));
    } while (_Memory != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c279a0 @ 00c279a0 ////

void __fastcall FUN_00c279a0(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 0x20));
  if (_Memory != (int *)0x0) {
    do {
      FUN_00bcff70((void *)(param_1 + 0x20),(int *)(param_1 + 0x1c),(int)_Memory);
      if (_Memory != (int *)0x0) {
        FUN_00c4f780(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 0x20));
    } while (_Memory != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00c279f0 @ 00c279f0 ////

void __fastcall FUN_00c279f0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 0x2c));
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(1);
    piVar1 = (int *)FUN_00bcecf0((undefined4 *)(param_1 + 0x2c));
  }
  return;
}


//// FUNCTION FUN_00c27a20 @ 00c27a20 ////

void __fastcall FUN_00c27a20(int param_1)

{
  FUN_00c279a0(param_1);
  FUN_00c279f0(param_1);
  return;
}


//// FUNCTION FUN_00c27a30 @ 00c27a30 ////

void __fastcall FUN_00c27a30(int param_1)

{
  int iVar1;
  undefined4 *this;
  LPCSTR pCVar2;
  undefined1 local_11d;
  int local_11c;
  void *local_118;
  undefined4 *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d043d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_11c = param_1;
  iVar1 = FUN_00bcecf0((undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    local_118 = (void *)(param_1 + 8);
    do {
      local_114 = operator_new(0x40);
      local_4 = 0;
      if (local_114 == (undefined4 *)0x0) {
        this = (undefined4 *)0x0;
      }
      else {
        this = FUN_00c50ca0(local_114);
      }
      local_4 = 0xffffffff;
      if (this == (undefined4 *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCSolver.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x13b);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_11d,pCVar2);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      this[6] = *(undefined4 *)(iVar1 + 0x14);
      this[7] = 1;
      this[8] = *(undefined4 *)(iVar1 + 0x14);
      FUN_00c50c70(this,local_11c);
      iVar1 = FUN_00bcf3f0(local_118,(int *)(local_11c + 4),iVar1);
    } while (iVar1 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c27ba0 @ 00c27ba0 ////

int __thiscall FUN_00c27ba0(void *this,float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_00bcecf0((undefined4 *)((int)this + 0x2c));
  if (iVar1 != 0) {
    do {
      if (((*(float *)(iVar1 + 0x20) < param_1) && (*(int *)(iVar1 + 0x1c) == param_2)) &&
         ((iVar2 == 0 || (*(float *)(iVar2 + 0x20) < *(float *)(iVar1 + 0x20))))) {
        iVar2 = iVar1;
      }
      iVar1 = FUN_00bcf3f0((void *)((int)this + 0x2c),(int *)((int)this + 0x28),iVar1);
    } while (iVar1 != 0);
  }
  return iVar2;
}


//// FUNCTION FUN_00c27c00 @ 00c27c00 ////

void __fastcall FUN_00c27c00(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d04417;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da649c;
  local_4 = 4;
  FUN_00c27a20((int)param_1);
  FUN_00c27920((int)param_1);
  FUN_00c27950((int)param_1);
  local_4._0_1_ = 3;
  param_1[10] = &PTR_LAB_00da6398;
  FUN_00bcffc0(param_1 + 0xb);
  local_4._0_1_ = 2;
  param_1[7] = &PTR_LAB_00da6370;
  FUN_00bcffc0(param_1 + 8);
  local_4._0_1_ = 1;
  param_1[4] = &PTR_LAB_00da6348;
  FUN_00bcffc0(param_1 + 5);
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[1] = &PTR_LAB_00da6320;
  FUN_00bcffc0(param_1 + 2);
  *param_1 = &PTR_LAB_00da6268;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c27fe0 @ 00c27fe0 ////

void __fastcall FUN_00c27fe0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  LPCSTR pCVar4;
  undefined1 local_121;
  int local_120;
  void *local_11c;
  void *local_118;
  undefined4 *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0448e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_120 = param_1;
  iVar2 = FUN_00bcecf0((undefined4 *)(param_1 + 0x14));
  if (iVar2 != 0) {
    local_118 = (void *)(param_1 + 0x14);
    do {
      this = (void *)FUN_00bcecf0((undefined4 *)(iVar2 + 0x1c));
      if (this != (void *)0x0) {
        local_11c = (void *)(iVar2 + 0x1c);
        do {
          puVar1 = (undefined4 *)((int)this + 0x48);
          puVar3 = (undefined4 *)
                   FUN_00bcef50((void *)(param_1 + 0x20),(void *)(param_1 + 0x1c),puVar1,puVar1);
          if (puVar3 == (undefined4 *)0x0) {
            local_114 = operator_new(0x3c);
            local_4 = 0;
            if (local_114 == (undefined4 *)0x0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              puVar3 = FUN_00c4f850(local_114);
            }
            local_4 = 0xffffffff;
            if (puVar3 == (undefined4 *)0x0) {
              local_110 = &PTR_LAB_00d9db7c;
              local_10c = 0;
              local_d = 0;
              local_4 = 1;
              LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCSolver.cpp");
              LH_LogErrorMessage(&local_110,"(");
              FUN_00bbe970(0x153);
              LH_LogErrorMessage(&local_110,") : ");
              LH_LogErrorMessage(&local_110,"EMEM");
              LH_LogErrorMessage(&local_110,"\n");
              pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
              LH_Assert(&local_121,pCVar4);
              local_4 = 0xffffffff;
              local_110 = &PTR_LAB_00d9d9b4;
              DebugBreak();
            }
            puVar3[10] = *puVar1;
            FUN_00bcfac0((void *)(local_120 + 0x20),(int *)(local_120 + 0x1c),(int)puVar3);
          }
          FUN_00c4fe90(this,(int)puVar3);
          this = (void *)FUN_00bcf3f0(local_11c,(int *)(iVar2 + 0x18),(int)this);
          param_1 = local_120;
        } while (this != (void *)0x0);
      }
      iVar2 = FUN_00bcf3f0(local_118,(int *)(param_1 + 0x10),iVar2);
    } while (iVar2 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c281c0 @ 00c281c0 ////

/* WARNING: Removing unreachable block (ram,0x00c28313) */

undefined4 * __thiscall FUN_00c281c0(void *this,int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  LPCSTR pCVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 unaff_EDI;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  undefined1 local_115;
  float local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d044b1;
  local_c = ExceptionList;
  fVar2 = *(float *)(param_1 + 0x28) / param_3;
  puVar7 = (undefined4 *)0x0;
  fVar3 = *(float *)(param_1 + 0x28) / param_2;
  fVar1 = (fVar3 + fVar2) * 0.5;
  ExceptionList = &local_c;
  puVar4 = (undefined4 *)FUN_00bcecf0((undefined4 *)((int)this + 0x2c));
  uVar11 = (undefined2)unaff_EDI;
  if (puVar4 != (undefined4 *)0x0) {
    do {
      if (((fVar2 <= (float)puVar4[8]) && ((float)puVar4[8] < fVar3 != ((float)puVar4[8] == fVar3)))
         && ((puVar7 == (undefined4 *)0x0 ||
             (ABS(fVar1 - *(float *)(param_1 + 0x28) / (float)puVar4[8]) <
              ABS(fVar1 - *(float *)(param_1 + 0x28) / (float)puVar7[8]))))) {
        puVar7 = puVar4;
      }
      puVar4 = (undefined4 *)
               FUN_00bcf3f0((void *)((int)this + 0x2c),(int *)((int)this + 0x28),(int)puVar4);
      uVar11 = (undefined2)unaff_EDI;
    } while (puVar4 != (undefined4 *)0x0);
    if (puVar7 != (undefined4 *)0x0) {
      ExceptionList = local_c;
      return puVar7;
    }
  }
  iVar5 = FUN_00c27ba0(this,fVar2,1);
  if (iVar5 == 0) {
    puVar7 = (undefined4 *)FUN_00bcecf0((undefined4 *)((int)this + 0x2c));
  }
  else {
    fVar1 = *(float *)(iVar5 + 0x20);
    FUN_00ad1180((double)((1.0 / fVar1) * fVar2),uVar11);
    uVar9 = FUN_00acd42c();
    FUN_00acf400((double)((1.0 / fVar1) * fVar3),uVar11);
    uVar10 = FUN_00acd42c();
    uVar8 = (uint)((int)uVar9 + (int)uVar10) >> 1;
    fVar2 = (float)uVar8;
    local_114 = fVar2 * fVar1;
    puVar7 = (undefined4 *)
             FUN_00bcef50((void *)((int)this + 0x2c),(void *)((int)this + 0x28),&local_114,
                          &local_114);
    if (puVar7 == (undefined4 *)0x0) {
      puVar4 = operator_new(0x40);
      local_4 = 0;
      puVar7 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar7 = FUN_00c50ca0(puVar4);
      }
      local_4 = 0xffffffff;
      if (puVar7 == (undefined4 *)0x0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,".\\MapAnalysisImpCSolver.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x1b7);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"EMEM");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar6 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_115,pCVar6);
        local_4 = 0xffffffff;
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      puVar7[6] = fVar1;
      puVar7[8] = fVar2 * fVar1;
      puVar7[7] = uVar8;
      FUN_00c50c70(puVar7,(int)this);
    }
  }
  ExceptionList = local_c;
  return puVar7;
}


//// FUNCTION FUN_00c28450 @ 00c28450 ////

undefined4 __thiscall FUN_00c28450(void *this,float param_1,float param_2)

{
  void *this_00;
  undefined4 *puVar1;
  
  this_00 = (void *)FUN_00bcecf0((undefined4 *)((int)this + 0x20));
  while( true ) {
    if (this_00 == (void *)0x0) {
      return 1;
    }
    if (*(int *)((int)this_00 + 0x38) != 0) {
      FUN_00c4f690((int)this_00);
    }
    puVar1 = FUN_00c281c0(this,(int)this_00,param_1,param_2);
    if (puVar1 == (undefined4 *)0x0) break;
    FUN_00c4f820(this_00,(int)puVar1);
    this_00 = (void *)FUN_00bcf3f0((void *)((int)this + 0x20),(int *)((int)this + 0x1c),(int)this_00
                                  );
  }
  return 0;
}


//// FUNCTION FUN_00c284c0 @ 00c284c0 ////

undefined4 * __fastcall FUN_00c284c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d044e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da649c;
  local_4 = 0;
  param_1[1] = &PTR_LAB_00da6320;
  FUN_00bcf170(param_1 + 2);
  param_1[1] = &PTR_LAB_00da63fc;
  local_4._0_1_ = 1;
  param_1[4] = &PTR_LAB_00da6348;
  FUN_00bcf170(param_1 + 5);
  param_1[4] = &PTR_LAB_00da6424;
  local_4._0_1_ = 2;
  param_1[7] = &PTR_LAB_00da6370;
  FUN_00bcf170(param_1 + 8);
  param_1[7] = &PTR_LAB_00da644c;
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[10] = &PTR_LAB_00da6398;
  FUN_00bcf170(param_1 + 0xb);
  param_1[10] = &PTR_LAB_00da6474;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c28570 @ 00c28570 ////

uint __thiscall FUN_00c28570(void *this,int param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 unaff_DI;
  ulonglong uVar4;
  
  (**(code **)(*(int *)this + 0x14))();
  FUN_00c27fe0((int)this);
  FUN_00c27a30((int)this);
  uVar2 = FUN_00c28450(this,param_2,param_3);
  if ((char)uVar2 != '\0') {
    fVar1 = (float)param_1;
    if (param_1 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_00acf400((double)(fVar1 * 0.31830987),unaff_DI);
    uVar4 = FUN_00acd42c();
    do {
      uVar3 = FUN_00c274e0((int)this);
      if (uVar3 <= (uint)uVar4) {
        FUN_00c275d0((int)this);
        uVar2 = FUN_00c27620((int)this);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      uVar2 = FUN_00c27550((int)this);
    } while ((char)uVar2 != '\0');
  }
  uVar3 = (**(code **)(*(int *)this + 0x14))();
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00c28610 @ 00c28610 ////

undefined4 * FUN_00c28610(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d044f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x34);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00c284c0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00c28670 @ 00c28670 ////

int * __fastcall FUN_00c28670(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c28690 @ 00c28690 ////

int * __fastcall FUN_00c28690(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c286b0 @ 00c286b0 ////

int * __fastcall FUN_00c286b0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c286d0 @ 00c286d0 ////

int * __fastcall FUN_00c286d0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c28bd0 @ 00c28bd0 ////

void __fastcall FUN_00c28bd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6320;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c28cc0 @ 00c28cc0 ////

void __fastcall FUN_00c28cc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6348;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c28dd0 @ 00c28dd0 ////

void __fastcall FUN_00c28dd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6370;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c28eb0 @ 00c28eb0 ////

void __fastcall FUN_00c28eb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6398;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c29000 @ 00c29000 ////

undefined4 * __fastcall FUN_00c29000(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6320;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c29020 @ 00c29020 ////

undefined4 * __fastcall FUN_00c29020(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6348;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c29040 @ 00c29040 ////

undefined4 * __fastcall FUN_00c29040(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6370;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c29060 @ 00c29060 ////

undefined4 * __fastcall FUN_00c29060(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6398;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c29080 @ 00c29080 ////

undefined4 * __thiscall FUN_00c29080(void *this,byte param_1)

{
  FUN_00c28bd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c290a0 @ 00c290a0 ////

undefined4 * __thiscall FUN_00c290a0(void *this,byte param_1)

{
  FUN_00c28cc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c290c0 @ 00c290c0 ////

undefined4 * __thiscall FUN_00c290c0(void *this,byte param_1)

{
  FUN_00c28dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c290e0 @ 00c290e0 ////

undefined4 * __thiscall FUN_00c290e0(void *this,byte param_1)

{
  FUN_00c28eb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29120 @ 00c29120 ////

void __fastcall FUN_00c29120(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6320;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c29150 @ 00c29150 ////

void __fastcall FUN_00c29150(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6348;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c29180 @ 00c29180 ////

void __fastcall FUN_00c29180(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6370;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c291b0 @ 00c291b0 ////

void __fastcall FUN_00c291b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6398;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c291e0 @ 00c291e0 ////

undefined4 * __fastcall FUN_00c291e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6320;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da63fc;
  return param_1;
}


//// FUNCTION FUN_00c29200 @ 00c29200 ////

undefined4 * __fastcall FUN_00c29200(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6348;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da6424;
  return param_1;
}


//// FUNCTION FUN_00c29220 @ 00c29220 ////

undefined4 * __fastcall FUN_00c29220(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6370;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da644c;
  return param_1;
}


//// FUNCTION FUN_00c29240 @ 00c29240 ////

undefined4 * __fastcall FUN_00c29240(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6398;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da6474;
  return param_1;
}


//// FUNCTION FUN_00c29260 @ 00c29260 ////

undefined4 * __thiscall FUN_00c29260(void *this,byte param_1)

{
  FUN_00c29120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29280 @ 00c29280 ////

undefined4 * __thiscall FUN_00c29280(void *this,byte param_1)

{
  FUN_00c29150(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c292a0 @ 00c292a0 ////

undefined4 * __thiscall FUN_00c292a0(void *this,byte param_1)

{
  FUN_00c29180(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c292c0 @ 00c292c0 ////

undefined4 * __thiscall FUN_00c292c0(void *this,byte param_1)

{
  FUN_00c291b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c292e0 @ 00c292e0 ////

undefined4 * __thiscall FUN_00c292e0(void *this,byte param_1)

{
  FUN_00c27c00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29320 @ 00c29320 ////

void __thiscall FUN_00c29320(void *this,undefined4 param_1)

{
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0451b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x38);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    FUN_00c51c70(this_00,this,param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c29390 @ 00c29390 ////

void __fastcall FUN_00c29390(void *param_1)

{
  if ((*(byte *)((int)param_1 + 0x54) & 1) != 0) {
    FUN_00bf48c0(param_1,*(int *)(*(int *)(**(int **)((int)param_1 + 0x60) + 4) + 0x48));
  }
  *(undefined1 *)((int)param_1 + 0x91) = 1;
  return;
}


//// FUNCTION FUN_00c29420 @ 00c29420 ////

void __thiscall FUN_00c29420(void *this,undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *unaff_retaddr;
  
  cVar1 = (**(code **)(*(int *)this + 0x50))(param_2);
  if (cVar1 == '\0') {
    LH_Assert(&param_1,"EM_Is3D ( Engine )\n");
    DebugBreak();
  }
  *unaff_retaddr = *(undefined4 *)((int)this + 0x6c);
  unaff_retaddr[1] = *(undefined4 *)((int)this + 0x70);
  unaff_retaddr[2] = *(undefined4 *)((int)this + 0x74);
  return;
}


//// FUNCTION FUN_00c29590 @ 00c29590 ////

void __fastcall FUN_00c29590(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if ((uVar1 != 0) &&
     (piVar2 = *(int **)(param_1 + 0x60),
     *(int *)(*(int *)(*(int *)(*piVar2 + 4) + 0x48) + 0x5fc) != 0)) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    puVar6 = (undefined4 *)((uint)&local_c & -(uint)((uVar1 & 2) != 0));
    puVar5 = (undefined4 *)(-(uint)((uVar1 & 1) != 0) & (uint)local_10);
    if (puVar6 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x70);
      *puVar6 = *(undefined4 *)(param_1 + 0x6c);
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
    }
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *(undefined4 *)(param_1 + 0x68);
    }
    (**(code **)**(undefined4 **)(*(int *)(*(int *)(*piVar2 + 4) + 0x48) + 0x5fc))
              (*(undefined4 *)(param_1 + 0x44),puVar5,0,puVar6,0);
    if (puVar6 != (undefined4 *)0x0) {
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      *(undefined4 *)(param_1 + 0x6c) = *puVar6;
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      *(undefined4 *)(param_1 + 0x74) = uVar4;
    }
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x68) = *puVar5;
    }
  }
  return;
}


//// FUNCTION FUN_00c29660 @ 00c29660 ////

void __thiscall FUN_00c29660(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_00da6524;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}


//// FUNCTION FUN_00c29680 @ 00c29680 ////

void __thiscall FUN_00c29680(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bcef50((void *)((int)this + 0x80),(void *)((int)this + 0x7c),&param_1,&param_1);
  if (puVar1 != (undefined4 *)0x0) {
    param_1 = 1;
                    /* WARNING: Could not recover jumptable at 0x00c296ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)();
    return;
  }
  return;
}


//// FUNCTION FUN_00c296c0 @ 00c296c0 ////

void __fastcall FUN_00c296c0(int *param_1)

{
  undefined **local_18;
  undefined **local_14;
  undefined ***local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04535;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x91) == '\0') {
    ExceptionList = &local_c;
    FUN_00c29590((int)param_1);
    local_18 = &PTR_LAB_00da651c;
    local_10 = &local_18;
    local_14 = &PTR_LAB_00da6554;
    local_4 = 1;
    FUN_00bcf140(param_1 + 0x20,&local_14);
    *(undefined1 *)(param_1 + 0x1e) = 0;
    ExceptionList = local_c;
    return;
  }
  if ((char)param_1[0x24] != '\0') {
    ExceptionList = &local_c;
    (*(code *)**(undefined4 **)param_1[0x19])();
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_00bebc00(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c29770 @ 00c29770 ////

void __fastcall FUN_00c29770(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d0456e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da6588;
  local_4 = 3;
  iVar1 = FUN_00bcecf0(param_1 + 0x20);
  while (iVar1 != 0) {
    FUN_00c29680(param_1,*(undefined4 *)(iVar1 + 0x1c));
    iVar1 = FUN_00bcecf0(param_1 + 0x20);
  }
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    FUN_00bf48c0(param_1,*(int *)(*(int *)(*(int *)param_1[0x18] + 4) + 0x48));
  }
  FUN_00bf4810(param_1,*(int *)(*(int *)(*(int *)param_1[0x18] + 4) + 0x48));
  FUN_00bcff70((void *)(param_1[0x18] + 0x14),(int *)(param_1[0x18] + 0x10),(int)param_1);
  FUN_00bcff70((void *)(param_1[0x18] + 8),(int *)(param_1[0x18] + 4),(int)param_1);
  local_4._0_1_ = 2;
  FUN_00bcf880(param_1 + 0x2d);
  local_4._0_1_ = 1;
  FUN_00bcf880(param_1 + 0x28);
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1f] = &PTR_LAB_00da652c;
  FUN_00bcffc0(param_1 + 0x20);
  local_4 = 0xffffffff;
  FUN_00bf4760(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c29870 @ 00c29870 ////

void __fastcall FUN_00c29870(undefined4 param_1)

{
  int extraout_EDX;
  undefined **local_1c;
  undefined1 *local_18;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d04588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c29660(local_14,param_1);
  local_18 = local_14;
  local_1c = &PTR_LAB_00da1838;
  local_4 = 1;
  FUN_00bcf140((void *)(*(int *)(extraout_EDX + 100) + 0xc),&local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c298e0 @ 00c298e0 ////

undefined4 * __thiscall
FUN_00c298e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,char param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,char param_9,
            char param_10,undefined4 param_11,undefined4 param_12,undefined1 param_13)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d045c1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bf46e0(this);
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined ***)this = &PTR_LAB_00da6588;
  *(undefined4 *)((int)this + 0x68) = param_6;
  *(undefined4 *)((int)this + 0x6c) = *param_8;
  *(undefined4 *)((int)this + 0x70) = param_8[1];
  *(undefined4 *)((int)this + 0x74) = param_8[2];
  *(undefined1 *)((int)this + 0x78) = 0;
  local_4 = 0;
  *(undefined ***)((int)this + 0x7c) = &PTR_LAB_00da652c;
  FUN_00bcf170((int *)((int)this + 0x80));
  *(undefined ***)((int)this + 0x7c) = &PTR_LAB_00da655c;
  *(undefined4 *)((int)this + 0x8c) = param_11;
  *(undefined4 *)((int)this + 0x94) = param_12;
  local_4._0_1_ = 1;
  *(undefined1 *)((int)this + 0x90) = param_13;
  *(undefined1 *)((int)this + 0x91) = 0;
  *(undefined1 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = param_7;
  FUN_00bcf160((undefined4 *)((int)this + 0xa0));
  local_4._0_1_ = 2;
  FUN_00bcf160((undefined4 *)((int)this + 0xb4));
  local_4 = CONCAT31(local_4._1_3_,3);
  *(uint *)((int)this + 200) = (uint)(param_9 != '\0') | -(uint)(param_10 != '\0') & 2;
  FUN_00bf46d0(this,param_3);
  FUN_00bf47d0(this,*(int *)(*(int *)(**(int **)((int)this + 0x60) + 4) + 0x48));
  *(undefined4 *)((int)this + 0x44) = *param_4;
  *(undefined4 *)((int)this + 0x48) = param_4[1];
  *(undefined4 *)((int)this + 0x4c) = param_4[2];
  *(undefined4 *)((int)this + 0x50) = param_4[3];
  FUN_00bf46b0(this,param_5);
  FUN_00bf4860(this,*(int *)(*(int *)(**(int **)((int)this + 0x60) + 4) + 0x48));
  FUN_00bcfac0((void *)(*(int *)((int)this + 0x60) + 8),(int *)(*(int *)((int)this + 0x60) + 4),
               (int)this);
  FUN_00bcfac0((void *)(*(int *)((int)this + 0x60) + 0x14),
               (int *)(*(int *)((int)this + 0x60) + 0x10),(int)this);
  FUN_00c29590((int)this);
  FUN_00c29870(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c29a80 @ 00c29a80 ////

int * __fastcall FUN_00c29a80(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c29b00 @ 00c29b00 ////

void __fastcall FUN_00c29b00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9f9dc;
  return;
}


//// FUNCTION FUN_00c29b90 @ 00c29b90 ////

void __fastcall FUN_00c29b90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da64c4;
  return;
}


//// FUNCTION FUN_00c29ba0 @ 00c29ba0 ////

undefined4 * __thiscall FUN_00c29ba0(void *this,byte param_1)

{
  FUN_00c29b90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29be0 @ 00c29be0 ////

void __fastcall FUN_00c29be0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da17dc;
  return;
}


//// FUNCTION FUN_00c29bf0 @ 00c29bf0 ////

undefined4 * __thiscall FUN_00c29bf0(void *this,byte param_1)

{
  FUN_00c29be0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29c20 @ 00c29c20 ////

void __fastcall FUN_00c29c20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da652c;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c29d70 @ 00c29d70 ////

undefined4 * __thiscall FUN_00c29d70(void *this,byte param_1)

{
  FUN_00c29b00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29d90 @ 00c29d90 ////

undefined4 * __fastcall FUN_00c29d90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da652c;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION FUN_00c29db0 @ 00c29db0 ////

undefined4 * __thiscall FUN_00c29db0(void *this,byte param_1)

{
  FUN_00c29c20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29dd0 @ 00c29dd0 ////

void __fastcall FUN_00c29dd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da652c;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c29e00 @ 00c29e00 ////

void __thiscall FUN_00c29e00(void *this,undefined4 param_1)

{
  undefined **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d045d8;
  local_c = ExceptionList;
  local_14 = &PTR_LAB_00da6554;
  local_10 = param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bcf140(this,&local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c29e50 @ 00c29e50 ////

undefined4 * __fastcall FUN_00c29e50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da652c;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da655c;
  return param_1;
}


//// FUNCTION FUN_00c29e70 @ 00c29e70 ////

undefined4 * __thiscall FUN_00c29e70(void *this,byte param_1)

{
  FUN_00c29dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29ec0 @ 00c29ec0 ////

undefined4 * __thiscall FUN_00c29ec0(void *this,byte param_1)

{
  FUN_00c29770(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c29ee0 @ 00c29ee0 ////

void __fastcall FUN_00c29ee0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6600;
  return;
}


//// FUNCTION FUN_00c29f40 @ 00c29f40 ////

void __fastcall FUN_00c29f40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da6610;
  return;
}


//// FUNCTION FUN_00c29f50 @ 00c29f50 ////

void __thiscall FUN_00c29f50(void *this,void *param_1)

{
  FUN_00c520e0((void *)((int)this + 0x68),param_1);
  return;
}


//// FUNCTION FUN_00c29f70 @ 00c29f70 ////

void __fastcall FUN_00c29f70(int *param_1)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d045f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bec660((void *)param_1[0xb],param_1);
  local_4 = 0xffffffff;
  FUN_00bc1490(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2a000 @ 00c2a000 ////

float10 __fastcall FUN_00c2a000(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(param_1 + 0x34);
  if (*(char *)(param_1 + 100) != '\0') {
    if ((float10)3.1415927 <= fVar1) {
      return fVar1 - (float10)6.2831855;
    }
    if (fVar1 < (float10)-3.1415927) {
      fVar1 = fVar1 + (float10)6.2831855;
    }
  }
  return fVar1;
}


//// FUNCTION FUN_00c2a040 @ 00c2a040 ////

void __fastcall FUN_00c2a040(int param_1)

{
  FUN_00bca3e0((void *)(param_1 + 0x34),
               1000.0 / *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 4) + 0x84));
  return;
}


//// FUNCTION FUN_00c2a070 @ 00c2a070 ////

void __thiscall FUN_00c2a070(void *this,float param_1,float param_2)

{
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0460a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)&DAT_010ced2c);
  local_4 = 0;
  FUN_00bca1a0((void *)((int)this + 0x34),param_1,0.0,param_2);
  local_4 = 0xffffffff;
  FUN_00bc1490(local_14);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2a0e0 @ 00c2a0e0 ////

undefined4 * __thiscall FUN_00c2a0e0(void *this,undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0463d;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = &PTR_FUN_00da661c;
  FUN_00bcf160((undefined4 *)((int)this + 4));
  local_4._0_1_ = 1;
  FUN_00bcf160((undefined4 *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 100) = 0;
  FUN_00c52110((undefined4 *)((int)this + 0x68));
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar2 = (**(code **)**(undefined4 **)((int)this + 0x30))();
  *(undefined4 *)((int)this + 0x7c) = uVar2;
  FUN_00bca140((void *)((int)this + 0x34),param_3);
  FUN_00bcfac0((void *)(*(int *)((int)this + 0x2c) + 0xc),(int *)(*(int *)((int)this + 0x2c) + 8),
               (int)this);
  iVar1 = *(int *)(*(int *)((int)this + 0x2c) + 4);
  FUN_00bcfac0((void *)(iVar1 + 0x20),(int *)(iVar1 + 0x1c),(int)this);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00c2a1a0 @ 00c2a1a0 ////

void __fastcall FUN_00c2a1a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d04670;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da661c;
  local_4 = 3;
  FUN_00bcff70((void *)(*(int *)(param_1[0xb] + 4) + 0x20),
               (int *)(*(int *)(param_1[0xb] + 4) + 0x1c),(int)param_1);
  FUN_00bcff70((void *)(param_1[0xb] + 0xc),(int *)(param_1[0xb] + 8),(int)param_1);
  param_1[0x1a] = &PTR_LAB_00da6610;
  local_4._0_1_ = 1;
  FUN_00bcf880(param_1 + 6);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcf880(param_1 + 1);
  *param_1 = &PTR_LAB_00da6600;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2a300 @ 00c2a300 ////

undefined4 * __thiscall FUN_00c2a300(void *this,byte param_1)

{
  FUN_00c2a1a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c2a320 @ 00c2a320 ////

void __fastcall FUN_00c2a320(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c2a340 @ 00c2a340 ////

void FUN_00c2a340(void)

{
  return;
}


//// FUNCTION FUN_00c2a350 @ 00c2a350 ////

void __thiscall FUN_00c2a350(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x34) = *param_1;
  *(undefined4 *)((int)this + 0x38) = param_1[1];
  *(undefined4 *)((int)this + 0x3c) = param_1[2];
  return;
}


//// FUNCTION FUN_00c2a370 @ 00c2a370 ////

void __fastcall FUN_00c2a370(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(param_1 + 0x34);
  iVar2 = _rand();
  *(float *)(param_1 + 0x44) =
       (float)iVar2 * *(float *)(param_1 + 0x34) * 3.051851e-05 + (1.0 - fVar1);
  return;
}


//// FUNCTION FUN_00c2a3b0 @ 00c2a3b0 ////

void __fastcall FUN_00c2a3b0(void *param_1)

{
  float fVar1;
  
  *(undefined4 *)((int)param_1 + 0x40) = 0x4b18967f;
  fVar1 = 1.0 - *(float *)((int)param_1 + 0x34) * 0.5;
  *(float *)((int)param_1 + 0x44) = fVar1;
  FUN_00bca140(param_1,fVar1);
  return;
}


//// FUNCTION FUN_00c2a3e0 @ 00c2a3e0 ////

float10 __fastcall FUN_00c2a3e0(float *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*param_1;
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (fVar1 < (float10)3.1415927) {
      if (fVar1 < (float10)-3.1415927) {
        fVar1 = fVar1 + (float10)6.2831855;
      }
    }
    else {
      fVar1 = fVar1 - (float10)6.2831855;
    }
  }
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00c2a440 @ 00c2a440 ////

void * __fastcall FUN_00c2a440(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0x30) = 0;
  FUN_00bca140(param_1,1.0);
  FUN_00c2a320((undefined4 *)((int)param_1 + 0x34));
  *(undefined4 *)((int)param_1 + 0x40) = 0x4b18967f;
  *(undefined4 *)((int)param_1 + 0x44) = 0x3f800000;
  return param_1;
}


//// FUNCTION FUN_00c2a470 @ 00c2a470 ////

void __thiscall FUN_00c2a470(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 0x40);
  *(float *)((int)this + 0x40) = fVar1;
  if (*(float *)((int)this + 0x38) * 1000.0 < fVar1) {
    *(undefined4 *)((int)this + 0x40) = 0;
    FUN_00c2a370((int)this);
  }
  FUN_00bca1a0(this,*(float *)((int)this + 0x44),0.0,*(float *)((int)this + 0x3c));
  FUN_00bca3e0(this,param_1);
  return;
}


//// FUNCTION FUN_00c2a4c0 @ 00c2a4c0 ////

void __thiscall FUN_00c2a4c0(void *this,int param_1,int param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  float fVar6;
  ulonglong uVar7;
  
  fVar6 = param_3[1];
  bVar5 = SUB41(param_3[2],0);
  if ((((uint)param_3[2] & 2) != 0) || ((1.0 <= *param_3 && (fVar6 == 0.0)))) {
    fVar6 = 0.0;
  }
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(float *)((int)this + 4) = fVar6;
  *(char *)((int)this + 0x24) = '\x01' - ((bVar5 & 1) != 1);
  *(bool *)((int)this + 0x2c) = (bVar5 & 4) == 4;
  if (*(int *)(param_2 + 0x10) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_2 + 0xc);
    iVar1 = *(int *)(param_2 + 0x10);
    *(int *)((int)this + 0x14) = iVar1;
    *(int *)((int)this + 0x18) = (*(int *)(param_2 + 8) - *(int *)((int)this + 0x10)) - iVar1;
  }
  uVar7 = FUN_00acd42c();
  uVar3 = (uint)uVar7;
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar3 < uVar2) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(uint *)((int)this + 8) = uVar3;
  }
  else if (uVar3 < uVar2 + *(int *)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0xc) = 1;
    *(uint *)((int)this + 8) = uVar3 - uVar2;
  }
  else if (uVar3 < *(int *)((int)this + 0x14) + uVar2 + *(int *)((int)this + 0x18)) {
    *(undefined4 *)((int)this + 0xc) = 2;
    *(uint *)((int)this + 8) = (uVar3 - *(int *)((int)this + 0x14)) - uVar2;
    if (fVar6 != 0.0) {
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  else {
    *(undefined4 *)((int)this + 0xc) = 3;
  }
  *(int *)((int)this + 0x28) = param_1;
  uVar4 = FUN_00bc30b0(param_1);
  *(undefined4 *)((int)this + 0x1c) = uVar4;
  return;
}


//// FUNCTION FUN_00c2a6c0 @ 00c2a6c0 ////

void __fastcall FUN_00c2a6c0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float *unaff_retaddr;
  
  (**(code **)*param_1)(0x3f800000);
  *unaff_retaddr = 0.0;
  unaff_retaddr[1] = 0.0;
  unaff_retaddr[2] = 0.0;
  if (*(char *)(param_1 + 9) != '\0') {
    unaff_retaddr[2] = 1.4013e-45;
  }
  if (*(char *)(param_1 + 0xb) != '\0') {
    unaff_retaddr[2] = (float)((uint)unaff_retaddr[2] | 4);
  }
  if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(param_1 + 0xb) != '\0')) {
    unaff_retaddr[1] = 0.0;
    *unaff_retaddr = 1.0;
    unaff_retaddr[2] = (float)((uint)unaff_retaddr[2] | 2);
    return;
  }
  iVar3 = param_1[4];
  iVar4 = param_1[6] + iVar3 + param_1[5];
  fVar1 = (float)iVar4;
  if (iVar4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar4 = param_1[3];
  if (iVar4 == 0) {
    unaff_retaddr[1] = (float)param_1[1];
    fVar2 = (float)(int)param_1[2];
    bVar5 = (int)param_1[2] < 0;
  }
  else if (iVar4 == 1) {
    iVar4 = param_1[2];
    fVar2 = (float)(iVar4 + iVar3);
    unaff_retaddr[1] = (float)param_1[1];
    bVar5 = iVar4 + iVar3 < 0;
  }
  else {
    if (iVar4 != 2) {
      unaff_retaddr[1] = 0.0;
      *unaff_retaddr = 1.0;
      return;
    }
    iVar3 = param_1[2] + iVar3 + param_1[5];
    fVar2 = (float)iVar3;
    unaff_retaddr[1] = 0.0;
    bVar5 = iVar3 < 0;
  }
  if (bVar5) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *unaff_retaddr = fVar2 / fVar1;
  return;
}


//// FUNCTION FUN_00c2a820 @ 00c2a820 ////

void __fastcall FUN_00c2a820(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00c2a850 @ 00c2a850 ////

uint __fastcall FUN_00c2a850(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  return uVar1 + 7 & 0xfffffff8;
}


//// FUNCTION FUN_00c2a870 @ 00c2a870 ////

int * __thiscall FUN_00c2a870(void *this,int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  LPCSTR pCVar3;
  undefined1 local_112;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0468b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_1;
  if (param_1 == 0) {
    LH_Assert(&local_111,"ObjectByteSize > 0\n");
    DebugBreak();
  }
  if (param_2 != 0) {
    uVar1 = FUN_00c2a850((int)this);
    pvVar2 = operator_new(uVar1 * param_2);
    *(void **)this = pvVar2;
    if (pvVar2 == (void *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 0;
      LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPresizedMemory.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0xb);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_112,pCVar3);
      DebugBreak();
    }
    *(int *)((int)this + 4) = *(int *)this;
    *(undefined4 *)(*(int *)this + 4) = 0;
    **(int **)((int)this + 4) = param_2;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c2a990 @ 00c2a990 ////

int * __fastcall FUN_00c2a990(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int *extraout_EDX;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d046a0;
  local_c = ExceptionList;
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    return (int *)0x0;
  }
  uVar1 = **(uint **)(param_1 + 4);
  if (1 < uVar1) {
    ExceptionList = &local_c;
    uVar3 = FUN_00c2a850(param_1);
    *extraout_EDX = uVar1 - 1;
    ExceptionList = local_c;
    return (int *)(uVar3 * (uVar1 - 1) + (int)extraout_EDX);
  }
  if (uVar1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPresizedMemory.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"No objects? This cannot be...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar4);
    DebugBreak();
  }
  piVar2 = *(int **)(param_1 + 4);
  *(int *)(param_1 + 4) = piVar2[1];
  ExceptionList = local_c;
  return piVar2;
}


//// FUNCTION FUN_00c2aab0 @ 00c2aab0 ////

void __thiscall FUN_00c2aab0(void *this,undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d046b5;
  local_c = ExceptionList;
  if (param_1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPresizedMemory.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x39);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  param_1[1] = *(undefined4 *)((int)this + 4);
  *param_1 = 1;
  *(undefined4 **)((int)this + 4) = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c2ac30 @ 00c2ac30 ////

void __fastcall FUN_00c2ac30(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00c2ac70 @ 00c2ac70 ////

void FUN_00c2ac70(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  param_1[2] = param_2 + -0x20;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0x4e;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  param_1[6] = param_3;
  param_1[7] = param_4;
  *param_1 = 0;
  if (param_3 != 0) {
    *(undefined4 **)(param_3 + 0x1c) = param_1;
  }
  if (param_4 != 0) {
    *(undefined4 **)(param_4 + 0x18) = param_1;
  }
  return;
}


//// FUNCTION FUN_00c2acc0 @ 00c2acc0 ////

void __thiscall FUN_00c2acc0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(int *)(param_1 + 8) + (int)*(short *)(param_1 + 0xc);
  uVar3 = uVar4 >> 9;
  *(uint *)(param_1 + 8) = uVar4;
  *(undefined2 *)(param_1 + 0xc) = 0;
  if (0xfe < uVar3) {
    uVar3 = 0xff;
  }
  piVar1 = (int *)((int)this + uVar3 * 4 + 0x3c);
  *(int **)(param_1 + 0x10) = piVar1;
  iVar2 = *piVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    *(int **)(iVar2 + 0x10) = (int *)(param_1 + 0x14);
  }
  *piVar1 = param_1;
  if (*(int *)((int)this + 0x1c) < *(int *)(param_1 + 8)) {
    *(int *)((int)this + 0x1c) = *(int *)(param_1 + 8);
  }
  return;
}


//// FUNCTION FUN_00c2ad20 @ 00c2ad20 ////

void FUN_00c2ad20(int param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 0;
  **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = *(undefined4 *)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00c2ad50 @ 00c2ad50 ////

int __thiscall FUN_00c2ad50(void *this,int param_1,int param_2)

{
  int iVar1;
  
  FUN_00c2ad20(param_1);
  FUN_00c2ad20(param_2);
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x18) = param_1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_2 + 8) + 0x20;
  *(undefined1 *)(param_1 + 0xe) = 0x4e;
  FUN_00c2acc0(this,param_1);
  return param_1;
}


//// FUNCTION FUN_00c2ada0 @ 00c2ada0 ////

void __thiscall FUN_00c2ada0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_1 >> 9;
  iVar2 = 0;
  uVar5 = 0x7fffffff;
  if (uVar3 < 0xff) {
    if (0xff < uVar3) {
      return;
    }
  }
  else {
    uVar3 = 0xff;
  }
  piVar4 = (int *)((int)this + uVar3 * 4 + 0x3c);
  do {
    if (iVar2 != 0) {
      return;
    }
    uVar6 = uVar5;
    for (iVar1 = *piVar4;
        (uVar5 = uVar6, iVar1 != 0 &&
        (((uVar5 = *(uint *)(iVar1 + 8), (int)uVar5 < (int)param_1 || ((int)uVar6 <= (int)uVar5)) ||
         (iVar2 = iVar1, uVar6 = uVar5, uVar5 != param_1)))); iVar1 = *(int *)(iVar1 + 0x14)) {
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 0x100);
  return;
}


//// FUNCTION FUN_00c2ae20 @ 00c2ae20 ////

int __fastcall FUN_00c2ae20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x1c) >> 9;
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  iVar1 = *(int *)(param_1 + 0x3c + uVar2 * 4);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(iVar1 + 8) == *(uint *)(param_1 + 0x1c)) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}


//// FUNCTION FUN_00c2ae50 @ 00c2ae50 ////

void __fastcall FUN_00c2ae50(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 0x1c) >> 9;
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  piVar3 = (int *)(param_1 + 0x3c + uVar2 * 4);
  do {
    if (*piVar3 != 0) {
      iVar4 = 0;
      for (iVar1 = *(int *)(param_1 + 0x3c + uVar2 * 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14))
      {
        if (iVar4 < *(int *)(iVar1 + 8)) {
          iVar4 = *(int *)(iVar1 + 8);
        }
      }
      *(int *)(param_1 + 0x1c) = iVar4;
      return;
    }
    uVar2 = uVar2 - 1;
    piVar3 = piVar3 + -1;
  } while (-1 < (int)uVar2);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00c2aef0 @ 00c2aef0 ////

undefined4 __thiscall FUN_00c2aef0(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)*(short *)(param_1 + 0xc) + *(int *)(param_1 + 8);
  if (param_2 <= iVar4) {
    return 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  puVar1 = (undefined4 *)(param_1 + 0x20);
  while ((puVar2 != (undefined4 *)0x0 &&
         ((*(char *)((int)puVar2 + 0xe) == 'N' ||
          ((*(char *)((int)puVar2 + 0xf) == '\0' &&
           (iVar3 = (**(code **)(*(int *)this + 4))(*puVar2,puVar2[1]), iVar3 != 0))))))) {
    puVar1 = puVar2 + 8;
    if (param_2 <= param_1 + 0x20 + (iVar4 - (int)puVar1)) {
      return 1;
    }
    puVar2 = (undefined4 *)puVar2[6];
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  while ((puVar2 != (undefined4 *)0x0 &&
         ((*(char *)((int)puVar2 + 0xe) == 'N' ||
          ((*(char *)((int)puVar2 + 0xf) == '\0' &&
           (iVar4 = (**(code **)(*(int *)this + 4))(*puVar2,puVar2[1]), iVar4 != 0))))))) {
    if (param_2 <= (((int)*(short *)(puVar2 + 3) + puVar2[2]) - (int)puVar1) + 0x20 + (int)puVar2) {
      return 1;
    }
    puVar2 = (undefined4 *)puVar2[7];
  }
  return 0;
}


//// FUNCTION FUN_00c2afd0 @ 00c2afd0 ////

void __fastcall FUN_00c2afd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


//// FUNCTION FUN_00c2b010 @ 00c2b010 ////

void __thiscall FUN_00c2b010(void *this,int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_00c2ac30((int)this);
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_2;
  pvVar1 = operator_new(param_1 + 0x10);
  *(void **)((int)this + 8) = pvVar1;
  puVar2 = (undefined4 *)((int)pvVar1 + 0xfU & 0xfffffff0);
  *(undefined4 **)((int)this + 4) = puVar2;
  iVar3 = FUN_00c2ac70(puVar2,*(int *)((int)this + 0xc),0,0);
  FUN_00c2acc0(this,iVar3);
  return;
}


//// FUNCTION FUN_00c2b060 @ 00c2b060 ////

void __thiscall FUN_00c2b060(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) - param_2;
  if (0x20 < iVar1) {
    iVar1 = FUN_00c2ac70((undefined4 *)(param_1 + 0x20 + param_2),iVar1,param_1,
                         *(int *)(param_1 + 0x1c));
    FUN_00c2acc0(this,iVar1);
    *(int *)(param_1 + 8) = param_2;
    return;
  }
  *(int *)(param_1 + 8) = param_2;
  *(short *)(param_1 + 0xc) = (short)iVar1;
  return;
}


//// FUNCTION FUN_00c2b0b0 @ 00c2b0b0 ////

int __thiscall FUN_00c2b0b0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == 'N')) {
    FUN_00c2ad50(this,param_1,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == 'N')) {
    iVar1 = FUN_00c2ad50(this,iVar1,param_1);
    return iVar1;
  }
  return param_1;
}


//// FUNCTION FUN_00c2b150 @ 00c2b150 ////

int __thiscall FUN_00c2b150(void *this,int param_1)

{
  return *(int *)(*(int *)((int)this + 0x440) + param_1 * 4) + 0x20;
}


//// FUNCTION FUN_00c2b190 @ 00c2b190 ////

void __thiscall FUN_00c2b190(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x440) + param_1 * 4);
  if (*(char *)(iVar1 + 0xf) == '\0') {
    *(undefined1 *)(iVar1 + 0xf) = 1;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  }
  return;
}


//// FUNCTION FUN_00c2b1b0 @ 00c2b1b0 ////

void __thiscall FUN_00c2b1b0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x440) + param_1 * 4);
  if (*(char *)(iVar1 + 0xf) != '\0') {
    *(undefined1 *)(iVar1 + 0xf) = 0;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return;
}


//// FUNCTION FUN_00c2b1d0 @ 00c2b1d0 ////

void __fastcall FUN_00c2b1d0(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_c;
  undefined4 *local_8;
  
  if ((int)param_1[6] < 1) {
    iVar7 = 0;
    local_8 = (undefined4 *)0x0;
    local_c = 0;
    puVar2 = (undefined4 *)param_1[1];
    puVar6 = local_8;
    while (puVar5 = puVar2, puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar5[7];
      if (puVar5[4] == 0) {
        iVar3 = puVar5[2];
        uVar1 = *(undefined1 *)((int)puVar5 + 0xf);
        puVar8 = (undefined4 *)(param_1[1] + iVar7);
        if ((puVar5 != puVar8) || (local_8 = puVar6, *(short *)(puVar5 + 3) != 0)) {
          iVar7 = puVar5[1];
          uVar4 = *puVar5;
          *(undefined4 *)(param_1[0x110] + iVar7 * 4) = 0;
          (**(code **)*param_1)(uVar4,iVar7,puVar5 + 8,puVar8 + 8,iVar3);
          *(undefined4 **)(param_1[0x110] + iVar7 * 4) = puVar8;
          *(undefined1 *)((int)puVar8 + 0xf) = uVar1;
          *puVar8 = uVar4;
          puVar8[1] = iVar7;
          puVar8[2] = iVar3;
          *(undefined2 *)(puVar8 + 3) = 0;
          *(undefined1 *)((int)puVar8 + 0xe) = 0x54;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = puVar6;
          puVar8[7] = 0;
          iVar7 = local_c;
          local_8 = puVar8;
          if (puVar6 != (undefined4 *)0x0) {
            puVar6[7] = puVar8;
          }
        }
        iVar7 = iVar7 + 0x20 + iVar3;
        puVar6 = local_8;
        local_c = iVar7;
      }
    }
    param_1[4] = iVar7;
    FUN_00c2afd0((int)param_1);
    if (0x20 < param_1[3] - iVar7) {
      iVar7 = FUN_00c2ac70((undefined4 *)(param_1[1] + iVar7),param_1[3] - iVar7,(int)puVar6,0);
      FUN_00c2acc0(param_1,iVar7);
    }
  }
  return;
}


//// FUNCTION FUN_00c2b350 @ 00c2b350 ////

void __thiscall FUN_00c2b350(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  (*(code *)**(undefined4 **)this)(*param_1,param_1[1],param_1 + 8,param_2 + 8,iVar1);
  FUN_00c2ad20((int)param_2);
  FUN_00c2b060(this,(int)param_2,iVar1);
  *param_2 = *param_1;
  *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
  param_2[1] = param_1[1];
  *(undefined1 *)((int)param_2 + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
  *(undefined4 **)(*(int *)((int)this + 0x440) + param_1[1] * 4) = param_2;
  *(int *)((int)this + 0x10) =
       *(int *)((int)this + 0x10) + ((int)*(short *)(param_2 + 3) - (int)*(short *)(param_1 + 3));
  *(undefined1 *)((int)param_1 + 0xe) = 0x4e;
  FUN_00c2acc0(this,(int)param_1);
  return;
}


//// FUNCTION FUN_00c2b3e0 @ 00c2b3e0 ////

void __thiscall FUN_00c2b3e0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x440) + param_1 * 4);
  *puVar1 = 0;
  *puVar1 = *(undefined4 *)((int)this + 0x44c);
  *(int *)((int)this + 0x44c) = param_1;
  return;
}


//// FUNCTION FUN_00c2b410 @ 00c2b410 ////

void __fastcall FUN_00c2b410(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (param_1[0x110] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1[0x111] - param_1[0x110] >> 2;
    }
    if (iVar2 <= iVar3) break;
    puVar1 = *(undefined4 **)(param_1[0x110] + iVar3 * 4);
    if ((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 0xe) == 'T')) {
      (**(code **)(*param_1 + 8))(*puVar1);
    }
    iVar3 = iVar3 + 1;
  }
  return;
}


//// FUNCTION FUN_00c2b460 @ 00c2b460 ////

void __thiscall FUN_00c2b460(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x440) + param_1 * 4);
  *(undefined1 *)(iVar1 + 0xe) = 0x4e;
  FUN_00c2acc0(this,iVar1);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  *(int *)((int)this + 0x10) =
       *(int *)((int)this + 0x10) + ((-0x20 - *(short *)(iVar1 + 0xc)) - *(int *)(iVar1 + 8));
  FUN_00c2b0b0(this,iVar1);
  FUN_00c2b3e0(this,param_1);
  return;
}


