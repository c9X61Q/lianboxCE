// gettime.exe @ 0x40e65c size=73

FARPROC __cdecl try_get_function(int a1, const CHAR *lpProcName, _DWORD *a3, _DWORD *a4)
{
  volatile __int32 *v4; // edi
  FARPROC result; // eax
  HMODULE first_available_module; // eax

  v4 = (volatile __int32 *)((char *)&unk_438740 + 4 * a1);
  result = (FARPROC)*v4;
  if ( *v4 != -1 )
  {
    if ( result != nullptr )
      return result;
    first_available_module = try_get_first_available_module(a3, a4);
    if ( first_available_module != nullptr )
    {
      result = GetProcAddress(first_available_module, lpProcName);
      if ( result != nullptr )
      {
        _InterlockedExchange(v4, (__int32)result);
        return result;
      }
    }
    _InterlockedExchange(v4, -1);
  }
  return nullptr;
}

