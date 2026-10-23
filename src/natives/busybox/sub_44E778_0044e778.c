// busybox.exe @ 0x44e778 size=58

void __cdecl sub_44E778(unsigned int a1, double *a2, const char *a3)
{
  unsigned int i; // ebx

  for ( i = a1 / 0xC; i != 0; --i )
  {
    sub_46F088(a3, *a2);
    a2 = (double *)((char *)a2 + 12);
  }
}

