// busybox.exe @ 0x44e140 size=47

void __cdecl sub_44E140(int a1, unsigned __int8 *a2, const char *a3)
{
  unsigned __int8 *i; // ebx

  for ( i = a2; i != &a2[a1]; ++i )
    sub_46F088(a3, *i);
}

