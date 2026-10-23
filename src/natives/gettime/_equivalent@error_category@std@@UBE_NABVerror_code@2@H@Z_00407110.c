// gettime.exe @ 0x407110 size=71

bool __thiscall std::error_category::equivalent(std::error_category *this, const struct std::error_code *a2, int a3)
{
  int v3; // eax

  v3 = unknown_libname_24(a2);
  return unknown_libname_11(this, v3) && unknown_libname_48(a2) == a3;
}

