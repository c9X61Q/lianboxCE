// gettime.exe @ 0x408a2e size=31

std::exception *__thiscall sub_408A2E(std::exception *this, char *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}

