// gettime.exe @ 0x406130 size=47

int __stdcall std::string::append(char *Str)
{
  int v1; // eax
  size_t v2; // eax

  v1 = sub_4074D0(Str);
  v2 = unknown_libname_1(v1);
  return std::string::append(Str, v2);
}

