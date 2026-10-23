// gettime.exe @ 0x414d9d size=52

void __thiscall _expandlocale_locale_name_cache::commit_locale_name_cache_already_updated(
        _expandlocale_locale_name_cache *this,
        wchar_t *Source,
        rsize_t MaxCount)
{
  if ( wcsncpy_s(*(wchar_t **)this, *((_DWORD *)this + 1), Source, MaxCount) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  *((_BYTE *)this + 12) = 1;
}

