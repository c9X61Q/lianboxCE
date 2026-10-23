// busybox.exe @ 0x453610 size=2036

int __usercall sub_453610@<eax>(int a1@<eax>, void *a2@<edx>, char *a3@<ecx>, int a4)
{
  void **v6; // ebp
  void **v7; // eax
  int result; // eax
  size_t i; // edi
  char *v10; // eax
  char *v11; // edi
  char *v12; // eax
  char *v13; // eax
  char v14; // dl
  bool v15; // al
  bool v16; // zf
  char v17; // dl
  int v18; // eax
  int v19; // ebx
  int *v20; // eax
  int *v21; // esi
  int v22; // ebx
  _DWORD *j; // eax
  _DWORD *v24; // esi
  int *v25; // eax
  int *v26; // edi
  int v27; // ebx
  size_t v28; // esi
  void *v29; // eax
  void *v30; // eax
  void *v31; // edi
  void *v32; // eax
  int v33; // esi
  _DWORD *v34; // eax
  int v35; // edx
  int k; // eax
  int v37; // esi
  int m; // edi
  int v39; // eax
  void *v40; // eax
  unsigned int n; // edx
  unsigned int v42; // edx
  int v43; // edi
  int v44; // ecx
  int ii; // esi
  int v46; // ebx
  char *v47; // eax
  int jj; // esi
  int v49; // ecx
  int v50; // edi
  int v51; // eax
  int v52; // eax
  char *v53; // eax
  int v54; // ebx
  _DWORD *kk; // eax
  _DWORD *v56; // esi
  void *Block; // [esp+0h] [ebp-88h]
  size_t Size; // [esp+4h] [ebp-84h]
  unsigned int v60; // [esp+10h] [ebp-78h]
  int v61; // [esp+10h] [ebp-78h]
  void *v62; // [esp+10h] [ebp-78h]
  int v63; // [esp+10h] [ebp-78h]
  void *v64; // [esp+14h] [ebp-74h]
  unsigned int v65; // [esp+14h] [ebp-74h]
  int v66; // [esp+18h] [ebp-70h]
  int v67; // [esp+18h] [ebp-70h]
  int v68; // [esp+20h] [ebp-68h] BYREF
  int v69; // [esp+24h] [ebp-64h] BYREF
  char v70[4]; // [esp+28h] [ebp-60h] BYREF
  int v71; // [esp+2Ch] [ebp-5Ch]
  void *v72; // [esp+30h] [ebp-58h]
  void *v73[21]; // [esp+34h] [ebp-54h] BYREF

  v68 = 0;
  *(_DWORD *)(a1 + 12) = a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 28) &= 0x90u;
  v6 = *(void ***)a1;
  if ( *(_DWORD *)(a1 + 4) <= 0x87u )
  {
    if ( v6 != nullptr )
      v7 = (void **)realloc(v6, 0x88u);
    else
      v7 = (void **)calloc(1u, 0x88u);
    v6 = v7;
    result = 12;
    if ( v6 == nullptr )
      return result;
    *(_DWORD *)(a1 + 4) = 136;
    *(_DWORD *)a1 = v6;
  }
  *(_DWORD *)(a1 + 8) = 136;
  memset(v6, 0, 0x88u);
  v6[16] = (void *)31;
  if ( a3 == (char *)-1 )
  {
LABEL_32:
    v68 = 12;
    goto LABEL_132;
  }
  v6[1] = a3 + 1;
  *v6 = malloc(8 * (_DWORD)(a3 + 1));
  for ( i = 1; (unsigned int)a3 >= i; i *= 2 )
    ;
  v6[8] = calloc(0xCu, i);
  v6[17] = (void *)(i - 1);
  v6[23] = (void *)off_4730EC();
  v10 = getenv("LC_ALL");
  v11 = v10;
  if ( v10 != nullptr && *v10 != 0
    || (v12 = getenv("LC_CTYPE"), v11 = v12, v12 != nullptr) && *v12 != 0
    || (v11 = getenv("LANG")) != nullptr )
  {
    v13 = strchr(v11, 46);
    if ( v13 != nullptr )
      v11 = v13 + 1;
  }
  else
  {
    v11 = (char *)&unk_477923;
  }
  if ( (*v11 & 0xDF) != 0x55 || (v11[1] & 0xDF) != 0x54 || (v11[2] & 0xDF) != 0x46 )
    goto LABEL_30;
  v14 = v11[3];
  v15 = false;
  if ( v14 == 45 )
  {
    if ( v11[4] != 56 )
      goto LABEL_28;
    v16 = v11[5] == 0;
  }
  else
  {
    if ( v14 != 56 )
      goto LABEL_28;
    v16 = v11[4] == 0;
  }
  v15 = v16;
LABEL_28:
  if ( v15 )
    *((_BYTE *)v6 + 88) |= 4u;
