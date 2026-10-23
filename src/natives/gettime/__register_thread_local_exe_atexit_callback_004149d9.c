// gettime.exe @ 0x4149d9 size=38

void __cdecl _register_thread_local_exe_atexit_callback(_tls_callback_type Callback)
{
  if ( dword_4389EC != __security_cookie )
    terminate();
  dword_4389EC = unknown_libname_88((int)Callback);
}

