// gettime.exe @ 0x420e93 size=35

void __cdecl __acrt_lowio_lock_fh(int a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(dword_438A48[a1 >> 6] + 56 * (a1 & 0x3F)));
}

