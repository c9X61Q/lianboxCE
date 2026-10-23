// resizecmdwindow.exe @ 0x140009ba4 size=380

__int64 __fastcall __scrt_common_main_seh()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  char v2; // si
  __int64 v3; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  void (__fastcall **v8)(_QWORD, __int64); // rbx
  _tls_callback_type *v9; // rax
  _tls_callback_type *v10; // rbx
  char **initial_narrow_environment; // rdi
  char **v12; // rbx
  int *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx

  if ( (unsigned __int8)_scrt_initialize_crt(1) == 0 )
  {
    _scrt_fastfail(7);
    goto LABEL_19;
  }
  v2 = 0;
  LOBYTE(v0) = _scrt_acquire_startup_lock(v1);
  v3 = (unsigned int)dword_14000FA70;
  if ( dword_14000FA70 == 1 )
  {
LABEL_19:
    _scrt_fastfail(7);
    goto LABEL_20;
  }
  if ( dword_14000FA70 != 0 )
  {
    v2 = 1;
  }
  else
  {
    dword_14000FA70 = 1;
    if ( initterm_e((_PIFV *)&First, (_PIFV *)&Last) != 0 )
      return 255;
    initterm((_PVFV *)&qword_14000B3D0, (_PVFV *)&qword_14000B3E0);
    dword_14000FA70 = 2;
  }
  LOBYTE(v3) = v0;
  _scrt_release_startup_lock(v3);
  v6 = (_QWORD *)sub_14000A240(v5);
  v8 = (void (__fastcall **)(_QWORD, __int64))v6;
  if ( *v6 != 0 && (unsigned __int8)_scrt_is_nonwritable_in_current_image(v6) != 0 )
    (*v8)(0, 2);
  v9 = (_tls_callback_type *)sub_14000A248(v7);
  v10 = v9;
  if ( *v9 != nullptr && (unsigned __int8)_scrt_is_nonwritable_in_current_image(v9) != 0 )
    register_thread_local_exe_atexit_callback(*v10);
  initial_narrow_environment = get_initial_narrow_environment();
  v12 = *_p___argv();
  v13 = _p___argc();
  v0 = main(*v13, (const char **)v12, (const char **)initial_narrow_environment);
  if ( (unsigned __int8)_scrt_is_managed_app(v14) == 0 )
LABEL_20:
    exit(v0);
  if ( v2 == 0 )
    cexit();
  LOBYTE(v15) = 1;
  _scrt_uninitialize_crt(v15, 0);
  return v0;
}

