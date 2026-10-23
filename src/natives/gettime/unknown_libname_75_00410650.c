// gettime.exe @ 0x410650 size=149

// Microsoft VisualC universal runtime
char __thiscall unknown_libname_75(int this, int a2)
{
  _DWORD *v3; // edi
  unsigned __int16 *v4; // ecx
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // ecx
  _BYTE *v8; // edx
  _BYTE *v9; // ecx

  v3 = (_DWORD *)(this + 60);
  if ( __crt_stdio_output::is_wide_character_specifier<char>(
         *(_DWORD *)this,
         *(_DWORD *)(this + 4),
         *(_BYTE *)(this + 45),
         *(_DWORD *)(this + 40)) )
  {
    v4 = *(unsigned __int16 **)(this + 16);
    *(_DWORD *)(this + 16) = v4 + 2;
    v5 = *v4;
    v6 = __crt_stdio_output::formatting_buffer::count<char>(v3);
    v7 = (_DWORD *)v3[257];
    if ( v7 == nullptr )
      v7 = v3;
    if ( _wctomb_internal(this + 52, v7, v6, v5, *(_DWORD *)(this + 8)) != 0 )
      *(_BYTE *)(this + 44) = 1;
  }
  else
  {
    v8 = (_BYTE *)v3[257];
    if ( v8 == nullptr )
      v8 = v3;
    v9 = *(_BYTE **)(this + 16);
    *(_DWORD *)(this + 16) = v9 + 4;
    *v8 = *v9;
    *(_DWORD *)(this + 52) = 1;
  }
  if ( v3[257] != 0 )
    v3 = (_DWORD *)v3[257];
  *(_DWORD *)(this + 48) = v3;
  return 1;
}

