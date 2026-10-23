// gettime.exe @ 0x403840 size=35

void __thiscall std::exception::~exception(std::exception *this)
{
  *(_DWORD *)this = &std::exception::`vftable';
  __std_exception_destroy((char *)this + 4);
}

