// lian86.exe @ 0x0041206c  size=58  name=sub_41206C
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_WORD *__stdcall sub_41206C(_WORD *a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // eax
  _WORD *v5; // edx

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( a3 < 0 )
  {
    v4 = -a2;
    *a1 = 45;
    v5 = a1 + 1;
    v3 = __CFADD__(~a2, 1) + ~a3;
  }
  sub_4120A6(v5, v4, v3);
  return a1;
}

