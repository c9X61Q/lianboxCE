// lian86.exe @ 0x00402447  size=86  name=file_exists
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall file_exists(wchar_t *String)
{
  LPVOID lpMem; // [esp+0h] [ebp-Ch] BYREF
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0;
  v3 = 0;
  lpMem = nullptr;
  str_init((int)&lpMem, String);
  v3 = sub_40B420(-1, (LPCWSTR)lpMem, 0x20000u);
  if ( v3 != 0 )
  {
    sub_40B050(v3);
    v4 = 1;
  }
  return sub_40E5F0(lpMem);
}

