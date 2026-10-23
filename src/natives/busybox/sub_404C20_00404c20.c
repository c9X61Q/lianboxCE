// busybox.exe @ 0x404c20 size=117

void __usercall sub_404C20(unsigned int **a1@<eax>, void **a2@<edx>)
{
  unsigned int *Block; // esi
  unsigned int i; // ebx
  _DWORD *v6; // eax
  unsigned int *v7; // ebx

  free(*a2);
  Block = *a1;
  *a2 = nullptr;
  if ( Block != nullptr )
  {
    while ( 1 )
    {
      for ( i = 0; *Block > i; *v6 = 0 )
      {
        free(*(void **)Block[i + 2]);
        v6 = (_DWORD *)Block[i++ + 2];
      }
      v7 = (unsigned int *)Block[1];
      free(Block);
      if ( v7 == nullptr )
        break;
      Block = v7;
    }
    *a1 = nullptr;
  }
}

