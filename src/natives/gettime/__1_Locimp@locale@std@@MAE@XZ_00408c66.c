// gettime.exe @ 0x408c66 size=43

void __thiscall std::locale::_Locimp::~_Locimp(void **this)
{
  *this = &std::locale::_Locimp::`vftable';
  std::locale::_Locimp::_Locimp_dtor((struct std::locale::_Locimp *)this);
  if ( *(this + 6) != nullptr )
    free(*(this + 6));
  *(this + 6) = nullptr;
  *this = &std::_Facet_base::`vftable';
}

