// busybox.exe @ 0x446d28 size=78

int __usercall sub_446D28@<eax>(int a1@<eax>, CHAR *a2@<edx>, int a3@<ecx>)
{
  int v6; // ebx
  int v8; // [esp+4h] [ebp-14h]

  while ( 1 )
  {
    v6 = sub_45C560(a3, a2);
    if ( v6 >= 0 || *_errno() != 11 )
      break;
    LOWORD(v8) = 1;
    sub_45C508(-1, 1, a1, v8);
  }
  return v6;
}

