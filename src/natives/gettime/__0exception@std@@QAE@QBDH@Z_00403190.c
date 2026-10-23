// gettime.exe @ 0x403190 size=47

std::exception *__thiscall std::exception::exception(std::exception *this, const char *a2, int a3)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = a2;
  return this;
}

