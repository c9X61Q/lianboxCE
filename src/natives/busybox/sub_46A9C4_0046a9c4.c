// busybox.exe @ 0x46a9c4 size=94

int __cdecl sub_46A9C4(int a1, int a2)
{
  char v2; // al
  char v3; // dl

  v2 = sub_435D44(a2, (int)"cfkvqdt");
  v3 = dword_485AD0[2];
  if ( v3 != 0 )
  {
    if ( v3 == 99 )
      dword_486008 |= 1u;
  }
  else if ( (v2 & 0x60) == 0 )
  {
    sub_418164();
  }
  return sub_4186EC((int *)(a2 + 4 * dword_473090), (__int64 (*)(void))sub_469EE8, (int (*)(void))sub_441C48, (int)"xz");
}

