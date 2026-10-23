// busybox.exe @ 0x4610c8 size=126

int __cdecl sub_4610C8(char a1, int a2)
{
  const char *String1; // eax
  const char **v3; // ebx
  double v4; // st7

  String1 = *(const char **)(a2 + 4);
  if ( String1 == nullptr )
    sub_418164();
  if ( strnicmp(String1, "inf", 3u) == 0 )
  {
    while ( 1 )
      sub_461010(0x7FFFFFFF);
  }
  v3 = (const char **)(a2 + 4);
  v4 = 0.0;
  do
    v4 = sub_449C6C(*v3++) + v4;
  while ( *v3 != nullptr );
  sub_461028(v4);
  return 0;
}

