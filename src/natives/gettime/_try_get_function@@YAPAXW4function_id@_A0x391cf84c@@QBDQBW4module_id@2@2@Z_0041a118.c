// gettime.exe @ 0x41a118 size=133

FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, int *a3, int *a4)
{
  volatile __int32 *v4; // ebx
  int v5; // edx
  HMODULE first_available_module; // eax
  FARPROC ProcAddress; // eax
  FARPROC v9; // edi

  v4 = (volatile __int32 *)((char *)&unk_438D78 + 4 * a1);
  v5 = __ROR4__(__security_cookie ^ *v4, __security_cookie & 0x1F);
  if ( v5 == -1 )
    return nullptr;
  if ( v5 != 0 )
    return (FARPROC)v5;
  first_available_module = try_get_first_available_module(a3, a4);
  if ( first_available_module != nullptr
    && (ProcAddress = GetProcAddress(first_available_module, lpProcName), v9 = ProcAddress, ProcAddress != nullptr) )
  {
    _InterlockedExchange(v4, unknown_libname_88((int)ProcAddress));
    return v9;
  }
  else
  {
    _InterlockedExchange(v4, __security_cookie ^ __ROR4__(-1, 32 - (__security_cookie & 0x1F)));
    return nullptr;
  }
}

