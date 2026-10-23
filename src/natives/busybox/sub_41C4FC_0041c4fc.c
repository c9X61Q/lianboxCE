// busybox.exe @ 0x41c4fc size=246

int __usercall sub_41C4FC@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  _DWORD *v5; // ebp
  int v6; // eax
  unsigned int v7; // eax
  int v8; // edx
  int v9; // esi
  void *Block; // eax
  size_t v11; // esi
  void *v12; // eax
  int v14; // esi
  _DWORD *v15; // eax
  int i; // [esp+8h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-1Ch]
  _DWORD *v19; // [esp+14h] [ebp-14h]

  v5 = (_DWORD *)a1[17];
  for ( i = 0; *(_DWORD *)(a2 + 4) > i; ++i )
  {
    v17 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * i);
    v6 = *v5 + 8 * v17;
    if ( *(_BYTE *)(v6 + 4) == 8 )
    {
      v7 = *(_DWORD *)v6;
      if ( v7 <= 0x1F )
      {
        v8 = v5[20];
        if ( _bittest(&v8, v7) )
        {
          v9 = a1[28];
          if ( a1[27] == v9 )
          {
            Block = (void *)a1[29];
            v11 = 2 * v9;
            if ( Block != nullptr )
              v12 = realloc(Block, 4 * v11);
            else
              v12 = calloc(v11, 4u);
            if ( v12 == nullptr )
              return 12;
            a1[29] = v12;
            a1[28] = v11;
          }
          v14 = a1[27];
          v19 = (_DWORD *)(a1[29] + 4 * v14);
          v15 = calloc(1u, 0x18u);
          *v19 = v15;
          if ( v15 == nullptr )
            return 12;
          v15[1] = v17;
          a1[27] = v14 + 1;
          *v15 = a3;
        }
      }
    }
  }
  return 0;
}

