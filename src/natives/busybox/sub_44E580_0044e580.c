// busybox.exe @ 0x44e580 size=51

void __cdecl sub_44E580(int a1, _DWORD *a2, const char *a3)
{
  _DWORD *i; // esi

  for ( i = a2; i != (_DWORD *)((char *)a2 + (a1 & 0xFFFFFFFC)); ++i )
    sub_46F088(a3, *i);
}

