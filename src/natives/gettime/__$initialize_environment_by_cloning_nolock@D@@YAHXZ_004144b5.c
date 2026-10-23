// gettime.exe @ 0x4144b5 size=131

int initialize_environment_by_cloning_nolock<char>()
{
  LPCWCH *v0; // edi
  const WCHAR *v1; // eax
  size_t v2; // eax
  int v3; // ebx
  CHAR *v4; // eax
  CHAR *v5; // esi
  CHAR *v7; // [esp-4h] [ebp-10h]

  v0 = (LPCWCH *)dword_4389DC;
  if ( dword_4389DC != 0 )
  {
    v1 = *(const WCHAR **)dword_4389DC;
    if ( *(_DWORD *)dword_4389DC == 0 )
      return 0;
    while ( 1 )
    {
      v2 = __acrt_WideCharToMultiByte(0, 0, v1, -1, nullptr, 0, 0, 0);
      v3 = v2;
      if ( v2 == 0 )
        break;
      v4 = (CHAR *)_calloc_base(v2, 1u);
      v5 = v4;
      v7 = nullptr;
      if ( v4 == nullptr )
        goto LABEL_9;
      if ( __acrt_WideCharToMultiByte(0, 0, *v0, -1, v4, v3, 0, 0) == 0 )
      {
        v7 = v5;
LABEL_9:
        _free_base(v7);
        return -1;
      }
      __dcrt_set_variable_in_narrow_environment_nolock(v5, 0);
      _free_base(nullptr);
      v1 = *++v0;
      if ( *v0 == nullptr )
        return 0;
    }
  }
  return -1;
}

