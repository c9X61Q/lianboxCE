// gettime.exe @ 0x411702 size=94

wchar_t *__cdecl _wcsdup(const wchar_t *String)
{
  unsigned int v1; // kr00_4
  wchar_t *v2; // eax
  wchar_t *v3; // edi

  if ( String == nullptr )
    return nullptr;
  v1 = wcslen(String);
  v2 = (wchar_t *)malloc(2 * (v1 + 1));
  v3 = v2;
  if ( v2 == nullptr )
    return nullptr;
  if ( wcscpy_s(v2, v1 + 1, String) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return v3;
}

