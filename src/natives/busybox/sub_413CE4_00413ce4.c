// busybox.exe @ 0x413ce4 size=354

int __usercall sub_413CE4@<eax>(int a1@<eax>, unsigned int *a2@<edx>)
{
  int i; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int *v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // esi
  int v12; // ebp
  unsigned int v13; // esi
  int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  int v19; // [esp+4h] [ebp-28h]
  int v20; // [esp+8h] [ebp-24h]
  unsigned int v21; // [esp+Ch] [ebp-20h]
  int v22; // [esp+10h] [ebp-1Ch]
  int v23; // [esp+14h] [ebp-18h]

  v20 = *(_DWORD *)(a1 + 240);
  v19 = a1;
  v23 = v20;
  while ( 1 )
  {
    a2 = (unsigned int *)sub_411AE8((int)a2, v19);
    for ( i = 0; i != 16; ++i )
      a2[i] = (unsigned __int8)byte_483B60[a2[i]];
    v19 += 16;
    v4 = a2[1];
    a2[1] = a2[5];
    a2[5] = a2[9];
    a2[9] = a2[13];
    a2[13] = v4;
    v5 = a2[2];
    a2[2] = a2[10];
    a2[10] = v5;
    v6 = a2[6];
    a2[6] = a2[14];
    a2[14] = v6;
    v7 = a2[15];
    a2[15] = a2[11];
    a2[11] = a2[7];
    a2[7] = a2[3];
    a2[3] = v7;
    if ( --v23 == 0 )
      break;
    v8 = a2;
    do
    {
      v9 = v8[2];
      v10 = v8[3];
      v11 = 2 * v8[1];
      v12 = v9 ^ v8[1] ^ (2 * *v8);
      v21 = v11 ^ v10 ^ v12;
      v22 = 2 * v9;
      v13 = (2 * v9) ^ v11 ^ v10 ^ *v8 ^ v9;
      v14 = 2 * v10;
      v15 = (2 * v10) ^ v22 ^ v8[1] ^ *v8 ^ v10;
      v16 = v14 ^ *v8 ^ v12;
      *v8 = -(v21 >> 8) & 0x11B ^ v21;
      v8[1] = v13 ^ -(v13 >> 8) & 0x11B;
      v8[2] = -(v15 >> 8) & 0x11B ^ v15;
      v8[3] = v16 ^ -(v16 >> 8) & 0x11B;
      v8 += 4;
    }
    while ( a2 + 16 != v8 );
  }
  return sub_411AE8((int)a2, a1 + 16 * v20);
}

