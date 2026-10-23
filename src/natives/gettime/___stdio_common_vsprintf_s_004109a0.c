// gettime.exe @ 0x4109a0 size=65

int __cdecl __stdio_common_vsprintf_s(
        unsigned __int64 Options,
        char *Buffer,
        size_t BufferCount,
        const char *Format,
        _locale_t Locale,
        va_list ArgList)
{
  int v6; // esi
  _BYTE v8[40]; // [esp+4h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v8, Locale);
  v6 = common_vsprintf_s<char>(
         Options,
         SHIDWORD(Options),
         Buffer,
         BufferCount,
         (int)Format,
         (__crt_cached_ptd_host *)v8,
         (int)ArgList);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v8);
  return v6;
}

