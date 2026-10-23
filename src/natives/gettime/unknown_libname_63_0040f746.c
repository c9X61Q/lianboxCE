// gettime.exe @ 0x40f746 size=99

// Microsoft VisualC universal runtime
_BYTE *__thiscall unknown_libname_63(int *this, unsigned int a2, int a3)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  _BYTE *v8; // ecx
  _BYTE *v9; // eax
  _BYTE *i; // ebx
  int v11; // edi
  char v12; // al
  int v13; // ecx
  _BYTE *result; // eax

  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( v5 == nullptr )
    v5 = v4;
  v6 = __crt_stdio_output::formatting_buffer::count<char>(v4);
  v8 = (char *)v5 + v6 - 1;
  *(this + 12) = (int)v8;
  v9 = v8;
  for ( i = v8; ; i = v9 )
  {
    v11 = *(this + 9);
    if ( v11 <= 0 && a2 == 0 )
      break;
    *(this + 9) = v11 - 1;
    v12 = a2 & 7;
    a2 >>= 3;
    *i = v12 + 48;
    v9 = (_BYTE *)--*(this + 12);
  }
  v13 = v8 - v9;
  result = v9 + 1;
  *(this + 13) = v13;
  *(this + 12) = (int)result;
  return result;
}

