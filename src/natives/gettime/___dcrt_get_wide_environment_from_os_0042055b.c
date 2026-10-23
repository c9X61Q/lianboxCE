// gettime.exe @ 0x42055b size=78

const wchar_t *__dcrt_get_wide_environment_from_os()
{
  const wchar_t *result; // eax
  wchar_t *v1; // esi
  size_t v2; // ebx
  void *v3; // eax
  void *v4; // edi

  result = GetEnvironmentStringsW();
  v1 = (wchar_t *)result;
  if ( result != nullptr )
  {
    v2 = ((char *)find_end_of_double_null_terminated_sequence(result) - (char *)result) & 0xFFFFFFFE;
    v3 = _malloc_base(v2);
    v4 = v3;
    if ( v3 != nullptr )
      memmove(v3, v1, v2);
    _free_base(nullptr);
    FreeEnvironmentStringsW(v1);
    return (const wchar_t *)v4;
  }
  return result;
}

