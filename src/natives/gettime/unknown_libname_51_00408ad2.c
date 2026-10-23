// gettime.exe @ 0x408ad2 size=45

// Microsoft VisualC 14/net runtime
char *__thiscall unknown_libname_51(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_40A6BA(Block);
  return Block;
}

