// lian86.exe @ 0x0040ea40  size=75  name=sub_40EA40
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40EA40(_DWORD *a1, _DWORD *a2, int a3)
{
  _WORD *v4; // [esp+0h] [ebp-4h]

  v4 = (_WORD *)a1 + a3;
  while ( a3 > 0 )
  {
    *a1++ = *a2++;
    a3 -= 2;
  }
  *v4 = 0;
  return 0;
}

