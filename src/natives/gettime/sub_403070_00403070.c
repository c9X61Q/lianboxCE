// gettime.exe @ 0x403070 size=38

std::exception *__thiscall sub_403070(std::exception *this)
{
  std::exception::exception(this, "bad cast", 1);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}

