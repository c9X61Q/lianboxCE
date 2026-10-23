// busybox.exe @ 0x44dbb0 size=34

int __cdecl sub_44DBB0(int a1, int a2)
{
  int v2; // eax
  int v3; // edx
  char v4; // cl

  v2 = 0;
  while ( 1 )
  {
    v3 = a1 + v2;
    v4 = *(_BYTE *)(a2 + v2);
    if ( v4 == 0 )
      break;
    ++v2;
    if ( *(_BYTE *)(a1 + v2 - 1) != v4 )
      return 0;
  }
  return v3;
}

