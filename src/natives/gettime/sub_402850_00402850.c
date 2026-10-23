// gettime.exe @ 0x402850 size=126

char *__thiscall sub_402850(char *this, int a2, char a3, int a4)
{
  if ( a4 != 0 )
  {
    *(_DWORD *)this = &unk_4293AC;
    sub_402830((std::ios_base *)(this + 8));
  }
  *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4)) = &std::ostream::`vftable';
  *(_DWORD *)(this + *(_DWORD *)(*(_DWORD *)this + 4) - 4) = *(_DWORD *)(*(_DWORD *)this + 4) - 8;
  std::ios::init(a2, a3);
  return this;
}

