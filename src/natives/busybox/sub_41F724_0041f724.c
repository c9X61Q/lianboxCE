// busybox.exe @ 0x41f724 size=67

int __usercall sub_41F724@<eax>(int a1@<eax>, int a2@<edx>)
{
  if ( a1 != a2 )
  {
    sub_41CBC4(a1);
    *(_DWORD *)a1 |= *(_DWORD *)a2 & 0xFFFF83FD;
    *(double *)(a1 + 8) = *(double *)(a2 + 8);
    if ( *(_DWORD *)(a2 + 16) != 0 )
      *(_DWORD *)(a1 + 16) = sub_47188C();
  }
  sub_437B2C();
  return a1;
}

