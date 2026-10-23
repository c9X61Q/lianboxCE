// gettime.exe @ 0x4045b0 size=81

unsigned int __cdecl std::string::_Calculate_growth(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // [esp+0h] [ebp-8h] BYREF
  int v5; // [esp+4h] [ebp-4h] BYREF

  v5 = a1 | 0xF;
  if ( (a1 | 0xFu) > a3 )
    return a3;
  if ( a2 > a3 - (a2 >> 1) )
    return a3;
  v4 = a2 + (a2 >> 1);
  return *unknown_libname_5(&v5, &v4);
}

