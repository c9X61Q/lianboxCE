// busybox.exe @ 0x44e52c size=55

void __cdecl sub_44E52C(int a1, float *a2, const char *a3)
{
  float *i; // esi

  for ( i = a2; i != (float *)((char *)a2 + (a1 & 0xFFFFFFFC)); ++i )
    sub_46F088(a3, *i);
}

