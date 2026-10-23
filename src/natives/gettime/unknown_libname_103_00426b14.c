// gettime.exe @ 0x426b14 size=51

// Microsoft VisualC universal runtime
int __cdecl unknown_libname_103(signed int a1, __int16 *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int8 v5; // [esp+0h] [ebp-4h]

  if ( a4 != 10 || (v5 = 1, a1 >= 0) )
    v5 = 0;
  return common_xtox_s<unsigned long,wchar_t>(a1, a2, a3, a4, v5);
}

