// gettime.exe @ 0x4172e1 size=177

// Microsoft VisualC universal runtime
struct __acrt_ptd *unknown_libname_96()
{
  DWORD LastError; // edi
  int v1; // eax
  int Value; // eax
  struct __acrt_ptd *v3; // ebx
  struct __acrt_ptd *v4; // eax
  struct __acrt_ptd *v5; // esi

  LastError = GetLastError();
  v1 = dword_4371A0;
  if ( dword_4371A0 != -1 )
  {
    Value = __acrt_FlsGetValue(dword_4371A0);
    if ( Value != 0 )
    {
      v3 = Value != -1 ? (struct __acrt_ptd *)Value : nullptr;
      goto LABEL_12;
    }
    v1 = dword_4371A0;
  }
  if ( __acrt_FlsSetValue(v1, -1) != 0 )
  {
    v4 = (struct __acrt_ptd *)_calloc_base(1u, 0x364u);
    v5 = v4;
    if ( v4 != nullptr )
    {
      if ( __acrt_FlsSetValue(dword_4371A0, v4) != 0 )
      {
        construct_ptd(v5, &dword_438A30);
        _free_base(nullptr);
        v3 = v5;
      }
      else
      {
        v3 = nullptr;
        __acrt_FlsSetValue(dword_4371A0, 0);
        _free_base(v5);
      }
    }
    else
    {
      v3 = nullptr;
      __acrt_FlsSetValue(dword_4371A0, 0);
      _free_base(nullptr);
    }
  }
  else
  {
    v3 = nullptr;
  }
LABEL_12:
  SetLastError(LastError);
  return v3;
}

