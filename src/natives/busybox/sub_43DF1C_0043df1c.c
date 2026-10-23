// busybox.exe @ 0x43df1c size=93

int __cdecl sub_43DF1C(int a1, int a2)
{
  int *v2; // ebx

  sub_435D44(a2, (int)"^");
  v2 = (int *)(a2 + 4 * dword_473090);
  if ( sub_43DEB8(*v2, v2[1]) != 0 )
    sub_418014(v2[1], "can't create %slink '%s' to '%s'", "hard", (const char *)v2[1], (const char *)*v2);
  return 0;
}

