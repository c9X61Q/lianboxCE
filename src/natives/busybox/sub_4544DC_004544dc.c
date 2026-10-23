// busybox.exe @ 0x4544dc size=286

int __usercall sub_4544DC@<eax>(size_t *a1@<eax>, int a2@<edx>)
{
  int v3; // esi
  size_t v5; // esi
  void *Block; // eax
  void *v7; // eax
  int v8; // edx
  int v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  unsigned int v12; // ecx
  char *v13; // esi
  int v14; // edx
  size_t v15; // eax
  const void *v16; // esi
  int v17; // esi
  int v18; // ecx
  size_t v19; // eax
  int v20; // edi
  int v21; // ecx
  int v22; // esi
  int v23; // ebp
  _DWORD *v24; // ebx
  int v26; // [esp+8h] [ebp-14h]

  if ( a2 != 0 )
  {
    v3 = *(_DWORD *)(a2 + 4);
    if ( v3 != 0 )
    {
      if ( (int)*a1 < (int)(a1[1] + 2 * v3) )
      {
        v5 = 2 * (*a1 + v3);
        Block = (void *)a1[2];
        if ( Block != nullptr )
          v7 = realloc(Block, 4 * v5);
        else
          v7 = calloc(v5, 4u);
        v8 = 12;
        if ( v7 == nullptr )
          return v8;
        a1[2] = (size_t)v7;
        *a1 = v5;
      }
      v9 = a1[1];
      v10 = *(_DWORD *)(a2 + 4);
      if ( v9 != 0 )
      {
        v14 = v9 + 2 * v10;
LABEL_12:
        --v10;
LABEL_13:
        --v9;
        while ( v10 >= 0 )
        {
          v15 = a1[2];
          v16 = *(const void **)(a2 + 8);
          if ( v9 < 0 )
          {
            v18 = v10 + 1;
            v14 -= v18;
            qmemcpy((void *)(v15 + 4 * v14), v16, 4 * v18);
            break;
          }
          v17 = *((_DWORD *)v16 + v10);
          if ( *(_DWORD *)(v15 + 4 * v9) == v17 )
            goto LABEL_12;
          if ( *(_DWORD *)(v15 + 4 * v9) >= v17 )
            goto LABEL_13;
          --v10;
          --v14;
          *(_DWORD *)(v15 + 4 * v14) = v17;
        }
        v19 = a1[1];
        v20 = v19 + 2 * *(_DWORD *)(a2 + 4) - 1;
        v21 = v19 + 2 * *(_DWORD *)(a2 + 4) - v14;
        if ( v21 == 0 )
          return 0;
        v22 = v19 - 1;
        a1[1] = v21 + v19;
        v11 = (_DWORD *)a1[2];
        do
        {
          while ( 1 )
          {
            v23 = v11[v20];
            v26 = v11[v22];
            v24 = &v11[v22 + v21];
            if ( v23 <= v26 )
              break;
            *v24 = v23;
            if ( --v21 == 0 )
              return 0;
            --v20;
          }
          *v24 = v26;
          --v22;
        }
        while ( v22 >= 0 );
        v12 = 4 * v21;
        v13 = (char *)&v11[v14];
      }
      else
      {
        a1[1] = v10;
        v11 = (_DWORD *)a1[2];
        v12 = 4 * *(_DWORD *)(a2 + 4);
        v13 = *(char **)(a2 + 8);
      }
      qmemcpy(v11, v13, v12);
    }
    return 0;
  }
  return 0;
}

