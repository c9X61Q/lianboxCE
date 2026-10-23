// busybox.exe @ 0x404d20 size=133

int __usercall sub_404D20@<eax>(int a1@<eax>, unsigned int **a2@<edx>, void **a3@<ecx>, void **a4)
{
  unsigned int *v6; // ebp
  unsigned int *Block; // edx

  if ( a1 == -1 )
  {
    sub_404C20(a2, a4);
    return -1;
  }
  else
  {
    v6 = *a2;
    while ( v6 != nullptr )
    {
      Block = v6;
      v6 = (unsigned int *)v6[1];
      free(Block);
    }
    *a2 = nullptr;
    if ( a3 != nullptr )
    {
      free(*a3);
      *a3 = nullptr;
    }
    free(*a4);
    *a4 = nullptr;
    return a1;
  }
}

