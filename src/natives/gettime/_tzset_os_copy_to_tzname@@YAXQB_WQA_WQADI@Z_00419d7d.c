// gettime.exe @ 0x419d7d size=65

void __cdecl tzset_os_copy_to_tzname(
        wchar_t *Source,
        wchar_t *const Destination,
        LPSTR lpMultiByteStr,
        unsigned int a4)
{
  if ( wcsncpy_s(Destination, 0x40u, Source, 0x20u) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  __acrt_WideCharToMultiByte(a4, 0, Source, -1, lpMultiByteStr, 64, 0, 0);
}

