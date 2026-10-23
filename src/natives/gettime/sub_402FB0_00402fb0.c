// gettime.exe @ 0x402fb0 size=37

std::exception *__thiscall sub_402FB0(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

