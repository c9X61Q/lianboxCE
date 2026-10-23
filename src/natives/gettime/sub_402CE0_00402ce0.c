// gettime.exe @ 0x402ce0 size=49

std::locale::facet *__thiscall sub_402CE0(std::locale::facet *this, int a2, unsigned int a3)
{
  std::locale::facet::facet(this, a3);
  *(_DWORD *)this = &std::num_put<char,std::ostreambuf_iterator<char>>::`vftable';
  unknown_libname_13(a2);
  return this;
}

