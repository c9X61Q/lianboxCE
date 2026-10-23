// busybox.exe @ 0x40ac20 size=395

_DWORD *__cdecl sub_40AC20(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  unsigned int *v4; // ebp
  _DWORD *v5; // eax
  int v6; // edi
  unsigned int v7; // ecx
  unsigned int *v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edi
  unsigned int *v16; // ebx
  unsigned int i; // edx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  _DWORD *v22; // ebx
  unsigned int v23; // [esp+18h] [ebp-34h]
  _DWORD *v24; // [esp+1Ch] [ebp-30h]
  int v25; // [esp+20h] [ebp-2Ch]
  int v26; // [esp+24h] [ebp-28h]
  _DWORD *v27; // [esp+28h] [ebp-24h]
  _DWORD *v28; // [esp+2Ch] [ebp-20h]

  v2 = a2;
  v3 = a1;
  if ( a1[4] < a2[4] )
  {
    v3 = a2;
    v2 = a1;
  }
  v4 = v3 + 5;
  v5 = (_DWORD *)sub_40FFB0(v3[1]);
  v6 = v3[4];
  v27 = v3 + 5;
  v7 = (unsigned int)(v5 + 5);
  v24 = v5;
  v5[4] = v6;
  v28 = v5 + 5;
  v26 = v2[4];
  v23 = (unsigned int)&v5[v26 + 5];
  v25 = v6;
  v8 = v2 + 5;
  v9 = 0;
  do
  {
    v10 = *v4;
    v11 = *v8;
    ++v4;
    ++v8;
    v7 += 4;
    v12 = v9 + (unsigned __int16)v10 + (unsigned __int16)v11;
    *(_WORD *)(v7 - 4) = v12;
    v13 = HIWORD(v12) + HIWORD(v11) + HIWORD(v10);
    *(_WORD *)(v7 - 2) = v13;
    v9 = HIWORD(v13);
  }
  while ( v23 > v7 );
  v14 = 4 * ((v23 - (unsigned int)v24 - 21) >> 2) + 4;
  if ( v23 < (unsigned int)v24 + 21 )
    v14 = 4;
  v15 = v23 + 4 * (v25 - v26);
  v16 = (_DWORD *)((char *)v27 + v14);
  for ( i = (unsigned int)v28 + v14; v15 > i; v9 = HIWORD(v20) )
  {
    v18 = *v16;
    i += 4;
    ++v16;
    v19 = v9 + (unsigned __int16)v18;
    *(_WORD *)(i - 4) = v19;
    v20 = HIWORD(v19) + HIWORD(v18);
    *(_WORD *)(i - 2) = v20;
  }
  if ( v9 != 0 )
  {
    if ( v25 == v24[2] )
    {
      v22 = (_DWORD *)sub_40FFB0(v24[1] + 1);
      memcpy(v22 + 3, v24 + 3, 4 * v24[4] + 8);
      sub_4100A0(v24);
      v24 = v22;
      v25 = v22[4];
    }
    v24[4] = v25 + 1;
    v24[v25 + 5] = 1;
  }
  return v24;
}

