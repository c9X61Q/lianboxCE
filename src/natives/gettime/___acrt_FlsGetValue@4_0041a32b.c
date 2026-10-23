// gettime.exe @ 0x41a32b size=63

LPVOID __stdcall __acrt_FlsGetValue(DWORD a1)
{
  FARPROC function; // eax

  function = try_get_function(33, "FlsGetValue", (int *)&unk_42D538, (int *)&unk_42D540);
  if ( function != nullptr )
    return (LPVOID)((int (__thiscall *)(FARPROC, DWORD))function)(function, a1);
  else
    return TlsGetValue(a1);
}

