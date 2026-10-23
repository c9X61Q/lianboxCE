// busybox.exe @ 0x410520 size=316

int *__cdecl sub_410520(int *a1, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // ebp
  int v5; // eax
  int *v6; // eax
  int *v7; // edi
  int *v8; // edx
  int *v9; // eax
  int *v10; // esi
  unsigned int v11; // edx
  char v12; // cl
  int *v13; // ebx
  unsigned int v14; // eax
  int v15; // edi
  unsigned int v16; // ecx
  _DWORD *v18; // edi
  _DWORD *v19; // esi
  int *v20; // [esp+1Ch] [ebp-30h]
  int v21; // [esp+20h] [ebp-2Ch]
  int *v22; // [esp+28h] [ebp-24h]

  v2 = a1[1];
  v3 = a2 >> 5;
  v21 = (a2 >> 5) + a1[4];
  v4 = v21 + 1;
  v5 = a1[2];
  if ( v21 + 1 > v5 )
  {
    do
    {
      v5 *= 2;
      ++v2;
    }
    while ( v4 > v5 );
  }
  v6 = sub_40FFB0(v2);
  v20 = v6;
  if ( v6 != nullptr )
  {
    v7 = v6 + 5;
    if ( v3 > 0 )
    {
      v8 = &v6[v3 + 5];
      v9 = v6 + 5;
      do
        *v9++ = 0;
      while ( v9 != v8 );
      v7 += v3;
    }
    v10 = a1 + 5;
    v11 = (unsigned int)&a1[a1[4] + 5];
    v12 = a2 & 0x1F;
    if ( (a2 & 0x1F) != 0 )
    {
      v22 = v7;
      v13 = v7;
      v14 = 0;
      do
      {
        v15 = *v10;
        ++v13;
        ++v10;
        *(v13 - 1) = (v15 << v12) | v14;
        v14 = (unsigned int)*(v10 - 1) >> (32 - v12);
      }
      while ( v11 > (unsigned int)v10 );
      v16 = 4 * ((v11 - (unsigned int)a1 - 21) >> 2) + 4;
      if ( v11 < (unsigned int)a1 + 21 )
        v16 = 4;
      if ( v14 == 0 )
        v4 = v21;
      *(int *)((char *)v22 + v16) = v14;
      v21 = v4;
    }
    else
    {
      do
      {
        *v7 = *v10;
        v19 = v10 + 1;
        v18 = v7 + 1;
        if ( v11 <= (unsigned int)v19 )
          break;
        *v18 = *v19;
        v10 = v19 + 1;
        v7 = v18 + 1;
      }
      while ( v11 > (unsigned int)v10 );
    }
    v20[4] = v21;
    sub_4100A0(a1);
  }
  return v20;
}

