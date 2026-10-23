// busybox.exe @ 0x407cd0 size=57

int __cdecl sub_407CD0(int a1, int a2, int a3)
{
  int result; // eax

  result = sub_40CB90(0x4000, a1, 0, a2, a3);
  *(_BYTE *)(a1 + result) = 0;
  return result;
}

