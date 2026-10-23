// busybox.exe @ 0x42f8b8 size=50

int __usercall sub_42F8B8@<eax>(int a1@<eax>, int *a2@<edx>)
{
  int v4; // ebp
  int v5; // edi

  v4 = *(_DWORD *)(a1 + 4);
  do
  {
    v5 = *a2;
    if ( *a2 == 0 )
      break;
    sub_42DB08(*a2, a1, 3);
    *a2 = *(_DWORD *)(v5 + 4);
  }
  while ( *(_DWORD *)v4 == 0 );
  return *(_DWORD *)v4;
}

