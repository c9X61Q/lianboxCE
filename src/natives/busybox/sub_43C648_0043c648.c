// busybox.exe @ 0x43c648 size=45

BOOL __usercall sub_43C648@<eax>(char *a1@<eax>)
{
  int v1; // edx
  char v2; // cl

  v1 = 0;
  v2 = *a1;
  do
  {
    ++v1;
    if ( (unsigned __int8)(v2 - 48) > 9u )
      break;
    v2 = a1[v1];
  }
  while ( v1 != 9 );
  return v2 == 0;
}

