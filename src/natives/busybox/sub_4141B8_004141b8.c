// busybox.exe @ 0x4141b8 size=85

int __usercall sub_4141B8@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v4; // esi
  int *v5; // ebp
  int v6; // eax
  int v7; // edx

  v4 = sub_4728CC();
  v5 = (int *)(*(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 4));
  v6 = sub_471600();
  *v5 = v6;
  v7 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v7 + 1;
  *(_DWORD *)(v6 + 4 * v7) = v4;
  *(_DWORD *)(v6 + 4 * v7 + 4) = 0;
  *(_DWORD *)v4 = a2;
  *(_BYTE *)(v4 + 4) = *(_BYTE *)(a1 + 12);
  *(_BYTE *)(a1 + 12) = 0;
  return v4;
}

