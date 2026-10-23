// gettime.exe @ 0x4141d7 size=90

int common_initialize_environment_nolock<char>()
{
  char *narrow_environment_from_os; // eax
  char *v2; // esi
  void *v3; // eax
  int v4; // edi

  if ( dword_4389D8 != 0 )
    return 0;
  __acrt_initialize_multibyte();
  narrow_environment_from_os = (char *)__dcrt_get_narrow_environment_from_os();
  v2 = narrow_environment_from_os;
  if ( narrow_environment_from_os != nullptr )
  {
    v3 = (void *)create_environment<char>(narrow_environment_from_os);
    if ( v3 != nullptr )
    {
      dword_4389E4 = v3;
      v4 = 0;
      dword_4389D8 = (int)v3;
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

