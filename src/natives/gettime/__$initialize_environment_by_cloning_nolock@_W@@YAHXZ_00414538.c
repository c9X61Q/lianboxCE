// gettime.exe @ 0x414538 size=129

int initialize_environment_by_cloning_nolock<wchar_t>()
{
  LPCCH *v0; // edi
  const CHAR *v1; // eax
  size_t v2; // eax
  int v3; // ebx
  WCHAR *v4; // eax
  WCHAR *v5; // esi

  v0 = (LPCCH *)dword_4389D8;
  if ( dword_4389D8 != 0 )
  {
    v1 = *(const CHAR **)dword_4389D8;
    if ( *(_DWORD *)dword_4389D8 == 0 )
      return 0;
    while ( 1 )
    {
      v2 = __acrt_MultiByteToWideChar(0, 0, v1, -1, nullptr, 0);
      v3 = v2;
      if ( v2 == 0 )
        break;
      v4 = (WCHAR *)_calloc_base(v2, 2u);
      v5 = v4;
      if ( v4 == nullptr )
      {
        _free_base(nullptr);
        return -1;
      }
      if ( __acrt_MultiByteToWideChar(0, 0, *v0, -1, v4, v3) == 0 )
      {
        _free_base(v5);
        return -1;
      }
      __dcrt_set_variable_in_wide_environment_nolock(v5, 0);
      _free_base(nullptr);
      v1 = *++v0;
      if ( *v0 == nullptr )
        return 0;
    }
  }
  return -1;
}

