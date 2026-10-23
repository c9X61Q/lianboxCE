// busybox.exe @ 0x429af0 size=213

void __cdecl __noreturn sub_429AF0(int a1, int a2)
{
  char v2; // al
  int *v3; // ebx
  _BYTE *v4; // edx
  char *Str; // esi
  char **v6; // ebx

  v2 = sub_435D60(a2, "+iu:*", "ignore-environment");
  v3 = (int *)(a2 + 4 * dword_473090);
  v4 = (_BYTE *)*v3;
  if ( *v3 != 0 && *v4 == 45 && v4[1] == 0 )
  {
    v2 |= 1u;
    ++v3;
  }
  if ( (v2 & 1) != 0 )
    sub_41CAF8();
  while ( 1 )
  {
    Str = (char *)*v3;
    if ( *v3 == 0 )
      break;
    if ( strchr(Str, 61) == nullptr )
      sub_411B58(v3);
    if ( sub_443A9C(Str) < 0 )
      sub_41823C("putenv");
    ++v3;
  }
  v6 = environ;
  if ( environ != nullptr )
  {
    while ( *v6 != nullptr )
      sub_46F108(*v6++);
  }
  sub_42F138();
}

