// lian86.exe @ 0x0040e144  size=87  name=sub_40E144
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40E144(int a1, int *a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // eax

  v2 = 0;
  do
  {
    v3 = *(_DWORD *)(a1 + 24);
    if ( v3 < 0 || v3 >= *(_DWORD *)(a1 + 8) )
      break;
    v4 = *(_DWORD **)(*(_DWORD *)(a1 + 12) + 4 * v3);
    if ( v4 != nullptr && *v4 != 0 )
    {
      v2 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v3);
      *a2 = v3;
    }
    ++*(_DWORD *)(a1 + 24);
  }
  while ( v2 == 0 );
  if ( v2 == 0 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 == 0 || (v2 = v5 + 8, *a2 = v5 + 8, v5 == -8) )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  }
  return v2;
}

