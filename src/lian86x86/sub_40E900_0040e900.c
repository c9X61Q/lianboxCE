// lian86.exe @ 0x0040e900  size=223  name=sub_40E900
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40E900(int a1, char *a2)
{
  int v3; // [esp+0h] [ebp-Ch]
  int v4; // [esp+4h] [ebp-8h]
  LPVOID *Value; // [esp+8h] [ebp-4h]

  Value = (LPVOID *)TlsGetValue(dwTlsIndex);
  if ( a2 == (char *)-1 )
    a2 = (char *)Value[2];
  v4 = (int)Value[2] + 2 * a1;
  if ( v4 < (int)Value[1] - 4 )
  {
    if ( (int)Value[1] > 0x100000 )
    {
      if ( v4 < 0x100000 )
        v4 = 0x100000;
      Value[1] = (LPVOID)v4;
      *Value = HeapReAlloc(dword_418788, 0, *Value, (SIZE_T)Value[1] + 10);
    }
  }
  else
  {
    Value[1] = (LPVOID)(v4 + 0x4000);
    *Value = HeapReAlloc(dword_418788, 0, *Value, (SIZE_T)Value[1] + 10);
  }
  v3 = (int)*Value + (_DWORD)a2;
  Value[2] = &a2[2 * a1];
  return v3;
}

