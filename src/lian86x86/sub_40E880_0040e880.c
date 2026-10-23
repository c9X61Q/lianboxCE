// lian86.exe @ 0x0040e880  size=70  name=sub_40E880
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40E880(unsigned int a1)
{
  _DWORD *Value; // [esp+0h] [ebp-4h]

  Value = TlsGetValue(dwTlsIndex);
  if ( a1 < *Value || a1 > Value[2] + *Value )
    return 0;
  else
    return a1 - *Value + 1;
}

