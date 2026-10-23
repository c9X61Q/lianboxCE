// gettime.exe @ 0x408bcd size=65

std::locale::_Locimp *__thiscall std::locale::_Locimp::_Locimp(std::locale::_Locimp *this, bool a2)
{
  char *v3; // ecx

  v3 = (char *)this + 24;
  *((_DWORD *)this + 1) = 1;
  *(_DWORD *)this = &std::locale::_Locimp::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = a2;
  *(_DWORD *)v3 = 0;
  v3[4] = 0;
  std::_Yarn<char>::operator=(&unk_42A03C);
  return this;
}

