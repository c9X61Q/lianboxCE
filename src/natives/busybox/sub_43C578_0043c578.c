// busybox.exe @ 0x43c578 size=25

int __usercall sub_43C578@<eax>(_BYTE *a1@<eax>)
{
  while ( (unsigned __int8)(*a1 - 48) <= 9u )
  {
    if ( *++a1 == 0 )
      return 1;
  }
  return 0;
}

