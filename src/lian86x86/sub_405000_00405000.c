// lian86.exe @ 0x00405000  size=92  name=sub_405000
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int sub_405000()
{
  unsigned int v0; // kr00_4
  int v1; // ebp
  unsigned int v2; // kr04_4

  v0 = __readeflags();
  v1 = 0;
  __writeeflags(v0 ^ 0x200000);
  v2 = __readeflags();
  if ( v0 != v2 )
  {
    _EAX = 1;
    __asm { cpuid }
    if ( (_EDX & 0x800000) != 0 )
    {
      v1 = 2;
      if ( (_EDX & 0x2000000) != 0 )
      {
        v1 = 10;
        if ( (_EDX & 0x4000000) != 0 )
          v1 = 26;
      }
      _EAX = -2147483647;
      __asm { cpuid }
      if ( _EDX < 0 )
        return v1 | 4;
    }
  }
  return v1;
}

