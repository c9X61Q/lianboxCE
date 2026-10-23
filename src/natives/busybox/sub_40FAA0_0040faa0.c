// busybox.exe @ 0x40faa0 size=1003

int __cdecl sub_40FAA0(unsigned __int8 **a1, int *a2, int *a3)
{
  int *v3; // edx
  unsigned __int8 *v4; // ebx
  unsigned int v5; // eax
  unsigned __int8 v6; // dl
  unsigned int v7; // edx
  unsigned __int8 *v8; // eax
  int *v9; // ebp
  int v10; // edi
  int *v11; // esi
  char v12; // cl
  int v13; // edx
  int *v14; // edx
  char v15; // bl
  int v16; // eax
  char v17; // di
  char v18; // bp
  unsigned int v19; // ebx
  int *v20; // edi
  int *v21; // esi
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // eax
  int *v25; // eax
  int v26; // ecx
  char i; // dl
  int v29; // edx
  int *v30; // ebx
  unsigned int v31; // eax
  int v32; // edx
  unsigned int v33; // eax
  int v34; // [esp+0h] [ebp-3Ch]
  int *v35; // [esp+4h] [ebp-38h]
  char v36; // [esp+4h] [ebp-38h]
  int v37; // [esp+8h] [ebp-34h]
  int *v38; // [esp+Ch] [ebp-30h]
  int *v39; // [esp+10h] [ebp-2Ch]
  unsigned __int8 *v40; // [esp+14h] [ebp-28h]
  int v41; // [esp+1Ch] [ebp-20h]

  if ( byte_485B10 == 0 )
    sub_40FA20();
  v41 = *a2 & 0x1F;
  v3 = &a3[*a2 >> 5];
  if ( v41 != 0 )
  {
    v38 = &a3[*a2 >> 5];
    v39 = v3 + 1;
  }
  else
  {
    v39 = &a3[*a2 >> 5];
    v38 = v3 - 1;
  }
  *(v39 - 1) = 0;
  v4 = *a1;
  v5 = (*a1)[1];
  v6 = (*a1)[1];
  if ( v6 == 0 )
    return 4;
  while ( v5 <= 0x20 )
  {
    v5 = v4[2];
    ++v4;
    v6 = v5;
    if ( v5 == 0 )
      return 4;
  }
  if ( v6 == 48 && (v4[2] & 0xDF) == 0x58 && (unsigned __int8)(v7 = v4[3]) > 0x20u )
  {
    v8 = v4 + 3;
    v4 += 2;
  }
  else
  {
    v7 = v4[1];
    v8 = v4 + 1;
    if ( v4[1] == 0 )
      return 4;
  }
  v9 = v38;
  v37 = 0;
  v10 = 0;
  v34 = 0;
  v11 = v38;
  do
  {
    while ( 1 )
    {
      v12 = byte_485AE0[v7];
      if ( v12 != 0 )
        break;
      if ( v7 > 0x20 )
      {
        if ( v7 == 41 && v34 != 0 )
        {
          *a1 = v4 + 2;
          goto LABEL_25;
        }
        while ( 1 )
        {
          ++v8;
          if ( v7 == 41 )
            break;
          v7 = (char)*v8;
          if ( *v8 == 0 )
            return 4;
        }
        *a1 = v8;
        return 4;
      }
      if ( v34 <= v37 )
      {
LABEL_52:
        for ( i = v8[1]; (unsigned __int8)i <= 0x20u; ++v8 )
          i = v8[2];
        if ( i != 48 )
          goto LABEL_23;
        if ( (v8[2] & 0xDF) != 0x58 )
          goto LABEL_23;
        v7 = v8[3];
        if ( (unsigned __int8)v7 <= 0x20u )
          goto LABEL_23;
        v4 = v8 + 2;
        v8 += 3;
      }
      else
      {
        if ( v9 < v11 && v10 <= 7 )
        {
          v40 = v8;
          v29 = *v9;
          v30 = v9;
          v36 = 4 * (8 - v10);
          do
          {
            v31 = v30[1];
            ++v30;
            v32 = (v31 << (32 - v36)) | v29;
            v33 = v31 >> v36;
            *(v30 - 1) = v32;
            *v30 = v33;
            v29 = v33;
          }
          while ( v30 < v11 );
          v8 = v40;
        }
        if ( v9 > a3 )
        {
          v11 = v9 - 1;
          *--v9 = 0;
          v37 = v34;
          v10 = 0;
          goto LABEL_52;
        }
        v7 = v8[1];
        v4 = v8;
        v10 = 8;
        ++v8;
        if ( v7 == 0 )
          goto LABEL_24;
      }
    }
    ++v10;
    ++v34;
    if ( v10 <= 8 )
    {
      v13 = 16 * *v9;
LABEL_22:
      *v9 = v13 | v12 & 0xF;
      goto LABEL_23;
    }
    if ( v9 > a3 )
    {
      *(v9 - 1) = 0;
      v13 = 0;
      --v9;
      v10 = 1;
      goto LABEL_22;
    }
LABEL_23:
    v7 = v8[1];
    v4 = v8++;
  }
  while ( v7 != 0 );
LABEL_24:
  if ( v34 == 0 )
    return 4;
LABEL_25:
  if ( v11 > v9 && v10 <= 7 )
  {
    v14 = v9;
    v35 = v9;
    v15 = 4 * (8 - v10);
    v16 = *v9;
    v17 = 32 - v15;
    v18 = v15;
    do
    {
      v19 = v14[1];
      *v14++ = (v19 << v17) | v16;
      v16 = v19 >> v18;
      *v14 = v19 >> v18;
    }
    while ( v14 < v11 );
    v9 = v35;
  }
  if ( a3 >= v9 )
  {
    v24 = *(v39 - 1);
    if ( v41 != 0 )
    {
      v24 &= 0xFFFFFFFF >> (32 - v41);
      *(v39 - 1) = v24;
    }
  }
  else
  {
    v20 = a3;
    v21 = v9;
    do
      *v20++ = *v21++;
    while ( v38 >= v21 );
    v22 = 4 * ((unsigned int)((char *)v38 - (char *)v9) >> 2) + 4;
    if ( (char *)v38 + 1 < (char *)v9 + 1 )
      v22 = 4;
    v23 = (unsigned int)a3 + v22;
    do
    {
      v23 += 4;
      *(_DWORD *)(v23 - 4) = 0;
    }
    while ( (unsigned int)v38 >= v23 );
    v24 = *(v39 - 1);
  }
  if ( v24 != 0 )
    return 5;
  if ( v38 != a3 )
  {
    v25 = v38;
    while ( 1 )
    {
      v26 = *--v25;
      if ( v26 != 0 )
        return 5;
      if ( a3 == v25 )
      {
        v38 = v25;
        break;
      }
    }
  }
  *v38 = 1;
  return 5;
}

