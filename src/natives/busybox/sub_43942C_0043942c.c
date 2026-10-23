// busybox.exe @ 0x43942c size=27

void *__usercall sub_43942C@<eax>(int a1@<eax>, void *a2@<edx>)
{
  void *v3; // eax
  void *Block; // [esp+0h] [ebp-8h]

  Block = a2;
  while ( a1 != 0 )
  {
    v3 = (void *)(a1 - 8);
    a1 = *(_DWORD *)(a1 - 4);
    free(v3);
  }
  return Block;
}

