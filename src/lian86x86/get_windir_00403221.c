// lian86.exe @ 0x00403221  size=604  name=get_windir
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall get_windir(wchar_t *a1, wchar_t *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  wchar_t *v6; // edx
  int v7; // eax
  wchar_t *v8; // edx
  int v9; // eax
  wchar_t *v10; // edx
  int v11; // eax
  int v12; // eax
  int v14; // [esp-4h] [ebp-24h]
  LPWSTR v15; // [esp-4h] [ebp-24h]
  int v16; // [esp-4h] [ebp-24h]
  LPWSTR v17; // [esp-4h] [ebp-24h]
  int v18; // [esp-4h] [ebp-24h]
  LPWSTR v19; // [esp-4h] [ebp-24h]
  int v20; // [esp-4h] [ebp-24h]
  int v21; // [esp-4h] [ebp-24h]
  int v22; // [esp-4h] [ebp-24h]
  wchar_t *v23; // [esp-4h] [ebp-24h]
  wchar_t *String; // [esp+0h] [ebp-20h] BYREF
  wchar_t *v25; // [esp+4h] [ebp-1Ch] BYREF
  LPWSTR lpBuffer; // [esp+8h] [ebp-18h] BYREF
  LPCWSTR lpFileName; // [esp+Ch] [ebp-14h] BYREF
  LPVOID lpMem; // [esp+10h] [ebp-10h] BYREF
  int v29; // [esp+14h] [ebp-Ch]
  int v30; // [esp+18h] [ebp-8h]

  mutex_enter();
  sub_4051A0(a3);
  str_init((int)&String, a1);
  str_init((int)&v25, a2);
  if ( sub_402B6D() && sub_405573() != 65 )
  {
    v14 = str_append();
    v4 = str_append();
    sub_4062C0(2048, v4);
    str_assign((LPVOID *)&lpBuffer, v14);
    GetWindowsDirectoryW(lpBuffer, 0x800u);
    PathAddBackslashW(lpBuffer);
    v15 = lpBuffer;
    v5 = str_append();
    v6 = v15;
    v16 = v5;
    str_append_w(v6);
    str_append_w(aSysnative);
    str_assign((LPVOID *)&lpBuffer, v16);
    PathAddBackslashW(lpBuffer);
    v17 = lpBuffer;
    v7 = str_append();
    v8 = v17;
    v18 = v7;
    str_append_w(v8);
    str_append_w(String);
    str_assign((LPVOID *)&lpFileName, v18);
    v19 = lpBuffer;
    v9 = str_append();
    v10 = v19;
    v20 = v9;
    str_append_w(v10);
    str_append_w(String);
    str_append_w(v25);
    str_assign(&lpMem, v20);
    if ( sub_40B440(0, lpFileName) != 0 )
    {
      v29 = 1;
      sub_40B050(0);
    }
    else
    {
      v29 = 0;
    }
    if ( sub_40B440(0, (LPCWSTR)lpMem) != 0 )
    {
      v30 = 1;
      sub_40B050(0);
    }
    else
    {
      v30 = 0;
    }
    if ( v30 + v29 == 0 )
    {
      v21 = str_append();
      v11 = str_append();
      sub_4062C0(2048, v11);
      str_assign((LPVOID *)&lpBuffer, v21);
      GetSystemDirectoryW(lpBuffer, 0x800u);
      PathAddBackslashW(lpBuffer);
    }
  }
  else
  {
    v22 = str_append();
    v12 = str_append();
    sub_4062C0(2048, v12);
    str_assign((LPVOID *)&lpBuffer, v22);
    GetSystemDirectoryW(lpBuffer, 0x800u);
    PathAddBackslashW(lpBuffer);
  }
  v23 = lpBuffer;
  str_append();
  str_append_w(v23);
  sub_405170();
  sub_40E5F0(lpMem);
  sub_40E5F0(String);
  sub_40E5F0(v25);
  sub_40E5F0(lpBuffer);
  return sub_40E5F0((LPVOID)lpFileName);
}

