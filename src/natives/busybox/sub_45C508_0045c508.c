// busybox.exe @ 0x45c508 size=88

int __usercall sub_45C508@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v6; // esi
  int v7; // edx

  while ( 1 )
  {
    v6 = sub_44D290(a1, a2, a3);
    if ( v6 >= 0 )
      break;
    if ( a3 > 0 )
      --a3;
    if ( *_errno() != 4 && *_errno() != 12 )
    {
      sub_418224("poll", v7);
      return v6;
    }
  }
  return v6;
}

