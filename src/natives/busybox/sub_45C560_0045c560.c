// busybox.exe @ 0x45c560 size=76

int __usercall sub_45C560@<eax>(int a1@<ecx>, LPSTR lpMultiByteStr@<edx>, int a3@<eax>)
{
  int v6; // ebx

  while ( 1 )
  {
    v6 = sub_46F148(a3, lpMultiByteStr, a1);
    if ( v6 >= 0 || *_errno() != 4 )
      break;
    *_errno() = 0;
  }
  return v6;
}

