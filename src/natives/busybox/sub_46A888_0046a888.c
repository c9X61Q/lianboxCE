// busybox.exe @ 0x46a888 size=86

int __cdecl sub_46A888(char *Str)
{
  int v1; // ebx
  char *v2; // esi

  v1 = -1;
  if ( Str != nullptr && *Str != 0 && strchr(Str, 61) == nullptr )
  {
    v2 = (char *)sub_4708BC("%s=", Str);
    v1 = putenv(v2);
    free(v2);
  }
  return v1;
}

