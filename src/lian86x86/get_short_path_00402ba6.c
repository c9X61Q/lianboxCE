// lian86.exe @ 0x00402ba6  size=175  name=get_short_path
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall get_short_path(wchar_t *String, int a2)
{
  int v2; // eax
  int v4; // [esp-4h] [ebp-10h]
  wchar_t *v5; // [esp-4h] [ebp-10h]
  LPCWSTR lpszLongPath; // [esp+0h] [ebp-Ch] BYREF
  LPWSTR lpszShortPath; // [esp+4h] [ebp-8h]
  LPVOID lpMem; // [esp+8h] [ebp-4h] BYREF

  lpMem = nullptr;
  lpszShortPath = nullptr;
  lpszLongPath = nullptr;
  mutex_enter();
  sub_4051A0(a2);
  str_init((int)&lpszLongPath, String);
  lpszShortPath = (LPWSTR)xmalloc(10000);
  GetShortPathNameW(lpszLongPath, lpszShortPath, 0x2710u);
  v4 = str_append();
  v2 = str_append();
  sub_40A290(lpszShortPath, -1, v2);
  str_assign(&lpMem, v4);
  sub_40A200(lpszShortPath);
  v5 = (wchar_t *)lpMem;
  str_append();
  str_append_w(v5);
  sub_405170();
  sub_40E5F0((LPVOID)lpszLongPath);
  return sub_40E5F0(lpMem);
}

