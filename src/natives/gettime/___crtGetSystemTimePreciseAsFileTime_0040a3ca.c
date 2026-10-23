// gettime.exe @ 0x40a3ca size=38

void __cdecl __crtGetSystemTimePreciseAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
  if ( GetSystemTimePreciseAsFileTime != nullptr )
    GetSystemTimePreciseAsFileTime(GetSystemTimePreciseAsFileTime, lpSystemTimeAsFileTime);
  else
    GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
}

