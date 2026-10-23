// busybox.exe @ 0x456588 size=304

int __usercall sub_456588@<eax>(int a1@<eax>, int a2@<edx>, char a3@<cl>)
{
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v5 = a2 - *(_DWORD *)(a1 + 8);
  if ( v5 < 0 )
  {
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 60) = 0;
    *(_DWORD *)(a1 + 44) = (a3 & 1) == 0 ? 6 : 4;
    v5 = a2;
    if ( *(_BYTE *)(a1 + 59) == 0 )
      *(_DWORD *)(a1 + 4) = *(_DWORD *)a1;
  }
  if ( v5 != 0 )
  {
    if ( *(_DWORD *)(a1 + 16) <= v5 )
    {
      *(_DWORD *)(a1 + 12) = 0;
      v6 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + v5 + *(_DWORD *)a1 - 1);
      *(_DWORD *)(a1 + 16) = 0;
      v7 = *(_DWORD *)(a1 + 48);
      if ( v7 != 0 )
        LOBYTE(v6) = *(_BYTE *)(v7 + v6);
      v8 = (*(_DWORD *)(*(_DWORD *)(a1 + 52) + 4 * ((unsigned __int8)v6 >> 5)) >> v6) & 1;
      if ( v8 == 0 && (_BYTE)v6 == 10 && *(_BYTE *)(a1 + 61) != 0 )
        v8 = 2;
      *(_DWORD *)(a1 + 44) = v8;
    }
    else
    {
      *(_DWORD *)(a1 + 44) = sub_4564EC(a1, v5 - 1, a3);
      if ( *(_BYTE *)(a1 + 59) != 0 )
        memmove(*(void **)(a1 + 4), (const void *)(*(_DWORD *)(a1 + 4) + v5), *(_DWORD *)(a1 + 12) - v5);
      *(_DWORD *)(a1 + 12) -= v5;
      *(_DWORD *)(a1 + 16) -= v5;
    }
    if ( *(_BYTE *)(a1 + 59) == 0 )
      *(_DWORD *)(a1 + 4) += v5;
  }
  *(_DWORD *)(a1 + 8) = a2;
  v9 = *(_DWORD *)(a1 + 32) - v5;
  *(_DWORD *)(a1 + 32) = v9;
  *(_DWORD *)(a1 + 40) -= v5;
  if ( *(_BYTE *)(a1 + 59) != 0 )
  {
    if ( *(_BYTE *)(a1 + 56) != 0 )
    {
      sub_419F8C((_DWORD *)a1);
    }
    else if ( *(_DWORD *)(a1 + 48) != 0 )
    {
      sub_4566B8();
    }
  }
  else
  {
    *(_DWORD *)(a1 + 12) = v9;
  }
  *(_DWORD *)(a1 + 24) = 0;
  return 0;
}

