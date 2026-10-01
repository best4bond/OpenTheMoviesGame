//// FUNCTION __Getcvt @ 00accdf6 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Getcvt
   
   Library: Visual Studio 2003 Release */

_Cvtvec * __cdecl __Getcvt(_Cvtvec *__return_storage_ptr__)

{
  _Cvtvec *p_Var1;
  LONG *pLVar2;
  int iVar3;
  uint *puVar4;
  
  pLVar2 = (LONG *)FUN_00ad7110();
  InterlockedIncrement(pLVar2);
  iVar3 = FUN_00ad710a();
  if (iVar3 != 0) {
    pLVar2 = (LONG *)FUN_00ad7110();
    InterlockedDecrement(pLVar2);
    __lock(0xc);
  }
  puVar4 = ____lc_handle_func();
  p_Var1 = (_Cvtvec *)puVar4[2];
  ____lc_codepage_func();
  FUN_00acce64();
  return p_Var1;
}


//// FUNCTION FUN_00acce64 @ 00acce64 ////

void FUN_00acce64(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_00ad7110();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_00ad700c(0xc);
  }
  return;
}


//// FUNCTION __Wcrtomb @ 00accfef ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __Wcrtomb
   
   Library: Visual Studio 2003 Release */

int __cdecl __Wcrtomb(char *param_1,wchar_t param_2,mbstate_t *param_3,_Cvtvec *param_4)

{
  LONG *pLVar1;
  int iVar2;
  
  pLVar1 = (LONG *)FUN_00ad7110();
  InterlockedIncrement(pLVar1);
  iVar2 = FUN_00ad710a();
  if (iVar2 != 0) {
    pLVar1 = (LONG *)FUN_00ad7110();
    InterlockedDecrement(pLVar1);
    __lock(0xc);
  }
  iVar2 = ___Wcrtomb_lk(param_1,param_2,0,&param_4->_Page);
  FUN_00acd05d();
  return iVar2;
}


//// FUNCTION FUN_00acd05d @ 00acd05d ////

void FUN_00acd05d(void)

{
  LONG *lpAddend;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    lpAddend = (LONG *)FUN_00ad7110();
    InterlockedDecrement(lpAddend);
  }
  else {
    FUN_00ad700c(0xc);
  }
  return;
}


//// FUNCTION _wctob @ 00acd097 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _wctob
   
   Library: Visual Studio 2003 Release */

int __cdecl _wctob(wint_t _WCh)

{
  int iVar1;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if ((_WCh != 0xffff) &&
     (iVar1 = __Wcrtomb(local_10,_WCh,(mbstate_t *)0x0,(_Cvtvec *)0x0), iVar1 == 1)) {
    return (int)local_10[0];
  }
  return -1;
}


//// FUNCTION __Stod @ 00acd0d8 ////

/* Library Function - Single Match
    __Stod
   
   Library: Visual Studio 2003 Release */

double __cdecl __Stod(char *param_1,char **param_2,long param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  
  dVar4 = _strtod(param_1,param_2);
  bVar3 = param_3 < 0;
  lVar1 = param_3;
  if (0 < param_3) {
    lVar1 = 0;
    do {
      param_3 = param_3 + -1;
      dVar4 = dVar4 * 10.0;
    } while (param_3 != 0);
    bVar3 = false;
  }
  if (bVar3) {
    iVar2 = -lVar1;
    do {
      iVar2 = iVar2 + -1;
      dVar4 = dVar4 * 0.1;
    } while (iVar2 != 0);
  }
  return dVar4;
}


//// FUNCTION FUN_00acd10c @ 00acd10c ////

float10 __cdecl FUN_00acd10c(char *param_1,char **param_2,long param_3)

{
  double dVar1;
  
  dVar1 = __Stod(param_1,param_2,param_3);
  return (float10)dVar1;
}


//// FUNCTION FUN_00acd121 @ 00acd121 ////

float10 __cdecl FUN_00acd121(char *param_1,char **param_2,long param_3)

{
  double dVar1;
  
  dVar1 = __Stod(param_1,param_2,param_3);
  return (float10)dVar1;
}


//// FUNCTION FUN_00acd14f @ 00acd14f ////

void __fastcall FUN_00acd14f(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7dd1c;
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION FUN_00acd15a @ 00acd15a ////

undefined4 * __thiscall FUN_00acd15a(void *this,byte param_1)

{
  FUN_00acd14f(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00acd18e @ 00acd18e ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acd18e(void)

{
  undefined **local_14 [3];
  char *local_8;
  
  if ((_DAT_010cbb68 & 1) == 0) {
    _DAT_010cbb68 = _DAT_010cbb68 | 1;
    local_8 = "bad allocation";
    exception::exception((exception *)&DAT_010cbb5c,&local_8);
    _DAT_010cbb5c = &PTR_FUN_00d7dd1c;
    _atexit(FUN_00d153be);
  }
  exception::exception((exception *)local_14,(exception *)&DAT_010cbb5c);
  local_14[0] = &PTR_FUN_00d7dd1c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e3edd4);
}


//// FUNCTION FUN_00acd226 @ 00acd226 ////

void __cdecl FUN_00acd226(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION FUN_00acd231 @ 00acd231 ////

void __cdecl FUN_00acd231(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION FUN_00acd23c @ 00acd23c ////

void __cdecl FUN_00acd23c(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION FUN_00acd247 @ 00acd247 ////

void __cdecl FUN_00acd247(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  return;
}


//// FUNCTION __Atexit @ 00acd252 ////

/* Library Function - Single Match
    __Atexit
   
   Library: Visual Studio 2003 Release */

void __cdecl __Atexit(_func_9331 *param_1)

{
  if (DAT_00e99cb0 == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  DAT_00e99cb0 = DAT_00e99cb0 + -1;
  *(_func_9331 **)(DAT_00e99cb0 * 4 + 0x10cbb8c) = param_1;
  return;
}


//// FUNCTION FUN_00acd288 @ 00acd288 ////

void FUN_00acd288(void)

{
  int iVar1;
  
  while (DAT_00e99cb0 < 10) {
    iVar1 = DAT_00e99cb0 * 4;
    DAT_00e99cb0 = DAT_00e99cb0 + 1;
    (**(code **)(iVar1 + 0x10cbb8c))();
  }
  return;
}


//// FUNCTION _strncpy @ 00acd2a0 ////

/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x00acd2ec;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_00acd333;
        goto LAB_00acd3a9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x00acd3a5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00acd3a9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_00acd333;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00acd3a5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00acd3a5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00acd3a5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x00acd2ec:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_00acd333:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


//// FUNCTION FUN_00acd3c4 @ 00acd3c4 ////

void FUN_00acd3c4(void)

{
  return;
}


//// FUNCTION FUN_00acd3c5 @ 00acd3c5 ////

void FUN_00acd3c5(void)

{
  PTR_FUN_00e9a604 = __cfltcvt;
  PTR_FUN_00e9a608 = &LAB_00ad8948;
  PTR_FUN_00e9a60c = __fassign;
  PTR_FUN_00e9a610 = __forcdecpt;
  PTR_FUN_00e9a614 = &LAB_00ad8993;
  PTR_FUN_00e9a618 = __cfltcvt;
  return;
}


//// FUNCTION __fpmath @ 00acd40d ////

/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2003 Release */

void __cdecl __fpmath(int param_1)

{
  FUN_00acd3c5();
  DAT_010cbbbc = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


//// FUNCTION FUN_00acd42c @ 00acd42c ////

ulonglong FUN_00acd42c(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}


//// FUNCTION _free @ 00acd4a1 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2003 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_010dadec == 3) {
      __lock(4);
      puVar1 = (uint *)___sbh_find_block((int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_00acd4f4();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    HeapFree(hHeap_010dade8,0,_Memory);
  }
  return;
}


//// FUNCTION FUN_00acd4f4 @ 00acd4f4 ////

void FUN_00acd4f4(void)

{
  FUN_00ad700c(4);
  return;
}


//// FUNCTION __heap_alloc @ 00acd512 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __heap_alloc(size_t _Size)

{
  int *piVar1;
  LPVOID pvVar2;
  
  if ((DAT_010dadec == 3) && (_Size <= DAT_010dadd8)) {
    __lock(4);
    piVar1 = ___sbh_alloc_block((uint *)_Size);
    FUN_00acd584();
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (_Size == 0) {
    _Size = 1;
  }
  if (DAT_010dadec != 1) {
    _Size = _Size + 0xf & 0xfffffff0;
  }
  pvVar2 = HeapAlloc(hHeap_010dade8,0,_Size);
  return pvVar2;
}


//// FUNCTION FUN_00acd584 @ 00acd584 ////

void FUN_00acd584(void)

{
  FUN_00ad700c(4);
  return;
}


//// FUNCTION __nh_malloc @ 00acd58d ////

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = __heap_alloc(_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


//// FUNCTION _malloc @ 00acd5b9 ////

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_010cbdbc);
  return pvVar1;
}


//// FUNCTION _JumpToContinuation @ 00acd5d0 ////

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00acd5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


//// FUNCTION _CallMemberFunction0 @ 00acd600 ////

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Library: Visual Studio 2003 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00acd605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}


//// FUNCTION FID_conflict:_CallMemberFunction1 @ 00acd607 ////

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Library: Visual Studio 2003 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00acd60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


//// FUNCTION FID_conflict:_CallMemberFunction1 @ 00acd60e ////

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Library: Visual Studio 2003 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00acd613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


//// FUNCTION _UnwindNestedFrames @ 00acd615 ////

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2003 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0xacd63e,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


//// FUNCTION ___CxxFrameHandler @ 00acd667 ////

/* Library Function - Single Match
    ___CxxFrameHandler
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl
___CxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                  void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


//// FUNCTION _CallSETranslator @ 00acd6f2 ////

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  EHExceptionRecord **ppEVar3;
  int local_38;
  EHExceptionRecord *local_34;
  void *local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc4;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0xacd78d;
    local_38 = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_00e9a098;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_34 = param_1;
    local_30 = param_3;
    ppEVar3 = &local_34;
    uVar2 = *(undefined4 *)param_1;
    p_Var1 = __getptd();
    (*(code *)p_Var1->_NLG_dwCode)(uVar2,ppEVar3);
    local_38 = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_38;
}


//// FUNCTION TranslatorGuardHandler @ 00acd7b9 ////

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Library: Visual Studio 2003 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  if (*(int *)(param_2 + 8) == DAT_00e9a098) {
    if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
      ___InternalCxxFrameHandler
                (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
                 *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
                 *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
      if (*(int *)(param_2 + 0x24) == 0) {
        _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
      }
      _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                        (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00acd863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _Var1 = (*local_8)();
      return _Var1;
    }
    *(undefined4 *)(param_2 + 0x24) = 1;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
  }
  return 1;
}


//// FUNCTION _GetRangeOfTrysToCheck @ 00acd86b ////

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2003 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  TryBlockMapEntry *pTVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1->nTryBlocks;
  pTVar2 = param_1->pTryBlockMap;
  uVar5 = uVar1;
  uVar4 = uVar1;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar1 == 0xffffffff) {
      _inconsistency();
    }
    uVar1 = uVar1 - 1;
    if (((pTVar2[uVar1].tryHigh < param_3) && (param_3 <= pTVar2[uVar1].catchHigh)) ||
       (uVar5 = uVar3, uVar1 == -1)) {
      param_2 = param_2 + -1;
      uVar5 = uVar1;
      uVar4 = uVar3;
    }
  }
  uVar1 = uVar1 + 1;
  *param_4 = uVar1;
  *param_5 = uVar4;
  if ((param_1->nTryBlocks < uVar4) || (uVar4 < uVar1)) {
    _inconsistency();
  }
  return pTVar2 + uVar1;
}


//// FUNCTION _CreateFrameInfo @ 00acd8e5 ////

/* Library Function - Single Match
    struct FrameInfo * __cdecl _CreateFrameInfo(struct FrameInfo *,void *)
   
   Library: Visual Studio 2003 Release */

FrameInfo * __cdecl _CreateFrameInfo(FrameInfo *param_1,void *param_2)

{
  _ptiddata p_Var1;
  
  *(void **)param_1 = param_2;
  p_Var1 = __getptd();
  *(void **)(param_1 + 4) = p_Var1->_curexception;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  return param_1;
}


//// FUNCTION IsExceptionObjectToBeDestroyed @ 00acd90d ////

/* Library Function - Single Match
    int __cdecl IsExceptionObjectToBeDestroyed(void *)
   
   Library: Visual Studio 2003 Release */

int __cdecl IsExceptionObjectToBeDestroyed(void *param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_curexception;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if ((void *)*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}


//// FUNCTION _FindAndUnlinkFrame @ 00acd92e ////

/* Library Function - Single Match
    void __cdecl _FindAndUnlinkFrame(struct FrameInfo *)
   
   Library: Visual Studio 2003 Release */

void __cdecl _FindAndUnlinkFrame(FrameInfo *param_1)

{
  FrameInfo *pFVar1;
  _ptiddata p_Var2;
  FrameInfo *pFVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_curexception) {
    p_Var2 = __getptd();
    p_Var2->_curexception = *(void **)(param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pFVar1 = p_Var2->_curexception;
  do {
    pFVar3 = pFVar1;
    if (*(int *)(pFVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pFVar1 = *(FrameInfo **)(pFVar3 + 4);
  } while (param_1 != *(FrameInfo **)(pFVar3 + 4));
  *(undefined4 *)(pFVar3 + 4) = *(undefined4 *)(param_1 + 4);
  return;
}


//// FUNCTION _CallCatchBlock2 @ 00acd97a ////

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Library: Visual Studio 2003 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_00e9a098;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_00acd6b7;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}


//// FUNCTION __global_unwind2 @ 00acd9d4 ////

/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0xacd9ec,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


//// FUNCTION __local_unwind2 @ 00acda16 ////

/* Library Function - Single Match
    __local_unwind2
   
   Library: Visual Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_00acd9f4;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_00acdaaa();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION __abnormal_termination @ 00acda7e ////

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio 2003 Release */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_00acd9f4) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}


//// FUNCTION __NLG_Notify1 @ 00acdaa1 ////

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_00e99d3c = param_1;
  DAT_00e99d38 = in_EAX;
  DAT_00e99d40 = unaff_EBP;
  return;
}


//// FUNCTION FUN_00acdaaa @ 00acdaaa ////

void FUN_00acdaaa(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00e99d3c = *(undefined4 *)(unaff_EBP + 8);
  DAT_00e99d38 = in_EAX;
  DAT_00e99d40 = unaff_EBP;
  return;
}


//// FUNCTION FUN_00acdae6 @ 00acdae6 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __fastcall FUN_00acdae6(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  __lock(0xe);
  if ((void *)param_1[1] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  FUN_00acdb23();
  return;
}


//// FUNCTION FUN_00acdb23 @ 00acdb23 ////

void FUN_00acdb23(void)

{
  FUN_00ad700c(0xe);
  return;
}


//// FUNCTION FUN_00acdb2c @ 00acdb2c ////

undefined4 * __thiscall FUN_00acdb2c(void *this,byte param_1)

{
  FUN_00acdae6(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00acdb9e @ 00acdb9e ////

int __fastcall FUN_00acdb9e(int param_1)

{
  return param_1 + 8;
}


//// FUNCTION __ArrayUnwind @ 00acdbc4 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2003 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(unaff_EDI);
  }
  return;
}


//// FUNCTION `eh_vector_destructor_iterator' @ 00acdc22 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 2003 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(unaff_EDI);
  }
  FUN_00acdc6a();
  return;
}


//// FUNCTION FUN_00acdc6a @ 00acdc6a ////

void FUN_00acdc6a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


//// FUNCTION `eh_vector_constructor_iterator' @ 00acdc82 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2003 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(unaff_EDI);
  }
  FUN_00acdccc();
  return;
}


//// FUNCTION FUN_00acdccc @ 00acdccc ////

void FUN_00acdccc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


//// FUNCTION _memmove @ 00acdcf0 ////

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_00acdeab_caseD_2;
        case 3:
          goto switchD_00acdeab_caseD_3;
        }
        goto switchD_00acdeab_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_00acdeab_caseD_0;
      case 1:
        goto switchD_00acdeab_caseD_1;
      case 2:
        goto switchD_00acdeab_caseD_2;
      case 3:
        goto switchD_00acdeab_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00acdeab_caseD_2;
            case 3:
              goto switchD_00acdeab_caseD_3;
            }
            goto switchD_00acdeab_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00acdeab_caseD_2;
            case 3:
              goto switchD_00acdeab_caseD_3;
            }
            goto switchD_00acdeab_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00acdeab_caseD_2;
            case 3:
              goto switchD_00acdeab_caseD_3;
            }
            goto switchD_00acdeab_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_00acdeab_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_00acdeab_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_00acdeab_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_00acdeab_caseD_0:
    return _Dst;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_00acdd25_caseD_2;
      case 3:
        goto switchD_00acdd25_caseD_3;
      }
      goto switchD_00acdd25_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_00acdd25_caseD_0;
    case 1:
      goto switchD_00acdd25_caseD_1;
    case 2:
      goto switchD_00acdd25_caseD_2;
    case 3:
      goto switchD_00acdd25_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00acdd25_caseD_2;
          case 3:
            goto switchD_00acdd25_caseD_3;
          }
          goto switchD_00acdd25_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00acdd25_caseD_2;
          case 3:
            goto switchD_00acdd25_caseD_3;
          }
          goto switchD_00acdd25_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00acdd25_caseD_2;
          case 3:
            goto switchD_00acdd25_caseD_3;
          }
          goto switchD_00acdd25_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 6:
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 5:
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 4:
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 3:
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 2:
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 1:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_00acdd25_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_00acdd25_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00acdd25_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_00acdd25_caseD_0:
  return _Dst;
}


//// FUNCTION FUN_00ace02d @ 00ace02d ////

int __cdecl FUN_00ace02d(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}


//// FUNCTION _wcsncpy @ 00ace043 ////

/* Library Function - Single Match
    _wcsncpy
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcsncpy(wchar_t *_Dest,wchar_t *_Source,size_t _Count)

{
  wchar_t wVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
  pwVar4 = _Dest;
  if (_Count != 0) {
    do {
      wVar1 = *_Source;
      *pwVar4 = wVar1;
      pwVar4 = pwVar4 + 1;
      _Source = _Source + 1;
      if (wVar1 == L'\0') break;
      _Count = _Count - 1;
    } while (_Count != 0);
    if ((_Count != 0) && (uVar2 = _Count - 1, uVar2 != 0)) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        pwVar4[0] = L'\0';
        pwVar4[1] = L'\0';
        pwVar4 = pwVar4 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *pwVar4 = L'\0';
        pwVar4 = pwVar4 + 1;
      }
    }
  }
  return _Dest;
}


//// FUNCTION FUN_00ace080 @ 00ace080 ////

uint * __cdecl FUN_00ace080(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}


//// FUNCTION __CxxThrowException@8 @ 00ace106 ////

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2003 Release */

void __CxxThrowException_8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pDVar2 = &DAT_00d7dd9c;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}


//// FUNCTION exception @ 00ace140 ////

/* Library Function - Single Match
    public: __thiscall exception::exception(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall exception::exception(exception *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_00d7ddc0;
  return;
}


//// FUNCTION exception @ 00ace151 ////

/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  *(undefined ***)this = &PTR_FUN_00d7ddc0;
  sVar1 = _strlen(*param_1);
  puVar2 = _malloc(sVar1 + 1);
  *(uint **)(this + 4) = puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_00ada2e0(puVar2,(uint *)*param_1);
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}


//// FUNCTION exception @ 00ace18e ////

/* Library Function - Single Match
    public: __thiscall exception::exception(class exception const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  uint *puVar3;
  
  *(undefined ***)this = &PTR_FUN_00d7ddc0;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(this + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_1 + 4));
    puVar3 = _malloc(sVar2 + 1);
    *(uint **)(this + 4) = puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_00ada2e0(puVar3,*(uint **)(param_1 + 4));
    }
  }
  return this;
}


//// FUNCTION FUN_00ace1d8 @ 00ace1d8 ////

void __fastcall FUN_00ace1d8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7ddc0;
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00ace1fb @ 00ace1fb ////

exception * __fastcall FUN_00ace1fb(exception *param_1)

{
  exception::exception(param_1,(char **)&stack0x00000004);
  *(undefined ***)param_1 = &PTR_FUN_00d7dde0;
  return param_1;
}


//// FUNCTION FUN_00ace22c @ 00ace22c ////

void __fastcall FUN_00ace22c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7dde0;
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION bad_typeid @ 00ace237 ////

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall bad_typeid::bad_typeid(char const *)
    public: __thiscall std::bad_typeid::bad_typeid(char const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

exception * __fastcall bad_typeid(exception *param_1)

{
  exception::exception(param_1,(char **)&stack0x00000004);
  *(undefined ***)param_1 = &PTR_FUN_00d7ddec;
  return param_1;
}


//// FUNCTION FUN_00ace268 @ 00ace268 ////

void __fastcall FUN_00ace268(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7ddec;
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION non_rtti_object @ 00ace273 ////

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall __non_rtti_object::__non_rtti_object(char const *)
    public: __thiscall std::__non_rtti_object::__non_rtti_object(char const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

exception * __fastcall non_rtti_object(exception *param_1)

{
  bad_typeid(param_1);
  *(undefined ***)param_1 = &PTR_FUN_00d7ddf8;
  return param_1;
}


//// FUNCTION FUN_00ace2a3 @ 00ace2a3 ////

void __fastcall FUN_00ace2a3(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7ddec;
  FUN_00ace1d8(param_1);
  return;
}


//// FUNCTION FUN_00ace2ae @ 00ace2ae ////

undefined4 * __thiscall FUN_00ace2ae(void *this,byte param_1)

{
  FUN_00ace1d8(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ace2ca @ 00ace2ca ////

exception * __thiscall FUN_00ace2ca(void *this,exception *param_1)

{
  if (this != param_1) {
    FUN_00ace1d8(this);
    exception::exception(this,param_1);
  }
  return this;
}


//// FUNCTION FUN_00ace2e9 @ 00ace2e9 ////

undefined4 * __thiscall FUN_00ace2e9(void *this,byte param_1)

{
  FUN_00ace22c(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ace305 @ 00ace305 ////

undefined4 * __thiscall FUN_00ace305(void *this,byte param_1)

{
  FUN_00ace268(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ace321 @ 00ace321 ////

undefined4 * __thiscall FUN_00ace321(void *this,byte param_1)

{
  FUN_00ace2a3(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00ace33d @ 00ace33d ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 __fastcall FUN_00ace33d(int param_1)

{
  uint *_Str;
  undefined4 uVar1;
  size_t sVar2;
  char *pcVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    _Str = (uint *)___unDName((char *)0x0,(char *)(param_1 + 9),0,0xacd5b9,_free,0x2800);
    if (_Str != (uint *)0x0) {
      sVar2 = _strlen((char *)_Str);
      for (pcVar3 = (char *)((sVar2 - 1) + (int)_Str); *pcVar3 == ' '; pcVar3 = pcVar3 + -1) {
        *pcVar3 = '\0';
      }
      __lock(0xe);
      sVar2 = _strlen((char *)_Str);
      puVar4 = _malloc(sVar2 + 1);
      *(uint **)(param_1 + 4) = puVar4;
      if (puVar4 != (uint *)0x0) {
        FUN_00ada2e0(puVar4,_Str);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Str);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


//// FUNCTION FUN_00ace3df @ 00ace3df ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_00ace3df(int *param_1)

{
  int iVar1;
  WINBOOL WVar2;
  exception *peVar3;
  undefined *puVar4;
  exception local_38 [12];
  exception local_2c [12];
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7de78;
  uStack_c = 0xace3eb;
  if (param_1 == (int *)0x0) {
    bad_typeid(local_2c);
    puVar4 = &DAT_00e3ee48;
    peVar3 = local_2c;
  }
  else {
    local_8 = (undefined *)0x0;
    iVar1 = *(int *)(*param_1 + -4);
    local_20 = iVar1;
    WVar2 = IsBadReadPtr(*(void **)(iVar1 + 0xc),8);
    if (WVar2 == 0) {
      return *(undefined4 *)(iVar1 + 0xc);
    }
    non_rtti_object(local_38);
    puVar4 = &DAT_00e3ee38;
    peVar3 = local_38;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(peVar3,puVar4);
}


//// FUNCTION FUN_00ace47b @ 00ace47b ////

int __fastcall FUN_00ace47b(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 - *(int *)(*(int *)(*param_1 + -4) + 4);
  iVar1 = *(int *)(*(int *)(*param_1 + -4) + 8);
  if (iVar1 != 0) {
    iVar2 = iVar2 + *(int *)((int)param_1 - iVar1);
  }
  return iVar2;
}


//// FUNCTION FindSITargetTypeInstance @ 00ace491 ////

/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindSITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2003 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindSITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  _s_RTTIBaseClassDescriptor *p_Var1;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  uint local_8;
  
  local_8 = 0;
  piVar3 = *(int **)(*(int *)(unaff_EBX + 0x10) + 0xc);
  if (*(int *)(*(int *)(unaff_EBX + 0x10) + 8) != 0) {
    do {
      p_Var1 = (_s_RTTIBaseClassDescriptor *)*piVar3;
      if (((*(void **)p_Var1 == param_1) ||
          (iVar2 = _strcmp((char *)((int)*(void **)p_Var1 + 8),(char *)((int)param_1 + 8)),
          iVar2 == 0)) && (((byte)p_Var1[0x14] & 1) == 0)) {
        return p_Var1;
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 1;
    } while (local_8 < *(uint *)(*(int *)(unaff_EBX + 0x10) + 8));
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}


//// FUNCTION PMDtoOffset @ 00ace4e6 ////

/* Library Function - Single Match
    int __cdecl PMDtoOffset(void *,struct PMD const &)
   
   Library: Visual Studio 2003 Release */

int __cdecl PMDtoOffset(void *param_1,PMD *param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = in_EAX[1];
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar1 + *(int *)(*(int *)(iVar1 + (int)param_1) + in_EAX[2]);
  }
  return *in_EAX + iVar2;
}


//// FUNCTION FindMITargetTypeInstance @ 00ace562 ////

/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindMITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2003 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindMITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  _s_RTTIBaseClassDescriptor *p_Var1;
  int iVar2;
  TypeDescriptor *pTVar3;
  int unaff_EBX;
  int *piVar4;
  PMD *unaff_EDI;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_8 = 0;
  piVar4 = *(int **)(*(int *)(unaff_EBX + 0x10) + 0xc);
  if (*(int *)(*(int *)(unaff_EBX + 0x10) + 8) != 0) {
    do {
      p_Var1 = (_s_RTTIBaseClassDescriptor *)*piVar4;
      if (((*(int *)p_Var1 == param_4) ||
          (iVar2 = _strcmp((char *)(*(int *)p_Var1 + 8),(char *)(param_4 + 8)), iVar2 == 0)) &&
         (local_10 = 0, local_c = piVar4, *(int *)(p_Var1 + 4) != 0)) {
        do {
          local_c = local_c + 1;
          if (((*(_s_RTTICompleteObjectLocator **)*local_c == param_2) ||
              (iVar2 = _strcmp((char *)(*(_s_RTTICompleteObjectLocator **)*local_c + 8),
                               (char *)(param_2 + 8)), iVar2 == 0)) &&
             (pTVar3 = (TypeDescriptor *)PMDtoOffset(param_1,unaff_EDI), pTVar3 == param_3)) {
            return p_Var1;
          }
          local_10 = local_10 + 1;
        } while (local_10 < *(uint *)(p_Var1 + 4));
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(uint *)(*(int *)(unaff_EBX + 0x10) + 8));
  }
  local_8 = 0;
  piVar4 = *(int **)(*(int *)(unaff_EBX + 0x10) + 0xc);
  if (*(int *)(*(int *)(unaff_EBX + 0x10) + 8) != 0) {
    do {
      p_Var1 = (_s_RTTIBaseClassDescriptor *)*piVar4;
      if (((*(int *)p_Var1 == param_4) ||
          (iVar2 = _strcmp((char *)(*(int *)p_Var1 + 8),(char *)(param_4 + 8)), iVar2 == 0)) &&
         (((byte)p_Var1[0x14] & 3) == 0)) {
        return p_Var1;
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(uint *)(*(int *)(unaff_EBX + 0x10) + 8));
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}


//// FUNCTION FindVITargetTypeInstance @ 00ace65b ////

/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindVITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2003 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindVITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  _s_RTTIBaseClassDescriptor *p_Var1;
  int iVar2;
  int iVar3;
  PMD *unaff_EDI;
  int *piVar4;
  bool bVar5;
  PMD *pPVar6;
  uint local_14;
  int *local_10;
  _s_RTTIBaseClassDescriptor *local_c;
  uint local_8;
  
  piVar4 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  local_c = (_s_RTTIBaseClassDescriptor *)0x0;
  local_8 = 0;
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      p_Var1 = (_s_RTTIBaseClassDescriptor *)*piVar4;
      if (((*(TypeDescriptor **)p_Var1 == param_5) ||
          (iVar2 = _strcmp((char *)(*(TypeDescriptor **)p_Var1 + 1),(char *)(param_5 + 1)),
          iVar2 == 0)) && (local_14 = 0, local_10 = piVar4, *(int *)(p_Var1 + 4) != 0)) {
        do {
          local_10 = local_10 + 1;
          if (((*(TypeDescriptor **)*local_10 == param_3) ||
              (iVar2 = _strcmp((char *)(*(TypeDescriptor **)*local_10 + 1),(char *)(param_3 + 1)),
              iVar2 == 0)) &&
             ((iVar2 = PMDtoOffset(param_1,unaff_EDI), iVar2 == param_4 &&
              (bVar5 = local_c != (_s_RTTIBaseClassDescriptor *)0x0, local_c = p_Var1, bVar5)))) {
            pPVar6 = param_1;
            iVar2 = PMDtoOffset(param_1,unaff_EDI);
            iVar3 = PMDtoOffset(param_1,pPVar6);
            if (iVar3 != iVar2) {
              return (_s_RTTIBaseClassDescriptor *)0x0;
            }
          }
          local_14 = local_14 + 1;
        } while (local_14 < *(uint *)(p_Var1 + 4));
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(uint *)(*(int *)(param_2 + 0x10) + 8));
    if (local_c != (_s_RTTIBaseClassDescriptor *)0x0) {
      return local_c;
    }
  }
  piVar4 = *(int **)(*(int *)(param_2 + 0x10) + 0xc);
  local_8 = 0;
  if (*(int *)(*(int *)(param_2 + 0x10) + 8) != 0) {
    do {
      p_Var1 = (_s_RTTIBaseClassDescriptor *)*piVar4;
      if (((*(TypeDescriptor **)p_Var1 == param_5) ||
          (iVar2 = _strcmp((char *)(*(TypeDescriptor **)p_Var1 + 1),(char *)(param_5 + 1)),
          iVar2 == 0)) && (((byte)p_Var1[0x14] & 3) == 0)) {
        return p_Var1;
      }
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 1;
    } while (local_8 < *(uint *)(*(int *)(param_2 + 0x10) + 8));
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}


//// FUNCTION FUN_00ace790 @ 00ace790 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl
FUN_00ace790(int *param_1,int param_2,TypeDescriptor *param_3,TypeDescriptor *param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  int unaff_EBX;
  TypeDescriptor *unaff_ESI;
  TypeDescriptor *unaff_EDI;
  TypeDescriptor *in_stack_ffffffb8;
  exception local_3c [12];
  TypeDescriptor *local_30;
  _s_RTTICompleteObjectLocator *local_2c;
  void *local_28;
  undefined4 local_24;
  _s_RTTIBaseClassDescriptor *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0xace79c;
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    local_8 = 0;
    pvVar2 = (void *)FUN_00ace47b(param_1);
    local_2c = *(_s_RTTICompleteObjectLocator **)(*param_1 + -4);
    local_30 = (TypeDescriptor *)((int)param_1 + (-(int)pvVar2 - param_2));
    local_28 = pvVar2;
    if ((*(uint *)(*(int *)(local_2c + 0x10) + 4) & 1) == 0) {
      local_20 = FindSITargetTypeInstance
                           (param_4,(_s_RTTICompleteObjectLocator *)unaff_EDI,unaff_ESI,unaff_EBX,
                            in_stack_ffffffb8);
    }
    else if ((*(uint *)(*(int *)(local_2c + 0x10) + 4) & 2) == 0) {
      local_20 = FindMITargetTypeInstance
                           (pvVar2,(_s_RTTICompleteObjectLocator *)param_3,local_30,(int)param_4,
                            unaff_EDI);
    }
    else {
      local_20 = FindVITargetTypeInstance(pvVar2,local_2c,param_3,(int)local_30,param_4);
    }
    if (local_20 == (_s_RTTIBaseClassDescriptor *)0x0) {
      iVar1 = 0;
      local_24 = 0;
      if (param_5 != 0) {
        FUN_00ace1fb(local_3c);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_3c,&DAT_00e398b8);
      }
    }
    else {
      iVar1 = PMDtoOffset(pvVar2,(PMD *)unaff_EDI);
      iVar1 = iVar1 + (int)pvVar2;
    }
  }
  return iVar1;
}


//// FUNCTION __onexit_lk @ 00ace870 ////

/* Library Function - Single Match
    __onexit_lk
   
   Library: Visual Studio 2003 Release */

void __onexit_lk(void)

{
  size_t sVar1;
  int *piVar2;
  size_t sVar3;
  int unaff_EDI;
  
  sVar1 = __msize(DAT_010dbe2c);
  if (sVar1 < (uint)((int)DAT_010dbe28 + (4 - (int)DAT_010dbe2c))) {
    sVar3 = 0x800;
    if (sVar1 < 0x800) {
      sVar3 = sVar1;
    }
    piVar2 = FUN_00ad58c5(DAT_010dbe2c,(uint *)(sVar3 + sVar1));
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_00ad58c5(DAT_010dbe2c,(uint *)(sVar1 + 0x10));
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    DAT_010dbe28 = piVar2 + ((int)DAT_010dbe28 - (int)DAT_010dbe2c >> 2);
    DAT_010dbe2c = piVar2;
  }
  *DAT_010dbe28 = unaff_EDI;
  DAT_010dbe28 = DAT_010dbe28 + 1;
  return;
}


//// FUNCTION ___onexitinit @ 00ace8f0 ////

/* Library Function - Single Match
    ___onexitinit
   
   Library: Visual Studio 2003 Release */

undefined4 ___onexitinit(void)

{
  DAT_010dbe2c = _malloc(0x80);
  if (DAT_010dbe2c == (undefined4 *)0x0) {
    return 0x18;
  }
  *DAT_010dbe2c = 0;
  DAT_010dbe28 = DAT_010dbe2c;
  return 0;
}


//// FUNCTION __onexit @ 00ace918 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2003 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_00ad01c9();
  p_Var1 = (_onexit_t)__onexit_lk();
  FUN_00ace94a();
  return p_Var1;
}


//// FUNCTION FUN_00ace94a @ 00ace94a ////

void FUN_00ace94a(void)

{
  FUN_00ad01d2();
  return;
}


//// FUNCTION _atexit @ 00ace950 ////

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2003 Release */

int __cdecl _atexit(_func_56 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


//// FUNCTION FUN_00ace9b0 @ 00ace9b0 ////

void FUN_00ace9b0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_010dadc0 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00adf590();
    return;
  }
  FUN_00acea0d(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}


//// FUNCTION FUN_00acea0d @ 00acea0d ////
// DECOMPILE FAILED: 
Low-level Error: Overlapping input varnodes

//// FUNCTION FUN_00acebd2 @ 00acebd2 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00acebd2(void)

{
  float10 in_ST0;
  
  if (ROUND(in_ST0) == in_ST0) {
    return;
  }
  return;
}


//// FUNCTION _memchr @ 00acec00 ////

/* Library Function - Single Match
    _memchr
   
   Library: Visual Studio */

void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  
  if (_MaxCount == 0) {
    return (void *)0x0;
  }
  uVar6 = _Val & 0xff;
  while (((uint)_Buf & 3) != 0) {
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)_Val) goto LAB_00acec96;
    _MaxCount = _MaxCount - 1;
    if (_MaxCount == 0) {
      return (void *)0x0;
    }
  }
  uVar2 = _MaxCount - 4;
  if (3 < _MaxCount) {
    uVar6 = uVar6 * 0x1010101;
    puVar4 = _Buf;
    do {
      _Buf = puVar4 + 1;
      if (((*puVar4 ^ uVar6 ^ 0xffffffff ^ (*puVar4 ^ uVar6) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = *puVar4;
        cVar5 = (char)uVar6;
        if ((char)uVar1 == cVar5) {
          return puVar4;
        }
        if ((char)(uVar1 >> 8) == cVar5) {
          return (char *)((int)puVar4 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar5) {
          return (char *)((int)puVar4 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar5) goto LAB_00acec96;
      }
      bVar7 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar4 = _Buf;
    } while (bVar7);
  }
  iVar3 = uVar2 + 4;
  while( true ) {
    if (iVar3 == 0) {
      return (void *)0x0;
    }
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)uVar6) break;
    iVar3 = iVar3 + -1;
  }
LAB_00acec96:
  return (char *)((int)_Buf + -1);
}


//// FUNCTION FUN_00acecd0 @ 00acecd0 ////

uint * __cdecl FUN_00acecd0(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}


//// FUNCTION _wcscmp @ 00aced8e ////

/* Library Function - Single Match
    _wcscmp
   
   Library: Visual Studio 2003 Release */

int __cdecl _wcscmp(wchar_t *_Str1,wchar_t *_Str2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
    if ((iVar1 != 0) || (*_Str2 == L'\0')) break;
    _Str1 = _Str1 + 1;
    _Str2 = _Str2 + 1;
  }
  if (iVar1 < 0) {
    return -1;
  }
  if (0 < iVar1) {
    iVar1 = 1;
  }
  return iVar1;
}


//// FUNCTION _strrchr @ 00acedc0 ////

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2003 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}


//// FUNCTION _swprintf @ 00aceded ////

/* Library Function - Single Match
    _swprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl _swprintf(wchar_t *_String,size_t _Count,wchar_t *_Format,...)

{
  int iVar1;
  FILE local_24;
  
  local_24._base = (char *)_String;
  local_24._ptr = (char *)_String;
  local_24._flag = 0x42;
  local_24._cnt = 0x7fffffff;
  iVar1 = FUN_00ae0a31(&local_24,(short *)_Count,(wchar_t *)&_Format);
  local_24._cnt = local_24._cnt + -1;
  if (local_24._cnt < 0) {
    __flsbuf(0,&local_24);
  }
  else {
    *local_24._ptr = 0;
    local_24._ptr = (char *)((int)local_24._ptr + 1);
  }
  local_24._cnt = local_24._cnt + -1;
  if (local_24._cnt < 0) {
    __flsbuf(0,&local_24);
  }
  else {
    *local_24._ptr = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00acee5c @ 00acee5c ////

void __cdecl FUN_00acee5c(short *param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  local_24 = 0;
  local_20 = 0x7fffffff;
  local_18 = 0x42;
  FUN_00ae0a31(&local_24,param_1,(wchar_t *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_00acee8d @ 00acee8d ////

undefined4 __cdecl FUN_00acee8d(HANDLE param_1)

{
  WINBOOL WVar1;
  int *piVar2;
  
  WVar1 = FindClose(param_1);
  if (WVar1 == 0) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x16;
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION ___timet_from_ft @ 00aceead ////

/* Library Function - Single Match
    ___timet_from_ft
   
   Library: Visual Studio 2003 Release */

int __cdecl ___timet_from_ft(FILETIME *param_1)

{
  WINBOOL WVar1;
  int iVar2;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    WVar1 = FileTimeToLocalFileTime((FILETIME *)param_1,&local_c);
    if (WVar1 != 0) {
      WVar1 = FileTimeToSystemTime(&local_c,&local_1c);
      if (WVar1 != 0) {
        iVar2 = ___loctotime_t((uint)local_1c.wYear,(uint)local_1c.wMonth,(uint)local_1c.wDay,
                               (uint)local_1c.wHour,(uint)local_1c.wMinute,(uint)local_1c.wSecond,-1
                              );
        return iVar2;
      }
    }
  }
  return -1;
}


//// FUNCTION __findfirst @ 00acef11 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __findfirst
   
   Library: Visual Studio 2003 Release */

HANDLE __cdecl __findfirst(LPCSTR param_1,uint *param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int *piVar3;
  uint uVar4;
  _WIN32_FIND_DATAA local_148;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  pvVar1 = FindFirstFileA(param_1,&local_148);
  if (pvVar1 != (HANDLE)0xffffffff) {
    *param_2 = -(uint)(local_148.dwFileAttributes != 0x80) & local_148.dwFileAttributes;
    uVar4 = ___timet_from_ft((FILETIME *)&local_148.ftCreationTime);
    param_2[1] = uVar4;
    uVar4 = ___timet_from_ft((FILETIME *)&local_148.ftLastAccessTime);
    param_2[2] = uVar4;
    uVar4 = ___timet_from_ft((FILETIME *)&local_148.ftLastWriteTime);
    param_2[3] = uVar4;
    param_2[4] = local_148.nFileSizeLow;
    FUN_00ada2e0(param_2 + 5,(uint *)local_148.cFileName);
    return pvVar1;
  }
  DVar2 = GetLastError();
  if (DVar2 < 2) {
LAB_00acef57:
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 0x16;
  }
  else {
    if (3 < DVar2) {
      if (DVar2 == 8) {
        piVar3 = FUN_00ad4b6c();
        *piVar3 = 0xc;
        return (HANDLE)0xffffffff;
      }
      if (DVar2 != 0x12) goto LAB_00acef57;
    }
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 2;
  }
  return (HANDLE)0xffffffff;
}


//// FUNCTION __findnext @ 00acefee ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __findnext
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __findnext(HANDLE param_1,uint *param_2)

{
  WINBOOL WVar1;
  DWORD DVar2;
  int *piVar3;
  uint uVar4;
  _WIN32_FIND_DATAA local_148;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  WVar1 = FindNextFileA(param_1,&local_148);
  if (WVar1 != 0) {
    *param_2 = -(uint)(local_148.dwFileAttributes != 0x80) & local_148.dwFileAttributes;
    uVar4 = ___timet_from_ft((FILETIME *)&local_148.ftCreationTime);
    param_2[1] = uVar4;
    uVar4 = ___timet_from_ft((FILETIME *)&local_148.ftLastAccessTime);
    param_2[2] = uVar4;
    uVar4 = ___timet_from_ft((FILETIME *)&local_148.ftLastWriteTime);
    param_2[3] = uVar4;
    param_2[4] = local_148.nFileSizeLow;
    FUN_00ada2e0(param_2 + 5,(uint *)local_148.cFileName);
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 < 2) {
LAB_00acf030:
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 0x16;
  }
  else {
    if (3 < DVar2) {
      if (DVar2 == 8) {
        piVar3 = FUN_00ad4b6c();
        *piVar3 = 0xc;
        return 0xffffffff;
      }
      if (DVar2 != 0x12) goto LAB_00acf030;
    }
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 2;
  }
  return 0xffffffff;
}


//// FUNCTION __wfindfirst @ 00acf0c6 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __wfindfirst
   
   Library: Visual Studio 2003 Release */

HANDLE __cdecl __wfindfirst(LPCWSTR param_1,uint *param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int *piVar3;
  uint uVar4;
  _WIN32_FIND_DATAW local_258;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  pvVar1 = FindFirstFileW(param_1,&local_258);
  if (pvVar1 != (HANDLE)0xffffffff) {
    *param_2 = -(uint)(local_258.dwFileAttributes != 0x80) & local_258.dwFileAttributes;
    uVar4 = ___timet_from_ft((FILETIME *)&local_258.ftCreationTime);
    param_2[1] = uVar4;
    uVar4 = ___timet_from_ft((FILETIME *)&local_258.ftLastAccessTime);
    param_2[2] = uVar4;
    uVar4 = ___timet_from_ft((FILETIME *)&local_258.ftLastWriteTime);
    param_2[3] = uVar4;
    param_2[4] = local_258.nFileSizeLow;
    _wcscpy((wchar_t *)(param_2 + 5),local_258.cFileName);
    return pvVar1;
  }
  DVar2 = GetLastError();
  if (DVar2 < 2) {
LAB_00acf10c:
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 0x16;
  }
  else {
    if (3 < DVar2) {
      if (DVar2 == 8) {
        piVar3 = FUN_00ad4b6c();
        *piVar3 = 0xc;
        return (HANDLE)0xffffffff;
      }
      if (DVar2 != 0x12) goto LAB_00acf10c;
    }
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 2;
  }
  return (HANDLE)0xffffffff;
}


//// FUNCTION __wfindnext @ 00acf1a3 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __wfindnext
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __wfindnext(HANDLE param_1,uint *param_2)

{
  WINBOOL WVar1;
  DWORD DVar2;
  int *piVar3;
  uint uVar4;
  _WIN32_FIND_DATAW local_258;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  WVar1 = FindNextFileW(param_1,&local_258);
  if (WVar1 != 0) {
    *param_2 = -(uint)(local_258.dwFileAttributes != 0x80) & local_258.dwFileAttributes;
    uVar4 = ___timet_from_ft((FILETIME *)&local_258.ftCreationTime);
    param_2[1] = uVar4;
    uVar4 = ___timet_from_ft((FILETIME *)&local_258.ftLastAccessTime);
    param_2[2] = uVar4;
    uVar4 = ___timet_from_ft((FILETIME *)&local_258.ftLastWriteTime);
    param_2[3] = uVar4;
    param_2[4] = local_258.nFileSizeLow;
    _wcscpy((wchar_t *)(param_2 + 5),local_258.cFileName);
    return 0;
  }
  DVar2 = GetLastError();
  if (DVar2 < 2) {
LAB_00acf1e5:
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 0x16;
  }
  else {
    if (3 < DVar2) {
      if (DVar2 == 8) {
        piVar3 = FUN_00ad4b6c();
        *piVar3 = 0xc;
        return 0xffffffff;
      }
      if (DVar2 != 0x12) goto LAB_00acf1e5;
    }
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 2;
  }
  return 0xffffffff;
}


//// FUNCTION __wtol @ 00acf27b ////

/* Library Function - Single Match
    __wtol
   
   Library: Visual Studio 2003 Release */

long __cdecl __wtol(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  while( true ) {
    iVar3 = _iswctype(*_Str,8);
    if (iVar3 == 0) break;
    _Str = _Str + 1;
  }
  wVar1 = *_Str;
  pwVar5 = _Str + 1;
  if ((wVar1 == L'-') || (wVar2 = wVar1, wVar1 == L'+')) {
    wVar2 = *pwVar5;
    pwVar5 = _Str + 2;
  }
  iVar3 = 0;
  while( true ) {
    iVar4 = __wchartodigit(wVar2);
    if (iVar4 == -1) break;
    iVar3 = iVar4 + iVar3 * 10;
    wVar2 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  }
  if (wVar1 == L'-') {
    iVar3 = -iVar3;
  }
  return iVar3;
}


//// FUNCTION __wtoi64 @ 00acf2df ////

/* Library Function - Single Match
    __wtoi64
   
   Library: Visual Studio 2003 Release */

longlong __cdecl __wtoi64(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int local_c;
  
  while( true ) {
    iVar3 = _iswctype(*_Str,8);
    if (iVar3 == 0) break;
    _Str = _Str + 1;
  }
  wVar1 = *_Str;
  pwVar5 = _Str + 1;
  if ((wVar1 == L'-') || (wVar2 = wVar1, wVar1 == L'+')) {
    wVar2 = *pwVar5;
    pwVar5 = _Str + 2;
  }
  lVar6 = 0;
  while( true ) {
    local_c = (int)((ulonglong)lVar6 >> 0x20);
    uVar4 = (uint)lVar6;
    iVar3 = __wchartodigit(wVar2);
    if (iVar3 == -1) break;
    lVar6 = __allmul(uVar4,local_c,10,0);
    lVar6 = lVar6 + iVar3;
    wVar2 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  }
  if (wVar1 == L'-') {
    lVar6 = CONCAT44(-(local_c + (uint)(uVar4 != 0)),-uVar4);
  }
  return lVar6;
}


//// FUNCTION _sprintf @ 00acf36d ////

/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  FILE local_24;
  
  local_24._cnt = 0x7fffffff;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = FUN_00ae1640(&local_24,(byte *)_Format,(wchar_t *)&stack0x0000000c);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00acf3c5 @ 00acf3c5 ////

void __cdecl FUN_00acf3c5(byte *param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  local_24 = 0;
  local_20 = 0x7fffffff;
  local_18 = 0x42;
  FUN_00ae1640(&local_24,param_1,(wchar_t *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_00acf400 @ 00acf400 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00acf400(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if ((DAT_010dadc0 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      if (uVar1 < 0x3ff) {
        return (float10)0;
      }
      if (uVar1 < 0x433) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0xbff) {
        return (float10)(double)((-(ulonglong)(param_1 < -0.0) | (ulonglong)DAT_00d7df00) &
                                0xbff0000000000000);
      }
      if (uVar1 < 0xc33) {
        return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & 0x3ff0000000000000));
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ed);
    }
    return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
  }
  uVar2 = __ctrlfp();
  uVar1 = (uint)(CONCAT26(param_1._6_2_,param_1._0_6_) >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype((int)param_1._0_6_,uVar1);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp();
        return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
      }
      if (iVar3 == 3) {
        fVar4 = __handle_qnan1(0xb,(double)CONCAT44((int)(CONCAT26(param_1._6_2_,param_1._0_6_) >>
                                                         0x20),(int)param_1._0_6_));
        return fVar4;
      }
    }
    dVar5 = (double)CONCAT26(param_1._6_2_,param_1._0_6_) + 1.0;
    uVar7 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar1 = 8;
  }
  else {
    fVar4 = __frnd((double)CONCAT44(uVar1,(int)param_1._0_6_));
    dVar5 = (double)fVar4;
    if ((dVar5 == (double)CONCAT26(param_1._6_2_,param_1._0_6_)) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp();
      return (float10)dVar5;
    }
    uVar7 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar1 = 0x10;
  }
  fVar4 = __except1(uVar1,0xb,uVar7,dVar5,uVar2);
                    /* WARNING: Read-only address (ram,0x00d7df00) is written */
  return fVar4;
}


//// FUNCTION ___toupper_mt @ 00acf529 ////

/* Library Function - Single Match
    ___toupper_mt
   
   Library: Visual Studio 2003 Release */

uint __thiscall ___toupper_mt(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  undefined4 local_8;
  
  uVar3 = param_2;
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0x14) == 0) || ((*(int *)(param_1 + 0x24) != 0 && (param_2 < 0x80)))) {
    if ((0x60 < (int)param_2) && ((int)param_2 < 0x7b)) {
      return param_2 - 0x20;
    }
  }
  else {
    local_8 = this;
    if (param_2 < 0x100) {
      if (*(int *)(param_1 + 0x28) < 2) {
        uVar4 = *(byte *)(*(int *)(param_1 + 0x48) + param_2 * 2) & 2;
      }
      else {
        uVar4 = ___isctype_mt(this,param_1,param_2,2);
      }
      if (uVar4 == 0) {
        return uVar3;
      }
    }
    iVar2 = param_1;
    if ((*(byte *)(*(int *)(iVar1 + 0x48) + 1 + ((int)uVar3 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar3;
      sVar5 = 1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar3,(char)(uVar3 >> 8));
      param_1._3_1_ = SUB41(iVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      sVar5 = 2;
    }
    uVar4 = FUN_00ad696b(*(LCID *)(iVar1 + 0x14),0x200,(LPCSTR)&param_1,sVar5,(LPSTR)&local_8,3,
                         *(UINT *)(iVar1 + 4),1);
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        return (uint)CONCAT11((CHAR)local_8,local_8._1_1_);
      }
      return (uint)local_8 & 0xff;
    }
  }
  return uVar3;
}


//// FUNCTION _toupper @ 00acf5f2 ////

/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 2003 Release */

int __cdecl _toupper(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  uVar3 = ___toupper_mt(this,(int)ptVar2,_C);
  return uVar3;
}


//// FUNCTION __alldiv @ 00acf620 ////

/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


//// FUNCTION __wsplitpath @ 00acf6ca ////

/* Library Function - Single Match
    __wsplitpath
   
   Library: Visual Studio 2003 Release */

void __cdecl
__wsplitpath(wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext)

{
  wchar_t wVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  wchar_t *local_c;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  iVar2 = FUN_00ace02d(_FullPath);
  if ((iVar2 == 0) || (_FullPath[1] != L':')) {
    if (_Drive != (wchar_t *)0x0) {
      *_Drive = L'\0';
    }
  }
  else {
    if (_Drive != (wchar_t *)0x0) {
      _wcsncpy(_Drive,_FullPath,2);
      _Drive[2] = L'\0';
    }
    _FullPath = _FullPath + 2;
  }
  wVar1 = *_FullPath;
  local_c = (wchar_t *)0x0;
  pwVar5 = _FullPath;
  if (wVar1 != L'\0') {
    do {
      if ((wVar1 == L'/') || (wVar1 == L'\\')) {
        local_c = pwVar5 + 1;
      }
      else if (wVar1 == L'.') {
        local_8 = pwVar5;
      }
      pwVar5 = pwVar5 + 1;
      wVar1 = *pwVar5;
    } while (wVar1 != L'\0');
    if (local_c != (wchar_t *)0x0) {
      if (_Dir != (wchar_t *)0x0) {
        uVar3 = (uint)((int)local_c - (int)_FullPath) >> 1;
        if (0xfe < uVar3) {
          uVar3 = 0xff;
        }
        _wcsncpy(_Dir,_FullPath,uVar3);
        _Dir[uVar3] = L'\0';
      }
      _FullPath = local_c;
      goto LAB_00acf796;
    }
  }
  if (_Dir != (wchar_t *)0x0) {
    *_Dir = L'\0';
  }
LAB_00acf796:
  if ((local_8 == (wchar_t *)0x0) || (local_8 < _FullPath)) {
    if (_Filename != (wchar_t *)0x0) {
      uVar3 = (uint)((int)pwVar5 - (int)_FullPath) >> 1;
      sVar4 = 0xff;
      if (uVar3 < 0xff) {
        sVar4 = uVar3;
      }
      _wcsncpy(_Filename,_FullPath,sVar4);
      _Filename[sVar4] = L'\0';
    }
    if (_Ext != (wchar_t *)0x0) {
      *_Ext = L'\0';
    }
  }
  else {
    if (_Filename != (wchar_t *)0x0) {
      uVar3 = (uint)((int)local_8 - (int)_FullPath) >> 1;
      if (0xfe < uVar3) {
        uVar3 = 0xff;
      }
      _wcsncpy(_Filename,_FullPath,uVar3);
      _Filename[uVar3] = L'\0';
    }
    if (_Ext != (wchar_t *)0x0) {
      uVar3 = (uint)((int)pwVar5 - (int)local_8) >> 1;
      sVar4 = 0xff;
      if (uVar3 < 0xff) {
        sVar4 = uVar3;
      }
      _wcsncpy(_Ext,local_8,sVar4);
      _Ext[sVar4] = L'\0';
    }
  }
  return;
}


//// FUNCTION ___tolower_mt @ 00acf82d ////

/* Library Function - Single Match
    ___tolower_mt
   
   Library: Visual Studio 2003 Release */

uint __thiscall ___tolower_mt(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  undefined4 local_8;
  
  uVar3 = param_2;
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0x14) == 0) || ((*(int *)(param_1 + 0x24) != 0 && (param_2 < 0x80)))) {
    if ((0x40 < (int)param_2) && ((int)param_2 < 0x5b)) {
      return param_2 + 0x20;
    }
  }
  else {
    local_8 = this;
    if (param_2 < 0x100) {
      if (*(int *)(param_1 + 0x28) < 2) {
        uVar4 = *(byte *)(*(int *)(param_1 + 0x48) + param_2 * 2) & 1;
      }
      else {
        uVar4 = ___isctype_mt(this,param_1,param_2,1);
      }
      if (uVar4 == 0) {
        return uVar3;
      }
    }
    iVar2 = param_1;
    if ((*(byte *)(*(int *)(iVar1 + 0x48) + 1 + ((int)uVar3 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar3;
      sVar5 = 1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar3,(char)(uVar3 >> 8));
      param_1._3_1_ = SUB41(iVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      sVar5 = 2;
    }
    uVar4 = FUN_00ad696b(*(LCID *)(iVar1 + 0x14),0x100,(LPCSTR)&param_1,sVar5,(LPSTR)&local_8,3,
                         *(UINT *)(iVar1 + 4),1);
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        return (uint)CONCAT11((CHAR)local_8,local_8._1_1_);
      }
      return (uint)local_8 & 0xff;
    }
  }
  return uVar3;
}


//// FUNCTION _tolower @ 00acf8f5 ////

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2003 Release */

int __cdecl _tolower(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  uVar3 = ___tolower_mt(this,(int)ptVar2,_C);
  return uVar3;
}


//// FUNCTION FUN_00acf917 @ 00acf917 ////

undefined4 __cdecl FUN_00acf917(LPCSTR param_1)

{
  WINBOOL WVar1;
  ulong uVar2;
  
  WVar1 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (WVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION FUN_00acf943 @ 00acf943 ////

void FUN_00acf943(DWORD param_1)

{
  _ptiddata p_Var1;
  
  if (PTR_FUN_00e99d30 != (undefined *)0x0) {
    (*(code *)PTR_FUN_00e99d30)();
  }
  p_Var1 = __getptd();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  FUN_00ad9fe4(p_Var1);
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}


//// FUNCTION lpStartAddress_00acf974 @ 00acf974 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* lpStartAddress parameter of CreateThread
    */

void __cdecl lpStartAddress_00acf974(DWORD *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  _EXCEPTION_POINTERS *local_18;
  
  iVar1 = (*DAT_010cbdc4)(dwTlsIndex_00e9a620);
  if (iVar1 == 0) {
    iVar1 = (*DAT_010cbdc8)(dwTlsIndex_00e9a620,param_1);
    if (iVar1 == 0) {
      __amsg_exit(0x10);
    }
    DVar2 = GetCurrentThreadId();
    *param_1 = DVar2;
    if (PTR_FUN_00e99d2c != (undefined *)0x0) {
      (*(code *)PTR_FUN_00e99d2c)();
    }
    DVar3 = (*(code *)param_1[0x13])(param_1[0x14]);
    FUN_00acf943(DVar3);
    __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
    return;
  }
  *(DWORD *)(iVar1 + 0x4c) = param_1[0x13];
  *(DWORD *)(iVar1 + 0x50) = param_1[0x14];
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00acfa09 @ 00acfa09 ////

HANDLE __cdecl
FUN_00acfa09(LPSECURITY_ATTRIBUTES param_1,SIZE_T param_2,DWORD param_3,undefined4 param_4,
            DWORD param_5,LPDWORD param_6)

{
  DWORD DVar1;
  int *piVar2;
  void *lpParameter;
  LPDWORD lpThreadId;
  HANDLE pvVar3;
  
  DVar1 = param_3;
  if (param_3 == 0) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x16;
    return (HANDLE)0x0;
  }
  lpParameter = _calloc(1,0x8c);
  if (lpParameter != (void *)0x0) {
    FUN_00ad9e19((int)lpParameter);
    *(undefined4 *)((int)lpParameter + 4) = 0xffffffff;
    *(undefined4 *)((int)lpParameter + 0x50) = param_4;
    *(DWORD *)((int)lpParameter + 0x4c) = DVar1;
    lpThreadId = param_6;
    if (param_6 == (LPDWORD)0x0) {
      lpThreadId = &param_3;
    }
    pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)param_1,param_2,lpStartAddress_00acf974,lpParameter
                          ,param_5,lpThreadId);
    if (pvVar3 != (HANDLE)0x0) {
      return pvVar3;
    }
    GetLastError();
  }
                    /* WARNING: Subroutine does not return */
  _free(lpParameter);
}


//// FUNCTION FUN_00acfa94 @ 00acfa94 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */

uint __cdecl FUN_00acfa94(undefined4 param_1,int param_2,short *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  _ptiddata p_Var6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int aiStackY_60 [6];
  uint local_28;
  pthreadlocinfo local_24;
  undefined1 *local_20;
  
  local_28 = 0;
  aiStackY_60[5] = 0xacfaad;
  iVar5 = FUN_00ace02d(param_3);
  iVar5 = iVar5 + 1;
  bVar3 = false;
  bVar4 = false;
  p_Var6 = __getptd();
  local_24 = (pthreadlocinfo)p_Var6->_tfpecode;
  if (local_24 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    local_24 = ___updatetlocinfo();
  }
  puVar7 = (undefined1 *)(param_2 * 2 + 3U & 0xfffffffc);
  iVar1 = -(int)puVar7;
  local_20 = &stack0xffffffbc + iVar1;
  if (&stack0xffffffbc == puVar7) {
    *(int *)(&stack0xffffffb8 + iVar1) = param_2 * 2;
    *(undefined4 *)((int)aiStackY_60 + iVar1 + 0x14) = 0xacfb21;
    local_20 = _malloc(*(size_t *)(&stack0xffffffb8 + iVar1));
    if (local_20 == (void *)0x0) {
      return 0;
    }
    bVar3 = true;
  }
  puVar7 = (undefined1 *)(iVar5 * 2 + 3U & 0xfffffffc);
  *(undefined4 *)(&stack0xffffffb8 + iVar1) = 0xacfb4c;
  iVar2 = -(int)puVar7;
  puVar8 = &stack0xffffffbc + iVar2 + iVar1;
  if (&stack0xffffffbc + iVar1 == puVar7) {
    sRamfffffffc = iVar5 * 2;
    uRamfffffff8 = 0xacfb7f;
    puVar8 = _malloc(sRamfffffffc);
    if (puVar8 == (void *)0x0) goto LAB_00acfbdf;
    bVar4 = true;
  }
  *(int *)(&stack0xffffffb8 + iVar2 + iVar1) = iVar5 * 2;
  *(short **)((int)aiStackY_60 + iVar2 + iVar1 + 0x14) = param_3;
  *(undefined1 **)((int)aiStackY_60 + iVar2 + iVar1 + 0x10) = puVar8;
  *(pthreadlocinfo *)((int)aiStackY_60 + iVar2 + iVar1 + 0xc) = local_24;
  *(undefined4 *)((int)aiStackY_60 + iVar2 + iVar1 + 8) = 0xacfb9d;
  uVar9 = ___wcstombs_mt(*(int *)((int)aiStackY_60 + iVar2 + iVar1 + 0xc),
                         *(LPSTR *)((int)aiStackY_60 + iVar2 + iVar1 + 0x10),
                         *(LPCWSTR *)((int)aiStackY_60 + iVar2 + iVar1 + 0x14),
                         *(uint *)(&stack0xffffffb8 + iVar2 + iVar1));
  if (uVar9 != 0xffffffff) {
    *(undefined4 *)(&stack0xffffffb8 + iVar2 + iVar1) = 0;
    *(undefined4 *)((int)aiStackY_60 + iVar2 + iVar1 + 0x14) = param_4;
    *(undefined1 **)((int)aiStackY_60 + iVar2 + iVar1 + 0x10) = puVar8;
    *(int *)((int)aiStackY_60 + iVar2 + iVar1 + 0xc) = param_2 * 2;
    *(undefined1 **)((int)aiStackY_60 + iVar2 + iVar1 + 8) = local_20;
    *(pthreadlocinfo *)((int)aiStackY_60 + iVar2 + iVar1 + 4) = local_24;
    *(undefined4 *)((int)aiStackY_60 + iVar2 + iVar1) = 0xacfbba;
    iVar5 = __Strftime_mt(*(int *)((int)aiStackY_60 + iVar2 + iVar1 + 4),
                          *(byte **)((int)aiStackY_60 + iVar2 + iVar1 + 8),
                          *(uint *)((int)aiStackY_60 + iVar2 + iVar1 + 0xc),
                          *(byte **)((int)aiStackY_60 + iVar2 + iVar1 + 0x10),
                          *(undefined2 **)((int)aiStackY_60 + iVar2 + iVar1 + 0x14),
                          *(uint *)(&stack0xffffffb8 + iVar2 + iVar1));
    if (iVar5 != 0) {
      *(int *)(&stack0xffffffb8 + iVar2 + iVar1) = param_2;
      *(undefined1 **)((int)aiStackY_60 + iVar2 + iVar1 + 0x14) = local_20;
      *(undefined4 *)((int)aiStackY_60 + iVar2 + iVar1 + 0x10) = param_1;
      *(pthreadlocinfo *)((int)aiStackY_60 + iVar2 + iVar1 + 0xc) = local_24;
      *(undefined4 *)((int)aiStackY_60 + iVar2 + iVar1 + 8) = 0xacfbd0;
      local_28 = ___mbstowcs_mt(*(int *)((int)aiStackY_60 + iVar2 + iVar1 + 0xc),
                                *(LPWSTR *)((int)aiStackY_60 + iVar2 + iVar1 + 0x10),
                                *(byte **)((int)aiStackY_60 + iVar2 + iVar1 + 0x14),
                                *(uint *)(&stack0xffffffb8 + iVar2 + iVar1));
      if (local_28 == 0xffffffff) {
        local_28 = 0;
      }
    }
  }
LAB_00acfbdf:
  if (bVar3) {
    *(undefined1 **)(&stack0xffffffb8 + iVar2 + iVar1) = local_20;
                    /* WARNING: Subroutine does not return */
    *(undefined **)((int)aiStackY_60 + iVar2 + iVar1 + 0x14) = &UNK_00acfbed;
    _free(*(void **)(&stack0xffffffb8 + iVar2 + iVar1));
  }
  if (!bVar4) {
    return local_28;
  }
  *(undefined1 **)(&stack0xffffffb8 + iVar2 + iVar1) = puVar8;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((int)aiStackY_60 + iVar2 + iVar1 + 0x14) = &UNK_00acfbfa;
  _free(*(void **)(&stack0xffffffb8 + iVar2 + iVar1));
}


//// FUNCTION _localtime @ 00acfc07 ////

/* Library Function - Single Match
    _localtime
   
   Library: Visual Studio 2003 Release */

tm * __cdecl _localtime(time_t *_Time)

{
  time_t *_Time_00;
  tm *_Time_01;
  int iVar1;
  
  _Time_00 = _Time;
  if ((int)*_Time < 0) {
    _Time_01 = (tm *)0x0;
  }
  else {
    ___tzset();
    iVar1 = (int)*_Time_00;
    if ((iVar1 < 0x3f481) || (0x7ffc0b7e < iVar1)) {
      _Time_01 = _gmtime(_Time_00);
      if ((DAT_00e9a254 == 0) || (iVar1 = __isindst(_Time_01), iVar1 == 0)) {
        _Time = (time_t *)(_Time_01->tm_sec - DAT_00e9a250);
      }
      else {
        _Time = (time_t *)((_Time_01->tm_sec - DAT_00e9a258) - DAT_00e9a250);
        _Time_01->tm_isdst = 1;
      }
      iVar1 = (int)_Time % 0x3c;
      _Time_01->tm_sec = iVar1;
      if (iVar1 < 0) {
        _Time_01->tm_sec = iVar1 + 0x3c;
        _Time = (time_t *)((int)_Time + -0x3c);
      }
      _Time = (time_t *)((int)_Time / 0x3c + _Time_01->tm_min);
      iVar1 = (int)_Time % 0x3c;
      _Time_01->tm_min = iVar1;
      if (iVar1 < 0) {
        _Time_01->tm_min = iVar1 + 0x3c;
        _Time = (time_t *)((int)_Time + -0x3c);
      }
      _Time = (time_t *)((int)_Time / 0x3c + _Time_01->tm_hour);
      iVar1 = (int)_Time % 0x18;
      _Time_01->tm_hour = iVar1;
      if (iVar1 < 0) {
        _Time_01->tm_hour = iVar1 + 0x18;
        _Time = _Time + -3;
      }
      iVar1 = (int)_Time / 0x18;
      if (iVar1 < 1) {
        if (-1 < iVar1) {
          return _Time_01;
        }
        _Time_01->tm_wday = (_Time_01->tm_wday + 7 + iVar1) % 7;
        _Time_01->tm_mday = _Time_01->tm_mday + iVar1;
        if (_Time_01->tm_mday < 1) {
          _Time_01->tm_year = _Time_01->tm_year + -1;
          _Time_01->tm_mday = _Time_01->tm_mday + 0x1f;
          _Time_01->tm_yday = 0x16c;
          _Time_01->tm_mon = 0xb;
          return _Time_01;
        }
      }
      else {
        _Time_01->tm_wday = (_Time_01->tm_wday + iVar1) % 7;
        _Time_01->tm_mday = _Time_01->tm_mday + iVar1;
      }
      _Time_01->tm_yday = _Time_01->tm_yday + iVar1;
    }
    else {
      _Time = (time_t *)(iVar1 - DAT_00e9a250);
      _Time_01 = _gmtime((time_t *)&_Time);
      if ((DAT_00e9a254 != 0) && (iVar1 = __isindst(_Time_01), iVar1 != 0)) {
        _Time = (time_t *)((int)_Time - DAT_00e9a258);
        _Time_01 = _gmtime((time_t *)&_Time);
        _Time_01->tm_isdst = 1;
      }
    }
  }
  return _Time_01;
}


//// FUNCTION _time @ 00acfd87 ////

/* Library Function - Single Match
    _time
   
   Library: Visual Studio 2003 Release */

time_t __cdecl _time(time_t *_Time)

{
  time_t tVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  tVar1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,10000000,0);
  if (_Time != (time_t *)0x0) {
    *(int *)_Time = (int)tVar1;
  }
  return tVar1;
}


//// FUNCTION __splitpath @ 00acfdc0 ////

/* Library Function - Single Match
    __splitpath
   
   Library: Visual Studio 2003 Release */

void __cdecl __splitpath(char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext)

{
  byte bVar1;
  size_t sVar2;
  byte *_Source;
  size_t sVar3;
  byte *local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  sVar2 = _strlen(_FullPath);
  if ((sVar2 == 0) || (_FullPath[1] != ':')) {
    _Source = (byte *)_FullPath;
    if (_Drive != (char *)0x0) {
      *_Drive = '\0';
    }
  }
  else {
    if (_Drive != (char *)0x0) {
      __mbsnbcpy((uchar *)_Drive,(uchar *)_FullPath,2);
      _Drive[2] = '\0';
    }
    _Source = (byte *)(_FullPath + 2);
  }
  _FullPath = (char *)0x0;
  local_c = _Source;
  if (*_Source != 0) {
    do {
      bVar1 = *local_c;
      if (((&DAT_010daba1)[bVar1] & 4) == 0) {
        if ((bVar1 == 0x2f) || (bVar1 == 0x5c)) {
          _FullPath = (char *)(local_c + 1);
        }
        else if (bVar1 == 0x2e) {
          local_8 = local_c;
        }
      }
      else {
        local_c = local_c + 1;
      }
      local_c = local_c + 1;
    } while (*local_c != 0);
    if (_FullPath != (char *)0x0) {
      if (_Dir != (char *)0x0) {
        sVar3 = (int)_FullPath - (int)_Source;
        if (0xfe < sVar3) {
          sVar3 = 0xff;
        }
        __mbsnbcpy((uchar *)_Dir,_Source,sVar3);
        _Dir[sVar3] = '\0';
      }
      goto LAB_00acfe88;
    }
  }
  _FullPath = (char *)_Source;
  if (_Dir != (char *)0x0) {
    *_Dir = '\0';
  }
LAB_00acfe88:
  if ((local_8 == (byte *)0x0) || (local_8 < _FullPath)) {
    if (_Filename != (char *)0x0) {
      sVar3 = 0xff;
      if ((uint)((int)local_c - (int)_FullPath) < 0xff) {
        sVar3 = (int)local_c - (int)_FullPath;
      }
      __mbsnbcpy((uchar *)_Filename,(uchar *)_FullPath,sVar3);
      _Filename[sVar3] = '\0';
    }
    if (_Ext != (char *)0x0) {
      *_Ext = '\0';
    }
  }
  else {
    if (_Filename != (char *)0x0) {
      sVar3 = (int)local_8 - (int)_FullPath;
      if (0xfe < sVar3) {
        sVar3 = 0xff;
      }
      __mbsnbcpy((uchar *)_Filename,(uchar *)_FullPath,sVar3);
      _Filename[sVar3] = '\0';
    }
    if (_Ext != (char *)0x0) {
      sVar3 = 0xff;
      if ((uint)((int)local_c - (int)local_8) < 0xff) {
        sVar3 = (int)local_c - (int)local_8;
      }
      __mbsnbcpy((uchar *)_Ext,local_8,sVar3);
      _Ext[sVar3] = '\0';
    }
  }
  return;
}


//// FUNCTION _strncmp @ 00acff10 ////

/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2003 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}


//// FUNCTION _strtok @ 00acff49 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _strtok
   
   Library: Visual Studio 2003 Release */

char * __cdecl _strtok(char *_Str,char *_Delim)

{
  byte bVar1;
  _ptiddata p_Var2;
  int iVar3;
  byte *pbVar4;
  byte local_28 [32];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  p_Var2 = __getptd();
  pbVar4 = local_28;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *_Delim;
    local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    _Delim = _Delim + 1;
  } while (bVar1 != 0);
  if (_Str == (char *)0x0) {
    _Str = p_Var2->_token;
  }
  for (; (bVar1 = *_Str, pbVar4 = (byte *)_Str,
         (local_28[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0 && (bVar1 != 0)); _Str = _Str + 1) {
  }
  do {
    if (*pbVar4 == 0) {
LAB_00acffe1:
      p_Var2->_token = (char *)pbVar4;
      return (char *)(-(uint)((byte *)_Str != pbVar4) & (uint)_Str);
    }
    if ((local_28[*pbVar4 >> 3] & (byte)(1 << (*pbVar4 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_00acffe1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}


//// FUNCTION _atof @ 00acfffe ////

/* Library Function - Single Match
    _atof
   
   Library: Visual Studio 2003 Release */

double __cdecl _atof(char *_String)

{
  int iVar1;
  _locale_t _Locale;
  FLT p_Var2;
  _flt local_1c;
  
  while( true ) {
    iVar1 = _isspace((uint)(byte)*_String);
    if (iVar1 == 0) break;
    _String = _String + 1;
  }
  _Locale = (_locale_t)_strlen(_String);
  p_Var2 = __fltin2(&local_1c,_String,_Locale);
  return p_Var2->dval;
}


//// FUNCTION FUN_00ad0036 @ 00ad0036 ////

void __cdecl FUN_00ad0036(ulong param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  p_Var1->_holdrand = param_1;
  return;
}


//// FUNCTION _rand @ 00ad0043 ////

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  _ptiddata p_Var1;
  uint uVar2;
  
  p_Var1 = __getptd();
  uVar2 = p_Var1->_holdrand * 0x343fd + 0x269ec3;
  p_Var1->_holdrand = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}


//// FUNCTION _atol @ 00ad0065 ////

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2003 Release */

long __cdecl _atol(char *_Str)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  int iVar4;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *this;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  while( true ) {
    if (*(int *)&ptVar2->lc_id[0].wCodePage < 2) {
      this = ptVar2->lc_category[0].locale;
      uVar3 = (byte)this[(uint)(byte)*_Str * 2] & 8;
    }
    else {
      uVar3 = ___isctype_mt(this,(int)ptVar2,(uint)(byte)*_Str,8);
      this = extraout_ECX_01;
    }
    if (uVar3 == 0) break;
    _Str = _Str + 1;
  }
  uVar3 = (uint)(byte)*_Str;
  pbVar7 = (byte *)(_Str + 1);
  if ((uVar3 == 0x2d) || (uVar5 = uVar3, uVar3 == 0x2b)) {
    uVar5 = (uint)*pbVar7;
    pbVar7 = (byte *)(_Str + 2);
  }
  iVar4 = 0;
  while( true ) {
    if ((uVar5 < 0x30) || (0x39 < uVar5)) {
      iVar6 = -1;
    }
    else {
      iVar6 = uVar5 - 0x30;
    }
    if (iVar6 == -1) break;
    iVar4 = iVar6 + iVar4 * 10;
    uVar5 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
  }
  if (uVar3 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


//// FUNCTION ___crtExitProcess @ 00ad0199 ////

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2003 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


//// FUNCTION FUN_00ad01c9 @ 00ad01c9 ////

void FUN_00ad01c9(void)

{
  __lock(8);
  return;
}


//// FUNCTION FUN_00ad01d2 @ 00ad01d2 ////

void FUN_00ad01d2(void)

{
  FUN_00ad700c(8);
  return;
}


//// FUNCTION __initterm @ 00ad01db ////

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2003 Release */

void __cdecl __initterm(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}


//// FUNCTION __cinit @ 00ad0211 ////

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __cinit(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (PTR___fpmath_00e99d28 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_00e99d28)(param_1);
  }
  iVar1 = 0;
  puVar2 = &DAT_00e4dbbc;
  do {
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((code *)*puVar2 != (code *)0x0) {
      iVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_00e4dbd4);
  if (iVar1 == 0) {
    _atexit(FUN_00ae3f0b);
    puVar2 = &DAT_00e4d000;
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 < &DAT_00e4dbb8);
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION doexit @ 00ad027b ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2003 Release */

void __cdecl doexit(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  __lock(8);
  if (DAT_010cbc08 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_010cbc04 = 1;
  DAT_010cbc00 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_010dbe2c != (undefined4 *)0x0) {
      while( true ) {
        DAT_010dbe28 = DAT_010dbe28 + -1;
        if (DAT_010dbe28 < DAT_010dbe2c) break;
        if ((code *)*DAT_010dbe28 != (code *)0x0) {
          (*(code *)*DAT_010dbe28)();
        }
      }
    }
    __initterm((undefined4 *)&DAT_00e4dbe4);
  }
  __initterm((undefined4 *)&DAT_00e4dbf0);
  FUN_00ad032a();
  if (param_3 == 0) {
    DAT_010cbc08 = 1;
                    /* WARNING: Subroutine does not return */
    ___crtExitProcess(param_1);
  }
  return;
}


//// FUNCTION FUN_00ad032a @ 00ad032a ////

void FUN_00ad032a(void)

{
  int unaff_EBP;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + 0x10) != unaff_EDI) {
    FUN_00ad700c(8);
  }
  return;
}


//// FUNCTION _exit @ 00ad033e ////

/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2003 Release */

void __cdecl _exit(int _Code)

{
  doexit(_Code,0,0);
  return;
}


//// FUNCTION __exit @ 00ad034f ////

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(UINT param_1)

{
  doexit(param_1,1,0);
  return;
}


//// FUNCTION __cexit @ 00ad0360 ////

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2003 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}


//// FUNCTION FUN_00ad037e @ 00ad037e ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl FUN_00ad037e(int param_1)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  int local_20;
  
  if ((param_1 < 0x14) || (0x800 < param_1)) {
    return -1;
  }
  __lock(1);
  if (DAT_010dbe20 < param_1) {
    piVar1 = FUN_00ad58c5(DAT_010dae04,(uint *)(param_1 << 2));
    if (piVar1 == (int *)0x0) {
LAB_00ad0455:
      local_20 = -1;
      goto LAB_00ad0459;
    }
    for (; DAT_010dbe20 < param_1; DAT_010dbe20 = DAT_010dbe20 + 1) {
      piVar1[DAT_010dbe20] = 0;
    }
    local_20 = param_1;
  }
  else {
    if (param_1 == DAT_010dbe20) {
      local_20 = DAT_010dbe20;
      goto LAB_00ad0459;
    }
    local_20 = param_1;
    iVar2 = DAT_010dbe20;
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < param_1) goto LAB_00ad0428;
      _Memory = (void *)DAT_010dae04[iVar2];
    } while (_Memory == (void *)0x0);
    if ((*(byte *)((int)_Memory + 0xc) & 0x83) == 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    local_20 = -1;
LAB_00ad0428:
    if (local_20 == -1) goto LAB_00ad0459;
    piVar1 = FUN_00ad58c5(DAT_010dae04,(uint *)(param_1 << 2));
    if (piVar1 == (int *)0x0) goto LAB_00ad0455;
  }
  DAT_010dbe20 = param_1;
  DAT_010dae04 = piVar1;
LAB_00ad0459:
  FUN_00ad0467();
  return local_20;
}


//// FUNCTION FUN_00ad0467 @ 00ad0467 ////

void FUN_00ad0467(void)

{
  FUN_00ad700c(1);
  return;
}


//// FUNCTION FUN_00ad0479 @ 00ad0479 ////

undefined4 FUN_00ad0479(void)

{
  return DAT_010dbe20;
}


//// FUNCTION _wcscat @ 00ad047f ////

/* Library Function - Single Match
    _wcscat
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcscat(wchar_t *_Dest,wchar_t *_Source)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Dest;
  wVar1 = *_Dest;
  while (wVar1 != L'\0') {
    _Dest = _Dest + 1;
    wVar1 = *_Dest;
  }
  do {
    wVar1 = *_Source;
    *_Dest = wVar1;
    _Dest = _Dest + 1;
    _Source = _Source + 1;
  } while (wVar1 != L'\0');
  return pwVar2;
}


//// FUNCTION _wcscpy @ 00ad04a9 ////

/* Library Function - Single Match
    _wcscpy
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcscpy(wchar_t *_Dest,wchar_t *_Source)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Dest;
  do {
    wVar1 = *_Source;
    *pwVar2 = wVar1;
    pwVar2 = pwVar2 + 1;
    _Source = _Source + 1;
  } while (wVar1 != L'\0');
  return _Dest;
}


//// FUNCTION ___towlower_mt @ 00ad04c5 ////

/* Library Function - Single Match
    ___towlower_mt
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___towlower_mt(int param_1,uint param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined2 uVar3;
  WCHAR local_8 [2];
  
  uVar1 = 0xffff;
  if ((WCHAR)param_2 != L'\xffff') {
    if (((ushort)(WCHAR)param_2 < 0x100) &&
       (uVar1 = ___iswctype_mt(param_1,(WCHAR)param_2,1), uVar1 == 0)) {
      uVar1 = param_2 & 0xffff;
    }
    else {
      sVar2 = FUN_00ae3f6d(*(LCID *)(param_1 + 0x14),0x100,(LPCWSTR)&param_2,1,local_8,1,
                           *(UINT *)(param_1 + 4));
      uVar3 = (undefined2)(sVar2 >> 0x10);
      uVar1 = CONCAT22(uVar3,(WCHAR)param_2);
      if (sVar2 != 0) {
        uVar1 = CONCAT22(uVar3,local_8[0]);
      }
    }
  }
  return uVar1;
}


//// FUNCTION _towlower @ 00ad0526 ////

/* Library Function - Single Match
    _towlower
   
   Library: Visual Studio 2003 Release */

wint_t __cdecl _towlower(wint_t _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  undefined2 in_stack_00000006;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  if (_C == 0xffff) {
    return 0xffff;
  }
  if (ptVar2->lc_handle[2] != 0) {
    uVar3 = ___towlower_mt((int)ptVar2,__C);
    return (wint_t)uVar3;
  }
  if ((0x40 < _C) && (_C < 0x5b)) {
    return _C + 0x20;
  }
  return _C;
}


//// FUNCTION FID_conflict:_fwprintf @ 00ad0571 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fprintf
    _fwprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__fwprintf(FILE *_File,char *_Format,...)

{
  int _Flag;
  int iVar1;
  
  __lock_file(_File);
  _Flag = __stbuf(_File);
  iVar1 = FUN_00ae1640(_File,(byte *)_Format,(wchar_t *)&stack0x0000000c);
  __ftbuf(_Flag,_File);
  FUN_00ad05c5();
  return iVar1;
}


//// FUNCTION FUN_00ad05c5 @ 00ad05c5 ////

void FUN_00ad05c5(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x20));
  return;
}


//// FUNCTION __lock_file @ 00ad0692 ////

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2003 Release */

void __cdecl __lock_file(FILE *_File)

{
  if (((FILE *)0xe99daf < _File) && (_File < (FILE *)0xe9a011)) {
    __lock(((int)&_File[-0x74cee]._file >> 5) + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


//// FUNCTION __lock_file2 @ 00ad06c1 ////

/* Library Function - Single Match
    __lock_file2
   
   Library: Visual Studio 2003 Release */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}


//// FUNCTION __unlock_file @ 00ad06e4 ////

/* Library Function - Single Match
    __unlock_file
   
   Library: Visual Studio 2003 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0xe99daf < _File) && (_File < (FILE *)0xe9a011)) {
    FUN_00ad700c(((int)&_File[-0x74cee]._file >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


//// FUNCTION __unlock_file2 @ 00ad0713 ////

/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2003 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_00ad700c(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}


//// FUNCTION __validdrive @ 00ad0736 ////

/* Library Function - Single Match
    __validdrive
   
   Library: Visual Studio 2003 Release */

int __cdecl __validdrive(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 != 0) {
    cVar1 = (char)param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
    UVar2 = GetDriveTypeA((LPCSTR)&param_1);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION __getdcwd_lk @ 00ad076d ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __getdcwd_lk
   
   Library: Visual Studio 2003 Release */

uint * __cdecl __getdcwd_lk(uint param_1,uint *param_2,size_t param_3)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  uint uVar5;
  uint *puVar6;
  LPSTR local_110;
  uint local_10c [65];
  undefined4 local_8;
  
  uVar5 = param_1;
  local_8 = DAT_00e9a098;
  if (param_1 == 0) {
    DVar4 = GetCurrentDirectoryA(0x104,(LPSTR)local_10c);
  }
  else {
    iVar1 = __validdrive(param_1);
    if (iVar1 == 0) {
      puVar2 = FUN_00ad4b75();
      *puVar2 = 0xf;
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 0xd;
      return (uint *)0x0;
    }
    param_1 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar5 + '@'));
    DVar4 = GetFullPathNameA((LPCSTR)&param_1,0x104,(LPSTR)local_10c,&local_110);
  }
  if ((DVar4 != 0) && (uVar5 = DVar4 + 1, uVar5 < 0x105)) {
    if (param_2 == (uint *)0x0) {
      if ((int)uVar5 <= (int)param_3) {
        uVar5 = param_3;
      }
      puVar6 = _malloc(uVar5);
      if (puVar6 != (uint *)0x0) {
LAB_00ad0844:
        puVar6 = FUN_00ada2e0(puVar6,local_10c);
        return puVar6;
      }
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 0xc;
    }
    else {
      puVar6 = param_2;
      if ((int)uVar5 <= (int)param_3) goto LAB_00ad0844;
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 0x22;
    }
  }
  return (uint *)0x0;
}


//// FUNCTION __getcwd @ 00ad0858 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getcwd
   
   Library: Visual Studio 2003 Release */

char * __cdecl __getcwd(char *_DstBuf,int _SizeInBytes)

{
  uint *puVar1;
  
  __lock(7);
  puVar1 = __getdcwd_lk(0,(uint *)_DstBuf,_SizeInBytes);
  FUN_00ad0895();
  return (char *)puVar1;
}


//// FUNCTION FUN_00ad0895 @ 00ad0895 ////

void FUN_00ad0895(void)

{
  FUN_00ad700c(7);
  return;
}


//// FUNCTION FUN_00ad08e5 @ 00ad08e5 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00ad09a9) */

float10 __cdecl FUN_00ad08e5(wchar_t *param_1)

{
  int iVar1;
  size_t sVar2;
  double dVar3;
  undefined4 uStackY_4c;
  undefined4 uStackY_48;
  
  iVar1 = _iswctype(*param_1,8);
  while (iVar1 != 0) {
    param_1 = param_1 + 1;
    iVar1 = _iswctype(*param_1,8);
  }
  uStackY_48 = 0xad0929;
  sVar2 = _wcstombs((char *)0x0,param_1,0);
  iVar1 = -(sVar2 * 2 + 5 & 0xfffffffc);
  *(size_t *)(&stack0xffffffc4 + iVar1) = sVar2 + 1;
  *(wchar_t **)(&stack0xffffffc0 + iVar1) = param_1;
  *(undefined1 **)(&stack0xffffffbc + iVar1) = &stack0xffffffc8 + iVar1;
  *(undefined4 *)((int)&uStackY_48 + iVar1) = 0xad0999;
  _wcstombs(*(char **)(&stack0xffffffbc + iVar1),*(wchar_t **)(&stack0xffffffc0 + iVar1),
            *(size_t *)(&stack0xffffffc4 + iVar1));
  *(undefined1 **)((int)&uStackY_48 + iVar1) = &stack0xffffffc8 + iVar1;
  *(undefined4 *)((int)&uStackY_4c + iVar1) = 0xad099f;
  dVar3 = _atof(*(char **)((int)&uStackY_48 + iVar1));
  return (float10)dVar3;
}


//// FUNCTION _iswspace @ 00ad0a1d ////

/* Library Function - Single Match
    _iswspace
   
   Library: Visual Studio 2003 Release */

int __cdecl _iswspace(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,8);
  return iVar1;
}


//// FUNCTION _iswalnum @ 00ad0a39 ////

/* Library Function - Single Match
    _iswalnum
   
   Library: Visual Studio 2003 Release */

int __cdecl _iswalnum(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  return iVar1;
}


//// FUNCTION ___mbstowcs_mt @ 00ad0a86 ////

/* Library Function - Single Match
    ___mbstowcs_mt
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___mbstowcs_mt(int param_1,LPWSTR param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  int *piVar4;
  byte *pbVar5;
  size_t sVar6;
  uint local_8;
  
  uVar1 = 0;
  if (param_2 == (LPWSTR)0x0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      sVar6 = _strlen((char *)param_3);
      return sVar6;
    }
    iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCCH)param_3,-1,(LPWSTR)0x0,0);
    if (iVar2 != 0) goto LAB_00ad0b7b;
  }
  else {
    if (param_4 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      if (param_4 == 0) {
        return 0;
      }
      do {
        *param_2 = (ushort)param_3[uVar1];
        if (param_3[uVar1] == 0) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
        param_2 = param_2 + 1;
      } while (uVar1 < param_4);
      return uVar1;
    }
    iVar2 = MultiByteToWideChar(*(UINT *)(param_1 + 4),9,(LPCCH)param_3,-1,param_2,param_4);
    if (iVar2 != 0) {
LAB_00ad0b7b:
      return iVar2 - 1;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x7a) {
      local_8 = param_4;
      pbVar5 = param_3;
      do {
        local_8 = local_8 - 1;
        if (*pbVar5 == 0) break;
        if (((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (uint)*pbVar5 * 2) & 0x80) != 0) &&
           (pbVar5 = pbVar5 + 1, *pbVar5 == 0)) goto LAB_00ad0b00;
        pbVar5 = pbVar5 + 1;
      } while (local_8 != 0);
      uVar1 = MultiByteToWideChar(*(UINT *)(param_1 + 4),1,(LPCCH)param_3,(int)pbVar5 - (int)param_3
                                  ,param_2,param_4);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
  }
LAB_00ad0b00:
  piVar4 = FUN_00ad4b6c();
  *piVar4 = 0x2a;
  return 0xffffffff;
}


//// FUNCTION _mbstowcs @ 00ad0b81 ////

/* Library Function - Single Match
    _mbstowcs
   
   Library: Visual Studio 2003 Release */

size_t __cdecl _mbstowcs(wchar_t *_Dest,char *_Source,size_t _MaxCount)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  uVar3 = ___mbstowcs_mt((int)ptVar2,_Dest,(byte *)_Source,_MaxCount);
  return uVar3;
}


//// FUNCTION FUN_00ad0bac @ 00ad0bac ////

int __cdecl FUN_00ad0bac(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*psVar1 == 0) break;
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((iVar2 != 0) && (*psVar1 == 0)) {
      return ((int)psVar1 - (int)param_1 >> 1) + 1;
    }
  }
  return param_2;
}


//// FUNCTION ___wcstombs_mt @ 00ad0bdb ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___wcstombs_mt
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___wcstombs_mt(int param_1,LPSTR param_2,LPCWSTR param_3,uint param_4)

{
  char cVar1;
  WCHAR WVar2;
  LPCWSTR pWVar3;
  int iVar4;
  DWORD DVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  WINBOOL local_14;
  CHAR local_10 [8];
  undefined4 local_8;
  
  uVar8 = 0;
  local_8 = DAT_00e9a098;
  local_14 = 0;
  if (param_2 == (LPSTR)0x0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar8 = FUN_00ace02d(param_3);
      return uVar8;
    }
    uVar8 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,param_3,-1,(LPSTR)0x0,0,(LPCCH)0x0,
                                &local_14);
    if ((uVar8 != 0) && (local_14 == 0)) {
LAB_00ad0d86:
      return uVar8 - 1;
    }
  }
  else {
    if (param_4 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      if (param_4 == 0) {
        return 0;
      }
      while ((ushort)*param_3 < 0x100) {
        param_2[uVar8] = (CHAR)*param_3;
        WVar2 = *param_3;
        param_3 = param_3 + 1;
        if (WVar2 == L'\0') {
          return uVar8;
        }
        uVar8 = uVar8 + 1;
        if (param_4 <= uVar8) {
          return uVar8;
        }
      }
    }
    else if (cbMultiByte_00e9a94c == 1) {
      pWVar3 = param_3;
      uVar8 = param_4;
      if (param_4 != 0) {
        do {
          if (*pWVar3 == L'\0') break;
          pWVar3 = pWVar3 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if ((uVar8 != 0) && (*pWVar3 == L'\0')) {
          param_4 = ((int)pWVar3 - (int)param_3 >> 1) + 1;
        }
      }
      uVar8 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,param_3,param_4,param_2,param_4,
                                  (LPCCH)0x0,&local_14);
      if ((uVar8 != 0) && (local_14 == 0)) {
        if (param_2[uVar8 - 1] != '\0') {
          return uVar8;
        }
        goto LAB_00ad0d86;
      }
    }
    else {
      iVar4 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,param_3,-1,param_2,param_4,(LPCCH)0x0,
                                  &local_14);
      if (iVar4 == 0) {
        if (local_14 == 0) {
          DVar5 = GetLastError();
          uVar8 = 0;
          if (DVar5 == 0x7a) {
            while( true ) {
              if (param_4 <= uVar8) {
                return uVar8;
              }
              iVar4 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,param_3,1,local_10,
                                          cbMultiByte_00e9a94c,(LPCCH)0x0,&local_14);
              if ((iVar4 == 0) || (local_14 != 0)) break;
              if (param_4 < iVar4 + uVar8) {
                return uVar8;
              }
              iVar7 = 0;
              if (0 < iVar4) {
                do {
                  cVar1 = local_10[iVar7];
                  param_2[uVar8] = cVar1;
                  if (cVar1 == '\0') {
                    return uVar8;
                  }
                  iVar7 = iVar7 + 1;
                  uVar8 = uVar8 + 1;
                } while (iVar7 < iVar4);
              }
              param_3 = param_3 + 1;
            }
          }
        }
      }
      else if (local_14 == 0) {
        return iVar4 - 1;
      }
    }
  }
  piVar6 = FUN_00ad4b6c();
  *piVar6 = 0x2a;
  return 0xffffffff;
}


//// FUNCTION _wcstombs @ 00ad0d8c ////

/* Library Function - Single Match
    _wcstombs
   
   Library: Visual Studio 2003 Release */

size_t __cdecl _wcstombs(char *_Dest,wchar_t *_Source,size_t _MaxCount)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  uVar3 = ___wcstombs_mt((int)ptVar2,_Dest,_Source,_MaxCount);
  return uVar3;
}


//// FUNCTION FUN_00ad0db7 @ 00ad0db7 ////

int __cdecl FUN_00ad0db7(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    FUN_00ae467b((int)param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(param_1->_tmpfname);
    }
  }
  param_1->_flag = 0;
  return iVar2;
}


//// FUNCTION _fclose @ 00ad0e03 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2003 Release */

int __cdecl _fclose(FILE *_File)

{
  int local_20;
  
  local_20 = -1;
  if ((_File->_flag & 0x40) == 0) {
    __lock_file(_File);
    local_20 = FUN_00ad0db7(_File);
    FUN_00ad0e4c();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}


//// FUNCTION FUN_00ad0e4c @ 00ad0e4c ////

void FUN_00ad0e4c(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}


//// FUNCTION __fsopen @ 00ad0e54 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  FILE *pFVar1;
  int *piVar2;
  
  pFVar1 = (FILE *)FUN_00ae480e();
  if (pFVar1 == (FILE *)0x0) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x18;
    pFVar1 = (FILE *)0x0;
  }
  else {
    pFVar1 = __openfile(_Filename,_Mode,_ShFlag,pFVar1);
    FUN_00ad0ea6();
  }
  return pFVar1;
}


//// FUNCTION FUN_00ad0ea6 @ 00ad0ea6 ////

void FUN_00ad0ea6(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}


//// FUNCTION _fopen @ 00ad0eb0 ////

/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}


//// FUNCTION FUN_00ad0ec3 @ 00ad0ec3 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00ad0fe5) */

undefined4 __cdecl FUN_00ad0ec3(LPCSTR param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  WINBOOL WVar3;
  DWORD DVar4;
  uint uVar5;
  byte *lpBuffer;
  undefined4 local_130;
  CHAR local_12c;
  undefined1 local_12b;
  undefined1 local_12a;
  undefined1 local_129;
  byte local_128 [264];
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7dfe8;
  uStack_c = 0xad0ed2;
  local_20 = DAT_00e9a098;
  lpBuffer = local_128;
  local_130 = 0xffffffff;
  WVar3 = SetCurrentDirectoryA(param_1);
  puVar2 = local_1c;
  if (WVar3 != 0) {
    DVar4 = GetCurrentDirectoryA(0x105,(LPSTR)lpBuffer);
    if (0x104 < (int)DVar4) {
      local_1c = &stack0xfffffeb8;
      lpBuffer = &stack0xfffffeb8;
      local_8 = (undefined *)0xffffffff;
      puVar2 = &stack0xfffffeb8;
      if (DVar4 == 0) goto LAB_00ad0fd0;
      DVar4 = GetCurrentDirectoryA(DVar4 + 1,&stack0xfffffeb8);
    }
    puVar2 = local_1c;
    if (DVar4 != 0) {
      bVar1 = *lpBuffer;
      if (((bVar1 != 0x5c) && (bVar1 != 0x2f)) || (bVar1 != lpBuffer[1])) {
        local_12c = '=';
        uVar5 = __mbctoupper((uint)*lpBuffer);
        local_12b = (undefined1)uVar5;
        local_12a = 0x3a;
        local_129 = 0;
        WVar3 = SetEnvironmentVariableA(&local_12c,(LPCSTR)lpBuffer);
        puVar2 = local_1c;
        if (WVar3 == 0) goto LAB_00ad0fd0;
      }
      local_130 = 0;
      puVar2 = local_1c;
    }
  }
LAB_00ad0fd0:
  local_1c = puVar2;
  DVar4 = GetLastError();
  __dosmaperr(DVar4);
  return local_130;
}


//// FUNCTION FUN_00ad1010 @ 00ad1010 ////

void FUN_00ad1010(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_00ae05a8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_00ad102d(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


//// FUNCTION FUN_00ad102d @ 00ad102d ////

void __cdecl FUN_00ad102d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_00ae054c();
    }
LAB_00ad10bc:
    if (DAT_010cbbb8 == 0) {
      __startOneArgErrorHandling(&DAT_00e9a030,0xd,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_00ae0535();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00ad10bc;
    if (DAT_010cbbb8 == 0) {
      __math_exit(&DAT_00e9a030,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}


//// FUNCTION __chkstk @ 00ad10e0 ////

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2003 Release */

void __chkstk(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  if (in_EAX < 0x1000) {
    *(undefined4 *)(&stack0x00000000 + -in_EAX) = unaff_retaddr;
    return;
  }
  puVar1 = &stack0x00000004;
  do {
    puVar1 = puVar1 + -0x1000;
    in_EAX = in_EAX - 0x1000;
  } while (0xfff < in_EAX);
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


//// FUNCTION _wcsstr @ 00ad111d ////

/* Library Function - Single Match
    _wcsstr
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcsstr(wchar_t *_Str,wchar_t *_SubStr)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (*_SubStr != L'\0') {
    wVar1 = *_Str;
    if (wVar1 != L'\0') {
      iVar3 = (int)_Str - (int)_SubStr;
      pwVar2 = _SubStr;
joined_r0x00ad1142:
      do {
        if (wVar1 != L'\0') {
          if (*pwVar2 == L'\0') {
            return _Str;
          }
          if (*(wchar_t *)(iVar3 + (int)pwVar2) == *pwVar2) {
            wVar1 = *(wchar_t *)(iVar3 + (int)(pwVar2 + 1));
            pwVar2 = pwVar2 + 1;
            goto joined_r0x00ad1142;
          }
        }
        if (*pwVar2 == L'\0') {
          return _Str;
        }
        _Str = _Str + 1;
        wVar1 = *_Str;
        iVar3 = iVar3 + 2;
        pwVar2 = _SubStr;
      } while (wVar1 != L'\0');
    }
    _Str = (wchar_t *)0x0;
  }
  return _Str;
}


//// FUNCTION FUN_00ad1180 @ 00ad1180 ////

float10 __cdecl FUN_00ad1180(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if ((DAT_010dadc0 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0x3ff) {
        return (float10)(double)(-(ulonglong)(0.0 < param_1) & 0x3ff0000000000000);
      }
      if (uVar1 < 0x433) {
        return (float10)(dVar5 + (double)(-(ulonglong)(dVar5 < param_1) & 0x3ff0000000000000));
      }
    }
    else {
      if (uVar1 < 0xbff) {
        return (float10)-0.0;
      }
      if (uVar1 < 0xc33) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
    }
    return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
  }
  uVar2 = __ctrlfp();
  uVar1 = (uint)(CONCAT26(param_1._6_2_,param_1._0_6_) >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype((int)param_1._0_6_,uVar1);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp();
        return (float10)(double)CONCAT26(param_1._6_2_,param_1._0_6_);
      }
      if (iVar3 == 3) {
        fVar4 = __handle_qnan1(0xc,(double)CONCAT44((int)(CONCAT26(param_1._6_2_,param_1._0_6_) >>
                                                         0x20),(int)param_1._0_6_));
        return fVar4;
      }
    }
    dVar5 = (double)CONCAT26(param_1._6_2_,param_1._0_6_) + 1.0;
    uVar7 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar1 = 8;
  }
  else {
    fVar4 = __frnd((double)CONCAT44(uVar1,(int)param_1._0_6_));
    dVar5 = (double)fVar4;
    if ((dVar5 == (double)CONCAT26(param_1._6_2_,param_1._0_6_)) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp();
      return (float10)dVar5;
    }
    uVar7 = CONCAT26(param_1._6_2_,param_1._0_6_);
    uVar1 = 0x10;
  }
  fVar4 = __except1(uVar1,0xc,uVar7,dVar5,uVar2);
  return fVar4;
}


//// FUNCTION _wcstok @ 00ad129d ////

/* Library Function - Single Match
    _wcstok
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcstok(wchar_t *_Str,wchar_t *_Delim)

{
  wchar_t wVar1;
  _ptiddata p_Var2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  
  p_Var2 = __getptd();
  if (_Str == (wchar_t *)0x0) {
    _Str = p_Var2->_wtoken;
  }
  wVar4 = *_Str;
  if (wVar4 != L'\0') {
    wVar1 = *_Delim;
    pwVar3 = _Delim;
    do {
      while ((wVar1 != L'\0' && (wVar1 != wVar4))) {
        wVar1 = pwVar3[1];
        pwVar3 = pwVar3 + 1;
      }
      if (*pwVar3 == L'\0') break;
      _Str = _Str + 1;
      wVar4 = *_Str;
      wVar1 = *_Delim;
      pwVar3 = _Delim;
    } while (wVar4 != L'\0');
  }
  pwVar3 = _Str;
  if (*_Str != L'\0') {
    do {
      pwVar5 = _Delim;
      if (*_Delim != L'\0') {
        wVar4 = *_Delim;
        do {
          if (wVar4 == *pwVar3) break;
          pwVar5 = pwVar5 + 1;
          wVar4 = *pwVar5;
        } while (wVar4 != L'\0');
      }
      if (*pwVar5 != L'\0') {
        *pwVar3 = L'\0';
        pwVar3 = pwVar3 + 1;
        break;
      }
      pwVar3 = pwVar3 + 1;
    } while (*pwVar3 != L'\0');
  }
  p_Var2->_wtoken = pwVar3;
  return (wchar_t *)(-(uint)(_Str != pwVar3) & (uint)_Str);
}


//// FUNCTION __copysign @ 00ad1342 ////

/* Library Function - Single Match
    __copysign
   
   Library: Visual Studio 2003 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,_Number._0_4_);
}


//// FUNCTION __chgsign @ 00ad1363 ////

/* Library Function - Single Match
    __chgsign
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2019 Release */

double __cdecl __chgsign(double _X)

{
  return (double)(CONCAT44(~_X._4_4_,_X._0_4_) ^ 0x7fffffff00000000);
}


//// FUNCTION FUN_00ad139f @ 00ad139f ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00ad139f(uint param_1,undefined4 param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  int local_8;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  uVar2 = __ctrlfp();
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) >>
                                   0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp();
        goto LAB_00ad1483;
      }
      if (iVar3 == 3) {
        fVar4 = __handle_qnan1(0x25,(double)CONCAT44((int)(CONCAT26(param_2._2_2_,
                                                                    CONCAT24((undefined2)param_2,
                                                                             param_1)) >> 0x20),
                                                     param_1));
        return fVar4;
      }
    }
    dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + 1.0;
    uVar5 = 8;
  }
  else {
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) != 0.0) {
      __decomp(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) >> 0x20)
               ,&local_8);
      dVar1 = (double)(local_8 + -1);
      __ctrlfp();
LAB_00ad1483:
      return (float10)dVar1;
    }
    dVar1 = -_DAT_00e9a960;
    uVar5 = 4;
  }
  fVar4 = __except1(uVar5,0x25,CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)),dVar1,
                    uVar2);
  return fVar4;
}


//// FUNCTION FUN_00ad148a @ 00ad148a ////

float10 __cdecl FUN_00ad148a(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_20;
  short local_c [2];
  uint local_8;
  
  local_8 = __ctrlfp();
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) ||
       (((param_4._2_2_ & 0x7ff8) == 0x7ff0 && (((param_4 & 0x7ffff) != 0 || (param_3 != 0)))))) {
      dVar6 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) +
              (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar5 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar4 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      uVar3 = 8;
      goto LAB_00ad16f1;
    }
    if (((param_2._2_2_ & 0x7ff8) == 0x7ff8) || ((param_4._2_2_ & 0x7ff8) == 0x7ff8)) {
      fVar2 = __handle_qnan2(0x26,(double)CONCAT26(param_2._2_2_,
                                                   CONCAT24((undefined2)param_2,param_1)),
                             (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)));
      return fVar2;
    }
  }
  dVar6 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) == dVar6) {
    __ctrlfp();
    return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  if (dVar6 == 0.0) {
    if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <= dVar6) {
      local_20 = -4.94065645841247e-324;
    }
    else {
      local_20 = 4.94065645841247e-324;
    }
  }
  if (((0.0 < dVar6) &&
      ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) < dVar6)) ||
     ((dVar6 < 0.0 &&
      (dVar6 < (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))))) {
    local_20 = (double)CONCAT44(param_2,param_1 + -1);
    if (param_1 == 0) {
      iVar1 = param_2 - 1;
      goto LAB_00ad1613;
    }
  }
  else if ((((0.0 < dVar6) &&
            (dVar6 < (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))) ||
           ((dVar6 < 0.0 &&
            ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) < dVar6)))) &&
          (local_20 = (double)CONCAT44(param_2,param_1 + 1), param_1 + 1 == 0)) {
    iVar1 = param_2 + 1;
LAB_00ad1613:
    local_20 = (double)CONCAT44(iVar1,(uint)local_20);
  }
  if ((((ulonglong)local_20 & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)local_20 & 0xfffff00000000) != 0 || ((uint)local_20 != 0)))) {
    fVar2 = __decomp((uint)local_20,local_20._4_4_,(int *)local_c);
    fVar2 = __set_exp((double)fVar2,local_c[0] + 0x600);
    dVar6 = (double)fVar2;
    uVar5 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar4 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar3 = 0x12;
  }
  else {
    if (((local_20._4_4_ != 0x7ff00000) || ((uint)local_20 != 0)) &&
       ((local_20._4_4_ != 0xfff00000 || ((uint)local_20 != 0)))) {
      __ctrlfp();
      return (float10)local_20;
    }
    fVar2 = __decomp((uint)local_20,local_20._4_4_,(int *)local_c);
    fVar2 = __set_exp((double)fVar2,local_c[0] + -0x600);
    dVar6 = (double)fVar2;
    uVar5 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar4 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar3 = 0x11;
  }
LAB_00ad16f1:
  fVar2 = __except2(uVar3,0x26,uVar4,uVar5,dVar6,local_8);
  return fVar2;
}


//// FUNCTION FUN_00ad172d @ 00ad172d ////

bool __cdecl FUN_00ad172d(undefined4 param_1,undefined4 param_2)

{
  return (param_2._2_2_ & 0x7ff0) != 0x7ff0;
}


//// FUNCTION __isnan @ 00ad1742 ////

/* Library Function - Single Match
    __isnan
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __cdecl __isnan(double _X)

{
  if ((((_X._6_2_ & 0x7ff8) != 0x7ff0) ||
      ((((ulonglong)_X & 0x7ffff00000000) == 0 && (_X._0_4_ == 0)))) &&
     ((_X._6_2_ & 0x7ff8) != 0x7ff8)) {
    return 0;
  }
  return 1;
}


//// FUNCTION __fpclass @ 00ad1770 ////

/* Library Function - Single Match
    __fpclass
   
   Library: Visual Studio 2003 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype(_X._0_4_,(uint)((ulonglong)_X >> 0x20));
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      iVar1 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = 2;
    }
    return iVar1;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}


//// FUNCTION FUN_00ad181a @ 00ad181a ////

void __fastcall FUN_00ad181a(undefined4 param_1)

{
  __cintrindisp2(param_1,0xe9a040);
  return;
}


//// FUNCTION __wcsicmp @ 00ad1842 ////

/* Library Function - Single Match
    __wcsicmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2)

{
  wchar_t wVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  uint uVar4;
  uint uVar5;
  
  p_Var2 = __getptd();
  ptVar3 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (ptVar3 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar3 = ___updatetlocinfo();
  }
  if (ptVar3->lc_handle[2] == 0) {
    do {
      wVar1 = *_Str1;
      uVar5 = (uint)(ushort)wVar1;
      if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
        uVar5 = uVar5 + 0x20;
      }
      wVar1 = *_Str2;
      uVar4 = (uint)(ushort)wVar1;
      if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
        uVar4 = uVar4 + 0x20;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    } while (((short)uVar5 != 0) && ((short)uVar5 == (short)uVar4));
  }
  else {
    do {
      uVar5 = ___towlower_mt((int)ptVar3,(uint)(ushort)*_Str1);
      _Str1 = _Str1 + 1;
      uVar4 = ___towlower_mt((int)ptVar3,(uint)(ushort)*_Str2);
      _Str2 = _Str2 + 1;
      if ((short)uVar5 == 0) break;
    } while ((short)uVar5 == (short)uVar4);
  }
  return (uVar5 & 0xffff) - (uVar4 & 0xffff);
}


//// FUNCTION __fwrite_lk @ 00ad18ef ////

/* Library Function - Single Match
    __fwrite_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __fwrite_lk(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  uint uVar1;
  int iVar2;
  uint _Size;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = param_2 * param_3;
  if (uVar5 == 0) {
    param_3 = 0;
  }
  else {
    uVar4 = uVar5;
    if ((param_4->_flag & 0x10c) == 0) {
      local_8 = 0x1000;
    }
    else {
      local_8 = param_4->_bufsiz;
    }
    do {
      uVar3 = param_4->_flag & 0x108;
      if ((uVar3 == 0) || (uVar1 = param_4->_cnt, uVar1 == 0)) {
        if (local_8 <= uVar4) {
          if ((uVar3 != 0) && (iVar2 = __flush(param_4), iVar2 != 0)) {
LAB_00ad19e4:
            return (uVar5 - uVar4) / param_2;
          }
          uVar3 = uVar4;
          if (local_8 != 0) {
            uVar3 = uVar4 - uVar4 % local_8;
          }
          _Size = __write(param_4->_file,param_1,uVar3);
          if ((_Size == 0xffffffff) || (uVar4 = uVar4 - _Size, _Size < uVar3)) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_00ad19e4;
          }
          goto LAB_00ad19a4;
        }
        iVar2 = __flsbuf((int)*param_1,param_4);
        if (iVar2 == -1) goto LAB_00ad19e4;
        param_1 = param_1 + 1;
        local_8 = param_4->_bufsiz;
        uVar4 = uVar4 - 1;
        if ((int)local_8 < 1) {
          local_8 = 1;
        }
      }
      else {
        _Size = uVar4;
        if (uVar1 <= uVar4) {
          _Size = uVar1;
        }
        _memcpy(param_4->_ptr,param_1,_Size);
        param_4->_cnt = param_4->_cnt - _Size;
        param_4->_ptr = param_4->_ptr + _Size;
        uVar4 = uVar4 - _Size;
LAB_00ad19a4:
        param_1 = param_1 + _Size;
      }
    } while (uVar4 != 0);
  }
  return param_3;
}


//// FUNCTION _fwrite @ 00ad19f6 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2003 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  uint uVar1;
  
  __lock_file(_File);
  uVar1 = __fwrite_lk(_Str,_Size,_Count,_File);
  FUN_00ad1a38();
  return uVar1;
}


//// FUNCTION FUN_00ad1a38 @ 00ad1a38 ////

void FUN_00ad1a38(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x14));
  return;
}


//// FUNCTION __ftell_lk @ 00ad1a42 ////

/* Library Function - Single Match
    __ftell_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __ftell_lk(uint *param_1)

{
  uint _FileHandle;
  uint uVar1;
  byte bVar2;
  int *piVar3;
  uint *puVar4;
  long lVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  puVar7 = param_1;
  _FileHandle = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = 0;
  }
  local_8 = __lseek(_FileHandle,0,1);
  if (local_8 < 0) {
LAB_00ad1adf:
    local_c = -1;
  }
  else {
    uVar1 = param_1[3];
    if ((uVar1 & 0x108) == 0) {
      return local_8 - param_1[1];
    }
    pcVar6 = (char *)*param_1;
    pcVar9 = (char *)param_1[2];
    local_c = (int)pcVar6 - (int)pcVar9;
    if ((uVar1 & 3) == 0) {
      if (-1 < (char)uVar1) {
        piVar3 = FUN_00ad4b6c();
        *piVar3 = 0x16;
        goto LAB_00ad1adf;
      }
    }
    else if (((*(byte *)((&DAT_010daa80)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x24) &
              0x80) != 0) && (pcVar8 = pcVar9, pcVar9 < pcVar6)) {
      do {
        if (*pcVar8 == '\n') {
          local_c = local_c + 1;
        }
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 < (char *)*param_1);
    }
    if (local_8 != 0) {
      if ((param_1[3] & 1) != 0) {
        if (param_1[1] == 0) {
          local_c = 0;
        }
        else {
          puVar4 = (uint *)(pcVar6 + (param_1[1] - (int)pcVar9));
          iVar10 = (_FileHandle & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_010daa80)[(int)_FileHandle >> 5]) & 0x80) != 0) {
            lVar5 = __lseek(_FileHandle,0,2);
            if (lVar5 == local_8) {
              pcVar6 = (char *)param_1[2];
              pcVar9 = (char *)((int)puVar4 + (int)pcVar6);
              param_1 = puVar4;
              for (; pcVar6 < pcVar9; pcVar6 = pcVar6 + 1) {
                if (*pcVar6 == '\n') {
                  param_1 = (uint *)((int)param_1 + 1);
                }
              }
              bVar2 = *(byte *)((int)puVar7 + 0xd) & 0x20;
            }
            else {
              __lseek(_FileHandle,local_8,0);
              puVar7 = (uint *)0x200;
              if ((((uint *)0x200 < puVar4) || ((param_1[3] & 8) == 0)) ||
                 ((param_1[3] & 0x400) != 0)) {
                puVar7 = (uint *)param_1[6];
              }
              bVar2 = *(byte *)(iVar10 + 4 + (&DAT_010daa80)[(int)_FileHandle >> 5]) & 4;
              param_1 = puVar7;
            }
            puVar4 = param_1;
            if (bVar2 != 0) {
              puVar4 = (uint *)((int)param_1 + 1);
            }
          }
          param_1 = puVar4;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}


//// FUNCTION _ftell @ 00ad1ba4 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ftell
   
   Library: Visual Studio 2003 Release */

long __cdecl _ftell(FILE *_File)

{
  int iVar1;
  
  __lock_file(_File);
  iVar1 = __ftell_lk((uint *)_File);
  FUN_00ad1bdb();
  return iVar1;
}


//// FUNCTION FUN_00ad1bdb @ 00ad1bdb ////

void FUN_00ad1bdb(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}


//// FUNCTION __fread_lk @ 00ad1be5 ////

/* Library Function - Single Match
    __fread_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __fread_lk(undefined1 *param_1,uint param_2,uint param_3,FILE *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *_Size;
  undefined1 *local_8;
  
  puVar4 = (undefined1 *)(param_2 * param_3);
  if (puVar4 == (undefined1 *)0x0) {
    param_3 = 0;
  }
  else {
    puVar3 = param_1;
    param_1 = puVar4;
    if ((param_4->_flag & 0x10c) == 0) {
      local_8 = (undefined1 *)0x1000;
    }
    else {
      local_8 = (undefined1 *)param_4->_bufsiz;
    }
    do {
      if (((param_4->_flag & 0x10c) == 0) ||
         (puVar1 = (undefined1 *)param_4->_cnt, puVar1 == (undefined1 *)0x0)) {
        if (param_1 < local_8) {
          iVar2 = __filbuf(param_4);
          if (iVar2 == -1) goto LAB_00ad1cbc;
          *puVar3 = (char)iVar2;
          local_8 = (undefined1 *)param_4->_bufsiz;
          puVar3 = puVar3 + 1;
          param_1 = param_1 + -1;
        }
        else {
          puVar1 = param_1;
          if (local_8 != (undefined1 *)0x0) {
            puVar1 = param_1 + -((uint)param_1 % (uint)local_8);
          }
          iVar2 = __read(param_4->_file,puVar3,(uint)puVar1);
          if (iVar2 == 0) {
            param_4->_flag = param_4->_flag | 0x10;
LAB_00ad1cbc:
            return (uint)((int)puVar4 - (int)param_1) / param_2;
          }
          if (iVar2 == -1) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_00ad1cbc;
          }
          param_1 = param_1 + -iVar2;
          puVar3 = puVar3 + iVar2;
        }
      }
      else {
        _Size = param_1;
        if (puVar1 <= param_1) {
          _Size = puVar1;
        }
        _memcpy(puVar3,param_4->_ptr,(size_t)_Size);
        param_1 = param_1 + -(int)_Size;
        param_4->_cnt = param_4->_cnt - (int)_Size;
        param_4->_ptr = _Size + (int)param_4->_ptr;
        puVar3 = puVar3 + (int)_Size;
      }
    } while (param_1 != (undefined1 *)0x0);
  }
  return param_3;
}


//// FUNCTION _fread @ 00ad1cce ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fread
   
   Library: Visual Studio 2003 Release */

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  uint uVar1;
  
  __lock_file(_File);
  uVar1 = __fread_lk(_DstBuf,_ElementSize,_Count,_File);
  FUN_00ad1d10();
  return uVar1;
}


//// FUNCTION FUN_00ad1d10 @ 00ad1d10 ////

void FUN_00ad1d10(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x14));
  return;
}


//// FUNCTION __fseek_lk @ 00ad1d1a ////

/* Library Function - Single Match
    __fseek_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __fseek_lk(FILE *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  if (((param_1->_flag & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    piVar4 = FUN_00ad4b6c();
    *piVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1->_flag = param_1->_flag & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = __ftell_lk((uint *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    __flush(param_1);
    uVar1 = param_1->_flag;
    if ((char)uVar1 < '\0') {
      param_1->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      param_1->_bufsiz = 0x200;
    }
    lVar3 = __lseek(param_1->_file,param_2,param_3);
    iVar2 = (lVar3 != -1) - 1;
  }
  return iVar2;
}


//// FUNCTION _fseek @ 00ad1da9 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fseek
   
   Library: Visual Studio 2003 Release */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  int iVar1;
  
  __lock_file(_File);
  iVar1 = __fseek_lk(_File,_Offset,_Origin);
  FUN_00ad1de8();
  return iVar1;
}


//// FUNCTION FUN_00ad1de8 @ 00ad1de8 ////

void FUN_00ad1de8(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}


//// FUNCTION __allshr @ 00ad1e00 ////

/* Library Function - Single Match
    __allshr
   
   Library: Visual Studio */

undefined8 __fastcall __allshr(byte param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = param_2 >> 0x1f;
  if (0x3f < param_1) {
    return CONCAT44(iVar1,iVar1);
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return CONCAT44(iVar1,param_2 >> (param_1 & 0x1f));
}


//// FUNCTION _wcsrchr @ 00ad1e21 ////

/* Library Function - Single Match
    _wcsrchr
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcsrchr(wchar_t *_Str,wchar_t _Ch)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  do {
    pwVar2 = pwVar2 + -1;
    if (pwVar2 == _Str) break;
  } while (*pwVar2 != _Ch);
  return (wchar_t *)((uint)pwVar2 & ~-(uint)(*pwVar2 != _Ch));
}


//// FUNCTION ___towupper_mt @ 00ad1e51 ////

/* Library Function - Single Match
    ___towupper_mt
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___towupper_mt(int param_1,uint param_2)

{
  uint uVar1;
  size_t sVar2;
  undefined2 uVar3;
  WCHAR local_8 [2];
  
  uVar1 = 0xffff;
  if ((WCHAR)param_2 != L'\xffff') {
    if (((ushort)(WCHAR)param_2 < 0x100) &&
       (uVar1 = ___iswctype_mt(param_1,(WCHAR)param_2,2), uVar1 == 0)) {
      uVar1 = param_2 & 0xffff;
    }
    else {
      sVar2 = FUN_00ae3f6d(*(LCID *)(param_1 + 0x14),0x200,(LPCWSTR)&param_2,1,local_8,1,
                           *(UINT *)(param_1 + 4));
      uVar3 = (undefined2)(sVar2 >> 0x10);
      uVar1 = CONCAT22(uVar3,(WCHAR)param_2);
      if (sVar2 != 0) {
        uVar1 = CONCAT22(uVar3,local_8[0]);
      }
    }
  }
  return uVar1;
}


//// FUNCTION _towupper @ 00ad1eb2 ////

/* Library Function - Single Match
    _towupper
   
   Library: Visual Studio 2003 Release */

wint_t __cdecl _towupper(wint_t _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  undefined2 in_stack_00000006;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  if (ptVar2->lc_handle[2] == 0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      return _C - 0x20;
    }
    return _C;
  }
  uVar3 = ___towupper_mt((int)ptVar2,__C);
  return (wint_t)uVar3;
}


//// FUNCTION `eh_vector_copy_constructor_iterator' @ 00ad1ef5 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector copy constructor iterator'(void *,void *,unsigned int,int,void
   (__thiscall*)(void *,void *),void (__thiscall*)(void *))
   
   Library: Visual Studio 2003 Release */

void _eh_vector_copy_constructor_iterator_
               (void *param_1,void *param_2,uint param_3,int param_4,
               _func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6)

{
  void *unaff_EDI;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_4; local_20 = local_20 + 1) {
    (*param_5)(param_2,unaff_EDI);
    param_2 = (void *)((int)param_2 + param_3);
  }
  FUN_00ad1f43();
  return;
}


//// FUNCTION FUN_00ad1f43 @ 00ad1f43 ////

void FUN_00ad1f43(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + -0x1c),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x1c));
  }
  return;
}


//// FUNCTION _wcschr @ 00ad1f5b ////

/* Library Function - Single Match
    _wcschr
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcschr(wchar_t *_Str,wchar_t _Ch)

{
  while( true ) {
    if (*_Str == L'\0') {
      if (_Ch != L'\0') {
        _Str = (wchar_t *)0x0;
      }
      return _Str;
    }
    if (*_Str == _Ch) break;
    _Str = _Str + 1;
  }
  return _Str;
}


//// FUNCTION _vsprintf @ 00ad1f7d ////

/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  FILE local_24;
  
  local_24._cnt = 0x7fffffff;
  local_24._flag = 0x42;
  local_24._base = _Dest;
  local_24._ptr = _Dest;
  iVar1 = FUN_00ae1640(&local_24,(byte *)_Format,(wchar_t *)_Args);
  if (_Dest != (char *)0x0) {
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00ad1fd4 @ 00ad1fd4 ////

void __cdecl FUN_00ad1fd4(byte *param_1,wchar_t *param_2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  local_24 = 0;
  local_20 = 0x7fffffff;
  local_18 = 0x42;
  FUN_00ae1640(&local_24,param_1,param_2);
  return;
}


//// FUNCTION __allmul @ 00ad2010 ////

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2003 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


//// FUNCTION _isalpha @ 00ad2044 ////

/* Library Function - Single Match
    _isalpha
   
   Library: Visual Studio 2003 Release */

int __cdecl _isalpha(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,0x103);
    return uVar3;
  }
  return *(ushort *)(ptVar2->lc_category[0].locale + _C * 2) & 0x103;
}


//// FUNCTION _isupper @ 00ad2083 ////

/* Library Function - Single Match
    _isupper
   
   Library: Visual Studio 2003 Release */

int __cdecl _isupper(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,1);
    return uVar3;
  }
  return (byte)ptVar2->lc_category[0].locale[_C * 2] & 1;
}


//// FUNCTION _islower @ 00ad20bd ////

/* Library Function - Single Match
    _islower
   
   Library: Visual Studio 2003 Release */

int __cdecl _islower(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,2);
    return uVar3;
  }
  return (byte)ptVar2->lc_category[0].locale[_C * 2] & 2;
}


//// FUNCTION _isdigit @ 00ad20f7 ////

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2003 Release */

int __cdecl _isdigit(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,4);
    return uVar3;
  }
  return (byte)ptVar2->lc_category[0].locale[_C * 2] & 4;
}


//// FUNCTION _isxdigit @ 00ad2131 ////

/* Library Function - Single Match
    _isxdigit
   
   Library: Visual Studio 2003 Release */

int __cdecl _isxdigit(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,0x80);
    return uVar3;
  }
  return (byte)ptVar2->lc_category[0].locale[_C * 2] & 0x80;
}


//// FUNCTION _isspace @ 00ad2170 ////

/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2003 Release */

int __cdecl _isspace(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,8);
    return uVar3;
  }
  return (byte)ptVar2->lc_category[0].locale[_C * 2] & 8;
}


//// FUNCTION _isalnum @ 00ad21e4 ////

/* Library Function - Single Match
    _isalnum
   
   Library: Visual Studio 2003 Release */

int __cdecl _isalnum(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,0x107);
    return uVar3;
  }
  return *(ushort *)(ptVar2->lc_category[0].locale + _C * 2) & 0x107;
}


//// FUNCTION _isprint @ 00ad2223 ////

/* Library Function - Single Match
    _isprint
   
   Library: Visual Studio 2003 Release */

int __cdecl _isprint(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,0x157);
    return uVar3;
  }
  return *(ushort *)(ptVar2->lc_category[0].locale + _C * 2) & 0x157;
}


//// FUNCTION _iscntrl @ 00ad22a1 ////

/* Library Function - Single Match
    _iscntrl
   
   Library: Visual Studio 2003 Release */

int __cdecl _iscntrl(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (1 < *(int *)&ptVar2->lc_id[0].wCodePage) {
    uVar3 = ___isctype_mt(this,(int)ptVar2,_C,0x20);
    return uVar3;
  }
  return (byte)ptVar2->lc_category[0].locale[_C * 2] & 0x20;
}


//// FUNCTION _strtod @ 00ad2324 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _strtod
   
   Library: Visual Studio 2003 Release */

double __cdecl _strtod(char *_Str,char **_EndPtr)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  _locale_t _Locale;
  FLT p_Var4;
  int *piVar5;
  byte *_Str_00;
  _flt local_24;
  double local_c;
  
  bVar1 = *_Str;
  _Str_00 = (byte *)_Str;
  while (iVar3 = _isspace((uint)bVar1), iVar3 != 0) {
    _Str_00 = _Str_00 + 1;
    bVar1 = *_Str_00;
  }
  _Locale = (_locale_t)_strlen((char *)_Str_00);
  p_Var4 = __fltin2(&local_24,(char *)_Str_00,_Locale);
  if (_EndPtr != (char **)0x0) {
    *_EndPtr = (char *)(_Str_00 + p_Var4->nbytes);
  }
  uVar2 = p_Var4->flags;
  if ((uVar2 & 0x240) == 0) {
    if ((uVar2 & 0x81) == 0) {
      if ((uVar2 & 0x100) == 0) {
        return p_Var4->dval;
      }
      local_c = 0.0;
    }
    else {
      local_c = _DAT_00e9abf0;
      if (*_Str_00 == 0x2d) {
        local_c = -_DAT_00e9abf0;
      }
    }
    piVar5 = FUN_00ad4b6c();
    *piVar5 = 0x22;
  }
  else {
    local_c = 0.0;
    if (_EndPtr != (char **)0x0) {
      *_EndPtr = _Str;
    }
  }
  return local_c;
}


//// FUNCTION __amsg_exit @ 00ad23b2 ////

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_010cbc18 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  (*(code *)PTR___exit_00e9a090)(0xff);
  return;
}


//// FUNCTION fast_error_exit @ 00ad23d7 ////

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_010cbc18 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
                    /* WARNING: Subroutine does not return */
  ___crtExitProcess(0xff);
}


//// FUNCTION entry @ 00ad2451 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int entry(void)

{
  HMODULE pHVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 uVar5;
  _OSVERSIONINFOA local_114;
  _STARTUPINFOA local_74;
  int local_30;
  int local_2c;
  byte *local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7e098;
  uStack_c = 0xad245d;
  local_114.szCSDVersion[0x7c] = 'i';
  local_114.szCSDVersion[0x7d] = '$';
  local_114.szCSDVersion[0x7e] = -0x53;
  local_114.szCSDVersion[0x7f] = '\0';
  local_1c = (undefined1 *)&local_114;
  local_114.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_114);
  DAT_010cbbc8 = local_114.dwPlatformId;
  DAT_010cbbd4 = local_114.dwMajorVersion;
  _DAT_010cbbd8 = local_114.dwMinorVersion;
  _DAT_010cbbcc = local_114.dwBuildNumber & 0x7fff;
  if (local_114.dwPlatformId != 2) {
    _DAT_010cbbcc = _DAT_010cbbcc | 0x8000;
  }
  _DAT_010cbbd0 = local_114.dwMajorVersion * 0x100 + local_114.dwMinorVersion;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar1->unused == 0x5a4d) &&
     (piVar4 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar4 == 0x4550)) {
    if ((short)piVar4[6] == 0x10b) {
      if (0xe < (uint)piVar4[0x1d]) {
        iVar2 = piVar4[0x3a];
        goto LAB_00ad2512;
      }
    }
    else if (((short)piVar4[6] == 0x20b) && (0xe < (uint)piVar4[0x21])) {
      iVar2 = piVar4[0x3e];
LAB_00ad2512:
      local_20 = (uint)(iVar2 != 0);
      goto LAB_00ad2518;
    }
  }
  local_20 = 0;
LAB_00ad2518:
  iVar2 = __heap_init();
  if (iVar2 == 0) {
    fast_error_exit(0x1c);
  }
  iVar2 = __mtinit();
  if (iVar2 == 0) {
    fast_error_exit(0x10);
  }
  __RTC_Initialize();
  local_8 = (undefined *)0x0;
  iVar2 = __ioinit();
  if (iVar2 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_010dae00 = GetCommandLineA();
  DAT_010cbc10 = FUN_00ae72d8();
  iVar2 = __setargv();
  if (iVar2 < 0) {
    __amsg_exit(8);
  }
  iVar2 = FUN_00ae7003();
  if (iVar2 < 0) {
    __amsg_exit(9);
  }
  local_2c = __cinit(1);
  if (local_2c != 0) {
    __amsg_exit(local_2c);
  }
  local_74.dwFlags = 0;
  GetStartupInfoA(&local_74);
  pbVar3 = __wincmdln();
  uVar5 = 0;
  local_24 = pbVar3;
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  iVar2 = WinMain((HINSTANCE)pHVar1,uVar5,pbVar3);
  local_30 = iVar2;
  if (local_20 == 0) {
                    /* WARNING: Subroutine does not return */
    _exit(iVar2);
  }
  __cexit();
  return iVar2;
}


//// FUNCTION report_failure @ 00ad2626 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    _report_failure
   
   Library: Visual Studio 2003 Release */

void __cdecl report_failure(void)

{
  ___security_error_handler(1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(3);
}


//// FUNCTION __security_check_cookie @ 00ad2657 ////

/* WARNING: This is an inlined function */

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_00e9a098) {
    return;
  }
  report_failure();
  return;
}


//// FUNCTION _sscanf @ 00ad2665 ////

/* Library Function - Single Match
    _sscanf
   
   Library: Visual Studio 2003 Release */

int __cdecl _sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  FILE local_24;
  
  local_24._flag = 0x49;
  local_24._base = _Src;
  local_24._ptr = _Src;
  local_24._cnt = _strlen(_Src);
  iVar1 = FUN_00ae762c(&local_24,(byte *)_Format,(undefined4 *)&stack0x0000000c);
  return iVar1;
}


//// FUNCTION _strncat @ 00ad26a0 ////

/* Library Function - Single Match
    _strncat
   
   Library: Visual Studio */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar5 & 3) == 0) goto LAB_00ad26cc;
    uVar4 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_00ad26fd;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar6 = (uint *)((int)puVar6 + 2);
      goto LAB_00ad270f;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_00ad26cc:
    do {
      puVar6 = puVar5;
      puVar5 = puVar6 + 1;
    } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar6;
    if ((char)uVar4 == '\0') goto LAB_00ad270f;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      goto LAB_00ad270f;
    }
  }
LAB_00ad26fd:
  puVar6 = (uint *)((int)puVar5 + -1);
LAB_00ad270f:
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      uVar4 = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_00ad276a;
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_00ad2760;
    } while (((uint)_Source & 3) != 0);
    uVar3 = _Count >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = _Count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar3 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar6 = (byte)uVar3;
        puVar6 = (uint *)((int)puVar6 + 1);
        if ((byte)uVar3 == 0) {
          return _Dest;
        }
      }
LAB_00ad2760:
      *(byte *)puVar6 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_00ad276a:
        *(byte *)puVar6 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar6 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar6 = (short)uVar4;
        *(byte *)((int)puVar6 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar6 = uVar4;
        return _Dest;
      }
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}


//// FUNCTION xtoa @ 00ad27d5 ////

/* Library Function - Single Match
    _xtoa
   
   Library: Visual Studio 2003 Release */

void __cdecl xtoa(uint param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  char *in_ECX;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = in_ECX;
  if (param_2 != 0) {
    *in_ECX = '-';
    in_ECX = in_ECX + 1;
    in_EAX = -in_EAX;
    pcVar2 = in_ECX;
  }
  do {
    pcVar3 = pcVar2;
    uVar1 = (ulonglong)in_EAX;
    in_EAX = in_EAX / param_1;
    cVar4 = (char)(uVar1 % (ulonglong)param_1);
    if ((uint)(uVar1 % (ulonglong)param_1) < 10) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *pcVar3 = cVar4;
    pcVar2 = pcVar3 + 1;
  } while (in_EAX != 0);
  pcVar3[1] = '\0';
  do {
    cVar4 = *pcVar3;
    *pcVar3 = *in_ECX;
    pcVar3 = pcVar3 + -1;
    *in_ECX = cVar4;
    in_ECX = in_ECX + 1;
  } while (in_ECX < pcVar3);
  return;
}


//// FUNCTION __itoa @ 00ad2813 ////

/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2003 Release */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  int iVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar1 = 1;
    _Radix = 10;
  }
  else {
    iVar1 = 0;
  }
  xtoa(_Radix,iVar1);
  return _Dest;
}


//// FUNCTION __ltoa @ 00ad283d ////

/* Library Function - Single Match
    __ltoa
   
   Library: Visual Studio 2003 Release */

char * __cdecl __ltoa(long _Value,char *_Dest,int _Radix)

{
  int iVar1;
  
  iVar1 = 0;
  if ((_Radix == 10) && (_Value < 0)) {
    iVar1 = 1;
  }
  xtoa(_Radix,iVar1);
  return _Dest;
}


//// FUNCTION __ultoa @ 00ad2864 ////

/* Library Function - Single Match
    __ultoa
   
   Library: Visual Studio 2003 Release */

char * __cdecl __ultoa(ulong _Value,char *_Dest,int _Radix)

{
  xtoa(_Radix,0);
  return _Dest;
}


//// FUNCTION FID_conflict:@x64toa@20 @ 00ad287e ////

/* Library Function - Multiple Matches With Different Base Names
    @x64toa@20
    _x64toa@20
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void FID_conflict__x64toa_20(int param_1,int param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char *in_EAX;
  char cVar2;
  uint extraout_ECX;
  char *pcVar3;
  bool bVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    *in_EAX = '-';
    in_EAX = in_EAX + 1;
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (uint)bVar4);
  }
  lVar5 = CONCAT44(param_2,param_1);
  pcVar1 = in_EAX;
  do {
    pcVar3 = pcVar1;
    lVar5 = __aulldvrm((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),param_3,0);
    if (extraout_ECX < 10) {
      cVar2 = (char)extraout_ECX + '0';
    }
    else {
      cVar2 = (char)extraout_ECX + 'W';
    }
    *pcVar3 = cVar2;
    pcVar1 = pcVar3 + 1;
  } while (lVar5 != 0);
  pcVar3[1] = '\0';
  do {
    cVar2 = *pcVar3;
    *pcVar3 = *in_EAX;
    pcVar3 = pcVar3 + -1;
    *in_EAX = cVar2;
    in_EAX = in_EAX + 1;
  } while (in_EAX < pcVar3);
  return;
}


//// FUNCTION __i64toa @ 00ad28eb ////

/* Library Function - Single Match
    __i64toa
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __cdecl __i64toa(longlong _Val,char *_DstBuf,int _Radix)

{
  int iVar1;
  
  iVar1 = 0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    iVar1 = 1;
  }
  FID_conflict__x64toa_20((int)_Val,_Val._4_4_,_Radix,iVar1);
  return _DstBuf;
}


//// FUNCTION __ui64toa @ 00ad291c ////

/* Library Function - Single Match
    __ui64toa
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __cdecl __ui64toa(ulonglong _Val,char *_DstBuf,int _Radix)

{
  FID_conflict__x64toa_20((int)_Val,_Val._4_4_,_Radix,0);
  return _DstBuf;
}


//// FUNCTION __allshl @ 00ad2940 ////

/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}


//// FUNCTION __seh_longjmp_unwind@4 @ 00ad2a4e ////

/* Library Function - Single Match
    __seh_longjmp_unwind@4
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __seh_longjmp_unwind_4(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


//// FUNCTION __stricmp @ 00ad2a69 ////

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  void *pvVar4;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (ptVar2->lc_handle[2] == 0) {
    iVar3 = ___ascii_stricmp(_Str1,_Str2);
  }
  else {
    do {
      pvVar4 = (void *)___tolower_mt(this,(int)ptVar2,(uint)(byte)*_Str1);
      _Str1 = _Str1 + 1;
      this = (void *)___tolower_mt(this_00,(int)ptVar2,(uint)(byte)*_Str2);
      _Str2 = _Str2 + 1;
      if (pvVar4 == (void *)0x0) break;
    } while (pvVar4 == this);
    iVar3 = (int)pvVar4 - (int)this;
  }
  return iVar3;
}


//// FUNCTION FUN_00ad2ae0 @ 00ad2ae0 ////

void FUN_00ad2ae0(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_00ae05a8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_00ad2afd(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


//// FUNCTION FUN_00ad2afd @ 00ad2afd ////

void __cdecl FUN_00ad2afd(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      FUN_00ae054c();
    }
LAB_00ad2b8c:
    if (DAT_010cbbb8 == 0) {
      __startOneArgErrorHandling(&DAT_00e9a0a0,0xe,in_FPUControlWord,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_00ae0535();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00ad2b8c;
    if (DAT_010cbbb8 == 0) {
      __math_exit(&DAT_00e9a0a0,0xe,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}


//// FUNCTION _fgets @ 00ad2bab ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fgets
   
   Library: Visual Studio 2003 Release */

char * __cdecl _fgets(char *_Buf,int _MaxCount,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  char *local_20;
  
  local_20 = _Buf;
  if (_MaxCount < 1) {
    local_20 = (char *)0x0;
  }
  else {
    __lock_file(_File);
    pcVar3 = _Buf;
    do {
      _MaxCount = _MaxCount + -1;
      if (_MaxCount == 0) break;
      piVar1 = &_File->_cnt;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar2 = __filbuf(_File);
      }
      else {
        uVar2 = (uint)(byte)*_File->_ptr;
        _File->_ptr = _File->_ptr + 1;
      }
      if (uVar2 == 0xffffffff) {
        if (pcVar3 == _Buf) {
          local_20 = (char *)0x0;
          goto LAB_00ad2c14;
        }
        break;
      }
      *pcVar3 = (char)uVar2;
      pcVar3 = pcVar3 + 1;
    } while ((char)uVar2 != '\n');
    *pcVar3 = '\0';
LAB_00ad2c14:
    FUN_00ad2c29();
  }
  return local_20;
}


//// FUNCTION FUN_00ad2c29 @ 00ad2c29 ////

void FUN_00ad2c29(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}


//// FUNCTION _bsearch @ 00ad2c31 ////

/* Library Function - Single Match
    _bsearch
   
   Library: Visual Studio 2003 Release */

void * __cdecl
_bsearch(void *_Key,void *_Base,size_t _NumOfElements,size_t _SizeOfElements,
        _PtFuncCompare *_PtFuncCompare)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  void *unaff_EDI;
  void *pvVar5;
  
  pvVar5 = (void *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
  if (_Base <= pvVar5) {
    do {
      uVar4 = _NumOfElements >> 1;
      if (uVar4 == 0) {
        if (_NumOfElements == 0) {
          return (void *)0x0;
        }
        iVar3 = (*_PtFuncCompare)(_Key,_Base,unaff_EDI);
        return (void *)(~-(uint)(iVar3 != 0) & (uint)_Base);
      }
      uVar1 = uVar4;
      if ((_NumOfElements & 1) == 0) {
        uVar1 = uVar4 - 1;
      }
      pvVar2 = (void *)(uVar1 * _SizeOfElements + (int)_Base);
      iVar3 = (*_PtFuncCompare)(_Key,pvVar2,unaff_EDI);
      if (iVar3 == 0) {
        return pvVar2;
      }
      if (iVar3 < 0) {
        pvVar5 = (void *)((int)pvVar2 - _SizeOfElements);
        if ((_NumOfElements & 1) == 0) {
          uVar4 = uVar4 - 1;
        }
      }
      else {
        _Base = (void *)((int)pvVar2 + _SizeOfElements);
      }
      _NumOfElements = uVar4;
    } while (_Base <= pvVar5);
  }
  return (void *)0x0;
}


//// FUNCTION shortsort @ 00ad2ce0 ////

/* Library Function - Single Match
    _shortsort
   
   Library: Visual Studio 2003 Release */

void __cdecl shortsort(undefined1 *param_1,int param_2,undefined *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *in_EAX;
  int iVar3;
  undefined1 *puVar4;
  
  for (; puVar2 = param_1, puVar4 = param_1, param_1 < in_EAX; in_EAX = in_EAX + -param_2) {
    while (puVar4 = puVar4 + param_2, puVar4 <= in_EAX) {
      iVar3 = (*(code *)param_3)(puVar4,puVar2);
      if (0 < iVar3) {
        puVar2 = puVar4;
      }
    }
    if ((puVar2 != in_EAX) && (param_2 != 0)) {
      puVar4 = in_EAX;
      iVar3 = param_2;
      do {
        uVar1 = puVar4[(int)puVar2 - (int)in_EAX];
        puVar4[(int)puVar2 - (int)in_EAX] = *puVar4;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}


//// FUNCTION _qsort @ 00ad2d50 ////

/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2003 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *unaff_EBP;
  undefined1 *puVar7;
  void *unaff_EDI;
  code *in_stack_0000001c;
  code *in_stack_00000028;
  uint in_stack_00000030;
  code *in_stack_00000034;
  undefined1 *puVar8;
  void *pvVar9;
  undefined1 *in_stack_ffffff0c;
  undefined1 *in_stack_ffffff10;
  void *in_stack_ffffff14;
  undefined1 *puStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  uint uStack_d0;
  undefined4 auStack_78 [30];
  
  if ((_NumOfElements < 2) || (_SizeOfElements == 0)) {
    return;
  }
  pvVar9 = (void *)0x0;
  puVar6 = (undefined1 *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_00ad2d95:
  while (uVar2 = (uint)((int)puVar6 - (int)_Base) / _SizeOfElements + 1, 8 < uVar2) {
    puVar3 = (undefined1 *)((int)_Base + (uVar2 >> 1) * _SizeOfElements);
    iVar4 = (*_PtFuncCompare)(_Base,puVar3,unaff_EDI);
    puVar7 = _Base;
    if ((0 < iVar4) && (_Base != puVar3)) {
      puVar5 = puVar3;
      uVar2 = _SizeOfElements;
      do {
        uVar1 = puVar5[(int)_Base - (int)puVar3];
        puVar5[(int)_Base - (int)puVar3] = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 - 1;
        puVar7 = in_stack_ffffff0c;
        puVar6 = in_stack_ffffff10;
      } while (uVar2 != 0);
    }
    unaff_EDI = (void *)0xad2e23;
    iVar4 = (*in_stack_0000001c)(puVar7,puVar6,unaff_EBP);
    puVar5 = puVar6;
    if ((0 < iVar4) && (puVar7 != puVar6)) {
      iVar4 = (int)puVar7 - (int)puVar6;
      uVar2 = _SizeOfElements;
      do {
        uVar1 = puVar6[iVar4];
        puVar6[iVar4] = *puVar6;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        uVar2 = uVar2 - 1;
        puVar7 = puStack_e8;
        puVar5 = puStack_e4;
      } while (uVar2 != 0);
    }
    unaff_EBP = (void *)0xad2e55;
    puVar8 = puVar3;
    puVar6 = puVar5;
    iVar4 = (*in_stack_00000028)(puVar3,puVar5,pvVar9);
    _Base = puVar7;
    puVar7 = puStack_d8;
    if ((0 < iVar4) && (puVar3 != puVar5)) {
      iVar4 = (int)puVar3 - (int)puVar5;
      uVar2 = _SizeOfElements;
      do {
        uVar1 = puVar5[iVar4];
        puVar5[iVar4] = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 - 1;
        _Base = puStack_dc;
      } while (uVar2 != 0);
    }
LAB_00ad2e80:
    if (_Base < puVar3) {
      do {
        _Base = (void *)((int)_Base + _SizeOfElements);
        if (puVar3 <= _Base) goto LAB_00ad2ea0;
        pvVar9 = (void *)0xad2e93;
        in_stack_ffffff0c = _Base;
        in_stack_ffffff10 = puVar3;
        iVar4 = (*in_stack_00000034)(_Base,puVar3,in_stack_ffffff14);
      } while (iVar4 < 1);
      if (puVar3 <= _Base) goto LAB_00ad2ea0;
    }
    else {
LAB_00ad2ea0:
      do {
        _Base = (void *)((int)_Base + _SizeOfElements);
        if (puStack_d8 < _Base) break;
        pvVar9 = (void *)0xad2eb3;
        in_stack_ffffff0c = _Base;
        in_stack_ffffff10 = puVar3;
        iVar4 = (*in_stack_00000034)(_Base,puVar3,in_stack_ffffff14);
      } while (iVar4 < 1);
    }
    do {
      puVar7 = puVar7 + -_SizeOfElements;
      if (puVar7 <= puVar3) break;
      pvVar9 = (void *)0xad2ecf;
      in_stack_ffffff0c = puVar7;
      in_stack_ffffff10 = puVar3;
      iVar4 = (*in_stack_00000034)(puVar7,puVar3,in_stack_ffffff14);
    } while (0 < iVar4);
    if (_Base <= puVar7) {
      if (_Base != puVar7) {
        uStack_d0 = in_stack_00000030;
        puVar5 = puVar7;
        do {
          uVar1 = puVar5[(int)_Base - (int)puVar7];
          puVar5[(int)_Base - (int)puVar7] = *puVar5;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
          uStack_d0 = uStack_d0 - 1;
          _SizeOfElements = in_stack_00000030;
        } while (uStack_d0 != 0);
      }
      if (puVar3 == puVar7) {
        puVar3 = _Base;
      }
      goto LAB_00ad2e80;
    }
    puVar7 = puVar7 + _SizeOfElements;
    if (puVar3 < puVar7) {
      do {
        puVar7 = puVar7 + -_SizeOfElements;
        if (puVar7 <= puVar3) goto LAB_00ad2f40;
        pvVar9 = (void *)0xad2f31;
        in_stack_ffffff0c = puVar7;
        in_stack_ffffff10 = puVar3;
        iVar4 = (*in_stack_00000034)(puVar7,puVar3,in_stack_ffffff14);
      } while (iVar4 == 0);
      if (puVar7 <= puVar3) goto LAB_00ad2f40;
    }
    else {
LAB_00ad2f40:
      do {
        puVar7 = puVar7 + -_SizeOfElements;
        if (puVar7 <= puStack_dc) break;
        pvVar9 = (void *)0xad2f53;
        in_stack_ffffff0c = puVar7;
        in_stack_ffffff10 = puVar3;
        iVar4 = (*in_stack_00000034)(puVar7,puVar3,in_stack_ffffff14);
      } while (iVar4 == 0);
    }
    if ((int)puVar7 - (int)puStack_dc < (int)puVar6 - (int)_Base) goto LAB_00ad2f9b;
    if (puStack_dc < puVar7) {
      *(undefined1 **)(&stack0xffffff10 + (int)pvVar9 * 4) = puStack_dc;
      auStack_78[(int)pvVar9] = puVar7;
      pvVar9 = (void *)((int)pvVar9 + 1);
    }
    if (puVar6 <= _Base) goto LAB_00ad2db7;
  }
  shortsort(_Base,_SizeOfElements,_PtFuncCompare);
  goto LAB_00ad2db7;
LAB_00ad2f9b:
  if (_Base < puVar6) {
    *(void **)(&stack0xffffff10 + (int)pvVar9 * 4) = _Base;
    auStack_78[(int)pvVar9] = puVar6;
    pvVar9 = (void *)((int)pvVar9 + 1);
  }
  _Base = puVar8;
  puVar6 = puVar7;
  if (puVar7 <= puStack_dc) {
LAB_00ad2db7:
    pvVar9 = (void *)((int)pvVar9 + -1);
    if ((int)pvVar9 < 0) {
      return;
    }
    _Base = *(undefined1 **)(&stack0xffffff10 + (int)pvVar9 * 4);
    puVar6 = (undefined1 *)auStack_78[(int)pvVar9];
  }
  goto LAB_00ad2d95;
}


//// FUNCTION __strnicmp @ 00ad2fd3 ////

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2003 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  int iVar3;
  void *pvVar4;
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else if (ptVar2->lc_handle[2] == 0) {
    iVar3 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
  }
  else {
    do {
      pvVar4 = (void *)___tolower_mt(this,(int)ptVar2,(uint)(byte)*_Str1);
      _Str1 = _Str1 + 1;
      this = (void *)___tolower_mt(this_00,(int)ptVar2,(uint)(byte)*_Str2);
      _Str2 = _Str2 + 1;
      _MaxCount = _MaxCount - 1;
      if ((_MaxCount == 0) || (pvVar4 == (void *)0x0)) break;
    } while (pvVar4 == this);
    iVar3 = (int)pvVar4 - (int)this;
  }
  return iVar3;
}


//// FUNCTION FUN_00ad3052 @ 00ad3052 ////

undefined4 __cdecl FUN_00ad3052(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  WINBOOL WVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 != 0xffffffff) {
    if ((param_2 & 0x80) == 0) {
      DVar1 = DVar1 | 1;
    }
    else {
      DVar1 = DVar1 & 0xfffffffe;
    }
    WVar2 = SetFileAttributesA(param_1,DVar1);
    if (WVar2 != 0) {
      return 0;
    }
  }
  DVar1 = GetLastError();
  __dosmaperr(DVar1);
  return 0xffffffff;
}


//// FUNCTION FUN_00ad3093 @ 00ad3093 ////

undefined4 __cdecl FUN_00ad3093(LPCWSTR param_1,byte param_2)

{
  DWORD DVar1;
  WINBOOL WVar2;
  
  DVar1 = GetFileAttributesW(param_1);
  if (DVar1 != 0xffffffff) {
    if ((param_2 & 0x80) == 0) {
      DVar1 = DVar1 | 1;
    }
    else {
      DVar1 = DVar1 & 0xfffffffe;
    }
    WVar2 = SetFileAttributesW(param_1,DVar1);
    if (WVar2 != 0) {
      return 0;
    }
  }
  DVar1 = GetLastError();
  __dosmaperr(DVar1);
  return 0xffffffff;
}


//// FUNCTION FUN_00ad30d4 @ 00ad30d4 ////

undefined4 __cdecl FUN_00ad30d4(LPCSTR param_1)

{
  WINBOOL WVar1;
  ulong uVar2;
  
  WVar1 = DeleteFileA(param_1);
  if (WVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION __abstract_cw @ 00ad312e ////

/* Library Function - Single Match
    __abstract_cw
   
   Library: Visual Studio 2003 Release */

uint __abstract_cw(void)

{
  uint uVar1;
  ushort uVar2;
  ushort unaff_BX;
  
  uVar1 = 0;
  if ((unaff_BX & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((unaff_BX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_BX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_BX & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((unaff_BX & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((unaff_BX & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = unaff_BX & 0xc00;
  if ((unaff_BX & 0xc00) != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((unaff_BX & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((unaff_BX & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((unaff_BX & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}


//// FUNCTION __hw_cw @ 00ad31c0 ////

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2003 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


//// FUNCTION __control87 @ 00ad32a8 ////

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2003 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __abstract_cw();
  __hw_cw();
  return uVar1 & ~_Mask | _NewValue & _Mask;
}


//// FUNCTION __controlfp @ 00ad32da ////

/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Release */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}


//// FUNCTION __wfsopen @ 00ad334e ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wfsopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl __wfsopen(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag)

{
  FILE *pFVar1;
  int *piVar2;
  
  pFVar1 = (FILE *)FUN_00ae480e();
  if (pFVar1 == (FILE *)0x0) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x18;
    pFVar1 = (FILE *)0x0;
  }
  else {
    pFVar1 = __wopenfile(_Filename,_Mode,_ShFlag,pFVar1);
    FUN_00ad33a0();
  }
  return pFVar1;
}


//// FUNCTION FUN_00ad33a0 @ 00ad33a0 ////

void FUN_00ad33a0(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}


//// FUNCTION FUN_00ad33aa @ 00ad33aa ////

void __cdecl FUN_00ad33aa(wchar_t *param_1,wchar_t *param_2)

{
  __wfsopen(param_1,param_2,0x40);
  return;
}


//// FUNCTION _wcsncmp @ 00ad33bd ////

/* Library Function - Single Match
    _wcsncmp
   
   Library: Visual Studio 2003 Release */

int __cdecl _wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  if (_MaxCount != 0) {
    for (; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
        _Str1 = _Str1 + 1) {
      _Str2 = _Str2 + 1;
    }
    return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
  }
  return 0;
}


//// FUNCTION __wgetdcwd_lk @ 00ad33f2 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __wgetdcwd_lk
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl __wgetdcwd_lk(uint param_1,wchar_t *param_2,uint param_3)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  uint uVar5;
  wchar_t *pwVar6;
  LPWSTR local_21c;
  WCHAR local_218 [260];
  WCHAR local_10 [4];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if (param_1 == 0) {
    DVar4 = GetCurrentDirectoryW(0x104,local_218);
  }
  else {
    iVar1 = __validdrive(param_1);
    if (iVar1 == 0) {
      puVar2 = FUN_00ad4b75();
      *puVar2 = 0xf;
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 0xd;
      return (wchar_t *)0x0;
    }
    local_10[3] = 0;
    local_10[0] = (short)param_1 + L'@';
    local_10[1] = 0x3a;
    local_10[2] = 0x2e;
    DVar4 = GetFullPathNameW(local_10,0x104,local_218,&local_21c);
  }
  if ((DVar4 != 0) && (uVar5 = DVar4 + 1, uVar5 < 0x105)) {
    if (param_2 == (wchar_t *)0x0) {
      if ((int)uVar5 <= (int)param_3) {
        uVar5 = param_3;
      }
      param_2 = _malloc(uVar5 * 2);
      if (param_2 != (wchar_t *)0x0) {
LAB_00ad34d0:
        pwVar6 = _wcscpy(param_2,local_218);
        return pwVar6;
      }
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 0xc;
    }
    else {
      if ((int)uVar5 <= (int)param_3) goto LAB_00ad34d0;
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 0x22;
    }
  }
  return (wchar_t *)0x0;
}


//// FUNCTION __wgetcwd @ 00ad34e4 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wgetcwd
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl __wgetcwd(wchar_t *_DstBuf,int _SizeInWords)

{
  wchar_t *pwVar1;
  
  __lock(7);
  pwVar1 = __wgetdcwd_lk(0,_DstBuf,_SizeInWords);
  FUN_00ad3521();
  return pwVar1;
}


//// FUNCTION FUN_00ad3521 @ 00ad3521 ////

void FUN_00ad3521(void)

{
  FUN_00ad700c(7);
  return;
}


//// FUNCTION __fpcvt @ 00ad3571 ////

/* Library Function - Single Match
    __fpcvt
   
   Library: Visual Studio 2003 Release */

char * __cdecl __fpcvt(int *param_1,size_t param_2,int *param_3,uint *param_4)

{
  _ptiddata p_Var1;
  char *pcVar2;
  size_t _SizeInBytes;
  STRFLT unaff_EDI;
  
  p_Var1 = __getptd();
  if (p_Var1->_cvtbuf == (char *)0x0) {
    pcVar2 = _malloc(0x15d);
    p_Var1->_cvtbuf = pcVar2;
    if (pcVar2 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  pcVar2 = p_Var1->_cvtbuf;
  _SizeInBytes = 0x15b;
  if ((int)param_2 < 0x15c) {
    _SizeInBytes = param_2;
  }
  __fptostr(pcVar2,_SizeInBytes,(int)param_1,unaff_EDI);
  *param_4 = (uint)(*param_1 == 0x2d);
  *param_3 = param_1[1];
  return pcVar2;
}


//// FUNCTION __fcvt @ 00ad35ce ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __fcvt
   
   Library: Visual Studio 2003 Release */

char * __cdecl __fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign)

{
  STRFLT p_Var1;
  char *pcVar2;
  size_t in_stack_ffffffd0;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  p_Var1 = __fltout2((_CRT_DOUBLE)_Val,(STRFLT)&stack0xffffffd0,local_20,in_stack_ffffffd0);
  pcVar2 = __fpcvt(&p_Var1->sign,p_Var1->decpt + _NumOfDec,_PtDec,(uint *)_PtSign);
  return pcVar2;
}


//// FUNCTION __ecvt @ 00ad360f ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __ecvt
   
   Library: Visual Studio 2003 Release */

char * __cdecl __ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign)

{
  STRFLT p_Var1;
  char *pcVar2;
  size_t unaff_ESI;
  _strflt local_30;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  p_Var1 = __fltout2((_CRT_DOUBLE)_Val,&local_30,local_20,unaff_ESI);
  pcVar2 = __fpcvt(&p_Var1->sign,_NumOfDigits,_PtDec,(uint *)_PtSign);
  if (pcVar2[_NumOfDigits] != '\0') {
    pcVar2[_NumOfDigits] = '\0';
  }
  return pcVar2;
}


//// FUNCTION wcstoxl @ 00ad365a ////

/* Library Function - Single Match
    _wcstoxl
   
   Library: Visual Studio 2003 Release */

uint __cdecl wcstoxl(WCHAR *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  WCHAR WVar1;
  WCHAR *pWVar2;
  _ptiddata p_Var3;
  pthreadlocinfo ptVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  WCHAR *pWVar10;
  ushort uVar11;
  uint local_8;
  
  p_Var3 = __getptd();
  ptVar4 = (pthreadlocinfo)p_Var3->_tfpecode;
  if (ptVar4 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar4 = ___updatetlocinfo();
  }
  local_8 = 0;
  WVar1 = *param_1;
  pWVar2 = param_1;
  while( true ) {
    pWVar10 = pWVar2 + 1;
    uVar5 = ___iswctype_mt((int)ptVar4,WVar1,8);
    if (uVar5 == 0) break;
    WVar1 = *pWVar10;
    pWVar2 = pWVar10;
  }
  if (WVar1 == L'-') {
    param_4 = param_4 | 2;
LAB_00ad36b3:
    WVar1 = *pWVar10;
    pWVar10 = pWVar2 + 2;
  }
  else if (WVar1 == L'+') goto LAB_00ad36b3;
  uVar5 = (uint)(ushort)WVar1;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    iVar6 = __wchartodigit(WVar1);
    if (iVar6 != 0) {
      param_3 = 10;
      goto LAB_00ad3733;
    }
    if ((*pWVar10 != L'x') && (*pWVar10 != L'X')) {
      param_3 = 8;
      goto LAB_00ad3733;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (iVar6 = __wchartodigit(WVar1), iVar6 == 0)) &&
     ((*pWVar10 == L'x' || (*pWVar10 == L'X')))) {
    uVar5 = (uint)(ushort)pWVar10[1];
    pWVar10 = pWVar10 + 2;
  }
LAB_00ad3733:
  uVar7 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    uVar11 = (ushort)uVar5;
    uVar8 = __wchartodigit(uVar11);
    if (uVar8 == 0xffffffff) {
      if (((uVar11 < 0x41) || (0x5a < uVar11)) && ((uVar11 < 0x61 || (0x7a < uVar11)))) {
LAB_00ad37ac:
        pWVar10 = pWVar10 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pWVar10 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_8)))))))) {
          piVar9 = FUN_00ad4b6c();
          *piVar9 = 0x22;
          if ((param_4 & 1) == 0) {
            local_8 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pWVar10;
        }
        if ((param_4 & 2) == 0) {
          return local_8;
        }
        return -local_8;
      }
      if ((0x60 < uVar11) && (uVar11 < 0x7b)) {
        uVar5 = uVar5 - 0x20;
      }
      uVar8 = uVar5 - 0x37;
    }
    if (param_3 <= uVar8) goto LAB_00ad37ac;
    if ((local_8 < uVar7) ||
       ((local_8 == uVar7 && (uVar8 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_8 = local_8 * param_3 + uVar8;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    uVar5 = (uint)(ushort)*pWVar10;
    pWVar10 = pWVar10 + 1;
  } while( true );
}


//// FUNCTION _wcstoul @ 00ad3850 ////

/* Library Function - Single Match
    _wcstoul
   
   Library: Visual Studio 2003 Release */

ulong __cdecl _wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  uint uVar1;
  
  uVar1 = wcstoxl(_Str,_EndPtr,_Radix,1);
  return uVar1;
}


//// FUNCTION __strtime @ 00ad3867 ////

/* Library Function - Single Match
    __strtime
   
   Library: Visual Studio 2003 Release */

char * __cdecl __strtime(char *_Buffer)

{
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  _Buffer[5] = ':';
  _Buffer[2] = ':';
  _Buffer[8] = '\0';
  *_Buffer = (char)((ulonglong)local_14.wHour / 10) + '0';
  _Buffer[1] = (char)((ulonglong)local_14.wHour % 10) + '0';
  _Buffer[3] = (char)((ulonglong)local_14.wMinute / 10) + '0';
  _Buffer[4] = (char)((ulonglong)local_14.wMinute % 10) + '0';
  _Buffer[6] = (char)((ulonglong)local_14.wSecond / 10) + '0';
  _Buffer[7] = (char)((ulonglong)local_14.wSecond % 10) + '0';
  return _Buffer;
}


//// FUNCTION __strdate @ 00ad38ce ////

/* Library Function - Single Match
    __strdate
   
   Library: Visual Studio 2003 Release */

char * __cdecl __strdate(char *_Buffer)

{
  _SYSTEMTIME local_18;
  
  GetLocalTime(&local_18);
  _Buffer[5] = '/';
  _Buffer[2] = '/';
  _Buffer[8] = '\0';
  *_Buffer = (char)((ulonglong)local_18.wMonth / 10) + '0';
  _Buffer[1] = (char)((ulonglong)local_18.wMonth % 10) + '0';
  _Buffer[3] = (char)((ulonglong)local_18.wDay / 10) + '0';
  _Buffer[4] = (char)((ulonglong)local_18.wDay % 10) + '0';
  _Buffer[6] = (char)(((uint)local_18.wYear % 100) / 10) + '0';
  _Buffer[7] = (char)(((uint)local_18.wYear % 100) % 10) + '0';
  return _Buffer;
}


//// FUNCTION ___dtoxmode @ 00ad393e ////

/* Library Function - Single Match
    ___dtoxmode
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___dtoxmode(byte param_1,uchar *param_2)

{
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = param_2;
  if (param_2[1] == ':') {
    puVar2 = param_2 + 2;
  }
  uVar1 = *puVar2;
  if ((((uVar1 == '\\') || (uVar1 == '/')) && (puVar2[1] == '\0')) ||
     (((param_1 & 0x10) != 0 || (uVar4 = 0x8000, uVar1 == '\0')))) {
    uVar4 = 0x4040;
  }
  uVar4 = uVar4 | (byte)~(param_1 << 7) & 0x80 | 0x100;
  puVar2 = __mbsrchr(param_2,0x2e);
  if (puVar2 != (uchar *)0x0) {
    iVar3 = __mbsicmp(puVar2,".exe");
    if (iVar3 != 0) {
      iVar3 = __mbsicmp(puVar2,".cmd");
      if (iVar3 != 0) {
        iVar3 = __mbsicmp(puVar2,".bat");
        if (iVar3 != 0) {
          iVar3 = __mbsicmp(puVar2,".com");
          if (iVar3 != 0) goto LAB_00ad39e4;
        }
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_00ad39e4:
  return (uVar4 & 0x1c0) >> 6 | uVar4 | uVar4 >> 3 & 0x38;
}


//// FUNCTION _IsRootUNCName @ 00ad39fb ////

/* Library Function - Single Match
    _IsRootUNCName
   
   Library: Visual Studio 2003 Release */

undefined4 _IsRootUNCName(void)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  char *unaff_ESI;
  
  sVar1 = _strlen(unaff_ESI);
  if (((4 < sVar1) && ((*unaff_ESI == '\\' || (*unaff_ESI == '/')))) &&
     ((unaff_ESI[1] == '\\' || (unaff_ESI[1] == '/')))) {
    pcVar2 = unaff_ESI + 3;
    cVar3 = *pcVar2;
    if (cVar3 != '\0') {
      do {
        if ((cVar3 == '\\') || (cVar3 == '/')) break;
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      } while (cVar3 != '\0');
      if ((*pcVar2 != '\0') && (pcVar2 = pcVar2 + 1, *pcVar2 != '\0')) {
        cVar3 = *pcVar2;
        if (cVar3 != '\0') {
          do {
            if ((cVar3 == '\\') || (cVar3 == '/')) break;
            pcVar2 = pcVar2 + 1;
            cVar3 = *pcVar2;
          } while (cVar3 != '\0');
          if ((*pcVar2 != '\0') && (pcVar2[1] != '\0')) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION __stat @ 00ad3a68 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __stat
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __stat(uchar *param_1,int *param_2)

{
  uchar *puVar1;
  int *piVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  char *_Str;
  size_t sVar6;
  int iVar7;
  UINT UVar8;
  WINBOOL WVar9;
  DWORD DVar10;
  _FILETIME local_268;
  HANDLE local_260;
  _SYSTEMTIME local_25c;
  char local_24c [260];
  _WIN32_FIND_DATAA local_148;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  puVar1 = __mbspbrk(param_1,"?*");
  if (puVar1 != (uchar *)0x0) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 2;
    puVar3 = FUN_00ad4b75();
    *puVar3 = 2;
    return 0xffffffff;
  }
  if (param_1[1] == ':') {
    if ((*param_1 != '\0') && (param_1[2] == '\0')) {
      piVar2 = FUN_00ad4b6c();
      *piVar2 = 2;
      puVar3 = FUN_00ad4b75();
      *puVar3 = 2;
      return 0xffffffff;
    }
    uVar4 = __mbctolower((int)(char)*param_1);
    iVar5 = uVar4 - 0x60;
  }
  else {
    iVar5 = FUN_00ae8c8d();
  }
  local_260 = FindFirstFileA((LPCSTR)param_1,&local_148);
  if (local_260 == (HANDLE)0xffffffff) {
    puVar1 = __mbspbrk(param_1,"./\\");
    if ((((puVar1 == (uchar *)0x0) ||
         (_Str = FUN_00ae8be3(local_24c,(LPCSTR)param_1,0x104), _Str == (char *)0x0)) ||
        ((sVar6 = _strlen(_Str), sVar6 != 3 && (iVar7 = _IsRootUNCName(), iVar7 == 0)))) ||
       (UVar8 = GetDriveTypeA(_Str), UVar8 < 2)) {
      piVar2 = FUN_00ad4b6c();
      *piVar2 = 2;
      puVar3 = FUN_00ad4b75();
      *puVar3 = 2;
      return 0xffffffff;
    }
    local_148.dwFileAttributes = 0x10;
    local_148.nFileSizeHigh = 0;
    local_148.nFileSizeLow = 0;
    local_148.cFileName[0] = '\0';
    iVar7 = ___loctotime_t(0x7bc,1,1,0,0,0,-1);
    param_2[7] = iVar7;
    param_2[6] = iVar7;
    param_2[8] = iVar7;
  }
  else {
    WVar9 = FileTimeToLocalFileTime(&local_148.ftLastWriteTime,&local_268);
    if ((WVar9 == 0) || (WVar9 = FileTimeToSystemTime(&local_268,&local_25c), WVar9 == 0)) {
LAB_00ad3d84:
      DVar10 = GetLastError();
      __dosmaperr(DVar10);
      FindClose(local_260);
      return 0xffffffff;
    }
    iVar7 = ___loctotime_t((uint)local_25c.wYear,(uint)local_25c.wMonth,(uint)local_25c.wDay,
                           (uint)local_25c.wHour,(uint)local_25c.wMinute,(uint)local_25c.wSecond,-1)
    ;
    param_2[7] = iVar7;
    if ((local_148.ftLastAccessTime.dwLowDateTime != 0) ||
       (local_148.ftLastAccessTime.dwHighDateTime != 0)) {
      WVar9 = FileTimeToLocalFileTime(&local_148.ftLastAccessTime,&local_268);
      if ((WVar9 == 0) || (WVar9 = FileTimeToSystemTime(&local_268,&local_25c), WVar9 == 0))
      goto LAB_00ad3d84;
      iVar7 = ___loctotime_t((uint)local_25c.wYear,(uint)local_25c.wMonth,(uint)local_25c.wDay,
                             (uint)local_25c.wHour,(uint)local_25c.wMinute,(uint)local_25c.wSecond,
                             -1);
    }
    param_2[6] = iVar7;
    if ((local_148.ftCreationTime.dwLowDateTime == 0) &&
       (local_148.ftCreationTime.dwHighDateTime == 0)) {
      iVar7 = param_2[7];
    }
    else {
      WVar9 = FileTimeToLocalFileTime(&local_148.ftCreationTime,&local_268);
      if ((WVar9 == 0) || (WVar9 = FileTimeToSystemTime(&local_268,&local_25c), WVar9 == 0))
      goto LAB_00ad3d84;
      iVar7 = ___loctotime_t((uint)local_25c.wYear,(uint)local_25c.wMonth,(uint)local_25c.wDay,
                             (uint)local_25c.wHour,(uint)local_25c.wMinute,(uint)local_25c.wSecond,
                             -1);
    }
    param_2[8] = iVar7;
    FindClose(local_260);
  }
  uVar4 = ___dtoxmode((byte)local_148.dwFileAttributes,param_1);
  *(short *)((int)param_2 + 6) = (short)uVar4;
  param_2[5] = local_148.nFileSizeLow;
  *param_2 = iVar5 + -1;
  param_2[4] = iVar5 + -1;
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return 0;
}


//// FUNCTION FUN_00ad3daf @ 00ad3daf ////

undefined4 __cdecl FUN_00ad3daf(LPCWSTR param_1)

{
  WINBOOL WVar1;
  ulong uVar2;
  
  WVar1 = DeleteFileW(param_1);
  if (WVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION ___wdtoxmode @ 00ad3dde ////

/* Library Function - Single Match
    ___wdtoxmode
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___wdtoxmode(byte param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  
  pwVar2 = param_2;
  if (param_2[1] == L':') {
    pwVar2 = param_2 + 2;
  }
  wVar1 = *pwVar2;
  if ((((wVar1 == L'\\') || (wVar1 == L'/')) && (pwVar2[1] == L'\0')) ||
     (((param_1 & 0x10) != 0 || (uVar4 = 0x8000, wVar1 == L'\0')))) {
    uVar4 = 0x4040;
  }
  uVar4 = uVar4 | (byte)~(param_1 << 7) & 0x80 | 0x100;
  pwVar2 = _wcsrchr(param_2,L'.');
  if (pwVar2 != (wchar_t *)0x0) {
    iVar3 = __wcsicmp(pwVar2,L".exe");
    if (iVar3 != 0) {
      iVar3 = __wcsicmp(pwVar2,L".cmd");
      if (iVar3 != 0) {
        iVar3 = __wcsicmp(pwVar2,L".bat");
        if (iVar3 != 0) {
          iVar3 = __wcsicmp(pwVar2,L".com");
          if (iVar3 != 0) goto LAB_00ad3e8a;
        }
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_00ad3e8a:
  return (uVar4 & 0x1c0) >> 6 | uVar4 | uVar4 >> 3 & 0x38;
}


//// FUNCTION _IsRootUNCName @ 00ad3ea1 ////

/* Library Function - Single Match
    _IsRootUNCName
   
   Library: Visual Studio 2003 Release */

undefined4 _IsRootUNCName(void)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  short *unaff_ESI;
  
  uVar1 = FUN_00ace02d(unaff_ESI);
  if (((4 < uVar1) && ((*unaff_ESI == 0x5c || (*unaff_ESI == 0x2f)))) &&
     ((unaff_ESI[1] == 0x5c || (unaff_ESI[1] == 0x2f)))) {
    psVar2 = unaff_ESI + 3;
    sVar3 = *psVar2;
    if (sVar3 != 0) {
      do {
        if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) break;
        psVar2 = psVar2 + 1;
        sVar3 = *psVar2;
      } while (sVar3 != 0);
      if ((*psVar2 != 0) && (psVar2 = psVar2 + 1, *psVar2 != 0)) {
        sVar3 = *psVar2;
        if (sVar3 != 0) {
          do {
            if ((sVar3 == 0x5c) || (sVar3 == 0x2f)) break;
            psVar2 = psVar2 + 1;
            sVar3 = *psVar2;
          } while (sVar3 != 0);
          if ((*psVar2 != 0) && (psVar2[1] != 0)) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION __wstat @ 00ad3f2c ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __wstat
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __wstat(wchar_t *param_1,int *param_2)

{
  wint_t wVar1;
  wchar_t *pwVar2;
  int *piVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  UINT UVar7;
  WINBOOL WVar8;
  uint uVar9;
  DWORD DVar10;
  _FILETIME local_47c;
  HANDLE local_474;
  _SYSTEMTIME local_470;
  wchar_t local_460 [260];
  _WIN32_FIND_DATAW local_258;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  pwVar2 = _wcspbrk(param_1,L"?*");
  if (pwVar2 != (wchar_t *)0x0) {
    piVar3 = FUN_00ad4b6c();
    *piVar3 = 2;
    puVar4 = FUN_00ad4b75();
    *puVar4 = 2;
    return 0xffffffff;
  }
  if (param_1[1] == L':') {
    if ((*param_1 != L'\0') && (param_1[2] == L'\0')) {
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 2;
      puVar4 = FUN_00ad4b75();
      *puVar4 = 2;
      return 0xffffffff;
    }
    wVar1 = _towlower(*param_1);
    iVar5 = wVar1 - 0x60;
  }
  else {
    iVar5 = FUN_00ae8c8d();
  }
  local_474 = FindFirstFileW(param_1,&local_258);
  if (local_474 == (HANDLE)0xffffffff) {
    pwVar2 = _wcspbrk(param_1,L"./\\");
    if ((((pwVar2 == (wchar_t *)0x0) ||
         (pwVar2 = FUN_00ae8f28(local_460,param_1,0x104), pwVar2 == (wchar_t *)0x0)) ||
        ((iVar6 = FUN_00ace02d(pwVar2), iVar6 != 3 && (iVar6 = _IsRootUNCName(), iVar6 == 0)))) ||
       (UVar7 = GetDriveTypeW(pwVar2), UVar7 < 2)) {
      piVar3 = FUN_00ad4b6c();
      *piVar3 = 2;
      puVar4 = FUN_00ad4b75();
      *puVar4 = 2;
      return 0xffffffff;
    }
    local_258.dwFileAttributes = 0x10;
    local_258.nFileSizeHigh = 0;
    local_258.nFileSizeLow = 0;
    local_258.cFileName[0] = L'\0';
    iVar6 = ___loctotime_t(0x7bc,1,1,0,0,0,-1);
    param_2[7] = iVar6;
    param_2[6] = iVar6;
    param_2[8] = iVar6;
  }
  else {
    WVar8 = FileTimeToLocalFileTime(&local_258.ftLastWriteTime,&local_47c);
    if ((WVar8 == 0) || (WVar8 = FileTimeToSystemTime(&local_47c,&local_470), WVar8 == 0)) {
LAB_00ad41fb:
      DVar10 = GetLastError();
      __dosmaperr(DVar10);
      FindClose(local_474);
      return 0xffffffff;
    }
    iVar6 = ___loctotime_t((uint)local_470.wYear,(uint)local_470.wMonth,(uint)local_470.wDay,
                           (uint)local_470.wHour,(uint)local_470.wMinute,(uint)local_470.wSecond,-1)
    ;
    param_2[7] = iVar6;
    if ((local_258.ftLastAccessTime.dwLowDateTime != 0) ||
       (local_258.ftLastAccessTime.dwHighDateTime != 0)) {
      WVar8 = FileTimeToLocalFileTime(&local_258.ftLastAccessTime,&local_47c);
      if ((WVar8 == 0) || (WVar8 = FileTimeToSystemTime(&local_47c,&local_470), WVar8 == 0))
      goto LAB_00ad41fb;
      iVar6 = ___loctotime_t((uint)local_470.wYear,(uint)local_470.wMonth,(uint)local_470.wDay,
                             (uint)local_470.wHour,(uint)local_470.wMinute,(uint)local_470.wSecond,
                             -1);
    }
    param_2[6] = iVar6;
    if ((local_258.ftCreationTime.dwLowDateTime == 0) &&
       (local_258.ftCreationTime.dwHighDateTime == 0)) {
      iVar6 = param_2[7];
    }
    else {
      WVar8 = FileTimeToLocalFileTime(&local_258.ftCreationTime,&local_47c);
      if ((WVar8 == 0) || (WVar8 = FileTimeToSystemTime(&local_47c,&local_470), WVar8 == 0))
      goto LAB_00ad41fb;
      iVar6 = ___loctotime_t((uint)local_470.wYear,(uint)local_470.wMonth,(uint)local_470.wDay,
                             (uint)local_470.wHour,(uint)local_470.wMinute,(uint)local_470.wSecond,
                             -1);
    }
    param_2[8] = iVar6;
    FindClose(local_474);
  }
  uVar9 = ___wdtoxmode((byte)local_258.dwFileAttributes,param_1);
  *(short *)((int)param_2 + 6) = (short)uVar9;
  param_2[5] = local_258.nFileSizeLow;
  *param_2 = iVar5 + -1;
  param_2[4] = iVar5 + -1;
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined2 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined2 *)((int)param_2 + 10) = 0;
  return 0;
}


//// FUNCTION FID_conflict:_wprintf @ 00ad4229 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _printf
    _wprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__wprintf(wchar_t *_Format,...)

{
  int _Flag;
  int iVar1;
  
  __lock_file2(1,&DAT_00e99dd0);
  _Flag = __stbuf((FILE *)&DAT_00e99dd0);
  iVar1 = FUN_00ae1640(&DAT_00e99dd0,(byte *)_Format,(wchar_t *)&stack0x00000008);
  __ftbuf(_Flag,(FILE *)&DAT_00e99dd0);
  FUN_00ad4284();
  return iVar1;
}


//// FUNCTION FUN_00ad4284 @ 00ad4284 ////

void FUN_00ad4284(void)

{
  void *unaff_ESI;
  
  __unlock_file2(1,unaff_ESI);
  return;
}


//// FUNCTION __flush @ 00ad428f ////

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2003 Release */

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  uint _MaxCharCount;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _MaxCharCount = (int)_File->_ptr - (int)_File->_base;
    if (0 < (int)_MaxCharCount) {
      uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
      if (uVar1 == _MaxCharCount) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}


//// FUNCTION __fflush_lk @ 00ad42ec ////

/* Library Function - Single Match
    __fflush_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    iVar1 = __commit(param_1->_file);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


//// FUNCTION flsall @ 00ad431a ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2003 Release */

int __cdecl flsall(int param_1)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_010dbe20; _Index = _Index + 1) {
    _File = *(void **)(DAT_010dae04 + _Index * 4);
    if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      pFVar1 = *(FILE **)(DAT_010dae04 + _Index * 4);
      if ((pFVar1->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_lk(pFVar1);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((pFVar1->_flag & 2U) != 0)) {
          iVar2 = __fflush_lk(pFVar1);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_00ad43ba();
    }
  }
  FUN_00ad43e6();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}


//// FUNCTION FUN_00ad43ba @ 00ad43ba ////

void FUN_00ad43ba(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_010dae04 + unaff_ESI * 4));
  return;
}


//// FUNCTION FUN_00ad43e6 @ 00ad43e6 ////

void FUN_00ad43e6(void)

{
  FUN_00ad700c(1);
  return;
}


//// FUNCTION _fflush @ 00ad43ef ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fflush
   
   Library: Visual Studio 2003 Release */

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    __lock_file(_File);
    iVar1 = __fflush_lk(_File);
    FUN_00ad4435();
  }
  return iVar1;
}


//// FUNCTION FUN_00ad4435 @ 00ad4435 ////

void FUN_00ad4435(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}


//// FUNCTION _fputc @ 00ad4448 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fputc
    _putc
   
   Library: Visual Studio 2003 Release */

int __cdecl _fputc(int _Ch,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  __lock_file(_File);
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = __flsbuf(_Ch,_File);
  }
  else {
    *_File->_ptr = (char)_Ch;
    uVar2 = _Ch & 0xff;
    _File->_ptr = _File->_ptr + 1;
  }
  FUN_00ad4498();
  return uVar2;
}


//// FUNCTION FUN_00ad4498 @ 00ad4498 ////

void FUN_00ad4498(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}


//// FUNCTION _putc @ 00ad44a0 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _putc
   
   Library: Visual Studio 2003 Release */

int __cdecl _putc(int _Ch,FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  __lock_file(_File);
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = __flsbuf(_Ch,_File);
  }
  else {
    *_File->_ptr = (char)_Ch;
    uVar2 = _Ch & 0xff;
    _File->_ptr = _File->_ptr + 1;
  }
  FUN_00ad44f0();
  return uVar2;
}


//// FUNCTION FUN_00ad44f0 @ 00ad44f0 ////

void FUN_00ad44f0(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}


//// FUNCTION __getenv_lk @ 00ad44f8 ////

/* Library Function - Single Match
    __getenv_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __getenv_lk(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (DAT_010dbe24 == 0) {
    return 0;
  }
  if (((DAT_010cbbe8 != (int *)0x0) ||
      (((DAT_010cbbf0 != 0 && (iVar1 = FUN_00ae9120(), iVar1 == 0)) && (DAT_010cbbe8 != (int *)0x0))
      )) && (piVar3 = DAT_010cbbe8, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}


//// FUNCTION _getenv @ 00ad4579 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _getenv
   
   Library: Visual Studio 2003 Release */

char * __cdecl _getenv(char *_VarName)

{
  char *pcVar1;
  
  __lock(7);
  pcVar1 = (char *)__getenv_lk((uchar *)_VarName);
  FUN_00ad45af();
  return pcVar1;
}


//// FUNCTION FUN_00ad45af @ 00ad45af ////

void FUN_00ad45af(void)

{
  FUN_00ad700c(7);
  return;
}


//// FUNCTION FID_conflict:__wsystem @ 00ad45b8 ////

/* Library Function - Multiple Matches With Different Base Names
    __wsystem
    _system
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict___wsystem(char *_Command)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  wchar_t *local_14;
  undefined *local_10;
  char *local_c;
  undefined4 local_8;
  
  local_14 = (wchar_t *)_getenv("COMSPEC");
  if (_Command == (char *)0x0) {
    if (local_14 == (wchar_t *)0x0) {
      uVar1 = 0;
    }
    else {
      iVar2 = FID_conflict___access((char *)local_14,0);
      uVar1 = (uint)(iVar2 == 0);
    }
  }
  else {
    local_10 = &DAT_00d7e1e0;
    local_c = _Command;
    local_8 = 0;
    if ((local_14 == (wchar_t *)0x0) ||
       ((uVar1 = FUN_00ae936c(0,local_14,&local_14,(undefined4 *)0x0), uVar1 == 0xffffffff &&
        ((piVar3 = FUN_00ad4b6c(), *piVar3 == 2 || (piVar3 = FUN_00ad4b6c(), *piVar3 == 0xd)))))) {
      local_14 = L"command.com";
      if ((DAT_010cbbcd & 0x80) == 0) {
        local_14 = L"cmd.exe";
      }
      uVar1 = FUN_00ae91b0(0,local_14,&local_14,(undefined4 *)0x0);
    }
  }
  return uVar1;
}


//// FUNCTION _setvbuf @ 00ad46a4 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setvbuf
   
   Library: Visual Studio 2003 Release */

int __cdecl _setvbuf(FILE *_File,char *_Buf,int _Mode,size_t _Size)

{
  int local_20;
  
  local_20 = 0;
  if ((_Mode != 4) && (((_Size < 2 || (0x7fffffff < _Size)) || ((_Mode != 0 && (_Mode != 0x40))))))
  {
    return -1;
  }
  _Size = _Size & 0xfffffffe;
  __lock_file(_File);
  __flush(_File);
  FUN_00ae467b((int)_File);
  *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xc2f3;
  if ((_Mode & 4U) == 0) {
    if (_Buf == (char *)0x0) {
      _Buf = _malloc(_Size);
      if ((int *)_Buf == (int *)0x0) {
        _DAT_010cbc0c = _DAT_010cbc0c + 1;
        local_20 = -1;
        goto LAB_00ad4764;
      }
      *(ushort *)&_File->_flag = (ushort)_File->_flag | 0x408;
    }
    else {
      _File->_flag = _File->_flag | 0x500;
    }
  }
  else {
    _File->_flag = _File->_flag | 4;
    _Buf = (char *)&_File->_charbuf;
    _Size = 2;
  }
  _File->_bufsiz = _Size;
  _File->_base = _Buf;
  _File->_ptr = _Buf;
  _File->_cnt = 0;
LAB_00ad4764:
  FUN_00ad4776();
  return local_20;
}


//// FUNCTION FUN_00ad4776 @ 00ad4776 ////

void FUN_00ad4776(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x20));
  return;
}


//// FUNCTION __ungetc_lk @ 00ad4780 ////

/* Library Function - Single Match
    __ungetc_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __ungetc_lk(uint param_1,FILE *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_1 != 0xffffffff) {
    uVar1 = param_2->_flag;
    if (((uVar1 & 1) != 0) || (((char)uVar1 < '\0' && ((uVar1 & 2) == 0)))) {
      if (param_2->_base == (char *)0x0) {
        __getbuf(param_2);
      }
      if (param_2->_ptr == param_2->_base) {
        if (param_2->_cnt != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      param_2->_ptr = param_2->_ptr + -1;
      pcVar2 = param_2->_ptr;
      if ((param_2->_flag & 0x40) == 0) {
        *pcVar2 = (char)param_1;
      }
      else if (*pcVar2 != (char)param_1) {
        param_2->_ptr = pcVar2 + 1;
        return 0xffffffff;
      }
      param_2->_cnt = param_2->_cnt + 1;
      param_2->_flag = param_2->_flag & 0xffffffefU | 1;
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}


//// FUNCTION _ungetc @ 00ad47ec ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ungetc
   
   Library: Visual Studio 2003 Release */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  uint uVar1;
  
  __lock_file(_File);
  uVar1 = __ungetc_lk(_Ch,_File);
  FUN_00ad4827();
  return uVar1;
}


//// FUNCTION FUN_00ad4827 @ 00ad4827 ////

void FUN_00ad4827(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0xc));
  return;
}


//// FUNCTION FID_conflict:_getc @ 00ad4831 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fgetc
    _getc
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict__getc(FILE *_File)

{
  int *piVar1;
  uint uVar2;
  
  __lock_file(_File);
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = __filbuf(_File);
  }
  else {
    uVar2 = (uint)(byte)*_File->_ptr;
    _File->_ptr = _File->_ptr + 1;
  }
  FUN_00ad4879();
  return uVar2;
}


//// FUNCTION FUN_00ad4879 @ 00ad4879 ////

void FUN_00ad4879(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}


//// FUNCTION _fgetpos @ 00ad48d1 ////

/* Library Function - Single Match
    _fgetpos
   
   Library: Visual Studio 2003 Release */

int __cdecl _fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftelli64(_File);
  *_Pos = lVar2;
  iVar1 = -1;
  if (((uint)lVar2 & *(uint *)((int)_Pos + 4)) != 0xffffffff) {
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION _fsetpos @ 00ad48f3 ////

/* Library Function - Single Match
    _fsetpos
   
   Library: Visual Studio 2003 Release */

int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = __fseeki64(_File,(ulonglong)*(uint *)((int)_Pos + 4),unaff_retaddr);
  return iVar1;
}


//// FUNCTION FID_conflict:__access @ 00ad490b ////

/* Library Function - Multiple Matches With Different Base Names
    __access
    __waccess
   
   Library: Visual Studio 2003 Release */

int __cdecl FID_conflict___access(char *_Filename,int _AccessMode)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
  DVar1 = GetFileAttributesA(_Filename);
  if (DVar1 == 0xffffffff) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
  }
  else {
    if (((DVar1 & 1) == 0) || ((_AccessMode & 2U) == 0)) {
      return 0;
    }
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0xd;
    puVar3 = FUN_00ad4b75();
    *puVar3 = 5;
  }
  return -1;
}


//// FUNCTION __aullshr @ 00ad4960 ////

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}


//// FUNCTION strtoxl @ 00ad497f ////

/* Library Function - Single Match
    _strtoxl
   
   Library: Visual Studio 2003 Release */

uint __cdecl strtoxl(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  uint local_8;
  
  p_Var2 = __getptd();
  ptVar3 = (pthreadlocinfo)p_Var2->_tfpecode;
  if (ptVar3 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar3 = ___updatetlocinfo();
  }
  local_8 = 0;
  bVar8 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    pbVar9 = pbVar1 + 1;
    if (*(int *)&ptVar3->lc_id[0].wCodePage < 2) {
      uVar4 = (byte)ptVar3->lc_category[0].locale[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar4 = ___isctype_mt(param_1,(int)ptVar3,(uint)bVar8,8);
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar1 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_4 = param_4 | 2;
LAB_00ad49e6:
    bVar8 = *pbVar9;
    pbVar9 = pbVar1 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_00ad49e6;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar8 != 0x30) {
      param_3 = 10;
      goto LAB_00ad4a49;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_3 = 8;
      goto LAB_00ad4a49;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar8 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_00ad4a49:
  uVar4 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if ((*(ushort *)(PTR_DAT_00e9a2f0 + (uint)bVar8 * 2) & 4) == 0) {
      if ((*(ushort *)(PTR_DAT_00e9a2f0 + (uint)bVar8 * 2) & 0x103) == 0) {
LAB_00ad4ab5:
        pbVar9 = pbVar9 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pbVar9 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_8)))))))) {
          piVar5 = FUN_00ad4b6c();
          *piVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            local_8 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pbVar9;
        }
        if ((param_4 & 2) == 0) {
          return local_8;
        }
        return -local_8;
      }
      if (((char)bVar8 < 'a') || ('z' < (char)bVar8)) {
        iVar7 = (int)(char)bVar8;
      }
      else {
        iVar7 = (char)bVar8 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if (param_3 <= uVar6) goto LAB_00ad4ab5;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_8 = local_8 * param_3 + uVar6;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


//// FUNCTION _strtol @ 00ad4b3e ////

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2003 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  uint uVar1;
  
  uVar1 = strtoxl((byte *)_Str,_EndPtr,_Radix,0);
  return uVar1;
}


//// FUNCTION _strtoul @ 00ad4b55 ////

/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2003 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  uint uVar1;
  
  uVar1 = strtoxl((byte *)_Str,_EndPtr,_Radix,1);
  return uVar1;
}


//// FUNCTION FUN_00ad4b6c @ 00ad4b6c ////

int * FUN_00ad4b6c(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}


//// FUNCTION FUN_00ad4b75 @ 00ad4b75 ////

ulong * FUN_00ad4b75(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}


//// FUNCTION __dosmaperr @ 00ad4b7e ////

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  _ptiddata p_Var1;
  uint uVar2;
  
  p_Var1 = __getptd();
  p_Var1->_tdoserrno = param_1;
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_00e9a0b0)[uVar2 * 2]) {
      p_Var1 = __getptd();
      p_Var1->_terrno = *(int *)(uVar2 * 8 + 0xe9a0b4);
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2d);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    p_Var1 = __getptd();
    p_Var1->_terrno = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    p_Var1 = __getptd();
    p_Var1->_terrno = 8;
    return;
  }
  p_Var1 = __getptd();
  p_Var1->_terrno = 0x16;
  return;
}


//// FUNCTION FUN_00ad4bf1 @ 00ad4bf1 ////

undefined * FUN_00ad4bf1(void)

{
  return PTR_PTR_00e9a24c;
}


//// FUNCTION strtoxq @ 00ad4bf7 ////

/* WARNING: Removing unreachable block (ram,0x00ad4d3f) */
/* WARNING: Removing unreachable block (ram,0x00ad4dd0) */
/* Library Function - Single Match
    _strtoxq
   
   Library: Visual Studio 2003 Release */

undefined8 __cdecl strtoxq(byte *param_1,int *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *this;
  uint extraout_ECX_02;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 local_14;
  byte *local_c;
  byte local_5;
  
  p_Var2 = __getptd();
  ptVar3 = (pthreadlocinfo)p_Var2->_tfpecode;
  this = extraout_ECX;
  if (ptVar3 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar3 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  local_14 = 0;
  local_5 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_c = pbVar1 + 1;
    if (*(int *)&ptVar3->lc_id[0].wCodePage < 2) {
      this = ptVar3->lc_category[0].locale;
      uVar4 = (byte)this[(uint)local_5 * 2] & 8;
    }
    else {
      uVar4 = ___isctype_mt(this,(int)ptVar3,(uint)local_5,8);
      this = extraout_ECX_01;
    }
    if (uVar4 == 0) break;
    local_5 = *local_c;
    pbVar1 = local_c;
  }
  if (local_5 == 0x2d) {
    param_4 = param_4 | 2;
LAB_00ad4c6c:
    local_5 = *local_c;
    local_c = pbVar1 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_00ad4c6c;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    local_14._0_4_ = 0;
    local_14._4_4_ = 0;
LAB_00ad4e52:
    return CONCAT44(local_14._4_4_,(uint)local_14);
  }
  if (param_3 == 0) {
    if (local_5 != 0x30) {
      param_3 = 10;
      goto LAB_00ad4cdd;
    }
    if ((*local_c != 0x78) && (*local_c != 0x58)) {
      param_3 = 8;
      goto LAB_00ad4cdd;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (local_5 == 0x30)) && ((*local_c == 0x78 || (*local_c == 0x58)))) {
    local_5 = local_c[1];
    local_c = local_c + 2;
  }
LAB_00ad4cdd:
  uVar7 = __aulldvrm(0xffffffff,0xffffffff,param_3,(int)param_3 >> 0x1f);
  do {
    iVar5 = _isdigit((uint)local_5);
    if (iVar5 == 0) {
      iVar5 = _isalpha((uint)local_5);
      if (iVar5 == 0) break;
      iVar5 = _toupper((int)(char)local_5);
      uVar4 = iVar5 - 0x37;
    }
    else {
      uVar4 = (int)(char)local_5 - 0x30;
    }
    if (param_3 <= uVar4) break;
    if ((local_14 < uVar7) ||
       ((uVar7 == local_14 && ((param_1 != (byte *)0x0 || (uVar4 <= extraout_ECX_02)))))) {
      lVar8 = __allmul(param_3,(int)param_3 >> 0x1f,(uint)local_14,local_14._4_4_);
      local_14 = lVar8 + (ulonglong)uVar4;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
  local_c = local_c + -1;
  if ((param_4 & 8) == 0) {
    if (param_2 != (int *)0x0) {
      local_c = param_1;
    }
    local_14 = 0;
  }
  else if (((param_4 & 4) != 0) ||
          (((param_4 & 1) == 0 &&
           ((((param_4 & 2) != 0 && (0x8000000000000000 < local_14)) ||
            (((param_4 & 2) == 0 &&
             ((0x7ffffffeffffffff < local_14 && (0x7fffffffffffffff < local_14)))))))))) {
    piVar6 = FUN_00ad4b6c();
    *piVar6 = 0x22;
    if ((param_4 & 1) == 0) {
      if ((param_4 & 2) == 0) {
        local_14 = 0x7fffffffffffffff;
      }
      else {
        local_14 = 0x8000000000000000;
      }
    }
    else {
      local_14 = 0xffffffffffffffff;
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (int)local_c;
  }
  if ((param_4 & 2) != 0) {
    local_14 = CONCAT44(-(local_14._4_4_ + (uint)((uint)local_14 != 0)),-(uint)local_14);
  }
  goto LAB_00ad4e52;
}


//// FUNCTION __strtoi64 @ 00ad4e57 ////

/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2003 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  longlong lVar1;
  
  lVar1 = strtoxq((byte *)_String,(int *)_EndPtr,_Radix,0);
  return lVar1;
}


//// FUNCTION __strtoui64 @ 00ad4e6e ////

/* Library Function - Single Match
    __strtoui64
   
   Library: Visual Studio 2003 Release */

ulonglong __cdecl __strtoui64(char *_String,char **_EndPtr,int _Radix)

{
  ulonglong uVar1;
  
  uVar1 = strtoxq((byte *)_String,(int *)_EndPtr,_Radix,1);
  return uVar1;
}


//// FUNCTION __fputchar @ 00ad4e85 ////

/* Library Function - Single Match
    __fputchar
   
   Library: Visual Studio 2003 Release */

int __cdecl __fputchar(int _Ch)

{
  int iVar1;
  
  iVar1 = _putc(_Ch,(FILE *)&DAT_00e99dd0);
  return iVar1;
}


//// FUNCTION __set_osfhnd @ 00ad4e9b ////

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2003 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((uint)param_1 < uNumber_010daa74) {
    iVar3 = (param_1 & 0x1fU) * 0x24;
    if (*(int *)(iVar3 + (&DAT_010daa80)[param_1 >> 5]) == -1) {
      if (DAT_00e9a094 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00ad4ef4;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_00ad4ef4:
      *(intptr_t *)(iVar3 + (&DAT_010daa80)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 9;
  puVar2 = FUN_00ad4b75();
  *puVar2 = 0;
  return -1;
}


//// FUNCTION __free_osfhnd @ 00ad4f17 ////

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2003 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((uint)param_1 < uNumber_010daa74) {
    iVar3 = (param_1 & 0x1fU) * 0x24;
    piVar1 = (int *)((&DAT_010daa80)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_00e9a094 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00ad4f73;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_00ad4f73:
      *(undefined4 *)(iVar3 + (&DAT_010daa80)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar1 = FUN_00ad4b6c();
  *piVar1 = 9;
  puVar2 = FUN_00ad4b75();
  *puVar2 = 0;
  return -1;
}


//// FUNCTION __get_osfhandle @ 00ad4f96 ////

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2003 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  intptr_t *piVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < uNumber_010daa74) &&
     (piVar1 = (intptr_t *)((&DAT_010daa80)[_FileHandle >> 5] + (_FileHandle & 0x1fU) * 0x24),
     (*(byte *)(piVar1 + 1) & 1) != 0)) {
    return *piVar1;
  }
  piVar2 = FUN_00ad4b6c();
  *piVar2 = 9;
  puVar3 = FUN_00ad4b75();
  *puVar3 = 0;
  return -1;
}


//// FUNCTION __lock_fhandle @ 00ad4fd7 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lock_fhandle
   
   Library: Visual Studio 2003 Release */

int __cdecl __lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7e240;
  uStack_c = 0xad4fe3;
  iVar1 = (&DAT_010daa80)[_Filehandle >> 5] + (_Filehandle & 0x1fU) * 0x24;
  if (*(int *)(iVar1 + 8) == 0) {
    __lock(10);
    local_8 = (undefined *)0x0;
    if (*(int *)(iVar1 + 8) == 0) {
      iVar2 = ___crtInitCritSecAndSpinCount(iVar1 + 0xc,4000);
      if (iVar2 == 0) {
        __local_unwind2((int)local_14,-1);
        return 0;
      }
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    local_8 = (undefined *)0xffffffff;
    FUN_00ad506e();
  }
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_010daa80)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return 1;
}


//// FUNCTION FUN_00ad506e @ 00ad506e ////

void FUN_00ad506e(void)

{
  FUN_00ad700c(10);
  return;
}


//// FUNCTION __unlock_fhandle @ 00ad5077 ////

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2003 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_010daa80)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x24));
  return;
}


//// FUNCTION __alloc_osfhnd @ 00ad5099 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2003 Release */

int __cdecl __alloc_osfhnd(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_20;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7e250;
  uStack_c = 0xad50a5;
  local_20 = -1;
  iVar1 = FUN_00ad7039(0xb);
  if (iVar1 == 0) {
LAB_00ad513a:
    local_20 = -1;
  }
  else {
    __lock(0xb);
    local_8 = (undefined *)0x0;
    for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
      puVar3 = (undefined4 *)(&DAT_010daa80)[iVar1];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = _malloc(0x480);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_010daa80)[iVar1] = puVar3;
          uNumber_010daa74 = uNumber_010daa74 + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_010daa80)[iVar1] + 0x480); puVar3 = puVar3 + 9) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar1 << 5;
          iVar1 = __lock_fhandle(local_20);
          if (iVar1 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_010daa80)[iVar1] + 0x480); puVar3 = puVar3 + 9) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            local_8 = (undefined *)0x1;
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                __local_unwind2((int)local_14,-1);
                goto LAB_00ad513a;
              }
              puVar3[2] = puVar3[2] + 1;
            }
            local_8 = (undefined *)0x0;
            FUN_00ad5172();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          if ((*(byte *)(puVar3 + 1) & 1) == 0) {
            *puVar3 = 0xffffffff;
            local_20 = ((int)puVar3 - (&DAT_010daa80)[iVar1]) / 0x24 + iVar1 * 0x20;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
        }
      }
      if (local_20 != -1) break;
    }
    local_8 = (undefined *)0xffffffff;
    FUN_00ad520c();
  }
  return local_20;
}


//// FUNCTION FUN_00ad5172 @ 00ad5172 ////

void FUN_00ad5172(void)

{
  FUN_00ad700c(10);
  return;
}


//// FUNCTION FUN_00ad520c @ 00ad520c ////

void FUN_00ad520c(void)

{
  FUN_00ad700c(0xb);
  return;
}


//// FUNCTION _fputs @ 00ad52dc ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fputs
   
   Library: Visual Studio 2003 Release */

int __cdecl _fputs(char *_Str,FILE *_File)

{
  size_t sVar1;
  int _Flag;
  uint uVar2;
  
  sVar1 = _strlen(_Str);
  __lock_file(_File);
  _Flag = __stbuf(_File);
  uVar2 = __fwrite_lk(_Str,1,sVar1,_File);
  __ftbuf(_Flag,_File);
  FUN_00ad5343();
  return (uVar2 == sVar1) - 1;
}


//// FUNCTION FUN_00ad5343 @ 00ad5343 ////

void FUN_00ad5343(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0xc));
  return;
}


//// FUNCTION FUN_00ad534d @ 00ad534d ////

undefined4 __cdecl FUN_00ad534d(LPCWSTR param_1)

{
  WINBOOL WVar1;
  ulong uVar2;
  
  WVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (WVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION FUN_00ad5379 @ 00ad5379 ////

undefined4 __cdecl FUN_00ad5379(LPCWSTR param_1)

{
  WINBOOL WVar1;
  ulong uVar2;
  
  WVar1 = RemoveDirectoryW(param_1);
  if (WVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION HandlerRoutine_00ad53a3 @ 00ad53a3 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* HandlerRoutine parameter of SetConsoleCtrlHandler
    */

undefined4 HandlerRoutine_00ad53a3(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 local_28;
  undefined4 *local_20;
  
  __lock(0);
  if (param_1 == 0) {
    local_20 = &DAT_010cbc20;
    local_28 = 2;
    pcVar2 = DAT_010cbc20;
  }
  else {
    local_20 = &DAT_010cbc24;
    local_28 = 0x15;
    pcVar2 = DAT_010cbc24;
  }
  if ((pcVar2 != (code *)0x0) && (pcVar2 != (code *)0x1)) {
    *local_20 = 0;
  }
  FUN_00ad5414();
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    if (pcVar2 != (code *)0x1) {
      (*pcVar2)(local_28);
    }
    uVar1 = 1;
  }
  return uVar1;
}


//// FUNCTION FUN_00ad5414 @ 00ad5414 ////

void FUN_00ad5414(void)

{
  int unaff_EDI;
  
  FUN_00ad700c(unaff_EDI);
  return;
}


//// FUNCTION siglookup @ 00ad5432 ////

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2003 Release */

void __cdecl siglookup(void)

{
  uint uVar1;
  uint in_EDX;
  int unaff_ESI;
  
  uVar1 = in_EDX;
  do {
    if (*(int *)(uVar1 + 4) == unaff_ESI) {
      return;
    }
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < in_EDX + DAT_00e9a754 * 0xc);
  return;
}


//// FUNCTION _signal @ 00ad5472 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _signal
   
   Library: Visual Studio 2003 Release */

void __cdecl _signal(int param_1)

{
  _ptiddata p_Var1;
  void *pvVar2;
  WINBOOL WVar3;
  ulong *puVar4;
  DWORD DVar5;
  int *piVar6;
  int in_stack_00000008;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7e298;
  uStack_c = 0xad547e;
  if ((in_stack_00000008 != 4) && (in_stack_00000008 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      __lock(0);
      local_8 = (undefined *)0x0;
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_010cbc30 == 0)) {
        WVar3 = SetConsoleCtrlHandler(HandlerRoutine_00ad53a3,1);
        if (WVar3 != 1) {
          puVar4 = FUN_00ad4b75();
          DVar5 = GetLastError();
          *puVar4 = DVar5;
          __local_unwind2((int)local_14,-1);
          goto LAB_00ad55b8;
        }
        DAT_010cbc30 = 1;
      }
      if (param_1 == 2) {
        DAT_010cbc20 = in_stack_00000008;
      }
      else if (param_1 == 0xf) {
        DAT_010cbc2c = in_stack_00000008;
      }
      else if (param_1 == 0x15) {
        DAT_010cbc24 = in_stack_00000008;
      }
      else if (param_1 == 0x16) {
        DAT_010cbc28 = in_stack_00000008;
      }
      local_8 = (undefined *)0xffffffff;
      FUN_00ad560a();
      return;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      p_Var1 = __getptd();
      if (p_Var1->_initaddr == &DAT_00e9a6d0) {
        pvVar2 = _malloc(DAT_00e9a750);
        p_Var1->_initaddr = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_00ad55b8;
        _memcpy(pvVar2,&DAT_00e9a6d0,DAT_00e9a750);
      }
      pvVar2 = (void *)siglookup();
      if (pvVar2 != (void *)0x0) {
        do {
          if (*(int *)((int)pvVar2 + 4) != param_1) {
            return;
          }
          *(int *)((int)pvVar2 + 8) = in_stack_00000008;
          pvVar2 = (void *)((int)pvVar2 + 0xc);
        } while (pvVar2 < (void *)((int)p_Var1->_initaddr + DAT_00e9a754 * 0xc));
        return;
      }
    }
  }
LAB_00ad55b8:
  piVar6 = FUN_00ad4b6c();
  *piVar6 = 0x16;
  return;
}


//// FUNCTION FUN_00ad560a @ 00ad560a ////

void FUN_00ad560a(void)

{
  FUN_00ad700c(0);
  return;
}


//// FUNCTION _raise @ 00ad5613 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2003 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  void *local_34;
  void *local_30;
  _ptiddata local_28;
  
  bVar1 = false;
  if (_SigNum == 2) {
    puVar3 = &DAT_010cbc20;
    pcVar4 = DAT_010cbc20;
LAB_00ad56a0:
    bVar1 = true;
  }
  else {
    if (((_SigNum != 4) && (_SigNum != 8)) && (_SigNum != 0xb)) {
      if (_SigNum == 0xf) {
        puVar3 = &DAT_010cbc2c;
        pcVar4 = DAT_010cbc2c;
      }
      else if (_SigNum == 0x15) {
        puVar3 = &DAT_010cbc24;
        pcVar4 = DAT_010cbc24;
      }
      else {
        if (_SigNum != 0x16) {
          return -1;
        }
        puVar3 = &DAT_010cbc28;
        pcVar4 = DAT_010cbc28;
      }
      goto LAB_00ad56a0;
    }
    local_28 = __getptd();
    iVar2 = siglookup();
    puVar3 = (undefined4 *)(iVar2 + 8);
    pcVar4 = (code *)*puVar3;
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = local_28->_initarg;
    local_28->_initarg = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = local_28->_pxcptacttab;
      local_28->_pxcptacttab = (void *)0x8c;
      goto LAB_00ad56ff;
    }
  }
  else {
LAB_00ad56ff:
    iVar2 = DAT_00e9a748;
    if (_SigNum == 8) {
      for (; iVar2 < DAT_00e9a74c + DAT_00e9a748; iVar2 = iVar2 + 1) {
        *(undefined4 *)((int)local_28->_initaddr + iVar2 * 0xc + 8) = 0;
      }
      goto LAB_00ad572d;
    }
  }
  *puVar3 = 0;
LAB_00ad572d:
  FUN_00ad574e(0);
  if (_SigNum == 8) {
    (*pcVar4)(8,local_28->_pxcptacttab);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  local_28->_initarg = local_30;
  if (_SigNum == 8) {
    local_28->_pxcptacttab = local_34;
  }
  return 0;
}


//// FUNCTION FUN_00ad574e @ 00ad574e ////

void __fastcall FUN_00ad574e(int param_1)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != param_1) {
    FUN_00ad700c(param_1);
  }
  return;
}


//// FUNCTION _calloc @ 00ad578c ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _calloc(size_t _NumOfElements,size_t _SizeOfElements)

{
  int iVar1;
  uint *_Size;
  uint *dwBytes;
  int *_Dst;
  
  _Size = (uint *)(_NumOfElements * _SizeOfElements);
  dwBytes = _Size;
  if (_Size == (uint *)0x0) {
    dwBytes = (uint *)0x1;
  }
  do {
    _Dst = (int *)0x0;
    if (dwBytes < (uint *)0xffffffe1) {
      if ((DAT_010dadec == 3) &&
         (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_010dadd8)) {
        __lock(4);
        _Dst = ___sbh_alloc_block(_Size);
        FUN_00ad5836();
        if (_Dst != (int *)0x0) {
          _memset(_Dst,0,(size_t)_Size);
          goto LAB_00ad5801;
        }
      }
      else {
LAB_00ad5801:
        if (_Dst != (int *)0x0) {
          return _Dst;
        }
      }
      _Dst = HeapAlloc(hHeap_010dade8,8,(SIZE_T)dwBytes);
    }
    if (_Dst != (int *)0x0) {
      return _Dst;
    }
    if (DAT_010cbdbc == 0) {
      return (void *)0x0;
    }
    iVar1 = __callnewh((size_t)dwBytes);
    if (iVar1 == 0) {
      return (void *)0x0;
    }
  } while( true );
}


//// FUNCTION FUN_00ad5836 @ 00ad5836 ////

void FUN_00ad5836(void)

{
  FUN_00ad700c(4);
  return;
}


//// FUNCTION _freopen @ 00ad5847 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _freopen
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl _freopen(char *_Filename,char *_Mode,FILE *_File)

{
  FILE *pFVar1;
  
  __lock_file(_File);
  if ((_File->_flag & 0x83) != 0) {
    FUN_00ad0db7(_File);
  }
  _File->_base = (char *)0x0;
  _File->_ptr = (char *)0x0;
  _File->_flag = 0;
  _File->_cnt = 0;
  pFVar1 = __openfile(_Filename,_Mode,0x40,_File);
  FUN_00ad58a3();
  return pFVar1;
}


//// FUNCTION FUN_00ad58a3 @ 00ad58a3 ////

void FUN_00ad58a3(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + -0x1c));
  return;
}


//// FUNCTION _abort @ 00ad58ad ////

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2003 Release */

void __cdecl _abort(void)

{
  __NMSG_WRITE(10);
  _raise(0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


//// FUNCTION FUN_00ad58c5 @ 00ad58c5 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int * __cdecl FUN_00ad58c5(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *local_24;
  int *local_20;
  
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    if (DAT_010dadec == 3) {
      do {
        local_20 = (int *)0x0;
        if (param_2 < (uint *)0xffffffe1) {
          __lock(4);
          local_24 = (uint *)___sbh_find_block((int)param_1);
          if (local_24 != (uint *)0x0) {
            if (param_2 <= DAT_010dadd8) {
              iVar2 = ___sbh_resize_block(local_24,(int)param_1,(int)param_2);
              if (iVar2 == 0) {
                local_20 = ___sbh_alloc_block(param_2);
                if (local_20 != (int *)0x0) {
                  puVar3 = (uint *)(param_1[-1] - 1U);
                  if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                    puVar3 = param_2;
                  }
                  _memcpy(local_20,param_1,(size_t)puVar3);
                  local_24 = (uint *)___sbh_find_block((int)param_1);
                  ___sbh_free_block(local_24,(int)param_1);
                }
              }
              else {
                local_20 = param_1;
              }
            }
            if (local_20 == (int *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_20 = HeapAlloc(hHeap_010dade8,0,(SIZE_T)param_2);
              if (local_20 != (int *)0x0) {
                puVar3 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar3 = param_2;
                }
                _memcpy(local_20,param_1,(size_t)puVar3);
                ___sbh_free_block(local_24,(int)param_1);
              }
            }
          }
          FUN_00ad5a2d();
          if (local_24 == (uint *)0x0) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            local_20 = HeapReAlloc(hHeap_010dade8,0,param_1,(SIZE_T)param_2);
          }
        }
        if (local_20 != (int *)0x0) {
          return local_20;
        }
        if (DAT_010cbdbc == 0) {
          return (int *)0x0;
        }
        iVar2 = __callnewh((size_t)param_2);
      } while (iVar2 != 0);
    }
    else {
      do {
        piVar1 = (int *)0x0;
        if (param_2 < (uint *)0xffffffe1) {
          if (param_2 == (uint *)0x0) {
            param_2 = (uint *)0x1;
          }
          piVar1 = HeapReAlloc(hHeap_010dade8,0,param_1,(SIZE_T)param_2);
        }
        if (piVar1 != (int *)0x0) {
          return piVar1;
        }
        if (DAT_010cbdbc == 0) {
          return (int *)0x0;
        }
        iVar2 = __callnewh((size_t)param_2);
      } while (iVar2 != 0);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


//// FUNCTION FUN_00ad5a2d @ 00ad5a2d ////

void FUN_00ad5a2d(void)

{
  FUN_00ad700c(4);
  return;
}


//// FUNCTION FUN_00ad5a72 @ 00ad5a72 ////

undefined4 __cdecl FUN_00ad5a72(LPCSTR param_1,LPCSTR param_2)

{
  WINBOOL WVar1;
  ulong uVar2;
  
  WVar1 = MoveFileA(param_1,param_2);
  if (WVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION FUN_00ad5aa0 @ 00ad5aa0 ////

undefined4 __cdecl FUN_00ad5aa0(LPCWSTR param_1,LPCWSTR param_2)

{
  WINBOOL WVar1;
  ulong uVar2;
  
  WVar1 = MoveFileW(param_1,param_2);
  if (WVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}


//// FUNCTION __futime @ 00ad5ace ////

/* Library Function - Single Match
    __futime
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __futime(int param_1,time_t *param_2)

{
  tm *ptVar1;
  int *piVar2;
  WINBOOL WVar3;
  HANDLE hFile;
  FILETIME *lpCreationTime;
  _FILETIME *lpLastAccessTime;
  _FILETIME *lpLastWriteTime;
  SYSTEMTIME local_34;
  _FILETIME local_24;
  _FILETIME local_1c;
  _FILETIME local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == (time_t *)0x0) {
    _time((time_t *)&local_8);
    local_c = local_8;
    param_2 = (time_t *)&local_c;
  }
  ptVar1 = _localtime((time_t *)((int)param_2 + 4));
  if (ptVar1 == (tm *)0x0) {
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x16;
  }
  else {
    local_34.wYear = (short)ptVar1->tm_year + 0x76c;
    local_34.wMonth = (short)ptVar1->tm_mon + 1;
    local_34.wDay = (WORD)ptVar1->tm_mday;
    local_34.wHour = (WORD)ptVar1->tm_hour;
    local_34.wMinute = (WORD)ptVar1->tm_min;
    local_34.wSecond = (WORD)ptVar1->tm_sec;
    local_34.wMilliseconds = 0;
    WVar3 = SystemTimeToFileTime(&local_34,&local_14);
    if (((WVar3 != 0) && (WVar3 = LocalFileTimeToFileTime(&local_14,&local_1c), WVar3 != 0)) &&
       (ptVar1 = _localtime(param_2), ptVar1 != (tm *)0x0)) {
      local_34.wYear = (short)ptVar1->tm_year + 0x76c;
      local_34.wMonth = (short)ptVar1->tm_mon + 1;
      local_34.wDay = (WORD)ptVar1->tm_mday;
      local_34.wHour = (WORD)ptVar1->tm_hour;
      local_34.wMinute = (WORD)ptVar1->tm_min;
      local_34.wSecond = (WORD)ptVar1->tm_sec;
      local_34.wMilliseconds = 0;
      WVar3 = SystemTimeToFileTime(&local_34,&local_14);
      if ((WVar3 != 0) && (WVar3 = LocalFileTimeToFileTime(&local_14,&local_24), WVar3 != 0)) {
        lpLastWriteTime = &local_1c;
        lpLastAccessTime = &local_24;
        lpCreationTime = (FILETIME *)0x0;
        hFile = (HANDLE)__get_osfhandle(param_1);
        WVar3 = SetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
        if (WVar3 != 0) {
          return 0;
        }
      }
    }
    piVar2 = FUN_00ad4b6c();
    *piVar2 = 0x16;
  }
  return 0xffffffff;
}


//// FUNCTION FID_conflict:__utime @ 00ad5c14 ////

/* Library Function - Multiple Matches With Different Base Names
    __utime
    __wutime
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl FID_conflict___utime(char *param_1,time_t *param_2)

{
  int _FileHandle;
  undefined4 uVar1;
  
  _FileHandle = __open(param_1,0x8002);
  if (_FileHandle < 0) {
    return 0xffffffff;
  }
  uVar1 = __futime(_FileHandle,param_2);
  __close(_FileHandle);
  return uVar1;
}


//// FUNCTION FID_conflict:__utime @ 00ad5c4b ////

/* Library Function - Multiple Matches With Different Base Names
    __utime
    __wutime
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl FID_conflict___utime(wchar_t *param_1,time_t *param_2)

{
  int _FileHandle;
  undefined4 uVar1;
  
  _FileHandle = __wopen(param_1,0x8002);
  if (_FileHandle < 0) {
    return 0xffffffff;
  }
  uVar1 = __futime(_FileHandle,param_2);
  __close(_FileHandle);
  return uVar1;
}


//// FUNCTION __tsopen_lk @ 00ad5c82 ////

/* Library Function - Single Match
    __tsopen_lk
   
   Library: Visual Studio 2003 Release */

uint __thiscall
__tsopen_lk(void *this,undefined4 *param_1,uint *param_2,LPCWSTR param_3,uint param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  HANDLE hFile;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  int iVar9;
  bool bVar10;
  _SECURITY_ATTRIBUTES local_24;
  short local_18 [2];
  DWORD local_14;
  DWORD local_10;
  uint local_c;
  byte local_5;
  
  bVar10 = -1 < (char)param_4;
  local_24.nLength = 0xc;
  local_24.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar10) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_24.bInheritHandle = (WINBOOL)bVar10;
  if (((param_4 & 0x8000) == 0) && (((param_4 & 0x4000) != 0 || (DAT_010cc040 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar3 = param_4 & 3;
  if (uVar3 == 0) {
    local_14 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_14 = 0x40000000;
  }
  else {
    if (uVar3 != 2) goto LAB_00ad5d09;
    local_14 = 0xc0000000;
  }
  if (this == &DAT_00000010) {
    local_c = 0;
  }
  else if (this == (void *)0x20) {
    local_c = 1;
  }
  else if (this == (void *)0x30) {
    local_c = 2;
  }
  else {
    if (this != (void *)0x40) {
LAB_00ad5d09:
      piVar4 = FUN_00ad4b6c();
      *piVar4 = 0x16;
      puVar5 = FUN_00ad4b75();
      *puVar5 = 0;
      return 0xffffffff;
    }
    local_c = 3;
  }
  uVar3 = param_4 & 0x700;
  if (uVar3 < 0x401) {
    if ((uVar3 == 0x400) || (uVar3 == 0)) {
      local_10 = 3;
    }
    else if (uVar3 == 0x100) {
      local_10 = 4;
    }
    else {
      if (uVar3 == 0x200) goto LAB_00ad5db0;
      if (uVar3 != 0x300) goto LAB_00ad5d96;
      local_10 = 2;
    }
  }
  else {
    if (uVar3 != 0x500) {
      if (uVar3 == 0x600) {
LAB_00ad5db0:
        local_10 = 5;
        goto LAB_00ad5dc0;
      }
      if (uVar3 != 0x700) {
LAB_00ad5d96:
        piVar4 = FUN_00ad4b6c();
        *piVar4 = 0x16;
        puVar5 = FUN_00ad4b75();
        *puVar5 = 0;
        return 0xffffffff;
      }
    }
    local_10 = 1;
  }
LAB_00ad5dc0:
  DVar8 = 0x80;
  if (((param_4 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_010cbbc4 & param_5))) {
    DVar8 = 1;
  }
  if ((param_4 & 0x40) != 0) {
    local_14 = CONCAT13(local_14._3_1_,0x10000);
    DVar8 = DVar8 | 0x4000000;
    if (DAT_010cbbc8 == 2) {
      local_c = local_c | 4;
    }
  }
  if ((param_4 & 0x1000) != 0) {
    DVar8 = DVar8 | 0x100;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      DVar8 = DVar8 | 0x10000000;
    }
  }
  else {
    DVar8 = DVar8 | 0x8000000;
  }
  uVar3 = __alloc_osfhnd();
  if (uVar3 == 0xffffffff) {
    piVar4 = FUN_00ad4b6c();
    *piVar4 = 0x18;
    puVar5 = FUN_00ad4b75();
    *puVar5 = 0;
  }
  else {
    *param_1 = 1;
    *param_2 = uVar3;
    hFile = CreateFileW(param_3,local_14,local_c,&local_24,local_10,DVar8,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar8 = GetFileType(hFile);
      if (DVar8 != 0) {
        if (DVar8 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (DVar8 == 3) {
          local_5 = local_5 | 8;
        }
        __set_osfhnd(uVar3,(intptr_t)hFile);
        bVar2 = local_5 | 1;
        iVar9 = (uVar3 & 0x1f) * 0x24;
        local_5 = local_5 & 0x48;
        *(byte *)(iVar9 + 4 + (&DAT_010daa80)[(int)uVar3 >> 5]) = bVar2;
        if (((local_5 == 0) && ((char)bVar2 < '\0')) && ((param_4 & 2) != 0)) {
          local_14 = __lseek_lk(uVar3,-1,2);
          if (local_14 == 0xffffffff) {
            puVar5 = FUN_00ad4b75();
            if (*puVar5 == 0x83) goto LAB_00ad5f02;
          }
          else {
            local_18[0] = 0;
            local_18[1] = 0;
            iVar6 = __read_lk(uVar3,(char *)local_18,(char *)0x1);
            if ((((iVar6 != 0) || (local_18[0] != 0x1a)) ||
                (iVar6 = __chsize_lk(uVar3,local_14), iVar6 != -1)) &&
               (DVar7 = __lseek_lk(uVar3,0,0), DVar7 != 0xffffffff)) goto LAB_00ad5f02;
          }
          __close_lk(uVar3);
          return 0xffffffff;
        }
LAB_00ad5f02:
        if (local_5 != 0) {
          return uVar3;
        }
        if ((param_4 & 8) == 0) {
          return uVar3;
        }
        pbVar1 = (byte *)(iVar9 + 4 + (&DAT_010daa80)[(int)uVar3 >> 5]);
        *pbVar1 = *pbVar1 | 0x20;
        return uVar3;
      }
      CloseHandle(hFile);
    }
    DVar8 = GetLastError();
    __dosmaperr(DVar8);
  }
  return 0xffffffff;
}


//// FUNCTION __wopen @ 00ad5f6a ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wopen
   
   Library: Visual Studio 2003 Release */

int __cdecl __wopen(wchar_t *_Filename,int _OpenFlag,...)

{
  uint uVar1;
  byte in_stack_0000000c;
  uint local_24 [6];
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0xad5f76;
  local_24[1] = 0;
  local_8 = 0;
  uVar1 = __tsopen_lk((void *)0x40,local_24 + 1,local_24,_Filename,_OpenFlag,in_stack_0000000c);
  local_8 = 0xffffffff;
  FUN_00ad5faf();
  return uVar1;
}


//// FUNCTION FUN_00ad5faf @ 00ad5faf ////

void FUN_00ad5faf(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x20));
  }
  return;
}


//// FUNCTION __wsopen @ 00ad5fbf ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __wsopen
   
   Library: Visual Studio 2003 Release */

int __cdecl __wsopen(wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  uint uVar1;
  byte in_stack_00000010;
  uint local_24 [6];
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0xad5fcb;
  local_24[1] = 0;
  local_8 = 0;
  uVar1 = __tsopen_lk((void *)_ShareFlag,local_24 + 1,local_24,_Filename,_OpenFlag,in_stack_00000010
                     );
  local_8 = 0xffffffff;
  FUN_00ad6004();
  return uVar1;
}


//// FUNCTION FUN_00ad6004 @ 00ad6004 ////

void FUN_00ad6004(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    __unlock_fhandle(*(int *)(unaff_EBP + -0x20));
  }
  return;
}


//// FUNCTION __make_time_t @ 00ad6039 ////

/* Library Function - Single Match
    __make_time_t
   
   Library: Visual Studio 2003 Release */

int __cdecl __make_time_t(int param_1)

{
  int iVar1;
  int *in_EAX;
  tm *ptVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  uVar3 = in_EAX[5];
  if ((0x44 < (int)uVar3) && ((int)uVar3 < 0x8c)) {
    iVar5 = in_EAX[4];
    if ((iVar5 < 0) || (0xb < iVar5)) {
      iVar4 = iVar5 % 0xc;
      uVar3 = uVar3 + iVar5 / 0xc;
      in_EAX[4] = iVar4;
      if (iVar4 < 0) {
        in_EAX[4] = iVar4 + 0xc;
        uVar3 = uVar3 - 1;
      }
      if ((int)uVar3 < 0x45) {
        return -1;
      }
      if (0x8b < (int)uVar3) {
        return -1;
      }
    }
    iVar5 = (&DAT_00e9acd4)[in_EAX[4]];
    if (((uVar3 & 3) == 0) && (1 < in_EAX[4])) {
      iVar5 = iVar5 + 1;
    }
    iVar4 = uVar3 * 0x16d + -0x63df + ((int)(uVar3 - 1) >> 2) + iVar5;
    iVar1 = in_EAX[3];
    iVar5 = iVar4 + iVar1;
    if (iVar4 < 0) {
      if ((iVar1 < 0) && (-1 < iVar5)) {
        return -1;
      }
    }
    else if ((-1 < iVar1) && (iVar5 < 0)) {
      return -1;
    }
    iVar4 = iVar5 * 0x18;
    if (iVar5 != 0 && iVar4 / iVar5 != 0x18) {
      return -1;
    }
    iVar1 = in_EAX[2];
    iVar5 = iVar1 + iVar4;
    if (iVar4 < 0) {
      if ((iVar1 < 0) && (-1 < iVar5)) {
        return -1;
      }
    }
    else if ((-1 < iVar1) && (iVar5 < 0)) {
      return -1;
    }
    iVar4 = iVar5 * 0x3c;
    if (iVar5 != 0 && iVar4 / iVar5 != 0x3c) {
      return -1;
    }
    iVar1 = in_EAX[1];
    iVar5 = iVar1 + iVar4;
    if (iVar4 < 0) {
      if ((iVar1 < 0) && (-1 < iVar5)) {
        return -1;
      }
    }
    else if ((-1 < iVar1) && (iVar5 < 0)) {
      return -1;
    }
    iVar4 = iVar5 * 0x3c;
    if (iVar5 != 0 && iVar4 / iVar5 != 0x3c) {
      return -1;
    }
    iVar5 = *in_EAX;
    local_8 = iVar5 + iVar4;
    if (iVar4 < 0) {
      if ((iVar5 < 0) && (-1 < local_8)) {
        return -1;
      }
    }
    else if ((-1 < iVar5) && (local_8 < 0)) {
      return -1;
    }
    if (param_1 == 0) {
      ptVar2 = _gmtime((time_t *)&local_8);
    }
    else {
      ___tzset();
      local_8 = local_8 + DAT_00e9a250;
      ptVar2 = _localtime((time_t *)&local_8);
      if (ptVar2 == (tm *)0x0) {
        return -1;
      }
      if ((in_EAX[8] < 1) && ((-1 < in_EAX[8] || (ptVar2->tm_isdst < 1)))) goto LAB_00ad61ea;
      local_8 = local_8 + DAT_00e9a258;
      ptVar2 = _localtime((time_t *)&local_8);
    }
    if (ptVar2 != (tm *)0x0) {
LAB_00ad61ea:
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *in_EAX = ptVar2->tm_sec;
        ptVar2 = (tm *)&ptVar2->tm_min;
        in_EAX = in_EAX + 1;
      }
      return local_8;
    }
  }
  return -1;
}


//// FUNCTION _mktime @ 00ad61f9 ////

/* Library Function - Single Match
    _mktime
   
   Library: Visual Studio 2003 Release */

time_t __cdecl _mktime(tm *_Tm)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  iVar1 = __make_time_t(1);
  return CONCAT44(extraout_EDX,iVar1);
}


//// FUNCTION _gmtime @ 00ad6213 ////

/* Library Function - Single Match
    _gmtime
   
   Library: Visual Studio 2003 Release */

tm * __cdecl _gmtime(time_t *_Time)

{
  bool bVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  tm *ptVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar8 = (int)*_Time;
  bVar1 = false;
  p_Var2 = __getptd();
  if (iVar8 < 0) {
    return (tm *)0x0;
  }
  if (p_Var2->_gmtimebuf == (void *)0x0) {
    pvVar3 = _malloc(0x24);
    p_Var2->_gmtimebuf = pvVar3;
    ptVar4 = (tm *)&DAT_010cbc34;
    if (pvVar3 == (void *)0x0) goto LAB_00ad624d;
  }
  ptVar4 = p_Var2->_gmtimebuf;
LAB_00ad624d:
  iVar6 = iVar8 % 0x7861f80;
  iVar8 = (iVar8 / 0x7861f80) * 4;
  iVar5 = iVar8 + 0x46;
  iVar7 = iVar6;
  if (0x1e1337f < iVar6) {
    iVar7 = iVar6 + -0x1e13380;
    iVar5 = iVar8 + 0x47;
    if (0x1e1337f < iVar7) {
      iVar7 = iVar6 + -0x3c26700;
      iVar5 = iVar8 + 0x48;
      if (iVar7 < 0x1e28500) {
        bVar1 = true;
      }
      else {
        iVar5 = iVar8 + 0x49;
        iVar7 = iVar6 + -0x5a4ec00;
      }
    }
  }
  ptVar4->tm_year = iVar5;
  puVar9 = (undefined4 *)&DAT_00e9aca0;
  ptVar4->tm_yday = iVar7 / 0x15180;
  if (!bVar1) {
    puVar9 = &DAT_00e9acd4;
  }
  iVar5 = 1;
  iVar8 = puVar9[1];
  while (iVar8 < ptVar4->tm_yday) {
    iVar5 = iVar5 + 1;
    iVar8 = puVar9[iVar5];
  }
  ptVar4->tm_mon = iVar5 + -1;
  ptVar4->tm_mday = ptVar4->tm_yday - puVar9[iVar5 + -1];
  ptVar4->tm_wday = ((int)*_Time / 0x15180 + 4) % 7;
  ptVar4->tm_hour = (iVar7 % 0x15180) / 0xe10;
  iVar8 = (iVar7 % 0x15180) % 0xe10;
  ptVar4->tm_min = iVar8 / 0x3c;
  ptVar4->tm_isdst = 0;
  ptVar4->tm_sec = iVar8 % 0x3c;
  return ptVar4;
}


//// FUNCTION __pipe @ 00ad631a ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __pipe
   
   Library: Visual Studio 2003 Release */

int __cdecl __pipe(int *_PtHandles,uint _PipeSize,int _TextMode)

{
  byte *pbVar1;
  WINBOOL WVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulong *puVar7;
  int iVar8;
  int iVar9;
  _SECURITY_ATTRIBUTES local_38;
  HANDLE local_2c;
  HANDLE local_28;
  uint local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7e348;
  uStack_c = 0xad6326;
  _PtHandles[1] = -1;
  *_PtHandles = -1;
  local_38.nLength = 0xc;
  local_38.lpSecurityDescriptor = (LPVOID)0x0;
  local_38.bInheritHandle = (WINBOOL)((_TextMode & 0x80U) == 0);
  WVar2 = CreatePipe(&local_28,&local_2c,&local_38,_PipeSize);
  if (WVar2 == 0) {
    DVar3 = GetLastError();
    __dosmaperr(DVar3);
    return -1;
  }
  uVar4 = __alloc_osfhnd();
  local_20 = uVar4;
  if (uVar4 == 0xffffffff) {
    piVar6 = FUN_00ad4b6c();
    uVar5 = local_24;
  }
  else {
    iVar8 = (int)uVar4 >> 5;
    *(undefined1 *)((&DAT_010daa80)[iVar8] + 4 + (uVar4 & 0x1f) * 0x24) = 0x89;
    local_8 = (undefined *)0xffffffff;
    FUN_00ad6494();
    uVar5 = __alloc_osfhnd();
    local_24 = uVar5;
    if (uVar5 != 0xffffffff) {
      iVar9 = (int)uVar5 >> 5;
      *(undefined1 *)((&DAT_010daa80)[iVar9] + 4 + (uVar5 & 0x1f) * 0x24) = 0x89;
      local_8 = (undefined *)0xffffffff;
      FUN_00ad64a5();
      if (((_TextMode & 0x8000U) != 0) || (((_TextMode & 0x4000U) == 0 && (DAT_010cc040 == 0x8000)))
         ) {
        pbVar1 = (byte *)((&DAT_010daa80)[iVar8] + 4 + (uVar4 & 0x1f) * 0x24);
        *pbVar1 = *pbVar1 & 0x7f;
        pbVar1 = (byte *)((&DAT_010daa80)[iVar9] + 4 + (uVar5 & 0x1f) * 0x24);
        *pbVar1 = *pbVar1 & 0x7f;
      }
      if ((_TextMode & 0x80U) != 0) {
        pbVar1 = (byte *)((&DAT_010daa80)[iVar8] + 4 + (uVar4 & 0x1f) * 0x24);
        *pbVar1 = *pbVar1 | 0x10;
        pbVar1 = (byte *)((&DAT_010daa80)[iVar9] + 4 + (uVar5 & 0x1f) * 0x24);
        *pbVar1 = *pbVar1 | 0x10;
      }
      __set_osfhnd(uVar4,(intptr_t)local_28);
      __set_osfhnd(uVar5,(intptr_t)local_2c);
      piVar6 = FUN_00ad4b6c();
      *piVar6 = 0;
      goto LAB_00ad64e0;
    }
    *(undefined1 *)((&DAT_010daa80)[iVar8] + 4 + (uVar4 & 0x1f) * 0x24) = 0;
    piVar6 = FUN_00ad4b6c();
  }
  *piVar6 = 0x18;
LAB_00ad64e0:
  piVar6 = FUN_00ad4b6c();
  if (*piVar6 == 0) {
    *_PtHandles = uVar4;
    _PtHandles[1] = uVar5;
    iVar8 = 0;
  }
  else {
    CloseHandle(local_28);
    CloseHandle(local_2c);
    puVar7 = FUN_00ad4b75();
    *puVar7 = 0;
    iVar8 = -1;
  }
  return iVar8;
}


//// FUNCTION FUN_00ad6494 @ 00ad6494 ////

void FUN_00ad6494(void)

{
  int unaff_EDI;
  
  __unlock_fhandle(unaff_EDI);
  return;
}


//// FUNCTION FUN_00ad64a5 @ 00ad64a5 ////

void FUN_00ad64a5(void)

{
  int unaff_ESI;
  
  if (unaff_ESI != -1) {
    __unlock_fhandle(unaff_ESI);
  }
  return;
}


//// FUNCTION __callnewh @ 00ad653e ////

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if (DAT_010cbc58 != (code *)0x0) {
    iVar1 = (*DAT_010cbc58)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION _strlen @ 00ad6560 ////

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_00ad6590;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_00ad65c3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_00ad6590:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_00ad65c3;
}


//// FUNCTION _memcpy @ 00ad65f0 ////

/* Library Function - Multiple Matches With Different Base Names
    _memcpy
    _memmove
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release, Visual Studio 2019 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_00ad67ab_caseD_2;
        case 3:
          goto switchD_00ad67ab_caseD_3;
        }
        goto switchD_00ad67ab_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_00ad67ab_caseD_0;
      case 1:
        goto switchD_00ad67ab_caseD_1;
      case 2:
        goto switchD_00ad67ab_caseD_2;
      case 3:
        goto switchD_00ad67ab_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00ad67ab_caseD_2;
            case 3:
              goto switchD_00ad67ab_caseD_3;
            }
            goto switchD_00ad67ab_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00ad67ab_caseD_2;
            case 3:
              goto switchD_00ad67ab_caseD_3;
            }
            goto switchD_00ad67ab_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00ad67ab_caseD_2;
            case 3:
              goto switchD_00ad67ab_caseD_3;
            }
            goto switchD_00ad67ab_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_00ad67ab_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_00ad67ab_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_00ad67ab_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_00ad67ab_caseD_0:
    return _Dst;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_00ad6625_caseD_2;
      case 3:
        goto switchD_00ad6625_caseD_3;
      }
      goto switchD_00ad6625_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_00ad6625_caseD_0;
    case 1:
      goto switchD_00ad6625_caseD_1;
    case 2:
      goto switchD_00ad6625_caseD_2;
    case 3:
      goto switchD_00ad6625_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00ad6625_caseD_2;
          case 3:
            goto switchD_00ad6625_caseD_3;
          }
          goto switchD_00ad6625_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00ad6625_caseD_2;
          case 3:
            goto switchD_00ad6625_caseD_3;
          }
          goto switchD_00ad6625_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00ad6625_caseD_2;
          case 3:
            goto switchD_00ad6625_caseD_3;
          }
          goto switchD_00ad6625_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 6:
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 5:
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 4:
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 3:
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 2:
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 1:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_00ad6625_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_00ad6625_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00ad6625_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_00ad6625_caseD_0:
  return _Dst;
}


//// FUNCTION FUN_00ad6930 @ 00ad6930 ////

void FUN_00ad6930(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}


//// FUNCTION FUN_00ad696b @ 00ad696b ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

uint __cdecl
FUN_00ad696b(LCID param_1,uint param_2,LPCSTR param_3,size_t param_4,LPSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  undefined1 *puVar5;
  int iVar6;
  UINT UVar7;
  LPSTR pCVar8;
  size_t sVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 uStackY_74;
  uint local_4c;
  LPSTR local_2c;
  size_t local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7e368;
  uStack_c = 0xad6977;
  if (DAT_010cbc5c == 0) {
    uStackY_74 = 0xad6998;
    iVar3 = LCMapStringW(0,0x100,(LPCWSTR)&lpSrcStr_00d7e360,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_010cbc5c = 2;
      }
    }
    else {
      DAT_010cbc5c = 1;
    }
  }
  pcVar15 = param_3;
  sVar9 = param_4;
  if (0 < (int)param_4) {
    do {
      sVar9 = sVar9 - 1;
      if (*pcVar15 == '\0') goto LAB_00ad69d1;
      pcVar15 = pcVar15 + 1;
    } while (sVar9 != 0);
    sVar9 = 0xffffffff;
LAB_00ad69d1:
    param_4 = param_4 + (-1 - sVar9);
  }
  if ((DAT_010cbc5c != 2) && (DAT_010cbc5c != 0)) {
    if (DAT_010cbc5c == 1) {
      uVar14 = 0;
      bVar2 = false;
      bVar1 = false;
      if (param_7 == 0) {
        param_7 = CodePage_010cc05c;
      }
      uStackY_74 = 0xad6a31;
      iVar3 = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0,0
                                 );
      if (iVar3 != 0) {
        puVar5 = (undefined1 *)(iVar3 * 2 + 3U & 0xfffffffc);
        iVar6 = -(int)puVar5;
        local_1c = &stack0xffffffa8 + iVar6;
        local_20 = &stack0xffffffa8 + iVar6;
        local_8 = (undefined *)0xffffffff;
        if (&stack0xffffffa8 == puVar5) {
          *(int *)(&stack0xffffffa4 + iVar6) = iVar3 * 2;
          *(undefined4 *)(&stack0xffffffa0 + iVar6) = 0xad6a8a;
          local_20 = _malloc(*(size_t *)(&stack0xffffffa4 + iVar6));
          if (local_20 == (undefined1 *)0x0) {
            return 0;
          }
          bVar2 = true;
        }
        *(int *)(&stack0xffffffa4 + iVar6) = iVar3;
        *(undefined1 **)(&stack0xffffffa0 + iVar6) = local_20;
        *(size_t *)(&stack0xffffff9c + iVar6) = param_4;
        *(LPCSTR *)(&stack0xffffff98 + iVar6) = param_3;
        *(undefined4 *)(&stack0xffffff94 + iVar6) = 1;
        *(UINT *)(&stack0xffffff90 + iVar6) = param_7;
        puVar10 = (undefined1 *)((int)&uStackY_74 + iVar6);
        *(undefined4 *)((int)&uStackY_74 + iVar6) = 0xad6ab2;
        iVar6 = MultiByteToWideChar(*(UINT *)(&stack0xffffff90 + iVar6),
                                    *(DWORD *)(&stack0xffffff94 + iVar6),
                                    *(LPCCH *)(&stack0xffffff98 + iVar6),
                                    *(int *)(&stack0xffffff9c + iVar6),
                                    *(LPWSTR *)(&stack0xffffffa0 + iVar6),
                                    *(int *)(&stack0xffffffa4 + iVar6));
        puVar5 = puVar10;
        if (iVar6 != 0) {
          *(undefined4 *)(puVar10 + -4) = 0;
          *(undefined4 *)(puVar10 + -8) = 0;
          *(int *)(puVar10 + -0xc) = iVar3;
          *(undefined1 **)(puVar10 + -0x10) = local_20;
          *(uint *)(puVar10 + -0x14) = param_2;
          *(LCID *)(puVar10 + -0x18) = param_1;
          puVar11 = puVar10 + -0x1c;
          *(undefined4 *)(puVar10 + -0x1c) = 0xad6acc;
          uVar14 = LCMapStringW(*(LCID *)(puVar10 + -0x18),*(DWORD *)(puVar10 + -0x14),
                                *(LPCWSTR *)(puVar10 + -0x10),*(int *)(puVar10 + -0xc),
                                *(LPWSTR *)(puVar10 + -8),*(int *)(puVar10 + -4));
          puVar5 = puVar11;
          if (uVar14 != 0) {
            if ((param_2 & 0x400) == 0) {
              puVar5 = (undefined1 *)(uVar14 * 2 + 3 & 0xfffffffc);
              *(undefined4 *)(puVar11 + -4) = 0xad6b21;
              iVar6 = -(int)puVar5;
              local_1c = puVar11 + iVar6;
              local_24 = puVar11 + iVar6;
              local_8 = (undefined *)0xffffffff;
              if (puVar11 == puVar5) {
                *(uint *)(puVar11 + iVar6 + -4) = uVar14 * 2;
                *(undefined4 *)(puVar11 + iVar6 + -8) = 0xad6b58;
                local_24 = _malloc(*(size_t *)(puVar11 + iVar6 + -4));
                puVar5 = puVar11 + iVar6;
                if (local_24 == (undefined1 *)0x0) goto LAB_00ad6ba0;
                bVar1 = true;
              }
              *(uint *)(puVar11 + iVar6 + -4) = uVar14;
              *(undefined1 **)(puVar11 + iVar6 + -8) = local_24;
              *(int *)(puVar11 + iVar6 + -0xc) = iVar3;
              *(undefined1 **)(puVar11 + iVar6 + -0x10) = local_20;
              *(uint *)(puVar11 + iVar6 + -0x14) = param_2;
              *(LCID *)(puVar11 + iVar6 + -0x18) = param_1;
              puVar13 = puVar11 + iVar6 + -0x1c;
              *(undefined4 *)(puVar11 + iVar6 + -0x1c) = 0xad6b7b;
              iVar3 = LCMapStringW(*(LCID *)(puVar11 + iVar6 + -0x18),
                                   *(DWORD *)(puVar11 + iVar6 + -0x14),
                                   *(LPCWSTR *)(puVar11 + iVar6 + -0x10),
                                   *(int *)(puVar11 + iVar6 + -0xc),
                                   *(LPWSTR *)(puVar11 + iVar6 + -8),*(int *)(puVar11 + iVar6 + -4))
              ;
              puVar5 = puVar13;
              if (iVar3 != 0) {
                *(undefined4 *)(puVar13 + -4) = 0;
                *(undefined4 *)(puVar13 + -8) = 0;
                if (param_6 == 0) {
                  *(undefined4 *)(puVar13 + -0xc) = 0;
                  *(undefined4 *)(puVar13 + -0x10) = 0;
                }
                else {
                  *(int *)(puVar13 + -0xc) = param_6;
                  *(LPSTR *)(puVar13 + -0x10) = param_5;
                }
                *(uint *)(puVar13 + -0x14) = uVar14;
                *(undefined1 **)(puVar13 + -0x18) = local_24;
                *(undefined4 *)(puVar13 + -0x1c) = 0;
                *(UINT *)(puVar13 + -0x20) = param_7;
                puVar5 = puVar13 + -0x24;
                *(undefined4 *)(puVar13 + -0x24) = 0xad6b9e;
                uVar14 = WideCharToMultiByte(*(UINT *)(puVar13 + -0x20),*(DWORD *)(puVar13 + -0x1c),
                                             *(LPCWCH *)(puVar13 + -0x18),*(int *)(puVar13 + -0x14),
                                             *(LPSTR *)(puVar13 + -0x10),*(int *)(puVar13 + -0xc),
                                             *(LPCCH *)(puVar13 + -8),*(LPBOOL *)(puVar13 + -4));
              }
            }
            else if ((param_6 != 0) && ((int)uVar14 <= param_6)) {
              *(int *)(puVar11 + -4) = param_6;
              *(LPSTR *)(puVar11 + -8) = param_5;
              *(int *)(puVar11 + -0xc) = iVar3;
              *(undefined1 **)(puVar11 + -0x10) = local_20;
              *(uint *)(puVar11 + -0x14) = param_2;
              *(LCID *)(puVar11 + -0x18) = param_1;
              puVar12 = puVar11 + -0x1c;
              *(undefined4 *)(puVar11 + -0x1c) = 0xad6b07;
              LCMapStringW(*(LCID *)(puVar11 + -0x18),*(DWORD *)(puVar11 + -0x14),
                           *(LPCWSTR *)(puVar11 + -0x10),*(int *)(puVar11 + -0xc),
                           *(LPWSTR *)(puVar11 + -8),*(int *)(puVar11 + -4));
              puVar5 = puVar12;
            }
          }
        }
LAB_00ad6ba0:
        if (bVar1) {
          *(undefined1 **)(puVar5 + -4) = local_24;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar5 + -8) = &UNK_00ad6bad;
          _free(*(void **)(puVar5 + -4));
        }
        if (bVar2) {
          *(undefined1 **)(puVar5 + -4) = local_20;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar5 + -8) = &UNK_00ad6bbb;
          _free(*(void **)(puVar5 + -4));
        }
        return uVar14;
      }
    }
    return 0;
  }
  local_2c = (LPSTR)0x0;
  pcVar15 = (char *)0x0;
  bVar1 = false;
  if (param_1 == 0) {
    param_1 = DAT_010cc04c;
  }
  if (param_7 == 0) {
    param_7 = CodePage_010cc05c;
  }
  UVar7 = ___ansicp(param_1);
  if (UVar7 == 0xffffffff) {
    return 0;
  }
  if (UVar7 == param_7) {
    uStackY_74 = 0xad6d0c;
    local_4c = LCMapStringA(param_1,param_2,param_3,param_4,param_5,param_6);
    goto LAB_00ad6d0e;
  }
  uStackY_74 = 0xad6c18;
  local_2c = FUN_00ae9e5c(param_7,UVar7,param_3,&param_4,(LPSTR)0x0,0);
  if (local_2c == (LPSTR)0x0) {
    return 0;
  }
  uStackY_74 = 0xad6c34;
  local_28 = LCMapStringA(param_1,param_2,local_2c,param_4,(LPSTR)0x0,0);
  if (local_28 != 0) {
    local_8 = (undefined *)0x0;
    local_1c = &stack0xffffffa8;
    pcVar15 = &stack0xffffffa8;
    _memset(&stack0xffffffa8,0,local_28);
    local_8 = (undefined *)0xffffffff;
    if (&stack0x00000000 == (undefined1 *)0x58) {
      pcVar15 = _malloc(local_28);
      if (pcVar15 != (char *)0x0) {
        _memset(pcVar15,0,local_28);
        bVar1 = true;
        goto LAB_00ad6c9f;
      }
    }
    else {
LAB_00ad6c9f:
      uStackY_74 = 0xad6cb5;
      local_28 = LCMapStringA(param_1,param_2,local_2c,param_4,pcVar15,local_28);
      if (local_28 != 0) {
        uStackY_74 = 0xad6cd6;
        pCVar8 = FUN_00ae9e5c(UVar7,param_7,pcVar15,&local_28,param_5,param_6);
        local_4c = (uint)(pCVar8 != (LPSTR)0x0);
        goto LAB_00ad6ce6;
      }
    }
    local_4c = 0;
  }
LAB_00ad6ce6:
  if (bVar1) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar15);
  }
LAB_00ad6d0e:
  if (local_2c != (LPSTR)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  return local_4c;
}


//// FUNCTION FUN_00ad6d2d @ 00ad6d2d ////

undefined * FUN_00ad6d2d(void)

{
  return PTR_DAT_00e9a2f0;
}


//// FUNCTION FUN_00ad6d33 @ 00ad6d33 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00ad6d33(void)

{
  BYTE *pBVar1;
  byte bVar2;
  int iVar3;
  void *_Dst;
  LPCSTR _Memory;
  WINBOOL WVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 *local_24;
  _cpinfo local_1c;
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if (DAT_010cc04c == 0) {
    PTR_DAT_00e9a2f0 = &DAT_00d7e490;
    DAT_010dadfc = (undefined4 *)0x0;
    DAT_010dadf8 = (undefined2 *)0x0;
    return 0;
  }
  if ((CodePage_010cc05c != 0) ||
     (iVar3 = FUN_00aea1df(0,(uint)DAT_010cc07c,0x1004,(char *)&CodePage_010cc05c), iVar3 == 0)) {
    local_24 = _malloc(4);
    _Dst = _malloc(0x300);
    _Memory = _malloc(0x101);
    if ((local_24 != (undefined4 *)0x0) && ((_Dst != (void *)0x0 && (_Memory != (LPCSTR)0x0)))) {
      *local_24 = 0;
      iVar3 = 0;
      do {
        _Memory[iVar3] = (CHAR)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      WVar4 = GetCPInfo(CodePage_010cc05c,&local_1c);
      if ((WVar4 != 0) && (local_1c.MaxCharSize < 6)) {
        cbMultiByte_00e9a94c = local_1c.MaxCharSize & 0xffff;
        if ((1 < (uint)cbMultiByte_00e9a94c) && (local_1c.LeadByte[0] != '\0')) {
          pBVar6 = local_1c.LeadByte + 1;
          do {
            bVar2 = *pBVar6;
            if (bVar2 == 0) break;
            for (uVar7 = (uint)pBVar6[-1]; (int)uVar7 <= (int)(uint)bVar2; uVar7 = uVar7 + 1) {
              _Memory[uVar7] = '\0';
              bVar2 = *pBVar6;
            }
            pBVar1 = pBVar6 + 1;
            pBVar6 = pBVar6 + 2;
          } while (*pBVar1 != 0);
        }
        BVar5 = FUN_00aea025(1,_Memory,0x100,(LPWORD)((int)_Dst + 0x100),0,0,0);
        if (BVar5 != 0) {
          *(undefined2 *)((int)_Dst + 0xfe) = 0;
          if ((1 < cbMultiByte_00e9a94c) && (local_1c.LeadByte[0] != '\0')) {
            pBVar6 = local_1c.LeadByte + 1;
            do {
              if (*pBVar6 == 0) break;
              uVar7 = (uint)pBVar6[-1];
              if (uVar7 <= *pBVar6) {
                puVar8 = (undefined2 *)((int)_Dst + uVar7 * 2 + 0x100);
                do {
                  *puVar8 = 0x8000;
                  uVar7 = uVar7 + 1;
                  puVar8 = puVar8 + 1;
                } while ((int)uVar7 <= (int)(uint)*pBVar6);
              }
              pBVar1 = pBVar6 + 1;
              pBVar6 = pBVar6 + 2;
            } while (*pBVar1 != 0);
          }
          _memcpy(_Dst,(void *)((int)_Dst + 0x200),0xfe);
          PTR_DAT_00e9a2f0 = (undefined *)((int)_Dst + 0x100);
          DAT_010dadf8 = (undefined2 *)((int)_Dst + 0xfe);
          DAT_010dadfc = local_24;
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}


//// FUNCTION FUN_00ad6f1d @ 00ad6f1d ////

int FUN_00ad6f1d(void)

{
  return cbMultiByte_00e9a94c;
}


//// FUNCTION ____lc_codepage_func @ 00ad6f23 ////

/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2003 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}


//// FUNCTION ____lc_handle_func @ 00ad6f55 ////

/* Library Function - Single Match
    ____lc_handle_func
   
   Library: Visual Studio 2003 Release */

uint * ____lc_handle_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (pthreadlocinfo)PTR_DAT_00e9a474) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_handle;
}


//// FUNCTION __mtinitlocks @ 00ad6f6e ////

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2003 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION p_Var3;
  
  iVar2 = 0;
  p_Var3 = (LPCRITICAL_SECTION)&DAT_010cbc60;
  do {
    if ((&DAT_00e9a2fc)[iVar2 * 2] == 1) {
      (&lpCriticalSection_00e9a2f8)[iVar2 * 2] = p_Var3;
      p_Var3 = p_Var3 + 1;
      iVar1 = ___crtInitCritSecAndSpinCount((&lpCriticalSection_00e9a2f8)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&lpCriticalSection_00e9a2f8)[iVar2 * 2] = (LPCRITICAL_SECTION)0x0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


//// FUNCTION FUN_00ad6fb7 @ 00ad6fb7 ////

void FUN_00ad6fb7(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION *pp_Var1;
  
  pp_Var1 = &lpCriticalSection_00e9a2f8;
  while ((lpCriticalSection = *pp_Var1, lpCriticalSection == (LPCRITICAL_SECTION)0x0 ||
         (pp_Var1[1] == (LPCRITICAL_SECTION)0x1))) {
    pp_Var1 = pp_Var1 + 2;
    if (0xe9a417 < (int)pp_Var1) {
      pp_Var1 = &lpCriticalSection_00e9a2f8;
      do {
        if ((*pp_Var1 != (LPCRITICAL_SECTION)0x0) && (pp_Var1[1] == (LPCRITICAL_SECTION)0x1)) {
          DeleteCriticalSection((LPCRITICAL_SECTION)*pp_Var1);
        }
        pp_Var1 = pp_Var1 + 2;
      } while ((int)pp_Var1 < 0xe9a418);
      return;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    /* WARNING: Subroutine does not return */
  _free(lpCriticalSection);
}


//// FUNCTION FUN_00ad700c @ 00ad700c ////

void __cdecl FUN_00ad700c(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&lpCriticalSection_00e9a2f8)[param_1 * 2]);
  return;
}


//// FUNCTION FUN_00ad7039 @ 00ad7039 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

undefined4 __cdecl FUN_00ad7039(int param_1)

{
  LPCRITICAL_SECTION *pp_Var1;
  LPCRITICAL_SECTION _Memory;
  int *piVar2;
  int iVar3;
  
  pp_Var1 = &lpCriticalSection_00e9a2f8 + param_1 * 2;
  if (*pp_Var1 == (LPCRITICAL_SECTION)0x0) {
    _Memory = _malloc(0x18);
    if (_Memory == (LPCRITICAL_SECTION)0x0) {
      piVar2 = FUN_00ad4b6c();
      *piVar2 = 0xc;
      return 0;
    }
    __lock(10);
    if (*pp_Var1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *pp_Var1 = _Memory;
    FUN_00ad70d0();
  }
  return 1;
}


//// FUNCTION FUN_00ad70d0 @ 00ad70d0 ////

void FUN_00ad70d0(void)

{
  FUN_00ad700c(10);
  return;
}


//// FUNCTION __lock @ 00ad70d9 ////

/* Library Function - Single Match
    __lock
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&lpCriticalSection_00e9a2f8)[_File * 2] == (LPCRITICAL_SECTION)0x0) {
    iVar1 = FUN_00ad7039(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&lpCriticalSection_00e9a2f8)[_File * 2]);
  return;
}


//// FUNCTION FUN_00ad710a @ 00ad710a ////

undefined4 FUN_00ad710a(void)

{
  return DAT_010dadf0;
}


//// FUNCTION FUN_00ad7110 @ 00ad7110 ////

undefined * FUN_00ad7110(void)

{
  return &DAT_010dadf4;
}


//// FUNCTION FUN_00ad7116 @ 00ad7116 ////

void FUN_00ad7116(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)((int)param_1 + 0x3c) != DAT_010cc098) && (*(int *)((int)param_1 + 0x3c) != 0)) &&
     (**(int **)((int)param_1 + 0x2c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x34);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != DAT_010daa68)) {
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
    piVar1 = *(int **)((int)param_1 + 0x30);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != DAT_010daa70)) {
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x2c));
  }
  piVar1 = *(int **)((int)param_1 + 0x40);
  if (((piVar1 != DAT_010dadfc) && (piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  iVar2 = *(int *)((int)param_1 + 0x50);
  if (((iVar2 != DAT_010cc094) && (iVar2 != 0)) && (*(int *)(iVar2 + 0xb4) == 0)) {
    FUN_00aea66d(iVar2);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x50));
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION ___updatetlocinfo_lk @ 00ad71e6 ////

/* Library Function - Single Match
    ___updatetlocinfo_lk
   
   Library: Visual Studio 2003 Release */

int ___updatetlocinfo_lk(void)

{
  int *piVar1;
  int *piVar2;
  _ptiddata p_Var3;
  
  p_Var3 = __getptd();
  piVar1 = (int *)p_Var3->_tfpecode;
  if (piVar1 != (int *)PTR_DAT_00e9a474) {
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0xb];
      *piVar1 = *piVar1 + -1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xd];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xc];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0x10];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
    }
    p_Var3->_tfpecode = (int)PTR_DAT_00e9a474;
    *(int *)PTR_DAT_00e9a474 = *(int *)PTR_DAT_00e9a474 + 1;
    if (*(int *)(PTR_DAT_00e9a474 + 0x2c) != 0) {
      **(int **)(PTR_DAT_00e9a474 + 0x2c) = **(int **)(PTR_DAT_00e9a474 + 0x2c) + 1;
    }
    if (*(int *)(PTR_DAT_00e9a474 + 0x34) != 0) {
      **(int **)(PTR_DAT_00e9a474 + 0x34) = **(int **)(PTR_DAT_00e9a474 + 0x34) + 1;
    }
    if (*(int *)(PTR_DAT_00e9a474 + 0x30) != 0) {
      **(int **)(PTR_DAT_00e9a474 + 0x30) = **(int **)(PTR_DAT_00e9a474 + 0x30) + 1;
    }
    if (*(int *)(PTR_DAT_00e9a474 + 0x40) != 0) {
      **(int **)(PTR_DAT_00e9a474 + 0x40) = **(int **)(PTR_DAT_00e9a474 + 0x40) + 1;
    }
    *(int *)(*(int *)(PTR_DAT_00e9a474 + 0x4c) + 0xb4) =
         *(int *)(*(int *)(PTR_DAT_00e9a474 + 0x4c) + 0xb4) + 1;
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != &DAT_00e9a420)) {
      FUN_00ad7116(piVar1);
    }
  }
  return p_Var3->_tfpecode;
}


//// FUNCTION __strcats @ 00ad72aa ////

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Release */

void __cdecl __strcats(uint *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_2) {
    piVar1 = &param_2;
    iVar2 = param_2;
    do {
      piVar1 = piVar1 + 1;
      FUN_00ada2f0(param_1,(uint *)*piVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


//// FUNCTION ___lc_strtolc @ 00ad72ce ////

/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  size_t _Count;
  char *_Str;
  char *_Dest;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      do {
        _Count = _strcspn(_Str,"_.,");
        if (_Count == 0) {
          return 0xffffffff;
        }
        cVar1 = _Str[_Count];
        if (param_2 == (char *)0x0) {
          if (0x3f < _Count) {
            return 0xffffffff;
          }
          _Dest = param_1;
          if (cVar1 == '.') {
            return 0xffffffff;
          }
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < _Count) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _Dest = param_1 + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if (0xf < _Count) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _Dest = param_1 + 0x80;
        }
        _strncpy(_Dest,_Str,_Count);
        if ((cVar1 == ',') || (cVar1 == '\0')) {
          return 0;
        }
        param_2 = param_2 + 1;
        _Str = _Str + _Count + 1;
      } while( true );
    }
    _strncpy(param_1 + 0x80,param_2 + 1,0xf);
    param_1[0x8f] = '\0';
  }
  return 0;
}


//// FUNCTION ___lc_lctostr @ 00ad73aa ////

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Release */

void __cdecl ___lc_lctostr(uint *param_1,uint *param_2)

{
  FUN_00ada2e0(param_1,param_2);
  if ((char)param_2[0x10] != '\0') {
    __strcats(param_1,2);
  }
  if ((char)param_2[0x20] != '\0') {
    __strcats(param_1,2);
  }
  return;
}


//// FUNCTION ___updatetlocinfo @ 00ad73f8 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2003 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  pthreadlocinfo ptVar1;
  
  __lock(0xc);
  ptVar1 = (pthreadlocinfo)___updatetlocinfo_lk();
  FUN_00ad742a();
  return ptVar1;
}


//// FUNCTION FUN_00ad742a @ 00ad742a ////

void FUN_00ad742a(void)

{
  FUN_00ad700c(0xc);
  return;
}


//// FUNCTION FUN_00ad7433 @ 00ad7433 ////

uint * FUN_00ad7433(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_00e9a5b4 == (uint *)0x0) {
    DAT_00e9a5b4 = _malloc(0x351);
    if (DAT_00e9a5b4 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  *(undefined1 *)DAT_00e9a5b4 = 0;
  __strcats(DAT_00e9a5b4,3);
  ppuVar3 = &PTR_DAT_00e9a5c0;
  do {
    FUN_00ada2f0(DAT_00e9a5b4,(uint *)&DAT_00d233f8);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,*ppuVar4);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    __strcats(DAT_00e9a5b4,3);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0xe9a5f0);
  if (!bVar1) {
    return DAT_00e9a5b4;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_00e9a5b4);
}


//// FUNCTION __expandlocale @ 00ad74f2 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __expandlocale
   
   Library: Visual Studio 2003 Release */

uint * __cdecl __expandlocale(char *param_1,uint *param_2,undefined2 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  int iVar2;
  BOOL BVar3;
  uint local_98 [36];
  wchar_t local_8 [2];
  
  local_8 = (wchar_t  [2])DAT_00e9a098;
  if (param_1 == (char *)0x0) {
    param_2 = (uint *)0x0;
  }
  else if ((*param_1 == 'C') && (param_1[1] == '\0')) {
    *(undefined1 *)param_2 = 0x43;
    *(undefined1 *)((int)param_2 + 1) = 0;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    sVar1 = _strlen(param_1);
    if ((0x81 < sVar1) ||
       ((iVar2 = _strcmp(&DAT_00e9a528,param_1), iVar2 != 0 &&
        (iVar2 = _strcmp(&DAT_00e9a4a0,param_1), iVar2 != 0)))) {
      iVar2 = ___lc_strtolc((char *)local_98,param_1);
      if ((iVar2 != 0) ||
         (BVar3 = ___get_qualified_locale
                            ((LPLC_STRINGS)local_98,(UINT *)&DAT_010cbdb0,(LPLC_STRINGS)local_98),
         BVar3 == 0)) {
        return (uint *)0x0;
      }
      _DAT_010cbdb8 = (uint)DAT_010cbdb4;
      ___lc_lctostr((uint *)&DAT_00e9a528,local_98);
      if ((*param_1 == '\0') || (sVar1 = _strlen(param_1), 0x81 < sVar1)) {
        param_1 = "";
      }
      DAT_00e9a522 = 0;
      _strncpy(&DAT_00e9a4a0,param_1,0x82);
    }
    if (param_3 != (undefined2 *)0x0) {
      _memcpy(param_3,&DAT_010cbdb0,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      _memcpy(param_4,&DAT_010cbdb8,4);
    }
    FUN_00ada2e0(param_2,(uint *)&DAT_00e9a528);
    param_2 = (uint *)&DAT_00e9a528;
  }
  return param_2;
}


//// FUNCTION FUN_00ad764e @ 00ad764e ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl FUN_00ad764e(char *param_1)

{
  byte *pbVar1;
  UINT UVar2;
  uint *puVar3;
  int iVar4;
  size_t sVar5;
  UINT *pUVar6;
  BOOL BVar7;
  uint uVar8;
  undefined4 uVar9;
  UINT UVar10;
  int unaff_ESI;
  undefined1 local_1c4 [8];
  UINT local_1bc;
  uint local_1b4;
  ushort local_1b0 [6];
  UINT local_1a4;
  UINT local_1a0;
  uint *local_19c;
  undefined *local_198;
  UINT local_194;
  undefined *local_190;
  undefined2 local_18c;
  uint local_8c [33];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  puVar3 = __expandlocale(param_1,local_8c,local_1b0,&local_194);
  uVar9 = 0;
  if (puVar3 != (uint *)0x0) {
    iVar4 = _strcmp((char *)local_8c,(char *)(&DAT_00e9a5b4)[unaff_ESI * 3]);
    if (iVar4 == 0) {
      uVar9 = (&DAT_00e9a5b4)[unaff_ESI * 3];
    }
    else {
      sVar5 = _strlen((char *)local_8c);
      local_19c = _malloc(sVar5 + 1);
      uVar9 = 0;
      if (local_19c != (uint *)0x0) {
        local_198 = (undefined *)(&DAT_00e9a5b4)[unaff_ESI * 3];
        local_1b4 = (&DAT_010cc044)[unaff_ESI];
        local_190 = &DAT_010cc070 + unaff_ESI * 6;
        _memcpy(local_1c4,local_190,6);
        local_1a0 = CodePage_010cc05c;
        puVar3 = FUN_00ada2e0(local_19c,local_8c);
        (&DAT_00e9a5b4)[unaff_ESI * 3] = puVar3;
        (&DAT_010cc044)[unaff_ESI] = (uint)local_1b0[0];
        _memcpy(local_190,local_1b0,6);
        uVar8 = DAT_00e9ad08;
        if (unaff_ESI == 2) {
          local_190 = (undefined *)0x0;
          CodePage_010cc05c = local_194;
          local_1a4 = DAT_00e9a49c;
          pUVar6 = &DAT_00e9a478;
          UVar10 = DAT_00e9a498;
          do {
            if (local_194 == *pUVar6) {
              if (local_190 != (undefined *)0x0) {
                DAT_00e9a478 = (&DAT_00e9a478)[(int)local_190 * 2];
                DAT_00e9a47c = (&DAT_00e9a47c)[(int)local_190 * 2];
                (&DAT_00e9a478)[(int)local_190 * 2] = UVar10;
                (&DAT_00e9a47c)[(int)local_190 * 2] = local_1a4;
              }
              break;
            }
            local_1bc = *pUVar6;
            local_190 = local_190 + 1;
            *pUVar6 = UVar10;
            UVar2 = pUVar6[1];
            pUVar6[1] = local_1a4;
            pUVar6 = pUVar6 + 2;
            UVar10 = local_1bc;
            local_1a4 = UVar2;
          } while ((int)pUVar6 < 0xe9a4a0);
          uVar8 = DAT_00e9a47c;
          if (local_190 == (undefined *)0x5) {
            BVar7 = FUN_00aea025(1,
                                 "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                                 ,0x7f,&local_18c,local_194,DAT_010cc04c,1);
            if (BVar7 == 0) {
              DAT_00e9a47c = 0;
            }
            else {
              uVar8 = 0;
              do {
                pbVar1 = (byte *)((int)&local_18c + uVar8 * 2 + 1);
                *pbVar1 = *pbVar1 & 1;
                uVar8 = uVar8 + 1;
              } while (uVar8 < 0x7f);
              iVar4 = _memcmp(&local_18c,&DAT_00d7e8a8,0xfe);
              DAT_00e9a47c = (uint)(iVar4 == 0);
            }
            DAT_00e9a478 = CodePage_010cc05c;
            uVar8 = DAT_00e9a47c;
          }
        }
        DAT_00e9ad08 = uVar8;
        if (unaff_ESI == 1) {
          DAT_010cc060 = local_194;
        }
        iVar4 = (**(code **)(&DAT_00e9a5b8 + unaff_ESI * 0xc))();
        if (iVar4 != 0) {
          (&DAT_00e9a5b4)[unaff_ESI * 3] = local_198;
                    /* WARNING: Subroutine does not return */
          _free(local_19c);
        }
        if (local_198 != &DAT_00e9a418) {
                    /* WARNING: Subroutine does not return */
          _free(local_198);
        }
        uVar9 = (&DAT_00e9a5b4)[unaff_ESI * 3];
      }
    }
  }
  return uVar9;
}


//// FUNCTION FUN_00ad78dd @ 00ad78dd ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * __fastcall FUN_00ad78dd(char *param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  int local_98;
  int local_90;
  uint local_8c [33];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  if (param_2 != 0) {
    if (param_1 == (char *)0x0) {
      return (&DAT_00e9a5b4)[param_2 * 3];
    }
    puVar2 = (uint *)FUN_00ad764e(param_1);
    return puVar2;
  }
  bVar1 = true;
  local_90 = 0;
  if (param_1 != (char *)0x0) {
    if (((*param_1 == 'L') && (param_1[1] == 'C')) && (param_1[2] == '_')) {
      do {
        pcVar3 = _strpbrk(param_1,"=;");
        if (((pcVar3 == (char *)0x0) || (sVar4 = (int)pcVar3 - (int)param_1, sVar4 == 0)) ||
           (*pcVar3 == ';')) {
          return (uint *)0x0;
        }
        local_98 = 1;
        ppuVar8 = &PTR_s_LC_COLLATE_00e9a5bc;
        do {
          iVar5 = _strncmp(*ppuVar8,param_1,sVar4);
          if ((iVar5 == 0) && (sVar6 = _strlen(*ppuVar8), sVar4 == sVar6)) break;
          local_98 = local_98 + 1;
          ppuVar8 = ppuVar8 + 3;
        } while ((int)ppuVar8 < 0xe9a5ed);
        pcVar3 = pcVar3 + 1;
        sVar4 = _strcspn(pcVar3,";");
        if ((sVar4 == 0) && (*pcVar3 != ';')) {
          return (uint *)0x0;
        }
        if (local_98 < 6) {
          _strncpy((char *)local_8c,pcVar3,sVar4);
          *(undefined1 *)((int)local_8c + sVar4) = 0;
          iVar5 = FUN_00ad764e((char *)local_8c);
          if (iVar5 != 0) {
            local_90 = local_90 + 1;
          }
        }
      } while ((pcVar3[sVar4] != '\0') && (param_1 = pcVar3 + sVar4 + 1, *param_1 != '\0'));
      if (local_90 == 0) {
        return (uint *)0x0;
      }
    }
    else {
      puVar2 = __expandlocale(param_1,local_8c,(undefined2 *)0x0,(undefined4 *)0x0);
      if (puVar2 == (uint *)0x0) {
        return (uint *)0x0;
      }
      puVar7 = &DAT_00e9a5b4;
      do {
        if ((void **)puVar7 != &DAT_00e9a5b4) {
          iVar5 = _strcmp((char *)local_8c,(char *)*puVar7);
          if ((iVar5 == 0) || (iVar5 = FUN_00ad764e((char *)local_8c), iVar5 != 0)) {
            local_90 = local_90 + 1;
          }
          else {
            bVar1 = false;
          }
        }
        puVar7 = puVar7 + 3;
      } while ((int)puVar7 < 0xe9a5f1);
      if (bVar1) {
        FUN_00ad7433();
                    /* WARNING: Subroutine does not return */
        _free(DAT_00e9a5b4);
      }
      if (local_90 == 0) {
        return (uint *)0x0;
      }
    }
  }
  puVar2 = FUN_00ad7433();
  return puVar2;
}


//// FUNCTION FUN_00ad7ab6 @ 00ad7ab6 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

uint * __cdecl FUN_00ad7ab6(int param_1,char *param_2)

{
  undefined4 *_Memory;
  int iVar1;
  uint *local_20;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7ea80;
  uStack_c = 0xad7ac2;
  if ((param_1 < 0) || (5 < param_1)) {
    local_20 = (uint *)0x0;
  }
  else {
    __lock(0xc);
    local_8 = (undefined *)0x0;
    if (param_2 == (char *)0x0) {
      local_20 = FUN_00ad78dd((char *)0x0,param_1);
      __local_unwind2((int)local_14,-1);
    }
    else {
      _Memory = _malloc(0x54);
      if (_Memory == (undefined4 *)0x0) {
        local_20 = (uint *)0x0;
      }
      else {
        local_20 = FUN_00ad78dd(param_2,param_1);
        if (local_20 != (uint *)0x0) {
          *_Memory = 0;
          _Memory[1] = CodePage_010cc05c;
          _Memory[2] = DAT_010cc060;
          for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
            _Memory[iVar1 + 3] = (&DAT_010cc044)[iVar1];
          }
          _Memory[9] = DAT_00e9ad08;
          _Memory[10] = cbMultiByte_00e9a94c;
          _Memory[0xb] = DAT_010daa6c;
          _Memory[0xc] = DAT_010daa70;
          _Memory[0xd] = DAT_010daa68;
          _Memory[0xe] = PTR_PTR_00e9a24c;
          _Memory[0xf] = DAT_010cc098;
          _Memory[0x10] = DAT_010dadfc;
          _Memory[0x11] = DAT_010dadf8;
          _Memory[0x12] = PTR_DAT_00e9a2f0;
          _Memory[0x13] = PTR_PTR_00e9a758;
          _Memory[0x14] = DAT_010cc094;
          if ((*(int *)PTR_DAT_00e9a474 == 0) && ((undefined4 *)PTR_DAT_00e9a474 != &DAT_00e9a420))
          {
            FUN_00ad7116(PTR_DAT_00e9a474);
          }
          PTR_DAT_00e9a474 = (undefined *)_Memory;
          ___updatetlocinfo_lk();
        }
      }
      if ((local_20 == (uint *)0x0) && (_Memory != (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      local_8 = (undefined *)0xffffffff;
      FUN_00ad7bff();
    }
  }
  return local_20;
}


//// FUNCTION FUN_00ad7bff @ 00ad7bff ////

void FUN_00ad7bff(void)

{
  FUN_00ad700c(0xc);
  return;
}


//// FUNCTION __SEH_prolog @ 00ad7c10 ////

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog
   
   Library: Visual Studio */

void __cdecl __SEH_prolog(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 auStack_18 [4];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_18 + iVar1 + 0xc) = unaff_EBX;
  *(undefined4 *)((int)auStack_18 + iVar1 + 8) = unaff_ESI;
  *(undefined4 *)((int)auStack_18 + iVar1 + 4) = unaff_EDI;
  *(undefined4 *)((int)auStack_18 + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


//// FUNCTION __SEH_epilog @ 00ad7c4b ////

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog
   
   Library: Visual Studio */

void __SEH_epilog(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}


//// FUNCTION _memcmp @ 00ad7c60 ////

/* Library Function - Single Match
    _memcmp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  if (_Size != 0) {
    if ((((uint)_Buf1 | (uint)_Buf2) & 3) == 0) {
      uVar2 = _Size & 3;
      uVar5 = _Size >> 2;
      bVar9 = false;
      puVar7 = _Buf1;
      puVar8 = _Buf2;
      if (uVar5 != 0) {
        do {
          _Buf1 = puVar7;
          _Buf2 = puVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          _Buf2 = puVar8 + 1;
          _Buf1 = puVar7 + 1;
          bVar9 = *puVar7 == *puVar8;
          puVar7 = _Buf1;
          puVar8 = _Buf2;
        } while (bVar9);
        if (!bVar9) {
          uVar2 = *(uint *)((int)_Buf1 + -4);
          uVar5 = *(uint *)((int)_Buf2 + -4);
          bVar9 = (byte)uVar2 < (byte)uVar5;
          if ((((byte)uVar2 == (byte)uVar5) &&
              (bVar4 = (byte)(uVar2 >> 8), bVar6 = (byte)(uVar5 >> 8), bVar9 = bVar4 < bVar6,
              bVar4 == bVar6)) &&
             (bVar4 = (byte)(uVar2 >> 0x10), bVar6 = (byte)(uVar5 >> 0x10), bVar9 = bVar4 < bVar6,
             bVar4 == bVar6)) {
            bVar9 = (byte)(uVar2 >> 0x18) < (byte)(uVar5 >> 0x18);
          }
          goto LAB_00ad7ce0;
        }
      }
      if (uVar2 != 0) {
        uVar5 = *(uint *)_Buf1;
        uVar1 = *(uint *)_Buf2;
        bVar9 = (byte)uVar5 < (byte)uVar1;
        if ((byte)uVar5 != (byte)uVar1) {
LAB_00ad7ce0:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        iVar3 = 0;
        if (uVar2 != 1) {
          bVar6 = (byte)(uVar5 >> 8);
          bVar4 = (byte)(uVar1 >> 8);
          bVar9 = bVar6 < bVar4;
          if (bVar6 != bVar4) goto LAB_00ad7ce0;
          iVar3 = 0;
          if (uVar2 != 2) {
            bVar9 = (uVar5 & 0xff0000) < (uVar1 & 0xff0000);
            if ((uVar5 & 0xff0000) != (uVar1 & 0xff0000)) goto LAB_00ad7ce0;
            iVar3 = uVar2 - 3;
          }
        }
        return iVar3;
      }
    }
    else {
      if ((_Size & 1) == 0) goto LAB_00ad7c93;
      bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
      if (*(byte *)_Buf1 != *(byte *)_Buf2) goto LAB_00ad7ce0;
      _Buf1 = (void *)((int)_Buf1 + 1);
      _Buf2 = (void *)((int)_Buf2 + 1);
      for (_Size = _Size - 1; _Size != 0; _Size = _Size - 2) {
LAB_00ad7c93:
        bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
        if ((*(byte *)_Buf1 != *(byte *)_Buf2) ||
           (bVar9 = *(byte *)((int)_Buf1 + 1) < *(byte *)((int)_Buf2 + 1),
           *(byte *)((int)_Buf1 + 1) != *(byte *)((int)_Buf2 + 1))) goto LAB_00ad7ce0;
        _Buf2 = (void *)((int)_Buf2 + 2);
        _Buf1 = (void *)((int)_Buf1 + 2);
      }
    }
  }
  return 0;
}


//// FUNCTION TypeMatch @ 00ad7d18 ////

/* Library Function - Single Match
    int __cdecl TypeMatch(struct _s_HandlerType const *,struct _s_CatchableType const *,struct
   _s_ThrowInfo const *)
   
   Library: Visual Studio 2003 Release */

int __cdecl TypeMatch(_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3)

{
  int iVar1;
  byte *unaff_ESI;
  byte *unaff_EDI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
    if ((iVar1 != *(int *)(unaff_EDI + 4)) &&
       (iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(unaff_EDI + 4) + 8)), iVar1 != 0)) {
      return 0;
    }
    if (((((*unaff_EDI & 2) != 0) && ((*unaff_ESI & 8) == 0)) ||
        (((param_1->adjectives & 1) != 0 && ((*unaff_ESI & 1) == 0)))) ||
       (((param_1->adjectives & 2) != 0 && ((*unaff_ESI & 2) == 0)))) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION ___FrameUnwindToState @ 00ad7d85 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2003 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  p_Var1 = __getptd();
  p_Var1->_purecall = (void *)((int)p_Var1->_purecall + 1);
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_00ad7e38();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}


//// FUNCTION FUN_00ad7e38 @ 00ad7e38 ////

void FUN_00ad7e38(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < (int)p_Var1->_purecall) {
    p_Var1 = __getptd();
    p_Var1->_purecall = (void *)((int)p_Var1->_purecall + -1);
  }
  return;
}


//// FUNCTION ___DestructExceptionObject @ 00ad7e83 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2003 Release */

void __cdecl ___DestructExceptionObject(int param_1)

{
  void *pvVar1;
  
  if ((param_1 != 0) && (pvVar1 = *(void **)(*(int *)(param_1 + 0x1c) + 4), pvVar1 != (void *)0x0))
  {
    _CallMemberFunction0(*(void **)(param_1 + 0x18),pvVar1);
  }
  return;
}


//// FUNCTION AdjustPointer @ 00ad7ec8 ////

/* Library Function - Single Match
    void * __cdecl AdjustPointer(void *,struct PMD const &)
   
   Library: Visual Studio 2003 Release */

void * __cdecl AdjustPointer(void *param_1,PMD *param_2)

{
  int in_EAX;
  void *pvVar1;
  int *in_ECX;
  
  pvVar1 = (void *)(*in_ECX + in_EAX);
  if (-1 < in_ECX[1]) {
    pvVar1 = (void *)((int)pvVar1 + *(int *)(*(int *)(in_ECX[1] + in_EAX) + in_ECX[2]) + in_ECX[1]);
  }
  return pvVar1;
}


//// FUNCTION FUN_00ad7ee7 @ 00ad7ee7 ////

bool FUN_00ad7ee7(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return p_Var1->_purecall != (void *)0x0;
}


//// FUNCTION CallCatchBlock @ 00ad80dc ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2003 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  FrameInfo local_54 [8];
  undefined4 local_4c;
  void *local_48;
  void *local_44;
  FrameInfo *local_40;
  undefined4 local_3c;
  void *local_24;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00d7ead8;
  uStack_c = 0xad80e8;
  local_4c = 0;
  local_3c = *(undefined4 *)(param_2 + -4);
  local_40 = _CreateFrameInfo(local_54,*(void **)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_44 = p_Var1->_unexpected;
  p_Var1 = __getptd();
  local_48 = p_Var1->_translator;
  p_Var1 = __getptd();
  p_Var1->_unexpected = param_1;
  p_Var1 = __getptd();
  p_Var1->_translator = param_3;
  local_8 = (undefined *)0x1;
  local_24 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xffffffff;
  FUN_00ad8231();
  return local_24;
}


//// FUNCTION FUN_00ad8231 @ 00ad8231 ////

void FUN_00ad8231(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x38);
  _FindAndUnlinkFrame(*(FrameInfo **)(unaff_EBP + -0x3c));
  p_Var1 = __getptd();
  p_Var1->_unexpected = *(void **)(unaff_EBP + -0x40);
  p_Var1 = __getptd();
  p_Var1->_translator = *(void **)(unaff_EBP + -0x44);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((unaff_ESI[5] == 0x19930520 || (unaff_ESI[5] == 0x19930521)))) &&
     ((*(int *)(unaff_EBP + -0x48) == 0 && (*(int *)(unaff_EBP + -0x20) != 0)))) {
    iVar2 = IsExceptionObjectToBeDestroyed((void *)unaff_ESI[6]);
    if (iVar2 != 0) {
      __abnormal_termination();
      ___DestructExceptionObject((int)unaff_ESI);
    }
  }
  return;
}


//// FUNCTION BuildCatchObject @ 00ad82a0 ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __cdecl BuildCatchObject(struct EHExceptionRecord *,void *,struct _s_HandlerType const
   *,struct _s_CatchableType const *)
   
   Library: Visual Studio 2003 Release */

void __cdecl
BuildCatchObject(EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
                _s_CatchableType *param_4)

{
  int iVar1;
  void *pvVar2;
  void *_Src;
  byte *in_ECX;
  int *in_EDX;
  PMD *unaff_ESI;
  PMD *unaff_EDI;
  
  if (*(int *)((int)param_2 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)((int)param_2 + 4) + 8) == '\0') {
    return;
  }
  if ((*(int *)((int)param_2 + 8) == 0) && ((*(byte *)((int)param_2 + 3) & 0x80) == 0)) {
    return;
  }
  if (-1 < (int)*(uint *)param_2) {
    in_EDX = (int *)(*(int *)((int)param_2 + 8) + 0xc + (int)in_EDX);
  }
  pvVar2 = *(void **)(param_1 + 0x18);
  if ((*(uint *)param_2 & 8) == 0) {
    if ((*in_ECX & 1) == 0) {
      if (*(int *)(in_ECX + 0x18) == 0) {
        iVar1 = _ValidateRead(pvVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateWrite(in_EDX,1), iVar1 != 0)) {
          pvVar2 = *(void **)(in_ECX + 0x14);
          _Src = AdjustPointer(pvVar2,unaff_EDI);
          _memmove(in_EDX,_Src,(size_t)pvVar2);
          return;
        }
      }
      else {
        iVar1 = _ValidateRead(pvVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateWrite(in_EDX,1), iVar1 != 0)) &&
           (iVar1 = _ValidateExecute(*(_func_int **)(in_ECX + 0x18)), iVar1 != 0)) {
          if ((*in_ECX & 4) != 0) {
            AdjustPointer((void *)0x1,unaff_EDI);
            FID_conflict__CallMemberFunction1(in_EDX,*(undefined **)(in_ECX + 0x18));
            return;
          }
          AdjustPointer(unaff_EDI,unaff_ESI);
          FID_conflict__CallMemberFunction1(in_EDX,*(undefined **)(in_ECX + 0x18));
          return;
        }
      }
    }
    else {
      iVar1 = _ValidateRead(pvVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateWrite(in_EDX,1), iVar1 != 0)) {
        _memmove(in_EDX,*(void **)(param_1 + 0x18),*(size_t *)(in_ECX + 0x14));
        if (*(int *)(in_ECX + 0x14) != 4) {
          return;
        }
        if (*in_EDX == 0) {
          return;
        }
        goto LAB_00ad8319;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(pvVar2,1);
    if ((iVar1 != 0) && (iVar1 = _ValidateWrite(in_EDX,1), iVar1 != 0)) {
      *in_EDX = *(int *)(param_1 + 0x18);
LAB_00ad8319:
      pvVar2 = AdjustPointer(unaff_EDI,unaff_ESI);
      *in_EDX = (int)pvVar2;
      return;
    }
  }
  _inconsistency();
  return;
}


//// FUNCTION ___CxxExceptionFilter @ 00ad841c ////

/* Library Function - Single Match
    ___CxxExceptionFilter
   
   Library: Visual Studio 2003 Release */

int __cdecl ___CxxExceptionFilter(void *param_1,void *param_2,int param_3,void *param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  _s_ThrowInfo *unaff_EBX;
  EHExceptionRecord *pEVar3;
  _s_HandlerType *unaff_ESI;
  uint local_18;
  void *local_14;
  int local_8;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  pEVar3 = *(EHExceptionRecord **)param_1;
  if ((param_2 == (void *)0x0) || (*(char *)((int)param_2 + 8) == '\0')) {
    if ((((*(int *)pEVar3 != -0x1f928c9d) || (*(int *)(pEVar3 + 0x10) != 3)) ||
        (((*(int *)(pEVar3 + 0x14) != 0x19930520 && (*(int *)(pEVar3 + 0x14) != 0x19930521)) ||
         (*(int *)(pEVar3 + 0x1c) != 0)))) ||
       (p_Var1 = __getptd(), p_Var1->_unexpected != (void *)0x0)) {
      p_Var1 = __getptd();
      p_Var1->_purecall = (void *)((int)p_Var1->_purecall + 1);
      return 1;
    }
  }
  else if (((*(int *)pEVar3 == -0x1f928c9d) && (*(int *)(pEVar3 + 0x10) == 3)) &&
          ((*(int *)(pEVar3 + 0x14) == 0x19930520 || (*(int *)(pEVar3 + 0x14) == 0x19930521)))) {
    if (*(int *)(pEVar3 + 0x1c) == 0) {
      p_Var1 = __getptd();
      if (p_Var1->_unexpected == (void *)0x0) {
        return 0;
      }
      p_Var1 = __getptd();
      pEVar3 = p_Var1->_unexpected;
    }
    local_18 = param_3 | 0x80000000;
    local_14 = param_2;
    for (local_8 = **(int **)(*(int *)(pEVar3 + 0x1c) + 0xc); 0 < local_8; local_8 = local_8 + -1) {
      iVar2 = TypeMatch(*(_s_HandlerType **)(pEVar3 + 0x1c),(_s_CatchableType *)unaff_ESI,unaff_EBX)
      ;
      if (iVar2 != 0) {
        p_Var1 = __getptd();
        p_Var1->_purecall = (void *)((int)p_Var1->_purecall + 1);
        if (param_4 == (void *)0x0) {
          return 1;
        }
        BuildCatchObject(pEVar3,&local_18,unaff_ESI,(_s_CatchableType *)unaff_EBX);
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION CatchIt @ 00ad8541 ////

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2003 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  int in_ECX;
  void *unaff_EBX;
  _s_HandlerType *unaff_EBP;
  _s_HandlerType *unaff_ESI;
  int *unaff_EDI;
  _s_CatchableType *unaff_retaddr;
  _s_HandlerType *p_Var2;
  
  if (in_ECX != 0) {
    BuildCatchObject(param_1,unaff_EBX,unaff_EBP,unaff_retaddr);
  }
  if (param_6 == (_s_HandlerType *)0x0) {
    param_6 = unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_6,param_1);
  p_Var2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  unaff_ESI->dispCatchObj = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,(EHRegistrationNode *)unaff_ESI,(_CONTEXT *)param_2,param_4,
                          param_5,0x100,(ulong)p_Var2);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,(EHRegistrationNode *)unaff_ESI);
  }
  return;
}


//// FUNCTION FindHandlerForForeignException @ 00ad85a8 ////

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  int iVar3;
  _s_TryBlockMapEntry *p_Var4;
  _s_CatchableType *unaff_EBX;
  int unaff_ESI;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *extraout_var;
  EHRegistrationNode *pEVar5;
  EHRegistrationNode *extraout_var_00;
  EHRegistrationNode *pEVar6;
  
  if ((*(int *)param_1 != -0x7ffffffd) &&
     (((p_Var2 = __getptd(), pEVar5 = extraout_var, pEVar6 = extraout_var_00,
       p_Var2->_NLG_dwCode == 0 ||
       (iVar3 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
       iVar3 == 0)) &&
      (p_Var4 = _GetRangeOfTrysToCheck
                          (param_5,param_7,param_6,(uint *)&stack0xfffffff8,(uint *)&stack0xfffffff4
                          ), pEVar6 < pEVar5)))) {
    do {
      if (((p_Var4->tryLow <= param_6) && (param_6 <= p_Var4->tryHigh)) &&
         ((pTVar1 = p_Var4->pHandlerArray[p_Var4->nCatches + -1].pType,
          pTVar1 == (TypeDescriptor *)0x0 || (*(char *)&pTVar1[1].pVFTable == '\0')))) {
        CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)param_7,
                (_s_HandlerType *)param_8,unaff_EBX,unaff_EDI,unaff_ESI,pEVar5,(uchar)pEVar6);
      }
      pEVar6 = pEVar6 + 1;
      p_Var4 = p_Var4 + 1;
    } while (pEVar6 < pEVar5);
  }
  return;
}


//// FUNCTION FindHandler @ 00ad8666 ////

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2003 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  int iVar1;
  int iVar2;
  _ptiddata p_Var3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  int iVar6;
  int unaff_EBX;
  _s_TryBlockMapEntry *unaff_ESI;
  _s_CatchableType *unaff_EDI;
  EHRegistrationNode *pEVar7;
  uint in_stack_ffffffdc;
  int *local_14;
  uint local_10;
  _s_TryBlockMapEntry *local_c;
  undefined1 local_5;
  
  iVar1 = *(int *)(param_2 + 8);
  local_5 = 0;
  if ((iVar1 < -1) || (param_5->maxState <= iVar1)) {
    _inconsistency();
  }
  if (*(int *)param_1 == -0x1f928c9d) {
    if ((*(int *)(param_1 + 0x10) == 3) &&
       (((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)) &&
        (*(int *)(param_1 + 0x1c) == 0)))) {
      p_Var3 = __getptd();
      if (p_Var3->_unexpected == (void *)0x0) {
        return;
      }
      p_Var3 = __getptd();
      param_1 = p_Var3->_unexpected;
      p_Var3 = __getptd();
      param_3 = p_Var3->_translator;
      local_5 = 1;
      iVar4 = _ValidateRead(param_1,1);
      if (iVar4 == 0) {
        _inconsistency();
      }
      if (*(int *)param_1 != -0x1f928c9d) goto LAB_00ad883f;
      if (((*(int *)(param_1 + 0x10) == 3) &&
          ((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)))) &&
         (*(int *)(param_1 + 0x1c) == 0)) {
        _inconsistency();
      }
    }
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       ((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)))) {
      p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,iVar1,&local_10,(uint *)&stack0xffffffdc);
      local_c = p_Var5;
      if (local_10 < in_stack_ffffffdc) {
        do {
          if ((p_Var5->tryLow <= iVar1) && (iVar1 <= p_Var5->tryHigh)) {
            local_c = p_Var5;
            for (iVar4 = p_Var5->nCatches; 0 < iVar4; iVar4 = iVar4 + -1) {
              local_14 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
              for (iVar2 = *local_14; 0 < iVar2; iVar2 = iVar2 + -1) {
                local_14 = local_14 + 1;
                pEVar7 = (EHRegistrationNode *)*local_14;
                iVar6 = TypeMatch(*(_s_HandlerType **)(param_1 + 0x1c),unaff_EDI,
                                  (_s_ThrowInfo *)unaff_ESI);
                p_Var5 = local_c;
                if (iVar6 != 0) {
                  CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,
                          (_s_FuncInfo *)param_7,(_s_HandlerType *)param_8,unaff_EDI,unaff_ESI,
                          unaff_EBX,pEVar7,(uchar)in_stack_ffffffdc);
                  goto LAB_00ad8812;
                }
              }
            }
          }
LAB_00ad8812:
          local_10 = local_10 + 1;
          p_Var5 = p_Var5 + 1;
          local_c = p_Var5;
        } while (local_10 < in_stack_ffffffdc);
      }
      if (param_6 == '\0') {
        return;
      }
      ___DestructExceptionObject((int)param_1);
      return;
    }
  }
LAB_00ad883f:
  if (param_6 == '\0') {
    FindHandlerForForeignException(param_1,param_2,param_3,param_4,param_5,iVar1,param_7,param_8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


//// FUNCTION ___InternalCxxFrameHandler @ 00ad886a ////

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  undefined4 uVar1;
  
  if ((param_5->magicNumber_and_bbtFlags & 0x1fffffff) != 0x19930520) {
    _inconsistency();
  }
  if (((byte)param_1[4] & 0x66) == 0) {
    if (param_5->nTryBlocks != 0) {
      if (((*(int *)param_1 == -0x1f928c9d) && (0x19930520 < *(uint *)(param_1 + 0x14))) &&
         (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)) {
        uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar1;
      }
      FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5->maxState != 0) && (param_6 == 0)) {
    ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}


//// FUNCTION __forcdecpt @ 00ad890c ////

/* Library Function - Single Match
    __forcdecpt
   
   Library: Visual Studio 2003 Release */

void __cdecl __forcdecpt(char *_Buf)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((int)*_Buf);
    bVar4 = iVar3 == 0;
  }
  cVar2 = *_Buf;
  *_Buf = DAT_00e9a950;
  do {
    _Buf = _Buf + 1;
    cVar1 = *_Buf;
    *_Buf = cVar2;
    cVar2 = cVar1;
  } while (*_Buf != '\0');
  return;
}


//// FUNCTION __fassign @ 00ad89ad ////

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  _CRT_DOUBLE local_c;
  
  if (flag != 0) {
    FID_conflict___atodbl(&local_c,number);
    *(undefined4 *)argument = local_c.x._0_4_;
    *(undefined4 *)(argument + 4) = local_c.x._4_4_;
    return;
  }
  FID_conflict___atodbl((_CRT_DOUBLE *)&flag,number);
  *(int *)argument = flag;
  return;
}


//// FUNCTION __shift @ 00ad89eb ////

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2003 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}


//// FUNCTION __cftoe2 @ 00ad8a08 ////

/* Library Function - Single Match
    __cftoe2
   
   Library: Visual Studio 2003 Release */

void __cdecl __cftoe2(int param_1,int param_2,char param_3)

{
  int *in_EAX;
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *unaff_EBX;
  
  if (param_3 != '\0') {
    __shift();
  }
  if (*in_EAX == 0x2d) {
    *unaff_EBX = 0x2d;
    unaff_EBX = unaff_EBX + 1;
  }
  puVar1 = unaff_EBX;
  if (0 < param_1) {
    puVar1 = unaff_EBX + 1;
    *unaff_EBX = *puVar1;
    *puVar1 = DAT_00e9a950;
  }
  puVar2 = FUN_00ada2e0((uint *)(puVar1 + param_1 + (uint)(param_3 == '\0')),(uint *)"e+000");
  if (param_2 != 0) {
    *(undefined1 *)puVar2 = 0x45;
  }
  if (*(char *)in_EAX[3] != '0') {
    iVar3 = in_EAX[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      *(undefined1 *)((int)puVar2 + 1) = 0x2d;
    }
    if (99 < iVar3) {
      iVar4 = iVar3 / 100;
      iVar3 = iVar3 % 100;
      *(char *)((int)puVar2 + 2) = *(char *)((int)puVar2 + 2) + (char)iVar4;
    }
    if (9 < iVar3) {
      iVar4 = iVar3 / 10;
      iVar3 = iVar3 % 10;
      *(char *)((int)puVar2 + 3) = *(char *)((int)puVar2 + 3) + (char)iVar4;
    }
    *(char *)(puVar2 + 1) = (char)puVar2[1] + (char)iVar3;
  }
  return;
}


//// FUNCTION __cftoe @ 00ad8ab6 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  size_t unaff_ESI;
  STRFLT _PtFlt;
  _strflt local_30;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  _PtFlt = *(STRFLT *)_Value;
  __fltout2((_CRT_DOUBLE)*_Value,&local_30,local_20,unaff_ESI);
  __fptostr(_Buf + (uint)(0 < (int)_SizeInBytes) + (uint)(local_30.sign == 0x2d),_SizeInBytes + 1,
            (int)&local_30,_PtFlt);
  __cftoe2(_SizeInBytes,_Dec,'\0');
  return (errno_t)_Buf;
}


//// FUNCTION __cftof2 @ 00ad8b22 ////

/* Library Function - Single Match
    __cftof2
   
   Library: Visual Studio 2003 Release */

undefined1 * __cdecl __cftof2(undefined1 *param_1,size_t param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined1 *puVar3;
  size_t sVar4;
  
  iVar1 = in_EAX[1];
  if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *in_EAX;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = 0x30;
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = 0;
  }
  puVar3 = param_1;
  if (*in_EAX == 0x2d) {
    *param_1 = 0x2d;
    puVar3 = param_1 + 1;
  }
  if (in_EAX[1] < 1) {
    __shift();
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = puVar3 + in_EAX[1];
  }
  if (0 < (int)param_2) {
    __shift();
    *puVar3 = DAT_00e9a950;
    if (in_EAX[1] < 0) {
      sVar4 = -in_EAX[1];
      if ((param_3 != '\0') || ((int)sVar4 <= (int)param_2)) {
        param_2 = sVar4;
      }
      __shift();
      _memset(puVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}


//// FUNCTION __cftof @ 00ad8bbe ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __cftof
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  size_t unaff_ESI;
  STRFLT _PtFlt;
  _strflt local_30;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  _PtFlt = *(STRFLT *)_Value;
  __fltout2((_CRT_DOUBLE)*_Value,&local_30,local_20,unaff_ESI);
  __fptostr(_Buf + (local_30.sign == 0x2d),local_30.decpt + _SizeInBytes,(int)&local_30,_PtFlt);
  __cftof2(_Buf,_SizeInBytes,'\0');
  return (errno_t)_Buf;
}


//// FUNCTION __cftog @ 00ad8c20 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __cftog
   
   Library: Visual Studio 2003 Release */

void __cdecl __cftog(double *param_1,undefined1 *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  size_t unaff_EDI;
  char *pcVar3;
  STRFLT _PtFlt;
  _strflt local_30;
  char local_20 [24];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  _PtFlt = *(STRFLT *)param_1;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,unaff_EDI);
  iVar2 = local_30.decpt + -1;
  __fptostr(param_2 + (local_30.sign == 0x2d),param_3,(int)&local_30,_PtFlt);
  local_30.decpt = local_30.decpt + -1;
  if ((local_30.decpt < -4) || ((int)param_3 <= local_30.decpt)) {
    __cftoe2(param_3,param_4,'\x01');
  }
  else {
    pcVar1 = param_2 + (local_30.sign == 0x2d);
    if (iVar2 < local_30.decpt) {
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    __cftof2(param_2,param_3,'\x01');
  }
  return;
}


//// FUNCTION __cfltcvt @ 00ad8cba ////

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  int unaff_EBP;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = __cftoe(arg,buffer,format,precision,unaff_EBP);
  }
  else {
    if (sizeInBytes == 0x66) {
      eVar1 = __cftof(arg,buffer,format,unaff_EBP);
      return eVar1;
    }
    eVar1 = __cftog(arg,buffer,format,precision);
  }
  return eVar1;
}


//// FUNCTION __setdefaultprecision @ 00ad8d0b ////

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2003 Release */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}


//// FUNCTION __ms_p5_test_fdiv @ 00ad8d1d ////

/* WARNING: Removing unreachable block (ram,0x00ad8d54) */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Library: Visual Studio 2003 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  return 0;
}


//// FUNCTION __ms_p5_mp_test_fdiv @ 00ad8d5d ////

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2003 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}


//// FUNCTION ___heap_select @ 00ad8d86 ////

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2003 Release */

undefined4 ___heap_select(void)

{
  if ((DAT_010cbbc8 == 2) && (4 < DAT_010cbbd4)) {
    return 1;
  }
  return 3;
}


//// FUNCTION __heap_init @ 00ad8da0 ////

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2003 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  hHeap_010dade8 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (hHeap_010dade8 == (HANDLE)0x0) {
    return 0;
  }
  DAT_010dadec = ___heap_select();
  if ((DAT_010dadec == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(hHeap_010dade8);
    return 0;
  }
  return 1;
}


//// FUNCTION ___sbh_heap_init @ 00ad8e8b ////

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  lpMem_010dadd4 = HeapAlloc(hHeap_010dade8,0,0x140);
  if (lpMem_010dadd4 == (LPVOID)0x0) {
    return 0;
  }
  DAT_010dadcc = 0;
  DAT_010dadd0 = 0;
  DAT_010daddc = lpMem_010dadd4;
  DAT_010dadd8 = param_1;
  DAT_010dade0 = 0x10;
  return 1;
}


//// FUNCTION ___sbh_find_block @ 00ad8ed3 ////

/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2003 Release */

uint __cdecl ___sbh_find_block(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = lpMem_010dadd4;
  while( true ) {
    if ((LPVOID)((int)lpMem_010dadd4 + DAT_010dadd0 * 0x14) <= pvVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)((int)pvVar1 + 0xc)) < 0x100000) break;
    pvVar1 = (LPVOID)((int)pvVar1 + 0x14);
  }
  return (uint)pvVar1;
}


//// FUNCTION ___sbh_free_block @ 00ad8efe ////

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2003 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_010dadcc != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_010dade4 * 0x8000 + DAT_010dadcc[3]),0x8000,0x4000);
        DAT_010dadcc[2] = DAT_010dadcc[2] | 0x80000000U >> ((byte)DAT_010dade4 & 0x1f);
        *(undefined4 *)(DAT_010dadcc[4] + 0xc4 + DAT_010dade4 * 4) = 0;
        *(char *)(DAT_010dadcc[4] + 0x43) = *(char *)(DAT_010dadcc[4] + 0x43) + -1;
        if (*(char *)(DAT_010dadcc[4] + 0x43) == '\0') {
          DAT_010dadcc[1] = DAT_010dadcc[1] & 0xfffffffe;
        }
        if (DAT_010dadcc[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_010dadcc[3],0,0x8000);
          HeapFree(hHeap_010dade8,0,(LPVOID)DAT_010dadcc[4]);
          _memmove(DAT_010dadcc,DAT_010dadcc + 5,
                   (DAT_010dadd0 * 0x14 - (int)DAT_010dadcc) + -0x14 + (int)lpMem_010dadd4);
          DAT_010dadd0 = DAT_010dadd0 + -1;
          if (DAT_010dadcc < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_010daddc = lpMem_010dadd4;
        }
      }
      DAT_010dadcc = param_1;
      DAT_010dade4 = uVar14;
    }
  }
  return;
}


//// FUNCTION ___sbh_alloc_new_region @ 00ad9216 ////

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2003 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_010dadd0 == DAT_010dade0) {
    pvVar2 = HeapReAlloc(hHeap_010dade8,0,lpMem_010dadd4,(DAT_010dade0 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_010dade0 = DAT_010dade0 + 0x10;
    lpMem_010dadd4 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)lpMem_010dadd4 + DAT_010dadd0 * 0x14);
  pvVar2 = HeapAlloc(hHeap_010dade8,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_010dadd0 = DAT_010dadd0 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(hHeap_010dade8,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


//// FUNCTION ___sbh_alloc_new_group @ 00ad92cd ////

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2003 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 << 1) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}


//// FUNCTION ___sbh_resize_block @ 00ad93d3 ////

/* Library Function - Single Match
    ___sbh_resize_block
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}


//// FUNCTION ___sbh_heap_check @ 00ad9783 ////

/* Library Function - Single Match
    ___sbh_heap_check
   
   Library: Visual Studio 2003 Release */

undefined4 ___sbh_heap_check(void)

{
  LPVOID lp;
  WINBOOL WVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  uint local_13c [64];
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  WVar1 = IsBadWritePtr(lpMem_010dadd4,DAT_010dadd0 * 0x14);
  if (WVar1 != 0) {
    return 0xffffffff;
  }
  local_20 = 0;
  puVar2 = lpMem_010dadd4;
  if (0 < DAT_010dadd0) {
    do {
      lp = (LPVOID)puVar2[4];
      local_38 = puVar2;
      WVar1 = IsBadWritePtr(lp,0x41c4);
      if (WVar1 != 0) {
        return 0xfffffffe;
      }
      local_c = (uint *)puVar2[3];
      local_28 = (uint *)((int)lp + 0x144);
      local_24 = puVar2[2];
      puVar9 = (uint *)((int)lp + 0xc4);
      local_14 = 0;
      local_18 = 0;
      local_10 = 0;
      do {
        local_2c = 0;
        local_1c = 0;
        local_8 = 0;
        bVar11 = -1 < (int)local_24;
        puVar10 = local_13c;
        local_3c = puVar9;
        for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        if (bVar11) {
          WVar1 = IsBadWritePtr(local_c,0x8000);
          if (WVar1 != 0) {
            return 0xfffffffc;
          }
          iVar4 = 0;
          puVar2 = local_c + 0x3ff;
          do {
            puVar9 = puVar2 + -0x3fc;
            if ((puVar2[-0x3fd] != 0xffffffff) || (*puVar2 != 0xffffffff)) {
              return 0xfffffffb;
            }
            do {
              uVar3 = *puVar9;
              if ((uVar3 & 1) == 0) {
                iVar7 = ((int)uVar3 >> 4) + -1;
                if (0x3f < iVar7) {
                  iVar7 = 0x3f;
                }
                local_13c[iVar7] = local_13c[iVar7] + 1;
                uVar5 = uVar3;
              }
              else {
                if (0x400 < (int)(uVar3 - 1)) {
                  return 0xfffffffa;
                }
                local_8 = local_8 + 1;
                uVar5 = uVar3 - 1;
              }
              if ((((int)uVar5 < 0x10) || ((uVar5 & 0xf) != 0)) || (0xff0 < (int)uVar5)) {
                return 0xfffffff9;
              }
              puVar9 = (uint *)(uVar5 + (int)puVar9);
              if (puVar9[-1] != uVar3) {
                return 0xfffffff8;
              }
            } while (puVar9 < puVar2);
            if (puVar9 != puVar2) {
              return 0xfffffff8;
            }
            puVar2 = puVar2 + 0x400;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 8);
          if (*local_28 != local_8) {
            return 0xfffffff7;
          }
          iVar4 = 0;
          puVar10 = local_28;
          do {
            local_8 = 0;
            local_34 = puVar10 + 2;
            puVar2 = (uint *)puVar10[1];
            local_30 = puVar10;
            puVar8 = local_34;
            if (puVar2 != puVar10) {
              do {
                if (local_8 == local_13c[iVar4]) break;
                if ((puVar2 < local_c) || (local_c + 0x2000 <= puVar2)) {
                  return 0xfffffff6;
                }
                puVar6 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xc);
                puVar9 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xffc);
                if (puVar6 == puVar9) {
                  return 0xfffffff5;
                }
                do {
                  if (puVar6 == puVar2) break;
                  puVar6 = (uint *)((int)puVar6 + (*puVar6 & 0xfffffffe));
                  puVar8 = local_34;
                } while (puVar6 != puVar9);
                if (puVar6 == puVar9) {
                  return 0xfffffff5;
                }
                iVar7 = ((int)*puVar2 >> 4) + -1;
                if (0x3f < iVar7) {
                  iVar7 = 0x3f;
                }
                if (iVar7 != iVar4) {
                  return 0xfffffff4;
                }
                if ((uint *)puVar2[2] != local_30) {
                  return 0xfffffff3;
                }
                local_8 = local_8 + 1;
                local_30 = puVar2;
                puVar2 = (uint *)puVar2[1];
              } while (puVar2 != puVar10);
              if (local_8 != 0) {
                if (iVar4 < 0x20) {
                  uVar3 = 0x80000000 >> ((byte)iVar4 & 0x1f);
                  local_2c = local_2c | uVar3;
                  local_14 = local_14 | uVar3;
                }
                else {
                  uVar3 = 0x80000000 >> ((byte)iVar4 - 0x20 & 0x1f);
                  local_1c = local_1c | uVar3;
                  local_18 = local_18 | uVar3;
                }
              }
            }
            if (((uint *)local_30[1] != puVar10) || (local_8 != local_13c[iVar4])) {
              return 0xfffffff2;
            }
            if ((uint *)*puVar8 != local_30) {
              return 0xfffffff1;
            }
            iVar4 = iVar4 + 1;
            puVar2 = local_38;
            puVar9 = local_3c;
            puVar10 = puVar8;
          } while (iVar4 < 0x40);
        }
        if ((local_2c != puVar9[-0x20]) || (local_1c != *puVar9)) {
          return 0xfffffff0;
        }
        local_c = local_c + 0x2000;
        local_28 = local_28 + 0x81;
        local_24 = local_24 << 1;
        local_10 = local_10 + 1;
        puVar9 = puVar9 + 1;
      } while (local_10 < 0x20);
      if ((local_14 != *puVar2) || (local_18 != puVar2[1])) {
        return 0xffffffef;
      }
      puVar2 = puVar2 + 5;
      local_20 = local_20 + 1;
      local_3c = puVar9;
    } while (local_20 < DAT_010dadd0);
  }
  return 0;
}


//// FUNCTION ___sbh_alloc_block @ 00ad9af7 ////

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2003 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint local_c;
  int local_8;
  
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  puVar9 = (uint *)((int)lpMem_010dadd4 + DAT_010dadd0 * 0x14);
  bVar6 = (byte)iVar8;
  param_1 = DAT_010daddc;
  if (iVar8 < 0x20) {
    uVar14 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar14 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar14) == 0));
      param_1 = param_1 + 5) {
  }
  puVar12 = lpMem_010dadd4;
  if (param_1 == puVar9) {
    for (; (puVar12 < DAT_010daddc && ((puVar12[1] & local_c) == 0 && (*puVar12 & uVar14) == 0));
        puVar12 = puVar12 + 5) {
    }
    param_1 = puVar12;
    if (puVar12 == DAT_010daddc) {
      for (; (puVar12 < puVar9 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
      }
      puVar13 = lpMem_010dadd4;
      param_1 = puVar12;
      if (puVar12 == puVar9) {
        for (; (puVar13 < DAT_010daddc && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
        }
        param_1 = puVar13;
        if ((puVar13 == DAT_010daddc) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar14) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    if ((piVar5[0x31] & local_c) == 0 && (*puVar9 & uVar14) == 0) {
      do {
        puVar12 = puVar9 + 0x21;
        local_8 = local_8 + 1;
        puVar9 = puVar9 + 1;
      } while ((*puVar12 & local_c) == 0 && (*puVar9 & uVar14) == 0);
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar14 = piVar5[local_8 + 0x11] & uVar14;
  if (uVar14 == 0) {
    uVar14 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar14; uVar14 = uVar14 << 1) {
    iVar8 = iVar8 + 1;
  }
  piVar11 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar11 - uVar7;
  iVar15 = (iVar10 >> 4) + -1;
  if (0x3f < iVar15) {
    iVar15 = 0x3f;
  }
  DAT_010daddc = param_1;
  if (iVar15 != iVar8) {
    if (piVar11[1] == piVar11[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar14 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar14 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar14;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar14 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar14;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar14;
        }
      }
    }
    *(int *)(piVar11[2] + 4) = piVar11[1];
    *(int *)(piVar11[1] + 8) = piVar11[2];
    if (iVar10 == 0) goto LAB_00ad9db0;
    piVar1 = piVar3 + iVar15 * 2;
    iVar8 = piVar1[1];
    piVar11[2] = (int)piVar1;
    piVar11[1] = iVar8;
    piVar1[1] = (int)piVar11;
    *(int **)(piVar11[1] + 8) = piVar11;
    if (piVar11[1] == piVar11[2]) {
      cVar4 = *(char *)(iVar15 + 4 + (int)piVar5);
      *(char *)(iVar15 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar15;
      if (iVar15 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar11 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar11) = iVar10;
  }
LAB_00ad9db0:
  piVar11 = (int *)((int)piVar11 + iVar10);
  *piVar11 = uVar7 + 1;
  *(uint *)((int)piVar11 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_010dadcc)) && (local_8 == DAT_010dade4)) {
    DAT_010dadcc = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar11 + 1;
}


//// FUNCTION FUN_00ad9df3 @ 00ad9df3 ////

void FUN_00ad9df3(void)

{
  TlsAlloc();
  return;
}


//// FUNCTION __mtterm @ 00ad9dfc ////

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2003 Release */

void __cdecl __mtterm(void)

{
  if (dwTlsIndex_00e9a620 != 0xffffffff) {
    (*DAT_010cbdcc)(dwTlsIndex_00e9a620);
    dwTlsIndex_00e9a620 = 0xffffffff;
  }
  FUN_00ad6fb7();
  return;
}


//// FUNCTION FUN_00ad9e19 @ 00ad9e19 ////

void __cdecl FUN_00ad9e19(int param_1)

{
  *(undefined **)(param_1 + 0x54) = &DAT_00e9a6d0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}


//// FUNCTION __getptd @ 00ad9e2c ////

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2003 Release */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata p_Var1;
  int iVar2;
  DWORD DVar3;
  
  dwErrCode = GetLastError();
  p_Var1 = (_ptiddata)(*DAT_010cbdc4)(dwTlsIndex_00e9a620);
  if (p_Var1 == (_ptiddata)0x0) {
    p_Var1 = _calloc(1,0x8c);
    if (p_Var1 != (_ptiddata)0x0) {
      iVar2 = (*DAT_010cbdc8)(dwTlsIndex_00e9a620,p_Var1);
      if (iVar2 != 0) {
        p_Var1->_initaddr = &DAT_00e9a6d0;
        p_Var1->_holdrand = 1;
        DVar3 = GetCurrentThreadId();
        p_Var1->_thandle = 0xffffffff;
        p_Var1->_tid = DVar3;
        goto LAB_00ad9e91;
      }
    }
    __amsg_exit(0x10);
  }
LAB_00ad9e91:
  SetLastError(dwErrCode);
  return p_Var1;
}


//// FUNCTION FUN_00ad9e9d @ 00ad9e9d ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void FUN_00ad9e9d(void *param_1)

{
  int *piVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x24));
  }
  if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x2c));
  }
  if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x34));
  }
  if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x3c));
  }
  if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x44));
  }
  if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x48));
  }
  if (*(undefined **)((int)param_1 + 0x54) != &DAT_00e9a6d0) {
                    /* WARNING: Subroutine does not return */
    _free(*(undefined **)((int)param_1 + 0x54));
  }
  __lock(0xd);
  piVar1 = *(int **)((int)param_1 + 0x60);
  if (((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) && (piVar1 != DAT_010dab84)
     ) {
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  FUN_00ad9fcf();
  __lock(0xc);
  piVar1 = *(int **)((int)param_1 + 100);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + -1;
    if (piVar1[0xb] != 0) {
      *(int *)piVar1[0xb] = *(int *)piVar1[0xb] + -1;
    }
    if (piVar1[0xd] != 0) {
      *(int *)piVar1[0xd] = *(int *)piVar1[0xd] + -1;
    }
    if (piVar1[0xc] != 0) {
      *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + -1;
    }
    if (piVar1[0x10] != 0) {
      *(int *)piVar1[0x10] = *(int *)piVar1[0x10] + -1;
    }
    *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
    if (((piVar1 != (int *)PTR_DAT_00e9a474) && (piVar1 != &DAT_00e9a420)) && (*piVar1 == 0)) {
      FUN_00ad7116(piVar1);
    }
  }
  FUN_00ad9fdb();
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00ad9fcf @ 00ad9fcf ////

void FUN_00ad9fcf(void)

{
  FUN_00ad700c(0xd);
  return;
}


//// FUNCTION FUN_00ad9fdb @ 00ad9fdb ////

void FUN_00ad9fdb(void)

{
  FUN_00ad700c(0xc);
  return;
}


//// FUNCTION FUN_00ad9fe4 @ 00ad9fe4 ////

void __cdecl FUN_00ad9fe4(void *param_1)

{
  if (dwTlsIndex_00e9a620 != 0xffffffff) {
    if (param_1 == (void *)0x0) {
      param_1 = (void *)(*DAT_010cbdc4)(dwTlsIndex_00e9a620);
    }
    FUN_00ad9e9d(param_1);
    (*DAT_010cbdc8)(dwTlsIndex_00e9a620,0);
  }
  return;
}


//// FUNCTION __mtinit @ 00ada01f ////

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2003 Release */

int __cdecl __mtinit(void)

{
  int iVar1;
  HMODULE hModule;
  DWORD *pDVar2;
  DWORD DVar3;
  
  iVar1 = __mtinitlocks();
  if (iVar1 == 0) {
    __mtterm();
    return 0;
  }
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_010cbdc0 = GetProcAddress(hModule,"FlsAlloc");
    DAT_010cbdc4 = GetProcAddress(hModule,"FlsGetValue");
    DAT_010cbdc8 = GetProcAddress(hModule,"FlsSetValue");
    DAT_010cbdcc = GetProcAddress(hModule,"FlsFree");
    if (DAT_010cbdc4 == (FARPROC)0x0) {
      DAT_010cbdc4 = TlsGetValue_exref;
      DAT_010cbdc8 = TlsSetValue_exref;
      DAT_010cbdc0 = FUN_00ad9df3;
      DAT_010cbdcc = TlsFree_exref;
    }
  }
  dwTlsIndex_00e9a620 = (*DAT_010cbdc0)(FUN_00ad9e9d);
  if (((dwTlsIndex_00e9a620 != 0xffffffff) && (pDVar2 = _calloc(1,0x8c), pDVar2 != (DWORD *)0x0)) &&
     (iVar1 = (*DAT_010cbdc8)(dwTlsIndex_00e9a620,pDVar2), iVar1 != 0)) {
    pDVar2[0x15] = (DWORD)&DAT_00e9a6d0;
    pDVar2[5] = 1;
    DVar3 = GetCurrentThreadId();
    pDVar2[1] = 0xffffffff;
    *pDVar2 = DVar3;
    return 1;
  }
  __mtterm();
  return 0;
}


//// FUNCTION terminate @ 00ada10e ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2003 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->ptlocinfo != (pthreadlocinfo)0x0) {
    p_Var1 = __getptd();
    (*(code *)p_Var1->ptlocinfo)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


//// FUNCTION _inconsistency @ 00ada15b ////

/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2003 Release */

void __cdecl _inconsistency(void)

{
  if (PTR_terminate_00e9a624 != (undefined *)0x0) {
    (*(code *)PTR_terminate_00e9a624)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


//// FUNCTION __CallSettingFrame@12 @ 00ada190 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Library: Visual Studio 2003 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}


//// FUNCTION _strcmp @ 00ada1e0 ////

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2003 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_00ada224;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_00ada1f0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_00ada224;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_00ada224;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_00ada1f0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_00ada224:
  return (uint)bVar5 * -2 + 1;
}


//// FUNCTION __CxxUnhandledExceptionFilter @ 00ada268 ////

/* Library Function - Single Match
    long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
   
   Library: Visual Studio 2003 Release */

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  int iVar2;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((pEVar1->ExceptionInformation[0] == 0x19930520 ||
      (pEVar1->ExceptionInformation[0] == 0x19930521)))) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  if ((DAT_010cbdd0 != (_func_int *)0x0) && (iVar2 = _ValidateExecute(DAT_010cbdd0), iVar2 != 0)) {
    iVar2 = (*DAT_010cbdd0)(param_1);
    return iVar2;
  }
  return 0;
}


//// FUNCTION FUN_00ada2e0 @ 00ada2e0 ////

uint * __cdecl FUN_00ada2e0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_00ada3d0;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_00ada3d0:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


//// FUNCTION FUN_00ada2f0 @ 00ada2f0 ////

uint * __cdecl FUN_00ada2f0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_00ada310;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_00ada343;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x00ada35f;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_00ada310:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x00ada35f;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x00ada35f;
    }
  }
LAB_00ada343:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x00ada35f:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_00ada3d0:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_00ada3d0;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


//// FUNCTION Destructor @ 00ada3f9 ////

/* Library Function - Single Match
    public: void __thiscall HeapManager::Destructor(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall HeapManager::Destructor(HeapManager *this)

{
  if (*(int *)(this + 4) != 0) {
    while (*(int *)(this + 0xc) = *(int *)(this + 8), *(int *)(this + 8) != 0) {
      *(undefined4 *)(this + 8) = **(undefined4 **)(this + 0xc);
      (**(code **)(this + 4))(*(undefined4 *)(this + 0xc));
    }
  }
  return;
}


//// FUNCTION getNumberOfDimensions @ 00ada41f ////

/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2003 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_010cbdf4;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_010cbdf4 = DAT_010cbdf4 + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_00ada46b:
    if (cVar2 == '@') {
      cVar2 = *DAT_010cbdf4;
      DAT_010cbdf4 = DAT_010cbdf4 + 1;
      if (cVar2 != '@') {
LAB_00ada47e:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_00ada47e;
      DAT_010cbdf4 = DAT_010cbdf4 + 1;
      iVar1 = iVar1 * 0x10 + -0x41 + (int)cVar2;
      cVar2 = *DAT_010cbdf4;
      goto LAB_00ada46b;
    }
  }
  return 0;
}


//// FUNCTION getTypeEncoding @ 00ada482 ////

/* WARNING: Removing unreachable block (ram,0x00ada7eb) */
/* WARNING: Removing unreachable block (ram,0x00ada677) */
/* WARNING: Removing unreachable block (ram,0x00ada800) */
/* WARNING: Removing unreachable block (ram,0x00ada7b1) */
/* WARNING: Removing unreachable block (ram,0x00ada777) */
/* WARNING: Removing unreachable block (ram,0x00ada78c) */
/* WARNING: Removing unreachable block (ram,0x00ada7c6) */
/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getTypeEncoding(void)
   
   Library: Visual Studio 2003 Release */

int __cdecl UnDecorator::getTypeEncoding(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
LAB_00ada491:
  uVar2 = 0;
  if (*DAT_010cbdf4 == '_') {
    DAT_010cbdf4 = DAT_010cbdf4 + 1;
    uVar2 = 0x4000;
  }
  cVar1 = *DAT_010cbdf4;
  if ((cVar1 < 'A') || ('Z' < cVar1)) {
    if (cVar1 != '$') {
      cVar1 = *DAT_010cbdf4;
      if ((cVar1 < '0') || ('8' < cVar1)) {
        if (cVar1 == '9') {
          DAT_010cbdf4 = DAT_010cbdf4 + 1;
          return 0xfffd;
        }
        return (cVar1 != '\0') + 0xfffe;
      }
      pcVar3 = DAT_010cbdf4 + 1;
      switch(cVar1) {
      case '0':
        DAT_010cbdf4 = pcVar3;
        return 0x800;
      case '1':
        DAT_010cbdf4 = pcVar3;
        return 0x1000;
      case '2':
        DAT_010cbdf4 = pcVar3;
        return 0;
      case '3':
        DAT_010cbdf4 = pcVar3;
        return 0x4000;
      case '4':
        DAT_010cbdf4 = pcVar3;
        return 0x2000;
      case '5':
        DAT_010cbdf4 = pcVar3;
        return 0x6000;
      case '6':
        DAT_010cbdf4 = pcVar3;
        return 0x6800;
      case '7':
        DAT_010cbdf4 = pcVar3;
        return 0x7000;
      case '8':
        DAT_010cbdf4 = pcVar3;
        return 0x7800;
      }
      goto switchD_00ada767_default;
    }
    pcVar3 = DAT_010cbdf4 + 1;
    cVar1 = *pcVar3;
    if ('B' < cVar1) {
      if (cVar1 == 'C') {
        uVar2 = 0x7c00;
      }
      else if (cVar1 == 'D') {
        uVar2 = uVar2 | 0x9100;
      }
      else {
        if (cVar1 != 'E') goto switchD_00ada767_default;
        uVar2 = uVar2 | 0x9200;
      }
      goto switchD_00ada50b_default;
    }
    if (cVar1 == 'B') {
      uVar2 = uVar2 | 0x9800;
      goto switchD_00ada50b_default;
    }
    if (cVar1 == '\0') {
      uVar2 = 0xfffe;
      goto switchD_00ada50b_default;
    }
    if (cVar1 == '$') {
      pcVar4 = pcVar3;
      if (DAT_010cbdf4[2] == 'P') {
        pcVar4 = DAT_010cbdf4 + 2;
      }
      pcVar3 = pcVar4 + 1;
      switch(*pcVar3) {
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'L':
      case 'M':
        DAT_010cbdf4 = pcVar4 + 2;
        break;
      case 'J':
      case 'K':
      case 'N':
      case 'O':
        pcVar3 = pcVar4 + 2;
        cVar1 = *pcVar3;
        if ((cVar1 < '0') || ('9' < cVar1)) {
          uVar2 = 0xffff;
switchD_00ada50b_default:
          DAT_010cbdf4 = pcVar3 + 1;
          return uVar2;
        }
        DAT_010cbdf4 = pcVar4 + cVar1 + -0x2d;
        break;
      default:
        goto switchD_00ada50b_default;
      }
      goto LAB_00ada491;
    }
    if ('/' < cVar1) {
      if ('5' < cVar1) {
        if (cVar1 != 'A') goto switchD_00ada767_default;
        uVar2 = uVar2 | 0x9000;
        goto switchD_00ada50b_default;
      }
      if (((int)*pcVar3 - 0x30U & 1) == 0) {
        uVar2 = uVar2 | 0x8d00;
      }
      else {
        uVar2 = uVar2 | 0xad00;
      }
      uVar6 = (int)*pcVar3 - 0x30U & 6;
      if (uVar6 == 0) {
        if ((uVar2 & 0x8000) == 0) {
          uVar2 = uVar2 | 0x800;
        }
        else {
          uVar2 = uVar2 | 0x40;
        }
        goto switchD_00ada50b_default;
      }
      if (uVar6 == 2) {
        if ((uVar2 & 0x8000) == 0) {
          uVar2 = uVar2 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar2 = uVar2 | 0x80;
        }
        goto switchD_00ada50b_default;
      }
      if (uVar6 == 4) {
        if ((uVar2 & 0x8000) == 0) {
          uVar2 = uVar2 & 0xffffe7ff;
        }
        goto switchD_00ada50b_default;
      }
    }
  }
  else {
    uVar6 = (int)*DAT_010cbdf4 - 0x41;
    pcVar3 = DAT_010cbdf4 + 1;
    if ((uVar6 & 1) == 0) {
      uVar2 = uVar2 | 0x8000;
    }
    else {
      uVar2 = uVar2 | 0xa000;
    }
    if (0x17 < (int)uVar6) {
      DAT_010cbdf4 = pcVar3;
      return uVar2;
    }
    if ((uVar2 & 0x8000) == 0) {
      uVar2 = uVar2 & 0xffff9fff;
    }
    else {
      uVar2 = uVar2 | 0x800;
    }
    uVar5 = uVar6 & 0x18;
    if (uVar5 == 0) {
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 | 0x800;
      }
      else {
        uVar2 = uVar2 | 0x40;
      }
    }
    else if (uVar5 == 8) {
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 & 0xfffff7ff | 0x1000;
      }
      else {
        uVar2 = uVar2 | 0x80;
      }
    }
    else {
      if (uVar5 != 0x10) goto switchD_00ada767_default;
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 & 0xffffe7ff;
      }
    }
    uVar6 = uVar6 & 6;
    if (uVar6 == 0) {
      DAT_010cbdf4 = pcVar3;
      return uVar2;
    }
    if (uVar6 == 2) {
      if ((uVar2 & 0x8000) != 0) {
        DAT_010cbdf4 = pcVar3;
        return uVar2 | 0x200;
      }
      DAT_010cbdf4 = pcVar3;
      return uVar2 & 0xffff9fff;
    }
    if (uVar6 == 4) {
      DAT_010cbdf4 = pcVar3;
      return uVar2 | 0x100;
    }
    if (uVar6 == 6) {
      DAT_010cbdf4 = pcVar3;
      return uVar2 | 0x400;
    }
  }
switchD_00ada767_default:
  DAT_010cbdf4 = DAT_010cbdf4 + 1;
  return 0xffff;
}


//// FUNCTION UScore @ 00ada97a ////

/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator::UScore(enum Tokens)
   
   Library: Visual Studio 2003 Release */

char * __cdecl UnDecorator::UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__00d7ebb8)[param_1];
  if ((~DAT_010cbe04 & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}


//// FUNCTION getMemory @ 00ada993 ////

/* Library Function - Single Match
    public: void * __thiscall HeapManager::getMemory(unsigned int,int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall HeapManager::getMemory(HeapManager *this,uint param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7 & 0xfffffff8;
  if (param_2 != 0) {
    pvVar1 = (void *)(**(code **)this)(uVar3);
    return pvVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (*(uint *)(this + 0x10) < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = getMemory((HeapManager *)&DAT_010cbdd4,0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(undefined4 **)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(this + 8) = puVar2;
        }
        else {
          **(undefined4 **)(this + 0xc) = puVar2;
        }
        *(undefined4 **)(this + 0xc) = puVar2;
        *(uint *)(this + 0x10) = 0x1000 - uVar3;
        goto LAB_00adaa07;
      }
    }
    pvVar1 = (void *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_00adaa07:
    pvVar1 = (void *)(*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10));
  }
  return pvVar1;
}


//// FUNCTION DName @ 00adaa34 ////

/* Library Function - Single Match
    public: __thiscall DName::DName(class DName const &)
   
   Library: Visual Studio 2003 Release */

void __thiscall DName::DName(DName *this,DName *param_1)

{
  uint uVar1;
  
  *(uint *)(this + 4) =
       *(uint *)(this + 4) ^ ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ *(uint *)(this + 4)) & 0xf;
  uVar1 = (*(uint *)(param_1 + 4) ^ *(uint *)(this + 4)) & 0x10 ^ *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) ^ (uVar1 ^ *(uint *)(param_1 + 4)) & 0x100;
  return;
}


//// FUNCTION operator= @ 00adaadb ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName const &)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 4);
  iVar1 = (int)(uVar2 << 0x1c) >> 0x1c;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    uVar2 = ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ uVar2) & 0xf ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x10 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x20 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x40 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    *(uint *)(this + 4) = (*(uint *)(param_1 + 4) ^ uVar2) & 0x80 ^ uVar2;
    *(undefined4 *)this = *(undefined4 *)param_1;
  }
  return this;
}


//// FUNCTION operator[] @ 00adab4f ////

/* Library Function - Single Match
    public: class DName const & __thiscall Replicator::operator[](int)const 
   
   Library: Visual Studio 2003 Release */

DName * __thiscall Replicator::operator[](Replicator *this,int param_1)

{
  DName *pDVar1;
  
  if ((param_1 < 0) || (9 < param_1)) {
    pDVar1 = (DName *)(this + 0x2c);
  }
  else if ((*(int *)this == -1) || (*(int *)this < param_1)) {
    pDVar1 = (DName *)(this + 0x34);
  }
  else {
    pDVar1 = *(DName **)(this + param_1 * 4 + 4);
  }
  return pDVar1;
}


//// FUNCTION operator+= @ 00adab89 ////

/* Library Function - Single Match
    public: class DNameNode & __thiscall DNameNode::operator+=(class DNameNode *)
   
   Library: Visual Studio 2003 Release */

DNameNode * __thiscall DNameNode::operator+=(DNameNode *this,DNameNode *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (DNameNode *)0x0) {
    iVar1 = *(int *)(this + 4);
    if (*(int *)(this + 4) == 0) {
      *(DNameNode **)(this + 4) = param_1;
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 4);
      } while (iVar1 != 0);
      *(DNameNode **)(iVar2 + 4) = param_1;
    }
  }
  return this;
}


//// FUNCTION pDNameNode @ 00adabef ////

/* Library Function - Single Match
    public: __thiscall pDNameNode::pDNameNode(class DName *)
   
   Library: Visual Studio 2003 Release */

void __thiscall pDNameNode::pDNameNode(pDNameNode *this,DName *param_1)

{
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = &PTR_LAB_00d7f1c4;
  if ((param_1 != (DName *)0x0) &&
     ((iVar1 = (*(int *)(param_1 + 4) << 0x1c) >> 0x1c, iVar1 == 1 || (iVar1 == 3)))) {
    param_1 = (DName *)0x0;
  }
  *(DName **)(this + 8) = param_1;
  return;
}


//// FUNCTION DNameStatusNode @ 00adac1e ////

/* Library Function - Single Match
    public: __thiscall DNameStatusNode::DNameStatusNode(enum DNameStatus)
   
   Library: Visual Studio 2003 Release */

void __thiscall DNameStatusNode::DNameStatusNode(DNameStatusNode *this,DNameStatus param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = &PTR_LAB_00d7f1d0;
  *(DNameStatus *)(this + 8) = param_1;
  if (param_1 == 2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


//// FUNCTION und_strncpy @ 00adac60 ////

/* Library Function - Single Match
    char * __cdecl und_strncpy(char *,char const *,unsigned int)
   
   Library: Visual Studio 2003 Release */

char * __cdecl und_strncpy(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = param_1;
  for (; (param_2 != (char *)0x0 && (cVar1 = *in_EDX, *pcVar2 = cVar1, cVar1 != '\0'));
      in_EDX = in_EDX + 1) {
    pcVar2 = pcVar2 + 1;
    param_2 = param_2 + -1;
  }
  return param_1;
}


//// FUNCTION getDataIndirectType @ 00adaca5 ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(void)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getDataIndirectType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xfffffe00;
  local_10 = local_10 & 0xfffffe00;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}


//// FUNCTION getThisType @ 00adacd8 ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThisType(void)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getThisType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xfffffe00;
  local_10 = local_10 & 0xfffffe00;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}


//// FUNCTION DName @ 00adad1f ////

/* Library Function - Single Match
    public: __thiscall DName::DName(class DName *)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::DName(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  if (param_1 == (DName *)0x0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff0;
    *(undefined4 *)this = 0;
  }
  else {
    this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0xc,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    *(uint *)(this + 4) =
         *(uint *)(this + 4) ^ ((-(uint)(iVar1 != 0) & 0xfffffffd) + 3 ^ *(uint *)(this + 4)) & 0xf;
  }
  *(ushort *)(this + 4) = *(ushort *)(this + 4) & 0xfe0f;
  return this;
}


//// FUNCTION DName @ 00adad74 ////

/* Library Function - Single Match
    public: __thiscall DName::DName(enum DNameStatus)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::DName(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *this_00;
  int iVar2;
  
  DVar1 = param_1;
  if ((param_1 != 1) && (param_1 != 3)) {
    DVar1 = 0;
  }
  *(DNameStatus *)(this + 4) =
       *(DNameStatus *)(this + 4) ^ (*(DNameStatus *)(this + 4) ^ DVar1) & 0xf;
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0x10,0);
  if (this_00 == (DNameStatusNode *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DNameStatusNode::DNameStatusNode(this_00,param_1);
  }
  *(ushort *)(this + 4) = *(ushort *)(this + 4) & 0xfe0f;
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  }
  return this;
}


//// FUNCTION isValid @ 00adadd4 ////

/* Library Function - Single Match
    public: int __thiscall DName::isValid(void)const 
   
   Library: Visual Studio 2003 Release */

int __thiscall DName::isValid(DName *this)

{
  int iVar1;
  
  iVar1 = (*(int *)(this + 4) << 0x1c) >> 0x1c;
  if ((iVar1 != 0) && (iVar1 != 2)) {
    return 0;
  }
  return 1;
}


//// FUNCTION isEmpty @ 00adadeb ////

/* Library Function - Single Match
    public: int __thiscall DName::isEmpty(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall DName::isEmpty(DName *this)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    iVar1 = isValid(this);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION isUDC @ 00adae00 ////

/* Library Function - Single Match
    public: int __thiscall DName::isUDC(void)const 
   
   Library: Visual Studio 2003 Release */

int __thiscall DName::isUDC(DName *this)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = isEmpty(this);
  if ((iVar1 == 0) && ((*(byte *)(extraout_ECX + 4) & 0x20) != 0)) {
    return 1;
  }
  return 0;
}


//// FUNCTION length @ 00adae36 ////

/* Library Function - Single Match
    public: int __thiscall DName::length(void)const 
   
   Library: Visual Studio 2003 Release */

int __thiscall DName::length(DName *this)

{
  int iVar1;
  undefined4 *extraout_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = isEmpty(this);
  if (iVar1 == 0) {
    for (puVar2 = (undefined4 *)*extraout_ECX; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      iVar1 = (**(code **)*puVar2)();
      iVar3 = iVar3 + iVar1;
    }
  }
  return iVar3;
}


//// FUNCTION getLastChar @ 00adae5b ////

/* Library Function - Single Match
    public: char __thiscall DName::getLastChar(void)const 
   
   Library: Visual Studio 2003 Release */

char __thiscall DName::getLastChar(DName *this)

{
  char cVar1;
  int iVar2;
  int *extraout_ECX;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  iVar2 = isEmpty(this);
  if ((iVar2 == 0) && (piVar3 = (int *)*extraout_ECX, piVar3 != (int *)0x0)) {
    do {
      iVar2 = (**(code **)*piVar3)();
      if (iVar2 != 0) {
        piVar4 = piVar3;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (piVar4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00adae8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      cVar1 = (**(code **)(*piVar4 + 4))();
      return cVar1;
    }
  }
  return '\0';
}


//// FUNCTION getString @ 00adae93 ////

/* Library Function - Single Match
    public: char * __thiscall DName::getString(char *,int)const 
   
   Library: Visual Studio 2003 Release */

char * __thiscall DName::getString(DName *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  DName *this_00;
  uint uVar3;
  int *piVar4;
  
  iVar1 = isEmpty(this);
  if (iVar1 == 0) {
    uVar3 = param_2;
    if (param_1 == (char *)0x0) {
      iVar1 = length(this_00);
      uVar3 = iVar1 + 1;
      param_1 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,uVar3,0);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    piVar4 = *(int **)this;
    param_2 = (int)param_1;
    while ((piVar4 != (int *)0x0 && (0 < (int)uVar3))) {
      uVar2 = (**(code **)*piVar4)();
      if (uVar2 != 0) {
        if ((int)(uVar3 - uVar2) < 0) {
          uVar2 = uVar3;
        }
        iVar1 = (**(code **)(*piVar4 + 8))(param_2,uVar2);
        if (iVar1 != 0) {
          uVar3 = uVar3 - uVar2;
          param_2 = param_2 + uVar2;
        }
      }
      piVar4 = (int *)piVar4[1];
    }
  }
  else {
    param_2 = (int)param_1;
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  *(char *)param_2 = '\0';
  return param_1;
}


//// FUNCTION operator|= @ 00adaf24 ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator|=(class DName const &)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator|=(DName *this,DName *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  DName *extraout_EDX;
  
  uVar1 = *(uint *)(this + 4);
  if (((byte)uVar1 & 0xf) != 3) {
    iVar2 = isValid(param_1);
    this = extraout_EDX;
    if (iVar2 == 0) {
      *(uint *)(extraout_EDX + 4) =
           ((*(int *)(extraout_ECX + 4) << 0x1c) >> 0x1c ^ uVar1) & 0xf ^ uVar1;
    }
  }
  return this;
}


//// FUNCTION operator= @ 00adaf59 ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(enum DNameStatus)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator=(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *this_00;
  int iVar2;
  
  if ((param_1 == 1) || (param_1 == 3)) {
    DVar1 = *(DNameStatus *)(this + 4);
    *(undefined4 *)this = 0;
    if (((byte)DVar1 & 0xf) != 3) {
      *(DNameStatus *)(this + 4) = (DVar1 ^ param_1) & 0xf ^ DVar1;
    }
  }
  else {
    iVar2 = (int)(*(uint *)(this + 4) << 0x1c) >> 0x1c;
    if ((iVar2 == 0) || (iVar2 == 2)) {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffff0f;
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0x10,0);
      if (this_00 == (DNameStatusNode *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = DNameStatusNode::DNameStatusNode(this_00,param_1);
      }
      *(int *)this = iVar2;
      if (iVar2 == 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
    }
  }
  return this;
}


//// FUNCTION Replicator @ 00adafda ////

/* Library Function - Single Match
    public: __thiscall Replicator::Replicator(void)
   
   Library: Visual Studio 2003 Release */

Replicator * __thiscall Replicator::Replicator(Replicator *this)

{
  DName::DName((DName *)(this + 0x2c),3);
  DName::DName((DName *)(this + 0x34),1);
  *(undefined4 *)this = 0xffffffff;
  return this;
}


//// FUNCTION operator+= @ 00adaff8 ////

/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator::operator+=(class DName const &)
   
   Library: Visual Studio 2003 Release */

Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  
  if (*(int *)this != 9) {
    iVar1 = DName::isEmpty(param_1);
    if (iVar1 == 0) {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,8,0);
      if (this_00 == (DName *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = DName::DName(this_00,param_1);
      }
      if (iVar1 != 0) {
        *(int *)this = *(int *)this + 1;
        *(int *)(this + *(int *)this * 4 + 4) = iVar1;
      }
    }
  }
  return this;
}


//// FUNCTION clone @ 00adb03f ////

/* Library Function - Single Match
    public: class DNameNode * __thiscall DNameNode::clone(void)
   
   Library: Visual Studio 2003 Release */

DNameNode * __thiscall DNameNode::clone(DNameNode *this)

{
  pDNameNode *this_00;
  DName *pDVar1;
  DNameNode *pDVar2;
  
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0xc,0);
  if (this_00 == (pDNameNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,8,0);
    if (pDVar1 == (DName *)0x0) {
      pDVar1 = (DName *)0x0;
    }
    else {
      *(ushort *)(pDVar1 + 4) = *(ushort *)(pDVar1 + 4) & 0xfe00;
      *(DNameNode **)pDVar1 = this;
    }
    pDVar2 = (DNameNode *)pDNameNode::pDNameNode(this_00,pDVar1);
  }
  return pDVar2;
}


//// FUNCTION pcharNode @ 00adb085 ////

/* Library Function - Single Match
    public: __thiscall pcharNode::pcharNode(char const *,int)
   
   Library: Visual Studio 2003 Release */

pcharNode * __thiscall pcharNode::pcharNode(pcharNode *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint unaff_EDI;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = &PTR_LAB_00d7f1dc;
  if (param_2 == 0) {
    if (param_1 == (char *)0x0) goto LAB_00adb0de;
    param_2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      cVar1 = *(char *)(param_2 + (int)param_1);
    }
    if ((char *)param_2 == (char *)0x0) goto LAB_00adb0de;
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,param_2,0);
    *(char **)(this + 8) = pcVar2;
    *(int *)(this + 0xc) = param_2;
    if (pcVar2 == (char *)0x0) {
      return this;
    }
    und_strncpy(pcVar2,(char *)param_2,unaff_EDI);
    return this;
  }
LAB_00adb0de:
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}


//// FUNCTION UnDecorator @ 00adb19d ////

/* Library Function - Single Match
    public: __thiscall UnDecorator::UnDecorator(char *,char const *,int,char *
   (__cdecl*)(long),unsigned long)
   
   Library: Visual Studio 2003 Release */

UnDecorator * __thiscall
UnDecorator::UnDecorator
          (UnDecorator *this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,
          ulong param_5)

{
  Replicator::Replicator((Replicator *)this);
  Replicator::Replicator((Replicator *)(this + 0x3c));
  DAT_010cbdf8 = param_2;
  DAT_010cbdf4 = param_2;
  if (param_1 == (char *)0x0) {
    DAT_010cbdfc = (char *)0x0;
    DAT_010cbe00 = 0;
  }
  else {
    DAT_010cbe00 = param_3 + -1;
    DAT_010cbdfc = param_1;
  }
  DAT_010cbe04 = param_5;
  DAT_010cbdec = (Replicator *)(this + 0x3c);
  DAT_010cbe08 = param_4;
  DAT_010cbde8 = this;
  DAT_010cbe0c = 0;
  return this;
}


//// FUNCTION getReturnType @ 00adb210 ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReturnType(class DName *)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getReturnType(DName *param_1)

{
  DName *in_stack_00000008;
  
  if (*DAT_010cbdf4 == '@') {
    DAT_010cbdf4 = DAT_010cbdf4 + 1;
    DName::DName(param_1,in_stack_00000008);
  }
  else {
    getDataType(param_1);
  }
  return param_1;
}


//// FUNCTION operator+= @ 00adb24e ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(enum DNameStatus)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator+=(DName *this,DNameStatus param_1)

{
  int iVar1;
  DNameStatusNode *this_00;
  DNameNode *pDVar2;
  DNameNode *this_01;
  
  iVar1 = isEmpty(this);
  if (((iVar1 != 0) || (param_1 == 1)) || (param_1 == 3)) {
    operator=(this,param_1);
    return this;
  }
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0x10,0);
  if (this_00 == (DNameStatusNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar2 = (DNameNode *)DNameStatusNode::DNameStatusNode(this_00,param_1);
  }
  if (pDVar2 == (DNameNode *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    this_01 = DNameNode::clone(*(DNameNode **)this);
    *(DNameNode **)this = this_01;
    if (this_01 == (DNameNode *)0x0) goto LAB_00adb2ac;
    DNameNode::operator+=(this_01,pDVar2);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_00adb2ac:
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  return this;
}


//// FUNCTION operator= @ 00adb2c9 ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName *)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  iVar1 = (int)(*(uint *)(this + 4) << 0x1c) >> 0x1c;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    if (param_1 == (DName *)0x0) {
      operator=(this,3);
    }
    else {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffff0f;
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0xc,0);
      if (this_00 == (pDNameNode *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = pDNameNode::pDNameNode(this_00,param_1);
      }
      *(int *)this = iVar1;
      if (iVar1 == 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
    }
  }
  return this;
}


//// FUNCTION doPchar @ 00adb331 ////

/* Library Function - Single Match
    private: void __thiscall DName::doPchar(char const *,int)
   
   Library: Visual Studio 2003 Release */

void __thiscall DName::doPchar(DName *this,char *param_1,int param_2)

{
  char cVar1;
  pcharNode *this_00;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(this + 4);
  iVar4 = (int)(uVar3 << 0x1c) >> 0x1c;
  if (iVar4 == 1) {
    return;
  }
  if (iVar4 == 3) {
    return;
  }
  if (*(int *)this != 0) {
    operator=(this,3);
    return;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    uVar3 = uVar3 & 0xfffffff1 | 1;
    goto LAB_00adb3ce;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar2 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0xc,0);
      if (puVar2 == (undefined4 *)0x0) goto LAB_00adb3b5;
      cVar1 = *param_1;
      puVar2[1] = 0;
      *puVar2 = &PTR_LAB_00d7f1b8;
      *(char *)(puVar2 + 2) = cVar1;
    }
    else {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0x10,0);
      if (this_00 == (pcharNode *)0x0) {
LAB_00adb3b5:
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)pcharNode::pcharNode(this_00,param_1,param_2);
      }
    }
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      return;
    }
    uVar3 = *(uint *)(this + 4);
  }
  uVar3 = uVar3 & 0xfffffff3 | 3;
LAB_00adb3ce:
  *(uint *)(this + 4) = uVar3;
  return;
}


//// FUNCTION DName @ 00adb3d7 ////

/* Library Function - Single Match
    public: __thiscall DName::DName(char)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::DName(DName *this,char param_1)

{
  *(undefined4 *)this = 0;
  *(ushort *)(this + 4) = *(ushort *)(this + 4) & 0xfe00;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}


//// FUNCTION DName @ 00adb3fc ////

/* Library Function - Single Match
    public: __thiscall DName::DName(char const *)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::DName(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  *(ushort *)(this + 4) = *(ushort *)(this + 4) & 0xfe00;
  *(undefined4 *)this = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar2];
    }
    doPchar(this,param_1,iVar2);
  }
  return this;
}


//// FUNCTION DName @ 00adb42c ////

/* Library Function - Single Match
    public: __thiscall DName::DName(char const * &,char)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::DName(DName *this,char **param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  
  *(ushort *)(this + 4) = *(ushort *)(this + 4) & 0xfe00;
  uVar5 = *(uint *)(this + 4);
  iVar6 = 0;
  *(undefined4 *)this = 0;
  pcVar3 = *param_1;
  if (pcVar3 == (char *)0x0) {
LAB_00adb4d2:
    uVar5 = uVar5 & 0xfffffff1 | 1;
  }
  else {
    if (*pcVar3 != '\0') {
      do {
        bVar1 = **param_1;
        if (bVar1 == param_2) break;
        if ((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1))))
             && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
            (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
           (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((DAT_010cbe04._2_1_ & 1) == 0)))) {
          uVar5 = *(uint *)(this + 4);
          goto LAB_00adb4d2;
        }
        iVar6 = iVar6 + 1;
        pbVar4 = (byte *)(*param_1 + 1);
        *param_1 = (char *)pbVar4;
      } while (*pbVar4 != 0);
      doPchar(this,pcVar3,iVar6);
      cVar2 = **param_1;
      if (cVar2 != '\0') {
        *param_1 = *param_1 + 1;
        if (cVar2 == param_2) {
          *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff0;
          return this;
        }
        uVar5 = *(uint *)(this + 4) & 0xfffffff3 | 3;
        *(undefined4 *)this = 0;
        goto LAB_00adb4d8;
      }
      uVar5 = *(uint *)(this + 4);
      if ((uVar5 & 0xf) != 0) {
        return this;
      }
    }
    uVar5 = uVar5 & 0xfffffff2 | 2;
  }
LAB_00adb4d8:
  *(uint *)(this + 4) = uVar5;
  return this;
}


//// FUNCTION DName @ 00adb4f9 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    public: __thiscall DName::DName(unsigned __int64)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::DName(DName *this,__uint64 param_1)

{
  char extraout_CL;
  char *pcVar1;
  __uint64 _Var2;
  char local_d [5];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  *(undefined4 *)this = 0;
  *(ushort *)(this + 4) = *(ushort *)(this + 4) & 0xfe00;
  pcVar1 = local_d + 1;
  local_d[1] = 0;
  _Var2 = param_1;
  do {
    param_1._4_4_ = (uint)(_Var2 >> 0x20);
    param_1._0_4_ = (uint)_Var2;
    pcVar1 = pcVar1 + -1;
    _Var2 = __aulldvrm((uint)param_1,param_1._4_4_,10,0);
    *pcVar1 = extraout_CL + '0';
  } while (_Var2 != 0);
  doPchar(this,pcVar1,(int)(local_d + (1 - (int)pcVar1)));
  return this;
}


//// FUNCTION DName @ 00adb55d ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    public: __thiscall DName::DName(__int64)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::DName(DName *this,__int64 param_1)

{
  bool bVar1;
  char extraout_CL;
  char *pcVar2;
  char *pcVar3;
  char local_d [5];
  undefined4 local_8;
  
  local_8 = DAT_00e9a098;
  *(ushort *)(this + 4) = *(ushort *)(this + 4) & 0xfe00;
  pcVar3 = local_d + 2;
  *(undefined4 *)this = 0;
  local_d[2] = 0;
  bVar1 = false;
  if ((param_1 < 0x100000000) && (param_1 < 0)) {
    bVar1 = true;
    param_1 = CONCAT44(-(param_1._4_4_ + (uint)((uint)param_1 != 0)),-(uint)param_1);
  }
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + -1;
    param_1 = __aulldvrm((uint)param_1,(uint)((ulonglong)param_1 >> 0x20),10,0);
    *pcVar3 = extraout_CL + '0';
  } while (param_1 != 0);
  if (bVar1) {
    pcVar3 = pcVar2 + -2;
    *pcVar3 = '-';
  }
  doPchar(this,pcVar3,(int)(local_d + (2 - (int)pcVar3)));
  return this;
}


//// FUNCTION operator+ @ 00adb5ef ////

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(enum DNameStatus)const 
   
   Library: Visual Studio 2003 Release */

DNameStatus __thiscall DName::operator+(DName *this,DNameStatus param_1)

{
  int iVar1;
  DName *this_00;
  DNameStatus in_stack_00000008;
  DName *local_c;
  DName *pDStack_8;
  
  local_c = this;
  pDStack_8 = this;
  DName((DName *)&local_c,this);
  iVar1 = isEmpty((DName *)&local_c);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  DName((DName *)param_1,(DName *)&local_c);
  return param_1;
}


//// FUNCTION operator+= @ 00adb62b ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName const &)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  int iVar1;
  DNameNode *this_00;
  
  iVar1 = isEmpty(param_1);
  if (iVar1 == 0) {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      this_00 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = this_00;
      if (this_00 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        DNameNode::operator+=(this_00,*(DNameNode **)param_1);
      }
    }
    else {
      operator=(this,param_1);
    }
  }
  else {
    operator+=(this,(*(int *)(param_1 + 4) << 0x1c) >> 0x1c);
  }
  return this;
}


//// FUNCTION operator+= @ 00adb68f ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName *)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  int iVar1;
  DNameStatus DVar2;
  pDNameNode *this_00;
  DNameNode *pDVar3;
  DNameNode *this_01;
  DName *this_02;
  
  if (param_1 == (DName *)0x0) {
    return this;
  }
  iVar1 = isEmpty(this);
  if (iVar1 != 0) {
    operator=(this_02,param_1);
    return this;
  }
  DVar2 = (*(int *)(param_1 + 4) << 0x1c) >> 0x1c;
  if ((DVar2 != 0) && (DVar2 != 2)) {
    operator+=(this,DVar2);
    return this;
  }
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0xc,0);
  if (this_00 == (pDNameNode *)0x0) {
    pDVar3 = (DNameNode *)0x0;
  }
  else {
    pDVar3 = (DNameNode *)pDNameNode::pDNameNode(this_00,param_1);
  }
  if (pDVar3 == (DNameNode *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    this_01 = DNameNode::clone(*(DNameNode **)this);
    *(DNameNode **)this = this_01;
    if (this_01 == (DNameNode *)0x0) goto LAB_00adb709;
    DNameNode::operator+=(this_01,pDVar3);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_00adb709:
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  return this;
}


//// FUNCTION operator= @ 00adb71c ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator=(DName *this,char param_1)

{
  this[4] = (DName)((byte)this[4] & 0xf);
  doPchar(this,&param_1,1);
  return this;
}


//// FUNCTION operator= @ 00adb735 ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char const *)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator=(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  this[4] = (DName)((byte)this[4] & 0xf);
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  doPchar(this,param_1,iVar2);
  return this;
}


//// FUNCTION getCallingConvention @ 00adb75c ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getCallingConvention(void)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getCallingConvention(void)

{
  uint uVar1;
  char *pcVar2;
  uint in_ECX;
  DName *in_stack_00000004;
  Tokens TVar3;
  DNameStatus DVar4;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_010cbdf4 == '\0') {
    DVar4 = 2;
  }
  else {
    uVar1 = (int)*DAT_010cbdf4 - 0x41;
    DAT_010cbdf4 = DAT_010cbdf4 + 1;
    if (uVar1 < 0xd) {
      local_c = 0;
      local_8 = in_ECX & 0xfffffe00;
      if ((~(DAT_010cbe04 >> 1) & 1) != 0) {
        uVar1 = uVar1 & 0xfffffffe;
        if (uVar1 == 0) {
          TVar3 = 1;
        }
        else if (uVar1 == 2) {
          TVar3 = 2;
        }
        else if (uVar1 == 4) {
          TVar3 = 4;
        }
        else if (uVar1 == 6) {
          TVar3 = 3;
        }
        else if (uVar1 == 8) {
          TVar3 = 5;
        }
        else {
          if (uVar1 != 0xc) goto LAB_00adb7e0;
          TVar3 = 6;
        }
        pcVar2 = UScore(TVar3);
        DName::operator=((DName *)&local_c,pcVar2);
      }
LAB_00adb7e0:
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    DVar4 = 1;
  }
  DName::DName(in_stack_00000004,DVar4);
  return in_stack_00000004;
}


//// FUNCTION getVCallThunkType @ 00adb801 ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVCallThunkType(void)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getVCallThunkType(void)

{
  DName *in_stack_00000004;
  DNameStatus DVar1;
  
  if (*DAT_010cbdf4 == '\0') {
    DVar1 = 2;
  }
  else {
    if (*DAT_010cbdf4 == 'A') {
      DAT_010cbdf4 = DAT_010cbdf4 + 1;
      DName::DName(in_stack_00000004,"{flat}");
      return in_stack_00000004;
    }
    DVar1 = 1;
  }
  DName::DName(in_stack_00000004,DVar1);
  return in_stack_00000004;
}


//// FUNCTION operator+ @ 00adb838 ////

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName const &)const 
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  DName *extraout_ECX;
  DName *in_stack_00000008;
  DName *local_c;
  DName *pDStack_8;
  
  local_c = this;
  pDStack_8 = this;
  DName((DName *)&local_c,this);
  iVar1 = isEmpty((DName *)&local_c);
  if (iVar1 == 0) {
    iVar1 = isEmpty(in_stack_00000008);
    if (iVar1 == 0) {
      operator+=((DName *)&local_c,extraout_ECX);
    }
    else {
      operator+=((DName *)&local_c,(*(int *)(extraout_ECX + 4) << 0x1c) >> 0x1c);
    }
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  DName(param_1,(DName *)&local_c);
  return param_1;
}


//// FUNCTION operator+ @ 00adb898 ////

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName *)const 
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  DName *in_stack_00000008;
  DName *local_c;
  DName *pDStack_8;
  
  local_c = this;
  pDStack_8 = this;
  DName((DName *)&local_c,this);
  iVar1 = isEmpty((DName *)&local_c);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  DName(param_1,(DName *)&local_c);
  return param_1;
}


//// FUNCTION operator+= @ 00adb8d4 ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator+=(DName *this,char param_1)

{
  int iVar1;
  DNameNode *pDVar2;
  DName *this_00;
  
  if (param_1 != '\0') {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      pDVar2 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = pDVar2;
      if (pDVar2 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0xc,0);
        if (pDVar2 == (DNameNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          *(undefined4 *)(pDVar2 + 4) = 0;
          *(undefined ***)pDVar2 = &PTR_LAB_00d7f1b8;
          pDVar2[8] = (DNameNode)param_1;
        }
        DNameNode::operator+=(*(DNameNode **)this,pDVar2);
      }
    }
    else {
      operator=(this_00,param_1);
    }
  }
  return this;
}


//// FUNCTION operator+= @ 00adb93e ////

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char const *)
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator+=(DName *this,char *param_1)

{
  int iVar1;
  DNameNode *pDVar2;
  pcharNode *this_00;
  DName *this_01;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      pDVar2 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = pDVar2;
      if (pDVar2 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        this_00 = HeapManager::getMemory((HeapManager *)&DAT_010cbdd4,0x10,0);
        if (this_00 == (pcharNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          pDVar2 = (DNameNode *)pcharNode::pcharNode(this_00,param_1,0);
        }
        DNameNode::operator+=(*(DNameNode **)this,pDVar2);
      }
    }
    else {
      operator=(this_01,param_1);
    }
  }
  return this;
}


//// FUNCTION getArgumentList @ 00adb9aa ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentList(void)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getArgumentList(void)

{
  bool bVar1;
  char *pcVar2;
  DName *pDVar3;
  int iVar4;
  DName *in_stack_00000004;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xfffffe00;
  bVar1 = true;
  while( true ) {
    if ((*DAT_010cbdf4 == '@') || (*DAT_010cbdf4 == 'Z')) goto LAB_00adba7d;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      DName::operator+=((DName *)&local_c,',');
    }
    pcVar2 = DAT_010cbdf4;
    if (*DAT_010cbdf4 == '\0') break;
    iVar4 = *DAT_010cbdf4 + -0x30;
    if ((iVar4 < 0) || (9 < iVar4)) {
      local_14 = 0;
      local_10 = local_10 & 0xfffffe00;
      getPrimaryDataType(local_1c);
      if ((1 < (int)DAT_010cbdf4 - (int)pcVar2) && (*(int *)DAT_010cbde8 != 9)) {
        Replicator::operator+=(DAT_010cbde8,local_1c);
      }
      pDVar3 = local_1c;
    }
    else {
      DAT_010cbdf4 = DAT_010cbdf4 + 1;
      pDVar3 = Replicator::operator[](DAT_010cbde8,iVar4);
    }
    DName::operator+=((DName *)&local_c,pDVar3);
    if ((local_8 & 0xf) != 0) {
LAB_00adba7d:
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
  }
  DName::operator+=((DName *)&local_c,2);
  goto LAB_00adba7d;
}


//// FUNCTION getVdispMapType @ 00adba91 ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1)

{
  DName *pDVar1;
  DName *in_stack_00000008;
  DName local_c [8];
  
  DName::DName(local_c,in_stack_00000008);
  DName::operator+=(local_c,"{for ");
  pDVar1 = (DName *)getScope();
  DName::operator+=(local_c,pDVar1);
  DName::operator+=(local_c,'}');
  if (*DAT_010cbdf4 == '@') {
    DAT_010cbdf4 = DAT_010cbdf4 + 1;
  }
  DName::DName(param_1,local_c);
  return param_1;
}


//// FUNCTION operator+ @ 00adbaed ////

/* Library Function - Single Match
    class DName __cdecl operator+(char,class DName const &)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl operator+(char param_1,DName *param_2)

{
  DName *this;
  undefined3 in_stack_00000005;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = _param_1;
  this = (DName *)DName::DName(local_c,(char)param_2);
  DName::operator+(this,pDVar1);
  return _param_1;
}


//// FUNCTION operator+ @ 00adbb0f ////

/* Library Function - Single Match
    class DName __cdecl operator+(enum DNameStatus,class DName const &)
   
   Library: Visual Studio 2003 Release */

DNameStatus __cdecl operator+(DNameStatus param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(DNameStatus)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}


//// FUNCTION operator+ @ 00adbb31 ////

/* Library Function - Single Match
    class DName __cdecl operator+(char const *,class DName const &)
   
   Library: Visual Studio 2003 Release */

char * __cdecl operator+(char *param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(char *)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}


//// FUNCTION operator+ @ 00adbb53 ////

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char)const 
   
   Library: Visual Studio 2003 Release */

DName * __thiscall DName::operator+(DName *this,char param_1)

{
  int iVar1;
  DName *this_00;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DName *local_c;
  DName *pDStack_8;
  
  local_c = this;
  pDStack_8 = this;
  DName((DName *)&local_c,this);
  iVar1 = isEmpty((DName *)&local_c);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  DName(_param_1,(DName *)&local_c);
  return _param_1;
}


//// FUNCTION operator+ @ 00adbb8f ////

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char const *)const 
   
   Library: Visual Studio 2003 Release */

char * __thiscall DName::operator+(DName *this,char *param_1)

{
  int iVar1;
  DName *this_00;
  char *in_stack_00000008;
  DName *local_c;
  DName *pDStack_8;
  
  local_c = this;
  pDStack_8 = this;
  DName((DName *)&local_c,this);
  iVar1 = isEmpty((DName *)&local_c);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  DName((DName *)param_1,(DName *)&local_c);
  return param_1;
}


//// FUNCTION getDimension @ 00adbbcb ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getDimension(bool param_1)

{
  __uint64 _Var1;
  char *pcVar2;
  char cVar3;
  DName *pDVar4;
  longlong lVar5;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DNameStatus DVar6;
  DName local_20 [8];
  char local_18 [8];
  DName local_10 [4];
  int local_c;
  DName *local_8;
  
  local_8 = (DName *)0x0;
  if (*DAT_010cbdf4 == 'Q') {
    DAT_010cbdf4 = DAT_010cbdf4 + 1;
    local_8 = (DName *)0xd7f200;
  }
  cVar3 = *DAT_010cbdf4;
  if (cVar3 == '\0') {
    DName::DName(_param_1,2);
    return _param_1;
  }
  if (('/' < cVar3) && (cVar3 < ':')) {
    cVar3 = *DAT_010cbdf4;
    DAT_010cbdf4 = DAT_010cbdf4 + 1;
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_20,(longlong)(cVar3 + -0x2f));
    }
    else {
      DName::DName(local_10,(longlong)(cVar3 + -0x2f));
      pDVar4 = (DName *)operator+(local_18,local_8);
    }
    DName::DName(_param_1,pDVar4);
    return _param_1;
  }
  _Var1 = 0;
  while( true ) {
    pcVar2 = DAT_010cbdf4;
    if (cVar3 == '@') break;
    if (cVar3 == '\0') {
      DVar6 = 2;
      goto LAB_00adbca4;
    }
    if ((cVar3 < 'A') || ('P' < cVar3)) goto LAB_00adbca2;
    local_c = cVar3 + -0x41 >> 0x1f;
    lVar5 = __allmul((uint)_Var1,(int)(_Var1 >> 0x20),0x10,0);
    _Var1 = lVar5 + CONCAT44(local_c,cVar3 + -0x41);
    DAT_010cbdf4 = pcVar2 + 1;
    cVar3 = *DAT_010cbdf4;
  }
  cVar3 = *DAT_010cbdf4;
  DAT_010cbdf4 = DAT_010cbdf4 + 1;
  if (cVar3 != '@') {
LAB_00adbca2:
    DVar6 = 1;
LAB_00adbca4:
    DName::DName(_param_1,DVar6);
    return _param_1;
  }
  if (in_stack_00000008 == '\0') {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_10,_Var1);
      goto LAB_00adbcfb;
    }
    DName::DName(local_20,_Var1);
  }
  else {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_10,_Var1);
      goto LAB_00adbcfb;
    }
    DName::DName(local_20,_Var1);
  }
  pDVar4 = (DName *)operator+(local_18,local_8);
LAB_00adbcfb:
  DName::DName(_param_1,pDVar4);
  return _param_1;
}


//// FUNCTION getEnumType @ 00adbd0c ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getEnumType(void)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getEnumType(void)

{
  char cVar1;
  DName *pDVar2;
  DName *in_stack_00000004;
  char *pcVar3;
  DNameStatus DVar4;
  char local_14 [8];
  undefined4 local_c;
  ushort local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xfe00;
  if (*DAT_010cbdf4 == '\0') {
    DVar4 = 2;
LAB_00adbdb0:
    DName::DName(in_stack_00000004,DVar4);
    return in_stack_00000004;
  }
  switch(*DAT_010cbdf4) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_00adbd36_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    DVar4 = 1;
    goto LAB_00adbdb0;
  }
  DName::operator=((DName *)&local_c,pcVar3);
switchD_00adbd36_caseD_34:
  cVar1 = *DAT_010cbdf4;
  DAT_010cbdf4 = DAT_010cbdf4 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    pDVar2 = (DName *)operator+(local_14,(DName *)"unsigned ");
    DName::operator=((DName *)&local_c,pDVar2);
  }
  DName::DName(in_stack_00000004,(DName *)&local_c);
  return in_stack_00000004;
}


//// FUNCTION getArgumentTypes @ 00adbddd ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentTypes(void)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getArgumentTypes(void)

{
  char cVar1;
  DName *pDVar2;
  DName *in_stack_00000004;
  char *pcVar3;
  char local_14 [8];
  DName local_c [4];
  byte local_8;
  
  if (*DAT_010cbdf4 == 'X') {
    pcVar3 = "void";
LAB_00adbe5c:
    DAT_010cbdf4 = DAT_010cbdf4 + 1;
    DName::DName(in_stack_00000004,pcVar3);
    return in_stack_00000004;
  }
  if (*DAT_010cbdf4 == 'Z') {
    pcVar3 = "...";
    goto LAB_00adbe5c;
  }
  getArgumentList();
  if (((local_8 & 0xf) == 0) && (cVar1 = *DAT_010cbdf4, cVar1 != '\0')) {
    if (cVar1 != '@') {
      if (cVar1 != 'Z') {
        DName::DName(in_stack_00000004,1);
        return in_stack_00000004;
      }
      DAT_010cbdf4 = DAT_010cbdf4 + 1;
      pDVar2 = (DName *)DName::operator+(local_c,local_14);
      goto LAB_00adbe45;
    }
    DAT_010cbdf4 = DAT_010cbdf4 + 1;
  }
  pDVar2 = local_c;
LAB_00adbe45:
  DName::DName(in_stack_00000004,pDVar2);
  return in_stack_00000004;
}


//// FUNCTION getThrowTypes @ 00adbe6f ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThrowTypes(void)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getThrowTypes(void)

{
  DName *pDVar1;
  DName *this;
  DName *in_stack_00000004;
  char *pcVar2;
  char cVar3;
  char local_14 [8];
  undefined4 local_c;
  ushort local_8;
  
  if (*DAT_010cbdf4 == '\0') {
    pcVar2 = local_14;
    pDVar1 = in_stack_00000004;
    this = (DName *)DName::DName((DName *)&local_c," throw(");
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)DName::operator+(this,(DNameStatus)pcVar2);
  }
  else {
    if (*DAT_010cbdf4 == 'Z') {
      DAT_010cbdf4 = DAT_010cbdf4 + 1;
      local_c = 0;
      local_8 = local_8 & 0xfe00;
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    pDVar1 = in_stack_00000004;
    getArgumentTypes();
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)operator+(local_14,(DName *)" throw(");
  }
  DName::operator+(pDVar1,cVar3);
  return in_stack_00000004;
}


//// FUNCTION getArrayType @ 00adbeec ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArrayType(class DName const &)
   
   Library: Visual Studio 2003 Release */

DName * __cdecl UnDecorator::getArrayType(DName *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  DName *pDVar4;
  DName *extraout_ECX;
  int iVar5;
  DName *in_stack_00000008;
  char cVar6;
  DName local_2c [8];
  undefined4 local_24 [2];
  DName local_1c [8];
  DName local_14 [4];
  byte local_10;
  undefined4 local_c;
  ushort local_8;
  
  if (*DAT_010cbdf4 == '\0') {
    iVar5 = DName::isEmpty(in_stack_00000008);
    cVar6 = (char)local_2c;
    puVar2 = local_24;
    if (iVar5 == 0) {
      pDVar3 = local_1c;
      pDVar4 = (DName *)operator+((char)local_14,(DName *)0x28);
      pDVar3 = (DName *)DName::operator+(pDVar4,(char *)pDVar3);
      goto LAB_00adbf28;
    }
  }
  else {
    iVar1 = getNumberOfDimensions();
    iVar5 = iVar1;
    if (iVar1 < 0) {
      iVar5 = 0;
    }
    if (0 < iVar1) {
      local_c = 0;
      local_8 = local_8 & 0xfe00;
      if (((byte)in_stack_00000008[4] & 0x80) != 0) {
        DName::operator+=((DName *)&local_c,"[]");
      }
      do {
        cVar6 = (char)local_1c;
        getDimension(SUB41(local_24,0));
        pDVar3 = (DName *)operator+((char)local_2c,(DName *)0x5b);
        pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
        DName::operator+=((DName *)&local_c,pDVar3);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = DName::isEmpty(in_stack_00000008);
      if (iVar5 == 0) {
        pDVar3 = local_2c;
        pDVar4 = extraout_ECX;
        if (((byte)in_stack_00000008[4] & 0x80) == 0) {
          cVar6 = (char)local_24;
          pDVar4 = (DName *)operator+((char)local_1c,(DName *)0x28);
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar6);
        }
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      getPrimaryDataType(local_14);
      local_10 = local_10 | 0x80;
      DName::DName(param_1,local_14);
      return param_1;
    }
    cVar6 = (char)local_14;
    puVar2 = &local_c;
  }
  pDVar3 = (DName *)DName::DName(local_1c,'[');
LAB_00adbf28:
  pDVar3 = (DName *)DName::operator+(pDVar3,(DNameStatus)puVar2);
  DName::operator+(pDVar3,cVar6);
  getBasicDataType(param_1);
  return param_1;
}


//// FUNCTION getLexicalFrame @ 00adc047 ////

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getLexicalFrame(void)
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl UnDecorator::getLexicalFrame(void)

{
  DName *this;
  undefined4 in_stack_00000004;
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = in_stack_00000004;
  getDimension(true);
  cVar1 = (char)uVar2;
  this = (DName *)operator+(-0x14,(DName *)0x60);
  DName::operator+(this,cVar1);
  return in_stack_00000004;
}


