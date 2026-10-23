// lian86.exe @ 0x0040dbff  size=350  name=sub_40DBFF
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40DBFF(int a1)
{
  _DWORD *v1; // ebp
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  signed int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  v1 = nullptr;
  if ( *(_DWORD *)(a1 + 28) != 0 )
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v2 = *(_DWORD **)(a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = v2[5];
    if ( v3 <= 0 )
    {
      v4 = v2[4];
      v1 = (_DWORD *)((char *)v2 + v4 * *(_DWORD *)(a1 + 16) + 24);
      v2[4] = v4 + 1;
    }
    else
    {
      v1 = (_DWORD *)v2[2];
      v2[2] = *v1;
      v2[5] = v3 - 1;
    }
    if ( v2[5] == 0 && v2[4] >= v2[3] )
    {
      if ( *v2 != 0 )
        *(_DWORD *)(*v2 + 4) = v2[1];
      v5 = *v2;
      if ( v2 == *(_DWORD **)(a1 + 4) )
        *(_DWORD *)(a1 + 4) = v5;
      else
        *(_DWORD *)v2[1] = v5;
      *v2 = *(_DWORD *)a1;
      v2[1] = 0;
      *(_DWORD *)a1 = v2;
      if ( *v2 != 0 )
        *(_DWORD *)(*v2 + 4) = v2;
    }
  }
  else
  {
    v6 = (*(int *)(a1 + 12) >> 4) & 0xFFFFFFF0;
    if ( v6 >= *(_DWORD *)(a1 + 20) )
    {
      if ( v6 > *(_DWORD *)(a1 + 24) )
        v6 = *(_DWORD *)(a1 + 24);
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 20);
    }
    v7 = HeapAlloc(hHeap, 0, v6 * *(_DWORD *)(a1 + 16) + 24);
    v2 = v7;
    if ( v7 != nullptr )
    {
      v7[3] = v6;
    }
    else
    {
      v8 = HeapAlloc(hHeap, 0, *(_DWORD *)(a1 + 16) + 24);
      v2 = v8;
      if ( v8 == nullptr )
        goto LABEL_30;
      v8[3] = 1;
    }
    *(_DWORD *)(a1 + 12) += v2[3];
    v2[4] = 1;
    v2[5] = 0;
    v2[2] = 0;
    if ( (int)v2[3] <= 1 )
    {
      *v2 = *(_DWORD *)a1;
      v2[1] = 0;
      *(_DWORD *)a1 = v2;
    }
    else
    {
      *v2 = *(_DWORD *)(a1 + 4);
      v2[1] = 0;
      *(_DWORD *)(a1 + 4) = v2;
    }
    if ( *v2 != 0 )
      *(_DWORD *)(*v2 + 4) = v2;
    v1 = v2 + 6;
  }
LABEL_30:
  if ( *(_DWORD *)(a1 + 28) != 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( v1 == nullptr )
    return nullptr;
  *v1 = v2;
  return v1 + 1;
}

