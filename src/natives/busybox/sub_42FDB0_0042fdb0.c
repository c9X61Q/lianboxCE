// busybox.exe @ 0x42fdb0 size=53

char __usercall sub_42FDB0@<al>(int a1@<eax>)
{
  int v2; // eax

  v2 = sub_4305E4();
  if ( v2 != 0 )
  {
    LOBYTE(v2) = 1;
  }
  else if ( *(_DWORD *)(a1 + 12) != 0 )
  {
    LOBYTE(v2) = sub_4305E4() == 0;
  }
  return v2;
}

