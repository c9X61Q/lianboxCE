// lian86.exe @ 0x004096f9  size=65  name=sub_4096F9
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_4096F9(__int16 *a1, _WORD *a2, int a3)
{
  __int16 *v3; // edx
  int v5; // esi
  __int16 i; // ax

  v3 = a1;
  v5 = 0;
  for ( i = *a1; *v3 != 0; i = *v3 )
  {
    if ( a3 == 0 )
      break;
    if ( i == 34 )
      ++v5;
    else
      *a2++ = i;
    ++v3;
    --a3;
  }
  *a2 = 0;
  return v5;
}

