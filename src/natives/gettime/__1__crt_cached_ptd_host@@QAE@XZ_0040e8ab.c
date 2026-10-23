// gettime.exe @ 0x40e8ab size=60

void __thiscall __crt_cached_ptd_host::~__crt_cached_ptd_host(__crt_cached_ptd_host *this)
{
  int v2; // esi
  int v3; // esi

  if ( *((_BYTE *)this + 20) == 2 )
    *(_DWORD *)(*(_DWORD *)this + 848) &= ~2u;
  if ( *((_BYTE *)this + 28) != 0 )
  {
    v2 = *((_DWORD *)this + 6);
    *(_DWORD *)(((int (*)(void))unknown_libname_61)() + 16) = v2;
  }
  if ( *((_BYTE *)this + 36) != 0 )
  {
    v3 = *((_DWORD *)this + 8);
    *(_DWORD *)(unknown_libname_61(this) + 20) = v3;
  }
}

