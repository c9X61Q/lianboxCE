// gettime.exe @ 0x4252fa size=132

wchar_t *__cdecl common_getenv_nolock<wchar_t>(wchar_t *String2)
{
  wchar_t **v1; // edi
  size_t v2; // esi
  wchar_t *v3; // ecx
  __int16 v4; // ax
  wchar_t *v5; // edx

  v1 = (wchar_t **)sub_4145F4();
  if ( v1 != nullptr && String2 != nullptr )
  {
    v2 = wcslen(String2);
    while ( 1 )
    {
      v5 = *v1;
      if ( *v1 == nullptr )
        break;
      v3 = *v1;
      do
        v4 = *v3++;
      while ( v4 != 0 );
      if ( v3 - (v5 + 1) > v2 && v5[v2] == 61 && sub_426733(v5, String2, v2) == 0 )
        return &(*v1)[v2 + 1];
      ++v1;
    }
  }
  return nullptr;
}

