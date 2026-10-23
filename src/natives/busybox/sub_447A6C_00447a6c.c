// busybox.exe @ 0x447a6c size=28

int __usercall sub_447A6C@<eax>(char *a1@<eax>)
{
  if ( a1 == "standard input" || *a1 == 45 && a1[1] == 0 )
    return 0;
  else
    return sub_447A60(a1, 0);
}

