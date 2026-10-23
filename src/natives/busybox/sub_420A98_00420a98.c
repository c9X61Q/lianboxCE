// busybox.exe @ 0x420a98 size=300

BOOL __usercall sub_420A98@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ecx
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // ebx
  int v8; // edx
  unsigned int v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  int i; // esi
  int v13; // esi

  v2 = dword_486010;
  v3 = *(_DWORD *)(dword_486010 - 88);
  v4 = *(_DWORD *)(dword_486010 + 10944);
  *(_DWORD *)(dword_486010 + 10944) = v4 + 1;
  *(_BYTE *)(v3 + v4) = a2;
  if ( a1 != 0 )
  {
    v5 = a1 - 1;
    ++*(_WORD *)(v2 + 4 * *(unsigned __int8 *)(v2 + a2 + 5841) + 2184);
    if ( v5 > 255 )
      v6 = *(unsigned __int8 *)(v2 + (v5 >> 7) + 6353);
    else
      v6 = *(unsigned __int8 *)(v2 + v5 + 6097);
    ++*(_WORD *)(v2 + 4 * v6 + 3448);
    v7 = *(_DWORD *)(v2 - 84);
    v8 = *(_DWORD *)(v2 + 10948);
    *(_DWORD *)(v2 + 10948) = v8 + 1;
    *(_WORD *)(v7 + 2 * v8) = v5;
    *(_BYTE *)(v2 + 10956) |= *(_BYTE *)(v2 + 10957);
  }
  else
  {
    ++*(_WORD *)(v2 + 4 * a2 + 1156);
  }
  *(_BYTE *)(v2 + 10957) *= 2;
  v9 = *(_DWORD *)(v2 + 10944);
  if ( (v9 & 7) == 0 )
  {
    v10 = *(_DWORD *)(v2 + 10952);
    *(_DWORD *)(v2 + 10952) = v10 + 1;
    *(_BYTE *)(v2 + v10 + 6848) = *(_BYTE *)(v2 + 10956);
    *(_WORD *)(v2 + 10956) = 256;
  }
  if ( (v9 & 0xFFF) != 0 )
    goto LABEL_14;
  v11 = 8 * v9;
  for ( i = 0; i != 30; ++i )
    v11 += *(unsigned __int16 *)(v2 + 4 * i + 3448) * ((unsigned __int8)byte_47FAE0[i] + 5);
  if ( *(_DWORD *)(v2 + 10948) >= v9 >> 1
    || (v13 = 1, (unsigned int)(*(_DWORD *)(v2 - 32) - *(_DWORD *)(v2 - 44)) >> 1 <= v11 >> 3) )
  {
LABEL_14:
    v13 = 1;
    if ( v9 != 0x7FFF )
      return *(_DWORD *)(v2 + 10948) == 0x8000;
  }
  return v13;
}

