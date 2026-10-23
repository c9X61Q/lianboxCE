// lian86.exe @ 0x0040b8b6  size=219  name=sub_40B8B6
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void *__cdecl sub_40B8B6(int a1, _DWORD *a2)
{
  unsigned int i; // edx
  unsigned int j; // edx
  char Src[8]; // [esp+10h] [ebp-8h] BYREF

  for ( i = 0; i < 8; ++i )
    Src[i] = a2[(i < 4) + 5] >> (8 * (3 - (i & 3)));
  sha1_update(a2, byte_4136F0, 1u);
  while ( (a2[5] & 0x1F8) != 0x1C0 )
    sha1_update(a2, byte_4136F4, 1u);
  sha1_update(a2, Src, 8u);
  for ( j = 0; j < 0x14; ++j )
    *(_BYTE *)(j + a1) = a2[j >> 2] >> (8 * (3 - (j & 3)));
  memset(a2 + 7, 0, 0x40u);
  memset(a2, 0, 0x14u);
  memset(a2 + 5, 0, 8u);
  memset(Src, 0, sizeof(Src));
  return memset(a2 + 24, 0, 0x40u);
}

