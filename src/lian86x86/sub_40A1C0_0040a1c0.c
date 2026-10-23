// lian86.exe @ 0x0040a1c0  size=21  name=sub_40A1C0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

HANDLE sub_40A1C0()
{
  HANDLE result; // eax

  result = HeapCreate(0, 0x1000u, 0);
  dword_418778 = result;
  return result;
}

