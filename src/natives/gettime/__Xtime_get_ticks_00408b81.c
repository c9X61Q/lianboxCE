// gettime.exe @ 0x408b81 size=39

__int64 __cdecl _Xtime_get_ticks()
{
  struct _FILETIME SystemTimeAsFileTime; // [esp+0h] [ebp-8h] BYREF

  __crtGetSystemTimePreciseAsFileTime(&SystemTimeAsFileTime);
  return *(_QWORD *)&SystemTimeAsFileTime - 116444736000000000LL;
}

