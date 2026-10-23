// busybox.exe @ 0x4425c0 size=747

_DWORD *__usercall sub_4425C0@<eax>(_DWORD *result@<eax>)
{
  int v1; // edx
  int v2; // ecx
  int i; // edi
  int v4; // esi
  int v5; // ebx
  int j; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int k; // ebx
  int v11; // esi
  int v12; // esi
  int m; // edi
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // [esp+0h] [ebp-28h]
  int v18; // [esp+4h] [ebp-24h]
  int v19; // [esp+Ch] [ebp-1Ch]
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]

  v19 = result[21];
  v20 = result[22];
  v21 = result[23];
  v1 = v21;
  v18 = v20;
  v2 = v19;
  v17 = result[20];
  for ( i = 0; i != 16; i += 4 )
  {
    v4 = __ROL4__(result[i] + dword_47D0E0[i] + (v1 ^ v2 & (v1 ^ v18)) + v17, 7);
    v17 = v2 + v4;
    v1 = v2 + v4 + __ROL4__((v18 ^ (v2 + v4) & (v2 ^ v18)) + result[i + 1] + dword_47D0E4[i] + v1, 12);
    v5 = __ROR4__(v18 + result[i + 2] + dword_47D0E8[i] + (v2 ^ v1 & (v2 ^ (v2 + v4))), 15);
    v18 = v5 + v1;
    v2 = v5 + v1 + __ROR4__((v17 ^ (v5 + v1) & (v1 ^ v17)) + result[i + 3] + dword_47D0EC[i] + v2, 10);
  }
  for ( j = 0; j != 16; j += 4 )
  {
    v7 = __ROL4__(v17 + result[(unsigned __int8)byte_47D3BC[j]] + dword_47D120[j] + (v18 ^ v1 & (v2 ^ v18)), 5);
    v17 = v7 + v2;
    v8 = __ROL4__(result[(unsigned __int8)byte_47D3BD[j]] + dword_47D124[j] + v1 + (v2 ^ v18 & (v2 ^ (v7 + v2))), 9);
    v1 = v8 + v17;
    v9 = __ROL4__(result[(unsigned __int8)byte_47D3BE[j]] + dword_47D128[j] + v18 + (v17 ^ v2 & ((v8 + v17) ^ v17)), 14);
    v18 = v9 + v1;
    v2 = __ROR4__(result[(unsigned __int8)byte_47D3BF[j]] + dword_47D12C[j] + v2 + (v1 ^ v17 & (v1 ^ (v9 + v1))), 12)
       + v9
       + v1;
  }
  for ( k = 0; k != 16; k += 4 )
  {
    v11 = __ROL4__(v17 + result[(unsigned __int8)byte_47D3CC[k]] + dword_47D160[k] + (v1 ^ v2 ^ v18), 4);
    v17 = v2 + v11;
    v1 = v2
       + v11
       + __ROL4__(((v2 + v11) ^ v2 ^ v18) + result[(unsigned __int8)byte_47D3CD[k]] + dword_47D164[k] + v1, 11);
    v12 = __ROL4__(result[(unsigned __int8)byte_47D3CE[k]] + dword_47D168[k] + v18 + (v1 ^ v2 ^ (v2 + v11)), 16);
    v18 = v1 + v12;
    v2 = v1
       + v12
       + __ROR4__(result[(unsigned __int8)byte_47D3CF[k]] + dword_47D16C[k] + v2 + ((v1 + v12) ^ v1 ^ v17), 9);
  }
  for ( m = 0; m != 16; m += 4 )
  {
    v14 = __ROL4__(v17 + result[(unsigned __int8)byte_47D3DC[m]] + dword_47D1A0[m] + (v18 ^ (v2 | ~v1)), 6);
    v17 = v14 + v2;
    v15 = __ROL4__(result[(unsigned __int8)byte_47D3DD[m]] + dword_47D1A4[m] + v1 + (v2 ^ ((v14 + v2) | ~v18)), 10);
    v1 = v15 + v17;
    v16 = __ROL4__(result[(unsigned __int8)byte_47D3DE[m]] + dword_47D1A8[m] + v18 + (v17 ^ ((v15 + v17) | ~v2)), 15);
    v18 = v1 + v16;
    v2 = __ROR4__(result[(unsigned __int8)byte_47D3DF[m]] + dword_47D1AC[m] + v2 + (v1 ^ ((v1 + v16) | ~v17)), 11)
       + v1
       + v16;
  }
  result[20] += v17;
  result[21] = v19 + v2;
  result[22] = v18 + v20;
  result[23] = v21 + v1;
  return result;
}

