// gettime.exe @ 0x4028d0 size=140

char *__thiscall sub_4028D0(char *this, int a2)
{
  int v2; // eax

  if ( a2 != 0 )
  {
    *(_DWORD *)this = &unk_42943C;
    sub_402830((std::ios_base *)(this + 80));
  }
  v2 = unknown_libname_1((int)(this + 4));
  sub_402850(this, v2, 0, 0);
  *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4)) = &std::ostringstream::`vftable';
  *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) - 4) = *(_DWORD *)(*(_DWORD *)this + 4) - 80;
  std::stringbuf::stringbuf(2);
  return this;
}

