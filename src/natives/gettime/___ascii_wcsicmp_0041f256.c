// gettime.exe @ 0x41f256 size=61

int __cdecl __ascii_wcsicmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // ecx
  int v5; // edx
  int result; // eax

  do
  {
    v4 = *a1++;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
    v5 = *a2++;
    if ( (unsigned int)(v5 - 65) <= 0x19 )
      v5 += 32;
    result = v4 - v5;
  }
  while ( v4 == v5 && v4 != 0 );
  return result;
}

