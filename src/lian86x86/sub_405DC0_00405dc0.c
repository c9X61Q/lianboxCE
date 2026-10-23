// lian86.exe @ 0x00405dc0  size=28  name=sub_405DC0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_WORD *__stdcall sub_405DC0(__int16 a1, int a2)
{
  _WORD *result; // eax

  result = (_WORD *)sub_40E900(1, a2);
  *result = a1;
  result[1] = 0;
  return result;
}

