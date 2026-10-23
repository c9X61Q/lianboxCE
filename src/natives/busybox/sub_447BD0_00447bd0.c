// busybox.exe @ 0x447bd0 size=115

int __cdecl sub_447BD0(int a1, int a2)
{
  char v2; // cl
  int v3; // ecx
  int v4; // ecx
  int v5; // ebx
  unsigned int v6; // ecx
  _DWORD *v7; // ebx

  v2 = *(_BYTE *)(a2 + 24);
  if ( v2 == 4 )
  {
    v3 = *(_DWORD *)(a1 + 132);
    if ( v3 != 0 )
    {
      v4 = *(_DWORD *)(v3 + 4 * *(_DWORD *)(a2 + 20));
      *(_DWORD *)(a2 + 20) = v4;
      *(_DWORD *)(a1 + 80) |= 1 << v4;
    }
  }
  else if ( v2 == 17 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    if ( v5 != 0 && *(_BYTE *)(v5 + 24) == 17 )
    {
      v6 = *(_DWORD *)(v5 + 20);
      v7 = *(_DWORD **)(v5 + 4);
      *(_DWORD *)(a2 + 4) = v7;
      if ( v7 != nullptr )
        *v7 = a2;
      *(_DWORD *)(*(_DWORD *)(a1 + 132) + 4 * v6) = *(_DWORD *)(*(_DWORD *)(a1 + 132) + 4 * *(_DWORD *)(a2 + 20));
      if ( v6 <= 0x1F )
        *(_DWORD *)(a1 + 80) &= __ROL4__(-2, v6);
    }
  }
  return 0;
}

