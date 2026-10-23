// busybox.exe @ 0x45a0d4 size=193

int __usercall sub_45A0D4@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  size_t *v6; // ebp
  int i; // ecx
  int v8; // edx
  _DWORD *v9; // ebx
  void *Block; // eax
  size_t v11; // edi
  void *v12; // eax
  int v13; // edx
  int v14; // eax
  int v16; // [esp+8h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-14h]

  *a2 = a3;
  v6 = a2 + 4;
  v16 = sub_454160(a2 + 4, a2[2]);
  if ( v16 == 0 )
  {
    for ( i = 0; a2[2] > i; ++i )
    {
      v8 = *(_DWORD *)(a2[3] + 4 * i);
      if ( (*(_BYTE *)(*a1 + 8 * v8 + 4) & 8) == 0 )
      {
        v17 = i;
        if ( sub_454478(v6, v8) < 0 )
          return 12;
        i = v17;
      }
    }
    v9 = (_DWORD *)(a1[8] + 12 * (a1[17] & a3));
    if ( v9[1] <= *v9 )
    {
      Block = (void *)v9[2];
      v11 = 2 * (*v9 + 1);
      if ( Block != nullptr )
        v12 = realloc(Block, 8 * (*v9 + 1));
      else
        v12 = calloc(v11, 4u);
      if ( v12 == nullptr )
        return 12;
      v9[2] = v12;
      v9[1] = v11;
    }
    v13 = v9[2];
    v14 = (*v9)++;
    *(_DWORD *)(v13 + 4 * v14) = a2;
    return v16;
  }
  return 12;
}

