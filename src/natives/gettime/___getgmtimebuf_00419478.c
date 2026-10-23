// gettime.exe @ 0x419478 size=62

int __getgmtimebuf()
{
  struct __acrt_ptd *v0; // eax
  struct __acrt_ptd *v1; // esi
  int result; // eax

  v0 = unknown_libname_96();
  v1 = v0;
  if ( v0 == nullptr
    || (result = *((_DWORD *)v0 + 14)) == 0
    && (*((_DWORD *)v1 + 14) = _malloc_base(0x24u), _free_base(nullptr), (result = *((_DWORD *)v1 + 14)) == 0) )
  {
    *_errno() = 12;
    return 0;
  }
  return result;
}

