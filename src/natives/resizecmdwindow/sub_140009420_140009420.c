// resizecmdwindow.exe @ 0x140009420 size=278

__int64 __fastcall sub_140009420(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-71h] BYREF
  __int64 v10; // [rsp+40h] [rbp-61h]
  __int64 v11; // [rsp+48h] [rbp-59h]
  __int128 v12; // [rsp+50h] [rbp-51h] BYREF
  __int64 v13; // [rsp+60h] [rbp-41h]
  __int64 v14; // [rsp+68h] [rbp-39h]
  _QWORD v15[4]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v16[4]; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v17[4]; // [rsp+B0h] [rbp+Fh] BYREF

  v9 = 0;
  v10 = 0;
  v11 = 0;
  sub_1400077F0(&v9, "0", 1u);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  __wind
  {
    sub_1400077F0(&v12, "bool", 4u);
    *(_OWORD *)v15 = *(_OWORD *)a5;
    *(_OWORD *)&v15[2] = *(_OWORD *)(a5 + 16);
    *(_QWORD *)(a5 + 16) = 0;
    *(_QWORD *)(a5 + 24) = 15;
    *(_BYTE *)a5 = 0;
    qmemcpy(v16, a4, sizeof(v16));
    a4[2] = 0;
    a4[3] = 15;
    *(_BYTE *)a4 = 0;
    qmemcpy(v17, a3, sizeof(v17));
    a3[2] = 0;
    a3[3] = 15;
    *(_BYTE *)a3 = 0;
    result = sub_140001510(a2, (__int64)v17, (__int64)v16, (__int64)v15, (__int64)&v12, (__int64)&v9);
  }
  __unwind
  {
    sub_140005EB0((__int64)&v9);
  }
  return result;
}

