// busybox.exe @ 0x467de4 size=51

int __usercall sub_467DE4@<eax>(const char *a1@<eax>)
{
  int **v1; // eax

  v1 = (int **)sub_411EA4(a1);
  if ( *v1 == nullptr )
    return 1;
  ++*(_DWORD *)(dword_485FF0 + 56);
  *v1 = sub_431E98(*v1);
  sub_43B8DC();
  return 0;
}

