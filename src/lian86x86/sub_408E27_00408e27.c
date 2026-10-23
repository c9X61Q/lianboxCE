// lian86.exe @ 0x00408e27  size=49  name=sub_408E27
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_408E27(LPCWSTR lpCaption, LPCWSTR lpText, UINT uType)
{
  HWND v3; // esi
  int v4; // esi

  v3 = (HWND)sub_4094D1();
  sub_409588(1);
  v4 = MessageBoxW(v3, lpText, lpCaption, uType);
  sub_409588(0);
  return v4;
}

