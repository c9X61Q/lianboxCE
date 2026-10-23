// busybox.exe @ 0x44eaac size=55

void sub_44EAAC()
{
  const char *v0; // esi
  int i; // ebx

  v0 = (const char *)&unk_483F67;
  for ( i = 1; i != 23; ++i )
  {
    if ( *v0 != 0 )
      sub_46F088("%2u) %s\n", i, v0);
    v0 += 7;
  }
}

