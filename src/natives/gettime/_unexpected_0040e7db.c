// gettime.exe @ 0x40e7db size=28

void __noreturn unexpected()
{
  int v0; // eax
  void (__thiscall *v1)(_DWORD); // esi

  v0 = __vcrt_getptd();
  v1 = *(void (__thiscall **)(_DWORD))(v0 + 4);
  if ( v1 != nullptr )
    v1(*(_DWORD *)(v0 + 4));
  terminate();
}

