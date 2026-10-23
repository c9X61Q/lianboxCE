// busybox.exe @ 0x442f94 size=44

FILE *__cdecl sub_442F94(char *FileName, char *Mode)
{
  const char *v2; // ebx

  v2 = FileName;
  if ( sub_4336AC(FileName) == 0 )
    v2 = "nul";
  return fopen(v2, Mode);
}

