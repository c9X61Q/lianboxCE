// busybox.exe @ 0x4209d0 size=166

int __usercall sub_4209D0@<eax>(int a1@<eax>, int *a2@<edx>, int *a3@<ecx>, _DWORD *a4)
{
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ebp

  if ( *(_DWORD *)(a1 + 64) == 31 )
  {
    v6 = malloc(0x3E4u);
    v7 = (int)v6;
    if ( v6 == nullptr )
      return v7;
    *v6 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = v6;
    *(_DWORD *)(a1 + 64) = 0;
  }
  v8 = *(_DWORD *)(a1 + 56);
  v9 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 64) = v9 + 1;
  v7 = v8 + 32 * v9 + 4;
  v10 = v8 + 32 * v9;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = a2;
  *(_DWORD *)(v10 + 12) = a3;
  v11 = a4[1];
  *(_DWORD *)(v10 + 24) = *a4;
  *(_DWORD *)(v10 + 28) = v11;
  *(_BYTE *)(v10 + 30) &= 0xF3u;
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 32) = -1;
  if ( a2 != nullptr )
    *a2 = v7;
  if ( a3 != nullptr )
    *a3 = v7;
  return v7;
}

