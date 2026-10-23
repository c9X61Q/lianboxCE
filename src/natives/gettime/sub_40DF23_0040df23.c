// gettime.exe @ 0x40df23 size=24

_DWORD *__thiscall sub_40DF23(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad exception";
  *this = &std::bad_exception::`vftable';
  return this;
}

