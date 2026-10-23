// gettime.exe @ 0x41079d size=114

// Microsoft VisualC universal runtime
char __thiscall unknown_libname_77(int this)
{
  const wchar_t **v2; // edx
  size_t v3; // ebx
  const wchar_t *v4; // edi
  size_t v5; // eax

  v2 = *(const wchar_t ***)(this + 16);
  *(_DWORD *)(this + 16) = v2 + 1;
  v3 = *(_DWORD *)(this + 36);
  v4 = *v2;
  *(_DWORD *)(this + 48) = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( __crt_stdio_output::is_wide_character_specifier<char>(
         *(_DWORD *)this,
         *(_DWORD *)(this + 4),
         *(_BYTE *)(this + 45),
         *(_DWORD *)(this + 40)) )
  {
    if ( v4 == nullptr )
    {
      v4 = L"(null)";
      *(_DWORD *)(this + 48) = L"(null)";
    }
    *(_BYTE *)(this + 56) = 1;
    v5 = wcsnlen(v4, v3);
  }
  else
  {
    if ( v4 == nullptr )
    {
      v4 = (const wchar_t *)"(null)";
      *(_DWORD *)(this + 48) = "(null)";
    }
    v5 = strnlen((const char *)v4, v3);
  }
  *(_DWORD *)(this + 52) = v5;
  return 1;
}

