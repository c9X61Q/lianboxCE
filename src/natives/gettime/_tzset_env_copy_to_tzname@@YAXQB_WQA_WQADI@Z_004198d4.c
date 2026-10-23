// gettime.exe @ 0x4198d4 size=70

void __cdecl tzset_env_copy_to_tzname(
        wchar_t *Source,
        wchar_t *const Destination,
        LPSTR lpMultiByteStr,
        rsize_t MaxCount)
{
  unsigned int utf8_acp_compatibility_codepage; // eax

  if ( wcsncpy_s(Destination, 0x40u, Source, MaxCount) != 0 )
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  utf8_acp_compatibility_codepage = __acrt_get_utf8_acp_compatibility_codepage();
  __acrt_WideCharToMultiByte(utf8_acp_compatibility_codepage, 0, Destination, MaxCount, lpMultiByteStr, 63, 0, 0);
}

