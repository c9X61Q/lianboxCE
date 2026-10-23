// lian86.exe @ 0x004053c1  size=35  name=sub_4053C1
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_4053C1(int a1)
{
  void *v1; // eax

  v1 = (void *)sub_4053E4(a1);
  return v1 != nullptr && WaitForSingleObject(v1, 0) != 0;
}

