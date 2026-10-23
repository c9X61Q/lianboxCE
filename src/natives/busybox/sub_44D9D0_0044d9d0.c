// busybox.exe @ 0x44d9d0 size=156

char sub_44D9D0()
{
  _DWORD *v0; // ebx
  int v1; // edx
  char v2; // al
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // ecx
  int v6; // edx

  v0 = *((_DWORD **)off_473358 + 7);
  ++*(_DWORD *)(dword_485FF0 + 56);
  v1 = v0[3];
  if ( v1 != 0 )
  {
    v2 = *(_BYTE *)(*((_DWORD *)off_473358 + 5) - 1);
    if ( v2 == 32 || v2 == 9 )
      byte_473198 |= 1u;
    if ( v0[4] != *(_DWORD *)(v1 + 8) )
      sub_4631A8();
    v3 = v0[3];
    v4 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = v4 & 0xFFFFFFFE;
    if ( (v4 & 2) != 0 )
      sub_467DE4();
  }
  v5 = off_473358;
  *((_DWORD *)off_473358 + 5) = v0[1];
  v5[3] = v0[2];
  v5[18] = v0[7];
  v6 = v0[6];
  v5[16] = v0[5];
  v5[17] = v6;
  v5[7] = *v0;
  if ( v0 != v5 + 8 )
    sub_4631A8();
  return sub_43B8DC();
}

