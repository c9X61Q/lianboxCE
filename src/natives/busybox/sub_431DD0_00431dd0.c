// busybox.exe @ 0x431dd0 size=102

void *__usercall sub_431DD0@<eax>(void **a1@<eax>)
{
  void **v2; // eax
  void *Block; // [esp+0h] [ebp-8h]

  free(a1[6]);
  free(a1[9]);
  v2 = (void **)a1[10];
  if ( v2 != a1 + 1 )
  {
    free(v2[2]);
    free(a1[10]);
  }
  free(a1[3]);
  free(a1[12]);
  free(a1[11]);
  free(a1);
  return Block;
}

