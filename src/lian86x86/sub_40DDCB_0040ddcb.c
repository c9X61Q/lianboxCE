// lian86.exe @ 0x0040ddcb  size=206  name=sub_40DDCB
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40DDCB(int a1, int a2)
{
  _DWORD *v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( *(_DWORD *)(a1 + 28) != 0 )
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v2 = *(_DWORD **)(a2 - 4);
  *(_DWORD *)(a2 - 4) = v2[2];
  ++v2[5];
  v3 = v2[4];
  v2[2] = a2 - 4;
  if ( v2[5] == v3 )
  {
    v4 = *v2;
    if ( v2[3] == 1 )
    {
      if ( v4 != 0 )
        *(_DWORD *)(v4 + 4) = v2[1];
      v5 = *v2;
      if ( v2 == *(_DWORD **)a1 )
      {
        *(_DWORD *)a1 = v5;
LABEL_14:
        *(_DWORD *)(a1 + 12) -= v2[3];
        HeapFree(hHeap, 0, v2);
        goto LABEL_24;
      }
    }
    else
    {
      if ( v4 != 0 )
        *(_DWORD *)(v4 + 4) = v2[1];
      v5 = *v2;
      if ( v2 == *(_DWORD **)(a1 + 4) )
      {
        *(_DWORD *)(a1 + 4) = v5;
        goto LABEL_14;
      }
    }
    *(_DWORD *)v2[1] = v5;
    goto LABEL_14;
  }
  if ( v2[5] == 1 && v3 >= v2[3] )
  {
    if ( *v2 != 0 )
      *(_DWORD *)(*v2 + 4) = v2[1];
    v6 = *v2;
    if ( v2 == *(_DWORD **)a1 )
      *(_DWORD *)a1 = v6;
    else
      *(_DWORD *)v2[1] = v6;
    *v2 = *(_DWORD *)(a1 + 4);
    v2[1] = 0;
    *(_DWORD *)(a1 + 4) = v2;
    if ( *v2 != 0 )
      *(_DWORD *)(*v2 + 4) = v2;
  }
LABEL_24:
  if ( *(_DWORD *)(a1 + 28) != 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
}

