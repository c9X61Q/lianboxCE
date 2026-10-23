// busybox.exe @ 0x4712ac size=161

int __usercall sub_4712AC@<eax>(int a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>)
{
  _BYTE *v4; // ebp
  _BYTE *v5; // ebx
  int v6; // esi
  _BYTE *Block; // ebx
  unsigned int v9; // [esp+4h] [ebp-18h]

  v9 = 2147479552;
  if ( a2 != nullptr )
    v9 = *a2;
  v4 = nullptr;
LABEL_4:
  v5 = v4;
  v4 += 128;
  v6 = sub_471600(a3, v4);
  Block = &v5[v6];
  while ( 1 )
  {
    if ( sub_446D28(a1, Block, 1) != 1 )
    {
      if ( Block == (_BYTE *)v6 )
      {
        free(Block);
        return 0;
      }
      goto LABEL_13;
    }
    if ( *Block == 10 )
      break;
    ++Block;
    if ( (unsigned int)v4 >= v9 )
      break;
    if ( &Block[-v6] == v4 )
      goto LABEL_4;
  }
  if ( Block != (_BYTE *)v6 )
  {
LABEL_13:
    if ( *(Block - 1) == 13 )
      --Block;
  }
  *Block = 0;
  if ( a2 != nullptr )
    *a2 = (unsigned int)&Block[-v6];
  return sub_471600(a3, &Block[-v6 + 1]);
}

