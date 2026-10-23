// lian86.exe @ 0x0040ee60  size=26  name=zlib_inflate_blob
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int zlib_inflate_blob(int a1, int a2, int a3, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, a3);
  return sub_40EE80(a1, a2, a3, va);
}

