// lian86.exe @ 0x00406110  size=66  name=sub_406110
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_406110(char *a1, int a2, int a3)
{
  if ( a1 != nullptr )
    return sub_406080(a1, a2, wcslen((const unsigned __int16 *)a1) - a2 + 1, a3);
  else
    return sub_40E9E0(a3);
}

