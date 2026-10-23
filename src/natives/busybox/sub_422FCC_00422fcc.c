// busybox.exe @ 0x422fcc size=59

void *sub_422FCC()
{
  void **v0; // ebx
  void *Block; // [esp+0h] [ebp-8h]

  v0 = (void **)dword_48600C;
  free(*((void **)dword_48600C + 9));
  free(v0[11]);
  if ( v0[12] != &unk_480500 )
    free(v0[12]);
  free(v0);
  return Block;
}

