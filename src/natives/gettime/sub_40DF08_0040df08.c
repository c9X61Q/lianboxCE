// gettime.exe @ 0x40df08 size=27

std::exception *__thiscall sub_40DF08(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}

