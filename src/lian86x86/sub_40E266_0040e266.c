// lian86.exe @ 0x0040e266  size=167  name=sub_40E266
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40E266(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // esi
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ebx

  v5 = nullptr;
  sub_40E3B9(*a5);
  v6 = a2;
  if ( a2 > 0 )
  {
    v7 = HeapAlloc(hHeap, 0, a2 * a1 + 24);
    v5 = v7;
    if ( v7 != nullptr )
    {
      v7[1] = a1;
      v7[2] = a4;
      v7[4] = a2;
      v7[5] = a3;
      v7[3] = a5;
      *v7 = 1;
      v5 = v7 + 6;
      memset(v7 + 6, 0, a2 * a1);
      *a5 = v5;
      if ( sub_412104(a4) != 0 )
      {
        v8 = v5;
        do
        {
          sub_41252F(v8, a4);
          v8 = (_DWORD *)((char *)v8 + a1);
          --v6;
        }
        while ( v6 != 0 );
      }
    }
  }
  return v5;
}

