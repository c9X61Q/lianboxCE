// gettime.exe @ 0x406650 size=55

int __stdcall std::ctype<char>::do_narrow(void *Src, int a2, int a3, void *a4)
{
  sub_401820();
  memmove(a4, Src, a2 - (_DWORD)Src);
  return a2;
}

