// busybox.exe @ 0x4670ec size=1389

int __usercall sub_4670EC@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v3; // eax
  unsigned int v4; // esi
  char v5; // al
  unsigned int v6; // esi
  int v7; // eax
  int Size; // ecx
  _DWORD *v9; // eax
  int v10; // esi
  int v11; // ebp
  int k; // edi
  unsigned int v13; // eax
  int m; // ebp
  int v15; // edx
  int n; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // edi
  size_t v20; // edi
  void *v21; // eax
  void *v22; // eax
  int *v23; // ecx
  int v24; // eax
  _DWORD *v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // esi
  int v29; // esi
  int v30; // ecx
  int v31; // ebp
  int v32; // esi
  char *v33; // eax
  void *v34; // ecx
  char **v35; // edi
  void *Buf1; // [esp+0h] [ebp-70h]
  int v38; // [esp+10h] [ebp-60h]
  int v39; // [esp+14h] [ebp-5Ch]
  int v40; // [esp+18h] [ebp-58h]
  int v41; // [esp+18h] [ebp-58h]
  _DWORD *v42; // [esp+1Ch] [ebp-54h]
  int v43; // [esp+20h] [ebp-50h]
  int v44; // [esp+20h] [ebp-50h]
  int v45; // [esp+24h] [ebp-4Ch]
  int v46; // [esp+24h] [ebp-4Ch]
  int v47; // [esp+24h] [ebp-4Ch]
  int i; // [esp+28h] [ebp-48h]
  int v49; // [esp+2Ch] [ebp-44h]
  _DWORD *v50; // [esp+30h] [ebp-40h]
  int j; // [esp+34h] [ebp-3Ch]
  int v52; // [esp+3Ch] [ebp-34h]
  int v53; // [esp+3Ch] [ebp-34h]
  int *v54; // [esp+40h] [ebp-30h]
  int v55; // [esp+44h] [ebp-2Ch]
  int v57; // [esp+50h] [ebp-20h] BYREF
  int v58[2]; // [esp+54h] [ebp-1Ch] BYREF
  void *Block; // [esp+5Ch] [ebp-14h]

  v42 = (_DWORD *)a1[17];
  v38 = a1[6];
  for ( i = 0; *(_DWORD *)(a2 + 4) > i; ++i )
  {
    v39 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * i);
    v3 = *v42 + 8 * v39;
    if ( *(_BYTE *)(v3 + 4) == 4 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( (v4 & 0x3FF00) == 0
        || ((v5 = sub_4564EC((int)a1, v38, a1[18]), ((v6 = v4 >> 8) & 4) == 0) || (v5 & 1) != 0)
        && ((v6 & 8) == 0 || (v5 & 1) == 0)
        && ((v6 & 0x20) == 0 || (v5 & 2) != 0)
        && ((v6 & 0x80) == 0 || (v5 & 8) != 0) )
      {
        v49 = a1[23];
        v7 = sub_45CCD4((int)a1, v38);
        if ( v7 == -1 )
        {
LABEL_19:
          v50 = (_DWORD *)a1[17];
          v43 = a1[1];
          v52 = *(_DWORD *)(*v50 + 8 * v39);
          for ( j = 0; j < a1[27]; ++j )
          {
            v10 = *(_DWORD *)(a1[29] + 4 * j);
            if ( v52 == *(_DWORD *)(*v50 + 8 * *(_DWORD *)(v10 + 4)) )
            {
              v11 = *(_DWORD *)v10;
              v40 = v38;
              for ( k = 0; k < *(_DWORD *)(v10 + 16); ++k )
              {
                v54 = *(int **)(*(_DWORD *)(v10 + 20) + 4 * k);
                v55 = v54[1];
                Size = v55 - v11;
                v45 = v55 - v11 + v40;
                if ( v55 - v11 > 0 )
                {
                  if ( a1[3] < v45 )
                  {
                    if ( a1[8] < v45 )
                      break;
                    v13 = sub_41C90C(a1, v45);
                    if ( v13 != 0 )
                      return v13;
                    v43 = a1[1];
                    Size = v55 - v11;
                  }
                  if ( memcmp((const void *)(v40 + v43), (const void *)(v11 + v43), Size) != 0 )
                    break;
                }
                v13 = sub_435598((int)a1, (int *)v10, v54, v39, v38);
                if ( v13 > 1 )
                  return v13;
                v43 = a1[1];
                v40 += v55 - v11;
                v11 = v55;
              }
              if ( k >= *(_DWORD *)(v10 + 16) )
              {
                for ( m = v11 - ((k == 0) - 1); v38 >= m; ++m )
                {
                  if ( m - *(_DWORD *)v10 > 0 )
                  {
                    if ( a1[3] <= v40 )
                    {
                      if ( v40 >= a1[8] )
                        break;
                      v13 = sub_42E4F4((int)a1, Size);
                      if ( v13 != 0 )
                        return v13;
                      v43 = a1[1];
                    }
                    Size = v40;
                    if ( *(_BYTE *)(v43 + v40) != *(_BYTE *)(v43 + m - 1) )
                      break;
                    ++v40;
                  }
                  v15 = *(_DWORD *)(a1[21] + 4 * m);
                  if ( v15 != 0 )
                  {
                    for ( n = 0; ; ++n )
                    {
                      if ( n >= *(_DWORD *)(v15 + 8) )
                        goto LABEL_63;
                      v46 = *(_DWORD *)(*(_DWORD *)(v15 + 12) + 4 * n);
                      Size = *v50 + 8 * v46;
                      if ( *(_BYTE *)(Size + 4) == 9 && v52 == *(_DWORD *)Size )
                        break;
                    }
                    if ( v46 == -1 )
                      continue;
                    v17 = *(_DWORD *)v10;
                    if ( *(_DWORD *)(v10 + 8) == 0 )
                    {
                      v18 = calloc(0xCu, m - v17 + 1);
                      *(_DWORD *)(v10 + 8) = v18;
                      if ( v18 == nullptr )
                        return 12;
                    }
                    v13 = sub_41BAC0((int)a1, *(int **)(v10 + 8), *(_DWORD *)(v10 + 4), v17, v46, m, 9);
                    if ( v13 == 1 )
                      continue;
                    if ( v13 != 0 )
                      return v13;
                    v19 = *(_DWORD *)(v10 + 12);
                    if ( *(_DWORD *)(v10 + 16) == v19 )
                    {
                      v20 = 2 * v19 + 1;
                      v21 = *(void **)(v10 + 20);
                      if ( v21 != nullptr )
                        v22 = realloc(v21, 4 * v20);
                      else
                        v22 = calloc(v20, 4u);
                      if ( v22 == nullptr )
                        return 12;
                      *(_DWORD *)(v10 + 20) = v22;
                      *(_DWORD *)(v10 + 12) = v20;
                    }
                    v23 = (int *)calloc(1u, 0x14u);
                    if ( v23 == nullptr )
                      return 12;
                    v24 = *(_DWORD *)(v10 + 16);
                    *(_DWORD *)(*(_DWORD *)(v10 + 20) + 4 * v24) = v23;
                    *v23 = v46;
                    v23[1] = m;
                    *(_DWORD *)(v10 + 16) = v24 + 1;
                    sub_435598((int)a1, (int *)v10, v23, v39, v38);
                  }
LABEL_63:
                  ;
                }
              }
            }
          }
        }
        else
        {
          v9 = (_DWORD *)(a1[25] + 20 * v7);
          while ( v39 != *v9 )
          {
            v9 += 5;
            if ( *((_BYTE *)v9 - 4) == 0 )
              goto LABEL_19;
          }
        }
        v57 = 0;
        while ( a1[23] > v49 )
        {
          v25 = (_DWORD *)(a1[25] + 20 * v49);
          if ( *v25 == v39 && v25[1] == v38 )
          {
            v26 = v25[3];
            v27 = v25[2];
            v53 = v26 - v27;
            if ( v26 == v27 )
              v28 = 12 * **(_DWORD **)(v42[5] + 12 * v39 + 8);
            else
              v28 = 12 * *(_DWORD *)(v42[3] + 4 * v39);
            v41 = v42[6] + v28;
            v29 = a1[21];
            v30 = *(_DWORD *)(v29 + 4 * v38);
            v44 = 0;
            if ( v30 != 0 )
              v44 = *(_DWORD *)(v30 + 8);
            v31 = v38 + v26 - v27;
            v47 = sub_4564EC((int)a1, v31 - 1, a1[18]);
            v32 = 4 * v31 + v29;
            if ( *(_DWORD *)v32 != 0 )
            {
              v57 = sub_4542AC(v58, *(_DWORD *)(*(_DWORD *)v32 + 40), v41);
              if ( v57 != 0 )
              {
                free(Block);
                return v57;
              }
              v35 = (char **)(a1[21] + 4 * v31);
              *v35 = sub_453294(&v57, v42, (int)v58, v47);
              free(Block);
            }
            else
            {
              v33 = sub_453294(&v57, v42, v41, v47);
              Buf1 = v34;
              *(_DWORD *)v32 = v33;
            }
            if ( *(_DWORD *)(a1[21] + 4 * v31) == 0 && v57 != 0 )
              return v57;
            if ( v53 == 0 && *(_DWORD *)(*(_DWORD *)(a1[21] + 4 * v38) + 8) > v44 )
            {
              v57 = sub_41C4FC(a1, v41, v38);
              if ( v57 != 0 )
                return v57;
              v57 = sub_4670EC(Buf1);
              if ( v57 != 0 )
                return v57;
            }
          }
          ++v49;
        }
      }
    }
  }
  return 0;
}

