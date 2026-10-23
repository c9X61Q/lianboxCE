// busybox.exe @ 0x4106b0 size=562

int *__cdecl sub_4106B0(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ebx
  int v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int *v8; // eax
  int v9; // ebp
  int v10; // edx
  int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // edx
  int v17; // ebp
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // edi
  int v21; // ecx
  char *v22; // eax
  char *v23; // esi
  unsigned int *v24; // ecx
  char *v25; // ebx
  int v26; // esi
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  char *v29; // eax
  int v31; // [esp+18h] [ebp-44h]
  int v32; // [esp+18h] [ebp-44h]
  int *v33; // [esp+24h] [ebp-38h]
  char *v34; // [esp+24h] [ebp-38h]
  unsigned int v35; // [esp+28h] [ebp-34h]
  unsigned int *v36; // [esp+28h] [ebp-34h]
  int *v37; // [esp+2Ch] [ebp-30h]
  unsigned int v38; // [esp+30h] [ebp-2Ch]
  int v39; // [esp+34h] [ebp-28h]
  int *v40; // [esp+38h] [ebp-24h]
  int v41; // [esp+3Ch] [ebp-20h]

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 16);
  v4 = *(_DWORD *)(a1 + 16) - v3;
  if ( v4 != 0 )
  {
    v4 = 0;
    if ( *(_DWORD *)(a1 + 16) - v3 < 0 )
    {
LABEL_23:
      v4 = 1;
      v2 = a2;
      a2 = a1;
    }
LABEL_6:
    v8 = sub_40FFB0(*(_DWORD *)(v2 + 4));
    v37 = v8;
    if ( v8 != nullptr )
    {
      v9 = *(_DWORD *)(v2 + 16);
      v10 = v2 + 20;
      v8[3] = v4;
      v11 = 0;
      v39 = v10;
      v31 = v10;
      v38 = v10 + 4 * v9;
      v41 = v9;
      v12 = a2 + 20;
      v35 = a2 + 20 + 4 * *(_DWORD *)(a2 + 16);
      v40 = v8 + 5;
      v33 = v8 + 5;
      do
      {
        v31 += 4;
        v12 += 4;
        v13 = *(unsigned int *)(v12 - 4);
        v14 = *(unsigned int *)(v31 - 4) - (unsigned __int64)(unsigned int)v11 - v13;
        LODWORD(v13) = *(_DWORD *)(v31 - 4) - v11 - v13;
        v15 = __PAIR64__(HIDWORD(v14), (unsigned int)++v33) & 0x1FFFFFFFFLL;
        v11 = HIDWORD(v15);
        *(_DWORD *)(v15 - 4) = v13;
        v16 = v13;
      }
      while ( v35 > v12 );
      v32 = v11;
      v17 = v41;
      v18 = v35 - a2 - 21;
      v19 = v18 & 0xFFFFFFFC;
      v20 = v18 >> 2;
      if ( v35 < a2 + 21 )
        v19 = 0;
      v21 = 4 * v20 + 4;
      v22 = (char *)v40 + v19;
      if ( v35 < a2 + 21 )
        v21 = 4;
      v34 = (char *)v40 + v21;
      v23 = (char *)v40 + v21;
      v24 = (unsigned int *)(v21 + v39);
      v36 = v24;
      if ( v38 > (unsigned int)v24 )
      {
        v25 = v23;
        v26 = v32;
        do
        {
          v27 = *v24++;
          v28 = v27 - (unsigned __int64)(unsigned int)v26;
          v25 += 4;
          v26 = BYTE4(v28) & 1;
          v16 = v28;
          *((_DWORD *)v25 - 1) = v28;
        }
        while ( v38 > (unsigned int)v24 );
        v17 = v41;
        v22 = &v34[(v38 - 1 - (_DWORD)v36) & 0xFFFFFFFC];
      }
      if ( v16 == 0 )
      {
        v29 = &v22[-4 * v17];
        do
          --v17;
        while ( *(_DWORD *)&v29[4 * v17] == 0 );
      }
      v37[4] = v17;
    }
    return v37;
  }
  else
  {
    v5 = 4 * v3;
    v6 = (_DWORD *)(a1 + 20 + 4 * v3);
    v7 = (_DWORD *)(a2 + v5 + 20);
    do
    {
      if ( *--v6 != *--v7 )
      {
        if ( *v6 < *v7 )
          goto LABEL_23;
        goto LABEL_6;
      }
    }
    while ( a1 + 20 < (unsigned int)v6 );
    v37 = sub_40FFB0(0);
    if ( v37 == nullptr )
      return v37;
    v37[4] = 1;
    v37[5] = 0;
    return v37;
  }
}

