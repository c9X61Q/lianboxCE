// busybox.exe @ 0x440fb8 size=993

_DWORD *__usercall sub_440FB8@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebp
  int v4; // eax
  _DWORD *result; // eax
  int v6; // edx
  int v7; // ebx
  unsigned int v8; // esi
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // cl
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  _DWORD *v17; // eax
  int *v18; // edx
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // ebx
  int v29; // edx
  int v30; // esi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edx
  int v37; // ecx
  signed int v38; // [esp+4h] [ebp-4F4h]
  int v39; // [esp+8h] [ebp-4F0h]
  int v40; // [esp+Ch] [ebp-4ECh]
  int v41; // [esp+10h] [ebp-4E8h]
  int i; // [esp+14h] [ebp-4E4h]
  signed int j; // [esp+14h] [ebp-4E4h]
  int v45; // [esp+1Ch] [ebp-4DCh]
  int v46; // [esp+1Ch] [ebp-4DCh]
  int v47; // [esp+1Ch] [ebp-4DCh]
  int v48; // [esp+20h] [ebp-4D8h]
  int v49; // [esp+20h] [ebp-4D8h]
  int v50; // [esp+20h] [ebp-4D8h]
  int v51; // [esp+24h] [ebp-4D4h]
  int v52; // [esp+28h] [ebp-4D0h]
  int v53; // [esp+30h] [ebp-4C8h]
  unsigned int v54; // [esp+34h] [ebp-4C4h]
  _DWORD v55[100]; // [esp+38h] [ebp-4C0h]
  _DWORD v56[100]; // [esp+1C8h] [ebp-330h]
  _DWORD v57[104]; // [esp+358h] [ebp-1A0h]

  v3 = a1[7];
  v51 = a1[8];
  v55[0] = a2;
  v56[0] = a3;
  v57[0] = 2;
  for ( i = 1; ; i = v41 )
  {
    v41 = i - 1;
    v39 = v55[i - 1];
    v38 = v56[i - 1];
    v40 = v57[i - 1];
    v4 = v38 - v39;
    if ( v40 > 14 || v4 <= 19 )
      break;
    v10 = *(unsigned __int8 *)(v40 + v51 + *(_DWORD *)(v3 + 4 * v38));
    v11 = v55[i - 1];
    v12 = *(_BYTE *)(*(_DWORD *)(v3 + 4 * v39) + v40 + v51);
    if ( (unsigned __int8)v10 < v12 )
    {
      v12 = *(_BYTE *)(v40 + v51 + *(_DWORD *)(v3 + 4 * v38));
      v10 = *(unsigned __int8 *)(*(_DWORD *)(v3 + 4 * v39) + v40 + v51);
    }
    v13 = *(_BYTE *)(*(_DWORD *)(v3 + 4 * ((v38 + v39) >> 1)) + v40 + v51);
    if ( v13 < (unsigned __int8)v10 )
    {
      v10 = v13;
      if ( v13 < v12 )
        v10 = v12;
    }
    v49 = v10;
    v46 = v56[i - 1];
    v14 = v55[i - 1];
    v15 = v46;
    v52 = v40 + v51;
    while ( v11 <= v15 )
    {
      v16 = *(_DWORD *)(v3 + 4 * v11);
      if ( *(unsigned __int8 *)(v52 + v16) == v49 )
      {
        v17 = (_DWORD *)(v3 + 4 * v14);
        *(_DWORD *)(v3 + 4 * v11) = *v17;
        *v17 = v16;
        ++v14;
        goto LABEL_30;
      }
      if ( *(unsigned __int8 *)(v52 + v16) - v49 > 0 )
      {
        while ( 1 )
        {
          v18 = (int *)(v3 + 4 * v15);
          v19 = *v18;
          v20 = *(unsigned __int8 *)(v52 + *v18);
          --v15;
          if ( v20 == v49 )
          {
            v21 = (_DWORD *)(v3 + 4 * v46);
            *(_DWORD *)(v3 + 4 * v15 + 4) = *v21;
            *v21 = v19;
            --v46;
          }
          else if ( v20 - v49 < 0 )
          {
            v37 = *(_DWORD *)(v3 + 4 * v11);
            *(_DWORD *)(v3 + 4 * v11) = v19;
            *v18 = v37;
            break;
          }
          if ( v11 > v15 )
            goto LABEL_38;
        }
      }
LABEL_30:
      ++v11;
    }
LABEL_38:
    v50 = v40 + 1;
    if ( v14 <= v46 )
    {
      v23 = v11 - v14;
      if ( v11 - v14 > v14 - v39 )
        v23 = v14 - v39;
      sub_445BE8(v23);
      v24 = v46 - v15;
      v25 = v38 - v46;
      if ( v38 - v46 > v24 )
        v25 = v24;
      sub_445BE8(v25);
      v26 = v11 + v39 - v14;
      v27 = v26 - 1;
      v28 = v38 - v24;
      v29 = v28 + 1;
      if ( v11 - v14 - 1 < v38 - (v28 + 1) )
      {
        v27 = v38;
        v38 = v26 - 1;
        v30 = v39;
        v39 = v28 + 1;
        v29 = v30;
      }
      v47 = v40;
      if ( v38 - v29 < v28 - v26 )
      {
        v47 = v40 + 1;
        v50 = v40;
        v31 = v38;
        v38 = v28;
        v28 = v31;
        v32 = v29;
        v29 = v26;
        v26 = v32;
      }
      if ( v27 - v39 < v38 - v29 )
      {
        v33 = v40;
        v40 = v47;
        v47 = v33;
        v34 = v27;
        v27 = v38;
        v38 = v34;
        v35 = v39;
        v39 = v29;
        v29 = v35;
      }
      v55[v41] = v39;
      v56[v41] = v27;
      v57[v41] = v40;
      v55[i] = v29;
      v56[i] = v38;
      v57[i] = v47;
      v36 = i + 1;
      v55[v36] = v26;
      v56[v36] = v28;
      v57[v36] = v50;
      v22 = i + 2;
    }
    else
    {
      v57[v41] = v50;
      v22 = i;
    }
    v41 = v22;
LABEL_53:
    ;
  }
  if ( v4 > 0 )
  {
    v6 = 0;
    do
      v7 = v6++;
    while ( dword_480004[v7] <= (unsigned int)v4 );
    v45 = a1[7];
    do
    {
      v48 = dword_480000[v7];
      for ( j = v48 + v39; ; ++j )
      {
        v8 = j;
        if ( v38 < j )
          break;
        v53 = *(_DWORD *)(v45 + 4 * j);
        v9 = (_DWORD *)(v45 + 4 * j);
        while ( 1 )
        {
          v54 = v8;
          v8 -= v48;
          if ( !sub_440DEC(a1, v9[-v48] + v40, v40 + v53) )
            break;
          *v9 = v9[-v48];
          v9 -= v48;
          if ( v48 + v39 - 1 >= v8 )
            goto LABEL_17;
        }
        v8 = v54;
LABEL_17:
        *(_DWORD *)(v45 + 4 * v8) = v53;
        result = a1;
        if ( (int)a1[6] < 0 )
          return result;
      }
      --v7;
    }
    while ( v7 != -1 );
  }
  result = a1;
  if ( (int)a1[6] >= 0 && v41 != 0 )
    goto LABEL_53;
  return result;
}

