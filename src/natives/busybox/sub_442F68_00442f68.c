// busybox.exe @ 0x442f68 size=44

int __cdecl sub_442F68(int a1, int a2)
{
  int Code; // eax

  Code = sub_444858(a2, a1, environ);
  if ( Code != -1 )
    exit(Code);
  return -1;
}

