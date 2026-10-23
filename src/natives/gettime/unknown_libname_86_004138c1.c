// gettime.exe @ 0x4138c1 size=67

// Microsoft VisualC universal runtime
bool __cdecl unknown_libname_86(int a1)
{
  return a1 % 4 == 0 && a1 % 100 != 0 || (a1 + 1900) % 400 == 0;
}

