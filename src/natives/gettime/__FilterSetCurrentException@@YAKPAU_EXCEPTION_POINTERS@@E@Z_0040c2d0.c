// gettime.exe @ 0x40c2d0 size=87

unsigned int __cdecl _FilterSetCurrentException(struct _EXCEPTION_POINTERS *a1, char a2)
{
  PEXCEPTION_RECORD ExceptionRecord; // esi
  PCONTEXT ContextRecord; // esi

  if ( a2 != 0 )
  {
    ExceptionRecord = a1->ExceptionRecord;
    if ( a1->ExceptionRecord->ExceptionCode == -529697949
      && ExceptionRecord->NumberParameters == 3
      && (ExceptionRecord->ExceptionInformation[0] == 429065504
       || ExceptionRecord->ExceptionInformation[0] == 429065505
       || ExceptionRecord->ExceptionInformation[0] == 429065506) )
    {
      *(_DWORD *)(__vcrt_getptd() + 16) = ExceptionRecord;
      ContextRecord = a1->ContextRecord;
      *(_DWORD *)(__vcrt_getptd() + 20) = ContextRecord;
      terminate();
    }
  }
  return 0;
}

