// lian86.exe @ 0x00408db0  size=62  name=sub_408DB0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_408DB0(wchar_t *String1, wchar_t *String2)
{
  if ( String1 != nullptr )
  {
    if ( String2 != nullptr )
      return wcsicmp(String1, String2);
    else
      return 1;
  }
  else if ( String2 != nullptr && *String2 != 0 )
  {
    return -1;
  }
  else
  {
    return 0;
  }
}

