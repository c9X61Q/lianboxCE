// gettime.exe @ 0x4253dd size=173

int __cdecl common_getenv_s_nolock<wchar_t>(
        unsigned int *a1,
        wchar_t *Destination,
        rsize_t SizeInWords,
        wchar_t *String2)
{
  wchar_t *v5; // eax
  const wchar_t *v6; // edx
  wchar_t *v7; // ecx
  __int16 v8; // ax
  unsigned int v9; // ecx
  wchar_t *v10; // [esp+8h] [ebp-8h]

  if ( a1 == nullptr )
    goto LABEL_2;
  *a1 = 0;
  if ( Destination == nullptr )
  {
    if ( SizeInWords == 0 )
      goto LABEL_6;
LABEL_2:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  if ( SizeInWords == 0 )
    goto LABEL_2;
  *Destination = 0;
LABEL_6:
  v5 = common_getenv_nolock<wchar_t>(String2);
  v6 = v5;
  if ( v5 != nullptr )
  {
    v7 = v5;
    v10 = v5 + 1;
    do
      v8 = *v7++;
    while ( v8 != 0 );
    v9 = v7 - v10 + 1;
    *a1 = v9;
    if ( SizeInWords != 0 )
    {
      if ( v9 > SizeInWords )
        return 34;
      if ( wcscpy_s(Destination, SizeInWords, v6) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
  }
  return 0;
}

