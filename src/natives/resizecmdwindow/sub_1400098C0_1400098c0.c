// resizecmdwindow.exe @ 0x1400098c0 size=248

__int64 __fastcall sub_1400098C0(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        __int128 *a5,
        __int128 *a6,
        __int128 *a7)
{
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  _QWORD v18[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v21[4]; // [rsp+90h] [rbp-48h] BYREF
  _QWORD v22[4]; // [rsp+B0h] [rbp-28h] BYREF

  v7 = *a7;
  v8 = a7[1];
  *((_QWORD *)a7 + 2) = 0;
  *(_BYTE *)a7 = 0;
  *((_QWORD *)a7 + 3) = 15;
  *(_OWORD *)v18 = v7;
  *(_OWORD *)&v18[2] = v8;
  v9 = *a6;
  v10 = a6[1];
  *((_QWORD *)a6 + 2) = 0;
  *(_BYTE *)a6 = 0;
  *((_QWORD *)a6 + 3) = 15;
  *(_OWORD *)v19 = v9;
  *(_OWORD *)&v19[2] = v10;
  v11 = *a5;
  v12 = a5[1];
  *((_QWORD *)a5 + 2) = 0;
  *(_BYTE *)a5 = 0;
  *((_QWORD *)a5 + 3) = 15;
  *(_OWORD *)v20 = v11;
  v13 = *a4;
  *(_OWORD *)&v20[2] = v12;
  v14 = a4[1];
  *((_QWORD *)a4 + 2) = 0;
  *(_BYTE *)a4 = 0;
  *((_QWORD *)a4 + 3) = 15;
  *(_OWORD *)&v21[2] = v14;
  v15 = a3[1];
  *(_OWORD *)v21 = v13;
  v16 = *a3;
  *((_QWORD *)a3 + 2) = 0;
  *(_BYTE *)a3 = 0;
  *((_QWORD *)a3 + 3) = 15;
  *(_OWORD *)&v22[2] = v15;
  *(_OWORD *)v22 = v16;
  return sub_140001510(a2, (__int64)v22, (__int64)v21, (__int64)v20, (__int64)v19, (__int64)v18);
}

