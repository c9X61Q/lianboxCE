// busybox.exe @ 0x46cbd8 size=1335

int __usercall sub_46CBD8@<eax>(int a1@<eax>, const char *a2@<edx>, char *a3@<ecx>, _DWORD *a4)
{
  const char *Source; // esi
  size_t v5; // eax
  int v6; // ecx
  const char *v7; // ebx
  void *v8; // esp
  char *v9; // eax
  char *v10; // esi
  char *v11; // edi
  char v12; // dl
  char *v13; // edi
  int v14; // esi
  void *v15; // esp
  const char ***v16; // edx
  unsigned int v17; // ecx
  const char ***i; // edi
  char *v19; // eax
  char *v20; // eax
  const char ***j; // edi
  unsigned __int8 *v22; // eax
  const char **v23; // ecx
  int v24; // esi
  int v25; // edx
  unsigned int v26; // eax
  _BYTE *k; // eax
  unsigned __int8 v28; // cl
  unsigned __int8 v29; // dl
  int v30; // edx
  _DWORD *v31; // edx
  char v32; // cl
  _BYTE *n; // edi
  int v34; // eax
  unsigned __int8 *ii; // edi
  int v36; // ecx
  int v37; // ebx
  _DWORD *v38; // eax
  unsigned __int8 v39; // al
  _DWORD *v40; // eax
  _BYTE *jj; // eax
  int v42; // edx
  char Str; // [esp+0h] [ebp-3E0h]
  char Stra; // [esp+0h] [ebp-3E0h]
  unsigned __int8 v47; // [esp+18h] [ebp-3C8h]
  int v48; // [esp+18h] [ebp-3C8h]
  char v49; // [esp+1Fh] [ebp-3C1h]
  const char **v50; // [esp+20h] [ebp-3C0h] BYREF
  char *v51; // [esp+24h] [ebp-3BCh]
  int v52; // [esp+28h] [ebp-3B8h]
  int v53; // [esp+2Ch] [ebp-3B4h]
  char *v54; // [esp+30h] [ebp-3B0h]
  int m; // [esp+34h] [ebp-3ACh]
  _BYTE v56[936]; // [esp+38h] [ebp-3A8h] BYREF

  Source = a2;
  v54 = a3;
  memset(v56, 0, 0x39Cu);
  v5 = strlen(a2);
  v7 = nullptr;
  if ( *Source == 94 )
    v7 = &(++Source)[v5];
  LOBYTE(v6) = *Source;
  v49 = *Source;
  if ( *Source == 33 )
    ++Source;
  v8 = alloca(sub_4115D8(4 * ((v5 + 16) >> 2), v6, Str));
  v51 = strcpy((char *)&v50, Source);
  v9 = &v51[((*v51 - 43) & 0xFD) == 0];
  v10 = v56;
  m = 0;
  while ( *v9 != 0 && m != 32 )
  {
    *v10 = *v9;
    *((_DWORD *)v10 + 1) = 1 << m;
    v11 = v9 + 1;
    if ( v9[1] == 58 )
    {
      *((_DWORD *)v10 + 5) = *a4;
      v12 = v9[2];
      if ( (unsigned __int8)(v12 - 42) <= 1u )
      {
        v10[1] = (v12 == 43) + 1;
        sub_448258((int)(v9 + 2), (int)(v9 + 3));
      }
      do
        ++v11;
      while ( *v11 == 58 );
      ++a4;
    }
    v10 += 28;
    ++m;
    v9 = v11;
  }
  if ( v54 != nullptr )
  {
    v13 = v54;
    v14 = 1;
    while ( *v13 != 0 )
    {
      v13 += strlen(v13) + 3;
      ++v14;
    }
    v15 = alloca(sub_4115D8(16 * v14 + 12, 16 * v14, Stra));
    v16 = &v50;
    v50 = (const char **)&v50;
    memset(&v50, 0, v17);
    for ( i = &v50; --v14 != 0; i += 4 )
    {
      v53 = (int)v16;
      v19 = v54;
      *i = (const char **)v54;
      v20 = &v54[strlen(v19) + 1];
      i[1] = (const char **)(unsigned __int8)*v20;
      v54 = v20 + 2;
      i[3] = (const char **)(unsigned __int8)v20[1];
      v16 = (const char ***)v53;
    }
    for ( j = v16; *j != nullptr; j += 4 )
    {
      v22 = v56;
      if ( j[2] == nullptr )
      {
        while ( 1 )
        {
          v23 = (const char **)*v22;
          if ( (_BYTE)v23 == 0 )
            break;
          if ( v23 == j[3] )
            goto LABEL_32;
          v22 += 28;
        }
        if ( m > 31 )
          break;
        *v22 = (unsigned __int8)j[3];
        *((_DWORD *)v22 + 1) = 1 << m;
        if ( j[1] != nullptr )
          *((_DWORD *)v22 + 5) = *a4++;
        ++m;
      }
LABEL_32:
      ;
    }
  }
  else
  {
    v50 = (const char **)&unk_47DF2C;
  }
  v53 = -1;
  v54 = nullptr;
  v52 = 0;
  v24 = 0;
  if ( v7 != nullptr )
  {
    while ( 1 )
    {
      v25 = *(unsigned __int8 *)v7;
      if ( (_BYTE)v25 == 0 )
        goto LABEL_84;
      if ( (_BYTE)v25 != 58 )
        break;
LABEL_83:
      ++v7;
    }
    v47 = v7[1];
    m = v47;
    switch ( (_BYTE)v25 )
    {
      case '?':
        v26 = v47 - 48;
        if ( v26 > 9 )
          goto LABEL_83;
        goto LABEL_44;
      case '-':
        if ( (unsigned int)(m - 48) <= 9 )
        {
          ++v7;
          v54 = (char *)(m - 48);
        }
        goto LABEL_83;
      case '=':
        v26 = m - 48;
        v54 = (char *)(m - 48);
LABEL_44:
        ++v7;
        v53 = v26;
        goto LABEL_83;
      default:
        break;
    }
    for ( k = v56; ; k += 28 )
    {
      if ( *k == 0 )
        sub_41784C("NO OPT %c!", v25);
      if ( *k == (_BYTE)v25 )
        break;
    }
    switch ( m )
    {
      case 58:
        if ( v7[2] == 58 )
        {
          k[1] = 1;
          goto LABEL_83;
        }
LABEL_59:
        v52 |= *((_DWORD *)k + 1);
        goto LABEL_83;
      case 43:
        v28 = v7[2];
        if ( v28 == 58 || v28 == 0 )
        {
          k[1] = 2;
LABEL_64:
          ++v7;
          goto LABEL_83;
        }
        break;
      case 0:
        goto LABEL_59;
      case 45:
        v29 = v7[2];
        if ( v29 == 58 || v29 == 0 )
        {
          v30 = *((_DWORD *)k + 1);
          v24 |= v30;
          *((_DWORD *)k + 3) |= v30;
          goto LABEL_64;
        }
        goto LABEL_67;
      default:
        break;
    }
    if ( (_BYTE)v25 == v47 )
    {
      *((_DWORD *)k + 6) = *a4++;
      ++v7;
    }
LABEL_67:
    v31 = k + 4;
    for ( m = (int)(v7 + 1); ; ++m )
    {
      v32 = *(_BYTE *)m;
      if ( *(_BYTE *)m == 58 || v32 == 0 )
        break;
      if ( v32 == 63 )
      {
        v31 = k + 16;
      }
      else if ( v32 == 45 )
      {
        if ( k + 8 == (_BYTE *)v31 )
          v31 = k + 12;
        else
          v31 = k + 8;
      }
      else
      {
        for ( n = v56; *n != 0; n += 28 )
        {
          if ( *n == v32 )
          {
            *v31 |= *((_DWORD *)n + 1);
            break;
          }
        }
      }
    }
    v7 = (const char *)(m - 1);
    goto LABEL_83;
  }
LABEL_84:
  dword_473090 = 0;
  v48 = sub_463690((_DWORD *)(a1 + 4)) + 1;
  while ( 1 )
  {
    v34 = sub_404120(v48, a1, v51, v50, nullptr);
    if ( v34 == -1 )
      break;
    for ( ii = v56; ; ii += 28 )
    {
      v36 = *ii;
      if ( v36 == (unsigned __int8)v34 )
        break;
      if ( (_BYTE)v36 == 0 )
        goto LABEL_113;
    }
    if ( (v24 & *((_DWORD *)ii + 3)) != 0 )
      goto LABEL_113;
    m = *((_DWORD *)ii + 1);
    v37 = *((_DWORD *)ii + 2);
    v38 = *((_DWORD **)ii + 6);
    if ( v38 != nullptr )
      ++*v38;
    if ( dword_48601C != nullptr )
    {
      v39 = ii[1];
      if ( v39 == 1 )
      {
        sub_43E384(*((int **)ii + 5), (int)dword_48601C);
      }
      else if ( v39 == 2 )
      {
        **((_DWORD **)ii + 5) = sub_4708EC();
      }
      else
      {
        v40 = *((_DWORD **)ii + 5);
        if ( v40 != nullptr )
          *v40 = dword_48601C;
      }
    }
    v24 = (v37 & m ^ m | v24 & ~(v37 & m ^ v37)) ^ v37 & m;
  }
  for ( jj = v56; *jj != 0; jj += 28 )
  {
    v42 = *((_DWORD *)jj + 4);
    if ( v42 != 0 && (v24 & *((_DWORD *)jj + 1)) != 0 && (v24 & v42) == 0 )
      goto LABEL_113;
  }
  if ( (v52 == 0 || (v24 & v52) != 0) && (int)v54 <= v48 - dword_473090 && (v53 >= v48 - dword_473090 || v53 < 0) )
  {
    dword_486008 = v24;
    return v24;
  }
LABEL_113:
  if ( v49 != 33 )
    sub_418164();
  return -1;
}

