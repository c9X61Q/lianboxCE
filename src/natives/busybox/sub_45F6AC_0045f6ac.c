// busybox.exe @ 0x45f6ac size=1068

unsigned __int64 __usercall sub_45F6AC@<edx:eax>(_QWORD *a1@<eax>)
{
  int i; // ebx
  unsigned __int64 v3; // rax
  char *v4; // esi
  unsigned int v5; // edx
  unsigned __int64 v6; // rt0
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v10; // [esp+8h] [ebp-304h]
  __int64 v11; // [esp+20h] [ebp-2ECh]
  __int64 v12; // [esp+28h] [ebp-2E4h]
  unsigned __int64 v13; // [esp+30h] [ebp-2DCh]
  unsigned __int64 v14; // [esp+38h] [ebp-2D4h]
  unsigned __int64 v15; // [esp+38h] [ebp-2D4h]
  unsigned __int64 v16; // [esp+40h] [ebp-2CCh]
  unsigned int v17; // [esp+48h] [ebp-2C4h]
  int v18; // [esp+48h] [ebp-2C4h]
  unsigned __int64 v19; // [esp+50h] [ebp-2BCh]
  unsigned __int64 v20; // [esp+58h] [ebp-2B4h]
  unsigned __int64 v21; // [esp+60h] [ebp-2ACh]
  unsigned __int64 v22; // [esp+68h] [ebp-2A4h]
  unsigned __int64 v23; // [esp+70h] [ebp-29Ch]
  unsigned __int64 v24; // [esp+78h] [ebp-294h]
  _DWORD v25[128]; // [esp+80h] [ebp-28Ch] BYREF
  char v26; // [esp+280h] [ebp-8Ch] BYREF

  v23 = a1[2];
  v22 = a1[3];
  v21 = a1[4];
  v16 = a1[5];
  v24 = a1[6];
  v20 = a1[7];
  v19 = a1[8];
  v14 = a1[9];
  for ( i = 0; i != 16; ++i )
  {
    v3 = sub_416E4C(a1[i + 10]);
    v25[2 * i] = v3;
    v25[2 * i + 1] = HIDWORD(v3);
  }
  v4 = (char *)v25;
  do
  {
    v5 = *((_DWORD *)v4 + 29);
    v17 = *((_DWORD *)v4 + 28);
    LODWORD(v12) = (__PAIR64__(v5, v17) >> 6) ^ (__PAIR64__(v17, v5) >> 29) ^ (__PAIR64__(v5, v17) >> 19);
    HIDWORD(v12) = (v5 >> 6) ^ (__PAIR64__(v5, v17) >> 29) ^ (__PAIR64__(v17, v5) >> 19);
    LODWORD(v6) = *((_DWORD *)v4 + 3);
    HIDWORD(v6) = *((_DWORD *)v4 + 2);
    LODWORD(v11) = (*((_QWORD *)v4 + 1) >> 7) ^ (*((_QWORD *)v4 + 1) >> 8) ^ (*((_QWORD *)v4 + 1) >> 1);
    HIDWORD(v11) = ((unsigned int)v6 >> 7) ^ (v6 >> 8) ^ (v6 >> 1);
    *((_QWORD *)v4 + 16) = v11 + v12 + *((_QWORD *)v4 + 9) + *(_QWORD *)v4;
    v4 += 8;
  }
  while ( &v26 != v4 );
  v18 = 0;
  while ( 1 )
  {
    HIDWORD(v7) = v25[2 * v18 + 1];
    LODWORD(v7) = v25[2 * v18];
    v15 = v14
        + (v20 & v24 ^ v19 & ~v24)
        + __PAIR64__(
            (v24 >> 9) ^ (__PAIR64__(v24, HIDWORD(v24)) >> 18) ^ (__PAIR64__(v24, HIDWORD(v24)) >> 14),
            (__PAIR64__(v24, HIDWORD(v24)) >> 9) ^ (v24 >> 18) ^ (v24 >> 14))
        + __PAIR64__(dword_483CE4[2 * v18], dword_483CE0[2 * v18])
        + v7;
    LODWORD(v10) = (__PAIR64__(v23, HIDWORD(v23)) >> 7) ^ (v23 >> 28) ^ (__PAIR64__(v23, HIDWORD(v23)) >> 2);
    HIDWORD(v10) = (v23 >> 7) ^ (__PAIR64__(v23, HIDWORD(v23)) >> 28) ^ (v23 >> 2);
    v13 = v15 + v16;
    v8 = v15 + (v21 & v22 ^ v23 & (v21 ^ v22)) + v10;
    ++v18;
    v16 = v21;
    v14 = v19;
    if ( v18 == 80 )
      break;
    v19 = v20;
    v20 = v24;
    v24 = v13;
    v21 = v22;
    v22 = v23;
    v23 = v8;
  }
  a1[2] += v8;
  a1[3] += v23;
  a1[4] += v22;
  a1[5] += v21;
  a1[6] += v13;
  a1[7] += v24;
  a1[8] += v20;
  a1[9] += v19;
  return v20;
}