LABEL_30:
  v17 = (_BYTE)v6[22] & 0xF7;
  *((_BYTE *)v6 + 88) = v17;
  if ( *v6 == nullptr || v6[8] == nullptr )
    goto LABEL_32;
  v68 = 0;
  v60 = *(_DWORD *)(a1 + 20);
  memset(&v73[1], 0, 0x3Cu);
  v73[0] = a2;
  v73[8] = a3;
  v73[7] = a3;
  v73[12] = (void *)v60;
  LOBYTE(v73[14]) = (a4 & 0x200000) != 0;
  v16 = (a4 & 0x200000 | v60) == 0;
  v61 = a4 & 0x200000 | v60;
  HIBYTE(v73[14]) = !v16;
  v73[16] = v6[23];
  BYTE1(v73[14]) = (v17 & 4) != 0;
  v73[10] = a3;
  v73[9] = a3;
  if ( (int)a3 > 0 )
  {
    v18 = sub_456538(0, a3 + 1);
    if ( v18 != 0 )
    {
      v68 = v18;
      goto LABEL_47;
    }
  }
  if ( HIBYTE(v73[14]) != 0 )
    a2 = v73[1];
  v73[1] = a2;
  if ( (a4 & 0x200000) != 0 )
  {
    sub_419F8C(v73);
  }
  else if ( v61 != 0 )
  {
    sub_4566B8();
  }
  else
  {
    v73[3] = v73[5];
    v73[4] = v73[5];
  }
  v68 = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v19 = *(_DWORD *)a1;
  *(_DWORD *)(*(_DWORD *)a1 + 128) = a4;
  sub_42F118(a4 | 0x400000, (int)v73);
  v20 = sub_44B530((int)v73, (int *)a1, (int)v70, a4, 0, &v68);
  v21 = v20;
  if ( v68 != 0 && v20 == nullptr )
    goto LABEL_58;
  v25 = (int *)sub_420A78(v19, nullptr, nullptr, 2);
  v26 = v25;
  if ( v21 != nullptr )
    v25 = (int *)sub_420A78(v19, v21, v25, 16);
  if ( v25 == nullptr || v26 == nullptr )
  {
    v68 = 12;
LABEL_58:
    v6[13] = nullptr;
    goto LABEL_47;
  }
  v27 = *(_DWORD *)a1;
  v6[13] = v25;
  v28 = *(_DWORD *)(v27 + 4);
  v29 = malloc(4 * v28);
  *(_DWORD *)(v27 + 12) = v29;
  v64 = v29;
  v30 = malloc(4 * v28);
  *(_DWORD *)(v27 + 16) = v30;
  v62 = v30;
  v28 *= 12;
  v31 = malloc(v28);
  *(_DWORD *)(v27 + 20) = v31;
  v32 = malloc(v28);
  *(_DWORD *)(v27 + 24) = v32;
  if ( v31 == nullptr || v62 == nullptr || v64 == nullptr || v32 == nullptr )
  {
LABEL_61:
    v68 = 12;
LABEL_47:
    v22 = *(_DWORD *)a1;
    for ( j = *(_DWORD **)(*(_DWORD *)a1 + 56); j != nullptr; j = v24 )
    {
      v24 = (_DWORD *)*j;
      free(j);
    }
    *(_DWORD *)(v22 + 56) = 0;
    *(_DWORD *)(v22 + 64) = 31;
    *(_DWORD *)(v22 + 52) = 0;
    free(*(void **)(v22 + 16));
    *(_DWORD *)(v22 + 16) = 0;
    if ( HIBYTE(v73[14]) != 0 )
      free(v73[1]);
    goto LABEL_132;
  }
  v33 = *(_DWORD *)(a1 + 24);
  v34 = malloc(4 * v33);
  *(_DWORD *)(v27 + 132) = v34;
  v35 = 0;
  if ( v34 != nullptr )
  {
    while ( v35 != v33 )
    {
      v34[v35] = v35;
      ++v35;
    }
    sub_44DBD4(*(_DWORD **)(v27 + 52), (int (__cdecl *)(int, _DWORD *))sub_447BD0, v27);
    for ( k = 0; k != *(_DWORD *)(a1 + 24); ++k )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v27 + 132) + 4 * k) != k )
        goto LABEL_70;
    }
    free(*(void **)(v27 + 132));
    *(_DWORD *)(v27 + 132) = 0;
  }
