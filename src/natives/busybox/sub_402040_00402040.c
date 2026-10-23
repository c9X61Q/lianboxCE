// busybox.exe @ 0x402040 size=35

BOOL __usercall sub_402040@<eax>(int a1@<eax>)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 60) + a1;
  return *(_DWORD *)v1 == 17744 && *(_WORD *)(v1 + 24) == 267;
}

