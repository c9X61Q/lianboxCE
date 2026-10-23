// gettime.exe @ 0x403010 size=36

std::bad_array_new_length *__thiscall std::bad_array_new_length::bad_array_new_length(std::bad_array_new_length *this)
{
  std::bad_alloc::bad_alloc(this, "bad array new length");
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}

