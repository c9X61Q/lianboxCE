// busybox.exe @ 0x431f68 size=31

void *__usercall sub_431F68@<eax>(void **a1@<eax>)
{
  void *Block; // [esp+0h] [ebp-8h]

  if ( *(_BYTE *)a1 == 1 )
    free(a1[2]);
  free(a1);
  return Block;
}

