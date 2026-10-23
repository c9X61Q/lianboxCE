// busybox.exe @ 0x411540 size=128

int sub_411540()
{
  HMODULE ModuleHandleW; // eax
  HMODULE v1; // ebx
  unsigned int (__cdecl *___lc_codepage_func)(); // eax

  ModuleHandleW = GetModuleHandleW(L"msvcrt.dll");
  if ( ModuleHandleW != nullptr )
  {
    v1 = ModuleHandleW;
    ___lc_codepage_func = (unsigned int (__cdecl *)())GetProcAddress(ModuleHandleW, "___lc_codepage_func");
    if ( ___lc_codepage_func != nullptr )
    {
LABEL_3:
      off_4730F0 = (int (*)())___lc_codepage_func;
      return ___lc_codepage_func();
    }
    _lc_codepage = (int)GetProcAddress(v1, "__lc_codepage");
    if ( _lc_codepage != 0 )
    {
      ___lc_codepage_func = (unsigned int (__cdecl *)())sub_4114F0;
      goto LABEL_3;
    }
  }
  off_4730F0 = sub_411500;
  return sub_411500();
}

