// busybox.exe @ 0x466be8 size=95

char __usercall sub_466BE8@<al>(int a1@<eax>)
{
  int v2; // esi
  int v3; // edx
  int v4; // edi
  _BYTE *Block; // eax
  _BYTE *v7; // [esp+Ch] [ebp-10h] BYREF

  if ( *(_BYTE *)a1 != 1 )
    return 1;
  v2 = sub_4041F0(*(char **)(a1 + 8), &v7, 10);
  v4 = v3;
  Block = *(_BYTE **)(a1 + 8);
  if ( Block == v7 || *v7 != 0 )
    return 0;
  free(Block);
  *(_DWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 12) = v4;
  *(_BYTE *)a1 = 0;
  return 1;
}

