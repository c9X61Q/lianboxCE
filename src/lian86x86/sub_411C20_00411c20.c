// lian86.exe @ 0x00411c20  size=1043  name=sub_411C20
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

unsigned __int8 *__cdecl sub_411C20(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // ebx
  unsigned __int8 *v3; // edx
  unsigned __int8 *v4; // esi
  unsigned int v5; // ebp
  unsigned int v6; // edi
  unsigned int v7; // ebx
  char v8; // dl
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned __int8 *v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edx
  char v16; // cl
  unsigned __int8 *v17; // eax
  int v18; // eax
  _BYTE *v19; // eax
  unsigned int v20; // ecx
  unsigned __int8 *v21; // eax
  unsigned __int8 *v22; // edi
  unsigned __int8 *v23; // edi
  unsigned __int8 v24; // al
  unsigned int v25; // ecx
  int v26; // edi
  unsigned int v27; // ecx
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  unsigned int v30; // edx
  unsigned __int8 v31; // al
  unsigned __int8 *v32; // ebx
  unsigned __int8 *v33; // ecx
  unsigned __int8 v34; // al
  bool v35; // zf
  unsigned __int8 *v36; // edx
  unsigned int v37; // ebp
  unsigned __int8 *v39; // [esp+10h] [ebp-38h]
  unsigned __int8 *v40; // [esp+14h] [ebp-34h]
  int v41; // [esp+18h] [ebp-30h]
  unsigned __int8 *v42; // [esp+1Ch] [ebp-2Ch]
  unsigned __int8 *v43; // [esp+20h] [ebp-28h]
  unsigned int v44; // [esp+24h] [ebp-24h]
  int v45; // [esp+28h] [ebp-20h]
  int v46; // [esp+2Ch] [ebp-1Ch]
  int v47; // [esp+30h] [ebp-18h]
  unsigned int v48; // [esp+34h] [ebp-14h]
  unsigned int v49; // [esp+38h] [ebp-10h]
  int v50; // [esp+3Ch] [ebp-Ch]
  unsigned __int8 *v51; // [esp+40h] [ebp-8h]
  unsigned int v52; // [esp+44h] [ebp-4h]
  unsigned int v53; // [esp+50h] [ebp+8h]
  unsigned int v54; // [esp+50h] [ebp+8h]
  unsigned int v55; // [esp+50h] [ebp+8h]

  v2 = a1[7];
  v3 = *a1;
  v4 = a1[3];
  v49 = (unsigned int)&a1[1][(_DWORD)*a1 - 5];
  v5 = *((_DWORD *)v2 + 16);
  v40 = &a1[4][(_DWORD)v4 - 257];
  v47 = *((_DWORD *)v2 + 11);
  v52 = *((_DWORD *)v2 + 12);
  v48 = *((_DWORD *)v2 + 13);
  v43 = *((unsigned __int8 **)v2 + 14);
  v45 = *((_DWORD *)v2 + 20);
  v46 = *((_DWORD *)v2 + 21);
  v51 = &a1[4][(_DWORD)v4 - a2];
  v41 = (1 << *((_DWORD *)v2 + 22)) - 1;
  v42 = v2;
  v6 = *((_DWORD *)v2 + 15);
  v39 = *a1;
  v50 = (1 << *((_DWORD *)v2 + 23)) - 1;
  do
  {
    if ( v5 < 0xF )
    {
      v6 += (v3[1] << (v5 + 8)) + (*v3 << v5);
      v39 = v3 + 2;
      v5 += 16;
    }
    v7 = *(_DWORD *)(v45 + 4 * (v6 & v41));
    v6 >>= SBYTE1(v7);
    v5 -= BYTE1(v7);
    v8 = v7;
    if ( (_BYTE)v7 == 0 )
    {
LABEL_8:
      *v4++ = BYTE2(v7);
      goto LABEL_48;
    }
    while ( (v8 & 0x10) == 0 )
    {
      if ( (v8 & 0x40) != 0 )
      {
        v21 = v42;
        v35 = (v8 & 0x20) == 0;
        v32 = v40;
        v3 = v39;
        if ( !v35 )
        {
          *((_DWORD *)v42 + 1) = 16191;
          goto LABEL_63;
        }
        a1[6] = "invalid literal/length code";
        goto LABEL_62;
      }
      v7 = *(_DWORD *)(v45 + 4 * (HIWORD(v7) + (v6 & ((1 << v8) - 1))));
      v6 >>= SBYTE1(v7);
      v5 -= BYTE1(v7);
      v8 = v7;
      if ( (_BYTE)v7 == 0 )
        goto LABEL_8;
    }
    v9 = HIWORD(v7);
    v10 = v8 & 0xF;
    if ( v10 != 0 )
    {
      if ( v5 < v10 )
      {
        v11 = v39++;
        v6 += *v11 << v5;
        v5 += 8;
      }
      v12 = v6 & ((1 << v10) - 1);
      v6 >>= v10;
      v9 += v12;
      v5 -= v10;
    }
    if ( v5 < 0xF )
    {
      v6 += (v39[1] << (v5 + 8)) + (*v39 << v5);
      v39 += 2;
      v5 += 16;
    }
    v13 = *(_DWORD *)(v46 + 4 * (v6 & v50)) >> 8;
    v53 = *(_DWORD *)(v46 + 4 * (v6 & v50));
    v5 -= (unsigned __int8)v13;
    LOBYTE(v14) = v53;
    v6 >>= v13;
    if ( (v53 & 0x10) == 0 )
    {
      while ( (v14 & 0x40) == 0 )
      {
        v14 = *(_DWORD *)(v46 + 4 * (HIWORD(v53) + (v6 & ((1 << v14) - 1))));
        v53 = v14;
        v5 -= BYTE1(v14);
        v6 >>= SBYTE1(v14);
        if ( (v14 & 0x10) != 0 )
          goto LABEL_18;
      }
      v21 = v42;
      a1[6] = "invalid distance code";
      goto LABEL_61;
    }
LABEL_18:
    v54 = HIWORD(v53);
    v15 = v14 & 0xF;
    if ( v5 < v15 )
    {
      v16 = v5;
      v5 += 8;
      v6 += *v39 << v16;
      v17 = ++v39;
      if ( v5 < v15 )
      {
        ++v39;
        v6 += *v17 << v5;
        v5 += 8;
      }
    }
    v5 -= v15;
    v18 = v6 & ((1 << v15) - 1);
    v6 >>= v15;
    v55 = v18 + v54;
    v19 = (_BYTE *)(v4 - v51);
    v44 = v6;
    if ( v55 > v4 - v51 )
    {
      v20 = v55 - (_DWORD)v19;
      if ( v55 - (unsigned int)v19 > v52 )
      {
        v21 = v42;
        if ( *((_DWORD *)v42 + 1777) != 0 )
        {
          a1[6] = "invalid distance too far back";
LABEL_61:
          v32 = v40;
          v3 = v39;
LABEL_62:
          *((_DWORD *)v21 + 1) = 16209;
          break;
        }
      }
      v22 = &v43[-v20];
      if ( v48 != 0 )
      {
        v23 = &v22[v48];
        if ( v48 < v20 )
        {
          v23 += v47;
          v25 = v20 - v48;
          if ( v25 >= v9 )
            goto LABEL_41;
          v9 -= v25;
          v26 = v23 - v4;
          do
          {
            *v4 = v4[v26];
            ++v4;
            --v25;
          }
          while ( v25 != 0 );
          v23 = v43;
          if ( v48 >= v9 )
            goto LABEL_41;
          v27 = v48;
          v9 -= v48;
          do
          {
            v28 = *v23++;
            *v4++ = v28;
            --v27;
          }
          while ( v27 != 0 );
          goto LABEL_40;
        }
        if ( v20 < v9 )
        {
          v9 -= v20;
          do
          {
            v29 = *v23++;
            *v4++ = v29;
            --v20;
          }
          while ( v20 != 0 );
          goto LABEL_40;
        }
      }
      else
      {
        v23 = &v22[v47];
        if ( v20 < v9 )
        {
          v9 -= v20;
          do
          {
            v24 = *v23++;
            *v4++ = v24;
            --v20;
          }
          while ( v20 != 0 );
LABEL_40:
          v23 = &v4[-v55];
        }
      }
LABEL_41:
      if ( v9 > 2 )
      {
        v30 = (v9 - 3) / 3 + 1;
        do
        {
          v9 -= 3;
          *v4 = *v23;
          v4[1] = v23[1];
          v31 = v23[2];
          v23 += 3;
          v4[2] = v31;
          v4 += 3;
          --v30;
        }
        while ( v30 != 0 );
      }
      if ( v9 != 0 )
      {
        *v4++ = *v23;
        if ( v9 > 1 )
          *v4++ = v23[1];
      }
      v6 = v44;
      goto LABEL_48;
    }
    v33 = &v4[-v55];
    do
    {
      v34 = *v33;
      v33 += 3;
      *v4 = v34;
      v9 -= 3;
      v4[1] = *(v33 - 2);
      v4[2] = *(v33 - 1);
      v4 += 3;
    }
    while ( v9 > 2 );
    if ( v9 != 0 )
    {
      *v4++ = *v33;
      if ( v9 > 1 )
        *v4++ = v33[1];
    }
LABEL_48:
    v3 = v39;
    v32 = v40;
  }
  while ( (unsigned int)v39 < v49 && v4 < v40 );
LABEL_63:
  v36 = &v3[-(v5 >> 3)];
  v37 = v5 - 8 * (v5 >> 3);
  a1[1] = (unsigned __int8 *)(v49 - (_DWORD)v36 + 5);
  a1[3] = v4;
  a1[4] = (unsigned __int8 *)(v32 - v4 + 257);
  *a1 = v36;
  *((_DWORD *)v42 + 15) = ((1 << v37) - 1) & v6;
  *((_DWORD *)v42 + 16) = v37;
  return v42;
}

