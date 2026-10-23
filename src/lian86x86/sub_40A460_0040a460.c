// lian86.exe @ 0x0040a460  size=205  name=sub_40A460
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40A460(int a1, int a2, int a3, LPVOID *a4, int a5)
{
  _DWORD *v5; // edi
  int v6; // esi
  LPVOID v7; // eax
  _DWORD *v8; // eax

  sub_40A54F(*a4);
  v5 = HeapAlloc(hHeap, 0, 0x3Cu);
  if ( v5 != nullptr )
  {
    v6 = a5;
    if ( a5 <= 0 )
      v6 = 1;
    v7 = HeapAlloc(hHeap, 8u, 4 * v6);
    v5[1] = v7;
    if ( v7 != nullptr )
    {
      v5[8] = a2;
      v5[9] = v6;
      *v5 = 0;
      v5[7] = a1;
      v5[4] = a3;
      v5[10] = 0;
      v5[11] = 0;
      v5[12] = a4;
      v5[13] = 0;
      if ( sub_412104(a3) != 0 )
        v5[11] |= 2u;
      v5[14] = sub_40DE99(a1 + 8, 16, 0x10000, 4);
      v8 = HeapAlloc(hHeap, 8u, a1 + 8);
      v5[3] = v8;
      v8[1] = &unk_413024;
      *a4 = v5;
    }
    else
    {
      HeapFree(hHeap, 0, v5);
      return nullptr;
    }
  }
  return v5;
}

