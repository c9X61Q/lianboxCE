// busybox.exe @ 0x403050 size=81

int __cdecl sub_403050(_DWORD *Block)
{
  int v1; // esi

  *errno() = 0;
  if ( Block != nullptr )
  {
    v1 = 0;
    if ( Block[137] != -1 )
      v1 = findclose(Block[137]);
    free(Block);
  }
  else
  {
    v1 = -1;
    *errno() = 14;
  }
  return v1;
}

