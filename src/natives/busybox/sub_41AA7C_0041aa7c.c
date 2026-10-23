// busybox.exe @ 0x41aa7c size=63

int __cdecl sub_41AA7C(int a1, int a2)
{
  char v2; // dl
  int v3; // ecx
  bool v4; // zf
  int v5; // edx

  v2 = *(_BYTE *)(a2 + 24);
  v3 = *(_DWORD *)(a2 + 4);
  if ( v2 == 11 )
  {
    *(_DWORD *)(v3 + 16) = a2;
  }
  else
  {
    v4 = v2 == 16;
    v5 = *(_DWORD *)(a2 + 8);
    if ( v4 )
    {
      *(_DWORD *)(v3 + 16) = *(_DWORD *)(v5 + 12);
LABEL_9:
      *(_DWORD *)(v5 + 16) = *(_DWORD *)(a2 + 16);
      return 0;
    }
    if ( v3 != 0 )
      *(_DWORD *)(v3 + 16) = *(_DWORD *)(a2 + 16);
    if ( v5 != 0 )
      goto LABEL_9;
  }
  return 0;
}

