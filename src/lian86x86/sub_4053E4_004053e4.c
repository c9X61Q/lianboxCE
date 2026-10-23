// lian86.exe @ 0x004053e4  size=76  name=sub_4053E4
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_4053E4(int a1)
{
  int v1; // edi
  int v2; // esi

  v1 = 0;
  EnterCriticalSection(&CriticalSection);
  v2 = dword_41811C;
  if ( dword_41811C != 0 )
  {
    while ( *(_DWORD *)(v2 + 12) != a1 )
    {
      v2 = *(_DWORD *)v2;
      if ( v2 == 0 )
        goto LABEL_7;
    }
    if ( WaitForSingleObject(*(HANDLE *)(v2 + 8), 0) != 0 )
      v1 = *(_DWORD *)(v2 + 8);
  }
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
  return v1;
}

