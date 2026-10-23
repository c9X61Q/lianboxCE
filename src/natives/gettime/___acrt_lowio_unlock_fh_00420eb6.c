// gettime.exe @ 0x420eb6 size=35

void __cdecl __acrt_lowio_unlock_fh(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_438A48[a1 >> 6] + 56 * (a1 & 0x3F)));
}

