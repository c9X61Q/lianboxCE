// gettime.exe @ 0x40f7a9 size=135

// Microsoft VisualC universal runtime
_BYTE *__thiscall unknown_libname_64(int *this, unsigned int a2, char a3)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  _BYTE *v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  _BYTE *result; // eax
  _BYTE *v13; // [esp+Ch] [ebp-8h]

  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( v5 == nullptr )
    v5 = v4;
  v7 = (char *)v5 + __crt_stdio_output::formatting_buffer::count<char>(v4) - 1;
  v13 = v7;
  v8 = v7;
  *(this + 12) = (int)v7;
  while ( 1 )
  {
    v9 = *(this + 9);
    if ( v9 <= 0 && a2 == 0 )
      break;
    *(this + 9) = v9 - 1;
    v10 = a2 % 0xA + 48;
    a2 /= 0xAu;
    if ( (char)v10 > 57 )
      LOBYTE(v10) = 32 * (a3 ^ 1) + 7 + v10;
    *v7 = v10;
    v8 = (_BYTE *)--*(this + 12);
    v7 = v8;
  }
  v11 = v13 - v8;
  result = v8 + 1;
  *(this + 13) = v11;
  *(this + 12) = (int)result;
  return result;
}

