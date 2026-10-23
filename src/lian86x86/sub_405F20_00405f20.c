// lian86.exe @ 0x00405f20  size=103  name=sub_405F20
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_405F20(__int16 *a1, int a2, int a3)
{
  __int16 *v3; // edi
  int v4; // esi
  int v5; // ebp
  _WORD *v6; // ebx

  v3 = a1;
  v4 = sub_405DE0(a1);
  if ( v4 > (a2 < 0 ? 0 : a2) )
    v4 = a2 < 0 ? 0 : a2;
  v5 = sub_40E880(a1);
  v6 = (_WORD *)sub_40E900(v4, a3);
  if ( v5 != 0 )
    v3 = (__int16 *)sub_40EA10(v5);
  if ( v3 != nullptr && v4 > 0 )
    return sub_40EA40(v6, v3, v4);
  *v6 = 0;
  return 0;
}

