// gettime.exe @ 0x404010 size=59

// Microsoft VisualC 14/net runtime
int __stdcall unknown_libname_59(char *a1, size_t Size, char a3)
{
  char v4; // [esp+7h] [ebp-1h] BYREF

  std::_Narrow_char_traits<char,int>::assign(a1, Size, a3);
  v4 = 0;
  return unknown_libname_21(&a1[Size], &v4);
}

