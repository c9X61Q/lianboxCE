// busybox.exe @ 0x452c80 size=26

int __usercall sub_452C80@<eax>(int result@<eax>, int a2@<edx>, int *a3@<ecx>)
{
  int v3; // edx

  if ( result == 0 || *a3 <= a2 )
  {
    v3 = a2 + (a2 >> 1) + 80;
    *a3 = v3;
    return sub_471600(a3, v3);
  }
  return result;
}

