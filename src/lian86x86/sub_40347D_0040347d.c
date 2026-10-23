// lian86.exe @ 0x0040347d  size=188  name=sub_40347D
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int sub_40347D()
{
  mutex_enter();
  if ( dword_418088 == 1 )
  {
    if ( (int)sub_40AAC3(lpMem) > 0 )
    {
      sub_40AACD(lpMem);
      while ( sub_40AAE2(lpMem) != 0 )
        sub_40AE67(*(LPCWSTR *)(dword_418104 + 8));
    }
    if ( (int)sub_40AAC3(dwFlags) > 0 )
    {
      sub_406FB0(dwFlags, 1, 0, 5);
      sub_40AACD(dwFlags);
      while ( sub_40AAE2(dwFlags) != 0 )
        RemoveDirectoryW(*(LPCWSTR *)(dword_4180FC + 12));
    }
  }
  return 1;
}

