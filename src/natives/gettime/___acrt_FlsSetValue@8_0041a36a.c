// gettime.exe @ 0x41a36a size=66

int __stdcall __acrt_FlsSetValue(DWORD a1, void *a2)
{
  FARPROC function; // eax

  function = try_get_function(34, "FlsSetValue", (int *)&unk_42D540, (int *)&unk_42D548);
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, DWORD, void *))function)(function, a1, a2);
  else
    return TlsSetValue(a1, a2);
}

