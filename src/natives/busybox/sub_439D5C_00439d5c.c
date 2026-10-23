// busybox.exe @ 0x439d5c size=1303

int __usercall sub_439D5C@<eax>(int a1@<eax>, _BYTE *a2@<edx>)
{
  int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // edx
  unsigned __int8 v9; // al
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // esi
  unsigned int v13; // eax
  int v14; // edx
  int v15; // ecx
  int i; // eax
  int j; // eax
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // edi
  int v25; // esi
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // ebp
  unsigned int v29; // edi
  unsigned int v30; // esi
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // [esp+8h] [ebp-524h]
  unsigned int v42; // [esp+Ch] [ebp-520h]
  unsigned int v43; // [esp+10h] [ebp-51Ch]
  int v44; // [esp+14h] [ebp-518h]
  unsigned int v45; // [esp+18h] [ebp-514h] BYREF
  int v46; // [esp+1Ch] [ebp-510h] BYREF
  unsigned int v47; // [esp+20h] [ebp-50Ch] BYREF
  unsigned int v48; // [esp+24h] [ebp-508h] BYREF
  unsigned int v49; // [esp+28h] [ebp-504h] BYREF
  _DWORD v50[320]; // [esp+2Ch] [ebp-500h] BYREF

  v4 = *(_DWORD *)(a1 + 28);
  v45 = *(unsigned __int8 *)(a1 + 32);
  v5 = sub_42F8EC((_DWORD *)a1, v4, &v45, 1u);
  *a2 = v5 & 1;
  --v45;
  v6 = sub_42F8EC((_DWORD *)a1, v5 >> 1, &v45, 2u);
  v7 = v6 & 3;
  v8 = v6 >> 2;
  v45 -= 2;
  v9 = v45;
  *(_DWORD *)(a1 + 28) = v8;
  *(_BYTE *)(a1 + 32) = v9;
  if ( v7 == 2 )
  {
    v49 = v9;
    v21 = sub_42F8EC((_DWORD *)a1, v8, &v49, 5u);
    v42 = (v21 & 0x1F) + 257;
    v49 -= 5;
    v22 = sub_42F8EC((_DWORD *)a1, v21 >> 5, &v49, 5u);
    v43 = (v22 & 0x1F) + 1;
    v49 -= 5;
    v23 = sub_42F8EC((_DWORD *)a1, v22 >> 5, &v49, 4u);
    v49 -= 4;
    if ( v43 > 0x1E )
      goto LABEL_45;
    if ( v42 > 0x11E )
      goto LABEL_45;
    v41 = v23 >> 4;
    v24 = 0;
    v25 = v23 & 0xF;
    do
    {
      v26 = sub_42F8EC((_DWORD *)a1, v41, &v49, 3u);
      v50[(unsigned __int8)byte_47E014[v24]] = v26 & 7;
      v41 = v26 >> 3;
      v49 -= 3;
      ++v24;
    }
    while ( v25 + 4 > v24 );
    while ( ++v25 != 16 )
      v50[(unsigned __int8)byte_47E017[v25]] = 0;
    v47 = 7;
    v27 = sub_439000((int)v50, 0x13u, 0x13u, 0, &v47);
    *(_DWORD *)(a1 + 76) = v27;
    if ( (v27 & 1) != 0 )
      goto LABEL_45;
    v28 = v43 + v42;
    v44 = (unsigned __int16)word_48037C[v47];
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = sub_42F8EC((_DWORD *)a1, v41, &v49, v47);
      v32 = *(_DWORD *)(a1 + 76) + 8 * (v31 & v44);
      v33 = *(unsigned __int8 *)(v32 + 1);
      v41 = v31 >> v33;
      v49 -= v33;
      v34 = *(_DWORD *)(v32 + 4);
      if ( v34 > 0xF )
      {
        if ( v34 == 16 )
        {
          v35 = sub_42F8EC((_DWORD *)a1, v41, &v49, 2u);
          v49 -= 2;
          v32 = v30 + (v35 & 3) + 3;
          if ( v32 > v28 )
            goto LABEL_45;
          while ( v32 != v30 )
            v50[v30++] = v29;
          v41 = v35 >> 2;
        }
        else
        {
          if ( v34 == 17 )
          {
            v36 = sub_42F8EC((_DWORD *)a1, v41, &v49, 3u);
            v49 -= 3;
            v32 = v30 + (v36 & 7) + 3;
            if ( v32 > v28 )
              goto LABEL_45;
            while ( v32 != v30 )
              v50[v30++] = 0;
            v37 = v36 >> 3;
          }
          else
          {
            v38 = sub_42F8EC((_DWORD *)a1, v41, &v49, 7u);
            v49 -= 7;
            v32 = v30 + (v38 & 0x7F) + 11;
            if ( v32 > v28 )
              goto LABEL_45;
            while ( v32 != v30 )
              v50[v30++] = 0;
            v37 = v38 >> 7;
          }
          v41 = v37;
          v29 = 0;
        }
      }
      else
      {
        v50[v30] = v34;
        v29 = v34;
        ++v30;
      }
    }
    while ( v30 < v28 );
    sub_43942C(*(_DWORD *)(a1 + 76), (void *)v32);
    *(_DWORD *)(a1 + 28) = v41;
    *(_BYTE *)(a1 + 32) = v49;
    v47 = 9;
    v39 = sub_439000((int)v50, v42, 0x101u, (int)&unk_4802E0, &v47);
    *(_DWORD *)(a1 + 76) = v39;
    if ( (v39 & 1) != 0
      || (v48 = 6,
          v40 = sub_439000((int)&v50[v42], v43, 0, (int)&unk_47F840, &v48),
          *(_DWORD *)(a1 + 80) = v40,
          (v40 & 1) != 0) )
    {
LABEL_45:
      sub_412BD8((_DWORD *)a1);
    }
    v19 = v48;
    v20 = v47;
    goto LABEL_44;
  }
  if ( v7 == 3 )
    goto LABEL_45;
  if ( v7 != 0 )
  {
    if ( v7 != 1 )
      goto LABEL_45;
    for ( i = 0; i != 144; ++i )
      v50[i] = 8;
    do
      v50[i++] = 9;
    while ( i != 256 );
    do
      v50[i++] = 7;
    while ( i != 280 );
    v50[280] = 8;
    v50[281] = 8;
    v50[282] = 8;
    v50[283] = 8;
    v50[284] = 8;
    v50[285] = 8;
    v50[286] = 8;
    v50[287] = 8;
    v48 = 7;
    *(_DWORD *)(a1 + 76) = sub_439000((int)v50, 0x120u, 0x101u, (int)&unk_4802E0, &v48);
    for ( j = 0; j != 30; ++j )
      v50[j] = 5;
    v49 = 5;
    *(_DWORD *)(a1 + 80) = sub_439000((int)v50, 0x1Eu, 0, (int)&unk_47F840, &v49) & 0xFFFFFFFE;
    v19 = v49;
    v20 = v48;
LABEL_44:
    *(_DWORD *)(a1 + 84) = v20;
    *(_DWORD *)(a1 + 88) = v19;
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 68) = *(unsigned __int8 *)(a1 + 32);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 56) = (unsigned __int16)word_48037C[v20];
    *(_DWORD *)(a1 + 60) = (unsigned __int16)word_48037C[v19];
    return -2;
  }
  v10 = v9 & 7;
  v46 = v9 - v10;
  v11 = sub_42F8EC((_DWORD *)a1, v8 >> v10, (unsigned int *)&v46, 0x10u);
  v12 = (unsigned __int16)v11;
  v46 -= 16;
  v13 = sub_42F8EC((_DWORD *)a1, HIWORD(v11), (unsigned int *)&v46, 0x10u);
  v14 = (unsigned __int16)~(_WORD)v13;
  if ( v14 != v12 )
    goto LABEL_45;
  v15 = v46 - 16;
  *(_DWORD *)(a1 + 104) = v14;
  *(_DWORD *)(a1 + 108) = HIWORD(v13);
  *(_DWORD *)(a1 + 112) = v15;
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 16);
  return -1;
}

