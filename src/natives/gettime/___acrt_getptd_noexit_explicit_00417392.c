// gettime.exe @ 0x417392 size=163

char *__cdecl __acrt_getptd_noexit_explicit(int a1, int a2)
{
  int v2; // eax
  int v3; // edi
  struct __acrt_ptd *Value; // eax
  struct __acrt_ptd *v5; // esi
  struct __acrt_ptd *v6; // eax

  v2 = dword_4371A0;
  v3 = 0;
  if ( dword_4371A0 != -1 )
  {
    Value = (struct __acrt_ptd *)__acrt_FlsGetValue(dword_4371A0);
    v5 = Value;
    if ( Value != nullptr )
    {
      if ( Value != (struct __acrt_ptd *)-1 )
        return (char *)v5 + 868 * a2;
      return (char *)v3;
    }
    v2 = dword_4371A0;
  }
  if ( __acrt_FlsSetValue(v2, -1) != 0 )
  {
    v6 = (struct __acrt_ptd *)_calloc_base(1u, 0x364u);
    v5 = v6;
    if ( v6 != nullptr )
    {
      if ( __acrt_FlsSetValue(dword_4371A0, v6) != 0 )
      {
        construct_ptd(v5, &dword_438A30);
        _free_base(nullptr);
        return (char *)v5 + 868 * a2;
      }
      __acrt_FlsSetValue(dword_4371A0, 0);
      _free_base(v5);
    }
    else
    {
      __acrt_FlsSetValue(dword_4371A0, 0);
      _free_base(nullptr);
    }
  }
  return (char *)v3;
}

