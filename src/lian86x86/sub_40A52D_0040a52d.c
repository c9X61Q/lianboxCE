// lian86.exe @ 0x0040a52d  size=34  name=sub_40A52D
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40A52D(int a1, wchar_t *String2)
{
  int result; // eax

  result = sub_40A638(a1, String2);
  if ( result == 0 )
    return sub_40A6C3(a1, String2, 0);
  return result;
}

