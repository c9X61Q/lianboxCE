// busybox.exe @ 0x471cac size=21

unsigned int __usercall sub_471CAC@<eax>(int a1@<eax>, void *a2@<edx>, unsigned int a3@<ecx>)
{
  int v4; // eax
  int v6; // [esp+0h] [ebp-4h]

  v4 = sub_467054(a1, a2, a3);
  if ( a3 != v4 )
    sub_470D44(v4, v6);
  return a3;
}

