// busybox.exe @ 0x45419c size=53

int __usercall sub_45419C@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ecx
  int v3; // ebx

  if ( a1 == 0 || a2 == 0 )
    return 0;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( v2 == *(_DWORD *)(a2 + 4) )
  {
    while ( --v2 >= 0 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v2) != *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v2) )
        return 0;
    }
    return 1;
  }
  return v3;
}

