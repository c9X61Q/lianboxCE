// busybox.exe @ 0x45a270 size=36

int __usercall sub_45A270@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax
  int i; // ecx
  int v6; // edi
  char v7; // dl

  result = 0;
  for ( i = 0; ; ++i )
  {
    v6 = result;
    if ( a2 == i )
      break;
    v7 = *(_BYTE *)(a1 + i);
    if ( v7 != 13 )
    {
      ++result;
      *(_BYTE *)(a1 + v6) = v7;
    }
  }
  return result;
}

