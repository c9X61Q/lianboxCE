// busybox.exe @ 0x472944 size=119

void __cdecl __noreturn sub_472944(int a1, char **a2)
{
  char **v2; // ebx
  FILE *(__cdecl *v3)(int); // edi
  FILE *Stream; // eax
  char **v5; // esi
  FILE *v6; // eax

  v2 = a2;
  *a2 = "y";
  if ( a2[1] != nullptr )
    v2 = a2 + 1;
  do
  {
    v3 = off_4730E8;
    Stream = off_4730E8(1);
    if ( ferror(Stream) != 0 )
      break;
    v5 = v2;
    while ( 1 )
    {
      v6 = v3(1);
      sub_46EF20(*v5++, v6);
      if ( *v5 == nullptr )
        break;
      sub_46F0B8(32);
    }
  }
  while ( sub_46F0B8(10) != -1 );
  sub_418048();
}

