// gettime.exe @ 0x410870 size=91

void __thiscall __crt_cached_ptd_host::update_locale_slow(__crt_cached_ptd_host *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // [esp-4h] [ebp-14h]
  int v5; // [esp+Ch] [ebp-4h]

  v2 = unknown_libname_61(this);
  v4 = *((_DWORD *)this + 1);
  v5 = v2;
  *((_DWORD *)this + 3) = *(_DWORD *)(v2 + 76);
  *((_DWORD *)this + 4) = *(_DWORD *)(v2 + 72);
  sub_417F8A(v2, (char *)this + 12, v4);
  sub_417FE8(v5, (char *)this + 16, *((_DWORD *)this + 1));
  v3 = *(_DWORD *)(v5 + 848);
  if ( (v3 & 2) == 0 )
  {
    *(_DWORD *)(v5 + 848) = v3 | 2;
    *((_BYTE *)this + 20) = 2;
  }
}

