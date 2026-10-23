// lian86.exe @ 0x00405120  size=56  name=sub_405120
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __fastcall sub_405120(__int16 *a1, __int16 *a2)
{
  __int16 v2; // ax
  __int16 v3; // bx

  if ( a2 == nullptr )
    a2 = (__int16 *)&unk_417062;
  if ( a1 == nullptr )
    a1 = (__int16 *)&unk_417062;
  while ( 1 )
  {
    v2 = *a2++;
    v3 = *a1++;
    if ( v2 != v3 )
      break;
    if ( v2 == 0 )
      return 1;
  }
  return 0;
}

