// busybox.exe @ 0x471218 size=76

CHAR *__usercall sub_471218@<eax>(const CHAR *a1@<eax>, int a2@<ecx>)
{
  char *v3; // edi
  CHAR *Block; // ebx
  int v5; // eax

  v3 = nullptr;
  do
  {
    v3 += 80;
    Block = (CHAR *)sub_471600(a2, v3);
    v5 = sub_4580EC(a1, Block, v3);
    if ( v5 == -1 )
    {
      free(Block);
      return nullptr;
    }
  }
  while ( (int)v3 <= v5 );
  Block[v5] = 0;
  return Block;
}

