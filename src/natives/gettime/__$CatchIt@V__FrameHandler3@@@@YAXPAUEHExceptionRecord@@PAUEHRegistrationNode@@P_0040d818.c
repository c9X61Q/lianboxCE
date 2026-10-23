// gettime.exe @ 0x40d818 size=128

void __cdecl CatchIt<__FrameHandler3>(
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        struct _s_FuncInfo *a5,
        int a6,
        int a7,
        int *a8,
        int a9,
        struct EHRegistrationNode *TargetFrame)
{
  struct EHRegistrationNode *v10; // eax
  void (__stdcall *v11)(void *, struct EHRegistrationNode *); // eax

  if ( a7 != 0 )
    BuildCatchObjectInternal<__FrameHandler3>((int)ExceptionRecord, (int *)a2, (int *)a6, a7);
  v10 = TargetFrame;
  if ( TargetFrame == nullptr )
    v10 = a2;
  _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD **)a6, v10, ExceptionRecord);
  __FrameHandler3::FrameUnwindToState(a2, a4, a5, *a8);
  __FrameHandler3::SetState(a2, a5, a8[1] + 1);
  v11 = (void (__stdcall *)(void *, struct EHRegistrationNode *))CallCatchBlock(
                                                                   (struct EHExceptionRecord *)ExceptionRecord,
                                                                   a2,
                                                                   a3,
                                                                   a5,
                                                                   *(void **)(a6 + 12),
                                                                   a9,
                                                                   0x100u);
  if ( v11 != nullptr )
    _JumpToContinuation(v11, a2);
}

