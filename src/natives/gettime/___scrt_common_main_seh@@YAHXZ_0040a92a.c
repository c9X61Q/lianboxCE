// gettime.exe @ 0x40a92a size=386

char *__usercall __scrt_common_main_seh@<eax>(char *a1@<esi>)
{
  char v1; // bl
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _tls_callback_type *v5; // eax
  _tls_callback_type *v6; // esi
  const char **v7; // edi
  const char **v8; // esi
  int *v9; // eax
  char v10; // [esp+10h] [ebp-24h]
  int Code; // [esp+14h] [ebp-20h]

  if ( (unsigned __int8)__scrt_initialize_crt(1) == 0
    || (v1 = 0, v10 = __scrt_acquire_startup_lock(), dword_438348 == 1) )
  {
    __scrt_fastfail(7);
    goto LABEL_20;
  }
  if ( dword_438348 != 0 )
  {
    v1 = 1;
  }
  else
  {
    dword_438348 = 1;
    if ( _initterm_e((_PIFV *)&dword_429170, (_PIFV *)&dword_429194) != 0 )
      return (char *)255;
    _initterm((_PVFV *)&First, (_PVFV *)&Last);
    dword_438348 = 2;
  }
  __scrt_release_startup_lock(v10);
  v3 = (_DWORD *)sub_40B1D4();
  v4 = v3;
  if ( *v3 != 0 && (unsigned __int8)__scrt_is_nonwritable_in_current_image(v3) != 0 )
    ((void (__thiscall *)(_DWORD, _DWORD, int, _DWORD))*v4)(*v4, 0, 2, 0);
  v5 = (_tls_callback_type *)sub_40B1DA();
  v6 = v5;
  if ( *v5 != nullptr && (unsigned __int8)__scrt_is_nonwritable_in_current_image(v5) != 0 )
    _register_thread_local_exe_atexit_callback(*v6);
  v7 = (const char **)unknown_libname_90();
  v8 = *(const char ***)sub_414A71();
  v9 = (int *)sub_414A6B();
  a1 = (char *)main(*v9, v8, v7);
  if ( (unsigned __int8)__scrt_is_managed_app() == 0 )
  {
LABEL_20:
    _loaddll(a1);
    _exit(Code);
  }
  if ( v1 == 0 )
    _cexit();
  __scrt_uninitialize_crt(true, 0);
  return a1;
}

