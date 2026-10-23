// busybox.exe @ 0x45b1b0 size=186

int __cdecl sub_45B1B0(int a1, int a2)
{
  char v2; // di
  char **v3; // esi
  int v4; // ebp
  char *Path; // ebx
  int v6; // edx
  char *v7; // eax

  v2 = sub_435D60(a2, (int)&unk_47A18C, (int)"parents");
  v3 = (char **)(a2 + 4 * dword_473090);
  if ( *v3 == nullptr )
    sub_418164();
  v4 = 0;
  do
  {
    Path = *v3;
    while ( 1 )
    {
      if ( (v2 & 2) != 0 )
        sub_46F088("rmdir: removing directory, '%s'\n", Path);
      if ( sub_443C74(Path) < 0 )
        break;
      if ( (v2 & 1) != 0 )
      {
        v7 = sub_403200(Path);
        Path = v7;
        if ( *v7 != 46 || v7[1] != 0 )
          continue;
      }
      goto LABEL_15;
    }
    if ( (v2 & 4) == 0 || *_errno() != 41 )
    {
      sub_417FE4(v6, "'%s'", Path);
      v4 = 1;
    }
LABEL_15:
    ++v3;
  }
  while ( *v3 != nullptr );
  return v4;
}

