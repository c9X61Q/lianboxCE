// gettime.exe @ 0x408aa2 size=31

std::exception *__thiscall sub_408AA2(std::exception *this, char *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  return this;
}

