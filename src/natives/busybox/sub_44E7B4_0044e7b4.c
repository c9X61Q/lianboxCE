// busybox.exe @ 0x44e7b4 size=58

void __cdecl sub_44E7B4(int a1, _DWORD *a2, const char *a3)
{
  _DWORD *i; // esi

  for ( i = a2; i != (_DWORD *)((char *)a2 + (a1 & 0xFFFFFFF8)); i += 2 )
    sub_46F088(a3, *i, i[1]);
}

