// gettime.exe @ 0x41724b size=149

void *__acrt_getptd_head()
{
  int v0; // eax
  void *Value; // eax
  void *v2; // esi
  void *v3; // eax

  v0 = dword_4371A0;
  if ( dword_4371A0 != -1 )
  {
    Value = (void *)__acrt_FlsGetValue(dword_4371A0);
    v2 = Value;
    if ( Value != nullptr )
    {
      if ( Value != (void *)-1 )
        return v2;
LABEL_13:
      abort();
    }
    v0 = dword_4371A0;
  }
  if ( __acrt_FlsSetValue(v0, -1) == 0 )
    goto LABEL_13;
  v3 = _calloc_base(1u, 0x364u);
  v2 = v3;
  if ( v3 == nullptr )
  {
    __acrt_FlsSetValue(dword_4371A0, 0);
    _free_base(nullptr);
    goto LABEL_13;
  }
  if ( __acrt_FlsSetValue(dword_4371A0, v3) == 0 )
  {
    __acrt_FlsSetValue(dword_4371A0, 0);
    _free_base(v2);
    goto LABEL_13;
  }
  construct_ptd((struct __acrt_ptd *const)v2, &dword_438A30);
  _free_base(nullptr);
  return v2;
}

