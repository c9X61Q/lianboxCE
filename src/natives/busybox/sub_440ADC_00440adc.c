// busybox.exe @ 0x440adc size=132

int __cdecl sub_440ADC(int a1, int a2)
{
  int v2; // esi
  char v3; // al

  sub_435D44(a2, (int)"cfUvqdt123456789CFk");
  v2 = dword_473090;
  if ( (dword_486008 & 0x40000) != 0 )
    dword_486008 |= 4u;
  else
    dword_486008 ^= 4u;
  v3 = dword_485AD0[4];
  if ( v3 == 99 )
  {
    dword_486008 |= 0x21u;
  }
  else if ( v3 == 111 )
  {
    dword_486008 |= 0x20u;
  }
  sub_4367A0();
  return sub_4186EC((int *)(a2 + 4 * v2), (__int64 (*)(void))sub_448590, (int (*)(void))&sub_441D18, 0);
}

