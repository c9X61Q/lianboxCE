// busybox.exe @ 0x432230 size=90

int __cdecl sub_432230(int a1, _BYTE *a2)
{
  int v2; // ecx
  int v3; // eax

  sub_470BC0();
  if ( *a2 != 45 || a2[1] != 0 )
    sub_47154C(v2, 0);
  v3 = sub_43228C();
  if ( v3 != 125 && v3 != 150 )
    sub_4320C4("STOR");
  return sub_452724();
}

