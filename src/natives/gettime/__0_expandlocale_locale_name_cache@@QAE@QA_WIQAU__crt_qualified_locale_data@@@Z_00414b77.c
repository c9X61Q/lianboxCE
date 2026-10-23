// gettime.exe @ 0x414b77 size=73

_expandlocale_locale_name_cache *__thiscall _expandlocale_locale_name_cache::_expandlocale_locale_name_cache(
        _expandlocale_locale_name_cache *this,
        wchar_t *const Destination,
        rsize_t SizeInWords,
        const wchar_t *a4)
{
  *((_DWORD *)this + 2) = a4;
  *(_DWORD *)this = Destination;
  *((_DWORD *)this + 1) = SizeInWords;
  *((_BYTE *)this + 12) = 0;
  if ( wcsncpy_s(Destination, SizeInWords, a4 + 296, 0x55u) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  return this;
}

