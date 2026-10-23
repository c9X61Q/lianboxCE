// busybox.exe @ 0x456538 size=77

int __usercall sub_456538@<eax>(int a1@<eax>, size_t Size@<edx>)
{
  void *Block; // eax
  void *v5; // eax
  int v6; // edx

  if ( *(_BYTE *)(a1 + 59) == 0 )
    goto LABEL_7;
  Block = *(void **)(a1 + 4);
  if ( Block != nullptr )
    v5 = realloc(Block, Size);
  else
    v5 = calloc(Size, 1u);
  v6 = 12;
  if ( v5 != nullptr )
  {
    *(_DWORD *)(a1 + 4) = v5;
LABEL_7:
    *(_DWORD *)(a1 + 20) = Size;
    return 0;
  }
  return v6;
}

