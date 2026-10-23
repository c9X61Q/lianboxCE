// lian86.exe @ 0x0040a92f  size=27  name=sub_40A92F
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_40A92F(_WORD *a1)
{
  int result; // eax
  int v3; // edx

  for ( result = 0; ; result = v3 + 65599 * result )
  {
    v3 = (unsigned __int16)*a1;
    if ( *a1 == 0 )
      break;
    ++a1;
  }
  return result;
}

