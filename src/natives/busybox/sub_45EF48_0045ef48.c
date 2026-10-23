// busybox.exe @ 0x45ef48 size=356

_DWORD *__usercall sub_45EF48@<eax>(_DWORD *result@<eax>)
{
  int i; // edx
  unsigned __int32 v2; // ecx
  int v3; // ebx
  int v4; // edx
  int v5; // esi
  int j; // edi
  int v7; // ecx
  int v8; // ebp
  int v9; // ecx
  int v10; // [esp+0h] [ebp-C0h]
  int v11; // [esp+4h] [ebp-BCh]
  int v12; // [esp+8h] [ebp-B8h]
  int v13; // [esp+Ch] [ebp-B4h]
  int v14; // [esp+10h] [ebp-B0h]
  int v15; // [esp+14h] [ebp-ACh]
  int v16; // [esp+18h] [ebp-A8h]
  int v17; // [esp+1Ch] [ebp-A4h]
  int v18; // [esp+20h] [ebp-A0h]
  int v19; // [esp+24h] [ebp-9Ch]
  int v20; // [esp+28h] [ebp-98h]
  int v21; // [esp+2Ch] [ebp-94h]
  _DWORD v22[36]; // [esp+30h] [ebp-90h]

  for ( i = 0; i != 16; ++i )
  {
    v2 = _byteswap_ulong(result[i]);
    v22[i + 16] = v2;
    v22[i] = v2;
  }
  v16 = result[20];
  v17 = result[21];
  v18 = result[22];
  v19 = result[23];
  v20 = result[24];
  v3 = v20;
  v12 = v19;
  v4 = v18;
  v11 = v17;
  v13 = v16;
  v5 = 0;
  for ( j = 0; j != 4; ++j )
  {
    v21 = dword_483A40[j];
    v15 = v3;
    v3 = v12;
    v12 = v4;
    v10 = v11;
    v11 = v13;
    v14 = 19;
    while ( 1 )
    {
      v7 = v3 ^ v4;
      v8 = v22[v5];
      if ( j != 0 )
      {
        v9 = v10 ^ v7;
        if ( j == 2 )
          v9 = v10 & v4 | v3 & (v4 | v10);
LABEL_10:
        v8 = __ROL4__(v22[v5 + 2] ^ v22[v5 + 8] ^ v22[v5 + 13] ^ v8, 1);
        v22[v5 + 16] = v8;
        v22[v5] = v8;
        goto LABEL_11;
      }
      v9 = v3 ^ v10 & v7;
      if ( v14 <= 3 )
        goto LABEL_10;
LABEL_11:
      v13 = v15 + v8 + v9 + v21 + __ROL4__(v13, 5);
      v4 = __ROR4__(v10, 2);
      v5 = ((_BYTE)v5 + 1) & 0xF;
      --v14;
      v10 = v11;
      v15 = v3;
      if ( v14 == -1 )
        break;
      v3 = v12;
      v12 = v4;
      v11 = v13;
    }
  }
  result[20] = v13 + v16;
  result[21] = v17 + v11;
  result[22] = v18 + v4;
  result[23] = v19 + v12;
  result[24] = v20 + v3;
  return result;
}

