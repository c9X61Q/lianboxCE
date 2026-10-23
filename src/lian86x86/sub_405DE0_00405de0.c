// lian86.exe @ 0x00405de0  size=39  name=sub_405DE0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_405DE0(__int16 *a1)
{
  __int16 *v1; // eax
  __int16 v2; // cx

  v1 = a1;
  if ( a1 == nullptr )
    return 0;
  do
    v2 = *v1++;
  while ( v2 != 0 );
  return v1 - (a1 + 1);
}

