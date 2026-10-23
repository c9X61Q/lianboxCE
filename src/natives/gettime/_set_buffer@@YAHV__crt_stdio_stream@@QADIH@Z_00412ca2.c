// gettime.exe @ 0x412ca2 size=51

int __cdecl set_buffer(int a1, int a2, int a3, unsigned int a4)
{
  _InterlockedOr((volatile signed __int32 *)(a1 + 12), a4);
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  return 0;
}

