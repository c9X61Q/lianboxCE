// gettime.exe @ 0x428451 size=10

void __cdecl sub_428451()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( _InterlockedExchangeAdd(&dword_437008, 0xFFFFFFFF) < 0 )
  {
    v0 = &CriticalSection;
    do
      _Mtxdst(v0++);
    while ( v0 != (struct _RTL_CRITICAL_SECTION *)&dword_4380B0 );
  }
}

