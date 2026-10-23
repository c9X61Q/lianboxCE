// gettime.exe @ 0x417d54 size=128

unsigned int __cdecl __set_fpsr_sse2(unsigned int a1)
{
  unsigned int result; // eax

  if ( dword_4386A4 >= 1 )
  {
    result = a1;
    if ( (a1 & 0x40) != 0 && dword_437270 != 0 )
    {
      _mm_setcsr(a1);
    }
    else
    {
      _mm_setcsr(a1 & 0xFFFFFFBF);
      return a1 & 0xFFFFFFBF;
    }
  }
  return result;
}

