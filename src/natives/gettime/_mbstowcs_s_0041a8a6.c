// gettime.exe @ 0x41a8a6 size=61

errno_t __cdecl mbstowcs_s(
        size_t *PtNumOfCharConverted,
        wchar_t *DstBuf,
        size_t SizeInWords,
        const char *SrcBuf,
        size_t MaxCount)
{
  errno_t v5; // esi
  struct _Mbstatet v7[5]; // [esp+4h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v7, nullptr);
  v5 = _mbstowcs_internal(PtNumOfCharConverted, DstBuf, SizeInWords, SrcBuf, MaxCount, v7);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v7);
  return v5;
}

