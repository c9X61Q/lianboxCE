// gettime.exe @ 0x413fb1 size=372

_DWORD *__cdecl parse_command_line<char>(char *a1, char **a2, char *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // ecx
  char *v6; // esi
  bool v8; // bh
  char v9; // bl
  int v10; // eax
  char v11; // al
  int v12; // ebx
  unsigned int v13; // eax
  bool v14; // dl
  char v15; // al
  int v16; // eax
  char *v18; // [esp+Ch] [ebp-8h]
  bool v19; // [esp+13h] [ebp-1h]

  v5 = a5;
  *a5 = 0;
  v6 = a3;
  *a4 = 1;
  if ( a2 != nullptr )
    *a2++ = a3;
  v8 = false;
  do
  {
    v18 = a1;
    if ( *a1 == 34 )
    {
      v9 = 34;
      v8 = !v8;
      ++a1;
    }
    else
    {
      ++*v5;
      if ( v6 != nullptr )
        *v6++ = *a1;
      v9 = *a1++;
      v10 = _ismbblead(v9);
      v5 = a5;
      if ( v10 != 0 )
      {
        ++*a5;
        if ( v6 != nullptr )
          *v6++ = *a1;
        a1 = v18 + 2;
      }
      if ( v9 == 0 )
      {
        --a1;
        goto LABEL_19;
      }
    }
  }
  while ( v8 || v9 != 32 && v9 != 9 );
  if ( v6 != nullptr )
    *(v6 - 1) = 0;
LABEL_19:
  v19 = false;
LABEL_20:
  v11 = *a1;
  if ( *a1 != 0 )
  {
    while ( v11 == 32 || v11 == 9 )
      v11 = *++a1;
    if ( v11 != 0 )
    {
      if ( a2 != nullptr )
        *a2++ = v6;
      ++*a4;
      while ( 1 )
      {
        v12 = 1;
        v13 = 0;
        while ( *a1 == 92 )
        {
          ++a1;
          ++v13;
        }
        if ( *a1 == 34 )
          break;
LABEL_42:
        while ( v13 != 0 )
        {
          --v13;
          if ( v6 != nullptr )
            *v6++ = 92;
          ++*v5;
        }
        v15 = *a1;
        if ( *a1 == 0 || !v19 && (v15 == 32 || v15 == 9) )
        {
          if ( v6 != nullptr )
            *v6++ = 0;
          ++*v5;
          goto LABEL_20;
        }
        if ( v12 != 0 )
        {
          if ( v6 != nullptr )
            *v6++ = v15;
          v16 = _ismbblead(*a1);
          v5 = a5;
          if ( v16 != 0 )
          {
            ++a1;
            ++*a5;
            if ( v6 != nullptr )
              *v6++ = *a1;
          }
          ++*a5;
        }
        ++a1;
      }
      if ( (v13 & 1) == 0 )
      {
        v14 = v19;
        if ( v19 )
        {
          if ( a1[1] == 34 )
          {
            ++a1;
            goto LABEL_38;
          }
          v14 = v19;
        }
        v12 = 0;
        v19 = !v14;
      }
LABEL_38:
      v13 >>= 1;
      goto LABEL_42;
    }
  }
  if ( a2 != nullptr )
    *a2 = nullptr;
  ++*a4;
  return a4;
}

