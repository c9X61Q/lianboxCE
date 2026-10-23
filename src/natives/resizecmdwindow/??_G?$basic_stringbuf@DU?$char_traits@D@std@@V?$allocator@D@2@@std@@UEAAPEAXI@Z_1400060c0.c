// resizecmdwindow.exe @ 0x1400060c0 size=52

void *__fastcall std::stringbuf::`scalar deleting destructor'(void *Block, char a2)
{
  sub_140005D60((__int64)Block);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

