// gettime.exe @ 0x4160ef size=111

char __cdecl parse_bcp47_script(int a1, _DWORD *a2)
{
  if ( a2[2] != 0 || a2[1] != 4 || (unsigned __int8)string_is_alpha(*a2, 4) == 0 )
    return 0;
  if ( wcsncat_s((wchar_t *)(a1 + 288), 0x55u, asc_42A55C, 1u) != 0
    || wcsncat_s((wchar_t *)(a1 + 288), 0x55u, (const wchar_t *)*a2, a2[1]) != 0 )
  {
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  return 1;
}

