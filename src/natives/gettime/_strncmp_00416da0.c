// gettime.exe @ 0x416da0 size=120

int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  const char *v3; // edx
  size_t v4; // ebx
  int v5; // ecx
  unsigned __int8 v6; // al
  bool v7; // cc
  int v8; // eax

  v3 = Str2;
  v4 = MaxCount;
  if ( MaxCount == 0 )
    return 0;
  v5 = Str1 - Str2;
  if ( ((unsigned __int8)Str2 & 3) == 0 )
  {
_dword_loop_begin:
    while ( (((_WORD)v5 + (_WORD)v3) & 0xFFFu) <= 0xFFC )
    {
      v8 = *(_DWORD *)&v3[v5];
      if ( v8 != *(_DWORD *)v3 )
        break;
      v7 = v4 <= 4;
      v4 -= 4;
      if ( !v7 )
      {
        v3 += 4;
        if ( ((v8 - 16843009) & ~v8 & 0x80808080) == 0 )
          continue;
      }
      return 0;
    }
  }
  while ( 1 )
  {
    v6 = v3[v5];
    if ( v6 != *v3 )
      return v6 < (unsigned int)*v3 ? -1 : 1;
    if ( v3[v5] == 0 )
      return 0;
    ++v3;
    v7 = v4-- <= 1;
    if ( v7 )
      return 0;
    if ( ((unsigned __int8)v3 & 3) == 0 )
      goto _dword_loop_begin;
  }
}

