// gettime.exe @ 0x40b671 size=27

void __noreturn _purecall()
{
  void (__thiscall *v0)(_DWORD); // eax

  v0 = (void (__thiscall *)(_DWORD))sub_40B66B();
  if ( v0 != nullptr )
    v0(v0);
  abort();
}

