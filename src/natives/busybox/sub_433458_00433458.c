// busybox.exe @ 0x433458 size=195

int __usercall sub_433458@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v11; // [esp+Ch] [ebp-14h]

  v4 = *(_DWORD *)a1;
  v11 = 0;
  while ( a2 > v4 )
  {
    if ( *(_DWORD *)(a1 + 20) == *(_DWORD *)(a1 + 16) )
    {
      v5 = sub_46F148(*(_DWORD *)(a1 + 8), *(LPSTR *)(a1 + 24), 4096);
      *(_DWORD *)(a1 + 16) = v5;
      if ( v5 <= 0 )
        longjmp(*(int **)(a1 + 68), -3);
      *(_DWORD *)(a1 + 20) = 0;
    }
    v6 = *(_DWORD *)(a1 + 4);
    if ( v4 > 23 )
    {
      a2 -= v4;
      v11 = (v6 & ~(-1 << v4)) << a2;
      v4 = 0;
    }
    v7 = *(_DWORD *)(a1 + 24);
    v8 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = v8 + 1;
    *(_DWORD *)(a1 + 4) = *(unsigned __int8 *)(v7 + v8) | (v6 << 8);
    v4 += 8;
  }
  v9 = v4 - a2;
  *(_DWORD *)a1 = v9;
  return v11 | ((1 << a2) - 1) & (*(_DWORD *)(a1 + 4) >> v9);
}

