// gettime.exe @ 0x403330 size=42

std::exception *__thiscall std::runtime_error::runtime_error(std::exception *this, int a2)
{
  const char *v2; // eax

  v2 = (const char *)sub_4063C0(a2);
  std::exception::exception(this, v2);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  return this;
}

