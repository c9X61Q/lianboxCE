// lian86.exe @ 0x0040196c  size=564  name=sub_40196C
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int sub_40196C()
{
  int v0; // eax
  int v1; // eax
  wchar_t *v2; // edx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp-4h] [ebp-20h]
  LPCWSTR v11; // [esp-4h] [ebp-20h]
  int v12; // [esp-4h] [ebp-20h]
  int v13; // [esp-4h] [ebp-20h]
  int v14; // [esp-4h] [ebp-20h]
  int v15; // [esp-4h] [ebp-20h]
  int v16; // [esp-4h] [ebp-20h]
  int v17; // [esp-4h] [ebp-20h]
  int v18; // [esp+0h] [ebp-1Ch]
  __int16 v19; // [esp+4h] [ebp-18h]
  LPVOID lpMem; // [esp+8h] [ebp-14h] BYREF
  LPCWSTR pszExt; // [esp+Ch] [ebp-10h] BYREF
  LPWSTR lpTempFileName; // [esp+10h] [ebp-Ch]
  LPCWSTR lpPathName; // [esp+14h] [ebp-8h] BYREF

  lpPathName = nullptr;
  lpTempFileName = nullptr;
  pszExt = nullptr;
  lpMem = nullptr;
  mutex_enter();
  dword_41808C = (int)&unk_4170FF;
  v18 = 0;
  do
  {
    if ( v18 > 3 )
      break;
    v19 = *(char *)dword_41808C++;
    v10 = str_append();
    v0 = str_append();
    sub_405DC0(-v19, v0);
    str_assign(&lpMem, v10);
    v11 = pszExt;
    v1 = str_append();
    v2 = (wchar_t *)v11;
    v12 = v1;
    str_append_w(v2);
    str_append_w((wchar_t *)lpMem);
    str_assign((LPVOID *)&pszExt, v12);
  }
  while ( !__OFADD__(1, v18++) );
  lpTempFileName = (LPWSTR)xmalloc(1024);
  v13 = str_append();
  v4 = str_append();
  sub_40ADD6(v4);
  str_assign((LPVOID *)&lpPathName, v13);
  GetTempFileNameW(lpPathName, &Caption, 0, lpTempFileName);
  v14 = str_append();
  v5 = str_append();
  sub_40A240(lpTempFileName, v5);
  str_assign((LPVOID *)&lpFileName, v14);
  sub_40AE67(lpFileName);
  sub_40AD45((wchar_t *)lpFileName);
  GetTempFileNameW(lpFileName, &Caption, 0, lpTempFileName);
  v15 = str_append();
  v6 = str_append();
  sub_40A240(lpTempFileName, v6);
  str_assign((LPVOID *)&pszPath, v15);
  sub_40AE67(pszPath);
  sub_40AD45((wchar_t *)pszPath);
  GetTempFileNameW(pszPath, &Caption, 0, lpTempFileName);
  PathAddBackslashW((LPWSTR)pszPath);
  v16 = str_append();
  v7 = str_append();
  sub_40A240(lpTempFileName, v7);
  str_assign((LPVOID *)&dword_418098, v16);
  sub_40AE67(dword_418098);
  PathRenameExtensionW(dword_418098, pszExt);
  GetTempFileNameW(pszPath, &Caption, 0, lpTempFileName);
  v17 = str_append();
  v8 = str_append();
  sub_40A240(lpTempFileName, v8);
  str_assign((LPVOID *)&dword_4180C8, v17);
  sub_40A200(lpTempFileName);
  sub_40E5F0((LPVOID)lpPathName);
  sub_40E5F0(lpMem);
  return sub_40E5F0((LPVOID)pszExt);
}

