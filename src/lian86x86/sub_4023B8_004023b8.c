// lian86.exe @ 0x004023b8  size=143  name=sub_4023B8
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_4023B8(wchar_t *String, wchar_t *a2)
{
  LPVOID lpMem; // [esp+0h] [ebp-14h] BYREF
  LPCVOID lpBuffer; // [esp+4h] [ebp-10h] BYREF
  int v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]

  v6 = 0;
  v5 = 0;
  lpBuffer = nullptr;
  lpMem = nullptr;
  str_init((int)&lpMem, String);
  str_init((int)&lpBuffer, a2);
  v5 = sub_40B330(-1, (LPCWSTR)lpMem, 0x18u);
  if ( v5 != 0 )
  {
    v6 = sub_40B600(v5, lpBuffer);
    sub_40B050(v5);
  }
  if ( sub_405DE0(lpBuffer) == 0 )
    v6 = 1;
  sub_40E5F0(lpMem);
  return sub_40E5F0((LPVOID)lpBuffer);
}

