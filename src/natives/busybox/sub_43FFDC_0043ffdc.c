// busybox.exe @ 0x43ffdc size=1514

int __usercall sub_43FFDC@<eax>(unsigned __int8 *a1@<eax>, int a2@<edx>, unsigned __int8 *a3@<ecx>, _DWORD *a4)
{
  unsigned __int8 *v4; // ebp
  int v5; // ebx
  unsigned int v6; // ebx
  unsigned __int8 *v7; // edi
  unsigned __int8 *v8; // esi
  unsigned int v9; // edi
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // ebp
  unsigned __int8 *v12; // edx
  unsigned __int8 *v13; // edx
  unsigned __int8 *v14; // esi
  unsigned __int8 *v15; // edi
  unsigned int v16; // esi
  unsigned __int8 *v17; // edi
  unsigned __int8 *v18; // eax
  int v19; // ebx
  int v20; // eax
  unsigned __int8 *v21; // esi
  unsigned __int8 v22; // dl
  unsigned __int8 *v23; // edi
  unsigned __int8 *v24; // esi
  unsigned int v25; // ebx
  int v26; // ebp
  unsigned __int8 v27; // dl
  int j; // ebx
  int v29; // edx
  int k; // esi
  int v31; // edx
  int v32; // edx
  int result; // eax
  unsigned __int8 v34; // al
  unsigned int v35; // edx
  unsigned __int8 v36; // al
  _BYTE *v37; // edx
  _BYTE *v38; // ecx
  unsigned __int8 v39; // dl
  int i; // edx
  int v41; // ebx
  unsigned int Size; // [esp+Ch] [ebp-2Ch]
  unsigned __int8 *v43; // [esp+10h] [ebp-28h]
  unsigned __int8 *v44; // [esp+14h] [ebp-24h]
  unsigned int v45; // [esp+18h] [ebp-20h]
  unsigned __int8 *v46; // [esp+1Ch] [ebp-1Ch]
  unsigned int v47; // [esp+1Ch] [ebp-1Ch]
  unsigned __int8 *v48; // [esp+1Ch] [ebp-1Ch]
  unsigned int v49; // [esp+1Ch] [ebp-1Ch]
  unsigned __int8 *v50; // [esp+20h] [ebp-18h]
  int v51; // [esp+20h] [ebp-18h]
  unsigned __int8 *v52; // [esp+20h] [ebp-18h]
  unsigned __int8 *v53; // [esp+20h] [ebp-18h]
  unsigned __int8 *v54; // [esp+24h] [ebp-14h]

  v4 = a1;
  v44 = a3;
  v45 = (unsigned int)&a1[a2];
  v54 = &a3[*a4];
  *a4 = 0;
  v5 = *a1;
  if ( (unsigned __int8)v5 > 0x11u )
  {
    v4 = a1 + 1;
    v6 = v5 - 17;
    if ( (int)v6 > 3 )
    {
      v46 = a3;
      Size = 0;
      v43 = nullptr;
      goto LABEL_29;
    }
    v13 = a3;
    Size = 0;
    v43 = nullptr;
    goto LABEL_9;
  }
  Size = 0;
  v43 = nullptr;
LABEL_23:
  if ( (unsigned int)v4 >= v45 || a3 > v54 )
  {
LABEL_104:
    *a4 = a3 - v44;
    return -7;
  }
  v18 = v4 + 1;
  v6 = *v4;
  if ( v6 > 0xF )
    goto LABEL_31;
  if ( *v4 == 0 )
  {
    for ( i = 15; ; i += 255 )
    {
      v41 = *v18++;
      if ( (_BYTE)v41 != 0 )
        break;
    }
    v6 = i + v41;
  }
  Size = v6 + 3;
  while ( 1 )
  {
    *a3 = *v18;
    a3[1] = v18[1];
    v46 = a3 + 3;
    a3[2] = v18[2];
    v43 = v4;
    v4 = v18 + 3;
LABEL_29:
    a3 = &v46[v6];
    v8 = v4;
    v7 = v46;
    do
      *v7++ = *v8++;
    while ( v7 != a3 );
    v9 = v6 - 1;
    v10 = &v4[v6 - 1];
    v11 = &v4[v6];
    v6 = *v11;
    if ( v6 <= 0xF )
    {
      v4 = v11 + 2;
      v12 = &v46[-2048 - (v6 >> 2) - 4 * v10[2] + v9];
      *a3 = *v12;
      a3[1] = v12[1];
      a3[2] = v12[2];
      a3 += 3;
      goto LABEL_7;
    }
    v18 = v10 + 2;
LABEL_31:
    if ( v6 > 0x3F )
    {
      v23 = v18 + 1;
      v51 = ~((v6 >> 2) & 7) - 8 * *v18;
      v24 = &a3[v51];
      v25 = v6 >> 5;
      v26 = v25 - 1;
      if ( v43 == nullptr )
        goto LABEL_84;
      if ( v25 != 2 )
        goto LABEL_84;
      if ( (*(v18 - 1) & 3) != 0 )
        goto LABEL_84;
      if ( Size <= 3 )
        goto LABEL_84;
      v6 = v18[1];
      if ( (unsigned __int8)(v6 - 1) > 0xEu )
        goto LABEL_84;
      v47 = v6 + Size;
      if ( v6 + Size + 3 > 0xF )
        goto LABEL_84;
      v27 = *v24;
      *(v18 - 1) = *v24;
      if ( v51 == -1 )
      {
        *v18 = v27;
      }
      else
      {
        *v18 = v24[1];
        if ( v51 == -2 )
          v27 = *v24;
        else
          v27 = v24[2];
      }
      v18[1] = v27;
      v18 += 2;
      Size = v47 + 6;
      *v43 = v47 + 3;
      *a3 = *v24;
      a3[1] = v24[1];
      a3[2] = v24[2];
      v4 = v43;
      goto LABEL_83;
    }
    if ( v6 <= 0x1F )
      break;
    v26 = v6 & 0x1F;
    if ( (v6 & 0x1F) == 0 )
    {
      for ( j = 31; ; j += 255 )
      {
        v29 = *v18++;
        if ( (_BYTE)v29 != 0 )
          break;
      }
      v26 = v29 + j;
    }
    v23 = v18 + 2;
    v24 = &a3[~(*v18 >> 2) - (v18[1] << 6)];
LABEL_60:
    if ( v43 == nullptr || v26 != 1 )
    {
LABEL_84:
      v20 = -1;
LABEL_85:
      *a3 = *v24;
      v37 = a3 + 2;
      a3[1] = v24[1];
      v48 = &v24[v26];
      v38 = a3 + 2;
      do
      {
        *v38++ = v24[2];
        ++v24;
      }
      while ( v48 != v24 );
      a3 = &v37[v26];
      v4 = v23;
      while ( 1 )
      {
        if ( v20 != -1 )
          goto LABEL_23;
LABEL_7:
        v6 = *(v4 - 2) & 3;
        v43 = v4 - 2;
        if ( (*(v4 - 2) & 3) == 0 )
        {
          Size = 0;
          goto LABEL_23;
        }
        Size = *(v4 - 2) & 3;
        v13 = a3;
LABEL_9:
        a3 = &v13[v6];
        v14 = v4;
        v15 = v13;
        do
          *v15++ = *v14++;
        while ( v15 != a3 );
        v16 = v6 - 1;
        v50 = &v4[v6 - 1];
        v17 = &v4[v6];
        v18 = v50 + 2;
        if ( v45 <= (unsigned int)(v50 + 2) || v54 < a3 )
          goto LABEL_104;
        v6 = *v17;
        if ( *v17 > 0xFu )
          goto LABEL_31;
        v19 = (v6 >> 2) + 4 * v17[1];
        v20 = -v19;
        v21 = &v13[v16 - v19];
        if ( v43 == nullptr || (*v17 & 3) != 0 )
          goto LABEL_97;
        if ( Size != 1 || v17[2] <= 0xFu )
          break;
        *v43 |= 3u;
        v22 = *v21;
        *v17 = *v21;
        if ( v19 != 0 )
        {
          v17[1] = v21[1];
          v20 = 0;
        }
        else
        {
          v17[1] = v22;
        }
        Size = 3;
LABEL_21:
        v4 = v17 + 2;
        *a3 = *v21;
        a3[1] = v21[1];
        a3 += 2;
      }
      v6 = v17[2];
      if ( (unsigned __int8)(v6 - 1) <= 0xEu )
      {
        v49 = v6 + Size;
        if ( v6 + Size + 2 <= 0xF )
        {
          *v43 &= 0xFCu;
          v39 = *v21;
          v50[2] = *v21;
          if ( v20 != 0 )
            v39 = v21[1];
          v50[3] = v39;
          v4 = v43 + 2;
          if ( Size != 0 )
          {
            v53 = a3;
            memmove(v43 + 3, v43 + 2, Size);
            a3 = v53;
          }
          v18 = v17 + 3;
          Size = v49 + 5;
          v43[2] = v49 + 2;
          *a3 = *v21;
          a3[1] = v21[1];
          a3 += 2;
          continue;
        }
      }
LABEL_97:
      v20 = -1;
      goto LABEL_21;
    }
    if ( Size != 0 || (*(v23 - 2) & 3) != 0 )
    {
      if ( Size > 3 || (*(v23 - 2) & 3) != 0 )
        goto LABEL_84;
    }
    else if ( *v23 > 0xFu )
    {
      *v43 |= 3u;
      v34 = *v24;
      *(v23 - 3) = *v24;
      if ( a3 - v24 == 1 )
      {
        *(v23 - 2) = v34;
      }
      else
      {
        *(v23 - 2) = v24[1];
        if ( a3 - v24 == 2 )
          v34 = *v24;
        else
          v34 = v24[2];
      }
      *(v23 - 1) = v34;
      v20 = 0;
      Size = 3;
      goto LABEL_85;
    }
    v6 = *v23;
    if ( (unsigned __int8)(v6 - 1) > 0xEu )
      goto LABEL_84;
    v35 = v6 + Size;
    if ( v6 + Size + 3 > 0xF )
      goto LABEL_84;
    *v43 &= 0xFCu;
    v36 = *v24;
    *(v23 - 2) = *v24;
    if ( a3 - v24 == 1 )
    {
      *(v23 - 1) = v36;
    }
    else
    {
      *(v23 - 1) = v24[1];
      if ( a3 - v24 == 2 )
        v36 = *v24;
      else
        v36 = v24[2];
    }
    *v23 = v36;
    v4 = v43 + 2;
    if ( Size != 0 )
    {
      v52 = a3;
      memmove(v43 + 3, v43 + 2, Size);
      a3 = v52;
      v35 = v6 + Size;
    }
    v18 = v23 + 1;
    Size = v35 + 6;
    v43[2] = v35 + 3;
    *a3 = *v24;
    a3[1] = v24[1];
    a3[2] = v24[2];
LABEL_83:
    a3 += 3;
  }
  v26 = v6 & 7;
  if ( (v6 & 7) == 0 )
  {
    for ( k = 7; ; k += 255 )
    {
      v31 = *v18++;
      if ( (_BYTE)v31 != 0 )
        break;
    }
    v26 = v31 + k;
  }
  v23 = v18 + 2;
  v32 = (v18[1] << 6) + (((_WORD)v6 << 11) & 0x4000) + (*v18 >> 2);
  if ( a3 != &a3[-v32] )
  {
    v24 = &a3[-v32 - 0x4000];
    goto LABEL_60;
  }
  *a4 = a3 - v44;
  result = 0;
  if ( (unsigned __int8 *)v45 != v23 )
    return (unsigned int)v23 < v45 ? -8 : -4;
  return result;
}

