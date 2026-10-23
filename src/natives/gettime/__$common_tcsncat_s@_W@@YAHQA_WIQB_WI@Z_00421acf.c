// gettime.exe @ 0x421acf size=232

int __cdecl common_tcsncat_s<wchar_t>(char *a1, int a2, __int16 *a3, int a4)
{
  int *v4; // eax
  __int16 *v6; // ebx
  int v7; // esi
  char *v8; // edx
  int v9; // eax
  int v10; // ebx
  __int16 v11; // ax
  __int16 v12; // ax
  int v13; // [esp-4h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-4h]

  if ( a4 != 0 )
  {
    if ( a1 == nullptr )
      goto LABEL_4;
  }
  else if ( a1 == nullptr )
  {
    if ( a2 != 0 )
    {
LABEL_4:
      v4 = _errno();
      v13 = 22;
LABEL_5:
      *v4 = v13;
      _invalid_parameter_noinfo();
      return v13;
    }
    return 0;
  }
  if ( a2 == 0 )
    goto LABEL_4;
  v6 = a3;
  if ( a4 != 0 && a3 == nullptr )
  {
LABEL_10:
    *(_WORD *)a1 = 0;
    goto LABEL_4;
  }
  v7 = a2;
  v14 = a4;
  v8 = a1;
  v9 = a4;
  while ( *(_WORD *)v8 != 0 )
  {
    v8 += 2;
    if ( --v7 == 0 )
      goto LABEL_10;
  }
  if ( a4 == -1 )
  {
    v10 = (char *)a3 - v8;
    do
    {
      v11 = *(_WORD *)&v8[v10];
      *(_WORD *)v8 = v11;
      v8 += 2;
      if ( v11 == 0 )
        break;
      --v7;
    }
    while ( v7 != 0 );
  }
  else
  {
    if ( a4 != 0 )
    {
      while ( 1 )
      {
        v12 = *v6++;
        *(_WORD *)v8 = v12;
        v8 += 2;
        if ( v12 == 0 )
          return 0;
        v9 = v14;
        if ( --v7 != 0 )
        {
          v9 = v14 - 1;
          v14 = v9;
          if ( v9 != 0 )
            continue;
        }
        break;
      }
    }
    if ( v9 == 0 )
      *(_WORD *)v8 = 0;
  }
  if ( v7 != 0 )
    return 0;
  if ( a4 != -1 )
  {
    *(_WORD *)a1 = 0;
    v4 = _errno();
    v13 = 34;
    goto LABEL_5;
  }
  *(_WORD *)&a1[2 * a2 - 2] = 0;
  return 80;
}

