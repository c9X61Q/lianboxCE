// busybox.exe @ 0x43c5b0 size=62

int __usercall sub_43C5B0@<eax>(int a1@<eax>, int a2@<edx>)
{
  int i; // ebx
  int v4; // edx
  char v5; // cl
  char v6; // dl

  for ( i = 0; ; ++i )
  {
    v4 = a1 + i;
    v5 = *(_BYTE *)(a2 + i);
    if ( v5 == 0 )
      break;
    if ( (unsigned __int8)(v5 - 65) <= 0x19u )
      v5 += 32;
    v6 = *(_BYTE *)(a1 + i);
    if ( (unsigned __int8)(v6 - 65) <= 0x19u )
      v6 += 32;
    if ( v6 != v5 )
      return 0;
  }
  return v4;
}

