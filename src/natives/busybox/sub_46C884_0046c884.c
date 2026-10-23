// busybox.exe @ 0x46c884 size=49

int __usercall sub_46C884@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx

  v3 = 0;
  while ( 1 )
  {
    v4 = *(unsigned __int8 *)(a1 + v3);
    v5 = *(unsigned __int8 *)(a2 + v3);
    if ( v4 != v5 )
      break;
    if ( *(_BYTE *)(a1 + v3) != 0 )
    {
      ++v3;
      if ( v4 != 61 )
        continue;
    }
    return v4 - v5;
  }
  if ( v4 == 61 )
    v4 = 0;
  if ( v5 == 61 )
    v5 = 0;
  return v4 - v5;
}

