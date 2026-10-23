// busybox.exe @ 0x468670 size=1250

__int64 __usercall sub_468670@<edx:eax>(int a1@<eax>, int a2@<ecx>)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  bool v6; // zf
  const char *v7; // eax
  CHAR v8; // al
  unsigned __int8 v9; // cl
  int v10; // ebx
  int j; // eax
  const char *v12; // eax
  int v13; // eax
  _BYTE *v14; // eax
  int v15; // edx
  _BYTE *v16; // esi
  signed int v17; // ecx
  int v19; // [esp+8h] [ebp-6Ch]
  int v20; // [esp+Ch] [ebp-68h]
  int v21; // [esp+10h] [ebp-64h]
  _BYTE *v22; // [esp+14h] [ebp-60h]
  char v23; // [esp+18h] [ebp-5Ch]
  char *v24; // [esp+1Ch] [ebp-58h]
  char v25; // [esp+22h] [ebp-52h]
  char v26; // [esp+23h] [ebp-51h]
  unsigned __int16 *v27; // [esp+24h] [ebp-50h]
  int v28; // [esp+28h] [ebp-4Ch]
  int v29; // [esp+2Ch] [ebp-48h]
  int v31; // [esp+34h] [ebp-40h]
  _BYTE *v32; // [esp+38h] [ebp-3Ch]
  signed int v33; // [esp+3Ch] [ebp-38h]
  __int64 v34; // [esp+40h] [ebp-34h]
  int v35; // [esp+48h] [ebp-2Ch]
  CHAR *Block; // [esp+4Ch] [ebp-28h]
  int i; // [esp+50h] [ebp-24h]
  int v38; // [esp+54h] [ebp-20h]
  int v39; // [esp+58h] [ebp-1Ch]
  signed int v40; // [esp+5Ch] [ebp-18h]
  _BYTE *v41; // [esp+60h] [ebp-14h]
  int v42; // [esp+64h] [ebp-10h]

  if ( sub_41C4B4((_BYTE *)a1, 40223, a2) != 0 )
    return -1;
  Block = (CHAR *)sub_4728CC(v2);
  v32 = (_BYTE *)sub_4728CC(v3);
  v41 = (_BYTE *)sub_4728CC(v4);
  v27 = (unsigned __int16 *)sub_4728CC(v5);
  v6 = sub_432664(1, Block) == 1;
  v7 = "short read";
  if ( !v6 )
    goto LABEL_32;
  v8 = *Block;
  v9 = *Block & 0x1F;
  v20 = v9;
  if ( v9 > 0x10u )
  {
    sub_41783C("compressed with %d bits, can only handle 16 bits", *Block & 0x1F);
    goto LABEL_5;
  }
  v40 = ((unsigned int)v8 >> 31) + 256;
  for ( i = 255; i != -1; --i )
    v41[i] = i;
  v19 = 1 << v9;
  v31 = 0;
  v39 = 0;
  v10 = 0;
  v42 = 0;
  v23 = 0;
  v38 = 9;
  v28 = 511;
  v29 = 511;
  v34 = 0;
  v25 = (unsigned __int8)v8 >> 7;
LABEL_9:
  while ( 2 )
  {
    v39 -= v42 >> 3;
    for ( j = 0; j < v39; ++j )
      Block[j] = Block[(v42 >> 3) + j];
    if ( v39 <= 63 )
    {
      v31 = sub_45C560(2048, &Block[v39], *(_DWORD *)(a1 + 12));
      if ( v31 < 0 )
      {
        v12 = "read error";
        goto LABEL_27;
      }
      v39 += v31;
    }
    if ( v31 != 0 )
      v21 = 8 * (v39 - v39 % v38);
    else
      v21 = 8 * v39 - (v38 - 1);
    v42 = 0;
    while ( 1 )
    {
      if ( v42 >= v21 )
      {
        if ( v31 != 0 )
          goto LABEL_9;
        if ( v10 > 0 )
        {
          sub_471CAC(v10, v32);
          v34 += v10;
        }
        goto LABEL_58;
      }
      if ( v40 > v28 )
      {
        v29 = (1 << (v38 + 1)) - 1;
        v28 = v29;
        if ( v20 == v38 + 1 )
          v28 = v19;
        v42 = v42 - 1 + 8 * v38 - (v42 - 1 + 8 * v38) % (8 * v38);
        ++v38;
        goto LABEL_9;
      }
      v13 = v29
          & (((unsigned __int8)Block[v42 >> 3]
            | ((unsigned __int8)Block[(v42 >> 3) + 2] << 16)
            | ((unsigned __int8)Block[(v42 >> 3) + 1] << 8)) >> (v42 & 7));
      v35 = v13;
      v42 += v38;
      if ( i != -1 )
        break;
      if ( v13 > 255 )
      {
LABEL_26:
        v12 = "corrupted data";
LABEL_27:
        sub_418210(v12);
      }
      v32[v10++] = v13;
      v23 = v13;
LABEL_21:
      i = v35;
    }
    if ( v13 == 256 && v25 != 0 )
    {
      memset(v27, 0, 0x100u);
      v42 = 8 * v38 - (v42 - 1 + 8 * v38) % (8 * v38) + v42 - 1;
      v38 = 9;
      v28 = 511;
      v40 = 256;
      v29 = 511;
      continue;
    }
    break;
  }
  v22 = v41 + 0x1FFFF;
  if ( v40 > v13 )
  {
    v15 = v13;
    v14 = v41 + 0x1FFFF;
LABEL_42:
    while ( 1 )
    {
      v16 = v14 - 1;
      if ( v15 <= 255 )
        break;
      if ( v14 <= v41 )
        goto LABEL_26;
      --v14;
      *v16 = v41[v15];
      v15 = v27[v15];
    }
    v26 = v41[v15];
    v23 = v26;
    v24 = v14 - 1;
    *(v14 - 1) = v26;
    v17 = v22 - v16;
    if ( v10 + v22 - v16 <= 2047 )
    {
      qmemcpy(&v32[v10], v16, v17);
      v10 += v22 - v16;
    }
    else
    {
      do
      {
        v33 = 2048 - v10;
        if ( 2048 - v10 > v17 )
          v33 = v17;
        if ( v33 > 0 )
        {
          qmemcpy(&v32[v10], v24, v33);
          v10 += v33;
        }
        if ( v10 > 2047 )
        {
          sub_471CAC(v10, v32);
          v34 += v10;
          v10 = 0;
        }
        v24 += v33;
        v17 = v22 - v24;
      }
      while ( v22 - v24 > 0 );
    }
    if ( v40 < v19 )
    {
      v27[v40] = i;
      v41[v40++] = v26;
    }
    goto LABEL_21;
  }
  if ( v40 >= v13 )
  {
    v14 = v41 + 131070;
    v41[131070] = v23;
    v15 = i;
    goto LABEL_42;
  }
  v7 = "corrupted data";
LABEL_32:
  sub_4181F8(v7);
LABEL_5:
  v34 = -1;
LABEL_58:
  free(Block);
  free(v32);
  free(v41);
  free(v27);
  return v34;
}

