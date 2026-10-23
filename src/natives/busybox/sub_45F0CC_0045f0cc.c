// busybox.exe @ 0x45f0cc size=442

_DWORD *__usercall sub_45F0CC@<eax>(_DWORD *result@<eax>)
{
  int i; // edx
  char *v2; // edx
  int v3; // ecx
  int v4; // ebx
  int v5; // ebp
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // [esp+0h] [ebp-148h]
  int v10; // [esp+4h] [ebp-144h]
  int v11; // [esp+8h] [ebp-140h]
  int v12; // [esp+Ch] [ebp-13Ch]
  int v13; // [esp+10h] [ebp-138h]
  int v14; // [esp+18h] [ebp-130h]
  int v15; // [esp+1Ch] [ebp-12Ch]
  int v16; // [esp+20h] [ebp-128h]
  int v17; // [esp+24h] [ebp-124h]
  int v18; // [esp+28h] [ebp-120h]
  int v19; // [esp+2Ch] [ebp-11Ch]
  int v20; // [esp+30h] [ebp-118h]
  int v21; // [esp+34h] [ebp-114h]
  _DWORD v22[48]; // [esp+38h] [ebp-110h] BYREF
  char v23; // [esp+F8h] [ebp-50h] BYREF

  for ( i = 0; i != 16; ++i )
    v22[i] = _byteswap_ulong(result[i]);
  v2 = (char *)v22;
  do
  {
    *((_DWORD *)v2 + 16) = ((*((_DWORD *)v2 + 1) >> 3)
                          ^ __ROL4__(*((_DWORD *)v2 + 1), 14)
                          ^ __ROR4__(*((_DWORD *)v2 + 1), 7))
                         + *((_DWORD *)v2 + 9)
                         + *(_DWORD *)v2
                         + ((*((_DWORD *)v2 + 14) >> 10)
                          ^ __ROL4__(*((_DWORD *)v2 + 14), 13)
                          ^ __ROL4__(*((_DWORD *)v2 + 14), 15));
    v2 += 4;
  }
  while ( &v23 != v2 );
  v14 = result[21];
  v15 = result[22];
  v16 = result[23];
  v17 = result[24];
  v18 = result[25];
  v19 = result[26];
  v20 = result[27];
  v13 = v20;
  v12 = v19;
  v11 = v18;
  v3 = v17;
  v21 = v16;
  v10 = v15;
  v9 = v14;
  v4 = result[20];
  v5 = 0;
  while ( 1 )
  {
    v6 = v13
       + v22[v5]
       + dword_483CE4[2 * v5]
       + (__ROL4__(v3, 7) ^ __ROR4__(v3, 6) ^ __ROR4__(v3, 11))
       + (v3 & v11 ^ v12 & ~v3);
    v7 = v6 + v21;
    v8 = v6 + (__ROL4__(v4, 10) ^ __ROR4__(v4, 13) ^ __ROR4__(v4, 2)) + (v10 & v9 ^ v4 & (v10 ^ v9));
    ++v5;
    v21 = v10;
    v13 = v12;
    if ( v5 == 64 )
      break;
    v12 = v11;
    v11 = v3;
    v3 = v7;
    v10 = v9;
    v9 = v4;
    v4 = v8;
  }
  result[20] += v8;
  result[21] = v14 + v4;
  result[22] = v9 + v15;
  result[23] = v10 + v16;
  result[24] = v17 + v7;
  result[25] = v18 + v3;
  result[26] = v11 + v19;
  result[27] = v12 + v20;
  return result;
}

