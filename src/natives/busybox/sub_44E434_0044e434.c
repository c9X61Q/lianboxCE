// busybox.exe @ 0x44e434 size=55

void __cdecl sub_44E434(int a1, double *a2, const char *a3)
{
  double *i; // esi

  for ( i = a2; i != (double *)((char *)a2 + (a1 & 0xFFFFFFF8)); ++i )
    sub_46F088(a3, *i);
}

