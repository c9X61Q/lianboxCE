// gettime.exe @ 0x40a842 size=35

_DWORD *__thiscall sub_40A842(_DWORD *Block, char a2)
{
  *Block = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_40A6BA(Block);
  return Block;
}

