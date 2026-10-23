// gettime.exe @ 0x408ec1 size=40

static void __cdecl std::locale::_Setgloballocale(void *a1)
{
  if ( byte_4380E0 == 0 )
  {
    byte_4380E0 = 1;
    _Atexit(tidy_global);
  }
  dword_4380DC = (int)a1;
}

