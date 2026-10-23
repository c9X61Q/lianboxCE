// busybox.exe @ 0x41a01c size=79

int __cdecl sub_41A01C(int a1, int a2)
{
  sub_435D44(a2, "cfkvqdt");
  if ( dword_485AD0[2] == 99 )
    dword_486008 |= 1u;
  return sub_4186EC(
           (int *)(a2 + 4 * dword_473090),
           (__int64 (*)(void))sub_468C1C,
           (int (*)(void))&sub_441C48,
           (int)"bz2");
}

