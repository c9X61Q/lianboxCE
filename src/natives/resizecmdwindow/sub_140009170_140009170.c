// resizecmdwindow.exe @ 0x140009170 size=292

__int64 __fastcall sub_140009170(__int64 a1, __int64 a2, __int128 *a3, __int128 *a4, __int128 *a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _QWORD v20[4]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v21[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v23[56]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-10h]

  v24 = 0;
  v9 = *(_QWORD *)(a6 + 56);
  if ( v9 != 0 )
  {
    if ( v9 != a6 )
    {
      v24 = *(_QWORD *)(a6 + 56);
      goto LABEL_6;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 8LL))(v9, v23);
    v12 = *(_QWORD *)(a6 + 56);
    v24 = v10;
    if ( v12 != 0 )
    {
      LOBYTE(v11) = v12 != a6;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
LABEL_6:
      *(_QWORD *)(a6 + 56) = 0;
    }
  }
  v13 = *a5;
  v14 = a5[1];
  *((_QWORD *)a5 + 2) = 0;
  *((_QWORD *)a5 + 3) = 15;
  *(_BYTE *)a5 = 0;
  *(_OWORD *)v20 = v13;
  v15 = *a4;
  *(_OWORD *)&v20[2] = v14;
  v16 = a4[1];
  *((_QWORD *)a4 + 2) = 0;
  *((_QWORD *)a4 + 3) = 15;
  *(_BYTE *)a4 = 0;
  *(_OWORD *)v21 = v15;
  v17 = *a3;
  *(_OWORD *)&v21[2] = v16;
  v18 = a3[1];
  *((_QWORD *)a3 + 2) = 0;
  *(_OWORD *)v22 = v17;
  *((_QWORD *)a3 + 3) = 15;
  *(_OWORD *)&v22[2] = v18;
  *(_BYTE *)a3 = 0;
  return sub_1400012D0(a2, (__int64)v22, (__int64)v21, (__int64)v20, (__int64)v23);
}

