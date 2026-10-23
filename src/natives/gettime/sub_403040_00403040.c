// gettime.exe @ 0x403040 size=37

std::exception *__thiscall sub_403040(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}

