// lian86.exe @ 0x0040d9d3  size=183  name=sub_40D9D3
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

SIZE_T __stdcall sub_40D9D3(SIZE_T dwBytes, void (__cdecl *a2)(char *), int a3)
{
  SIZE_T v3; // esi
  SIZE_T v4; // eax
  void *v5; // eax
  SIZE_T v6; // edi
  void *Value; // eax
  char *v8; // ebp
  SIZE_T *v9; // eax
  SIZE_T v11; // [esp-4h] [ebp-14h]

  v3 = dwBytes;
  if ( (dwBytes & 3) != 0 )
    v3 = 4 - (dwBytes & 3) + dwBytes;
  v4 = dword_418674;
  if ( dword_418674 == 0 )
  {
    dword_418678 = TlsAlloc();
    v5 = HeapAlloc(hHeap, 8u, v3);
    TlsSetValue(dword_418678, v5);
    v4 = dword_418674;
  }
  v6 = v4;
  v11 = v3 + v4;
  dword_418674 = v3 + v4;
  Value = TlsGetValue(dword_418678);
  v8 = (char *)HeapReAlloc(hHeap, 8u, Value, v11);
  TlsSetValue(dword_418678, v8);
  if ( a2 != nullptr || a3 != 0 )
  {
    v9 = (SIZE_T *)sub_40E1F2((int)&dword_418670, 0x14u);
    *v9 = v6;
    v9[1] = (SIZE_T)a2;
    v9[2] = a3;
    if ( a2 != nullptr )
      a2(&v8[v6]);
  }
  return v6;
}

