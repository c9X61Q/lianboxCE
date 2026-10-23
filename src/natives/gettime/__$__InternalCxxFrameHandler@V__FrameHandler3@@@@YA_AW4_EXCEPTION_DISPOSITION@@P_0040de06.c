// gettime.exe @ 0x40de06 size=258

int __cdecl __InternalCxxFrameHandler<__FrameHandler3>(
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        struct _s_FuncInfo *a5,
        int a6,
        struct EHRegistrationNode *TargetFrame,
        unsigned __int8 a8)
{
  unsigned int v8; // eax
  int (__cdecl *pForwardCompat)(); // esi

  __except_validate_context_record(a3);
  if ( *(_DWORD *)(__vcrt_getptd() + 32) != 0
    || ExceptionRecord->ExceptionCode == -529697949
    || ExceptionRecord->ExceptionCode == -2147483610
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) < 0x19930522
    || (a5->EHFlags & 1) == 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
    {
      if ( a5->maxState != 0 && a6 == 0 )
        __FrameHandler3::FrameUnwindToEmptyState(a2, a4, a5);
    }
    else if ( a5->nTryBlocks != 0
           || (v8 = *(_DWORD *)a5 & 0x1FFFFFFF) >= 0x19930521 && a5->pESTypeList != nullptr
           || v8 >= 0x19930522 && (a5->EHFlags & 4) != 0 )
    {
      if ( ExceptionRecord->ExceptionCode == -529697949
        && ExceptionRecord->NumberParameters >= 3
        && ExceptionRecord->params.magicNumber > 0x19930522 )
      {
        pForwardCompat = ExceptionRecord->params.pThrowInfo->pForwardCompat;
        if ( pForwardCompat != nullptr )
          return ((int (__cdecl *)(struct EHExceptionRecord *, struct EHRegistrationNode *, struct _CONTEXT *, void *, struct _s_FuncInfo *, int, struct EHRegistrationNode *, _DWORD))pForwardCompat)(
                   ExceptionRecord,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   TargetFrame,
                   a8);
      }
      FindHandler<__FrameHandler3>(ExceptionRecord, a2, a3, a4, a5, a8, a6, TargetFrame);
    }
  }
  return 1;
}

