// gettime.exe @ 0x403eb0 size=92

int __stdcall sub_403EB0(char *a1, char *Src, int a3, size_t a4, size_t Size, char a6)
{
  unknown_libname_25(a1, Src, a4);
  std::_Narrow_char_traits<char,int>::assign(&a1[a4], Size, a6);
  return unknown_libname_25(&a1[a4 + Size], &Src[a4], a3 - a4 + 1);
}

