// lian86.exe @ 0x00410b90  size=237  name=sub_410B90
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_410B90(int a1, int a2, size_t a3)
{
  int v3; // esi
  int v4; // eax
  size_t v6; // edi
  size_t v7; // edi
  size_t v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax

  v3 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v3 + 56) == 0 )
  {
    v4 = (*(int (__cdecl **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1 << *(_DWORD *)(v3 + 40), 1);
    *(_DWORD *)(v3 + 56) = v4;
    if ( v4 == 0 )
      return 1;
  }
  if ( *(_DWORD *)(v3 + 44) == 0 )
  {
    *(_DWORD *)(v3 + 44) = 1 << *(_DWORD *)(v3 + 40);
    *(_DWORD *)(v3 + 52) = 0;
    *(_DWORD *)(v3 + 48) = 0;
  }
  v6 = *(_DWORD *)(v3 + 44);
  if ( a3 < v6 )
  {
    v7 = v6 - *(_DWORD *)(v3 + 52);
    if ( v7 > a3 )
      v7 = a3;
    memcpy((void *)(*(_DWORD *)(v3 + 52) + *(_DWORD *)(v3 + 56)), (const void *)(a2 - a3), v7);
    v8 = a3 - v7;
    if ( a3 == v7 )
    {
      *(_DWORD *)(v3 + 52) += v7;
      v10 = *(_DWORD *)(v3 + 44);
      if ( *(_DWORD *)(v3 + 52) == v10 )
        *(_DWORD *)(v3 + 52) = 0;
      v11 = *(_DWORD *)(v3 + 48);
      if ( v11 < v10 )
        *(_DWORD *)(v3 + 48) = v7 + v11;
      return 0;
    }
    else
    {
      memcpy(*(void **)(v3 + 56), (const void *)(a2 - v8), v8);
      v9 = *(_DWORD *)(v3 + 44);
      *(_DWORD *)(v3 + 52) = v8;
      *(_DWORD *)(v3 + 48) = v9;
      return 0;
    }
  }
  else
  {
    memcpy(*(void **)(v3 + 56), (const void *)(a2 - v6), v6);
    *(_DWORD *)(v3 + 48) = *(_DWORD *)(v3 + 44);
    *(_DWORD *)(v3 + 52) = 0;
    return 0;
  }
}

