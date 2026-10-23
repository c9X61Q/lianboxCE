// gettime.exe @ 0x425113 size=67

unsigned int __cdecl __crt_mbstring::__mbrtowc_utf8(
        __crt_mbstring *this,
        wchar_t *a2,
        char *a3,
        unsigned int a4,
        struct _Mbstatet *a5)
{
  struct __crt_cached_ptd_host *v5; // ecx
  unsigned int v6; // edx
  __int16 v7; // cx
  unsigned int v9; // [esp+0h] [ebp-4h] BYREF

  v6 = __crt_mbstring::__mbrtoc32_utf8((__crt_mbstring *)&v9, (char32_t *)a2, a3, a4, a5, v5);
  if ( v6 <= 4 )
  {
    v7 = v9;
    if ( v9 > 0xFFFF )
      v7 = -3;
    if ( this != nullptr )
      *(_WORD *)this = v7;
  }
  return v6;
}

