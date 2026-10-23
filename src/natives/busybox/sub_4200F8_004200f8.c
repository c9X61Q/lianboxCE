// busybox.exe @ 0x4200f8 size=81

int __usercall sub_4200F8@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  int v2; // ebp
  int v3; // esi
  int v4; // ecx
  int v5; // ebx
  unsigned int v6; // ecx

  v2 = a2[2];
  while ( 1 )
  {
    v3 = a2[1];
    if ( v3 == v2 )
      return 0;
    v4 = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)(a1 + 24) >> v4;
    a2[1] = v3 + 1;
    if ( *(_BYTE *)(*a2 + v3) != (_BYTE)v5 )
      break;
    v6 = v4 + 8;
    *(_DWORD *)(a1 + 4) = v6;
    if ( v6 > 0x1F )
    {
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 4) = 0;
      return 1;
    }
  }
  return 7;
}

