// busybox.exe @ 0x430f14 size=57

void *__usercall sub_430F14@<eax>(int a1@<eax>, void *a2@<edx>)
{
  void *v3; // ebx
  void *Block; // [esp+0h] [ebp-Ch]

  Block = a2;
  while ( 1 )
  {
    v3 = (void *)sub_43E400();
    if ( v3 == nullptr )
      break;
    sub_452A90(a1, *(&NumOfElements + 1), 10);
    free(v3);
  }
  return Block;
}

