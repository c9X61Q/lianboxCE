// busybox.exe @ 0x41a460 size=88

int __cdecl sub_41A460(int a1, int a2)
{
  if ( (sub_435D44(a2, "^cfkvqdtzs123456789") & 0x60) != 0 )
    return sub_41A01C(a1, a2);
  else
    return sub_4186EC(
             (int *)(a2 + 4 * dword_473090),
             (__int64 (*)(void))sub_41E610,
             (int (*)(void))sub_414598,
             (int)"bz2");
}

