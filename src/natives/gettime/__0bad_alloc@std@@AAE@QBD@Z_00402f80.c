// gettime.exe @ 0x402f80 size=39

std::bad_alloc *__thiscall std::bad_alloc::bad_alloc(std::bad_alloc *this, char *a2)
{
  std::exception::exception(this, a2, 1);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}

