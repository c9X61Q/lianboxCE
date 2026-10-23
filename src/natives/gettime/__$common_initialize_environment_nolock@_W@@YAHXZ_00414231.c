// gettime.exe @ 0x414231 size=85

int common_initialize_environment_nolock<wchar_t>()
{
  wchar_t *wide_environment_from_os; // eax
  wchar_t *v2; // esi
  void *v3; // eax
  int v4; // edi

  if ( dword_4389DC != 0 )
    return 0;
  wide_environment_from_os = (wchar_t *)__dcrt_get_wide_environment_from_os();
  v2 = wide_environment_from_os;
  if ( wide_environment_from_os != nullptr )
  {
    v3 = (void *)create_environment<wchar_t>(wide_environment_from_os);
    if ( v3 != nullptr )
    {
      dword_4389E0 = v3;
      v4 = 0;
      dword_4389DC = (int)v3;
    }
    else
    {
      v4 = -1;
    }
    _free_base(nullptr);
    _free_base(v2);
    return v4;
  }
  else
  {
    _free_base(nullptr);
    return -1;
  }
}

