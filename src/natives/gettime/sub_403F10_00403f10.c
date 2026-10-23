// gettime.exe @ 0x403f10 size=58

int __stdcall sub_403F10(char *a1, size_t Size, void *Src)
{
  char v4; // [esp+7h] [ebp-1h] BYREF

  unknown_libname_25(a1, Src, Size);
  v4 = 0;
  return unknown_libname_21(&a1[Size], &v4);
}

