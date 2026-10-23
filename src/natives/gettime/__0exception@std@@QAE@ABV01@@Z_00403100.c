// gettime.exe @ 0x403100 size=60

std::exception *__thiscall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  __std_exception_copy((char *)a2 + 4, (char *)this + 4);
  return this;
}

