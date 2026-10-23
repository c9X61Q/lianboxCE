// gettime.exe @ 0x4204bb size=160

const wchar_t *__dcrt_get_narrow_environment_from_os()
{
  const wchar_t *result; // eax
  WCHAR *v1; // esi
  CHAR *v2; // ebx
  size_t v3; // eax
  CHAR *v4; // eax
  CHAR *v5; // edi
  int cchWideChar; // [esp+4h] [ebp-8h]
  int cbMultiByte; // [esp+8h] [ebp-4h]

  result = GetEnvironmentStringsW();
  v1 = (WCHAR *)result;
  if ( result != nullptr )
  {
    v2 = nullptr;
    cchWideChar = find_end_of_double_null_terminated_sequence(result) - result;
    v3 = __acrt_WideCharToMultiByte(0, 0, v1, cchWideChar, nullptr, 0, nullptr, nullptr);
    cbMultiByte = v3;
    if ( v3 != 0 )
    {
      v4 = (CHAR *)_malloc_base(v3);
      v5 = v4;
      if ( v4 != nullptr )
      {
        if ( __acrt_WideCharToMultiByte(0, 0, v1, cchWideChar, v4, cbMultiByte, nullptr, nullptr) != 0 )
        {
          _free_base(nullptr);
          v2 = v5;
        }
        else
        {
          _free_base(v5);
        }
        FreeEnvironmentStringsW(v1);
        return (const wchar_t *)v2;
      }
      else
      {
        _free_base(nullptr);
        FreeEnvironmentStringsW(v1);
        return nullptr;
      }
    }
    else
    {
      FreeEnvironmentStringsW(v1);
      return nullptr;
    }
  }
  return result;
}

