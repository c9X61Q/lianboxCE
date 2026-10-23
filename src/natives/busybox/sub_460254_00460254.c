// busybox.exe @ 0x460254 size=52

void __usercall sub_460254(int a1@<eax>)
{
  int i; // ebx

  if ( a1 != 0 )
  {
    for ( i = 0; *(_DWORD *)(a1 + 16) > i; ++i )
      sub_46F088("%4d %s\n", i, *(const char **)(a1 + 4 * i + 36));
  }
}

