// gettime.exe @ 0x403140 size=69

std::exception *__thiscall std::exception::exception(std::exception *this, const char *a2)
{
  char *v2; // edx
  const char *v4; // [esp+0h] [ebp-Ch] BYREF
  char v5; // [esp+4h] [ebp-8h]
  std::exception *v6; // [esp+8h] [ebp-4h]

  v6 = this;
  *(_DWORD *)this = &std::exception::`vftable';
  v2 = (char *)v6 + 4;
  *((_DWORD *)v6 + 1) = 0;
  *((_DWORD *)v2 + 1) = 0;
  v4 = a2;
  v5 = 1;
  __std_exception_copy(&v4, (char *)v6 + 4);
  return v6;
}

