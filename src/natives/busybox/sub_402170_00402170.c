// busybox.exe @ 0x402170 size=115

int __cdecl sub_402170(int a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  int v3; // ecx
  unsigned int v4; // eax

  if ( MEMORY[0x400000] != 23117 )
    return 0;
  if ( sub_402040(0x400000) )
  {
    v2 = a1 - 0x400000;
    v1 = MEMORY[0x40003C] + *(unsigned __int16 *)(MEMORY[0x40003C] + 4194324) + 4194328;
    if ( *(_WORD *)(MEMORY[0x40003C] + 4194310) != 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = *(_DWORD *)(v1 + 12);
        if ( v2 >= v4 && v2 < *(_DWORD *)(v1 + 8) + v4 )
          break;
        ++v3;
        v1 += 40;
        if ( v3 == *(unsigned __int16 *)(MEMORY[0x40003C] + 4194310) )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v1;
}

