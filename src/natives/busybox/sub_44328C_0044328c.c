// busybox.exe @ 0x44328c size=87

char *__cdecl sub_44328C(char *Str1)
{
  char *v1; // ebx

  v1 = getenv(Str1);
  if ( v1 != nullptr )
    return v1;
  if ( strcmp(Str1, "TMPDIR") != 0 )
    return v1;
  v1 = getenv("TMP");
  if ( v1 != nullptr )
    return v1;
  else
    return getenv("TEMP");
}

