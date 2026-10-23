// gettime.exe @ 0x41a2ad size=63

DWORD __stdcall __acrt_FlsAlloc(int a1)
{
  FARPROC function; // eax

  function = try_get_function(31, "FlsAlloc", (int *)&unk_42D528, (int *)&unk_42D530);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int))function)(function, a1);
  else
    return TlsAlloc();
}

