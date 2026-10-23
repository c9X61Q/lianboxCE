// gettime.exe @ 0x40bf25 size=246

int __cdecl _CallSETranslator(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        void *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        int a6,
        struct EHRegistrationNode *a7)
{
  int v8; // [esp+0h] [ebp-44h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+4h] [ebp-40h]
  int (__cdecl *v10)(PEXCEPTION_RECORD, PVOID, int); // [esp+8h] [ebp-3Ch]
  const struct _s_FuncInfo *v11; // [esp+10h] [ebp-34h]
  struct EHRegistrationNode *v12; // [esp+14h] [ebp-30h]
  int v13; // [esp+18h] [ebp-2Ch]
  struct EHRegistrationNode *v14; // [esp+1Ch] [ebp-28h]
  int *v15; // [esp+20h] [ebp-24h]
  int *v16; // [esp+24h] [ebp-20h]
  int v17; // [esp+28h] [ebp-1Ch]
  _DWORD v18[4]; // [esp+2Ch] [ebp-18h] BYREF
  int v19; // [esp+3Ch] [ebp-8h]
  void (__cdecl *v20)(unsigned int, _DWORD *); // [esp+40h] [ebp-4h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF

  if ( a1 == (struct EHExceptionRecord *)291 )
  {
    a2->pNext = (EHRegistrationNode *)&_ExceptionContinuation_6;
    return 1;
  }
  else
  {
    v10 = _TranslatorGuardHandler;
    v11 = a5;
    v12 = a2;
    v13 = a6;
    v14 = a7;
    v17 = 0;
    v15 = &v8;
    v16 = &savedregs;
    ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
    a1->ExceptionCode = _filter_x86_sse2_floating_point_exception_default(a1->ExceptionCode);
    v19 = 1;
    v18[0] = a1;
    v18[1] = a3;
    v20 = *(void (__cdecl **)(unsigned int, _DWORD *))(__vcrt_getptd() + 8);
    v18[3] = nullsub_1;
    nullsub_1();
    v18[2] = v20;
    v20(a1->ExceptionCode, v18);
    v19 = 0;
    if ( v17 != 0 )
      ExceptionList->Next = NtCurrentTeb()->NtTib.ExceptionList->Next;
    return v19;
  }
}

