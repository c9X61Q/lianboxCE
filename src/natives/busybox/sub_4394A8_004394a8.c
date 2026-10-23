// busybox.exe @ 0x4394a8 size=38

int __usercall sub_4394A8@<eax>(int *a1@<eax>)
{
  int v2; // eax

  while ( 1 )
  {
    v2 = *a1;
    if ( (*a1 & 0x2000) == 0 )
      break;
    a1 = (int *)a1[5];
  }
  if ( (v2 & 2) == 0 )
  {
    *a1 = v2 | 2;
    a1[5] = sub_4380CC();
  }
  return a1[5];
}

