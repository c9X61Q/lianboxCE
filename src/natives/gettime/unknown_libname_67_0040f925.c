// gettime.exe @ 0x40f925 size=167

// Microsoft VisualC universal runtime
char *__thiscall unknown_libname_67(int *this, unsigned __int64 a2, char a3)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  char *v6; // edi
  unsigned __int64 v7; // rax
  char *v8; // ecx
  unsigned __int64 v9; // kr00_8
  int v10; // edx
  char v11; // bl
  char *v13; // [esp+10h] [ebp-8h]

  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( v5 == nullptr )
    v5 = v4;
  v6 = (char *)v5 + __crt_stdio_output::formatting_buffer::count<char>(v4) - 1;
  LODWORD(v7) = a2;
  v8 = v6;
  *(this + 12) = (int)v6;
  v13 = v6;
  v9 = a2;
  while ( 1 )
  {
    v10 = *(this + 9);
    if ( v10 <= 0 && (HIDWORD(v9) | (unsigned int)v7) == 0 )
      break;
    *(this + 9) = v10 - 1;
    v11 = v9 % 0xA + 48;
    v7 = v9 / 0xA;
    v9 /= 0xAu;
    if ( v11 > 57 )
      v11 += 32 * (a3 ^ 1) + 7;
    *v13 = v11;
    v8 = (char *)--*(this + 12);
    v13 = v8;
  }
  *(this + 13) = v6 - v8;
  *(this + 12) = (int)(v8 + 1);
  return v8 + 1;
}

