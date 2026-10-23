// gettime.exe @ 0x40e863 size=72

__crt_cached_ptd_host *__thiscall __crt_cached_ptd_host::__crt_cached_ptd_host(
        __crt_cached_ptd_host *this,
        struct __crt_locale_pointers *const a2)
{
  struct __crt_locale_data *locinfo; // eax
  struct __crt_multibyte_data *mbcinfo; // ecx

  *((_BYTE *)this + 20) = 0;
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 28) = 0;
  *((_BYTE *)this + 36) = 0;
  if ( a2 != nullptr )
  {
    locinfo = a2->locinfo;
    mbcinfo = a2->mbcinfo;
LABEL_5:
    *((_BYTE *)this + 20) = 1;
    *((_DWORD *)this + 4) = mbcinfo;
    *((_DWORD *)this + 3) = locinfo;
    return this;
  }
  if ( dword_438A0C == 0 )
  {
    locinfo = (struct __crt_locale_data *)off_437260;
    mbcinfo = (struct __crt_multibyte_data *)off_437264;
    goto LABEL_5;
  }
  return this;
}

