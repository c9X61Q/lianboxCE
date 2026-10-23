// busybox.exe @ 0x438c28 size=69

int __usercall sub_438C28@<eax>(int a1@<edx>, int *a2@<ecx>, int a3@<ebx>, int a4)
{
  int v6; // edx
  int v7; // eax

  while ( 1 )
  {
    v6 = *a2;
    if ( *a2 == 0 )
      break;
    a2 += 2;
    sub_442554(*(a2 - 1), v6);
  }
  v7 = sub_45EF04(a3);
  sub_442554(v7, a1);
  return sub_45EF04(a4);
}

