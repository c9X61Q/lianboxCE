// gettime.exe @ 0x40e15d size=74

int __cdecl ExFilterRethrow(struct _EXCEPTION_POINTERS *a1)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax

  ExceptionRecord = a1->ExceptionRecord;
  if ( a1->ExceptionRecord->ExceptionCode != -529697949
    || ExceptionRecord->NumberParameters != 3
    || ExceptionRecord->ExceptionInformation[0] != 429065504
    && ExceptionRecord->ExceptionInformation[0] != 429065505
    && ExceptionRecord->ExceptionInformation[0] != 429065506
    || ExceptionRecord->ExceptionInformation[2] != 0 )
  {
    return 0;
  }
  *(_DWORD *)(__vcrt_getptd() + 32) = 1;
  return 1;
}

