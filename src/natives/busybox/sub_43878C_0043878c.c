// busybox.exe @ 0x43878c size=193

int sub_43878C()
{
  int v0; // esi
  unsigned int v1; // ebx
  int i; // eax
  const char *v3; // esi

  sub_4480E8("Built-in commands:\n------------------\n");
  v0 = 0;
  v1 = 0;
  for ( i = 9; ; i = v1 == 0 ? 9 : 32 )
  {
    v1 += sub_4480E8("%c%s", i, (&off_47E040)[2 * v0] + 1);
    if ( v1 > 0x3C )
    {
      sub_4480E8("\n");
      v1 = 0;
    }
    if ( ++v0 == 40 )
      break;
  }
  v3 = "[";
  while ( *v3 != 0 )
  {
    v1 += sub_4480E8("%c%s", v1 == 0 ? 9 : 32, v3);
    if ( v1 > 0x3C )
    {
      sub_4480E8("\n");
      v1 = 0;
    }
    do
      ++v3;
    while ( *(v3 - 1) != 0 );
  }
  off_4730E8(1);
  sub_446194();
  return 0;
}

