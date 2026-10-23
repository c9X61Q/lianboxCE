// busybox.exe @ 0x446fe4 size=44

int __usercall sub_446FE4@<eax>(char *a1@<eax>)
{
  int v2; // ecx

  if ( sub_43C578(a1) == 0 )
    sub_415B40(v2, "Illegal number: %s", a1);
  return atoi(a1);
}

