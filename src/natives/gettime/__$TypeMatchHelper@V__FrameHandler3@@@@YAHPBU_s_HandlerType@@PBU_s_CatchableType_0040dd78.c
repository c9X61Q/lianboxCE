// gettime.exe @ 0x40dd78 size=142

int __cdecl TypeMatchHelper<__FrameHandler3>(int a1, int a2, _BYTE *a3)
{
  int v3; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // eax

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == 0 || *(_BYTE *)(v3 + 8) == 0 || *(char *)a1 < 0 && (*(_BYTE *)a2 & 0x10) != 0 )
    return 1;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = 0;
  if ( v3 != v4 )
  {
    v6 = strcmp((const char *)(v3 + 8), (const char *)(v4 + 8));
    if ( v6 != 0 )
      v6 = v6 < 0 ? -1 : 1;
    if ( v6 != 0 )
      return 0;
  }
  if ( ((*(_BYTE *)a2 & 2) == 0 || (*(_BYTE *)a1 & 8) != 0)
    && ((*a3 & 1) == 0 || (*(_BYTE *)a1 & 1) != 0)
    && ((*a3 & 2) == 0 || (*(_BYTE *)a1 & 2) != 0) )
  {
    return 1;
  }
  return v5;
}

