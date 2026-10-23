// lian86.exe @ 0x00401ba0  size=710  name=unpack_initiate
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int unpack_initiate()
{
  int v0; // eax
  int v1; // edx
  int v2; // eax
  wchar_t *v3; // edx
  int v4; // eax
  wchar_t *v5; // edx
  int v6; // eax
  wchar_t *v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // eax
  wchar_t *v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  char v16; // zf
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v22; // [esp+0h] [ebp-38h]
  int v23; // [esp+8h] [ebp-30h]
  int v24; // [esp+8h] [ebp-30h]
  int v25; // [esp+Ch] [ebp-2Ch]
  int v26; // [esp+Ch] [ebp-2Ch]
  int v27; // [esp+10h] [ebp-28h]
  int v28; // [esp+10h] [ebp-28h]
  int v29; // [esp+14h] [ebp-24h]
  wchar_t *v30; // [esp+14h] [ebp-24h]
  int v31; // [esp+14h] [ebp-24h]
  wchar_t *v32; // [esp+14h] [ebp-24h]
  int v33; // [esp+14h] [ebp-24h]
  wchar_t *v34; // [esp+14h] [ebp-24h]
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+14h] [ebp-24h]
  LPCWCH v37; // [esp+14h] [ebp-24h]
  int v38; // [esp+14h] [ebp-24h]
  int v39; // [esp+14h] [ebp-24h]
  int v40; // [esp+14h] [ebp-24h]
  int v41; // [esp+14h] [ebp-24h]
  int v42; // [esp+14h] [ebp-24h]
  int v43; // [esp+14h] [ebp-24h]
  HMODULE hModule; // [esp+18h] [ebp-20h]
  LPVOID lpMem; // [esp+1Ch] [ebp-1Ch] BYREF
  LPVOID v46; // [esp+20h] [ebp-18h] BYREF
  LPVOID v47; // [esp+24h] [ebp-14h] BYREF
  LPCWCH lpWideCharStr; // [esp+28h] [ebp-10h] BYREF
  LPVOID v49[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v49[0] = nullptr;
  lpWideCharStr = nullptr;
  v47 = nullptr;
  v46 = nullptr;
  lpMem = nullptr;
  mutex_enter();
  v29 = str_append();
  v23 = str_append();
  v0 = str_append();
  sub_409698(v0);
  sub_405182();
  LoadLibraryExW((LPCWSTR)(v1 + v23), nullptr, 2u);
  hModule = (HMODULE)sub_4051A0(v29);
  EnumResourceTypesW(hModule, enum_types_cb, 0);
  FreeLibrary(hModule);
  if ( (int)sub_40AAC3(dword_418108) > 0 )
  {
    sub_40AACD(dword_418108);
    while ( sub_40AAE2(dword_418108) != 0 )
    {
      v30 = *(wchar_t **)(dword_41810C + 8);
      v2 = str_append();
      v3 = v30;
      v31 = v2;
      str_append_w(v3);
      str_assign(&lpMem, v31);
      if ( (int)sub_405DE0(lpMem) <= 10 )
      {
        v34 = (wchar_t *)lpMem;
        v6 = str_append();
        v7 = v34;
        v35 = v6;
        str_append_w(v7);
        str_assign(&v47, v35);
      }
      else
      {
        v32 = (wchar_t *)v46;
        v4 = str_append();
        v5 = v32;
        v33 = v4;
        str_append_w(v5);
        str_append_w((wchar_t *)lpMem);
        str_assign(&v46, v33);
      }
    }
    sub_40AB16(dword_418108);
    v36 = str_append();
    v27 = str_append();
    v25 = str_append();
    v24 = str_append();
    v22 = str_append();
    v8 = str_append();
    sub_405E10(v46, v8);
    sub_405182();
    sub_40D780((LPCWCH)(v9 + v22), 1, v24);
    sub_405182();
    sub_405EB0(v10 + v25, v27);
    str_assign((LPVOID *)&lpWideCharStr, v36);
    v37 = lpWideCharStr;
    v11 = str_append();
    v12 = (wchar_t *)v37;
    v38 = v11;
    str_append_w(v12);
    str_assign(v49, v38);
    v39 = str_append();
    v28 = str_append();
    v26 = str_append();
    v13 = str_append();
    sub_40D780(lpWideCharStr, 1, v13);
    sub_405182();
    sub_405EB0(v14 + v26, v28);
    str_assign((LPVOID *)&lpWideCharStr, v39);
    v40 = str_append();
    v15 = str_append();
    sub_405F20(lpWideCharStr, 10, v15);
    str_assign((LPVOID *)&lpWideCharStr, v40);
    sub_405120(v47, lpWideCharStr);
    if ( !v16 )
    {
      if ( sub_40985E() != 0 )
      {
        v41 = str_append();
        v17 = str_append();
        sub_409872(0, v17);
        sub_40E720(v41);
        v18 = sub_405160(v42);
        sub_405120(v18, v19);
        if ( !v16 )
        {
          dword_4180B0 = 1;
          v43 = str_append();
          v20 = str_append();
          sub_409872(1, v20);
          str_assign((LPVOID *)&dword_418080, v43);
        }
      }
      sub_40E5F0(lpMem);
      sub_40E5F0(v47);
      sub_40E5F0(v46);
      sub_40E5F0(v49[0]);
      return sub_40E5F0((LPVOID)lpWideCharStr);
    }
  }
  JUMPOUT(0x4011B1);
}

