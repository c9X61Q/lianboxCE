// gettime.exe @ 0x408a4d size=27

std::exception *__thiscall sub_408A4D(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  return this;
}

