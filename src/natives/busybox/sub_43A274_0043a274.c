// busybox.exe @ 0x43a274 size=632

int __usercall sub_43A274@<eax>(int a1@<eax>)
{
  int v2; // eax
  unsigned __int8 *i; // ebp
  unsigned int v4; // esi
  int v5; // eax
  int v6; // edx
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned __int8 *j; // ebp
  unsigned int v18; // esi
  int v19; // eax
  int v20; // edx
  unsigned int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned int v27; // edx
  unsigned int v28; // edi
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // ebp
  unsigned int v32; // eax
  int v33; // ebp
  int v34; // esi
  int v35; // edx
  int v36; // eax
  void *v38; // edx

  if ( *(_BYTE *)(a1 + 100) == 0 )
    goto LABEL_2;
  do
  {
LABEL_16:
    v26 = *(_DWORD *)(a1 + 96) & 0x7FFF;
    *(_DWORD *)(a1 + 96) = v26;
    v27 = *(_DWORD *)(a1 + 72);
    v28 = v26 - v27;
    if ( v26 < v27 )
      v28 = v27 - v26;
    v29 = *(_DWORD *)(a1 + 92);
    v30 = v26;
    if ( v26 < v27 )
      v30 = *(_DWORD *)(a1 + 72);
    v31 = 0x8000 - v30;
    v32 = *(_DWORD *)(a1 + 92);
    if ( v29 > v31 )
      v32 = v31;
    *(_DWORD *)(a1 + 92) = v29 - v32;
    if ( v28 < v32 )
    {
      do
      {
        v33 = *(_DWORD *)(a1 + 20);
        v34 = *(_DWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 96) = v34 + 1;
        v35 = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 72) = v35 + 1;
        *(_BYTE *)(v33 + v35) = *(_BYTE *)(v33 + v34);
        --v32;
      }
      while ( v32 != 0 );
    }
    else
    {
      qmemcpy((void *)(*(_DWORD *)(a1 + 20) + v27), (const void *)(*(_DWORD *)(a1 + 20) + v26), v32);
      *(_DWORD *)(a1 + 72) += v32;
      *(_DWORD *)(a1 + 96) += v32;
    }
    v36 = *(_DWORD *)(a1 + 92);
    if ( *(_DWORD *)(a1 + 72) == 0x8000 )
    {
      *(_DWORD *)(a1 + 16) = 0x8000;
      *(_BYTE *)(a1 + 100) = v36 != 0;
LABEL_27:
      *(_DWORD *)(a1 + 72) = 0;
      return 1;
    }
  }
  while ( v36 != 0 );
  *(_BYTE *)(a1 + 100) = 0;
LABEL_2:
  while ( 1 )
  {
    v2 = sub_42F8EC((_DWORD *)a1, *(_DWORD *)(a1 + 64), (unsigned int *)(a1 + 68), *(_DWORD *)(a1 + 84));
    *(_DWORD *)(a1 + 64) = v2;
    for ( i = (unsigned __int8 *)(*(_DWORD *)(a1 + 76) + 8 * (*(_DWORD *)(a1 + 56) & v2));
          ;
          i = (unsigned __int8 *)(*((_DWORD *)i + 1) + 8 * (unsigned __int16)(v8 & word_48037C[v7])) )
    {
      v4 = *i;
      if ( v4 <= 0x10 )
        break;
      if ( v4 == 99 )
        goto LABEL_5;
      v5 = i[1];
      v6 = *(_DWORD *)(a1 + 64) >> i[1];
      *(_DWORD *)(a1 + 64) = v6;
      *(_DWORD *)(a1 + 68) -= v5;
      v7 = v4 - 16;
      v8 = sub_42F8EC((_DWORD *)a1, v6, (unsigned int *)(a1 + 68), v7);
      *(_DWORD *)(a1 + 64) = v8;
    }
    v9 = i[1];
    v10 = *(_DWORD *)(a1 + 64) >> i[1];
    *(_DWORD *)(a1 + 64) = v10;
    v11 = *(_DWORD *)(a1 + 68) - v9;
    *(_DWORD *)(a1 + 68) = v11;
    if ( v4 != 16 )
      break;
    v12 = *((_DWORD *)i + 1);
    v13 = *(_DWORD *)(a1 + 20);
    v14 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 72) = v14 + 1;
    *(_BYTE *)(v13 + v14) = v12;
    if ( *(_DWORD *)(a1 + 72) == 0x8000 )
    {
      *(_DWORD *)(a1 + 16) = 0x8000;
      goto LABEL_27;
    }
  }
  if ( v4 != 15 )
  {
    v15 = sub_42F8EC((_DWORD *)a1, v10, (unsigned int *)(a1 + 68), v4);
    *(_DWORD *)(a1 + 92) = *((_DWORD *)i + 1) + (v15 & (unsigned __int16)word_48037C[v4]);
    *(_DWORD *)(a1 + 64) = v15 >> v4;
    *(_DWORD *)(a1 + 68) -= v4;
    v16 = sub_42F8EC((_DWORD *)a1, v15 >> v4, (unsigned int *)(a1 + 68), *(_DWORD *)(a1 + 88));
    *(_DWORD *)(a1 + 64) = v16;
    for ( j = (unsigned __int8 *)(*(_DWORD *)(a1 + 80) + 8 * (*(_DWORD *)(a1 + 60) & v16));
          ;
          j = (unsigned __int8 *)(*((_DWORD *)j + 1) + 8 * (unsigned __int16)(v22 & word_48037C[v21])) )
    {
      v18 = *j;
      if ( v18 <= 0x10 )
      {
        v23 = j[1];
        v24 = *(_DWORD *)(a1 + 64) >> j[1];
        *(_DWORD *)(a1 + 64) = v24;
        *(_DWORD *)(a1 + 68) -= v23;
        v25 = sub_42F8EC((_DWORD *)a1, v24, (unsigned int *)(a1 + 68), v18);
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 72) - *((_DWORD *)j + 1) - (v25 & (unsigned __int16)word_48037C[v18]);
        *(_DWORD *)(a1 + 64) = v25 >> v18;
        *(_DWORD *)(a1 + 68) -= v18;
        goto LABEL_16;
      }
      if ( v18 == 99 )
        break;
      v19 = j[1];
      v20 = *(_DWORD *)(a1 + 64) >> j[1];
      *(_DWORD *)(a1 + 64) = v20;
      *(_DWORD *)(a1 + 68) -= v19;
      v21 = v18 - 16;
      v22 = sub_42F8EC((_DWORD *)a1, v20, (unsigned int *)(a1 + 68), v21);
      *(_DWORD *)(a1 + 64) = v22;
    }
LABEL_5:
    sub_412BD8((_DWORD *)a1);
  }
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 28) = v10;
  *(_BYTE *)(a1 + 32) = v11;
  sub_43942C(*(_DWORD *)(a1 + 76), (void *)v10);
  sub_43942C(*(_DWORD *)(a1 + 80), v38);
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  return 0;
}

