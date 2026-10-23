// busybox.exe @ 0x432754 size=65

int __usercall sub_432754@<eax>(char *Path@<eax>, int a2@<edx>)
{
  int v3; // eax
  int v4; // edx

  if ( (*(_DWORD *)(a2 + 16) & 0xF000) == 0x4000 )
  {
    if ( *Path == 46 && Path[1] == 0 )
      return 1;
    v3 = sub_443C74(Path);
  }
  else
  {
    v3 = sub_444ECC(Path);
  }
  if ( v3 < 0 )
    sub_418224(Path, v4);
  return 1;
}

