// gettime.exe @ 0x40f8ad size=120

// Microsoft VisualC universal runtime
_BYTE *__thiscall unknown_libname_66(int *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  _BYTE *v8; // ecx
  _BYTE *v10; // edx
  int v11; // eax
  char v12; // al
  _BYTE *v14; // [esp+Ch] [ebp-8h]

  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( v6 == nullptr )
    v6 = v5;
  v8 = (char *)v6 + __crt_stdio_output::formatting_buffer::count<char>(v5) - 1;
  v14 = v8;
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
    v12 = a2 & 7;
    a2 = __PAIR64__(a3, a2) >> 3;
    *v8 = v12 + 48;
    a3 >>= 3;
    v10 = (_BYTE *)--*(this + 12);
    v8 = v10;
  }
  *(this + 13) = v14 - v10;
  *(this + 12) = (int)(v10 + 1);
  return v10 + 1;
}

