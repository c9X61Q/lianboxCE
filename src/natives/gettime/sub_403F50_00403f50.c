// gettime.exe @ 0x403f50 size=84

int __stdcall sub_403F50(char *a1, void *Src, size_t Size, void *a4, size_t a5)
{
  char v6; // [esp+7h] [ebp-1h] BYREF

  unknown_libname_25(a1, Src, Size);
  unknown_libname_25(&a1[Size], a4, a5);
  v6 = 0;
  return unknown_libname_21(&a1[a5 + Size], &v6);
}

