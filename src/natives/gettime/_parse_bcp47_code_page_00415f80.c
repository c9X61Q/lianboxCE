// gettime.exe @ 0x415f80 size=62

char __cdecl parse_bcp47_code_page(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 8) != 2 )
    return 0;
  if ( wcsncpy_s((wchar_t *)(a1 + 256), 0x10u, *(const wchar_t **)a2, *(_DWORD *)(a2 + 4)) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return 1;
}

