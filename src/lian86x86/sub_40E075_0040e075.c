// lian86.exe @ 0x0040e075  size=46  name=sub_40E075
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40E075(int a1)
{
  int v1; // esi

  v1 = a1;
  if ( *(_DWORD *)(a1 + 20) != 0 )
  {
    sub_40E19B(a1);
    while ( sub_40E144(v1, &a1) != 0 )
      (*(void (__stdcall **)(int))(v1 + 20))(a1);
  }
}

