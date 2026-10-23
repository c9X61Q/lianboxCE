// busybox.exe @ 0x45f2dc size=92

int __usercall sub_45F2DC@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  int i; // ebx
  unsigned int v7; // eax
  int v8; // ecx
  int v10; // [esp+0h] [ebp-14h]

  for ( i = *(_DWORD *)(a1 + 200); ; i = 0 )
  {
    v7 = a3;
    if ( a3 > *(_DWORD *)(a1 + 204) - i )
      v7 = *(_DWORD *)(a1 + 204) - i;
    v10 = v7 + i;
    v8 = a2 - i;
    while ( i != v10 )
    {
      *(_BYTE *)(a1 + i) ^= *(_BYTE *)(v8 + i);
      ++i;
    }
    a2 += v7;
    if ( *(_DWORD *)(a1 + 204) != i )
      break;
    a3 -= v7;
    sub_45F338(v8);
  }
  *(_DWORD *)(a1 + 200) = i;
  return v10;
}

