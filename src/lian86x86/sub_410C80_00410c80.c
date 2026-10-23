// lian86.exe @ 0x00410c80  size=18  name=sub_410C80
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_410C80(int a1, char *a2, unsigned int a3)
{
  int result; // eax

  result = (int)a2;
  if ( a2 != nullptr )
    return sub_411170(a1, a2, a3);
  return result;
}