LABEL_70:
  v63 = sub_44DA6C(*(_DWORD **)(v27 + 52), (int (__cdecl *)(int, _DWORD *))sub_43EB98, a1);
  if ( v63 != 0 )
    goto LABEL_101;
  v63 = sub_44DA6C(*(_DWORD **)(v27 + 52), (int (__cdecl *)(int, _DWORD *))sub_41AA0C, v27);
  if ( v63 != 0 )
    goto LABEL_101;
  sub_44DBD4(*(_DWORD **)(v27 + 52), (int (__cdecl *)(int, _DWORD *))sub_41AA7C, v27);
  v63 = sub_44DBD4(*(_DWORD **)(v27 + 52), (int (__cdecl *)(int, _DWORD *))sub_43DF7C, v27);
  if ( v63 != 0 )
    goto LABEL_101;
  v37 = 0;
  for ( m = 0; ; ++m )
  {
    if ( *(_DWORD *)(v27 + 8) == m )
    {
      if ( v37 == 0 )
        break;
      v37 = 0;
      m = 0;
    }
    if ( *(_DWORD *)(*(_DWORD *)(v27 + 24) + 12 * m + 4) == 0 )
    {
      v39 = sub_41A864(v70, (_DWORD *)v27, m, 1u);
      if ( v39 != 0 )
      {
        v63 = v39;
        goto LABEL_101;
      }
      if ( *(_DWORD *)(*(_DWORD *)(v27 + 24) + 12 * m + 4) == 0 )
      {
        free(v72);
        v37 = 1;
      }
    }
  }
  if ( ((*(_BYTE *)(a1 + 28) & 0x10) != 0 || *(_DWORD *)(a1 + 24) == 0 || (*(_BYTE *)(v27 + 88) & 1) == 0)
    && *(_DWORD *)(v27 + 76) == 0 )
  {
    v68 = 0;
    goto LABEL_102;
  }
  v40 = malloc(12 * m);
  *(_DWORD *)(v27 + 28) = v40;
  if ( v40 == nullptr )
    goto LABEL_61;
  for ( n = 0; *(_DWORD *)(v27 + 8) > n; ++n )
    memset((void *)(*(_DWORD *)(v27 + 28) + 12 * n), 0, 0xCu);
  v42 = 0;
LABEL_94:
  if ( *(_DWORD *)(v27 + 8) > v42 )
  {
    v43 = 12 * v42;
    v44 = *(_DWORD *)(*(_DWORD *)(v27 + 24) + 12 * v42 + 8);
    for ( ii = 0; ; ++ii )
    {
      if ( ii >= *(_DWORD *)(*(_DWORD *)(v27 + 24) + v43 + 4) )
      {
        ++v42;
        goto LABEL_94;
      }
      v66 = v44;
      v65 = v42;
      if ( sub_454478() == -1 )
        break;
      v44 = v66;
      v42 = v65;
    }
    v63 = 12;
  }
LABEL_101:
  v68 = v63;
  if ( v63 != 0 )
    goto LABEL_47;
LABEL_102:
  v6[18] = *(void **)(*((_DWORD *)v6[13] + 3) + 28);
  v46 = sub_454254();
  v69 = v46;
  if ( v46 == 0 )
  {
    if ( (int)v6[19] > 0 )
    {
      for ( jj = 0; jj < v71; ++jj )
      {
        v67 = *((_DWORD *)v72 + jj);
        v49 = v67;
        v50 = (int)*v6 + 8 * v67;
        v51 = 0;
        if ( *(_BYTE *)(v50 + 4) == 4 )
        {
          while ( v51 < v71 )
          {
            v49 = (int)*v6 + 8 * *((_DWORD *)v72 + v51);
            if ( *(_BYTE *)(v49 + 4) == 9 && *(_DWORD *)v49 == *(_DWORD *)v50 )
              goto LABEL_114;
            ++v51;
          }
          if ( v51 == v71 )
            continue;
LABEL_114:
          if ( sub_4541D4(v49, **((_DWORD **)v6[5] + 3 * v67 + 2)) == 0 )
          {
            v52 = sub_4544DC(Block, Size);
            v69 = v52;
            if ( v52 != 0 )
            {
              v46 = v52;
              goto LABEL_126;
            }
            jj = 0;
          }
        }
      }
    }
    v47 = sub_453294(&v69, v6, (int)v70, 0);
    v6[9] = v47;
    if ( v47 != nullptr )
    {
      if ( v47[52] >= 0 )
      {
        v6[12] = v47;
        v6[11] = v47;
        v6[10] = v47;
      }
      else
      {
        v6[10] = sub_453294(&v69, v6, (int)v70, 1);
        v6[11] = sub_453294(&v69, v6, (int)v70, 2);
        v53 = sub_453294(&v69, v6, (int)v70, 6);
        v6[12] = v53;
        if ( v6[10] == nullptr || v6[11] == nullptr || v53 == nullptr )
          goto LABEL_122;
      }
      free(v72);
    }
    else
    {
LABEL_122:
      v46 = v69;
    }
  }
LABEL_126:
  v68 = v46;
  v54 = *(_DWORD *)a1;
  for ( kk = *(_DWORD **)(*(_DWORD *)a1 + 56); kk != nullptr; kk = v56 )
  {
    v56 = (_DWORD *)*kk;
    free(kk);
  }
  *(_DWORD *)(v54 + 56) = 0;
  *(_DWORD *)(v54 + 64) = 31;
  *(_DWORD *)(v54 + 52) = 0;
  free(*(void **)(v54 + 16));
  *(_DWORD *)(v54 + 16) = 0;
  if ( HIBYTE(v73[14]) != 0 )
    free(v73[1]);
  if ( v68 != 0 )
  {
LABEL_132:
    sub_431BEC((int)v6);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  return v68;
}

