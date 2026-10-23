// busybox.exe @ 0x413910 size=862

int __userpurge sub_413910@<eax>(int a1@<eax>, __int128 *a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  __int128 *i; // eax
  int result; // eax
  int j; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int *v13; // ebx
  int *v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // esi
  __int16 v19; // bp
  __int16 v20; // di
  int k; // eax
  int v22; // [esp+0h] [ebp-B8h]
  __int128 *v23; // [esp+14h] [ebp-A4h]
  __int128 *v24; // [esp+18h] [ebp-A0h]
  int v25; // [esp+1Ch] [ebp-9Ch]
  int v26; // [esp+20h] [ebp-98h]
  int v27; // [esp+24h] [ebp-94h]
  __int16 v28; // [esp+2Ch] [ebp-8Ch]
  __int128 v31; // [esp+48h] [ebp-70h] BYREF
  char v32; // [esp+58h] [ebp-60h] BYREF
  int v33; // [esp+68h] [ebp-50h] BYREF
  int v34; // [esp+6Ch] [ebp-4Ch]
  int v35; // [esp+70h] [ebp-48h]
  int v36; // [esp+74h] [ebp-44h]
  int v37; // [esp+7Ch] [ebp-3Ch]
  int v38; // [esp+80h] [ebp-38h]
  int v39; // [esp+84h] [ebp-34h]
  int v40; // [esp+8Ch] [ebp-2Ch]
  int v41; // [esp+90h] [ebp-28h]
  int v42; // [esp+94h] [ebp-24h]
  int v43; // [esp+9Ch] [ebp-1Ch]
  int v44; // [esp+A0h] [ebp-18h]
  int v45; // [esp+A4h] [ebp-14h]
  _BYTE v46[16]; // [esp+A8h] [ebp-10h] BYREF

  v31 = *a2;
  v22 = a4;
  for ( i = &v31; ; i = v24 )
  {
    v23 = i;
    result = a4 + a5 - v22;
    if ( v22 == 0 )
      break;
    v24 = (__int128 *)&v32;
    if ( v23 != &v31 )
      v24 = &v31;
    for ( j = 0; j != 16; ++j )
    {
      v8 = *(unsigned __int8 *)(a4 + a3 - v22 + j);
      *(&v33 + j) = v8;
      *((_BYTE *)v24 + j) = v8;
    }
    v26 = *(_DWORD *)(a1 + 240);
    v25 = a1 + 16 * v26;
    sub_411AE8((int)&v33, v25);
    while ( 1 )
    {
      v9 = v43;
      v43 = v40;
      v40 = v37;
      v37 = v34;
      v34 = v9;
      v10 = v35;
      v35 = v41;
      v41 = v10;
      v11 = v38;
      v38 = v44;
      v44 = v11;
      v12 = v36;
      v36 = v39;
      v39 = v42;
      v42 = v45;
      v45 = v12;
      v13 = &v33;
      v14 = &v33;
      do
      {
        *v14 = (unsigned __int8)byte_483A60[*v14];
        ++v14;
      }
      while ( v46 != (_BYTE *)v14 );
      v25 -= 16;
      sub_411AE8((int)&v33, v25);
      if ( --v26 == 0 )
        break;
      do
      {
        v15 = *v13;
        v16 = v13[1];
        v17 = v13[2];
        v18 = v13[3];
        v27 = 4 * *v13;
        v28 = (8 * v18) ^ (8 * v17) ^ (4 * v17) ^ (8 * v16) ^ (2 * v16) ^ (8 * v15) ^ v17 ^ v16 ^ v18 ^ v27 ^ (2 * v15);
        v19 = (4 * v18)
            ^ (2 * v17)
            ^ (4 * v16)
            ^ (8 * v18)
            ^ (8 * v17)
            ^ (8 * v16)
            ^ (8 * v15)
            ^ v18
            ^ v15
            ^ v17
            ^ (2 * v16);
        v20 = (2 * v18) ^ (8 * v18) ^ (8 * v17) ^ (4 * v17) ^ (8 * v16) ^ (8 * v15) ^ v27 ^ v18 ^ v15 ^ v16 ^ (2 * v17);
        LOWORD(v17) = (4 * v18)
                    ^ (4 * v16)
                    ^ (8 * v18)
                    ^ (8 * v17)
                    ^ (8 * v16)
                    ^ (8 * v15)
                    ^ v17
                    ^ v16
                    ^ (2 * v15)
                    ^ v15
                    ^ (2 * v18);
        *v13 = (unsigned __int8)((16 * HIBYTE(v28)) ^ HIBYTE(v28) ^ v28 ^ (2 * HIBYTE(v28)) ^ (8 * HIBYTE(v28)));
        v13[1] = (unsigned __int8)((16 * HIBYTE(v19)) ^ (8 * HIBYTE(v19)) ^ (2 * HIBYTE(v19)) ^ HIBYTE(v19) ^ v19);
        v13[2] = (unsigned __int8)((16 * HIBYTE(v20)) ^ (8 * HIBYTE(v20)) ^ (2 * HIBYTE(v20)) ^ HIBYTE(v20) ^ v20);
        v13[3] = (unsigned __int8)((16 * BYTE1(v17)) ^ (8 * BYTE1(v17)) ^ (2 * BYTE1(v17)) ^ BYTE1(v17) ^ v17);
        v13 += 4;
      }
      while ( v46 != (_BYTE *)v13 );
    }
    for ( k = 0; k != 16; ++k )
      *(_BYTE *)(a4 + a5 - v22 + k) = *((_BYTE *)v23 + k) ^ *(&v33 + k);
    v22 -= 16;
  }
  return result;
}

