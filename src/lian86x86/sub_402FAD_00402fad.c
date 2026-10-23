// lian86.exe @ 0x00402fad  size=578  name=sub_402FAD
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void sub_402FAD()
{
  int v0; // eax
  int v1; // edx
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax
  char v6; // zf
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  wchar_t *v14; // edx
  int v15; // edx
  int v16; // eax
  wchar_t *v17; // edx
  int v18; // [esp+0h] [ebp-24h]
  int v19; // [esp+0h] [ebp-24h]
  int v20; // [esp+0h] [ebp-24h]
  int v21; // [esp+0h] [ebp-24h]
  LPWSTR v22; // [esp+0h] [ebp-24h]
  int v23; // [esp+0h] [ebp-24h]
  int v24; // [esp+4h] [ebp-20h]
  int v25; // [esp+4h] [ebp-20h]
  int v26; // [esp+4h] [ebp-20h]
  int v27; // [esp+4h] [ebp-20h]
  wchar_t *v28; // [esp+4h] [ebp-20h]
  int v29; // [esp+8h] [ebp-1Ch]
  int v30; // [esp+8h] [ebp-1Ch]
  int v31; // [esp+8h] [ebp-1Ch]
  int v32; // [esp+8h] [ebp-1Ch]
  int v33; // [esp+8h] [ebp-1Ch]
  int v34; // [esp+8h] [ebp-1Ch]
  int v35; // [esp+8h] [ebp-1Ch]
  int v36; // [esp+8h] [ebp-1Ch]
  int v37; // [esp+8h] [ebp-1Ch]
  LPWSTR v38; // [esp+8h] [ebp-1Ch]
  int v39; // [esp+8h] [ebp-1Ch]
  LPVOID lpThreadParameter; // [esp+Ch] [ebp-18h] BYREF
  int v41; // [esp+10h] [ebp-14h]
  LPWSTR pszPath; // [esp+14h] [ebp-10h] BYREF
  wchar_t *v43; // [esp+18h] [ebp-Ch] BYREF
  wchar_t *String; // [esp+1Ch] [ebp-8h] BYREF
  wchar_t *v45; // [esp+20h] [ebp-4h] BYREF

  v45 = nullptr;
  String = nullptr;
  v43 = nullptr;
  pszPath = nullptr;
  v41 = 0;
  lpThreadParameter = nullptr;
  mutex_enter();
  v29 = str_append();
  v24 = str_append();
  v18 = str_append();
  v0 = str_append();
  sub_40D780(lpWideCharStr, 1, v0);
  sub_405182();
  sub_405EB0(v1 + v18, v24);
  str_assign(&lpThreadParameter, v29);
  v30 = str_append();
  v25 = str_append();
  v19 = str_append();
  v2 = str_append();
  sub_40D780((LPCWCH)lpThreadParameter, 1, v2);
  sub_405182();
  sub_405EB0(v3 + v19, v25);
  str_assign(&lpThreadParameter, v30);
  v41 = sub_402E49((wchar_t *)lpThreadParameter);
  v4 = str_append();
  sub_402150(v41, v4);
  sub_4051A0(v31);
  v32 = str_append();
  v5 = str_append();
  sub_409355(dword_418080, &Caption, v5);
  str_assign((LPVOID *)&pszPath, v32);
  sub_405120(0, pszPath);
  if ( v6 )
  {
    v33 = str_append();
    v26 = str_append();
    v20 = str_append();
    v7 = str_append();
    sub_40D780(lpWideCharStr, 1, v7);
    sub_405182();
    sub_405EB0(v8 + v20, v26);
    str_assign((LPVOID *)&v43, v33);
    v34 = str_append();
    v27 = str_append();
    v21 = str_append();
    v9 = str_append();
    sub_40D780(lpWideCharStr, 3, v9);
    sub_405182();
    sub_405EB0(v10 + v21, v27);
    str_assign((LPVOID *)&String, v34);
    v11 = str_append();
    sub_403E37(String, 0, v11);
    str_assign((LPVOID *)&dword_4180B4, v35);
    v12 = str_append();
    sub_403E37(v43, 0, v12);
    str_assign((LPVOID *)&v45, v36);
    PathAddBackslashW(pszPath);
    v37 = str_append();
    v28 = v45;
    v22 = pszPath;
    v13 = str_append();
    v14 = v22;
    v23 = v13;
    str_append_w(v14);
    str_append_w(dword_4180B4);
    sub_405182();
    sub_4023B8((wchar_t *)(v15 + v23), v28);
    sub_4051A0(v37);
    v38 = pszPath;
    v16 = str_append();
    v17 = v38;
    v39 = v16;
    str_append_w(v17);
    str_assign((LPVOID *)&dword_4180A8, v39);
    PathRemoveBackslashW(dword_4180A8);
    sub_402C55((wchar_t *)lpThreadParameter);
  }
  JUMPOUT(0x4011B1);
}

