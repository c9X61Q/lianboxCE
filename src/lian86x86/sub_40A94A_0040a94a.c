// lian86.exe @ 0x0040a94a  size=44  name=sub_40A94A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_40A94A(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // edi
  int v2; // esi
  int i; // eax

  v1 = a1;
  v2 = 0;
  for ( i = tolower(*a1); i != 0; i = tolower(*v1) )
  {
    ++v1;
    v2 = i + 65599 * v2;
  }
  return v2;
}

