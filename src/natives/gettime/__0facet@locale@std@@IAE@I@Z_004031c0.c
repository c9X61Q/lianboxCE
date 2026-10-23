// gettime.exe @ 0x4031c0 size=42

std::locale::facet *__thiscall std::locale::facet::facet(std::locale::facet *this, unsigned int a2)
{
  sub_402DC0(this);
  *(_DWORD *)this = &std::locale::facet::`vftable';
  *((_DWORD *)this + 1) = a2;
  return this;
}

