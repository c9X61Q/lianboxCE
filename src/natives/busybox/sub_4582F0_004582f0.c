// busybox.exe @ 0x4582f0 size=129

int __cdecl sub_4582F0(int a1, int a2)
{
  char v2; // si
  int v3; // eax
  void *Block; // ebx
  const char *v5; // eax

  v2 = sub_435D44(a2, (int)"^fnvsq");
  if ( (v2 & 4) == 0 )
    byte_473468 = 0;
  if ( (v2 & 1) != 0 )
    v3 = sub_471374();
  else
    v3 = sub_471264();
  Block = (void *)v3;
  if ( v3 != 0 )
  {
    v5 = "%s";
    if ( (v2 & 2) == 0 )
      v5 = "%s\n";
    sub_46F088(v5, Block);
    free(Block);
    sub_42F138(0);
  }
  return 1;
}

