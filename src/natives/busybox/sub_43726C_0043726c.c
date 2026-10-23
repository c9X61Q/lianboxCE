// busybox.exe @ 0x43726c size=281

int __cdecl sub_43726C(int a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // eax
  int v7; // esi

  dword_486010 = sub_4728CC() + 88;
  v2 = sub_435D60(a2, (int)"cfkvqdtn123456789", (int)"stdout");
  if ( (v2 & 0x60) != 0 )
    return sub_437210(a1, a2);
  v4 = v2 >> 8;
  if ( v4 == 0 )
    v4 = 32;
  v5 = !_BitScanForward(&v4, v4 >> 4);
  v6 = v5 ? 0 : v4 + 1;
  v7 = dword_486010;
  *(_DWORD *)(dword_486010 - 68) = v6;
  *(_DWORD *)(v7 - 64) = 1 << byte_47FDC5[4 * v6];
  *(_DWORD *)(v7 - 56) = (unsigned __int8)byte_47FDC4[4 * v6];
  *(_DWORD *)(v7 - 60) = 2 * (unsigned __int8)byte_47FDC6[4 * v6];
  *(_DWORD *)(v7 - 52) = 2 * (unsigned __int8)byte_47FDC7[4 * v6];
  dword_486008 &= 0x1Fu;
  *(_DWORD *)(v7 - 88) = sub_4728CC();
  *(_DWORD *)(v7 - 80) = sub_4728CC();
  *(_DWORD *)(v7 - 84) = sub_4728CC();
  *(_DWORD *)(v7 - 76) = sub_4728CC();
  *(_DWORD *)(v7 - 72) = sub_4728CC();
  sub_4367A0();
  return sub_4186EC((int *)(a2 + 4 * dword_473090), (__int64 (*)(void))sub_448270, (int (*)(void))sub_414598, (int)"gz");
}

