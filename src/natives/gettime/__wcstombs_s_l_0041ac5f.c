// gettime.exe @ 0x41ac5f size=62

errno_t __cdecl _wcstombs_s_l(
        size_t *PtNumOfCharConverted,
        char *Dst,
        size_t DstSizeInBytes,
        const wchar_t *Src,
        size_t MaxCountInBytes,
        _locale_t Locale)
{
  errno_t v6; // esi
  _BYTE v8[40]; // [esp+4h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v8, Locale);
  v6 = _wcstombs_internal(
         PtNumOfCharConverted,
         Dst,
         DstSizeInBytes,
         (wchar_t *)Src,
         MaxCountInBytes,
         (struct __crt_cached_ptd_host *)v8);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v8);
  return v6;
}

