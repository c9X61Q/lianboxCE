// busybox.exe @ 0x42e4f4 size=110

int __usercall sub_42E4F4@<eax>(int a1@<eax>, int a2@<ecx>)
{
  unsigned int v2; // edx
  int v3; // esi
  void *Block; // eax
  void *v6; // eax

  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 > 0xFFFFFFE )
    return 12;
  v3 = sub_456538(a2, 2 * v2);
  if ( v3 != 0 )
    return v3;
  Block = *(void **)(a1 + 84);
  if ( Block != nullptr )
  {
    v6 = realloc(Block, 4 * *(_DWORD *)(a1 + 20) + 4);
    if ( v6 == nullptr )
      return 12;
    *(_DWORD *)(a1 + 84) = v6;
  }
  if ( *(_BYTE *)(a1 + 56) != 0 )
  {
    sub_419F8C((_DWORD *)a1);
  }
  else if ( *(_DWORD *)(a1 + 48) != 0 )
  {
    sub_4566B8();
  }
  return v3;
}

