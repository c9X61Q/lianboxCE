// lian86.exe @ 0x00402e49  size=164  name=sub_402E49
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_402E49(wchar_t *String)
{
  LPCWSTR lpName; // [esp+0h] [ebp-18h] BYREF
  HRSRC hResInfo; // [esp+4h] [ebp-14h]
  LPCVOID lpMem; // [esp+8h] [ebp-10h]
  LPVOID v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h] BYREF
  int v7; // [esp+14h] [ebp-4h]

  v7 = 0;
  v6 = 0;
  v5 = nullptr;
  lpMem = nullptr;
  hResInfo = nullptr;
  lpName = nullptr;
  mutex_enter();
  str_init((int)&lpName, String);
  hResInfo = FindResourceW(hModule, lpName, (LPCWSTR)0xA);
  if ( hResInfo != nullptr )
  {
    lpMem = load_resource_copy(hModule, hResInfo);
    nNumberOfBytesToWrite = buf_length(lpMem);
  }
  v5 = xmalloc(512);
  v6 = 512;
  v7 = zlib_inflate_blob((int)v5, (int)&v6, (int)lpMem, nNumberOfBytesToWrite);
  return sub_40E5F0((LPVOID)lpName);
}

