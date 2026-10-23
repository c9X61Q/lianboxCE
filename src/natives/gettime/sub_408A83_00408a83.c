// gettime.exe @ 0x408a83 size=31

std::exception *__thiscall sub_408A83(std::exception *this, char *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}

