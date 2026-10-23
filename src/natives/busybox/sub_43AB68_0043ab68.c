// busybox.exe @ 0x43ab68 size=131

int sub_43AB68()
{
  int result; // eax
  int i; // edx
  int j; // edx
  int k; // edx

  result = dword_486010;
  for ( i = 0; i != 286; ++i )
    *(_WORD *)(result + 4 * i + 1156) = 0;
  for ( j = 0; j != 30; ++j )
    *(_WORD *)(result + 4 * j + 3448) = 0;
  for ( k = 0; k != 19; ++k )
    *(_WORD *)(result + 4 * k + 4964) = 0;
  *(_WORD *)(result + 2180) = 1;
  *(_DWORD *)(result + 10964) = 0;
  *(_DWORD *)(result + 10960) = 0;
  *(_DWORD *)(result + 10944) = 0;
  *(_DWORD *)(result + 10948) = 0;
  *(_DWORD *)(result + 10952) = 0;
  *(_WORD *)(result + 10956) = 256;
  return result;
}

