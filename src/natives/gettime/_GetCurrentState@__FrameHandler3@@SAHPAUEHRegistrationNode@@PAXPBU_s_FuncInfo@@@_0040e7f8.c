// gettime.exe @ 0x40e7f8 size=29

static __ehstate_t __cdecl __FrameHandler3::GetCurrentState(
        struct EHRegistrationNode *a1,
        void *a2,
        const struct _s_FuncInfo *a3)
{
  if ( a3->maxState > 128 )
    return a1->state;
  else
    return SLOBYTE(a1->state);
}

