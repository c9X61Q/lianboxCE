// gettime.exe @ 0x423427 size=222

unsigned int __cdecl _clearfp()
{
  char v0; // fps
  int v1; // ecx
  int v2; // edx
  unsigned int result; // eax
  int v4; // [esp+8h] [ebp-8h]

  __asm { fnclex }
  if ( dword_4386A4 < 1 )
  {
    result = 0;
    if ( (v0 & 0x3F) != 0 )
    {
      result = 16 * (v0 & 1);
      if ( (v0 & 4) != 0 )
        result |= 8u;
      if ( (v0 & 8) != 0 )
        result |= 4u;
      if ( (v0 & 0x10) != 0 )
        result |= 2u;
      if ( (v0 & 0x20) != 0 )
        result |= 1u;
      if ( (v0 & 2) != 0 )
        result |= 0x80000u;
    }
  }
  else
  {
    v1 = 0;
    v2 = 0;
    if ( (v0 & 0x3F) != 0 )
    {
      v2 = 16 * (v0 & 1);
      if ( (v0 & 4) != 0 )
        v2 |= 8u;
      if ( (v0 & 8) != 0 )
        v2 |= 4u;
      if ( (v0 & 0x10) != 0 )
        v2 |= 2u;
      if ( (v0 & 0x20) != 0 )
        v2 |= 1u;
      if ( (v0 & 2) != 0 )
        v2 |= 0x80000u;
    }
    v4 = _mm_getcsr();
    _mm_setcsr(v4 & 0xFFFFFFC0);
    if ( (v4 & 0x3F) != 0 )
    {
      v1 = 16 * (v4 & 1);
      if ( (v4 & 4) != 0 )
        v1 |= 8u;
      if ( (v4 & 8) != 0 )
        v1 |= 4u;
      if ( (v4 & 0x10) != 0 )
        v1 |= 2u;
      if ( (v4 & 0x20) != 0 )
        v1 |= 1u;
      if ( (v4 & 2) != 0 )
        v1 |= 0x80000u;
    }
    return v2 | v1;
  }
  return result;
}

