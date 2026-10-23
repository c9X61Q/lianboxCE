// gettime.exe @ 0x402d20 size=54

std::locale::facet *__thiscall sub_402D20(std::locale::facet *this, std::_Locinfo *a2, unsigned int a3, char a4)
{
  std::locale::facet::facet(this, a3);
  *(_DWORD *)this = &std::numpunct<char>::`vftable';
  sub_4053D0(a2, a4);
  return this;
}

