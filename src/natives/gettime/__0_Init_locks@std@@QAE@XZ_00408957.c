// gettime.exe @ 0x408957 size=45

std::_Init_locks *__thiscall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi

  if ( _InterlockedExchangeAdd(&dword_437008, 1u) == 0 )
  {
    v2 = &CriticalSection;
    do
      _Mtxinit(v2++);
    while ( v2 != (struct _RTL_CRITICAL_SECTION *)&dword_4380B0 );
  }
  return this;
}

