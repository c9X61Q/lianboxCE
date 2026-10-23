// resizecmdwindow.exe @ 0x1400010d0 size=67

char *__fastcall sub_1400010D0(char *Block, char a2)
{
  *(_QWORD *)Block = &std::exception::`vftable';
  _std_exception_destroy(Block + 8);
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

