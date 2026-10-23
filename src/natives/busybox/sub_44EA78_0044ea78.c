// busybox.exe @ 0x44ea78 size=52

void __cdecl sub_44EA78(int a1, unsigned __int16 *a2, const char *a3)
{
  unsigned __int16 *i; // esi

  for ( i = a2; i != (unsigned __int16 *)((char *)a2 + (a1 & 0xFFFFFFFE)); ++i )
    sub_46F088(a3, *i);
}

