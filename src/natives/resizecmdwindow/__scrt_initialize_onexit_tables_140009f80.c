// resizecmdwindow.exe @ 0x140009f80 size=139

char __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( byte_14000FA81 == 0 )
  {
    if ( a1 > 1 )
    {
      _scrt_fastfail(5);
      JUMPOUT(0x14000A00ALL);
    }
    if ( (unsigned int)_scrt_is_ucrt_dll_in_use() == 0 || a1 != 0 )
    {
      *(__m128i *)&Table._first = _mm_load_si128(&xmmword_14000B4B0);
      Table._end = (_PVFV *)-1LL;
      *(_OWORD *)&stru_14000FAA0._first = *(_OWORD *)&Table._first;
      stru_14000FAA0._end = (_PVFV *)-1LL;
    }
    else if ( initialize_onexit_table(&Table) != 0 || initialize_onexit_table(&stru_14000FAA0) != 0 )
    {
      return 0;
    }
    byte_14000FA81 = 1;
  }
  return 1;
}

