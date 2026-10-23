// gettime.exe @ 0x41f442 size=206

int __cdecl common_tcsncpy_s<wchar_t>(_WORD *a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v6; // ebx
  _WORD *v7; // edx
  int v8; // edi
  __int16 v9; // ax
  __int16 v10; // ax
  int v11; // eax
  int v12; // [esp-4h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-4h]

  if ( a4 != 0 )
  {
    if ( a1 == nullptr )
      goto LABEL_4;
  }
  else if ( a1 == nullptr )
  {
    if ( a2 != 0 )
      goto LABEL_4;
    return 0;
  }
  if ( a2 != 0 )
  {
    if ( a4 == 0 )
    {
      *a1 = 0;
      return 0;
    }
    if ( a3 != 0 )
    {
      v6 = a3 - (_DWORD)a1;
      v13 = a4;
      v7 = a1;
      v8 = a2;
      if ( a4 == -1 )
      {
        while ( 1 )
        {
          v9 = *(_WORD *)((char *)v7 + v6);
          *v7++ = v9;
          if ( v9 == 0 )
            break;
          if ( --v8 == 0 )
            goto LABEL_22;
        }
      }
      else
      {
        while ( 1 )
        {
          v10 = *(_WORD *)((char *)v7 + v6);
          *v7++ = v10;
          if ( v10 == 0 )
            break;
          v11 = v13;
          if ( --v8 != 0 )
          {
            v11 = v13 - 1;
            v13 = v11;
            if ( v11 != 0 )
              continue;
          }
          if ( v11 == 0 )
            *v7 = 0;
LABEL_22:
          if ( v8 != 0 )
            return 0;
          if ( a4 == -1 )
          {
            a1[a2 - 1] = 0;
            return 80;
          }
          *a1 = 0;
          v4 = _errno();
          v12 = 34;
          goto LABEL_5;
        }
      }
      return 0;
    }
    *a1 = 0;
  }
LABEL_4:
  v4 = _errno();
  v12 = 22;
LABEL_5:
  *v4 = v12;
  _invalid_parameter_noinfo();
  return v12;
}

