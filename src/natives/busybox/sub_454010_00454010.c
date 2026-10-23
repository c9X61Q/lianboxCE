// busybox.exe @ 0x454010 size=336

int __usercall sub_454010@<eax>(size_t *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi
  int v7; // eax
  int v8; // edx
  int v9; // edi
  void *Block; // eax
  size_t v11; // edi
  void *v12; // eax
  size_t v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // edx
  size_t v18; // ecx
  bool v19; // sf
  int v20; // edx
  int v21; // edi
  int v22; // ecx
  int v23; // esi
  int v24; // ecx
  char *v25; // eax
  int v26; // ebp
  int v27; // ebx
  char *v28; // edx
  int v30; // [esp+8h] [ebp-24h]
  int v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+10h] [ebp-1Ch]
  int v33; // [esp+14h] [ebp-18h]
  int v34; // [esp+18h] [ebp-14h]

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 == 0 )
    return 0;
  v7 = *(_DWORD *)(a3 + 4);
  v8 = 0;
  if ( v7 != 0 )
  {
    v9 = v7 + v3;
    if ( (int)(v9 + a1[1]) > (int)*a1 )
    {
      Block = (void *)a1[2];
      v11 = *a1 + v9;
      if ( Block != nullptr )
        v12 = realloc(Block, 4 * v11);
      else
        v12 = calloc(v11, 4u);
      v8 = 12;
      if ( v12 == nullptr )
        return v8;
      a1[2] = (size_t)v12;
      *a1 = v11;
    }
    v13 = a1[1];
    v14 = *(_DWORD *)(a2 + 4);
    v15 = *(_DWORD *)(a3 + 4);
    v30 = v15 + v13 + v14;
    v32 = v14 - 1;
    v16 = v15 - 1;
    v31 = v13 - 1;
    v33 = *(_DWORD *)(a2 + 8);
    v34 = *(_DWORD *)(a3 + 8);
    while ( 1 )
    {
      v17 = *(_DWORD *)(v33 + 4 * v32);
      if ( v17 == *(_DWORD *)(v34 + 4 * v16) )
      {
        v18 = a1[2];
        while ( v31 >= 0 )
        {
          if ( v17 >= *(_DWORD *)(v18 + 4 * v31) )
          {
            if ( v17 == *(_DWORD *)(v18 + 4 * v31) )
              goto LABEL_17;
            break;
          }
          --v31;
        }
        --v30;
        *(_DWORD *)(v18 + 4 * v30) = v17;
LABEL_17:
        if ( --v32 < 0 )
        {
LABEL_23:
          v20 = a1[1];
          v21 = v20 - 1;
          v22 = *(_DWORD *)(a3 + 4) + v20 + *(_DWORD *)(a2 + 4);
          v23 = v22 - 1;
          v24 = v22 - v30;
          a1[1] = v20 + v24;
          v25 = (char *)a1[2];
          if ( v20 > 0 && v24 > 0 )
          {
            do
            {
              while ( 1 )
              {
                v26 = *(_DWORD *)&v25[4 * v23];
                v27 = *(_DWORD *)&v25[4 * v21];
                v28 = &v25[4 * v21 + 4 * v24];
                if ( v26 <= v27 )
                  break;
                *(_DWORD *)v28 = v26;
                if ( --v24 == 0 )
                  goto LABEL_29;
                --v23;
              }
              *(_DWORD *)v28 = v27;
              --v21;
            }
            while ( v21 != -1 );
          }
LABEL_29:
          qmemcpy(v25, &v25[4 * v30], 4 * v24);
          return 0;
        }
      }
      else if ( v17 >= *(_DWORD *)(v34 + 4 * v16) )
      {
        v19 = --v32 < 0;
        goto LABEL_22;
      }
      v19 = --v16 < 0;
LABEL_22:
      if ( v19 )
        goto LABEL_23;
    }
  }
  return v8;
}

