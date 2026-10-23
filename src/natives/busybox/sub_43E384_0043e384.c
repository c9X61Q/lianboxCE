// busybox.exe @ 0x43e384 size=34

int __usercall sub_43E384@<eax>(int *a1@<eax>, int a2@<edx>)
{
  int result; // eax

  while ( *a1 != 0 )
    a1 = (int *)*a1;
  result = sub_4728CC();
  *a1 = result;
  *(_DWORD *)(result + 4) = a2;
  return result;
}

