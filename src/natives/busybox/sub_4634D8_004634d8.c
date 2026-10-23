// busybox.exe @ 0x4634d8 size=53

unsigned int __usercall sub_4634D8@<eax>(const char **EndPtr@<eax>)
{
  unsigned int result; // eax

  if ( (unsigned __int8)(**EndPtr - 48) > 9u || (result = strtoul(*EndPtr, (char **)EndPtr, 10)) == 0 )
    sub_418210("bad field specification");
  return result;
}

