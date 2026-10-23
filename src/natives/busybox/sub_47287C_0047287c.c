// busybox.exe @ 0x47287c size=77

int __usercall sub_47287C@<eax>(int a1@<eax>)
{
  void *v2; // ebx

  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v2 = (void *)(a1 + 64);
  memset(v2, 0, 0x30u);
  memset((void *)(a1 + 112), 0, 0x30u);
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 12;
  return 0;
}

