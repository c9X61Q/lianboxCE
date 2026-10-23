// lian86.exe @ 0x00403c83  size=436  name=sub_403C83
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_403C83(wchar_t *a1, wchar_t *a2, wchar_t *a3, wchar_t *a4)
{
  int v4; // eax
  wchar_t *v5; // edx
  int v6; // eax
  wchar_t *v7; // edx
  int v8; // eax
  int v9; // eax
  wchar_t *v10; // edx
  int v11; // eax
  wchar_t *v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  wchar_t *v17; // [esp+0h] [ebp-30h]
  int v18; // [esp+0h] [ebp-30h]
  wchar_t *v19; // [esp+0h] [ebp-30h]
  wchar_t *v20; // [esp+4h] [ebp-2Ch]
  int v21; // [esp+4h] [ebp-2Ch]
  int v22; // [esp+4h] [ebp-2Ch]
  wchar_t *v23; // [esp+4h] [ebp-2Ch]
  int v24; // [esp+8h] [ebp-28h]
  int v25; // [esp+8h] [ebp-28h]
  LPWSTR v26; // [esp+10h] [ebp-20h]
  int v27; // [esp+10h] [ebp-20h]
  LPWSTR v28; // [esp+10h] [ebp-20h]
  int v29; // [esp+10h] [ebp-20h]
  int v30; // [esp+10h] [ebp-20h]
  LPWSTR String; // [esp+14h] [ebp-1Ch] BYREF
  LPVOID v32; // [esp+18h] [ebp-18h] BYREF
  LPVOID lpMem; // [esp+1Ch] [ebp-14h] BYREF
  LPVOID v34; // [esp+20h] [ebp-10h] BYREF
  LPWSTR lpsz; // [esp+24h] [ebp-Ch] BYREF
  int v36; // [esp+28h] [ebp-8h]

  v36 = 0;
  lpsz = nullptr;
  v34 = nullptr;
  lpMem = nullptr;
  v32 = nullptr;
  String = nullptr;
  mutex_enter();
  str_init((int)&String, a1);
  str_init((int)&v32, a2);
  str_init((int)&lpMem, a3);
  str_init((int)&v34, a4);
  v26 = dword_418098;
  v4 = str_append();
  v5 = v26;
  v27 = v4;
  str_append_w(v5);
  str_assign((LPVOID *)&lpsz, v27);
  PathQuoteSpacesW(lpsz);
  v28 = lpsz;
  v6 = str_append();
  v7 = v28;
  v29 = v6;
  str_append_w(v7);
  str_append_w(asc_41702A);
  str_append_w(String);
  str_assign((LPVOID *)&String, v29);
  PathQuoteSpacesW(String);
  v30 = str_append();
  v24 = str_append();
  v8 = str_append();
  sub_40AE75(v8);
  sub_40E720(v24);
  v20 = (wchar_t *)v34;
  v9 = str_append();
  v10 = v20;
  v21 = v9;
  str_append_w(v10);
  str_append_w(asc_41702A);
  str_append_w(String);
  sub_40E720(v21);
  v17 = (wchar_t *)v32;
  v11 = str_append();
  v12 = v17;
  v18 = v11;
  str_append_w(v12);
  str_append_w((wchar_t *)lpMem);
  sub_405182();
  v19 = (wchar_t *)(v13 + v18);
  sub_405182();
  v23 = (wchar_t *)(v14 + v22);
  sub_405182();
  sub_409A05(v19, v23, (LPCWSTR)(v15 + v25), 68);
  TotalBytesAvail = sub_4051A0(v30);
  while ( sub_4098F7(TotalBytesAvail) != 0 )
    sub_4056D8(10);
  sub_40993E(TotalBytesAvail);
  v36 = sub_409F4C(TotalBytesAvail);
  sub_40994F(TotalBytesAvail);
  sub_40E5F0(String);
  sub_40E5F0(lpMem);
  sub_40E5F0(lpsz);
  sub_40E5F0(v32);
  return sub_40E5F0(v34);
}

