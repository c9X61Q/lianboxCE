// resizecmdwindow.exe @ 0x14000a130 size=23

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != nullptr) - 1;
}

