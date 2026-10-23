// gettime.exe @ 0x40e1bf size=232

static void __cdecl __FrameHandler3::FrameUnwindToState(
        struct EHRegistrationNode *a1,
        void *a2,
        const struct _s_FuncInfo *a3,
        int a4)
{
  __ehstate_t CurrentState; // esi
  int v5; // eax
  UnwindMapEntry *pUnwindMap; // eax
  int v7; // eax
  __ehstate_t toState; // [esp+10h] [ebp-20h]

  CurrentState = __FrameHandler3::GetCurrentState(a1, a2, a3);
  v5 = __vcrt_getptd();
  ++*(_DWORD *)(v5 + 24);
  while ( CurrentState != a4 )
  {
    if ( CurrentState <= -1 || CurrentState >= a3->maxState )
      goto LABEL_14;
    pUnwindMap = a3->pUnwindMap;
    toState = pUnwindMap[CurrentState].toState;
    if ( pUnwindMap[CurrentState].action != nullptr )
    {
      __FrameHandler3::SetState(a1, a3, pUnwindMap[CurrentState].toState);
      _CallSettingFrame(a3->pUnwindMap[CurrentState].action, a1, 259);
    }
    CurrentState = toState;
  }
  if ( *(int *)(__vcrt_getptd() + 24) > 0 )
  {
    v7 = __vcrt_getptd();
    --*(_DWORD *)(v7 + 24);
  }
  if ( CurrentState != a4 )
LABEL_14:
    abort();
  __FrameHandler3::SetState(a1, a3, CurrentState);
}

