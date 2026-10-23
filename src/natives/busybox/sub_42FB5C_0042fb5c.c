// busybox.exe @ 0x42fb5c size=91

char __usercall sub_42FB5C@<al>(int a1@<eax>, _DWORD *a2@<edx>)
{
  int v2; // edi
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  char v6; // dl

  v2 = *(_DWORD *)(a1 + 160);
  v3 = a2[1];
  v4 = *(_DWORD *)(a1 + 164) - v2;
  if ( v4 > a2[2] - v3 )
    v4 = a2[2] - v3;
  qmemcpy((void *)(a1 + v2 + 168), (const void *)(*a2 + v3), v4);
  a2[1] += v4;
  v5 = *(_DWORD *)(a1 + 160) + v4;
  *(_DWORD *)(a1 + 160) = v5;
  v6 = 0;
  if ( v5 == *(_DWORD *)(a1 + 164) )
  {
    *(_DWORD *)(a1 + 160) = 0;
    return 1;
  }
  return v6;
}

