// numcomp.exe @ 0x401f50 size=46

int __cdecl std::_Deallocate<8,0>(void *Block, unsigned int a2)
{
  if ( a2 >= 0x1000 )
    sub_403800(&Block, &a2);
  return sub_407012(Block);
}

