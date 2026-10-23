// busybox.exe @ 0x453480 size=98

int __cdecl sub_453480(int a1)
{
  _DWORD *v1; // esi
  void *v2; // ebp
  int v3; // edx
  int v4; // edx
  int v5; // edx

  v1 = *(_DWORD **)a1;
  v2 = *(void **)(a1 + 16);
  memset(v2, 0, 0x100u);
  sub_4534E4(v2, v1[9]);
  v3 = v1[10];
  if ( v1[9] != v3 )
    sub_4534E4(v2, v3);
  v4 = v1[11];
  if ( v1[9] != v4 )
    sub_4534E4(v2, v4);
  v5 = v1[12];
  if ( v1[9] != v5 )
    sub_4534E4(v2, v5);
  *(_BYTE *)(a1 + 28) |= 8u;
  return 0;
}

