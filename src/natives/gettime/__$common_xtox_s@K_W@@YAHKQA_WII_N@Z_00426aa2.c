// gettime.exe @ 0x426aa2 size=114

int __cdecl common_xtox_s<unsigned long,wchar_t>(
        unsigned int a1,
        __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int *v6; // eax
  int v7; // [esp-8h] [ebp-Ch]

  if ( a2 == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( a3 != 0 )
  {
    *a2 = 0;
    if ( a3 <= (unsigned int)a5 + 1 )
    {
      v6 = _errno();
      v7 = 34;
LABEL_8:
      *v6 = v7;
      _invalid_parameter_noinfo();
      return v7;
    }
    if ( a4 - 2 <= 0x22 )
      return common_xtox<unsigned long,wchar_t>(a1, a2, a3, a4, a5);
  }
  v6 = _errno();
  v7 = 22;
  goto LABEL_8;
}

