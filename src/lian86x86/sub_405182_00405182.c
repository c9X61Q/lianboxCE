// lian86.exe @ 0x00405182  size=16  name=sub_405182
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __usercall __spoils<ecx> sub_405182@<edx>()
{
  return *(_DWORD *)TlsGetValue(dwTlsIndex);
}

