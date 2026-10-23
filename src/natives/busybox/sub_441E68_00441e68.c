// busybox.exe @ 0x441e68 size=242

int __usercall sub_441E68@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v3; // eax
  int v4; // esi
  int i; // ebp
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edx
  int v10; // ecx
  int v12; // [esp+0h] [ebp-14h]

  v3 = dword_4734B4;
  v4 = dword_473440;
  for ( i = dword_473440; --v3 >= 0; i += 32 )
  {
    if ( (*(_BYTE *)(i + 25) & 2) == 0 )
      goto LABEL_16;
    if ( (*(_DWORD *)(i + 24) & 0x1FF) == 0x102 )
    {
      sub_431EDC(i, a2);
      goto LABEL_16;
    }
  }
  v6 = 32 * dword_4734B4;
  v7 = sub_471600(a2, 32 * dword_4734B4 + 128);
  v8 = v7 - v4;
  v9 = v6;
  if ( v7 != v4 )
  {
    while ( v9 != 0 )
    {
      v9 -= 32;
      v12 = *(_DWORD *)(v7 + v9 + 16);
      if ( v12 == v4 + v9 )
        *(_DWORD *)(v7 + v9 + 16) = v8 + v12;
      v10 = *(_DWORD *)(v7 + v9 + 28);
      if ( v10 != 0 )
        *(_DWORD *)(v7 + v9 + 28) = v8 + v10;
    }
    if ( dword_4732C4 != 0 )
      dword_4732C4 += v8;
  }
  dword_4734B4 += 4;
  dword_473440 = v7;
  i = v7 + v6;
  *(_BYTE *)(i + 121) &= ~2u;
  *(_BYTE *)(i + 89) &= ~2u;
  *(_BYTE *)(i + 57) &= ~2u;
  *(_BYTE *)(i + 25) &= ~2u;
LABEL_16:
  memset((void *)i, 0, 0x20u);
  *(_DWORD *)(i + 28) = dword_4732C4;
  dword_4732C4 = i;
  *(_BYTE *)(i + 25) |= 2u;
  *(_DWORD *)(i + 16) = i;
  if ( a1 > 1 )
    *(_DWORD *)(i + 16) = sub_470E78();
  return i;
}

