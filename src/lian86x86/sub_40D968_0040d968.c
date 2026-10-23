// lian86.exe @ 0x0040d968  size=107  name=sub_40D968
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

char *__stdcall sub_40D968(int a1)
{
  char *Value; // edi
  _DWORD *i; // esi
  void (__cdecl *v3)(char *); // ecx

  Value = (char *)TlsGetValue(dword_418678);
  if ( Value == nullptr )
  {
    Value = (char *)HeapAlloc(hHeap, 8u, dword_418674);
    TlsSetValue(dword_418678, Value);
    for ( i = (_DWORD *)dword_418670; i != nullptr; i = (_DWORD *)*i )
    {
      v3 = (void (__cdecl *)(char *))i[3];
      if ( v3 != nullptr )
        v3(&Value[i[2]]);
    }
    sub_412722(Mem, (int)Value);
  }
  return &Value[a1];
}

