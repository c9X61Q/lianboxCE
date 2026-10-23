// numcomp.exe @ 0x401e50 size=50

int __cdecl std::_Allocate<8,std::_Default_allocate_traits,0>(size_t Size)
{
  if ( Size >= 0x1000 )
    return sub_401E90(Size);
  if ( Size != 0 )
    return unknown_libname_41(Size);
  return 0;
}

