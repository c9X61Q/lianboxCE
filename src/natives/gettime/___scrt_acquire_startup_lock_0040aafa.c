// gettime.exe @ 0x40aafa size=50

char __scrt_acquire_startup_lock()
{
  PVOID StackBase; // edx
  signed __int32 v1; // eax

  if ( __scrt_is_ucrt_dll_in_use() != 0 )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange(&dword_43834C, (signed __int32)StackBase, 0);
      if ( v1 == 0 )
        break;
      if ( StackBase == (PVOID)v1 )
        return 1;
    }
  }
  return 0;
}

