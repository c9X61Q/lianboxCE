// gettime.exe @ 0x401930 size=46

int __cdecl std::_Deallocate<8,0>(void *Block, unsigned int a2)
{
  if ( a2 >= 0x1000 )
    sub_4044E0(&Block, &a2);
  return sub_40A6BA(Block);
}

