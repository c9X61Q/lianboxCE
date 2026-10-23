// gettime.exe @ 0x4062e0 size=47

int __stdcall std::string::assign(char *Str)
{
  int v1; // eax
  size_t v2; // eax

  v1 = sub_4074D0(Str);
  v2 = unknown_libname_1(v1);
  return std::string::assign(Str, v2);
}

