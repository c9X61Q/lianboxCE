// gettime.exe @ 0x415fbf size=113

char __cdecl parse_bcp47_language(wchar_t *Destination, _DWORD *a2)
{
  if ( a2[2] != 0 || (unsigned int)(a2[1] - 2) > 1 || (unsigned __int8)string_is_alpha(*a2, a2[1]) == 0 )
    return 0;
  if ( wcsncpy_s(Destination, 0x40u, (const wchar_t *)*a2, a2[1]) != 0
    || wcsncpy_s(Destination + 144, 0x55u, (const wchar_t *)*a2, a2[1]) != 0 )
  {
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  return 1;
}

