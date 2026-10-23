// gettime.exe @ 0x414d59 size=67

void __thiscall _expandlocale_locale_name_cache::commit_locale_name(
        _expandlocale_locale_name_cache *this,
        wchar_t *Source,
        rsize_t MaxCount)
{
  if ( wcsncpy_s((wchar_t *)(*((_DWORD *)this + 2) + 592), 0x55u, Source, MaxCount) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  _expandlocale_locale_name_cache::commit_locale_name_cache_already_updated(this, Source, MaxCount);
}

