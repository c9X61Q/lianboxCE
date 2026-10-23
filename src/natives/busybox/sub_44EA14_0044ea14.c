// busybox.exe @ 0x44ea14 size=47

void __cdecl sub_44EA14(int a1, char *a2, const char *a3)
{
  char *i; // ebx

  for ( i = a2; i != &a2[a1]; ++i )
    sub_46F088(a3, *i);
}

