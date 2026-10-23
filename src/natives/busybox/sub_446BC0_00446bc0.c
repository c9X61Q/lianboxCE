// busybox.exe @ 0x446bc0 size=19

int __usercall sub_446BC0@<eax>(int *a1@<eax>)
{
  int v1; // ecx
  _BYTE *v2; // edx

  v1 = *a1;
  do
    v2 = (_BYTE *)(*a1)++;
  while ( *v2 != 0 );
  return v1;
}

