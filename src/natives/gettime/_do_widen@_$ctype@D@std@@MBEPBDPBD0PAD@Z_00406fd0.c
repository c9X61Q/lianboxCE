// gettime.exe @ 0x406fd0 size=55

int __stdcall std::ctype<char>::do_widen(void *Src, int a2, void *a3)
{
  sub_401820();
  memmove(a3, Src, a2 - (_DWORD)Src);
  return a2;
}

