// busybox.exe @ 0x45c610 size=76

int __usercall sub_45C610@<eax>(unsigned int a1@<ecx>, void *a2@<edx>, int a3@<eax>)
{
  int v6; // ebx

  while ( 1 )
  {
    v6 = sub_46F294(a3, a2, a1);
    if ( v6 >= 0 || *_errno() != 4 )
      break;
    *_errno() = 0;
  }
  return v6;
}

