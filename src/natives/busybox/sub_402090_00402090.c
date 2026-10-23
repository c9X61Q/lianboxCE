// busybox.exe @ 0x402090 size=61

int __cdecl sub_402090(int a1, unsigned int a2)
{
  int v2; // edx
  int v3; // esi
  int result; // eax
  int v5; // ecx
  unsigned int v6; // edx

  v2 = *(_DWORD *)(a1 + 60) + a1;
  v3 = *(unsigned __int16 *)(v2 + 6);
  result = v2 + *(unsigned __int16 *)(v2 + 20) + 24;
  if ( *(_WORD *)(v2 + 6) == 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(result + 12);
    if ( v6 <= a2 && *(_DWORD *)(result + 8) + v6 > a2 )
      break;
    ++v5;
    result += 40;
    if ( v5 == v3 )
      return 0;
  }
  return result;
}

