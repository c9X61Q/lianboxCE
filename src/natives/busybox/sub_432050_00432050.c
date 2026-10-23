// busybox.exe @ 0x432050 size=114

int __cdecl sub_432050(int a1, int a2)
{
  const char **v2; // esi
  int v3; // edi
  int FileHandle; // eax
  int v5; // ebx
  int v6; // edx

  sub_435D44(a2, "^d");
  v2 = (const char **)(a2 + 4 * dword_473090);
  v3 = 0;
  do
  {
    FileHandle = sub_447A60();
    v5 = FileHandle;
    if ( FileHandle < 0 )
    {
      v3 = 1;
    }
    else
    {
      if ( sub_431FE8(FileHandle) != 0 )
      {
        sub_418224(*v2, v6);
        v3 = 1;
      }
      sub_442EA4(v5);
    }
    ++v2;
  }
  while ( *v2 != nullptr );
  return v3;
}

