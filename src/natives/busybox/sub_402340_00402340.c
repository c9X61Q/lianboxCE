// busybox.exe @ 0x402340 size=167

int __cdecl sub_402340(int a1)
{
  int v1; // ecx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // esi
  unsigned int v6; // ecx
  unsigned int i; // eax

  v1 = 0;
  if ( MEMORY[0x400000] == 23117 && sub_402040(0x400000) )
  {
    v3 = *(_DWORD *)(MEMORY[0x40003C] + 4194432);
    if ( v3 != 0 )
    {
      v4 = MEMORY[0x40003C] + 0x400000 + *(unsigned __int16 *)(MEMORY[0x40003C] + 4194324) + 24;
      if ( *(_WORD *)(MEMORY[0x40003C] + 4194310) != 0 )
      {
        v5 = 0;
        while ( 1 )
        {
          v6 = *(_DWORD *)(v4 + 12);
          if ( v3 >= v6 && v3 < *(_DWORD *)(v4 + 8) + v6 )
            break;
          ++v5;
          v4 += 40;
          if ( v5 == *(unsigned __int16 *)(MEMORY[0x40003C] + 4194310) )
            return 0;
        }
        for ( i = v3 + 0x400000; *(_DWORD *)(i + 4) != 0 || *(_DWORD *)(i + 12) != 0; i += 20 )
        {
          if ( a1 <= 0 )
            return *(_DWORD *)(i + 12) + 0x400000;
          --a1;
        }
        return 0;
      }
    }
  }
  return v1;
}

