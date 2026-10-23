// gettime.exe @ 0x41045c size=99

// Microsoft VisualC universal runtime
char __thiscall unknown_libname_73(int this)
{
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  bool is_wide_character; // al
  bool v6; // zf
  unsigned int v7; // eax

  v2 = *(unsigned __int16 ***)(this + 16);
  *(_DWORD *)(this + 16) = v2 + 1;
  v3 = *v2;
  if ( *v2 == nullptr || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    *(_DWORD *)(this + 48) = "(null)";
    goto LABEL_6;
  }
  is_wide_character = __crt_stdio_output::is_wide_character_specifier<char>(
                        *(_DWORD *)this,
                        *(_DWORD *)(this + 4),
                        *(_BYTE *)(this + 45),
                        *(_DWORD *)(this + 40));
  *(_DWORD *)(this + 48) = v4;
  v6 = !is_wide_character;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *(_BYTE *)(this + 56) = 0;
    goto LABEL_7;
  }
  *(_BYTE *)(this + 56) = 1;
  v7 >>= 1;
LABEL_7:
  *(_DWORD *)(this + 52) = v7;
  return 1;
}

