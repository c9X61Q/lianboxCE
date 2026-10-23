// gettime.exe @ 0x425c61 size=252

unsigned int __cdecl __acrt_fenv_set_status(int a1)
{
  unsigned int result; // eax
  _DWORD v2[7]; // [esp+8h] [ebp-20h] BYREF

  memset(v2, 0, sizeof(v2));
  __asm { fnstenv [ebp+var_20] }
  v2[1] = ((a1 & 0x200000) != 0 ? 2 : 0)
        | ((a1 & 0x100000) != 0)
        | ((a1 & 0x80000) != 0 ? 4 : 0)
        | ((a1 & 0x40000) != 0 ? 8 : 0)
        | ((a1 & 0x20000) != 0 ? 0x10 : 0)
        | ((a1 & 0x10000) != 0 ? 0x20 : 0)
        | v2[1] & 0xFFFFFFC0;
  __asm { fldenv  [ebp+var_20] }
  result = (a1 & 0x10000000) != 0;
  if ( dword_4386A4 >= 1 )
  {
    result = ((a1 & 0x20000000) != 0 ? 2 : 0)
           | ((a1 & 0x10000000) != 0)
           | ((a1 & 0x8000000) != 0 ? 4 : 0)
           | ((a1 & 0x4000000) != 0 ? 8 : 0)
           | ((a1 & 0x2000000) != 0 ? 0x10 : 0)
           | ((a1 & 0x1000000) != 0 ? 0x20 : 0)
           | _mm_getcsr() & 0xFFFFFFC0;
    _mm_setcsr(result);
  }
  return result;
}

