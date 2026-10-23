// gettime.exe @ 0x401830 size=50

unsigned int __cdecl std::_Allocate<8,std::_Default_allocate_traits,0>(size_t Size)
{
  if ( Size >= 0x1000 )
    return sub_401870(Size);
  if ( Size != 0 )
    return unknown_libname_60(Size);
  return 0;
}

