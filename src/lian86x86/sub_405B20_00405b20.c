// lian86.exe @ 0x00405b20  size=113  name=sub_405B20
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_405B20(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  _WORD *v6; // ebp
  int v8; // [esp+14h] [ebp+4h]

  v3 = a1;
  v4 = sub_405DE0(a1);
  v5 = v4;
  if ( v4 > (a2 < 0 ? 0 : a2) )
    v5 = a2 < 0 ? 0 : a2;
  v8 = sub_40E880(a1);
  v6 = (_WORD *)sub_40E900(v5, a3);
  if ( v8 != 0 )
    v3 = sub_40EA10(v8);
  if ( v3 != 0 )
    return sub_40EA40(v6, v3 + 2 * (v4 - v5), v5);
  *v6 = 0;
  return 0;
}

