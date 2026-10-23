// busybox.exe @ 0x43eb98 size=85

int __cdecl sub_43EB98(int a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  int *v4; // eax
  int v5; // ecx
  int *v6; // eax
  _DWORD v8[2]; // [esp+0h] [ebp-8h] BYREF

  v2 = a1;
  v8[0] = 0;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 != 0 && *(_BYTE *)(v3 + 24) == 17 )
  {
    v4 = sub_43EAA4(v8, a1, v3);
    *(_DWORD *)(a2 + 4) = v4;
    v2 = a1;
    if ( v4 != nullptr )
      *v4 = a2;
  }
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 != 0 && *(_BYTE *)(v5 + 24) == 17 )
  {
    v6 = sub_43EAA4(v8, v2, v5);
    *(_DWORD *)(a2 + 8) = v6;
    if ( v6 != nullptr )
      *v6 = a2;
  }
  return v8[0];
}

