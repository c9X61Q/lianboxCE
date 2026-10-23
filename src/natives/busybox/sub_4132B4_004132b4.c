// busybox.exe @ 0x4132b4 size=69

void sub_4132B4()
{
  char *v0; // esi
  const char *Str; // edi
  char *v2; // eax
  char *v3; // ebx

  v0 = (char *)sub_47188C();
  Str = v0;
  do
  {
    v2 = strchr(Str, 10);
    v3 = v2;
    if ( v2 != nullptr )
      *v2 = 0;
    sub_412DC4(Str);
    Str = v3 + 1;
  }
  while ( v3 != nullptr );
  free(v0);
}

