// gettime.exe @ 0x41a2ec size=63

int __stdcall sub_41A2EC(DWORD a1)
{
  FARPROC function; // eax

  function = try_get_function(32, "FlsFree", (int *)&unk_42D530, (int *)&unk_42D538);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD))function)(function, a1);
  else
    return TlsFree(a1);
}

