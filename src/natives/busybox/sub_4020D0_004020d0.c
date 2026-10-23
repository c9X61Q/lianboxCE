// busybox.exe @ 0x4020d0 size=148

const char *__cdecl sub_4020D0(char *Str)
{
  const char *v1; // ebx
  int v2; // ebp
  int v3; // esi

  v1 = nullptr;
  if ( strlen(Str) > 8 || MEMORY[0x400000] != 23117 || !sub_402040(0x400000) )
    return v1;
  v2 = *(unsigned __int16 *)(MEMORY[0x40003C] + 4194310);
  v1 = (const char *)(MEMORY[0x40003C] + *(unsigned __int16 *)(MEMORY[0x40003C] + 4194324) + 4194328);
  if ( *(_WORD *)(MEMORY[0x40003C] + 4194310) != 0 )
  {
    v3 = 0;
    while ( strncmp(v1, Str, 8u) != 0 )
    {
      ++v3;
      v1 += 40;
      if ( v3 == v2 )
        return nullptr;
    }
    return v1;
  }
  return nullptr;
}

