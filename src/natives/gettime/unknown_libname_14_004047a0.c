// gettime.exe @ 0x4047a0 size=278

// Microsoft VisualC 14/net runtime
_BYTE *__cdecl unknown_libname_14(int a1, _BYTE *a2, char a3, __int16 a4)
{
  int v5; // [esp+0h] [ebp-Ch]
  _BYTE *v6; // [esp+4h] [ebp-8h]
  char *v7; // [esp+4h] [ebp-8h]
  char v8; // [esp+Bh] [ebp-1h]

  *a2 = 37;
  v6 = a2 + 1;
  if ( (a4 & 0x20) != 0 )
  {
    *v6 = 43;
    v6 = a2 + 2;
  }
  if ( (a4 & 0x10) != 0 )
    *v6++ = 35;
  *v6 = 46;
  v6[1] = 42;
  v7 = v6 + 2;
  if ( a3 != 0 )
    *v7++ = a3;
  v5 = a4 & 0x3000;
  if ( (a4 & 4) != 0 )
  {
    switch ( v5 )
    {
      case 8192:
        v8 = 102;
        break;
      case 12288:
        v8 = 65;
        break;
      case 4096:
        v8 = 69;
        break;
      default:
        v8 = 71;
        break;
    }
  }
  else
  {
    switch ( v5 )
    {
      case 8192:
        v8 = 102;
        break;
      case 12288:
        v8 = 97;
        break;
      case 4096:
        v8 = 101;
        break;
      default:
        v8 = 103;
        break;
    }
  }
  *v7 = v8;
  v7[1] = 0;
  return a2;
}

