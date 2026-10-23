// busybox.exe @ 0x44f158 size=94

void __cdecl __noreturn sub_44F158(int a1, int a2)
{
  char **v2; // ebx
  char **v3; // ebx
  char v4; // si
  char *v5; // eax
  char *v6; // eax

  v2 = (char **)a2;
  if ( *(_DWORD *)(a2 + 4) != 0 )
  {
    v4 = 0;
    while ( *++v2 != nullptr )
    {
      v6 = sub_44328C(*v2);
      if ( v6 != nullptr )
        sub_46F108(v6);
      else
        v4 = 1;
    }
  }
  else
  {
    v3 = environ;
    if ( environ != nullptr )
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 == nullptr )
          break;
        ++v3;
        sub_46F108(v5);
      }
    }
    v4 = 0;
  }
  sub_42F138(v4);
}

