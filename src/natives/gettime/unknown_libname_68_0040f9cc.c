// gettime.exe @ 0x40f9cc size=138

// Microsoft VisualC universal runtime
unsigned __int8 *__thiscall unknown_libname_68(int *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned __int8 *v8; // ecx
  unsigned __int8 *v10; // edx
  int v11; // eax
  char v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 *v15; // [esp+Ch] [ebp-8h]

  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( v6 == nullptr )
    v6 = v5;
  v8 = (unsigned __int8 *)v6 + __crt_stdio_output::formatting_buffer::count<char>(v5) - 1;
  v15 = v8;
  v10 = v8;
  *(this + 12) = (int)v8;
  while ( 1 )
  {
    v11 = *(this + 9);
    if ( v11 <= 0 )
    {
      if ( (a3 | a2) == 0 )
        break;
      v11 = *(this + 9);
    }
    *(this + 9) = v11 - 1;
    v12 = a2 & 0xF;
    a2 = __PAIR64__(a3, a2) >> 4;
    v13 = v12 + 48;
    a3 >>= 4;
    if ( v13 > 0x39u )
      v13 += 32 * (a4 ^ 1) + 7;
    *v8 = v13;
    v10 = (unsigned __int8 *)--*(this + 12);
    v8 = v10;
  }
  *(this + 13) = v15 - v10;
  *(this + 12) = (int)(v10 + 1);
  return v10 + 1;
}

