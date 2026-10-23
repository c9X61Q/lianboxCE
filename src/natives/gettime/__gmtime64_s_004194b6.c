// gettime.exe @ 0x4194b6 size=11

errno_t __cdecl _gmtime64_s(struct tm *Tm, const __time64_t *Time)
{
  return common_gmtime_s<__int64>(Tm, Time);
}

