// gettime.exe @ 0x40c09e size=49

int __cdecl _CatchGuardHandler(PEXCEPTION_RECORD ExceptionRecord, PVOID TargetFrame, struct _CONTEXT *a3)
{
  return __InternalCxxFrameHandler<__FrameHandler3>(
           ExceptionRecord,
           *((struct EHRegistrationNode **)TargetFrame + 4),
           a3,
           nullptr,
           *((struct _s_FuncInfo **)TargetFrame + 3),
           *((_DWORD *)TargetFrame + 5),
           TargetFrame,
           0);
}

