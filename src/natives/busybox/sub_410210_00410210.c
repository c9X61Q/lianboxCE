// busybox.exe @ 0x410210 size=392

int *__cdecl sub_410210(int a1, int a2)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  int *v6; // eax
  unsigned int *v7; // eax
  unsigned int *i; // edx
  unsigned int v9; // edx
  unsigned int v10; // esi
  unsigned int *v11; // ebp
  unsigned __int64 v12; // rax
  int j; // eax
  unsigned int v15; // [esp+14h] [ebp-48h]
  unsigned int v16; // [esp+18h] [ebp-44h]
  unsigned int v17; // [esp+1Ch] [ebp-40h]
  unsigned int v18; // [esp+20h] [ebp-3Ch]
  unsigned int *v19; // [esp+24h] [ebp-38h]
  unsigned int v20; // [esp+28h] [ebp-34h]
  int v21; // [esp+2Ch] [ebp-30h]
  int *v22; // [esp+34h] [ebp-28h]
  unsigned int v23; // [esp+38h] [ebp-24h]
  unsigned int *v24; // [esp+3Ch] [ebp-20h]

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 16);
  if ( v4 >= v5 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    v4 = *(_DWORD *)(a2 + 16);
    v3 = a1;
    v2 = a2;
  }
  v21 = v5 + v4;
  v6 = sub_40FFB0(*(_DWORD *)(v3 + 4) + (*(_DWORD *)(v3 + 8) < v5 + v4));
  v22 = v6;
  if ( v6 != nullptr )
  {
    v7 = (unsigned int *)(v6 + 5);
    v24 = v7;
    for ( i = &v7[v21]; i > v7; ++v7 )
      *v7 = 0;
    v18 = v3 + 20 + 4 * v5;
    v16 = v2 + 20;
    v20 = v2 + 20 + 4 * v4;
    if ( v2 + 20 < v20 )
    {
      v9 = 4;
      if ( v18 >= v3 + 21 )
        v9 = 4 * ((unsigned int)(4 * v5 - 1) >> 2) + 4;
      v23 = v9;
      v19 = v24;
      do
      {
        while ( 1 )
        {
          v16 += 4;
          if ( *(_DWORD *)(v16 - 4) != 0 )
            break;
          ++v19;
          if ( v20 <= v16 )
            goto LABEL_15;
        }
        v17 = *(_DWORD *)(v16 - 4);
        v10 = 0;
        v15 = v3 + 20;
        v11 = v19;
        do
        {
          v15 += 4;
          v12 = v10 + *v11++ + *(unsigned int *)(v15 - 4) * (unsigned __int64)v17;
          v10 = HIDWORD(v12);
          *(v11 - 1) = v12;
        }
        while ( v18 > v15 );
        LODWORD(v12) = v19++;
        *(_DWORD *)(v12 + v23) = HIDWORD(v12);
      }
      while ( v20 > v16 );
    }
LABEL_15:
    if ( v21 > 0 )
    {
      for ( j = v21; j != 0; --j )
      {
        if ( v24[j - 1] != 0 )
          break;
      }
      v21 = j;
    }
    v22[4] = v21;
  }
  return v22;
}

