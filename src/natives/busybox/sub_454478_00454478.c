// busybox.exe @ 0x454478 size=99

int __usercall sub_454478@<eax>(size_t *a1@<eax>, int a2@<edx>)
{
  size_t v4; // eax
  void *Block; // edx
  size_t v6; // eax
  void *v7; // eax
  int v8; // edx
  size_t v9; // edx
  size_t v10; // eax

  v4 = *a1;
  if ( v4 != a1[1] )
    goto LABEL_7;
  Block = (void *)a1[2];
  v6 = 2 * (v4 + 1);
  *a1 = v6;
  if ( Block != nullptr )
    v7 = realloc(Block, 4 * v6);
  else
    v7 = calloc(v6, 4u);
  v8 = -1;
  if ( v7 != nullptr )
  {
    a1[2] = (size_t)v7;
LABEL_7:
    v9 = a1[2];
    v10 = a1[1];
    a1[1] = v10 + 1;
    *(_DWORD *)(v9 + 4 * v10) = a2;
    return 1;
  }
  return v8;
}

