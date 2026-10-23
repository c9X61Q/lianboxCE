// busybox.exe @ 0x401560 size=82

int sub_401560()
{
  int v0; // ebx
  int v2; // eax

  v2 = 0;
  do
    v0 = v2++;
  while ( dword_4729D0[v2] != 0 );
  for ( ; v0 != 0; --v0 )
    ((void (*)(void))dword_4729D0[v0])();
  return sub_4014D0((_onexit_t)sub_401520);
}

