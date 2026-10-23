// gettime.exe @ 0x40f830 size=125

// Microsoft VisualC universal runtime
_BYTE *__thiscall unknown_libname_65(int *this, unsigned int a2, char a3)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned __int8 *v8; // ecx
  unsigned __int8 *v9; // eax
  int v10; // edi
  char v11; // al
  unsigned __int8 v12; // al
  int v13; // ecx
  _BYTE *result; // eax
  unsigned __int8 *i; // [esp+Ch] [ebp-4h]

  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( v5 == nullptr )
    v5 = v4;
  v6 = __crt_stdio_output::formatting_buffer::count<char>(v4);
  v8 = (unsigned __int8 *)v5 + v6 - 1;
  *(this + 12) = (int)v8;
  v9 = v8;
  for ( i = v8; ; i = v9 )
  {
    v10 = *(this + 9);
    if ( v10 <= 0 && a2 == 0 )
      break;
    *(this + 9) = v10 - 1;
    v11 = a2 & 0xF;
    a2 >>= 4;
    v12 = v11 + 48;
    if ( v12 > 0x39u )
      v12 += 32 * (a3 ^ 1) + 7;
    *i = v12;
    v9 = (unsigned __int8 *)--*(this + 12);
  }
  v13 = v8 - v9;
  result = v9 + 1;
  *(this + 13) = v13;
  *(this + 12) = (int)result;
  return result;
}

