// gettime.exe @ 0x40ab65 size=135

char __cdecl __scrt_initialize_onexit_tables(unsigned int a1)
{
  if ( byte_438351 != 0 )
    return 1;
  if ( a1 > 1 )
  {
    __scrt_fastfail(5);
    __debugbreak();
  }
  if ( __scrt_is_ucrt_dll_in_use() == 0 || a1 != 0 )
  {
    stru_438354._first = (_PVFV *)-1;
    stru_438354._last = (_PVFV *)-1;
    stru_438354._end = (_PVFV *)-1;
    stru_438360._first = (_PVFV *)-1;
    stru_438360._last = (_PVFV *)-1;
    stru_438360._end = (_PVFV *)-1;
  }
  else if ( _initialize_onexit_table(&stru_438354) != 0 || _initialize_onexit_table(&stru_438360) != 0 )
  {
    return 0;
  }
  byte_438351 = 1;
  return 1;
}

