// gettime.exe @ 0x4030a0 size=37

std::locale::facet *__thiscall sub_4030A0(std::locale::facet *this, unsigned int a2)
{
  std::locale::facet::facet(this, a2);
  *(_DWORD *)this = &std::ctype_base::`vftable';
  return this;
}

