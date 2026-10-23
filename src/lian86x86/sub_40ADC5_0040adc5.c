// lian86.exe @ 0x0040adc5  size=17  name=sub_40ADC5
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_40ADC5(const WCHAR *a1, DWORD a2)
{
  BOOL result; // eax

  result = false;
  if ( a1 != nullptr )
    return SetFileAttributesW(a1, a2);
  return result;
}

