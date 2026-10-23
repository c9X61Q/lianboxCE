// gettime.exe @ 0x403fb0 size=85

int __stdcall sub_403FB0(char *a1, void *Src, size_t a3, size_t Size, char a5)
{
  char v6; // [esp+7h] [ebp-1h] BYREF

  unknown_libname_25(a1, Src, a3);
  std::_Narrow_char_traits<char,int>::assign(&a1[a3], Size, a5);
  v6 = 0;
  return unknown_libname_21(&a1[Size + a3], &v6);
}

