// gettime.exe @ 0x414bc1 size=47

void __thiscall _expandlocale_locale_name_cache::~_expandlocale_locale_name_cache(
        _expandlocale_locale_name_cache *this)
{
  if ( *((_BYTE *)this + 12) == 0
    && wcsncpy_s((wchar_t *)(*((_DWORD *)this + 2) + 592), 0x55u, *(const wchar_t **)this, *((_DWORD *)this + 1)) != 0 )
  {
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
}

