// lian86.exe @ 0x0040b600  size=40  name=sub_40B600
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40B600(int a1, char *lpBuffer)
{
  int v2; // eax

  v2 = sub_40DAD9(dword_418784, a1);
  if ( v2 != 0 )
    return sub_40B500(v2, lpBuffer, *(_DWORD *)(v2 + 24));
  else
    return 0;
}

