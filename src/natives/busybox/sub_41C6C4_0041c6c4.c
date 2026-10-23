// busybox.exe @ 0x41c6c4 size=115

int __fastcall sub_41C6C4(int a1, int a2)
{
  int v3; // eax
  int v4; // edx

  strcpy((char *)(a2 + 257), "ustar  ");
  *(_DWORD *)(a2 + 148) = 538976288;
  *(_DWORD *)(a2 + 152) = 538976288;
  v3 = 0;
  v4 = 0;
  do
    v4 += *(unsigned __int8 *)(a2 + v3++);
  while ( v3 != 512 );
  sub_4528E0(v4, v4 >> 31);
  return sub_471D00(512, a2);
}

