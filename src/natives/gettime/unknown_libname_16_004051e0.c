// gettime.exe @ 0x4051e0 size=283

// Microsoft VisualC 14/net runtime
_BYTE *__cdecl unknown_libname_16(int a1, _BYTE *a2, _BYTE *a3, __int16 a4)
{
  int v5; // [esp+0h] [ebp-Ch]
  _BYTE *v6; // [esp+4h] [ebp-8h]
  char *v7; // [esp+4h] [ebp-8h]
  _BYTE *v8; // [esp+4h] [ebp-8h]
  char v9; // [esp+9h] [ebp-3h]
  char v10; // [esp+Ah] [ebp-2h]
  char v11; // [esp+Bh] [ebp-1h]

  *a2 = 37;
  v6 = a2 + 1;
  if ( (a4 & 0x20) != 0 )
  {
    *v6 = 43;
    v6 = a2 + 2;
  }
  if ( (a4 & 8) != 0 )
    *v6++ = 35;
  if ( *a3 == 76 )
  {
    *v6 = 73;
    v8 = v6 + 1;
    *v8 = 54;
    v6 = v8 + 1;
    *v6 = 52;
  }
  else
  {
    *v6 = *a3;
  }
  v7 = v6 + 1;
  v5 = a4 & 0xE00;
  if ( v5 == 1024 )
  {
    v9 = 111;
  }
  else
  {
    if ( v5 == 2048 )
    {
      if ( (a4 & 4) != 0 )
        v11 = 88;
      else
        v11 = 120;
      v10 = v11;
    }
    else
    {
      v10 = a3[1];
    }
    v9 = v10;
  }
  *v7 = v9;
  v7[1] = 0;
  return a2;
}

