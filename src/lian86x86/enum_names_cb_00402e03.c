// lian86.exe @ 0x00402e03  size=70  name=enum_names_cb
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall enum_names_cb(HMODULE hModule, LPCWSTR lpType, const unsigned __int16 *lpName, LONG_PTR lParam)
{
  int v4; // eax
  int v6; // [esp-4h] [ebp-8h]

  mutex_enter();
  sub_40AB74((int *)dword_418108);
  v6 = str_append();
  v4 = str_append();
  sub_40A240(lpName, v4);
  str_assign((LPVOID *)(dword_41810C + 8), v6);
  return true;
}

