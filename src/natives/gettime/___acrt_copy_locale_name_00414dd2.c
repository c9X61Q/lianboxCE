// gettime.exe @ 0x414dd2 size=95

wchar_t *__cdecl __acrt_copy_locale_name(wchar_t *Source)
{
  size_t v1; // eax
  size_t v2; // ebx
  wchar_t *v3; // eax
  wchar_t *v4; // edi

  if ( Source == nullptr )
    return nullptr;
  v1 = wcsnlen(Source, 0x55u);
  v2 = v1;
  if ( v1 >= 0x55 )
    return nullptr;
  v3 = (wchar_t *)_malloc_base(2 * v1 + 2);
  v4 = v3;
  if ( v3 == nullptr )
    return nullptr;
  if ( wcsncpy_s(v3, v2 + 1, Source, v2 + 1) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return v4;
}

