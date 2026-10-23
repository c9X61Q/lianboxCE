// busybox.exe @ 0x4336ac size=65

int __cdecl sub_4336AC(char *Str1)
{
  int v1; // ecx

  if ( Str1 != nullptr && strncmp(Str1, "/dev/", 5u) == 0 )
    return sub_439918(v1, Str1 + 5);
  else
    return -1;
}

