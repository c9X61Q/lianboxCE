// lian86.exe @ 0x0040a9c8  size=146  name=sub_40A9C8
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_BYTE *__stdcall sub_40A9C8(int a1, _DWORD *dwFlags, int a3, int a4)
{
  _BYTE *v4; // eax
  _DWORD *v5; // ebx
  _BYTE *v6; // edi
  char v7; // al

  v4 = HeapAlloc(hHeap, 0, 0x34u);
  v5 = dwFlags;
  v6 = v4;
  if ( dwFlags != nullptr )
  {
    v4[50] = 0;
  }
  else
  {
    v5 = HeapAlloc(hHeap, 0, 8u);
    v6[50] = 1;
  }
  *((_DWORD *)v6 + 3) = v5 + 1;
  *((_DWORD *)v6 + 2) = 0;
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 1) = 0;
  *((_DWORD *)v6 + 10) = a1 + 8;
  *((_DWORD *)v6 + 6) = a3;
  *((_DWORD *)v6 + 4) = 0;
  v6[48] = 1;
  *((_DWORD *)v6 + 11) = a4;
  v7 = sub_412104(a3);
  *((_DWORD *)v6 + 8) = 0;
  v6[49] = v7;
  *((_DWORD *)v6 + 9) = v5;
  *v5 = v6;
  *((_DWORD *)v6 + 7) = sub_40DE99(a1 + 8, 16, 0x10000, 4);
  return v6;
}

