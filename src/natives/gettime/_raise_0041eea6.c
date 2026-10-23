// gettime.exe @ 0x41eea6 size=498

int __cdecl raise(int Signal)
{
  struct __acrt_ptd *v1; // edi
  char v2; // bl
  struct __acrt_ptd *v3; // eax
  struct __crt_signal_action_t *v5; // eax
  void (__cdecl **global_action_nolock)(int); // eax
  int v7; // ecx
  bool v8; // bh
  int v9; // eax
  int v10; // edx
  struct __acrt_ptd *v11; // eax
  int v12; // [esp+14h] [ebp-34h]
  int v13; // [esp+18h] [ebp-30h]
  int *v14; // [esp+24h] [ebp-24h]
  void (__cdecl *v15)(_DWORD); // [esp+28h] [ebp-20h]

  v1 = nullptr;
  v12 = 0;
  v2 = 1;
  if ( Signal > 11 )
  {
    if ( Signal != 15 && Signal != 21 && Signal != 22 )
      goto LABEL_10;
    goto LABEL_15;
  }
  if ( Signal != 11 )
  {
    if ( Signal == 2 )
      goto LABEL_15;
    if ( Signal != 4 )
    {
      if ( Signal != 6 )
      {
        if ( Signal != 8 )
          goto LABEL_10;
        goto LABEL_7;
      }
LABEL_15:
      global_action_nolock = get_global_action_nolock(Signal);
      goto LABEL_16;
    }
  }
LABEL_7:
  v3 = unknown_libname_96();
  v1 = v3;
  if ( v3 == nullptr )
    return -1;
  v5 = siglookup(Signal, *(struct __crt_signal_action_t *const *)v3);
  if ( v5 == nullptr )
  {
LABEL_10:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  global_action_nolock = (void (__cdecl **)(int))((char *)v5 + 8);
  v2 = 0;
LABEL_16:
  v14 = (int *)global_action_nolock;
  v13 = 0;
  if ( v2 != 0 )
    __acrt_lock(3);
  v7 = *v14;
  v15 = (void (__cdecl *)(_DWORD))*v14;
  if ( v2 != 0 )
  {
    v7 = unknown_libname_87(v7);
    v15 = (void (__cdecl *)(_DWORD))v7;
  }
  v8 = v7 == 1;
  if ( v7 == 1 )
    goto LABEL_36;
  if ( v7 == 0 )
  {
    if ( v2 != 0 )
      __acrt_unlock(3);
    _exit(3);
  }
  if ( Signal == 8 || Signal == 11 || Signal == 4 )
  {
    v13 = *((_DWORD *)v1 + 1);
    *((_DWORD *)v1 + 1) = 0;
    if ( Signal != 8 )
      goto LABEL_31;
    v12 = *((_DWORD *)__acrt_getptd() + 2);
    *((_DWORD *)__acrt_getptd() + 2) = 140;
  }
  if ( Signal == 8 )
  {
    v9 = *(_DWORD *)v1 + 36;
    v10 = *(_DWORD *)v1 + 144;
    while ( v9 != v10 )
    {
      *(_DWORD *)(v9 + 8) = 0;
      v9 += 12;
    }
    goto LABEL_36;
  }
LABEL_31:
  *v14 = __security_cookie;
LABEL_36:
  if ( v2 != 0 )
    __acrt_unlock(3);
  if ( !v8 )
  {
    if ( Signal == 8 )
    {
      v11 = __acrt_getptd();
      ((void (__cdecl *)(int, _DWORD))v15)(8, *((_DWORD *)v11 + 2));
    }
    else
    {
      v15(Signal);
    }
    if ( Signal == 8 || Signal == 11 || Signal == 4 )
    {
      *((_DWORD *)v1 + 1) = v13;
      if ( Signal == 8 )
        *((_DWORD *)__acrt_getptd() + 2) = v12;
    }
  }
  return 0;
}

