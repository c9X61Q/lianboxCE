// gettime.exe @ 0x40a0df size=21

BOOL __cdecl _Mtxinit(LPCRITICAL_SECTION lpCriticalSection)
{
  return InitializeCriticalSectionEx(lpCriticalSection, 0xFA0u, 0);
}

