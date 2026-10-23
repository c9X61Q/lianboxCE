// lian86.exe @ 0x00402c55  size=430  name=sub_402C55
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_402C55(wchar_t *lpThreadParameter)
{
  int v1; // eax
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax
  char v6; // zf
  int v8; // [esp+0h] [ebp-28h]
  int v9; // [esp+4h] [ebp-24h]
  int v10; // [esp+8h] [ebp-20h]
  int v11; // [esp+8h] [ebp-20h]
  int v12; // [esp+8h] [ebp-20h]
  int v13; // [esp+8h] [ebp-20h]
  LPVOID lpParameter; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h]
  LPCWSTR lpName; // [esp+14h] [ebp-14h] BYREF
  HRSRC hResInfo; // [esp+18h] [ebp-10h]
  LPVOID lpMem; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h]

  v19 = 0;
  lpMem = nullptr;
  hResInfo = nullptr;
  lpName = nullptr;
  v15 = 0;
  lpParameter = nullptr;
  mutex_enter();
  str_init((int)&lpParameter, lpThreadParameter);
  if ( v15 == 1 )
  {
    v10 = str_append();
    v1 = str_append();
    sub_40A240((const unsigned __int16 *)lpParameter, v1);
    str_assign(&lpParameter, v10);
  }
  v11 = str_append();
  v9 = str_append();
  v8 = str_append();
  v2 = str_append();
  sub_40D780((LPCWCH)lpParameter, 1, v2);
  sub_405182();
  sub_405EB0(v3 + v8, v9);
  str_assign((LPVOID *)&lpName, v11);
  hResInfo = FindResourceW(hModule, lpName, (LPCWSTR)0xA);
  if ( hResInfo != nullptr )
  {
    lpMem = load_resource_copy(hModule, hResInfo);
    nNumberOfBytesToWrite = buf_length(lpMem);
    rc4_crypt(lpMem, nNumberOfBytesToWrite, (wchar_t *)lpWideCharStr);
    v12 = str_append();
    v4 = str_append();
    sub_40A290(lpMem, nNumberOfBytesToWrite, v4);
    str_assign((LPVOID *)&dword_41807C, v12);
    sub_40A200(lpMem);
    v19 = sub_4059C0((int)dword_41807C, asc_41703E);
    v13 = str_append();
    v5 = str_append();
    sub_405F20(dword_41807C, v19 - 1, v5);
    str_assign((LPVOID *)&dword_41807C, v13);
  }
  sub_405120(0, dword_41807C);
  if ( v6 )
  {
    if ( v15 == 1 )
      dword_418070 = sub_40548C((LPTHREAD_START_ROUTINE)resource_worker, lpParameter);
    else
      resource_worker((wchar_t *)lpParameter);
  }
  sub_40E5F0(lpParameter);
  return sub_40E5F0((LPVOID)lpName);
}

