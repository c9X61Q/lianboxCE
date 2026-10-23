// busybox.exe @ 0x403200 size=1037

char *__cdecl sub_403200(char *Source)
{
  char *v1; // eax
  char *Locale; // ebx
  size_t MaxCount; // esi
  char *v4; // esi
  void *v6; // esp
  size_t v7; // edx
  size_t v8; // eax
  _WORD *v9; // eax
  wchar_t v10; // dx
  _WORD *v11; // ecx
  _WORD *v12; // esi
  __int16 v13; // dx
  _WORD *v14; // eax
  wchar_t v15; // ax
  wchar_t *v16; // ecx
  wchar_t v17; // dx
  wchar_t *v18; // edx
  wchar_t v19; // bx
  size_t v20; // eax
  size_t v21; // eax
  __int16 v22; // dx
  int Category; // [esp+0h] [ebp-38h] BYREF
  wchar_t Dest[2]; // [esp+Ch] [ebp-2Ch] BYREF
  size_t v25[2]; // [esp+10h] [ebp-28h] BYREF
  wchar_t v26; // [esp+1Ah] [ebp-1Eh]
  size_t v27; // [esp+1Ch] [ebp-1Ch]

  v1 = setlocale(2, nullptr);
  Locale = v1;
  if ( v1 != nullptr )
    Locale = strdup(v1);
  setlocale(2, ::Locale);
  if ( Source == nullptr || *Source == 0 )
    goto LABEL_5;
  v25[1] = (size_t)&Category;
  mbstowcs(nullptr, Source, 0);
  v6 = alloca(sub_4115D8());
  v8 = mbstowcs(Dest, Source, v7);
  v25[0] = v8;
  Dest[v8] = 0;
  if ( v8 <= 1 )
  {
    v26 = Dest[0];
    v27 = (size_t)Dest;
  }
  else
  {
    v26 = Dest[0];
    v27 = (size_t)Dest;
    if ( Dest[0] == 47 || Dest[0] == 92 )
    {
      if ( v26 == Dest[1] && LOWORD(v25[0]) == 0 )
      {
        setlocale(2, Locale);
        free(Locale);
        return Source;
      }
    }
    else if ( Dest[1] == 58 )
    {
      v27 = (size_t)v25;
      v26 = v25[0];
    }
  }
  if ( v26 != 0 )
  {
    v9 = (_WORD *)v27;
    v10 = v26;
    v11 = (_WORD *)v27;
    while ( v10 != 47 )
    {
      v12 = v9;
      if ( v10 == 92 )
        goto LABEL_20;
LABEL_16:
      v10 = v12[1];
      ++v9;
      if ( v10 == 0 )
        goto LABEL_24;
    }
    v13 = *v9;
    if ( *v9 != 47 )
      goto LABEL_21;
    do
    {
      do
      {
        ++v9;
LABEL_20:
        v13 = *v9;
      }
      while ( *v9 == 47 );
LABEL_21:
      ;
    }
    while ( v13 == 92 );
    v12 = v9;
    if ( v13 != 0 )
    {
      v11 = v9;
      goto LABEL_16;
    }
LABEL_24:
    if ( v27 >= (unsigned int)v11 )
    {
      if ( v26 != 47 && v26 != 92 )
        *(_WORD *)v27 = 46;
      *(_WORD *)(v27 + 2) = 0;
      v27 = wcstombs(nullptr, Dest, 0) + 1;
      dword_485A1C = realloc(dword_485A1C, v27);
      v4 = (char *)dword_485A1C;
      wcstombs((char *)dword_485A1C, Dest, v27);
      goto LABEL_29;
    }
    while ( 1 )
    {
      v14 = v11--;
      if ( v27 >= (unsigned int)v11 )
        break;
      if ( *v11 != 47 && *v11 != 92 )
        goto LABEL_33;
    }
    if ( (_WORD *)v27 == v11 && (v26 == 47 || v26 == 92) && v11[1] == v26 )
    {
      v22 = v11[2];
      if ( v22 != 47 && v22 != 92 )
        v11 = v14;
    }
LABEL_33:
    v11[1] = 0;
    v15 = Dest[0];
    v16 = Dest;
    if ( Dest[0] == 47 || Dest[0] == 92 )
    {
      do
      {
        do
        {
          v17 = v16[1];
          ++v16;
        }
        while ( v17 == 47 );
      }
      while ( v17 == 92 );
      if ( (char *)v16 - (char *)Dest > 4 )
        goto LABEL_38;
    }
    if ( Dest[1] != Dest[0] )
LABEL_38:
      v16 = Dest;
    else
      v15 = *v16;
    if ( v15 != 0 )
    {
      v27 = (size_t)Locale;
      v18 = v16;
      while ( 1 )
      {
        *v16++ = v15;
        if ( v15 == 47 )
          break;
        v19 = v18[1];
        if ( v15 == 92 )
        {
          ++v18;
          goto LABEL_46;
        }
        v15 = v18[1];
        ++v18;
LABEL_43:
        if ( v15 == 0 )
        {
          Locale = (char *)v27;
          goto LABEL_58;
        }
      }
      v19 = *v18;
LABEL_46:
      if ( v19 == 92 || (v15 = v19, v19 == 47) )
      {
        do
        {
          do
          {
            v15 = v18[1];
            ++v18;
          }
          while ( v15 == 47 );
        }
        while ( v15 == 92 );
      }
      goto LABEL_43;
    }
LABEL_58:
    v20 = v25[0];
    *v16 = 0;
    v21 = wcstombs(Source, Dest, v20);
    v4 = Source;
    if ( v21 != -1 )
      Source[v21] = 0;
LABEL_29:
    setlocale(2, Locale);
    free(Locale);
  }
  else
  {
LABEL_5:
    MaxCount = wcstombs(nullptr, ::Source, 0) + 1;
    dword_485A1C = realloc(dword_485A1C, MaxCount);
    wcstombs((char *)dword_485A1C, ::Source, MaxCount);
    setlocale(2, Locale);
    free(Locale);
    return (char *)dword_485A1C;
  }
  return v4;
}

