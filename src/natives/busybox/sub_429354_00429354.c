// busybox.exe @ 0x429354 size=77

int __usercall sub_429354@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // eax
  int v5; // ebx

  while ( 1 )
  {
    v4 = sub_42EE40(a1, 0, a2 + 1);
    v5 = v4;
    if ( v4 >= 0 )
      break;
    if ( *_errno() != 16 && *_errno() != 4 )
      return v5;
  }
  sub_41CB70(v4);
  return v5;
}

